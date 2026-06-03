void MaskFade___ctor(MaskFade_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void MaskFade__EndFadein(MaskFade_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0
  Il2CppObject *Component_object; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4E7A880 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_TweenColor___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7A880 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_14;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       maskSprite,
                       (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                            (UnityEngine_Object_o *)Component_object,
                                            0,
                                            0);
  if ( ((unsigned __int8)maskSprite & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_14;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  this->fields.maskKind = 0;
  if ( !maskSprite
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))maskSprite->klass[1]._1.element_class)(
          maskSprite,
          maskSprite->klass[1]._1.castClass,
          0.0),
        (maskSprite = (UnityEngine_Component_o *)this->fields.colliderBase) == 0) )
  {
LABEL_14:
    sub_1D0F30C(maskSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v12 = callbackFunc;
  BYTE4(p_callbackFunc[-1].fields._ClosedMessage_k__BackingField) = 0;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1D0F058(p_callbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void MaskFade__EndFadeout(MaskFade_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UISprite_o *maskSprite; // x0
  Il2CppObject *Component_object; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x19
  struct System_Action_o *v13; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4E7A87D & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_TweenColor___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7A87D = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  if ( v3->static_fields->IsEnableFadeRerunSkipped )
  {
    maskSprite = this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_16;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)maskSprite,
                         (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    maskSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)maskSprite & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_16;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
    }
  }
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
LABEL_16:
    sub_1D0F30C(maskSprite, method);
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *, float))maskSprite->klass->vtable._8_set_alpha.methodPtr)(
    maskSprite,
    maskSprite->klass->vtable._8_set_alpha.method,
    1.0);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v13 = callbackFunc;
  BYTE4(p_callbackFunc[-1].fields._ClosedMessage_k__BackingField) = 0;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1D0F058(p_callbackFunc, 0, v6, v7, v8, v9, v10, v11);
    ((void (__fastcall *)(intptr_t, intptr_t))v13->fields.invoke_impl)(v13->fields.method_code, v13->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
bool MaskFade__FadeChangeColor(
        MaskFade_o *this,
        int32_t kind,
        float duration,
        System_Action_o *callback,
        UnityEngine_Color_o targetColor,
        const MethodInfo *method)
{
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  float a; // s8
  float b; // s11
  float g; // s10
  float r; // s9
  void *maskSprite; // x0
  Il2CppObject *Component_object; // x22
  UnityEngine_GameObject_o *v20; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  TweenColor_o *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  const MethodInfo *v36; // x1
  BalanceConfig_c *v38; // x0
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v40; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  a = targetColor.fields.a;
  b = targetColor.fields.b;
  g = targetColor.fields.g;
  r = targetColor.fields.r;
  if ( (byte_4E7A87E & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_TweenColor___);
    sub_1D0F0B4(&FadeLogger_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_6065/*"EndFadeout"*/);
    sub_1D0F0B4(&StringLiteral_25993/*"実行中"*/);
    sub_1D0F0B4(&StringLiteral_6663/*"FadeChangeColor"*/);
    byte_4E7A87E = 1;
  }
  if ( !this->fields.isExecuteMask )
    goto LABEL_13;
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_35;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskSprite,
                       (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskSprite = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)maskSprite & 1) == 0 )
    goto LABEL_13;
  if ( !Component_object )
    goto LABEL_35;
  if ( *((float *)&Component_object[9].monitor + 1) != 0.0 )
  {
LABEL_13:
    this->fields.callbackFunc = callback;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method,
      v6,
      v7,
      v8,
      v9);
    if ( kind == 1 )
    {
      a = 1.0;
      r = 0.0;
      g = 0.0;
      b = 0.0;
    }
    else if ( kind != 3 )
    {
      if ( kind != 2 )
      {
        v38 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v38 = BalanceConfig_TypeInfo;
        }
        if ( !v38->static_fields->IsEnableFadeRerunSkipped )
          return 0;
        goto LABEL_33;
      }
      r = 1.0;
      g = 1.0;
      b = 1.0;
      a = 1.0;
    }
    maskSprite = this->fields.colliderBase;
    this->fields.maskKind = kind;
    if ( maskSprite )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
      if ( duration <= 0.0 )
        goto LABEL_27;
      maskSprite = this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_35;
      UIWidget__set_color((UIWidget_o *)maskSprite, *(UnityEngine_Color_o *)((char *)maskSprite + 148), 0);
      maskSprite = this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_35;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0);
      v40.fields.r = r;
      v40.fields.g = g;
      v40.fields.b = b;
      v40.fields.a = a;
      v22 = TweenColor__Begin(gameObject, duration, v40, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0, 0) )
      {
        this->fields.isExecuteMask = 1;
        maskSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( v22 )
        {
          v22->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maskSprite;
          sub_1D0F058(
            (GrandQuestFolderBoardItem_o *)&v22->fields.eventReceiver,
            (int32_t)maskSprite,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28);
          v29 = StringLiteral_6065/*"EndFadeout"*/;
          v22->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6065/*"EndFadeout"*/;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)&v22->fields.callWhenFinished, v29, v30, v31, v32, v33, v34, v35);
          return 1;
        }
      }
      else
      {
LABEL_27:
        maskSprite = this->fields.maskSprite;
        if ( maskSprite )
        {
          v39.fields.r = r;
          v39.fields.g = g;
          v39.fields.b = b;
          v39.fields.a = a;
          UIWidget__set_color((UIWidget_o *)maskSprite, v39, 0);
          MaskFade__EndFadeout(this, v36);
          return 1;
        }
      }
    }
