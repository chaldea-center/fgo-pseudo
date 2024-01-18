void __fastcall EventRaceBoostEffect___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct EventRaceBoostEffect_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_41886EF & 1) == 0 )
  {
    sub_B2C35C(&EventRaceBoostEffect_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_21665/*"race_boost_effect_{0}"*/, v8);
    sub_B2C35C(&StringLiteral_6182/*"EventRaceBoostEffect_{0}"*/, v9);
    byte_41886EF = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventRaceBoostEffect_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_21665/*"race_boost_effect_{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21665/*"race_boost_effect_{0}"*/;
  sub_B2C2F8(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = EventRaceBoostEffect_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_6182/*"EventRaceBoostEffect_{0}"*/;
  v12->ANIM_NAME = (struct System_String_o *)StringLiteral_6182/*"EventRaceBoostEffect_{0}"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v12->ANIM_NAME, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall EventRaceBoostEffect___ctor(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventRaceBoostEffect__CheckCallback(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  if ( !this->fields.destroyedBeforeVoiceStop && this->fields.animEnded && this->fields.seEnded )
    ActionExtensions__Call(this->fields.callBack, 0LL);
}


int32_t __fastcall EventRaceBoostEffect__GetSvtId(
        EventRaceBoostEffect_o *this,
        System_String_o *voiceStr,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  System_String_array *v5; // x1
  __int64 v7; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_41886EC & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, voiceStr);
    byte_41886EC = 1;
  }
  result = 0;
  v4 = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_11;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_12;
  LOWORD(v4->m_Items[0]) = 95;
  if ( !voiceStr || (v4 = System_String__Split(voiceStr, (System_Char_array *)v4, 0LL), result = 0, !v4) )
LABEL_11:
    sub_B2C434(v4, v5);
  if ( !v4->max_length )
  {
LABEL_12:
    v7 = sub_B2C460(v4);
    sub_B2C400(v7, 0LL);
  }
  if ( System_Int32__TryParse(v4->m_Items[0], &result, 0LL) )
    return result;
  else
    return 0;
}


System_String_o *__fastcall EventRaceBoostEffect__GetVoiceId(
        EventRaceBoostEffect_o *this,
        System_String_o *voiceStr,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_array *v5; // x0
  System_String_array *v6; // x1
  int max_length; // w8
  __int64 v9; // x0

  if ( (byte_41886ED & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, voiceStr);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v4);
    byte_41886ED = 1;
  }
  v5 = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_11;
  v6 = v5;
  if ( !v5->max_length )
    goto LABEL_12;
  LOWORD(v5->m_Items[0]) = 95;
  if ( !voiceStr || (v5 = System_String__Split(voiceStr, (System_Char_array *)v5, 0LL)) == 0LL )
LABEL_11:
    sub_B2C434(v5, v6);
  max_length = v5->max_length;
  if ( max_length >= 2 )
  {
    if ( max_length != 2 )
      return System_String__Concat_44307816(v5->m_Items[1], (System_String_o *)StringLiteral_15905/*"_"*/, v5->m_Items[2], 0LL);
LABEL_12:
    v9 = sub_B2C460(v5);
    sub_B2C400(v9, 0LL);
  }
  return 0LL;
}


void __fastcall EventRaceBoostEffect__OnDestroy(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  int32_t randvoiceSvt; // w20
  SoundManager_o *v7; // x19
  System_String_o *VoiceAssetName_31404932; // x0
  __int64 v9; // x1

  if ( (byte_41886EE & 1) == 0 )
  {
    sub_B2C35C(&ServantVoiceEntity_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_41886EE = 1;
  }
  this->fields.destroyedBeforeVoiceStop = 1;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopVoiceAll(0.0, 0LL);
  if ( this->fields.randvoiceSvt >= 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    randvoiceSvt = this->fields.randvoiceSvt;
    v7 = (SoundManager_o *)Instance;
    if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
    }
    VoiceAssetName_31404932 = ServantVoiceEntity__getVoiceAssetName_31404932(randvoiceSvt, 0LL);
    if ( !v7 )
      sub_B2C434(VoiceAssetName_31404932, v9);
    SoundManager__ReleaseAudioAssetStorage(v7, VoiceAssetName_31404932, 0LL);
  }
}


