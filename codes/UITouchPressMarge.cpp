void UITouchPressMarge___ctor(UITouchPressMarge_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void UITouchPressMarge__OnHover(UITouchPressMarge_o *this, bool isSelect, const MethodInfo *method)
{
  UITouchPress_o *margeComponent; // x0
  const MethodInfo *v6; // x2

  margeComponent = this->fields.margeComponent;
  if ( !margeComponent )
    goto LABEL_9;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)margeComponent, 0) || this->fields.isPress )
  {
    if ( !isSelect )
      this->fields.isPress = 0;
    margeComponent = this->fields.margeComponent;
    if ( margeComponent )
    {
      UITouchPress__OnHover(margeComponent, isSelect, v6);
      return;
    }
LABEL_9:
    sub_1C6BC60(margeComponent, isSelect);
  }
}


// local variable allocation has failed, the output may be wrong!
void UITouchPressMarge__OnPress(UITouchPressMarge_o *this, bool isPressed, const MethodInfo *method)
{
  UITouchPress_o *margeComponent; // x0
  const MethodInfo *v6; // x2

  margeComponent = this->fields.margeComponent;
  if ( !margeComponent )
    goto LABEL_7;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)margeComponent, 0) || this->fields.isPress )
  {
    margeComponent = this->fields.margeComponent;
    this->fields.isPress = isPressed;
    if ( margeComponent )
    {
      UITouchPress__OnPress(margeComponent, isPressed, v6);
      return;
    }
LABEL_7:
    sub_1C6BC60(margeComponent, isPressed);
  }
}