LABEL_35:
    sub_1D0F30C(maskSprite, *(_QWORD *)&kind);
  }
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
  FadeLogger__CreateFadeLogText(
    (System_String_o *)StringLiteral_6663/*"FadeChangeColor"*/,
    kind,
    (System_String_o *)StringLiteral_25993/*"実行中"*/,
    duration,
    v20,
    0);
LABEL_33:
  ActionExtensions__Call(callback, 0);
  return 0;
}


bool MaskFade__Fadein(MaskFade_o *this, float duration, System_Action_o *callback, const MethodInfo *method)
{
  void *maskSprite; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *Component_object; // x21
  int32_t maskKind; // w21
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 *v17; // x9
  BalanceConfig_c *v18; // x0
  float v19; // s9
  float v20; // s10
  float v21; // s11
  UnityEngine_GameObject_o *v22; // x0
  TweenColor_o *v23; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  bool result; // w0
  UnityEngine_Color_o value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v39; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4E7A87F & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_TweenColor___);
    sub_1D0F0B4(&FadeLogger_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_6669/*"Fadein"*/);
    sub_1D0F0B4(&StringLiteral_25993/*"実行中"*/);
    sub_1D0F0B4(&StringLiteral_6064/*"EndFadein"*/);
    sub_1D0F0B4(&StringLiteral_25991/*"完了状態"*/);
    byte_4E7A87F = 1;
  }
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_33;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskSprite,
                       (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( !this->fields.isExecuteMask )
  {
    v18 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    if ( v18->static_fields->IsEnableFadeRerunSkipped )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      maskSprite = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)maskSprite & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_33;
        value = TweenColor__get_value((TweenColor_o *)Component_object, 0);
        if ( value.fields.a <= 0.0 )
        {
          maskKind = this->fields.maskKind;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !FadeLogger_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
          v17 = &StringLiteral_25991/*"完了状態"*/;
          goto LABEL_32;
        }
      }
    }
LABEL_21:
    this->fields.callbackFunc = callback;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    this->fields.maskKind = 0;
    if ( duration <= 0.0 )
      goto LABEL_28;
    maskSprite = this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_33;
    v19 = *((float *)maskSprite + 37);
    v20 = *((float *)maskSprite + 38);
    v21 = *((float *)maskSprite + 39);
    v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0);
    v39.fields.a = 0.0;
    v39.fields.r = v19;
    v39.fields.g = v20;
    v39.fields.b = v21;
    v23 = TweenColor__Begin(v22, duration, v39, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0, 0) )
    {
LABEL_28:
      MaskFade__EndFadein(this, (const MethodInfo *)callback);
      return 1;
    }
    maskSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( v23 )
    {
      v23->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maskSprite;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v23->fields.eventReceiver,
        (int32_t)maskSprite,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      v30 = StringLiteral_6064/*"EndFadein"*/;
      v23->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6064/*"EndFadein"*/;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)&v23->fields.callWhenFinished, v30, v31, v32, v33, v34, v35, v36);
      result = 1;
      this->fields.isExecuteMask = 1;
      return result;
    }
LABEL_33:
    sub_1D0F30C(maskSprite, callback);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskSprite = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)maskSprite & 1) == 0 )
    goto LABEL_21;
  if ( !Component_object )
    goto LABEL_33;
  if ( *((float *)&Component_object[9].monitor + 1) != 0.0 )
    goto LABEL_21;
  maskKind = this->fields.maskKind;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
  v17 = &StringLiteral_25993/*"実行中"*/;