void __fastcall EventRaceBoostEffect__SetUpAndPlay(
        EventRaceBoostEffect_o *this,
        QuestRacePointEntity_o *boostEnt,
        int32_t boostGrade,
        int32_t boostPoint,
        int32_t itemImgId,
        bool playVoice,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x20
  QuestRacePointEntity_o *v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  QuestRacePointEntity_o **v28; // x27
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_o *RandVoice; // x21
  _BOOL8 IsNullOrEmpty; // x0
  EventRaceBoostEffect_o *SvtId; // x0
  const MethodInfo *v50; // x2
  struct System_String_o *VoiceId; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  const MethodInfo *v58; // x6
  WebViewManager_o *Instance; // x0
  int32_t randvoiceSvt; // w21
  SoundManager_o *v61; // x19
  System_String_o *VoiceAssetName_31404932; // x21
  System_Action_o *v63; // x22

  if ( (byte_41886E8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, boostEnt);
    sub_B2C35C(&ServantVoiceEntity_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v16);
    sub_B2C35C(&Method_EventRaceBoostEffect___c__DisplayClass13_0__SetUpAndPlay_b__0__, v17);
    sub_B2C35C(&EventRaceBoostEffect___c__DisplayClass13_0_TypeInfo, v18);
    byte_41886E8 = 1;
  }
  v19 = sub_B2C42C(EventRaceBoostEffect___c__DisplayClass13_0_TypeInfo);
  EventRaceBoostEffect___c__DisplayClass13_0___ctor((EventRaceBoostEffect___c__DisplayClass13_0_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_15;
  *(_QWORD *)(v19 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 24) = boostEnt;
  v28 = (QuestRacePointEntity_o **)(v19 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v19 + 24), (System_Int32_array **)boostEnt, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)(v19 + 48) = callback;
  *(_DWORD *)(v19 + 32) = boostGrade;
  *(_DWORD *)(v19 + 36) = boostPoint;
  *(_DWORD *)(v19 + 40) = itemImgId;
  sub_B2C2F8((BattleServantConfConponent_o *)(v19 + 48), (System_Int32_array **)callback, v35, v36, v37, v38, v39, v40);
  if ( !playVoice )
  {
LABEL_9:
    this->fields.destroyedBeforeVoiceStop = 0;
    this->fields.randvoiceSvt = 0;
    this->fields.randvoiceId = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.randvoiceId, 0LL, v41, v42, v43, v44, v45, v46);
    EventRaceBoostEffect__setupLocal(
      this,
      *(QuestRacePointEntity_o **)(v19 + 24),
      *(_DWORD *)(v19 + 32),
      *(_DWORD *)(v19 + 36),
      *(_DWORD *)(v19 + 40),
      *(System_Action_o **)(v19 + 48),
      v58);
    return;
  }
  v20 = *v28;
  if ( !*v28 )
    goto LABEL_15;
  RandVoice = QuestRacePointEntity__GetRandVoice(v20, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(RandVoice, 0LL);
  if ( IsNullOrEmpty )
    goto LABEL_9;
  SvtId = (EventRaceBoostEffect_o *)EventRaceBoostEffect__GetSvtId(
                                      (EventRaceBoostEffect_o *)IsNullOrEmpty,
                                      RandVoice,
                                      (const MethodInfo *)v41);
  this->fields.randvoiceSvt = (int)SvtId;
  VoiceId = EventRaceBoostEffect__GetVoiceId(SvtId, RandVoice, v50);
  this->fields.randvoiceId = VoiceId;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.randvoiceId,
    (System_Int32_array **)VoiceId,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  if ( this->fields.randvoiceSvt < 1 || System_String__IsNullOrEmpty(this->fields.randvoiceId, 0LL) )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  randvoiceSvt = this->fields.randvoiceSvt;
  v61 = (SoundManager_o *)Instance;
  if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
  }
  VoiceAssetName_31404932 = ServantVoiceEntity__getVoiceAssetName_31404932(randvoiceSvt, 0LL);
  v63 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v63,
    (Il2CppObject *)v19,
    Method_EventRaceBoostEffect___c__DisplayClass13_0__SetUpAndPlay_b__0__,
    0LL);
  if ( !v61 )
LABEL_15:
    sub_B2C434(v20, v21);
  SoundManager__LoadAudioAssetStorage(v61, VoiceAssetName_31404932, v63, 1, 0LL);
}


