void __fastcall MaskFade___ctor(MaskFade_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MaskFade__EndFadein(MaskFade_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x20
  struct System_Action_o **p_callbackFunc; // x19
  System_Action_o *v7; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_41858EF & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TweenColor___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_41858EF = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_15;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      maskSprite,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
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
    sub_B2C434(maskSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = callbackFunc;
  *((_BYTE *)p_callbackFunc - 4) = 0;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL);
    System_Action__Invoke(v7, 0LL);
  }
}


void __fastcall MaskFade__EndFadeout(MaskFade_o *this, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x0
  struct System_Action_o **p_callbackFunc; // x19
  System_Action_o *v5; // x20
  struct System_Action_o *callbackFunc; // t1

  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_B2C434(0LL, method);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))maskSprite->klass->vtable._8_set_alpha.method)(
    maskSprite,
    maskSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    1.0);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v5 = callbackFunc;
  *((_BYTE *)p_callbackFunc - 4) = 0;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL);
    System_Action__Invoke(v5, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Component_o *maskSprite; // x0
  WebViewObject_o *Component_WebViewObject; // x22
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s3
  float v18; // s9
  float v19; // s10
  float v20; // s11
  float v21; // s12
  float v22; // s4
  float v23; // s5
  float v24; // s6
  float v25; // s7
  struct UISprite_o *v26; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v28; // x20
  UnityEngine_Object_o *v29; // x20
  __int64 v30; // x1
  const MethodInfo *v31; // x1
  MethodInfo v32; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o mColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v36; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_41858ED & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TweenColor___, *(_QWORD *)&kind);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_5959/*"EndFadeout"*/, v10);
    byte_41858ED = 1;
  }
  if ( this->fields.isExecuteMask )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_31;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                maskSprite,
                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
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
  sub_B2C2F8(&this->fields.callbackFunc, callback);
  if ( kind == 2 )
  {
    *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_white(0LL);
  }
  else
  {
    if ( kind != 1 )
      return 0;
    *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_black(0LL);
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.colliderBase;
  v18 = v13;
  v19 = v14;
  v20 = v15;
  v21 = v16;
  this->fields.maskKind = kind;
  if ( !maskSprite )
LABEL_31:
    sub_B2C434(maskSprite, *(_QWORD *)&kind);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
  if ( duration <= 0.0 )
    goto LABEL_28;
  v26 = this->fields.maskSprite;
  if ( !v26 )
    goto LABEL_31;
  mColor = v26->fields.mColor;
  v32.methodPointer = 0LL;
  v32.invoker_method = 0LL;
  UnityEngine_Color___ctor(mColor, v22, v23, v24, v25, &v32);
  *(_QWORD *)&v34.fields.r = v32.methodPointer;
  *(_QWORD *)&v34.fields.b = v32.invoker_method;
  UIWidget__set_color((UIWidget_o *)v26, v34, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  v36.fields.r = v18;
  v36.fields.g = v19;
  v36.fields.b = v20;
  v36.fields.a = v21;
  v28 = (UnityEngine_Object_o *)TweenColor__Begin(gameObject, duration, v36, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
  {
LABEL_28:
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( maskSprite )
    {
      v35.fields.r = v18;
      v35.fields.g = v19;
      v35.fields.b = v20;
      v35.fields.a = v21;
      UIWidget__set_color((UIWidget_o *)maskSprite, v35, 0LL);
      MaskFade__EndFadeout(this, v31);
      return 1;
    }
    goto LABEL_31;
  }
  this->fields.isExecuteMask = 1;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v28 )
    goto LABEL_31;
  v28[3].klass = (UnityEngine_Object_c *)maskSprite;
  v29 = v28 + 3;
  sub_B2C2F8(v29, maskSprite);
  v30 = StringLiteral_5959/*"EndFadeout"*/;
  v29->monitor = (void *)StringLiteral_5959/*"EndFadeout"*/;
  sub_B2C2F8(&v29->monitor, v30);
  return 1;
}


bool __fastcall MaskFade__Fadein(MaskFade_o *this, float duration, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  void *maskSprite; // x0
  WebViewObject_o *Component_WebViewObject; // x21
  bool result; // w0
  float v12; // s9
  float v13; // s10
  float v14; // s11
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v16; // x20
  UnityEngine_Object_o *v17; // x20
  __int64 v18; // x1
  UnityEngine_Color_o v19; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_41858EE & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TweenColor___, callback);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_5958/*"EndFadein"*/, v8);
    byte_41858EE = 1;
  }
  if ( !this->fields.isExecuteMask )
    goto LABEL_14;
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_23;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)maskSprite,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
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
    sub_B2C2F8(&this->fields.callbackFunc, callback);
    this->fields.maskKind = 0;
    if ( duration > 0.0 )
    {
      maskSprite = this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_23;
      v12 = *((float *)maskSprite + 35);
      v13 = *((float *)maskSprite + 36);
      v14 = *((float *)maskSprite + 37);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
      v19.fields.a = 0.0;
      v19.fields.r = v12;
      v19.fields.g = v13;
      v19.fields.b = v14;
      v16 = (UnityEngine_Object_o *)TweenColor__Begin(gameObject, duration, v19, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
      {
        maskSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( v16 )
        {
          v16[3].klass = (UnityEngine_Object_c *)maskSprite;
          v17 = v16 + 3;
          sub_B2C2F8(v17, maskSprite);
          v18 = StringLiteral_5958/*"EndFadein"*/;
          v17->monitor = (void *)StringLiteral_5958/*"EndFadein"*/;
          sub_B2C2F8(&v17->monitor, v18);
          result = 1;
          this->fields.isExecuteMask = 1;
          return result;
        }
LABEL_23:
        sub_B2C434(maskSprite, callback);
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
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Component_o *maskSprite; // x0
  WebViewObject_o *Component_WebViewObject; // x22
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s3
  float v18; // s9
  float v19; // s10
  float v20; // s11
  float v21; // s12
  float v22; // s4
  float v23; // s5
  float v24; // s6
  float v25; // s7
  UIWidget_o *v26; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v28; // x20
  UnityEngine_Object_o *v29; // x20
  __int64 v30; // x1
  const MethodInfo *v31; // x1
  MethodInfo v32; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v36; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_41858EC & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TweenColor___, *(_QWORD *)&kind);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_5959/*"EndFadeout"*/, v10);
    byte_41858EC = 1;
  }
  if ( this->fields.isExecuteMask )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_31;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                maskSprite,
                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
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
  sub_B2C2F8(&this->fields.callbackFunc, callback);
  if ( kind == 2 )
  {
    *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_white(0LL);
  }
  else
  {
    if ( kind != 1 )
      return 0;
    *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_black(0LL);
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.colliderBase;
  v18 = v13;
  v19 = v14;
  v20 = v15;
  v21 = v16;
  this->fields.maskKind = kind;
  if ( !maskSprite )
LABEL_31:
    sub_B2C434(maskSprite, *(_QWORD *)&kind);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
  if ( duration <= 0.0 )
    goto LABEL_28;
  v26 = (UIWidget_o *)this->fields.maskSprite;
  if ( !v26 )
    goto LABEL_31;
  v33.fields.a = v26->fields.mColor.fields.a;
  v33.fields.r = v18;
  v33.fields.g = v19;
  v33.fields.b = v20;
  v32.methodPointer = 0LL;
  v32.invoker_method = 0LL;
  UnityEngine_Color___ctor(v33, v22, v23, v24, v25, &v32);
  *(_QWORD *)&v34.fields.r = v32.methodPointer;
  *(_QWORD *)&v34.fields.b = v32.invoker_method;
  UIWidget__set_color(v26, v34, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  v36.fields.r = v18;
  v36.fields.g = v19;
  v36.fields.b = v20;
  v36.fields.a = v21;
  v28 = (UnityEngine_Object_o *)TweenColor__Begin(gameObject, duration, v36, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
  {
LABEL_28:
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( maskSprite )
    {
      v35.fields.r = v18;
      v35.fields.g = v19;
      v35.fields.b = v20;
      v35.fields.a = v21;
      UIWidget__set_color((UIWidget_o *)maskSprite, v35, 0LL);
      MaskFade__EndFadeout(this, v31);
      return 1;
    }
    goto LABEL_31;
  }
  this->fields.isExecuteMask = 1;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v28 )
    goto LABEL_31;
  v28[3].klass = (UnityEngine_Object_c *)maskSprite;
  v29 = v28 + 3;
  sub_B2C2F8(v29, maskSprite);
  v30 = StringLiteral_5959/*"EndFadeout"*/;
  v29->monitor = (void *)StringLiteral_5959/*"EndFadeout"*/;
  sub_B2C2F8(&v29->monitor, v30);
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

  if ( (byte_41858EB & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TweenColor___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_41858EB = 1;
  }
  if ( this->fields.isExecuteMask )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_16;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                maskSprite,
                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
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
        sub_B2C434(maskSprite, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(this, *(_QWORD *)&kind);
  }
  maskKind = this[2].fields.maskKind;
  UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&r, 0LL);
}


void __fastcall MaskFade__SetMaskCollider(MaskFade_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_GameObject_o *colliderBase; // x0

  colliderBase = this->fields.colliderBase;
  if ( !colliderBase )
    sub_B2C434(0LL, isEnable);
  UnityEngine_GameObject__SetActive(colliderBase, isEnable, 0LL);
}


int32_t __fastcall MaskFade__get_Depth(MaskFade_o *this, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x8

  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_B2C434(this, method);
  return maskSprite->fields.mDepth;
}


void __fastcall MaskFade__set_Depth(MaskFade_o *this, int32_t value, const MethodInfo *method)
{
  UIWidget_o *maskSprite; // x0

  maskSprite = (UIWidget_o *)this->fields.maskSprite;
  if ( !maskSprite )
    sub_B2C434(0LL, value);
  UIWidget__set_depth(maskSprite, value, 0LL);
}