LABEL_32:
  FadeLogger__CreateFadeLogText(
    (System_String_o *)StringLiteral_6669/*"Fadein"*/,
    maskKind,
    (System_String_o *)*v17,
    duration,
    gameObject,
    0);
  ActionExtensions__Call(callback, 0);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool MaskFade__Fadeout(
        MaskFade_o *this,
        int32_t kind,
        float duration,
        System_Action_o *callback,
        const MethodInfo *method)
{
  void *maskSprite; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *Component_object; // x22
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 *v18; // x9
  BalanceConfig_c *v19; // x0
  int v20; // w8
  float v21; // s10
  float v22; // s9
  UnityEngine_GameObject_o *v23; // x0
  TweenColor_o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  BalanceConfig_c *v38; // x0
  const MethodInfo *v39; // x1
  UnityEngine_Color_o value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v44; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4E7A87C & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_TweenColor___);
    sub_1D0F0B4(&FadeLogger_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_6671/*"Fadeout"*/);
    sub_1D0F0B4(&StringLiteral_6065/*"EndFadeout"*/);
    sub_1D0F0B4(&StringLiteral_25993/*"実行中"*/);
    sub_1D0F0B4(&StringLiteral_25991/*"完了状態"*/);
    byte_4E7A87C = 1;
  }
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_44;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskSprite,
                       (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( !this->fields.isExecuteMask )
  {
    v19 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v19 = BalanceConfig_TypeInfo;
    }
    if ( v19->static_fields->IsEnableFadeRerunSkipped )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      maskSprite = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)maskSprite & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_44;
        value = TweenColor__get_value((TweenColor_o *)Component_object, 0);
        if ( value.fields.a >= 1.0 )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !FadeLogger_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
          v18 = &StringLiteral_25991/*"完了状態"*/;
          goto LABEL_41;
        }
      }
    }
LABEL_21:
    this->fields.callbackFunc = callback;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v20 = kind - 1;
    if ( (unsigned int)(kind - 1) >= 3 )
    {
      v38 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v38 = BalanceConfig_TypeInfo;
      }
      if ( !v38->static_fields->IsEnableFadeRerunSkipped )
        return 0;
      goto LABEL_42;
    }
    maskSprite = this->fields.colliderBase;
    this->fields.maskKind = kind;
    if ( maskSprite )
    {
      v21 = flt_D6AF88[v20];
      v22 = flt_D6AF94[v20];
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
      if ( duration <= 0.0 )
        goto LABEL_35;
      maskSprite = this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_44;
      v42.fields.a = *((float *)maskSprite + 40);
      v42.fields.r = v21;
      v42.fields.g = v21;
      v42.fields.b = v21;
      UIWidget__set_color((UIWidget_o *)maskSprite, v42, 0);
      maskSprite = this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_44;
      v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0);
      v44.fields.r = v21;
      v44.fields.g = v21;
      v44.fields.b = v21;
      v44.fields.a = v22;
      v24 = TweenColor__Begin(v23, duration, v44, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0, 0) )
      {
        this->fields.isExecuteMask = 1;
        maskSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( v24 )
        {
          v24->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maskSprite;
          sub_1D0F058(
            (GrandQuestFolderBoardItem_o *)&v24->fields.eventReceiver,
            (int32_t)maskSprite,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30);
          v31 = StringLiteral_6065/*"EndFadeout"*/;
          v24->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6065/*"EndFadeout"*/;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)&v24->fields.callWhenFinished, v31, v32, v33, v34, v35, v36, v37);
          return 1;
        }
      }
      else
      {
LABEL_35:
        maskSprite = this->fields.maskSprite;
        if ( maskSprite )
        {
          v43.fields.r = v21;
          v43.fields.g = v21;
          v43.fields.b = v21;
          v43.fields.a = v22;
          UIWidget__set_color((UIWidget_o *)maskSprite, v43, 0);
          MaskFade__EndFadeout(this, v39);
          return 1;
        }
      }
    }
LABEL_44:
    sub_1D0F30C(maskSprite, *(_QWORD *)&kind);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskSprite = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)maskSprite & 1) == 0 )
    goto LABEL_21;
  if ( !Component_object )
    goto LABEL_44;
  if ( *((float *)&Component_object[9].monitor + 1) != 1.0 )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
  v18 = &StringLiteral_25993/*"実行中"*/;
LABEL_41:
  FadeLogger__CreateFadeLogText(
    (System_String_o *)StringLiteral_6671/*"Fadeout"*/,
    kind,
    (System_String_o *)*v18,
    duration,
    gameObject,
    0);
LABEL_42:
  ActionExtensions__Call(callback, 0);
  return 0;
}