void __fastcall EventRaceBoostEffect__afterSE(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_String_o *randvoiceId; // x20
  System_String_o *v11; // x21
  SeManager_c *v12; // x8
  float DEFAULT_VOLUME; // s8
  System_Action_o *v14; // x22

  if ( (byte_41886EA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_EventRaceBoostEffect_afterVoice__, v3);
    sub_B2C35C(&SeManager_TypeInfo, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_3963/*"ChrVoice_"*/, v6);
    byte_41886EA = 1;
  }
  if ( !this->fields.destroyedBeforeVoiceStop )
  {
    this->fields.seEnded = 1;
    EventRaceBoostEffect__CheckCallback(this, method);
    if ( this->fields.randvoiceSvt < 1 || System_String__IsNullOrEmpty(this->fields.randvoiceId, 0LL) )
    {
      EventRaceBoostEffect__afterVoice(this, v7);
    }
    else
    {
      v8 = System_Int32__ToString((int)this + 60, 0LL);
      v9 = System_String__Concat_44305532((System_String_o *)StringLiteral_3963/*"ChrVoice_"*/, v8, 0LL);
      randvoiceId = this->fields.randvoiceId;
      v11 = v9;
      v12 = SeManager_TypeInfo;
      if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        v12 = SeManager_TypeInfo;
      }
      DEFAULT_VOLUME = v12->static_fields->DEFAULT_VOLUME;
      v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_EventRaceBoostEffect_afterVoice__, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playVoice_24786800(v11, randvoiceId, DEFAULT_VOLUME, v14, 0LL);
    }
  }
}


void __fastcall EventRaceBoostEffect__afterVoice(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_41886EB & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41886EB = 1;
  }
  if ( !this->fields.destroyedBeforeVoiceStop )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  }
}


