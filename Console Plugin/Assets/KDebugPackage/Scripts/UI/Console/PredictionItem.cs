using UnityEngine;

public class PredictionItem : MonoBehaviour
{
    private RectTransform rect = null;

    public RectTransform Rect
    {
        get
        {
            if (rect == null)
            {
                rect = GetComponent<RectTransform>();
            }

            return rect;
        }
    }
    public UnityEngine.UI.Image Image;
    public TMPro.TextMeshProUGUI Text;
    public Color BaseColor;
}
