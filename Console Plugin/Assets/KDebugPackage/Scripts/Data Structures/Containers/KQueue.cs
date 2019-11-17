using System;

namespace KDebugPackage.DataStructures.Containers
{
    /// <summary>
    /// Queue Implementation with Array Accessor allowing for looping.
    /// </summary>
    public class KQueue<T>
    {
        private static int s_defaultQueueElements = 8;

        private T[] _elements = null;
        private int _head = 0;
        private int _tail = 0;
        private bool _elementsPresent = false;

        public int Capacity => _elements.Length;

        public int Count
        {
            get
            {
                if (_head == _tail && _elementsPresent)
                {
                    return Capacity;
                }

                if (_head > _tail)
                {
                    return _tail + (Capacity - _head) - 1;
                }

                return _tail - _head;
            }
        }

        public T Front => _elements[_head];

        public T Back
        {
            get
            {
                int actualTail = _tail - 1;
                if (actualTail < 0)
                {
                    actualTail = Capacity - 1;
                }

                return _elements[actualTail];
            }
        }

        public T this[int key] => GetValue(key);

        public KQueue()
        {
            _elements = new T[s_defaultQueueElements];
        }

        public KQueue(int a_capacity)
        {
            _elements = new T[a_capacity];
        }

        public void Enqueue(T a_type)
        {
            if (Count + 1 >= _elements.Length)
            {
                Grow();
            }

            _elements[_tail] = a_type;
            _tail++;
            _elementsPresent = true;

            // Found new place 
            if (_tail >= _elements.Length)
            {
                _tail = 0;
            }
        }

        public T Dequeue()
        {
            // Dequeue
            T value = _elements[_head];
            _elements[_head] = default(T);
            _head++;

            if (_head == _tail)
            {
                _elementsPresent = false;
            }

            if (_head >= _elements.Length)
            {
                _head = 0;
            }

            return value;
        }

        private void Grow()
        {
            T[] newElements = new T[_elements.Length * 2]; // Increase length by two

            if (_head > _tail ||
                (_head == _tail &&
                 _head != 0)) // Start/End are split
            {
                // Head - Len
                int headDestination = 0;
                int headLen = _elements.Length - _head;

                // Copy Head - Len
                Array.Copy(_elements, _head, newElements, headDestination, headLen);

                // Copy 0 - Tail
                int tailDestination = headLen;
                int tailLen = _tail;
                Array.Copy(_elements, 0, newElements, tailDestination, tailLen);

                _head = 0;
                _tail = headLen + tailLen;
                if (_tail >= Capacity)
                {
                    _tail = 0;
                }
            }
            else
            {
                Array.Copy(_elements, _head, newElements, 0, _tail - _head);
            }

            _elements = newElements;
        }

        private T GetValue(int a_index)
        {
            int actualIndex = _head + a_index;

            if (_head > _tail &&
                actualIndex > _head)
            {
                actualIndex = actualIndex - _head;
            }

            return _elements[actualIndex];
        }
    }
}