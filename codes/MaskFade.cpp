void __fastcall MaskFade___ctor(MaskFade_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MaskFade__EndFadein(MaskFade_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *maskSprite; // x0
  Il2CppObject *Component_object; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x19
  struct System_Action_o *v13; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4BCA4EE & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_TweenColor___, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v3);
    byte_4BCA4EE = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_14;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       maskSprite,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                            (UnityEngine_Object_o *)Component_object,
                                            0LL,
                                            0LL);
  if ( ((unsigned __int8)maskSprite & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_14;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
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
LABEL_14:
    sub_1C1AE30(maskSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v13 = callbackFunc;
  *(&p_callbackFunc[-1].fields._IsNormalFlowQuest_k__BackingField + 3) = 0;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1C1AB78(p_callbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v13->fields.m_target)(
      v13->fields.original_method_info,
      *(_QWORD *)&v13->fields.extra_arg);
  }
}


void __fastcall MaskFade__EndFadeout(MaskFade_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  struct UISprite_o *maskSprite; // x0
  Il2CppObject *Component_object; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x19
  struct System_Action_o *v15; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4BCA4EB & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_TweenColor___, v3);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    byte_4BCA4EB = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  if ( v5->static_fields->IsEnableFadeRerunSkipped )
  {
    maskSprite = this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_16;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)maskSprite,
                         (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    maskSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality(
                                        (UnityEngine_Object_o *)Component_object,
                                        0LL,
                                        0LL);
    if ( ((unsigned __int8)maskSprite & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_16;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
    }
  }
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
LABEL_16:
    sub_1C1AE30(maskSprite, method);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))maskSprite->klass->vtable._8_set_alpha.method)(
    maskSprite,
    maskSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    1.0);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v15 = callbackFunc;
  *(&p_callbackFunc[-1].fields._IsNormalFlowQuest_k__BackingField + 3) = 0;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1C1AB78(p_callbackFunc, 0LL, v8, v9, v10, v11, v12, v13);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v15->fields.m_target)(
      v15->fields.original_method_info,
      *(_QWORD *)&v15->fields.extra_arg);
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
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  int64_t maskSprite; // x0
  Il2CppObject *Component_object; // x22
  UnityEngine_GameObject_o *v21; // x19
  float v22; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  TweenColor_o *v24; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  const MethodInfo *v38; // x1
  BalanceConfig_c *v40; // x0
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v42; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4BCA4EC & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_TweenColor___, v13);
    sub_1C1ABD4(&FadeLogger_TypeInfo, v14);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v15);
    sub_1C1ABD4(&StringLiteral_6118/*"EndFadeout"*/, v16);
    sub_1C1ABD4(&StringLiteral_25782/*"実行中"*/, v17);
    sub_1C1ABD4(&StringLiteral_6714/*"FadeChangeColor"*/, v18);
    byte_4BCA4EC = 1;
  }
  if ( !this->fields.isExecuteMask )
    goto LABEL_13;
  maskSprite = (int64_t)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_34;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskSprite,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskSprite = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( (maskSprite & 1) == 0 )
    goto LABEL_13;
  if ( !Component_object )
    goto LABEL_34;
  if ( *((float *)&Component_object[9].monitor + 1) != 0.0 )
  {
LABEL_13:
    this->fields.callbackFunc = callback;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      (int64_t)callback,
      (int32_t)method,
      v5,
      v6,
      v7,
      v8);
    if ( kind == 1 )
    {
      v22 = 0.0;
    }
    else
    {
      if ( kind != 2 )
      {
        v40 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v40 = BalanceConfig_TypeInfo;
        }
        if ( !v40->static_fields->IsEnableFadeRerunSkipped )
          return 0;
        goto LABEL_32;
      }
      v22 = 1.0;
    }
    maskSprite = (int64_t)this->fields.colliderBase;
    this->fields.maskKind = kind;
    if ( maskSprite )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
      if ( duration <= 0.0 )
        goto LABEL_26;
      maskSprite = (int64_t)this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_34;
      UIWidget__set_color((UIWidget_o *)maskSprite, *(UnityEngine_Color_o *)(maskSprite + 148), 0LL);
      maskSprite = (int64_t)this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_34;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
      v42.fields.a = 1.0;
      v42.fields.r = v22;
      v42.fields.g = v22;
      v42.fields.b = v22;
      v24 = TweenColor__Begin(gameObject, duration, v42, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0LL, 0LL) )
      {
        this->fields.isExecuteMask = 1;
        maskSprite = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( v24 )
        {
          v24->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maskSprite;
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&v24->fields.eventReceiver,
            maskSprite,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30);
          v31 = StringLiteral_6118/*"EndFadeout"*/;
          v24->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6118/*"EndFadeout"*/;
          sub_1C1AB78((PartyOrganizationUtility_o *)&v24->fields.callWhenFinished, v31, v32, v33, v34, v35, v36, v37);
          return 1;
        }
      }
      else
      {
LABEL_26:
        maskSprite = (int64_t)this->fields.maskSprite;
        if ( maskSprite )
        {
          v41.fields.a = 1.0;
          v41.fields.r = v22;
          v41.fields.g = v22;
          v41.fields.b = v22;
          UIWidget__set_color((UIWidget_o *)maskSprite, v41, 0LL);
          MaskFade__EndFadeout(this, v38);
          return 1;
        }
      }
    }
