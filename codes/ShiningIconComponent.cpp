void __fastcall ShiningIconComponent___ctor(ShiningIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ShiningIconComponent__Awake(ShiningIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *widget; // x0

  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    sub_1B86614(0LL, method);
  UnityEngine_Behaviour__set_enabled(widget, 0, 0LL);
}


void __fastcall ShiningIconComponent__Clear(ShiningIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *widget; // x0

  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    goto LABEL_6;
  if ( UnityEngine_Behaviour__get_enabled(widget, 0LL) )
  {
    widget = (UnityEngine_Behaviour_o *)this->fields.widget;
    if ( widget )
    {
      UnityEngine_Behaviour__set_enabled(widget, 0, 0LL);
      return;
    }
LABEL_6:
    sub_1B86614(widget, method);
  }
}


// attributes: thunk
void __fastcall ShiningIconComponent__OnDestroy(ShiningIconComponent_o *this, const MethodInfo *method)
{
  ShiningIconComponent__Clear(this, method);
}


void __fastcall ShiningIconComponent__Set(ShiningIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *widget; // x0

  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    goto LABEL_5;
  if ( UnityEngine_Behaviour__get_enabled(widget, 0LL) )
    return;
  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
LABEL_5:
    sub_1B86614(widget, method);
  UnityEngine_Behaviour__set_enabled(widget, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShiningIconComponent__Set_39191784(ShiningIconComponent_o *this, bool isDisp, const MethodInfo *method)
{
  if ( isDisp )
    ShiningIconComponent__Set(this, (const MethodInfo *)isDisp);
  else
    ShiningIconComponent__Clear(this, (const MethodInfo *)isDisp);
}


void __fastcall ShiningIconComponent__Set_39191796(
        ShiningIconComponent_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *widget; // x0
  struct UIWidget_o *v6; // x20
  __int64 methodPtr_low; // x10

  if ( (byte_4A4D9E8 & 1) == 0 )
  {
    sub_1B863B8(&UISprite_TypeInfo, spriteName);
    byte_4A4D9E8 = 1;
  }
  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    goto LABEL_13;
  if ( !UnityEngine_Behaviour__get_enabled(widget, 0LL) )
  {
    widget = (UnityEngine_Behaviour_o *)this->fields.widget;
    if ( widget )
    {
      UnityEngine_Behaviour__set_enabled(widget, 1, 0LL);
      goto LABEL_7;
    }
LABEL_13:
    sub_1B86614(widget, spriteName);
  }
LABEL_7:
  v6 = this->fields.widget;
  if ( v6 )
  {
    methodPtr_low = LOBYTE(UISprite_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v6->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (UISprite_c *)v6->klass->_2.typeHierarchy[methodPtr_low - 1] == UISprite_TypeInfo )
    {
      UISprite__set_spriteName((UISprite_o *)v6, spriteName, 0LL);
      if ( spriteName )
        ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
          v6,
          v6->klass->vtable._34_get_minWidth.methodPtr);
    }
  }
}