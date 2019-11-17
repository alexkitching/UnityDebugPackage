namespace KDebugPackage.DebugDisplay
{
    using Data;

    public class DebugDisplayManagerImpl
    {
        private readonly DebugTabbedDisplay _primaryDisplay = new DebugTabbedDisplay();
        private readonly IDisplayHandler _handler = null;

        public int MaxDisplays { get; }

        public DebugDisplayManagerImpl(DisplayData a_data, IDisplayHandler a_handler)
        {
            MaxDisplays = a_data.MaxDisplays;
            _handler = a_handler;
        }

        public void OnAwake()
        {
            _handler.OnAwake();
            _handler.AddDisplay(_primaryDisplay);
        }

        public void OnUpdate()
        {
            _handler.OnUpdate();
        }

        public void OnGUI()
        {
            _handler.OnGUI();
        }

        public T RegisterDisplay<T>() where T : DebugDisplayBase, new()
        {
            T type = new T();
            DebugDisplayBase display = type;

            _handler.AddDisplay(display);

            return type;
        }

        public void RegisterDisplay(DebugDisplayBase a_display)
        {
            _handler.AddDisplay(a_display);
        }

        public T RegisterDisplayAsPrimaryTab<T>() where T : DebugDisplayBase, new()
        {
            T type = new T();
            DebugDisplayBase display = type;

            _primaryDisplay.AddTab(display);

            return type;
        }

        public void RegisterDisplayAsPrimaryTab(DebugDisplayBase a_display)
        {
            _primaryDisplay.AddTab(a_display);
        }

        public void CyclePrimaryTab(int a_dir)
        {
            if (a_dir > 0)
            {
                _primaryDisplay.NextTab();
            }
            else if (a_dir < 0)
            {
                _primaryDisplay.PreviousTab();
            }
        }
    }
}
    