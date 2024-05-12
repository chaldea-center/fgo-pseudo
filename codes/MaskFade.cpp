void __fastcall MaskFade___ctor(MaskFade_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MaskFade__EndFadein(MaskFade_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_438E5CE & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_TweenColor___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E5CE = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_15;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      maskSprite,
                                                      (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
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
    sub_B7769C(maskSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v12 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields.adjustHeight) = 0;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B77560(p_callbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
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
    sub_B7769C(0LL, method);
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
    sub_B77560(p_callbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
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
  UnityEngine_Component_o *maskSprite; // x0
  WebViewObject_o *Component_WebViewObject; // x22
  float v15; // s0
  float v16; // s1
  float v17; // s2
  float v18; // s3
  float v20; // s9
  float v21; // s10
  float v22; // s11
  float v23; // s12
  float v24; // s4
  float v25; // s5
  float v26; // s6
  float v27; // s7
  struct UISprite_o *v28; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_Object_o *v37; // x20
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  const MethodInfo *v45; // x1
  MethodInfo v46; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o mColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v50; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_438E5CC & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_TweenColor___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_6107/*"EndFadeout"*/);
    byte_438E5CC = 1;
  }
  if ( this->fields.isExecuteMask )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_31;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                maskSprite,
                                (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
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
  sub_B77560(
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
    *(UnityEngine_Color_o *)&v15 = UnityEngine_Color__get_white(0LL);
  }
  else
  {
    if ( kind != 1 )
      return 0;
    *(UnityEngine_Color_o *)&v15 = UnityEngine_Color__get_black(0LL);
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.colliderBase;
  v20 = v15;
  v21 = v16;
  v22 = v17;
  v23 = v18;
  this->fields.maskKind = kind;
  if ( !maskSprite )
LABEL_31:
    sub_B7769C(maskSprite, *(_QWORD *)&kind);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
  if ( duration <= 0.0 )
    goto LABEL_28;
  v28 = this->fields.maskSprite;
  if ( !v28 )
    goto LABEL_31;
  mColor = v28->fields.mColor;
  v46.methodPointer = 0LL;
  v46.invoker_method = 0LL;
  UnityEngine_Color___ctor(mColor, v24, v25, v26, v27, &v46);
  *(_QWORD *)&v48.fields.r = v46.methodPointer;
  *(_QWORD *)&v48.fields.b = v46.invoker_method;
  UIWidget__set_color((UIWidget_o *)v28, v48, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  v50.fields.r = v20;
  v50.fields.g = v21;
  v50.fields.b = v22;
  v50.fields.a = v23;
  v30 = (UnityEngine_Object_o *)TweenColor__Begin(gameObject, duration, v50, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
  {
LABEL_28:
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( maskSprite )
    {
      v49.fields.r = v20;
      v49.fields.g = v21;
      v49.fields.b = v22;
      v49.fields.a = v23;
      UIWidget__set_color((UIWidget_o *)maskSprite, v49, 0LL);
      MaskFade__EndFadeout(this, v45);
      return 1;
    }
    goto LABEL_31;
  }
  this->fields.isExecuteMask = 1;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v30 )
    goto LABEL_31;
  v30[3].klass = (UnityEngine_Object_c *)maskSprite;
  v37 = v30 + 3;
  sub_B77560((BattleServantConfConponent_o *)v37, (System_Int32_array **)maskSprite, v31, v32, v33, v34, v35, v36);
  v38 = (System_Int32_array **)StringLiteral_6107/*"EndFadeout"*/;
  v37->monitor = (void *)StringLiteral_6107/*"EndFadeout"*/;
  sub_B77560((BattleServantConfConponent_o *)&v37->monitor, v38, v39, v40, v41, v42, v43, v44);
  return 1;
}


bool __fastcall MaskFade__Fadein(MaskFade_o *this, float duration, System_Action_o *callback, const MethodInfo *method)
{
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  void *maskSprite; // x0
  WebViewObject_o *Component_WebViewObject; // x21
  bool result; // w0
  float v15; // s9
  float v16; // s10
  float v17; // s11
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Object_o *v26; // x20
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Color_o v34; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_438E5CD & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_TweenColor___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_6106/*"EndFadein"*/);
    byte_438E5CD = 1;
  }
  if ( !this->fields.isExecuteMask )
    goto LABEL_14;
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_23;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)maskSprite,
                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
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
    sub_B77560(
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
      v15 = *((float *)maskSprite + 35);
      v16 = *((float *)maskSprite + 36);
      v17 = *((float *)maskSprite + 37);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
      v34.fields.a = 0.0;
      v34.fields.r = v15;
      v34.fields.g = v16;
      v34.fields.b = v17;
      v19 = (UnityEngine_Object_o *)TweenColor__Begin(gameObject, duration, v34, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
      {
        maskSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( v19 )
        {
          v19[3].klass = (UnityEngine_Object_c *)maskSprite;
          v26 = v19 + 3;
          sub_B77560(
            (BattleServantConfConponent_o *)v26,
            (System_Int32_array **)maskSprite,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          v27 = (System_Int32_array **)StringLiteral_6106/*"EndFadein"*/;
          v26->monitor = (void *)StringLiteral_6106/*"EndFadein"*/;
          sub_B77560((BattleServantConfConponent_o *)&v26->monitor, v27, v28, v29, v30, v31, v32, v33);
          result = 1;
          this->fields.isExecuteMask = 1;
          return result;
        }
LABEL_23:
        sub_B7769C(maskSprite, callback);
      }
    }
    MaskFade__EndFadein(this, (const MethodInfo *)callback);
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
  UnityEngine_Component_o *maskSprite; // x0
  WebViewObject_o *Component_WebViewObject; // x22
  float v15; // s0
  float v16; // s1
  float v17; // s2
  float v18; // s3
  float v20; // s9
  float v21; // s10
  float v22; // s11
  float v23; // s12
  float v24; // s4
  float v25; // s5
  float v26; // s6
  float v27; // s7
  UIWidget_o *v28; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_Object_o *v37; // x20
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  const MethodInfo *v45; // x1
  MethodInfo v46; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v50; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_438E5CB & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_TweenColor___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_6107/*"EndFadeout"*/);
    byte_438E5CB = 1;
  }
  if ( this->fields.isExecuteMask )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_31;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                maskSprite,
                                (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
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
  sub_B77560(
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
    *(UnityEngine_Color_o *)&v15 = UnityEngine_Color__get_white(0LL);
  }
  else
  {
    if ( kind != 1 )
      return 0;
    *(UnityEngine_Color_o *)&v15 = UnityEngine_Color__get_black(0LL);
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.colliderBase;
  v20 = v15;
  v21 = v16;
  v22 = v17;
  v23 = v18;
  this->fields.maskKind = kind;
  if ( !maskSprite )
LABEL_31:
    sub_B7769C(maskSprite, *(_QWORD *)&kind);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
  if ( duration <= 0.0 )
    goto LABEL_28;
  v28 = (UIWidget_o *)this->fields.maskSprite;
  if ( !v28 )
    goto LABEL_31;
  v47.fields.a = v28->fields.mColor.fields.a;
  v47.fields.r = v20;
  v47.fields.g = v21;
  v47.fields.b = v22;
  v46.methodPointer = 0LL;
  v46.invoker_method = 0LL;
  UnityEngine_Color___ctor(v47, v24, v25, v26, v27, &v46);
  *(_QWORD *)&v48.fields.r = v46.methodPointer;
  *(_QWORD *)&v48.fields.b = v46.invoker_method;
  UIWidget__set_color(v28, v48, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  v50.fields.r = v20;
  v50.fields.g = v21;
  v50.fields.b = v22;
  v50.fields.a = v23;
  v30 = (UnityEngine_Object_o *)TweenColor__Begin(gameObject, duration, v50, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
  {
LABEL_28:
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( maskSprite )
    {
      v49.fields.r = v20;
      v49.fields.g = v21;
      v49.fields.b = v22;
      v49.fields.a = v23;
      UIWidget__set_color((UIWidget_o *)maskSprite, v49, 0LL);
      MaskFade__EndFadeout(this, v45);
      return 1;
    }
    goto LABEL_31;
  }
  this->fields.isExecuteMask = 1;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v30 )
    goto LABEL_31;
  v30[3].klass = (UnityEngine_Object_c *)maskSprite;
  v37 = v30 + 3;
  sub_B77560((BattleServantConfConponent_o *)v37, (System_Int32_array **)maskSprite, v31, v32, v33, v34, v35, v36);
  v38 = (System_Int32_array **)StringLiteral_6107/*"EndFadeout"*/;
  v37->monitor = (void *)StringLiteral_6107/*"EndFadeout"*/;
  sub_B77560((BattleServantConfConponent_o *)&v37->monitor, v38, v39, v40, v41, v42, v43, v44);
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
  UnityEngine_Component_o *maskSprite; // x0
  WebViewObject_o *Component_WebViewObject; // x20

  if ( (byte_438E5CA & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_TweenColor___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E5CA = 1;
  }
  if ( this->fields.isExecuteMask )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_16;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                maskSprite,
                                (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
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
        sub_B7769C(maskSprite, method);
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
    sub_B7769C(0LL, method);
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
    sub_B7769C(0LL, method);
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
    sub_B7769C(this, *(_QWORD *)&kind);
  }
  maskKind = this[2].fields.maskKind;
  UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&r, 0LL);
}


void __fastcall MaskFade__SetMaskCollider(MaskFade_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_GameObject_o *colliderBase; // x0

  colliderBase = this->fields.colliderBase;
  if ( !colliderBase )
    sub_B7769C(0LL, isEnable);
  UnityEngine_GameObject__SetActive(colliderBase, isEnable, 0LL);
}


int32_t __fastcall MaskFade__get_Depth(MaskFade_o *this, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x8

  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_B7769C(this, method);
  return maskSprite->fields.mDepth;
}


void __fastcall MaskFade__set_Depth(MaskFade_o *this, int32_t value, const MethodInfo *method)
{
  UIWidget_o *maskSprite; // x0

  maskSprite = (UIWidget_o *)this->fields.maskSprite;
  if ( !maskSprite )
    sub_B7769C(0LL, value);
  UIWidget__set_depth(maskSprite, value, 0LL);
}