int32_t MaskFade__GetFadeoutKind(MaskFade_o *this, const MethodInfo *method)
{
  if ( this->fields.isExecuteMask )
    return 0;
  else
    return this->fields.maskKind;
}


void MaskFade__Init(MaskFade_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4E7A87B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_TweenColor___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7A87B = 1;
  }
  if ( this->fields.isExecuteMask )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_15;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         maskSprite,
                         (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    maskSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)Component_object,
                                              0,
                                              0);
    if ( ((unsigned __int8)maskSprite & 1) != 0 )
    {
      if ( !Component_object || (maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite) == 0 )
LABEL_15:
        sub_1D0F30C(maskSprite, method);
      UIWidget__set_color((UIWidget_o *)maskSprite, (UnityEngine_Color_o)Component_object[9], 0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
    }
    this->fields.isExecuteMask = 0;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  this->fields.maskKind = 0;
  if ( !maskSprite )
    goto LABEL_15;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))maskSprite->klass[1]._1.element_class)(
    maskSprite,
    maskSprite->klass[1]._1.castClass,
    0.0);
  maskSprite = (UnityEngine_Component_o *)this->fields.colliderBase;
  if ( !maskSprite )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
}


bool MaskFade__IsBusy(MaskFade_o *this, const MethodInfo *method)
{
  return this->fields.isExecuteMask;
}


bool MaskFade__IsDisp(MaskFade_o *this, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x0

  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_1D0F30C(0, method);
  return ((float (__fastcall *)(struct UISprite_o *, const MethodInfo *))maskSprite->klass->vtable._7_get_alpha.methodPtr)(
           maskSprite,
           maskSprite->klass->vtable._7_get_alpha.method) > 0.0;
}


bool MaskFade__IsOnTop(MaskFade_o *this, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x0

  if ( this->fields.isExecuteMask )
    return 0;
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_1D0F30C(0, method);
  return ((float (__fastcall *)(struct UISprite_o *, const MethodInfo *))maskSprite->klass->vtable._7_get_alpha.methodPtr)(
           maskSprite,
           maskSprite->klass->vtable._7_get_alpha.method) >= 1.0;
}


// local variable allocation has failed, the output may be wrong!
void MaskFade__SetInitColor(MaskFade_o *this, int32_t kind, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x0
  float a; // s3
  float r; // s0 OVERLAPPED
  float g; // s1
  float b; // s2

  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_1D0F30C(0, kind);
  if ( kind == 1 )
  {
    r = 0.0;
    g = 0.0;
    b = 0.0;
  }
  else
  {
    r = maskSprite->fields.mColor.fields.r;
    g = maskSprite->fields.mColor.fields.g;
    b = maskSprite->fields.mColor.fields.b;
    if ( kind == 2 )
    {
      r = 1.0;
      g = 1.0;
      b = 1.0;
    }
  }
  a = maskSprite->fields.mColor.fields.a;
  UIWidget__set_color((UIWidget_o *)maskSprite, *(UnityEngine_Color_o *)&r, 0);
}


void MaskFade__SetMaskCollider(MaskFade_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_GameObject_o *colliderBase; // x0

  colliderBase = this->fields.colliderBase;
  if ( !colliderBase )
    sub_1D0F30C(0, isEnable);
  UnityEngine_GameObject__SetActive(colliderBase, isEnable, 0);
}


bool MaskFade__TryGetColorByMaskFade(
        UnityEngine_Color_o *color,
        int32_t kind,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  bool v4; // w8

  switch ( kind )
  {
    case 1:
      v4 = 1;
      defaultColor.fields.a = 1.0;
      defaultColor.fields.r = 0.0;
      defaultColor.fields.g = 0.0;
      defaultColor.fields.b = 0.0;
      break;
    case 3:
      v4 = 1;
      break;
    case 2:
      v4 = 1;
      defaultColor.fields.r = 1.0;
      defaultColor.fields.g = 1.0;
      defaultColor.fields.b = 1.0;
      defaultColor.fields.a = 1.0;
      break;
    default:
      v4 = 0;
      break;
  }
  *color = defaultColor;
  return v4;
}


int32_t MaskFade__get_Depth(MaskFade_o *this, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x8

  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_1D0F30C(this, method);
  return maskSprite->fields.mDepth;
}


void MaskFade__set_Depth(MaskFade_o *this, int32_t value, const MethodInfo *method)
{
  UIWidget_o *maskSprite; // x0

  maskSprite = (UIWidget_o *)this->fields.maskSprite;
  if ( !maskSprite )
    sub_1D0F30C(0, value);
  UIWidget__set_depth(maskSprite, value, 0);
}