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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v7; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  struct TweenScale_o **p_tScale; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Object_o *tScale; // x22
  struct TweenAlpha_o *v17; // x0
  struct TweenAlpha_o **p_tAlpha; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Object_o *tAlpha; // x21

  if ( (byte_40FE02A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FE02A = 1;
  }
  overSp = (UnityEngine_Component_o *)this->fields.overSp;
  if ( !overSp )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject(overSp, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  v7 = gameObject;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              gameObject,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  this->fields.tScale = (struct TweenScale_o *)Component_srcLineSprite;
  p_tScale = &this->fields.tScale;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tScale,
    (System_Int32_array **)Component_srcLineSprite,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  tScale = (UnityEngine_Object_o *)this->fields.tScale;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(tScale, 0LL, 0LL) )
  {
    if ( !*p_tScale )
      goto LABEL_18;
    (*p_tScale)->fields.duration = 2.0;
  }
  v17 = (struct TweenAlpha_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 v7,
                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  this->fields.tAlpha = v17;
  p_tAlpha = &this->fields.tAlpha;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tAlpha,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  tAlpha = (UnityEngine_Object_o *)this->fields.tAlpha;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(tAlpha, 0LL, 0LL) )
  {
    if ( *p_tAlpha )
    {
      (*p_tAlpha)->fields.duration = 2.0;
      goto LABEL_17;
    }
LABEL_18:
    sub_B170D4();
  }
LABEL_17:
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
  System_Action_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_B170D4();
  System_Action__Invoke(callbackFunc, 0LL);
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
  if ( (byte_40FE02C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, tweener);
    byte_40FE02C = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)tweener, 0LL, 0LL) )
  {
    if ( !tweener )
      sub_B170D4();
    UITweener__ResetToBeginning(tweener, 0LL);
    UITweener__PlayForward(tweener, 0LL);
  }
}


void __fastcall ScreenTouchInformationComponent__Setup(
        ScreenTouchInformationComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_Action_o **p_callbackFunc; // x0

  this->fields.callbackFunc = callback;
  p_callbackFunc = &this->fields.callbackFunc;
  *((_WORD *)p_callbackFunc + 4) = 256;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ScreenTouchInformationComponent__Update(
        ScreenTouchInformationComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *callbackFunc; // x0

  if ( (byte_40FE02B & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    byte_40FE02B = 1;
  }
  if ( this->fields.isExpand )
  {
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( CTouch__isTouchPush(0LL) && !this->fields.isOnClick )
    {
      callbackFunc = this->fields.callbackFunc;
      this->fields.isOnClick = 1;
      if ( !callbackFunc )
        sub_B170D4();
      System_Action__Invoke(callbackFunc, 0LL);
    }
  }
}