void __fastcall EventRaceBoostEffect__onEndAnim(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  if ( !this->fields.destroyedBeforeVoiceStop )
  {
    this->fields.animEnded = 1;
    EventRaceBoostEffect__CheckCallback(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRaceBoostEffect__setupLocal(
        EventRaceBoostEffect_o *this,
        QuestRacePointEntity_o *boostEnt,
        int32_t boostGrade,
        int32_t boostPoint,
        int32_t itemImgId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  UIAtlas_o *UIAtlasBySpriteName; // x0
  UIWidget_OnPostFillCallback_c *v28; // x8
  __int64 v29; // x8
  System_Collections_Generic_List_UIAtlas__o *v30; // x25
  System_String_o *SP_NAME; // x24
  Il2CppObject *v32; // x0
  System_String_o *v33; // x24
  struct UISprite_array *effectSp; // x8
  UIAtlas_o *v35; // x25
  __int64 v36; // x28
  int max_length; // w9
  il2cpp_array_size_t v38; // w22
  struct UISprite_array *v39; // x8
  UnityEngine_Object_o *boostItemSp; // x24
  UISprite_o *v41; // x24
  bool v42; // w23
  UnityEngine_Object_o *boostCntLb; // x23
  UILabel_o *v44; // x23
  System_String_o *v45; // x24
  Il2CppObject *v46; // x0
  EventRaceBoostEffect_c *v47; // x0
  System_String_o *ANIM_NAME; // x22
  Il2CppObject *v49; // x0
  System_String_o *v50; // x21
  UnityEngine_Object_o *ComponentInChildren_UIWidget; // x23
  UnityEngine_Object_o *v52; // x22
  __int64 v53; // x3
  UISprite_c *klass; // x8
  UIAtlas_o *v55; // x21
  unsigned __int64 v56; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v58; // x0
  float length; // s0
  System_String_o *Se; // x20
  const MethodInfo *v61; // x1
  System_Action_o *v62; // x21
  __int64 v63; // x0
  int32_t v64; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v65; // [xsp+8h] [xbp-58h] BYREF
  int32_t BoostTypeColor; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_41886E9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, boostEnt);
    sub_B2C35C(&AtlasManager_TypeInfo, v14);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v15);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v16);
    sub_B2C35C(&Method_EventRaceBoostEffect__setupLocal_b__14_0__, v17);
    sub_B2C35C(&EventRaceBoostEffect_TypeInfo, v18);
    sub_B2C35C(&int_TypeInfo, v19);
    sub_B2C35C(&LocalizationManager_TypeInfo, v20);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v21);
    sub_B2C35C(&SeManager_TypeInfo, v22);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v23);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v24);
    sub_B2C35C(&StringLiteral_5677/*"EVENT_RACE_BOOST_COUNT"*/, v25);
    sub_B2C35C(&StringLiteral_21243/*"onEndAnim"*/, v26);
    byte_41886E9 = 1;
  }
  if ( this->fields.effectSp )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4183C65 )
    {
      sub_B2C35C(&TerminalSceneComponent_TypeInfo, boostEnt);
      byte_4183C65 = 1;
    }
    UIAtlasBySpriteName = (UIAtlas_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      UIAtlasBySpriteName = (UIAtlas_o *)TerminalSceneComponent_TypeInfo;
    }
    v28 = *(UIWidget_OnPostFillCallback_c **)UIAtlasBySpriteName[2].monitor;
    if ( v28 )
    {
      v29 = *(_QWORD *)&v28->_2.static_fields_size;
      if ( v29 )
      {
        v30 = *(System_Collections_Generic_List_UIAtlas__o **)(v29 + 288);
        this->fields.callBack = callback;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.callBack,
          (System_Int32_array **)callback,
          *(System_String_array ***)&boostGrade,
          *(System_String_array ***)&boostPoint,
          *(System_Boolean_array ***)&itemImgId,
          (System_Int32_array **)callback,
          (System_Int32_array *)method,
          v7);
        UIAtlasBySpriteName = (UIAtlas_o *)EventRaceBoostEffect_TypeInfo;
        if ( (BYTE3(EventRaceBoostEffect_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRaceBoostEffect_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRaceBoostEffect_TypeInfo);
        }
        if ( boostEnt )
        {
          SP_NAME = EventRaceBoostEffect_TypeInfo->static_fields->SP_NAME;
          BoostTypeColor = QuestRacePointEntity__GetBoostTypeColor(boostEnt, 0LL);
          v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &BoostTypeColor);
          v33 = System_String__Format(SP_NAME, v32, 0LL);
          UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(v30, v33, 0LL);
          effectSp = this->fields.effectSp;
          if ( effectSp )
          {
            v35 = UIAtlasBySpriteName;
            v36 = 4LL;
            while ( 1 )
            {
              max_length = effectSp->max_length;
              v38 = v36 - 4;
              if ( (int)v36 - 4 >= max_length )
                break;
              if ( v38 >= max_length )
                goto LABEL_84;
              UIAtlasBySpriteName = (UIAtlas_o *)*((_QWORD *)&effectSp->obj.klass + v36);
              if ( UIAtlasBySpriteName )
              {
                UISprite__set_atlas((UISprite_o *)UIAtlasBySpriteName, v35, 0LL);
                v39 = this->fields.effectSp;
                if ( v39 )
                {
                  if ( v38 >= v39->max_length )
                  {
LABEL_84:
                    v63 = sub_B2C460(UIAtlasBySpriteName);
                    sub_B2C400(v63, 0LL);
                  }
                  UIAtlasBySpriteName = (UIAtlas_o *)*((_QWORD *)&v39->obj.klass + v36);
                  if ( UIAtlasBySpriteName )
                  {
                    UISprite__set_spriteName((UISprite_o *)UIAtlasBySpriteName, v33, 0LL);
                    effectSp = this->fields.effectSp;
                    ++v36;
                    if ( effectSp )
                      continue;
                  }
                }
              }
              goto LABEL_83;
            }
            boostItemSp = (UnityEngine_Object_o *)this->fields.boostItemSp;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(boostItemSp, 0LL, 0LL) )
            {
              if ( itemImgId < 1 )
              {
                v42 = 0;
              }
              else
              {
                v41 = this->fields.boostItemSp;
                if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                v42 = AtlasManager__SetItem(v41, itemImgId, 0LL);
              }
              UIAtlasBySpriteName = (UIAtlas_o *)this->fields.boostItemSp;
              if ( !UIAtlasBySpriteName )
                goto LABEL_83;
              UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                   0LL);
              if ( !UIAtlasBySpriteName )
                goto LABEL_83;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)UIAtlasBySpriteName, v42, 0LL);
            }
            boostCntLb = (UnityEngine_Object_o *)this->fields.boostCntLb;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(boostCntLb, 0LL, 0LL) )
            {
              v44 = this->fields.boostCntLb;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v45 = LocalizationManager__Get((System_String_o *)StringLiteral_5677/*"EVENT_RACE_BOOST_COUNT"*/, 0LL);
              v65 = boostPoint;
              v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65);
              UIAtlasBySpriteName = (UIAtlas_o *)System_String__Format(v45, v46, 0LL);
              if ( !v44 )
                goto LABEL_83;
              UILabel__set_text(v44, (System_String_o *)UIAtlasBySpriteName, 0LL);
            }
            v47 = EventRaceBoostEffect_TypeInfo;
            if ( (BYTE3(EventRaceBoostEffect_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventRaceBoostEffect_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRaceBoostEffect_TypeInfo);
              v47 = EventRaceBoostEffect_TypeInfo;
            }
            ANIM_NAME = v47->static_fields->ANIM_NAME;
            v64 = boostGrade;
            v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64);
            v50 = System_String__Format(ANIM_NAME, v49, 0LL);
            UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
            if ( UIAtlasBySpriteName )
            {
              ComponentInChildren_UIWidget = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                       (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                                       (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
              UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
              if ( UIAtlasBySpriteName )
              {
                v52 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Object__op_Inequality(
                                                     ComponentInChildren_UIWidget,
                                                     0LL,
                                                     0LL);
                if ( ((unsigned __int8)UIAtlasBySpriteName & 1) != 0 )
                {
                  if ( ComponentInChildren_UIWidget )
                  {
                    SimpleAnimation__Play_16486620((SimpleAnimation_o *)ComponentInChildren_UIWidget, v50, 0LL);
                    UIAtlasBySpriteName = (UIAtlas_o *)SimpleAnimation__get_Item(
                                                         (SimpleAnimation_o *)ComponentInChildren_UIWidget,
                                                         v50,
                                                         0LL);
                    if ( UIAtlasBySpriteName )
                    {
                      klass = (UISprite_c *)UIAtlasBySpriteName->klass;
                      v55 = UIAtlasBySpriteName;
                      if ( *(_WORD *)&UIAtlasBySpriteName->klass->_2.bitflags1 )
                      {
                        v56 = 0LL;
                        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
                        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                        {
                          ++v56;
                          p_offset += 2;
                          if ( v56 >= *(unsigned __int16 *)&UIAtlasBySpriteName->klass->_2.bitflags1 )
                            goto LABEL_65;
                        }
                        v58 = (__int64)(&klass->vtable._13_GetSides.method + 2 * *(_DWORD *)p_offset);
                      }
                      else
                      {
LABEL_65:
                        v58 = sub_AC5258(UIAtlasBySpriteName, SimpleAnimation_State_TypeInfo, 13LL, v53);
                      }
                      length = (*(float (__fastcall **)(UIAtlas_o *, _QWORD))v58)(v55, *(_QWORD *)(v58 + 8));
                      goto LABEL_75;
                    }
                  }
                }
                else
                {
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Object__op_Inequality(v52, 0LL, 0LL);
                  if ( ((unsigned __int8)UIAtlasBySpriteName & 1) == 0 )
                    goto LABEL_76;
                  if ( v52 )
                  {
                    UnityEngine_Animation__Play_50201580((UnityEngine_Animation_o *)v52, v50, 0LL);
                    UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Animation__get_Item(
                                                         (UnityEngine_Animation_o *)v52,
                                                         v50,
                                                         0LL);
                    if ( UIAtlasBySpriteName )
                    {
                      length = UnityEngine_AnimationState__get_length(
                                 (UnityEngine_AnimationState_o *)UIAtlasBySpriteName,
                                 0LL);
LABEL_75:
                      UnityEngine_MonoBehaviour__Invoke(
                        (UnityEngine_MonoBehaviour_o *)this,
                        (System_String_o *)StringLiteral_21243/*"onEndAnim"*/,
                        length,
                        0LL);
LABEL_76:
                      Se = QuestRacePointEntity__GetSe(boostEnt, 0LL);
                      if ( System_String__IsNullOrEmpty(Se, 0LL) )
                      {
                        EventRaceBoostEffect__afterSE(this, v61);
                      }
                      else
                      {
                        v62 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                        System_Action___ctor(
                          v62,
                          (Il2CppObject *)this,
                          Method_EventRaceBoostEffect__setupLocal_b__14_0__,
                          0LL);
                        if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !SeManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
                        }
                        SeManager__PlaySe(Se, 1.0, 0.0, v62, 0, 0LL);
                      }
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_83:
    sub_B2C434(UIAtlasBySpriteName, boostEnt);
  }
}


void __fastcall EventRaceBoostEffect___c__DisplayClass13_0___ctor(
        EventRaceBoostEffect___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventRaceBoostEffect___c__DisplayClass13_0___SetUpAndPlay_b__0(
        EventRaceBoostEffect___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  EventRaceBoostEffect_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  EventRaceBoostEffect__setupLocal(
    _4__this,
    this->fields.boostEnt,
    this->fields.boostGrade,
    this->fields.boostPoint,
    this->fields.itemImgId,
    this->fields.callback,
    0LL);
}