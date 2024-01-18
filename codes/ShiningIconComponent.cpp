void __fastcall ShiningIconComponent___ctor(ShiningIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ShiningIconComponent__Awake(ShiningIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *widget; // x0

  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    sub_B2C434(0LL, method);
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
    sub_B2C434(widget, method);
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
    sub_B2C434(widget, method);
  UnityEngine_Behaviour__set_enabled(widget, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShiningIconComponent__Set_32979912(ShiningIconComponent_o *this, bool isDisp, const MethodInfo *method)
{
  if ( isDisp )
    ShiningIconComponent__Set(this, (const MethodInfo *)isDisp);
  else
    ShiningIconComponent__Clear(this, (const MethodInfo *)isDisp);
}


void __fastcall ShiningIconComponent__Set_32979924(
        ShiningIconComponent_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *widget; // x0
  struct UIWidget_o *v6; // x20
  __int64 v7; // x10

  if ( (byte_418BC88 & 1) == 0 )
  {
    sub_B2C35C(&UISprite_TypeInfo, spriteName);
    byte_418BC88 = 1;
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
    sub_B2C434(widget, spriteName);
  }
LABEL_7:
  v6 = this->fields.widget;
  if ( v6 )
  {
    v7 = *(&UISprite_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v6->klass->_2.bitflags2 + 1) >= (unsigned int)v7
      && (UISprite_c *)v6->klass->_2.typeHierarchy[v7 - 1] == UISprite_TypeInfo )
    {
      UISprite__set_spriteName((UISprite_o *)v6, spriteName, 0LL);
      if ( spriteName )
        ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
          v6,
          v6->klass->vtable._34_get_minWidth.methodPtr);
    }
  }
}