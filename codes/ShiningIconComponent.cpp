void ShiningIconComponent___ctor(ShiningIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ShiningIconComponent__Awake(ShiningIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *widget; // x0

  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    sub_1C6BC60(0, method);
  UnityEngine_Behaviour__set_enabled(widget, 0, 0);
}


void ShiningIconComponent__Clear(ShiningIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *widget; // x0

  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    goto LABEL_6;
  if ( UnityEngine_Behaviour__get_enabled(widget, 0) )
  {
    widget = (UnityEngine_Behaviour_o *)this->fields.widget;
    if ( widget )
    {
      UnityEngine_Behaviour__set_enabled(widget, 0, 0);
      return;
    }
LABEL_6:
    sub_1C6BC60(widget, method);
  }
}


void ShiningIconComponent__Set(ShiningIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *widget; // x0

  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    goto LABEL_5;
  if ( UnityEngine_Behaviour__get_enabled(widget, 0) )
    return;
  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
LABEL_5:
    sub_1C6BC60(widget, method);
  UnityEngine_Behaviour__set_enabled(widget, 1, 0);
}


void ShiningIconComponent__Set_41250876(
        ShiningIconComponent_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *widget; // x0
  struct UIWidget_o *v6; // x20
  __int64 naturalAligment; // x10

  if ( (byte_4CB579F & 1) == 0 )
  {
    sub_1C6BA08(&UISprite_TypeInfo);
    byte_4CB579F = 1;
  }
  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    goto LABEL_13;
  if ( !UnityEngine_Behaviour__get_enabled(widget, 0) )
  {
    widget = (UnityEngine_Behaviour_o *)this->fields.widget;
    if ( widget )
    {
      UnityEngine_Behaviour__set_enabled(widget, 1, 0);
      goto LABEL_7;
    }
LABEL_13:
    sub_1C6BC60(widget, spriteName);
  }
LABEL_7:
  v6 = this->fields.widget;
  if ( v6 )
  {
    naturalAligment = UISprite_TypeInfo->_2.naturalAligment;
    if ( v6->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (UISprite_c *)v6->klass->_2.typeHierarchy[naturalAligment - 1] == UISprite_TypeInfo )
    {
      UISprite__set_spriteName((UISprite_o *)v6, spriteName, 0);
      if ( spriteName )
        ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
          v6,
          v6->klass->vtable._33_MakePixelPerfect.method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ShiningIconComponent__Set_41255820(ShiningIconComponent_o *this, bool isDisp, const MethodInfo *method)
{
  if ( isDisp )
    ShiningIconComponent__Set(this, (const MethodInfo *)isDisp);
  else
    ShiningIconComponent__Clear(this, (const MethodInfo *)isDisp);
}