void __fastcall ScreenTouchInformationComponent___ctor(
        ScreenTouchInformationComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScreenTouchInformationComponent__Awake(
        ScreenTouchInformationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *overSp; // x0
  UnityEngine_GameObject_o *v6; // x20
  Il2CppObject *Component_object; // x0
  struct TweenScale_o **p_tScale; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_Object_o *tScale; // x22
  Il2CppObject *v12; // x0
  struct TweenAlpha_o **p_tAlpha; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *tAlpha; // x21

  if ( (byte_4B19005 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, method);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    byte_4B19005 = 1;
  }
  overSp = (UnityEngine_Component_o *)this->fields.overSp;
  if ( !overSp )
    goto LABEL_16;
  overSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(overSp, 0LL);
  if ( !overSp )
    goto LABEL_16;
  v6 = (UnityEngine_GameObject_o *)overSp;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)overSp,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  this->fields.tScale = (struct TweenScale_o *)Component_object;
  p_tScale = &this->fields.tScale;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.tScale, (int32_t)Component_object, v9, v10);
  tScale = (UnityEngine_Object_o *)this->fields.tScale;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  overSp = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(tScale, 0LL, 0LL);
  if ( ((unsigned __int8)overSp & 1) != 0 )
  {
    if ( !*p_tScale )
      goto LABEL_16;
    (*p_tScale)->fields.duration = 2.0;
  }
  v12 = UnityEngine_GameObject__GetComponent_object_(
          v6,
          (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  this->fields.tAlpha = (struct TweenAlpha_o *)v12;
  p_tAlpha = &this->fields.tAlpha;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.tAlpha, (int32_t)v12, v14, v15);
  tAlpha = (UnityEngine_Object_o *)this->fields.tAlpha;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  overSp = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(tAlpha, 0LL, 0LL);
  if ( ((unsigned __int8)overSp & 1) != 0 )
  {
    if ( *p_tAlpha )
    {
      (*p_tAlpha)->fields.duration = 2.0;
      goto LABEL_15;
    }
LABEL_16:
    sub_1BCB254(overSp, method);
  }
LABEL_15:
  *(_WORD *)&this->fields.isOnClick = 0;
}


UISprite_o *__fastcall ScreenTouchInformationComponent__GetOverSprite(
        ScreenTouchInformationComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.overSp;
}


void __fastcall ScreenTouchInformationComponent__OnClickDecide(
        ScreenTouchInformationComponent_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1BCB254(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
    callbackFunc->fields.original_method_info,
    *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall ScreenTouchInformationComponent__ResetPlayAlpha(
        ScreenTouchInformationComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScreenTouchInformationComponent__ResetPlayTweener(this, (UITweener_o *)this->fields.tAlpha, v2);
}


void __fastcall ScreenTouchInformationComponent__ResetPlayScale(
        ScreenTouchInformationComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScreenTouchInformationComponent__ResetPlayTweener(this, (UITweener_o *)this->fields.tScale, v2);
}


void __fastcall ScreenTouchInformationComponent__ResetPlayTweener(
        ScreenTouchInformationComponent_o *this,
        UITweener_o *tweener,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4B19007 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, tweener);
    byte_4B19007 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)tweener, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !tweener )
      sub_1BCB254(v4, v5);
    UITweener__ResetToBeginning(tweener, 0LL);
    UITweener__PlayForward(tweener, 0LL);
  }
}


void __fastcall ScreenTouchInformationComponent__Setup(
        ScreenTouchInformationComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Action_o **p_callbackFunc; // x0

  this->fields.callbackFunc = callback;
  p_callbackFunc = &this->fields.callbackFunc;
  *((_WORD *)p_callbackFunc + 4) = 256;
  sub_1BCAF9C((CGThumbnailListItem_o *)p_callbackFunc, (int32_t)callback, (int32_t)method, v3);
}


void __fastcall ScreenTouchInformationComponent__Update(
        ScreenTouchInformationComponent_o *this,
        const MethodInfo *method)
{
  _BOOL8 isTouchPush; // x0
  __int64 v4; // x1
  struct System_Action_o *callbackFunc; // x8

  if ( (byte_4B19006 & 1) == 0 )
  {
    sub_1BCAFF8(&CTouch_TypeInfo, method);
    byte_4B19006 = 1;
  }
  if ( this->fields.isExpand )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    isTouchPush = CTouch__isTouchPush(0LL);
    if ( isTouchPush && !this->fields.isOnClick )
    {
      callbackFunc = this->fields.callbackFunc;
      this->fields.isOnClick = 1;
      if ( !callbackFunc )
        sub_1BCB254(isTouchPush, v4);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
  }
}