using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class SerializableColor
{
    public float[] _colorStore = new float[4] {1F, 1F, 1F, 1F};
    public Color Color
    {
        get => new Color(_colorStore[0], _colorStore[1], _colorStore[2], _colorStore[3]);
        set => _colorStore = new float[4]{ value.r, value.g, value.b, value.a  };
    }
 
    //makes this class usable as Color, Color normalColor = mySerializableColor;
    public static implicit operator Color( SerializableColor instance )
    {
        return instance.Color;
    }
 
    //makes this class assignable by Color, SerializableColor myColor = Color.white;
    public static implicit operator SerializableColor( Color color )
    {
        return new SerializableColor{ Color = color};
    }
}