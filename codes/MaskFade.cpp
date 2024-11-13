void __fastcall MaskFade___ctor(MaskFade_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MaskFade__EndFadein(MaskFade_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *maskSprite; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x19
  struct System_Action_o *v16; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4B18B74 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenColor___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B18B74 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_14;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       maskSprite,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
    sub_1BCAA3C(maskSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v16 = callbackFunc;
  *(&p_callbackFunc[-1].fields._IsNormalFlowQuest_k__BackingField + 3) = 0;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v16->fields.m_target)(
      v16->fields.original_method_info,
      *(_QWORD *)&v16->fields.extra_arg);
  }
}


void __fastcall MaskFade__EndFadeout(MaskFade_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  BalanceConfig_c *v8; // x0
  struct UISprite_o *maskSprite; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x19
  struct System_Action_o *v19; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4B18B71 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenColor___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B18B71 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v8 = BalanceConfig_TypeInfo;
  }
  if ( v8->static_fields->IsEnableFadeRerunSkipped )
  {
    maskSprite = this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_16;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)maskSprite,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
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
    sub_1BCAA3C(maskSprite, method);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))maskSprite->klass->vtable._8_set_alpha.method)(
    maskSprite,
    maskSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    1.0);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v19 = callbackFunc;
  *(&p_callbackFunc[-1].fields._IsNormalFlowQuest_k__BackingField + 3) = 0;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, v12, v13, v14, v15, v16, v17);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v19->fields.m_target)(
      v19->fields.original_method_info,
      *(_QWORD *)&v19->fields.extra_arg);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  int64_t maskSprite; // x0
  __int64 v26; // x1
  Il2CppObject *Component_object; // x22
  __int64 v28; // x1
  UnityEngine_GameObject_o *v29; // x19
  float v30; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v32; // x1
  TweenColor_o *v33; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  const MethodInfo *v47; // x1
  BalanceConfig_c *v49; // x0
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v51; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4B18B72 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&kind, callback);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenColor___, v13, v14);
    sub_1BCA7E0(&FadeLogger_TypeInfo, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_6083/*"EndFadeout"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_25609/*"実行中"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_6675/*"FadeChangeColor"*/, v23, v24);
    byte_4B18B72 = 1;
  }
  if ( !this->fields.isExecuteMask )
    goto LABEL_13;
  maskSprite = (int64_t)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_34;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskSprite,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  maskSprite = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( (maskSprite & 1) == 0 )
    goto LABEL_13;
  if ( !Component_object )
    goto LABEL_34;
  if ( *((float *)&Component_object[9].monitor + 1) != 0.0 )
  {
LABEL_13:
    this->fields.callbackFunc = callback;
    sub_1BCA784(
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
      v30 = 0.0;
    }
    else
    {
      if ( kind != 2 )
      {
        v49 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&kind);
          v49 = BalanceConfig_TypeInfo;
        }
        if ( !v49->static_fields->IsEnableFadeRerunSkipped )
          return 0;
        goto LABEL_32;
      }
      v30 = 1.0;
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
      v51.fields.a = 1.0;
      v51.fields.r = v30;
      v51.fields.g = v30;
      v51.fields.b = v30;
      v33 = TweenColor__Begin(gameObject, duration, v51, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v33, 0LL, 0LL) )
      {
        this->fields.isExecuteMask = 1;
        maskSprite = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( v33 )
        {
          v33->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maskSprite;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v33->fields.eventReceiver,
            maskSprite,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39);
          v40 = StringLiteral_6083/*"EndFadeout"*/;
          v33->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6083/*"EndFadeout"*/;
          sub_1BCA784((PartyOrganizationUtility_o *)&v33->fields.callWhenFinished, v40, v41, v42, v43, v44, v45, v46);
          return 1;
        }
      }
      else
      {
LABEL_26:
        maskSprite = (int64_t)this->fields.maskSprite;
        if ( maskSprite )
        {
          v50.fields.a = 1.0;
          v50.fields.r = v30;
          v50.fields.g = v30;
          v50.fields.b = v30;
          UIWidget__set_color((UIWidget_o *)maskSprite, v50, 0LL);
          MaskFade__EndFadeout(this, v47);
          return 1;
        }
      }
    }
