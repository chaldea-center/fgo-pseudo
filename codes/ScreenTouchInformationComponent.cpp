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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Component_o *overSp; // x0
  UnityEngine_GameObject_o *v12; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  struct TweenScale_o **p_tScale; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_Object_o *tScale; // x22
  struct TweenAlpha_o *v22; // x0
  struct TweenAlpha_o **p_tAlpha; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Object_o *tAlpha; // x21

  if ( (byte_42ED0F5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42ED0F5 = 1;
  }
  overSp = (UnityEngine_Component_o *)this->fields.overSp;
  if ( !overSp )
    goto LABEL_18;
  overSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(overSp, 0LL);
  if ( !overSp )
    goto LABEL_18;
  v12 = (UnityEngine_GameObject_o *)overSp;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)overSp,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  this->fields.tScale = (struct TweenScale_o *)Component_srcLineSprite;
  p_tScale = &this->fields.tScale;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tScale,
    (System_Int32_array **)Component_srcLineSprite,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  tScale = (UnityEngine_Object_o *)this->fields.tScale;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  overSp = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(tScale, 0LL, 0LL);
  if ( ((unsigned __int8)overSp & 1) != 0 )
  {
    if ( !*p_tScale )
      goto LABEL_18;
    (*p_tScale)->fields.duration = 2.0;
  }
  v22 = (struct TweenAlpha_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 v12,
                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  this->fields.tAlpha = v22;
  p_tAlpha = &this->fields.tAlpha;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tAlpha,
    (System_Int32_array **)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  tAlpha = (UnityEngine_Object_o *)this->fields.tAlpha;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  overSp = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(tAlpha, 0LL, 0LL);
  if ( ((unsigned __int8)overSp & 1) != 0 )
  {
    if ( *p_tAlpha )
    {
      (*p_tAlpha)->fields.duration = 2.0;
      goto LABEL_17;
    }
LABEL_18:
    sub_B5D69C(overSp, method);
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
    sub_B5D69C(0LL, method);
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
  __int64 v3; // x3
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_42ED0F7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)tweener, (_DWORD)method, v3);
    byte_42ED0F7 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)tweener, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !tweener )
      sub_B5D69C(v5, v6);
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  System_Action_o *callbackFunc; // x0

  if ( (byte_42ED0F6 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED0F6 = 1;
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
        sub_B5D69C(0LL, v5);
      System_Action__Invoke(callbackFunc, 0LL);
    }
  }
}