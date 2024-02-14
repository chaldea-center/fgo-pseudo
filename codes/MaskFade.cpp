void __fastcall MaskFade___ctor(MaskFade_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MaskFade__EndFadein(MaskFade_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x19
  System_Action_o *v13; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4212A2B & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TweenColor___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4212A2B = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_15;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      maskSprite,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)maskSprite & 1) != 0 )
  {
    if ( !Component_WebViewObject )
      goto LABEL_15;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0, 0LL);
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  this->fields.maskKind = 0;
  if ( !maskSprite
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))maskSprite->klass[1]._1.castClass)(
          maskSprite,
          maskSprite->klass[1]._1.declaringType,
          0.0),
        (maskSprite = (UnityEngine_Component_o *)this->fields.colliderBase) == 0LL) )
  {
LABEL_15:
    sub_B0D97C(maskSprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v13 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields.adjustHeight) = 0;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B0D840(p_callbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
    System_Action__Invoke(v13, 0LL);
  }
}


void __fastcall MaskFade__EndFadeout(MaskFade_o *this, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x19
  System_Action_o *v11; // x20
  struct System_Action_o *callbackFunc; // t1

  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_B0D97C(0LL);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))maskSprite->klass->vtable._8_set_alpha.method)(
    maskSprite,
    maskSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    1.0);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v11 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields.adjustHeight) = 0;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B0D840(p_callbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v11, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaskFade__FadeChangeColor(
        MaskFade_o *this,
        int32_t kind,
        float duration,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Component_o *maskSprite; // x0
  WebViewObject_o *Component_WebViewObject; // x22
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s3
  float v22; // s9
  float v23; // s10
  float v24; // s11
  float v25; // s12
  float v26; // s4
  float v27; // s5
  float v28; // s6
  float v29; // s7
  struct UISprite_o *v30; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_Object_o *v39; // x20
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  const MethodInfo *v47; // x1
  MethodInfo v48; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o mColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v52; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4212A29 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TweenColor___, *(_QWORD *)&kind);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_5976/*"EndFadeout"*/, v14);
    byte_4212A29 = 1;
  }
  if ( this->fields.isExecuteMask )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_31;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                maskSprite,
                                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    maskSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)Component_WebViewObject,
                                              0LL,
                                              0LL);
    if ( ((unsigned __int8)maskSprite & 1) != 0 )
    {
      if ( !Component_WebViewObject )
        goto LABEL_31;
      if ( *((float *)&Component_WebViewObject[1].fields.onError + 1) == 0.0 )
      {
        if ( callback )
          System_Action__Invoke(callback, 0LL);
        return 0;
      }
    }
  }
  this->fields.callbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  if ( kind == 2 )
  {
    *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_white(0LL);
  }
  else
  {
    if ( kind != 1 )
      return 0;
    *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_black(0LL);
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.colliderBase;
  v22 = v17;
  v23 = v18;
  v24 = v19;
  v25 = v20;
  this->fields.maskKind = kind;
  if ( !maskSprite )
LABEL_31:
    sub_B0D97C(maskSprite);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
  if ( duration <= 0.0 )
    goto LABEL_28;
  v30 = this->fields.maskSprite;
  if ( !v30 )
    goto LABEL_31;
  mColor = v30->fields.mColor;
  v48.methodPointer = 0LL;
  v48.invoker_method = 0LL;
  UnityEngine_Color___ctor(mColor, v26, v27, v28, v29, &v48);
  *(_QWORD *)&v50.fields.r = v48.methodPointer;
  *(_QWORD *)&v50.fields.b = v48.invoker_method;
  UIWidget__set_color((UIWidget_o *)v30, v50, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  v52.fields.r = v22;
  v52.fields.g = v23;
  v52.fields.b = v24;
  v52.fields.a = v25;
  v32 = (UnityEngine_Object_o *)TweenColor__Begin(gameObject, duration, v52, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
  {
LABEL_28:
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( maskSprite )
    {
      v51.fields.r = v22;
      v51.fields.g = v23;
      v51.fields.b = v24;
      v51.fields.a = v25;
      UIWidget__set_color((UIWidget_o *)maskSprite, v51, 0LL);
      MaskFade__EndFadeout(this, v47);
      return 1;
    }
    goto LABEL_31;
  }
  this->fields.isExecuteMask = 1;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v32 )
    goto LABEL_31;
  v32[3].klass = (UnityEngine_Object_c *)maskSprite;
  v39 = v32 + 3;
  sub_B0D840((BattleServantConfConponent_o *)v39, (System_Int32_array **)maskSprite, v33, v34, v35, v36, v37, v38);
  v40 = (System_Int32_array **)StringLiteral_5976/*"EndFadeout"*/;
  v39->monitor = (void *)StringLiteral_5976/*"EndFadeout"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v39->monitor, v40, v41, v42, v43, v44, v45, v46);
  return 1;
}


bool __fastcall MaskFade__Fadein(MaskFade_o *this, float duration, System_Action_o *callback, const MethodInfo *method)
{
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  void *maskSprite; // x0
  WebViewObject_o *Component_WebViewObject; // x21
  bool result; // w0
  const MethodInfo *v17; // x1
  float v18; // s9
  float v19; // s10
  float v20; // s11
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Object_o *v29; // x20
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_Color_o v37; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4212A2A & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TweenColor___, callback);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_5975/*"EndFadein"*/, v13);
    byte_4212A2A = 1;
  }
  if ( !this->fields.isExecuteMask )
    goto LABEL_14;
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_23;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)maskSprite,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  maskSprite = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)maskSprite & 1) == 0 )
    goto LABEL_14;
  if ( !Component_WebViewObject )
    goto LABEL_23;
  if ( *((float *)&Component_WebViewObject[1].fields.onError + 1) != 0.0 )
  {
LABEL_14:
    this->fields.callbackFunc = callback;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7,
      v8);
    this->fields.maskKind = 0;
    if ( duration > 0.0 )
    {
      maskSprite = this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_23;
      v18 = *((float *)maskSprite + 35);
      v19 = *((float *)maskSprite + 36);
      v20 = *((float *)maskSprite + 37);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
      v37.fields.a = 0.0;
      v37.fields.r = v18;
      v37.fields.g = v19;
      v37.fields.b = v20;
      v22 = (UnityEngine_Object_o *)TweenColor__Begin(gameObject, duration, v37, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
      {
        maskSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( v22 )
        {
          v22[3].klass = (UnityEngine_Object_c *)maskSprite;
          v29 = v22 + 3;
          sub_B0D840(
            (BattleServantConfConponent_o *)v29,
            (System_Int32_array **)maskSprite,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28);
          v30 = (System_Int32_array **)StringLiteral_5975/*"EndFadein"*/;
          v29->monitor = (void *)StringLiteral_5975/*"EndFadein"*/;
          sub_B0D840((BattleServantConfConponent_o *)&v29->monitor, v30, v31, v32, v33, v34, v35, v36);
          result = 1;
          this->fields.isExecuteMask = 1;
          return result;
        }
LABEL_23:
        sub_B0D97C(maskSprite);
      }
    }
    MaskFade__EndFadein(this, v17);
    return 1;
  }
  if ( callback )
    System_Action__Invoke(callback, 0LL);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaskFade__Fadeout(
        MaskFade_o *this,
        int32_t kind,
        float duration,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Component_o *maskSprite; // x0
  WebViewObject_o *Component_WebViewObject; // x22
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s3
  float v22; // s9
  float v23; // s10
  float v24; // s11
  float v25; // s12
  float v26; // s4
  float v27; // s5
  float v28; // s6
  float v29; // s7
  UIWidget_o *v30; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_Object_o *v39; // x20
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  const MethodInfo *v47; // x1
  MethodInfo v48; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v52; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4212A28 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TweenColor___, *(_QWORD *)&kind);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_5976/*"EndFadeout"*/, v14);
    byte_4212A28 = 1;
  }
  if ( this->fields.isExecuteMask )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_31;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                maskSprite,
                                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    maskSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)Component_WebViewObject,
                                              0LL,
                                              0LL);
    if ( ((unsigned __int8)maskSprite & 1) != 0 )
    {
      if ( !Component_WebViewObject )
        goto LABEL_31;
      if ( *((float *)&Component_WebViewObject[1].fields.onError + 1) == 1.0 )
      {
        if ( callback )
          System_Action__Invoke(callback, 0LL);
        return 0;
      }
    }
  }
  this->fields.callbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  if ( kind == 2 )
  {
    *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_white(0LL);
  }
  else
  {
    if ( kind != 1 )
      return 0;
    *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_black(0LL);
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.colliderBase;
  v22 = v17;
  v23 = v18;
  v24 = v19;
  v25 = v20;
  this->fields.maskKind = kind;
  if ( !maskSprite )
LABEL_31:
    sub_B0D97C(maskSprite);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
  if ( duration <= 0.0 )
    goto LABEL_28;
  v30 = (UIWidget_o *)this->fields.maskSprite;
  if ( !v30 )
    goto LABEL_31;
  v49.fields.a = v30->fields.mColor.fields.a;
  v49.fields.r = v22;
  v49.fields.g = v23;
  v49.fields.b = v24;
  v48.methodPointer = 0LL;
  v48.invoker_method = 0LL;
  UnityEngine_Color___ctor(v49, v26, v27, v28, v29, &v48);
  *(_QWORD *)&v50.fields.r = v48.methodPointer;
  *(_QWORD *)&v50.fields.b = v48.invoker_method;
  UIWidget__set_color(v30, v50, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  v52.fields.r = v22;
  v52.fields.g = v23;
  v52.fields.b = v24;
  v52.fields.a = v25;
  v32 = (UnityEngine_Object_o *)TweenColor__Begin(gameObject, duration, v52, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
  {
LABEL_28:
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( maskSprite )
    {
      v51.fields.r = v22;
      v51.fields.g = v23;
      v51.fields.b = v24;
      v51.fields.a = v25;
      UIWidget__set_color((UIWidget_o *)maskSprite, v51, 0LL);
      MaskFade__EndFadeout(this, v47);
      return 1;
    }
    goto LABEL_31;
  }
  this->fields.isExecuteMask = 1;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v32 )
    goto LABEL_31;
  v32[3].klass = (UnityEngine_Object_c *)maskSprite;
  v39 = v32 + 3;
  sub_B0D840((BattleServantConfConponent_o *)v39, (System_Int32_array **)maskSprite, v33, v34, v35, v36, v37, v38);
  v40 = (System_Int32_array **)StringLiteral_5976/*"EndFadeout"*/;
  v39->monitor = (void *)StringLiteral_5976/*"EndFadeout"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v39->monitor, v40, v41, v42, v43, v44, v45, v46);
  return 1;
}


int32_t __fastcall MaskFade__GetFadeoutKind(MaskFade_o *this, const MethodInfo *method)
{
  if ( this->fields.isExecuteMask )
    return 0;
  else
    return this->fields.maskKind;
}


void __fastcall MaskFade__Init(MaskFade_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *maskSprite; // x0
  WebViewObject_o *Component_WebViewObject; // x20

  if ( (byte_4212A27 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TweenColor___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4212A27 = 1;
  }
  if ( this->fields.isExecuteMask )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_16;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                maskSprite,
                                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    maskSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)Component_WebViewObject,
                                              0LL,
                                              0LL);
    if ( ((unsigned __int8)maskSprite & 1) != 0 )
    {
      if ( !Component_WebViewObject || (maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite) == 0LL )
LABEL_16:
        sub_B0D97C(maskSprite);
      UIWidget__set_color(
        (UIWidget_o *)maskSprite,
        *(UnityEngine_Color_o *)&Component_WebViewObject[1].fields.onJS,
        0LL);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0, 0LL);
    }
    this->fields.isExecuteMask = 0;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  this->fields.maskKind = 0;
  if ( !maskSprite )
    goto LABEL_16;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))maskSprite->klass[1]._1.castClass)(
    maskSprite,
    maskSprite->klass[1]._1.declaringType,
    0.0);
  maskSprite = (UnityEngine_Component_o *)this->fields.colliderBase;
  if ( !maskSprite )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
}


bool __fastcall MaskFade__IsBusy(MaskFade_o *this, const MethodInfo *method)
{
  return this->fields.isExecuteMask;
}


bool __fastcall MaskFade__IsDisp(MaskFade_o *this, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x0

  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_B0D97C(0LL);
  return ((float (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))maskSprite->klass->vtable._7_get_alpha.method)(
           maskSprite,
           maskSprite->klass->vtable._8_set_alpha.methodPtr) > 0.0;
}


bool __fastcall MaskFade__IsOnTop(MaskFade_o *this, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x0

  if ( this->fields.isExecuteMask )
    return 0;
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_B0D97C(0LL);
  return ((float (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))maskSprite->klass->vtable._7_get_alpha.method)(
           maskSprite,
           maskSprite->klass->vtable._8_set_alpha.methodPtr) >= 1.0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaskFade__SetInitColor(MaskFade_o *this, int32_t kind, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x8
  MaskFade_o *v4; // x19
  float r; // s0
  float g; // s1
  float b; // s2
  int32_t maskKind; // s3

  maskSprite = this->fields.maskSprite;
  if ( !maskSprite
    || ((v4 = this, kind == 2)
      ? COERCE_FLOAT(*(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL))
      : kind != 1
      ? (r = maskSprite->fields.mColor.fields.r,
         g = maskSprite->fields.mColor.fields.g,
         b = maskSprite->fields.mColor.fields.b)
      : COERCE_FLOAT(*(UnityEngine_Color_o *)&r = UnityEngine_Color__get_black(0LL)),
        (this = (MaskFade_o *)v4->fields.maskSprite) == 0LL) )
  {
    sub_B0D97C(this);
  }
  maskKind = this[2].fields.maskKind;
  UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&r, 0LL);
}


void __fastcall MaskFade__SetMaskCollider(MaskFade_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_GameObject_o *colliderBase; // x0

  colliderBase = this->fields.colliderBase;
  if ( !colliderBase )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(colliderBase, isEnable, 0LL);
}


int32_t __fastcall MaskFade__get_Depth(MaskFade_o *this, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x8

  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_B0D97C(this);
  return maskSprite->fields.mDepth;
}


void __fastcall MaskFade__set_Depth(MaskFade_o *this, int32_t value, const MethodInfo *method)
{
  UIWidget_o *maskSprite; // x0

  maskSprite = (UIWidget_o *)this->fields.maskSprite;
  if ( !maskSprite )
    sub_B0D97C(0LL);
  UIWidget__set_depth(maskSprite, value, 0LL);
}