LABEL_34:
    sub_1C1AE30(maskSprite, *(_QWORD *)&kind);
  }
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
  FadeLogger__CreateFadeLogText(
    (System_String_o *)StringLiteral_6714/*"FadeChangeColor"*/,
    kind,
    (System_String_o *)StringLiteral_25782/*"実行中"*/,
    duration,
    v21,
    0LL);
LABEL_32:
  ActionExtensions__Call(callback, 0LL);
  return 0;
}


bool __fastcall MaskFade__Fadein(MaskFade_o *this, float duration, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t maskSprite; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *Component_object; // x21
  int32_t maskKind; // w21
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 *v24; // x9
  BalanceConfig_c *v25; // x0
  float v26; // s9
  float v27; // s10
  float v28; // s11
  UnityEngine_GameObject_o *v29; // x0
  TweenColor_o *v30; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  bool result; // w0
  UnityEngine_Color_o value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v46; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4BCA4ED & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, callback);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_TweenColor___, v7);
    sub_1C1ABD4(&FadeLogger_TypeInfo, v8);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v9);
    sub_1C1ABD4(&StringLiteral_6720/*"Fadein"*/, v10);
    sub_1C1ABD4(&StringLiteral_25782/*"実行中"*/, v11);
    sub_1C1ABD4(&StringLiteral_6117/*"EndFadein"*/, v12);
    sub_1C1ABD4(&StringLiteral_25780/*"完了状態"*/, v13);
    byte_4BCA4ED = 1;
  }
  maskSprite = (int64_t)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_33;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskSprite,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( !this->fields.isExecuteMask )
  {
    v25 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v25 = BalanceConfig_TypeInfo;
    }
    if ( v25->static_fields->IsEnableFadeRerunSkipped )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      maskSprite = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( (maskSprite & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_33;
        value = TweenColor__get_value((TweenColor_o *)Component_object, 0LL);
        if ( value.fields.a <= 0.0 )
        {
          maskKind = this->fields.maskKind;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !FadeLogger_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
          v24 = &StringLiteral_25780/*"完了状態"*/;
          goto LABEL_32;
        }
      }
    }
LABEL_21:
    this->fields.callbackFunc = callback;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    this->fields.maskKind = 0;
    if ( duration <= 0.0 )
      goto LABEL_28;
    maskSprite = (int64_t)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_33;
    v26 = *(float *)(maskSprite + 148);
    v27 = *(float *)(maskSprite + 152);
    v28 = *(float *)(maskSprite + 156);
    v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
    v46.fields.a = 0.0;
    v46.fields.r = v26;
    v46.fields.g = v27;
    v46.fields.b = v28;
    v30 = TweenColor__Begin(v29, duration, v46, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v30, 0LL, 0LL) )
    {
LABEL_28:
      MaskFade__EndFadein(this, (const MethodInfo *)callback);
      return 1;
    }
    maskSprite = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( v30 )
    {
      v30->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maskSprite;
      sub_1C1AB78((PartyOrganizationUtility_o *)&v30->fields.eventReceiver, maskSprite, v31, v32, v33, v34, v35, v36);
      v37 = StringLiteral_6117/*"EndFadein"*/;
      v30->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6117/*"EndFadein"*/;
      sub_1C1AB78((PartyOrganizationUtility_o *)&v30->fields.callWhenFinished, v37, v38, v39, v40, v41, v42, v43);
      result = 1;
      this->fields.isExecuteMask = 1;
      return result;
    }