LABEL_34:
    sub_1BCAA3C(maskSprite, *(_QWORD *)&kind);
  }
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo, v28);
  FadeLogger__CreateFadeLogText(
    (System_String_o *)StringLiteral_6675/*"FadeChangeColor"*/,
    kind,
    (System_String_o *)StringLiteral_25609/*"実行中"*/,
    duration,
    v29,
    0LL);
LABEL_32:
  ActionExtensions__Call(callback, 0LL);
  return 0;
}


bool __fastcall MaskFade__Fadein(MaskFade_o *this, float duration, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int64_t maskSprite; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  Il2CppObject *Component_object; // x21
  int32_t maskKind; // w21
  __int64 v31; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 *v33; // x9
  BalanceConfig_c *v34; // x0
  float v35; // s9
  float v36; // s10
  float v37; // s11
  UnityEngine_GameObject_o *v38; // x0
  __int64 v39; // x1
  TweenColor_o *v40; // x20
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  bool result; // w0
  __int64 v55; // x1
  UnityEngine_Color_o value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v57; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4B18B73 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenColor___, v7, v8);
    sub_1BCA7E0(&FadeLogger_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_6681/*"Fadein"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_25609/*"実行中"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_6082/*"EndFadein"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_25607/*"完了状態"*/, v19, v20);
    byte_4B18B73 = 1;
  }
  maskSprite = (int64_t)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_33;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskSprite,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( !this->fields.isExecuteMask )
  {
    v34 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v22);
      v34 = BalanceConfig_TypeInfo;
    }
    if ( v34->static_fields->IsEnableFadeRerunSkipped )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
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
            j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo, v55);
          v33 = &StringLiteral_25607/*"完了状態"*/;
          goto LABEL_32;
        }
      }
    }
LABEL_21:
    this->fields.callbackFunc = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    this->fields.maskKind = 0;
    if ( duration <= 0.0 )
      goto LABEL_28;
    maskSprite = (int64_t)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_33;
    v35 = *(float *)(maskSprite + 148);
    v36 = *(float *)(maskSprite + 152);
    v37 = *(float *)(maskSprite + 156);
    v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
    v57.fields.a = 0.0;
    v57.fields.r = v35;
    v57.fields.g = v36;
    v57.fields.b = v37;
    v40 = TweenColor__Begin(v38, duration, v57, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v40, 0LL, 0LL) )
    {
LABEL_28:
      MaskFade__EndFadein(this, (const MethodInfo *)callback);
      return 1;
    }
    maskSprite = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( v40 )
    {
      v40->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maskSprite;
      sub_1BCA784((PartyOrganizationUtility_o *)&v40->fields.eventReceiver, maskSprite, v41, v42, v43, v44, v45, v46);
      v47 = StringLiteral_6082/*"EndFadein"*/;
      v40->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6082/*"EndFadein"*/;
      sub_1BCA784((PartyOrganizationUtility_o *)&v40->fields.callWhenFinished, v47, v48, v49, v50, v51, v52, v53);
      result = 1;
      this->fields.isExecuteMask = 1;
      return result;
    }
LABEL_33:
    sub_1BCAA3C(maskSprite, callback);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
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
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo, v31);
  v33 = &StringLiteral_25609/*"実行中"*/;
LABEL_32:
  FadeLogger__CreateFadeLogText(
    (System_String_o *)StringLiteral_6681/*"Fadein"*/,
    maskKind,
    (System_String_o *)*v33,
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  int64_t maskSprite; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  Il2CppObject *Component_object; // x22
  __int64 v32; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 *v34; // x9
  BalanceConfig_c *v35; // x0
  float v36; // s9
  UnityEngine_GameObject_o *v37; // x0
  __int64 v38; // x1
  TweenColor_o *v39; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  const MethodInfo *v53; // x1
  BalanceConfig_c *v55; // x0
  __int64 v56; // x1
  UnityEngine_Color_o value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v60; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4B18B70 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&kind, callback);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenColor___, v9, v10);
    sub_1BCA7E0(&FadeLogger_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_6683/*"Fadeout"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_6083/*"EndFadeout"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_25609/*"実行中"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_25607/*"完了状態"*/, v21, v22);
    byte_4B18B70 = 1;
  }
  maskSprite = (int64_t)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_47;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskSprite,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( !this->fields.isExecuteMask )
  {
    v35 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v24);
      v35 = BalanceConfig_TypeInfo;
    }
    if ( v35->static_fields->IsEnableFadeRerunSkipped )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
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
            j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo, v56);
          v34 = &StringLiteral_25607/*"完了状態"*/;
          goto LABEL_44;
        }
      }
    }
