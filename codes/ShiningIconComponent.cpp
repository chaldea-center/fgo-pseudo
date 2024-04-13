void __fastcall ShiningIconComponent___ctor(ShiningIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ShiningIconComponent__Awake(ShiningIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *widget; // x0

  widget = (UnityEngine_Behaviour_o *)this->fields.widget;
  if ( !widget )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(widget, method);
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
    sub_B5D69C(widget, method);
  UnityEngine_Behaviour__set_enabled(widget, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShiningIconComponent__Set_33897340(ShiningIconComponent_o *this, bool isDisp, const MethodInfo *method)
{
  if ( isDisp )
    ShiningIconComponent__Set(this, (const MethodInfo *)isDisp);
  else
    ShiningIconComponent__Clear(this, (const MethodInfo *)isDisp);
}


void __fastcall ShiningIconComponent__Set_33897352(
        ShiningIconComponent_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Behaviour_o *widget; // x0
  struct UIWidget_o *v7; // x20
  __int64 v8; // x10

  if ( (byte_42ECF3A & 1) == 0 )
  {
    sub_B5D5C4(&UISprite_TypeInfo, (_DWORD)spriteName, (_DWORD)method, v3);
    byte_42ECF3A = 1;
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
    sub_B5D69C(widget, spriteName);
  }
LABEL_7:
  v7 = this->fields.widget;
  if ( v7 )
  {
    v8 = *(&UISprite_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v7->klass->_2.bitflags2 + 1) >= (unsigned int)v8
      && (UISprite_c *)v7->klass->_2.typeHierarchy[v8 - 1] == UISprite_TypeInfo )
    {
      UISprite__set_spriteName((UISprite_o *)v7, spriteName, 0LL);
      if ( spriteName )
        ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer))v7->klass->vtable._33_MakePixelPerfect.method)(
          v7,
          v7->klass->vtable._34_get_minWidth.methodPtr);
    }
  }
}