LABEL_33:
    sub_1C1AE30(maskSprite, callback);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskSprite = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( (maskSprite & 1) == 0 )
    goto LABEL_21;
  if ( !Component_object )
    goto LABEL_33;
  if ( *((float *)&Component_object[9].monitor + 1) != 0.0 )
    goto LABEL_21;
  maskKind = this->fields.maskKind;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
  v24 = &StringLiteral_25782/*"実行中"*/;
LABEL_32:
  FadeLogger__CreateFadeLogText(
    (System_String_o *)StringLiteral_6720/*"Fadein"*/,
    maskKind,
    (System_String_o *)*v24,
    duration,
    gameObject,
    0LL);
  ActionExtensions__Call(callback, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t maskSprite; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppObject *Component_object; // x22
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 *v25; // x9
  BalanceConfig_c *v26; // x0
  float v27; // s9
  UnityEngine_GameObject_o *v28; // x0
  TweenColor_o *v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  const MethodInfo *v43; // x1
  BalanceConfig_c *v45; // x0
  UnityEngine_Color_o value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v49; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4BCA4EA & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_TweenColor___, v9);
    sub_1C1ABD4(&FadeLogger_TypeInfo, v10);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v11);
    sub_1C1ABD4(&StringLiteral_6722/*"Fadeout"*/, v12);
    sub_1C1ABD4(&StringLiteral_6118/*"EndFadeout"*/, v13);
    sub_1C1ABD4(&StringLiteral_25782/*"実行中"*/, v14);
    sub_1C1ABD4(&StringLiteral_25780/*"完了状態"*/, v15);
    byte_4BCA4EA = 1;
  }
  maskSprite = (int64_t)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_47;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskSprite,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( !this->fields.isExecuteMask )
  {
    v26 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v26 = BalanceConfig_TypeInfo;
    }
    if ( v26->static_fields->IsEnableFadeRerunSkipped )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      maskSprite = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( (maskSprite & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_47;
        value = TweenColor__get_value((TweenColor_o *)Component_object, 0LL);
        if ( value.fields.a >= 1.0 )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !FadeLogger_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
          v25 = &StringLiteral_25780/*"完了状態"*/;
          goto LABEL_44;
        }
      }
    }
LABEL_21:
    this->fields.callbackFunc = callback;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    if ( kind == 1 )
    {
      v27 = 0.0;
    }
    else
    {
      if ( kind != 2 )
      {
        v45 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v45 = BalanceConfig_TypeInfo;
        }
        if ( !v45->static_fields->IsEnableFadeRerunSkipped )
          return 0;
        goto LABEL_45;
      }
      v27 = 1.0;
    }
    maskSprite = (int64_t)this->fields.colliderBase;
    this->fields.maskKind = kind;
    if ( maskSprite )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
      if ( duration <= 0.0 )
        goto LABEL_34;
      maskSprite = (int64_t)this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_47;
      v47.fields.a = *(float *)(maskSprite + 160);
      v47.fields.r = v27;
      v47.fields.g = v27;
      v47.fields.b = v27;
      UIWidget__set_color((UIWidget_o *)maskSprite, v47, 0LL);
      maskSprite = (int64_t)this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_47;
      v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
      v49.fields.a = 1.0;
      v49.fields.r = v27;
      v49.fields.g = v27;
      v49.fields.b = v27;
      v29 = TweenColor__Begin(v28, duration, v49, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0LL, 0LL) )
      {
        this->fields.isExecuteMask = 1;
        maskSprite = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( v29 )
        {
          v29->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maskSprite;
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&v29->fields.eventReceiver,
            maskSprite,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35);
          v36 = StringLiteral_6118/*"EndFadeout"*/;
          v29->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6118/*"EndFadeout"*/;
          sub_1C1AB78((PartyOrganizationUtility_o *)&v29->fields.callWhenFinished, v36, v37, v38, v39, v40, v41, v42);
          return 1;
        }
      }
      else
      {
LABEL_34:
        maskSprite = (int64_t)this->fields.maskSprite;
        if ( maskSprite )
        {
          v48.fields.a = 1.0;
          v48.fields.r = v27;
          v48.fields.g = v27;
          v48.fields.b = v27;
          UIWidget__set_color((UIWidget_o *)maskSprite, v48, 0LL);
          MaskFade__EndFadeout(this, v43);
          return 1;
        }
      }
    }