LABEL_21:
    this->fields.callbackFunc = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    if ( kind == 1 )
    {
      v36 = 0.0;
    }
    else
    {
      if ( kind != 2 )
      {
        v55 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&kind);
          v55 = BalanceConfig_TypeInfo;
        }
        if ( !v55->static_fields->IsEnableFadeRerunSkipped )
          return 0;
        goto LABEL_45;
      }
      v36 = 1.0;
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
      v58.fields.a = *(float *)(maskSprite + 160);
      v58.fields.r = v36;
      v58.fields.g = v36;
      v58.fields.b = v36;
      UIWidget__set_color((UIWidget_o *)maskSprite, v58, 0LL);
      maskSprite = (int64_t)this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_47;
      v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
      v60.fields.a = 1.0;
      v60.fields.r = v36;
      v60.fields.g = v36;
      v60.fields.b = v36;
      v39 = TweenColor__Begin(v37, duration, v60, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0LL, 0LL) )
      {
        this->fields.isExecuteMask = 1;
        maskSprite = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( v39 )
        {
          v39->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maskSprite;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v39->fields.eventReceiver,
            maskSprite,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45);
          v46 = StringLiteral_6083/*"EndFadeout"*/;
          v39->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6083/*"EndFadeout"*/;
          sub_1BCA784((PartyOrganizationUtility_o *)&v39->fields.callWhenFinished, v46, v47, v48, v49, v50, v51, v52);
          return 1;
        }
      }
      else
      {
LABEL_34:
        maskSprite = (int64_t)this->fields.maskSprite;
        if ( maskSprite )
        {
          v59.fields.a = 1.0;
          v59.fields.r = v36;
          v59.fields.g = v36;
          v59.fields.b = v36;
          UIWidget__set_color((UIWidget_o *)maskSprite, v59, 0LL);
          MaskFade__EndFadeout(this, v53);
          return 1;
        }
      }
    }
LABEL_47:
    sub_1BCAA3C(maskSprite, *(_QWORD *)&kind);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  maskSprite = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( (maskSprite & 1) == 0 )
    goto LABEL_21;
  if ( !Component_object )
    goto LABEL_47;
  if ( *((float *)&Component_object[9].monitor + 1) != 1.0 )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo, v32);
  v34 = &StringLiteral_25609/*"実行中"*/;
LABEL_44:
  FadeLogger__CreateFadeLogText(
    (System_String_o *)StringLiteral_6683/*"Fadeout"*/,
    kind,
    (System_String_o *)*v34,
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *maskSprite; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4B18B6F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenColor___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B18B6F = 1;
  }
  if ( this->fields.isExecuteMask )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_15;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         maskSprite,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    maskSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)Component_object,
                                              0LL,
                                              0LL);
    if ( ((unsigned __int8)maskSprite & 1) != 0 )
    {
      if ( !Component_object || (maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite) == 0LL )
LABEL_15:
        sub_1BCAA3C(maskSprite, method);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, *(_QWORD *)&kind);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall MaskFade__SetMaskCollider(MaskFade_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_GameObject_o *colliderBase; // x0

  colliderBase = this->fields.colliderBase;
  if ( !colliderBase )
    sub_1BCAA3C(0LL, isEnable);
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
    sub_1BCAA3C(this, method);
  return maskSprite->fields.mDepth;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaskFade__set_Depth(MaskFade_o *this, int32_t value, const MethodInfo *method)
{
  UIWidget_o *maskSprite; // x0

  maskSprite = (UIWidget_o *)this->fields.maskSprite;
  if ( !maskSprite )
    sub_1BCAA3C(0LL, *(_QWORD *)&value);
  UIWidget__set_depth(maskSprite, value, 0LL);
}