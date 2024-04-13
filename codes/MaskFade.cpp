void __fastcall MaskFade___ctor(MaskFade_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MaskFade__EndFadein(MaskFade_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x19
  System_Action_o *v17; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_42EBB51 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenColor___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EBB51 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_15;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      maskSprite,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
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
    sub_B5D69C(maskSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v17 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields.adjustHeight) = 0;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B5D560(p_callbackFunc, 0LL, v10, v11, v12, v13, v14, v15);
    System_Action__Invoke(v17, 0LL);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D560(p_callbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UnityEngine_Component_o *maskSprite; // x0
  WebViewObject_o *Component_WebViewObject; // x22
  float v21; // s0
  float v22; // s1
  float v23; // s2
  float v24; // s3
  float v26; // s9
  float v27; // s10
  float v28; // s11
  float v29; // s12
  float v30; // s4
  float v31; // s5
  float v32; // s6
  float v33; // s7
  struct UISprite_o *v34; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UnityEngine_Object_o *v43; // x20
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  const MethodInfo *v51; // x1
  MethodInfo v52; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o mColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v56; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_42EBB4F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenColor___, kind, (_DWORD)callback, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_6038/*"EndFadeout"*/, v16, v17, v18);
    byte_42EBB4F = 1;
  }
  if ( this->fields.isExecuteMask )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_31;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                maskSprite,
                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
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
  sub_B5D560(
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
    *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_white(0LL);
  }
  else
  {
    if ( kind != 1 )
      return 0;
    *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_black(0LL);
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.colliderBase;
  v26 = v21;
  v27 = v22;
  v28 = v23;
  v29 = v24;
  this->fields.maskKind = kind;
  if ( !maskSprite )
LABEL_31:
    sub_B5D69C(maskSprite, *(_QWORD *)&kind);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
  if ( duration <= 0.0 )
    goto LABEL_28;
  v34 = this->fields.maskSprite;
  if ( !v34 )
    goto LABEL_31;
  mColor = v34->fields.mColor;
  v52.methodPointer = 0LL;
  v52.invoker_method = 0LL;
  UnityEngine_Color___ctor(mColor, v30, v31, v32, v33, &v52);
  *(_QWORD *)&v54.fields.r = v52.methodPointer;
  *(_QWORD *)&v54.fields.b = v52.invoker_method;
  UIWidget__set_color((UIWidget_o *)v34, v54, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  v56.fields.r = v26;
  v56.fields.g = v27;
  v56.fields.b = v28;
  v56.fields.a = v29;
  v36 = (UnityEngine_Object_o *)TweenColor__Begin(gameObject, duration, v56, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
  {
LABEL_28:
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( maskSprite )
    {
      v55.fields.r = v26;
      v55.fields.g = v27;
      v55.fields.b = v28;
      v55.fields.a = v29;
      UIWidget__set_color((UIWidget_o *)maskSprite, v55, 0LL);
      MaskFade__EndFadeout(this, v51);
      return 1;
    }
    goto LABEL_31;
  }
  this->fields.isExecuteMask = 1;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v36 )
    goto LABEL_31;
  v36[3].klass = (UnityEngine_Object_c *)maskSprite;
  v43 = v36 + 3;
  sub_B5D560((BattleServantConfConponent_o *)v43, (System_Int32_array **)maskSprite, v37, v38, v39, v40, v41, v42);
  v44 = (System_Int32_array **)StringLiteral_6038/*"EndFadeout"*/;
  v43->monitor = (void *)StringLiteral_6038/*"EndFadeout"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v43->monitor, v44, v45, v46, v47, v48, v49, v50);
  return 1;
}


bool __fastcall MaskFade__Fadein(MaskFade_o *this, float duration, System_Action_o *callback, const MethodInfo *method)
{
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  void *maskSprite; // x0
  WebViewObject_o *Component_WebViewObject; // x21
  bool result; // w0
  float v21; // s9
  float v22; // s10
  float v23; // s11
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Object_o *v32; // x20
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_Color_o v40; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_42EBB50 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenColor___, (_DWORD)callback, (_DWORD)method, v4);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_6037/*"EndFadein"*/, v15, v16, v17);
    byte_42EBB50 = 1;
  }
  if ( !this->fields.isExecuteMask )
    goto LABEL_14;
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_23;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)maskSprite,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
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
    sub_B5D560(
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
      v21 = *((float *)maskSprite + 35);
      v22 = *((float *)maskSprite + 36);
      v23 = *((float *)maskSprite + 37);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
      v40.fields.a = 0.0;
      v40.fields.r = v21;
      v40.fields.g = v22;
      v40.fields.b = v23;
      v25 = (UnityEngine_Object_o *)TweenColor__Begin(gameObject, duration, v40, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
      {
        maskSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( v25 )
        {
          v25[3].klass = (UnityEngine_Object_c *)maskSprite;
          v32 = v25 + 3;
          sub_B5D560(
            (BattleServantConfConponent_o *)v32,
            (System_Int32_array **)maskSprite,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31);
          v33 = (System_Int32_array **)StringLiteral_6037/*"EndFadein"*/;
          v32->monitor = (void *)StringLiteral_6037/*"EndFadein"*/;
          sub_B5D560((BattleServantConfConponent_o *)&v32->monitor, v33, v34, v35, v36, v37, v38, v39);
          result = 1;
          this->fields.isExecuteMask = 1;
          return result;
        }
LABEL_23:
        sub_B5D69C(maskSprite, callback);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UnityEngine_Component_o *maskSprite; // x0
  WebViewObject_o *Component_WebViewObject; // x22
  float v21; // s0
  float v22; // s1
  float v23; // s2
  float v24; // s3
  float v26; // s9
  float v27; // s10
  float v28; // s11
  float v29; // s12
  float v30; // s4
  float v31; // s5
  float v32; // s6
  float v33; // s7
  UIWidget_o *v34; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UnityEngine_Object_o *v43; // x20
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  const MethodInfo *v51; // x1
  MethodInfo v52; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v56; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_42EBB4E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenColor___, kind, (_DWORD)callback, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_6038/*"EndFadeout"*/, v16, v17, v18);
    byte_42EBB4E = 1;
  }
  if ( this->fields.isExecuteMask )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_31;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                maskSprite,
                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
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
  sub_B5D560(
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
    *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_white(0LL);
  }
  else
  {
    if ( kind != 1 )
      return 0;
    *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_black(0LL);
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.colliderBase;
  v26 = v21;
  v27 = v22;
  v28 = v23;
  v29 = v24;
  this->fields.maskKind = kind;
  if ( !maskSprite )
LABEL_31:
    sub_B5D69C(maskSprite, *(_QWORD *)&kind);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
  if ( duration <= 0.0 )
    goto LABEL_28;
  v34 = (UIWidget_o *)this->fields.maskSprite;
  if ( !v34 )
    goto LABEL_31;
  v53.fields.a = v34->fields.mColor.fields.a;
  v53.fields.r = v26;
  v53.fields.g = v27;
  v53.fields.b = v28;
  v52.methodPointer = 0LL;
  v52.invoker_method = 0LL;
  UnityEngine_Color___ctor(v53, v30, v31, v32, v33, &v52);
  *(_QWORD *)&v54.fields.r = v52.methodPointer;
  *(_QWORD *)&v54.fields.b = v52.invoker_method;
  UIWidget__set_color(v34, v54, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  v56.fields.r = v26;
  v56.fields.g = v27;
  v56.fields.b = v28;
  v56.fields.a = v29;
  v36 = (UnityEngine_Object_o *)TweenColor__Begin(gameObject, duration, v56, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
  {
LABEL_28:
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( maskSprite )
    {
      v55.fields.r = v26;
      v55.fields.g = v27;
      v55.fields.b = v28;
      v55.fields.a = v29;
      UIWidget__set_color((UIWidget_o *)maskSprite, v55, 0LL);
      MaskFade__EndFadeout(this, v51);
      return 1;
    }
    goto LABEL_31;
  }
  this->fields.isExecuteMask = 1;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v36 )
    goto LABEL_31;
  v36[3].klass = (UnityEngine_Object_c *)maskSprite;
  v43 = v36 + 3;
  sub_B5D560((BattleServantConfConponent_o *)v43, (System_Int32_array **)maskSprite, v37, v38, v39, v40, v41, v42);
  v44 = (System_Int32_array **)StringLiteral_6038/*"EndFadeout"*/;
  v43->monitor = (void *)StringLiteral_6038/*"EndFadeout"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v43->monitor, v44, v45, v46, v47, v48, v49, v50);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *maskSprite; // x0
  WebViewObject_o *Component_WebViewObject; // x20

  if ( (byte_42EBB4D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenColor___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EBB4D = 1;
  }
  if ( this->fields.isExecuteMask )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_16;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                maskSprite,
                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
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
        sub_B5D69C(maskSprite, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(this, *(_QWORD *)&kind);
  }
  maskKind = this[2].fields.maskKind;
  UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&r, 0LL);
}


void __fastcall MaskFade__SetMaskCollider(MaskFade_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_GameObject_o *colliderBase; // x0

  colliderBase = this->fields.colliderBase;
  if ( !colliderBase )
    sub_B5D69C(0LL, isEnable);
  UnityEngine_GameObject__SetActive(colliderBase, isEnable, 0LL);
}


int32_t __fastcall MaskFade__get_Depth(MaskFade_o *this, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x8

  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_B5D69C(this, method);
  return maskSprite->fields.mDepth;
}


void __fastcall MaskFade__set_Depth(MaskFade_o *this, int32_t value, const MethodInfo *method)
{
  UIWidget_o *maskSprite; // x0

  maskSprite = (UIWidget_o *)this->fields.maskSprite;
  if ( !maskSprite )
    sub_B5D69C(0LL, value);
  UIWidget__set_depth(maskSprite, value, 0LL);
}