LABEL_47:
    sub_1C1AE30(maskSprite, *(_QWORD *)&kind);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskSprite = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( (maskSprite & 1) == 0 )
    goto LABEL_21;
  if ( !Component_object )
    goto LABEL_47;
  if ( *((float *)&Component_object[9].monitor + 1) != 1.0 )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
  v25 = &StringLiteral_25782/*"実行中"*/;
LABEL_44:
  FadeLogger__CreateFadeLogText(
    (System_String_o *)StringLiteral_6722/*"Fadeout"*/,
    kind,
    (System_String_o *)*v25,
    duration,
    gameObject,
    0LL);
LABEL_45:
  ActionExtensions__Call(callback, 0LL);
  return 0;
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
  Il2CppObject *Component_object; // x20

  if ( (byte_4BCA4E9 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_TweenColor___, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v3);
    byte_4BCA4E9 = 1;
  }
  if ( this->fields.isExecuteMask )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_15;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         maskSprite,
                         (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    maskSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)Component_object,
                                              0LL,
                                              0LL);
    if ( ((unsigned __int8)maskSprite & 1) != 0 )
    {
      if ( !Component_object || (maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite) == 0LL )
LABEL_15:
        sub_1C1AE30(maskSprite, method);
      UIWidget__set_color((UIWidget_o *)maskSprite, (UnityEngine_Color_o)Component_object[9], 0LL);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
    }
    this->fields.isExecuteMask = 0;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  this->fields.maskKind = 0;
  if ( !maskSprite )
    goto LABEL_15;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))maskSprite->klass[1]._1.castClass)(
    maskSprite,
    maskSprite->klass[1]._1.declaringType,
    0.0);
  maskSprite = (UnityEngine_Component_o *)this->fields.colliderBase;
  if ( !maskSprite )
    goto LABEL_15;
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
    sub_1C1AE30(0LL, method);
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
    sub_1C1AE30(0LL, method);
  return ((float (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))maskSprite->klass->vtable._7_get_alpha.method)(
           maskSprite,
           maskSprite->klass->vtable._8_set_alpha.methodPtr) >= 1.0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaskFade__SetInitColor(MaskFade_o *this, int32_t kind, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x0
  float a; // s3
  float r; // s0
  float g; // s1
  float b; // s2

  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_1C1AE30(0LL, kind);
  if ( kind == 1 )
  {
    r = 0.0;
    g = 0.0;
    b = 0.0;
  }
  else if ( kind == 2 )
  {
    r = 1.0;
    g = 1.0;
    b = 1.0;
  }
  else
  {
    g = maskSprite->fields.mColor.fields.g;
    b = maskSprite->fields.mColor.fields.b;
    r = maskSprite->fields.mColor.fields.r;
  }
  a = maskSprite->fields.mColor.fields.a;
  UIWidget__set_color((UIWidget_o *)maskSprite, *(UnityEngine_Color_o *)&r, 0LL);
}


void __fastcall MaskFade__SetMaskCollider(MaskFade_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_GameObject_o *colliderBase; // x0

  colliderBase = this->fields.colliderBase;
  if ( !colliderBase )
    sub_1C1AE30(0LL, isEnable);
  UnityEngine_GameObject__SetActive(colliderBase, isEnable, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaskFade__TryGetColorByMaskFade(
        UnityEngine_Color_o *color,
        int32_t kind,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  bool v4; // w8

  if ( kind == 1 )
  {
    v4 = 1;
    defaultColor.fields.a = 1.0;
    defaultColor.fields.r = 0.0;
    defaultColor.fields.g = 0.0;
    defaultColor.fields.b = 0.0;
  }
  else if ( kind == 2 )
  {
    v4 = 1;
    defaultColor.fields.r = 1.0;
    defaultColor.fields.g = 1.0;
    defaultColor.fields.b = 1.0;
    defaultColor.fields.a = 1.0;
  }
  else
  {
    v4 = 0;
  }
  *color = defaultColor;
  return v4;
}


int32_t __fastcall MaskFade__get_Depth(MaskFade_o *this, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x8

  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_1C1AE30(this, method);
  return maskSprite->fields.mDepth;
}


void __fastcall MaskFade__set_Depth(MaskFade_o *this, int32_t value, const MethodInfo *method)
{
  UIWidget_o *maskSprite; // x0

  maskSprite = (UIWidget_o *)this->fields.maskSprite;
  if ( !maskSprite )
    sub_1C1AE30(0LL, value);
  UIWidget__set_depth(maskSprite, value, 0LL);
}