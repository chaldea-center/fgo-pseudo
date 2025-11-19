void ScreenTouchInformationComponent___ctor(ScreenTouchInformationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScreenTouchInformationComponent__Awake(ScreenTouchInformationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *overSp; // x0
  UnityEngine_GameObject_o *v4; // x20
  Il2CppObject *Component_object; // x0
  struct TweenScale_o **p_tScale; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *tScale; // x22
  Il2CppObject *v10; // x0
  struct TweenAlpha_o **p_tAlpha; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *tAlpha; // x21

  if ( (byte_4CB2D14 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2D14 = 1;
  }
  overSp = (UnityEngine_Component_o *)this->fields.overSp;
  if ( !overSp )
    goto LABEL_16;
  overSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(overSp, 0);
  if ( !overSp )
    goto LABEL_16;
  v4 = (UnityEngine_GameObject_o *)overSp;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)overSp,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  this->fields.tScale = (struct TweenScale_o *)Component_object;
  p_tScale = &this->fields.tScale;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.tScale, (int32_t)Component_object, v7, v8);
  tScale = (UnityEngine_Object_o *)this->fields.tScale;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  overSp = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(tScale, 0, 0);
  if ( ((unsigned __int8)overSp & 1) != 0 )
  {
    if ( !*p_tScale )
      goto LABEL_16;
    (*p_tScale)->fields.duration = 2.0;
  }
  v10 = UnityEngine_GameObject__GetComponent_object_(
          v4,
          (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  this->fields.tAlpha = (struct TweenAlpha_o *)v10;
  p_tAlpha = &this->fields.tAlpha;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.tAlpha, (int32_t)v10, v12, v13);
  tAlpha = (UnityEngine_Object_o *)this->fields.tAlpha;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  overSp = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(tAlpha, 0, 0);
  if ( ((unsigned __int8)overSp & 1) != 0 )
  {
    if ( *p_tAlpha )
    {
      (*p_tAlpha)->fields.duration = 2.0;
      goto LABEL_15;
    }
LABEL_16:
    sub_1C6BC60(overSp, method);
  }
LABEL_15:
  *(_WORD *)&this->fields.isOnClick = 0;
}


UISprite_o *ScreenTouchInformationComponent__GetOverSprite(
        ScreenTouchInformationComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.overSp;
}


void ScreenTouchInformationComponent__OnClickDecide(ScreenTouchInformationComponent_o *this, const MethodInfo *method)
{
  struct System_Action_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1C6BC60(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
    callbackFunc->fields.method_code,
    callbackFunc->fields.method);
}


void ScreenTouchInformationComponent__ResetPlayAlpha(ScreenTouchInformationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScreenTouchInformationComponent__ResetPlayTweener(this, (UITweener_o *)this->fields.tAlpha, v2);
}


void ScreenTouchInformationComponent__ResetPlayScale(ScreenTouchInformationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScreenTouchInformationComponent__ResetPlayTweener(this, (UITweener_o *)this->fields.tScale, v2);
}


void ScreenTouchInformationComponent__ResetPlayTweener(
        ScreenTouchInformationComponent_o *this,
        UITweener_o *tweener,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4CB2D16 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2D16 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)tweener, 0, 0);
  if ( !v4 )
  {
    if ( !tweener )
      sub_1C6BC60(v4, v5);
    UITweener__ResetToBeginning(tweener, 0);
    UITweener__PlayForward(tweener, 0);
  }
}


void ScreenTouchInformationComponent__Setup(
        ScreenTouchInformationComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Action_o **p_callbackFunc; // x0

  this->fields.callbackFunc = callback;
  p_callbackFunc = &this->fields.callbackFunc;
  *((_WORD *)p_callbackFunc + 4) = 256;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_callbackFunc, (int32_t)callback, (int32_t)method, v3);
}


void ScreenTouchInformationComponent__Update(ScreenTouchInformationComponent_o *this, const MethodInfo *method)
{
  _BOOL8 isTouchPush; // x0
  __int64 v4; // x1
  struct System_Action_o *callbackFunc; // x8

  if ( (byte_4CB2D15 & 1) == 0 )
  {
    sub_1C6BA08(&CTouch_TypeInfo);
    byte_4CB2D15 = 1;
  }
  if ( this->fields.isExpand )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    isTouchPush = CTouch__isTouchPush(0);
    if ( isTouchPush && !this->fields.isOnClick )
    {
      callbackFunc = this->fields.callbackFunc;
      this->fields.isOnClick = 1;
      if ( !callbackFunc )
        sub_1C6BC60(isTouchPush, v4);
      ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        callbackFunc->fields.method);
    }
  }
}