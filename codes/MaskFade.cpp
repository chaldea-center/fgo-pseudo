void __fastcall MaskFade___ctor(MaskFade_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MaskFade__EndFadein(MaskFade_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_Behaviour_o *Component_WebViewObject; // x20
  struct UISprite_o *v6; // x0
  UnityEngine_GameObject_o *colliderBase; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x19
  System_Action_o *v15; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_40FB620 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TweenColor___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FB620 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_15;
  Component_WebViewObject = (UnityEngine_Behaviour_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         maskSprite,
                                                         (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    if ( !Component_WebViewObject )
      goto LABEL_15;
    UnityEngine_Behaviour__set_enabled(Component_WebViewObject, 0, 0LL);
  }
  v6 = this->fields.maskSprite;
  this->fields.maskKind = 0;
  if ( !v6
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))v6->klass->vtable._8_set_alpha.method)(
          v6,
          v6->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          0.0),
        (colliderBase = this->fields.colliderBase) == 0LL) )
  {
LABEL_15:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(colliderBase, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v15 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields.adjustHeight) = 0;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, v8, v9, v10, v11, v12, v13);
    System_Action__Invoke(v15, 0LL);
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
    sub_B170D4();
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
    sub_B16F98(p_callbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
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
  UnityEngine_GameObject_o *colliderBase; // x0
  float v23; // s9
  float v24; // s10
  float v25; // s11
  float v26; // s12
  float v27; // s4
  float v28; // s5
  float v29; // s6
  float v30; // s7
  struct UISprite_o *v31; // x20
  UnityEngine_Component_o *v32; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v34; // x20
  System_Int32_array **v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_Object_o *v42; // x20
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  UIWidget_o *v50; // x0
  const MethodInfo *v51; // x1
  MethodInfo v52; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o mColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v56; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_40FB61E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TweenColor___, *(_QWORD *)&kind);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_5942, v14);
    byte_40FB61E = 1;
  }
  if ( this->fields.isExecuteMask )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_31;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                maskSprite,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
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
  sub_B16F98(
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
  colliderBase = this->fields.colliderBase;
  v23 = v17;
  v24 = v18;
  v25 = v19;
  v26 = v20;
  this->fields.maskKind = kind;
  if ( !colliderBase )
LABEL_31:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(colliderBase, 1, 0LL);
  if ( duration <= 0.0 )
    goto LABEL_28;
  v31 = this->fields.maskSprite;
  if ( !v31 )
    goto LABEL_31;
  mColor = v31->fields.mColor;
  v52.methodPointer = 0LL;
  v52.invoker_method = 0LL;
  UnityEngine_Color___ctor(mColor, v27, v28, v29, v30, &v52);
  *(_QWORD *)&v54.fields.r = v52.methodPointer;
  *(_QWORD *)&v54.fields.b = v52.invoker_method;
  UIWidget__set_color((UIWidget_o *)v31, v54, 0LL);
  v32 = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !v32 )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject(v32, 0LL);
  v56.fields.r = v23;
  v56.fields.g = v24;
  v56.fields.b = v25;
  v56.fields.a = v26;
  v34 = (UnityEngine_Object_o *)TweenColor__Begin(gameObject, duration, v56, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
  {
LABEL_28:
    v50 = (UIWidget_o *)this->fields.maskSprite;
    if ( v50 )
    {
      v55.fields.r = v23;
      v55.fields.g = v24;
      v55.fields.b = v25;
      v55.fields.a = v26;
      UIWidget__set_color(v50, v55, 0LL);
      MaskFade__EndFadeout(this, v51);
      return 1;
    }
    goto LABEL_31;
  }
  this->fields.isExecuteMask = 1;
  v35 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v34 )
    goto LABEL_31;
  v34[3].klass = (UnityEngine_Object_c *)v35;
  v42 = v34 + 3;
  sub_B16F98((BattleServantConfConponent_o *)v42, v35, v36, v37, v38, v39, v40, v41);
  v43 = (System_Int32_array **)StringLiteral_5942;
  v42->monitor = (void *)StringLiteral_5942;
  sub_B16F98((BattleServantConfConponent_o *)&v42->monitor, v43, v44, v45, v46, v47, v48, v49);
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
  UnityEngine_Component_o *maskSprite; // x0
  WebViewObject_o *Component_WebViewObject; // x21
  bool result; // w0
  const MethodInfo *v17; // x1
  struct UISprite_o *v18; // x0
  float r; // s9
  float g; // s10
  float b; // s11
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v23; // x20
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_Object_o *v31; // x20
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_Color_o v39; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_40FB61F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TweenColor___, callback);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_5941, v13);
    byte_40FB61F = 1;
  }
  if ( !this->fields.isExecuteMask )
    goto LABEL_14;
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_23;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              maskSprite,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
    goto LABEL_14;
  if ( !Component_WebViewObject )
    goto LABEL_23;
  if ( *((float *)&Component_WebViewObject[1].fields.onError + 1) != 0.0 )
  {
LABEL_14:
    this->fields.callbackFunc = callback;
    sub_B16F98(
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
      v18 = this->fields.maskSprite;
      if ( !v18 )
        goto LABEL_23;
      r = v18->fields.mColor.fields.r;
      g = v18->fields.mColor.fields.g;
      b = v18->fields.mColor.fields.b;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
      v39.fields.a = 0.0;
      v39.fields.r = r;
      v39.fields.g = g;
      v39.fields.b = b;
      v23 = (UnityEngine_Object_o *)TweenColor__Begin(gameObject, duration, v39, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
      {
        v24 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( v23 )
        {
          v23[3].klass = (UnityEngine_Object_c *)v24;
          v31 = v23 + 3;
          sub_B16F98((BattleServantConfConponent_o *)v31, v24, v25, v26, v27, v28, v29, v30);
          v32 = (System_Int32_array **)StringLiteral_5941;
          v31->monitor = (void *)StringLiteral_5941;
          sub_B16F98((BattleServantConfConponent_o *)&v31->monitor, v32, v33, v34, v35, v36, v37, v38);
          result = 1;
          this->fields.isExecuteMask = 1;
          return result;
        }
LABEL_23:
        sub_B170D4();
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
  UnityEngine_GameObject_o *colliderBase; // x0
  float v23; // s9
  float v24; // s10
  float v25; // s11
  float v26; // s12
  float v27; // s4
  float v28; // s5
  float v29; // s6
  float v30; // s7
  UIWidget_o *v31; // x20
  UnityEngine_Component_o *v32; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v34; // x20
  System_Int32_array **v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_Object_o *v42; // x20
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  UIWidget_o *v50; // x0
  const MethodInfo *v51; // x1
  MethodInfo v52; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v56; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_40FB61D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TweenColor___, *(_QWORD *)&kind);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_5942, v14);
    byte_40FB61D = 1;
  }
  if ( this->fields.isExecuteMask )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_31;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                maskSprite,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
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
  sub_B16F98(
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
  colliderBase = this->fields.colliderBase;
  v23 = v17;
  v24 = v18;
  v25 = v19;
  v26 = v20;
  this->fields.maskKind = kind;
  if ( !colliderBase )
LABEL_31:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(colliderBase, 1, 0LL);
  if ( duration <= 0.0 )
    goto LABEL_28;
  v31 = (UIWidget_o *)this->fields.maskSprite;
  if ( !v31 )
    goto LABEL_31;
  v53.fields.a = v31->fields.mColor.fields.a;
  v53.fields.r = v23;
  v53.fields.g = v24;
  v53.fields.b = v25;
  v52.methodPointer = 0LL;
  v52.invoker_method = 0LL;
  UnityEngine_Color___ctor(v53, v27, v28, v29, v30, &v52);
  *(_QWORD *)&v54.fields.r = v52.methodPointer;
  *(_QWORD *)&v54.fields.b = v52.invoker_method;
  UIWidget__set_color(v31, v54, 0LL);
  v32 = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !v32 )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject(v32, 0LL);
  v56.fields.r = v23;
  v56.fields.g = v24;
  v56.fields.b = v25;
  v56.fields.a = v26;
  v34 = (UnityEngine_Object_o *)TweenColor__Begin(gameObject, duration, v56, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
  {
LABEL_28:
    v50 = (UIWidget_o *)this->fields.maskSprite;
    if ( v50 )
    {
      v55.fields.r = v23;
      v55.fields.g = v24;
      v55.fields.b = v25;
      v55.fields.a = v26;
      UIWidget__set_color(v50, v55, 0LL);
      MaskFade__EndFadeout(this, v51);
      return 1;
    }
    goto LABEL_31;
  }
  this->fields.isExecuteMask = 1;
  v35 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v34 )
    goto LABEL_31;
  v34[3].klass = (UnityEngine_Object_c *)v35;
  v42 = v34 + 3;
  sub_B16F98((BattleServantConfConponent_o *)v42, v35, v36, v37, v38, v39, v40, v41);
  v43 = (System_Int32_array **)StringLiteral_5942;
  v42->monitor = (void *)StringLiteral_5942;
  sub_B16F98((BattleServantConfConponent_o *)&v42->monitor, v43, v44, v45, v46, v47, v48, v49);
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
  UIWidget_o *v6; // x0
  struct UISprite_o *v7; // x0
  UnityEngine_GameObject_o *colliderBase; // x0

  if ( (byte_40FB61C & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TweenColor___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FB61C = 1;
  }
  if ( this->fields.isExecuteMask )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_16;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                maskSprite,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
    {
      if ( !Component_WebViewObject || (v6 = (UIWidget_o *)this->fields.maskSprite) == 0LL )
LABEL_16:
        sub_B170D4();
      UIWidget__set_color(v6, *(UnityEngine_Color_o *)&Component_WebViewObject[1].fields.onJS, 0LL);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0, 0LL);
    }
    this->fields.isExecuteMask = 0;
  }
  v7 = this->fields.maskSprite;
  this->fields.maskKind = 0;
  if ( !v7 )
    goto LABEL_16;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))v7->klass->vtable._8_set_alpha.method)(
    v7,
    v7->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  colliderBase = this->fields.colliderBase;
  if ( !colliderBase )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(colliderBase, 0, 0LL);
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
    sub_B170D4();
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
    sub_B170D4();
  return ((float (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))maskSprite->klass->vtable._7_get_alpha.method)(
           maskSprite,
           maskSprite->klass->vtable._8_set_alpha.methodPtr) >= 1.0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaskFade__SetInitColor(MaskFade_o *this, int32_t kind, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x8
  float r; // s0
  float g; // s1
  float b; // s2
  struct UISprite_o *v8; // x0
  float a; // s3

  maskSprite = this->fields.maskSprite;
  if ( !maskSprite
    || (kind == 2
      ? COERCE_FLOAT(*(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL))
      : kind != 1
      ? (r = maskSprite->fields.mColor.fields.r,
         g = maskSprite->fields.mColor.fields.g,
         b = maskSprite->fields.mColor.fields.b)
      : COERCE_FLOAT(*(UnityEngine_Color_o *)&r = UnityEngine_Color__get_black(0LL)),
        (v8 = this->fields.maskSprite) == 0LL) )
  {
    sub_B170D4();
  }
  a = v8->fields.mColor.fields.a;
  UIWidget__set_color((UIWidget_o *)v8, *(UnityEngine_Color_o *)&r, 0LL);
}


void __fastcall MaskFade__SetMaskCollider(MaskFade_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_GameObject_o *colliderBase; // x0

  colliderBase = this->fields.colliderBase;
  if ( !colliderBase )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(colliderBase, isEnable, 0LL);
}


int32_t __fastcall MaskFade__get_Depth(MaskFade_o *this, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x8

  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_B170D4();
  return maskSprite->fields.mDepth;
}


void __fastcall MaskFade__set_Depth(MaskFade_o *this, int32_t value, const MethodInfo *method)
{
  UIWidget_o *maskSprite; // x0

  maskSprite = (UIWidget_o *)this->fields.maskSprite;
  if ( !maskSprite )
    sub_B170D4();
  UIWidget__set_depth(maskSprite, value, 0LL);
}