void __fastcall EventRaceBoostEffect___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  struct EventRaceBoostEffect_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E8E1A & 1) == 0 )
  {
    sub_B5D5C4(&EventRaceBoostEffect_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_21958/*"race_boost_effect_{0}"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_6261/*"EventRaceBoostEffect_{0}"*/, v11, v12, v13);
    byte_42E8E1A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventRaceBoostEffect_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_21958/*"race_boost_effect_{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21958/*"race_boost_effect_{0}"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = EventRaceBoostEffect_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_6261/*"EventRaceBoostEffect_{0}"*/;
  v16->ANIM_NAME = (struct System_String_o *)StringLiteral_6261/*"EventRaceBoostEffect_{0}"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->ANIM_NAME, v17, v18, v19, v20, v21, v22, v23);
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
  __int64 v3; // x3
  System_String_array *v5; // x0
  System_String_array *v6; // x1
  __int64 v8; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E8E17 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)voiceStr, (_DWORD)method, v3);
    byte_42E8E17 = 1;
  }
  result = 0;
  v5 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_11;
  v6 = v5;
  if ( !v5->max_length )
    goto LABEL_12;
  LOWORD(v5->m_Items[0]) = 95;
  if ( !voiceStr || (v5 = System_String__Split(voiceStr, (System_Char_array *)v5, 0LL), result = 0, !v5) )
LABEL_11:
    sub_B5D69C(v5, v6);
  if ( !v5->max_length )
  {
LABEL_12:
    v8 = sub_B5D6C8(v5);
    sub_B5D668(v8, 0LL);
  }
  if ( System_Int32__TryParse(v5->m_Items[0], &result, 0LL) )
    return result;
  else
    return 0;
}


System_String_o *__fastcall EventRaceBoostEffect__GetVoiceId(
        EventRaceBoostEffect_o *this,
        System_String_o *voiceStr,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_array *v8; // x0
  System_String_array *v9; // x1
  int max_length; // w8
  __int64 v12; // x0

  if ( (byte_42E8E18 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)voiceStr, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v5, v6, v7);
    byte_42E8E18 = 1;
  }
  v8 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v8 )
    goto LABEL_11;
  v9 = v8;
  if ( !v8->max_length )
    goto LABEL_12;
  LOWORD(v8->m_Items[0]) = 95;
  if ( !voiceStr || (v8 = System_String__Split(voiceStr, (System_Char_array *)v8, 0LL)) == 0LL )
LABEL_11:
    sub_B5D69C(v8, v9);
  max_length = v8->max_length;
  if ( max_length >= 2 )
  {
    if ( max_length != 2 )
      return System_String__Concat_44580072(v8->m_Items[1], (System_String_o *)StringLiteral_16096/*"_"*/, v8->m_Items[2], 0LL);
LABEL_12:
    v12 = sub_B5D6C8(v8);
    sub_B5D668(v12, 0LL);
  }
  return 0LL;
}


void __fastcall EventRaceBoostEffect__OnDestroy(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WebViewManager_o *Instance; // x0
  int32_t randvoiceSvt; // w8
  SoundManager_o *v10; // x19
  System_String_o *VoiceAssetName_31472176; // x0
  __int64 v12; // x1

  if ( (byte_42E8E19 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E8E19 = 1;
  }
  this->fields.destroyedBeforeVoiceStop = 1;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopVoiceAll(0.0, 0LL);
  if ( this->fields.randvoiceSvt >= 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    randvoiceSvt = this->fields.randvoiceSvt;
    v10 = (SoundManager_o *)Instance;
    VoiceAssetName_31472176 = ServantVoiceEntity__getVoiceAssetName_31472176(randvoiceSvt, 0LL);
    if ( !v10 )
      sub_B5D69C(VoiceAssetName_31472176, v12);
    SoundManager__ReleaseAudioAssetStorage(v10, VoiceAssetName_31472176, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x20
  QuestRacePointEntity_o *v25; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  QuestRacePointEntity_o **v33; // x27
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_o *RandVoice; // x21
  _BOOL8 IsNullOrEmpty; // x0
  EventRaceBoostEffect_o *SvtId; // x0
  const MethodInfo *v55; // x2
  struct System_String_o *VoiceId; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  const MethodInfo *v63; // x6
  WebViewManager_o *Instance; // x0
  int32_t randvoiceSvt; // w8
  SoundManager_o *v66; // x19
  System_String_o *VoiceAssetName_31472176; // x21
  System_Action_o *v68; // x22

  if ( (byte_42E8E13 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)boostEnt, boostGrade, *(_QWORD *)&boostPoint);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&Method_EventRaceBoostEffect___c__DisplayClass13_0__SetUpAndPlay_b__0__, v18, v19, v20);
    sub_B5D5C4(&EventRaceBoostEffect___c__DisplayClass13_0_TypeInfo, v21, v22, v23);
    byte_42E8E13 = 1;
  }
  v24 = sub_B5D694(EventRaceBoostEffect___c__DisplayClass13_0_TypeInfo);
  EventRaceBoostEffect___c__DisplayClass13_0___ctor((EventRaceBoostEffect___c__DisplayClass13_0_o *)v24, 0LL);
  if ( !v24 )
    goto LABEL_12;
  *(_QWORD *)(v24 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v24 + 16), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v24 + 24) = boostEnt;
  v33 = (QuestRacePointEntity_o **)(v24 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v24 + 24), (System_Int32_array **)boostEnt, v34, v35, v36, v37, v38, v39);
  *(_QWORD *)(v24 + 48) = callback;
  *(_DWORD *)(v24 + 32) = boostGrade;
  *(_DWORD *)(v24 + 36) = boostPoint;
  *(_DWORD *)(v24 + 40) = itemImgId;
  sub_B5D560((BattleServantConfConponent_o *)(v24 + 48), (System_Int32_array **)callback, v40, v41, v42, v43, v44, v45);
  if ( !playVoice )
  {
LABEL_9:
    this->fields.destroyedBeforeVoiceStop = 0;
    this->fields.randvoiceSvt = 0;
    this->fields.randvoiceId = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.randvoiceId, 0LL, v46, v47, v48, v49, v50, v51);
    EventRaceBoostEffect__setupLocal(
      this,
      *(QuestRacePointEntity_o **)(v24 + 24),
      *(_DWORD *)(v24 + 32),
      *(_DWORD *)(v24 + 36),
      *(_DWORD *)(v24 + 40),
      *(System_Action_o **)(v24 + 48),
      v63);
    return;
  }
  v25 = *v33;
  if ( !*v33 )
    goto LABEL_12;
  RandVoice = QuestRacePointEntity__GetRandVoice(v25, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(RandVoice, 0LL);
  if ( IsNullOrEmpty )
    goto LABEL_9;
  SvtId = (EventRaceBoostEffect_o *)EventRaceBoostEffect__GetSvtId(
                                      (EventRaceBoostEffect_o *)IsNullOrEmpty,
                                      RandVoice,
                                      (const MethodInfo *)v46);
  this->fields.randvoiceSvt = (int)SvtId;
  VoiceId = EventRaceBoostEffect__GetVoiceId(SvtId, RandVoice, v55);
  this->fields.randvoiceId = VoiceId;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.randvoiceId,
    (System_Int32_array **)VoiceId,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  if ( this->fields.randvoiceSvt < 1 || System_String__IsNullOrEmpty(this->fields.randvoiceId, 0LL) )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  randvoiceSvt = this->fields.randvoiceSvt;
  v66 = (SoundManager_o *)Instance;
  VoiceAssetName_31472176 = ServantVoiceEntity__getVoiceAssetName_31472176(randvoiceSvt, 0LL);
  v68 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v68,
    (Il2CppObject *)v24,
    Method_EventRaceBoostEffect___c__DisplayClass13_0__SetUpAndPlay_b__0__,
    0LL);
  if ( !v66 )
LABEL_12:
    sub_B5D69C(v25, v26);
  SoundManager__LoadAudioAssetStorage(v66, VoiceAssetName_31472176, v68, 1, 0LL);
}


void __fastcall EventRaceBoostEffect__afterSE(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  const MethodInfo *v17; // x1
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  System_String_o *randvoiceId; // x20
  System_String_o *v21; // x21
  SeManager_c *v22; // x8
  float DEFAULT_VOLUME; // s8
  System_Action_o *v24; // x22

  if ( (byte_42E8E15 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventRaceBoostEffect_afterVoice__, v5, v6, v7);
    sub_B5D5C4(&SeManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_4030/*"ChrVoice_"*/, v14, v15, v16);
    byte_42E8E15 = 1;
  }
  if ( !this->fields.destroyedBeforeVoiceStop )
  {
    this->fields.seEnded = 1;
    EventRaceBoostEffect__CheckCallback(this, method);
    if ( this->fields.randvoiceSvt < 1 || System_String__IsNullOrEmpty(this->fields.randvoiceId, 0LL) )
    {
      EventRaceBoostEffect__afterVoice(this, v17);
    }
    else
    {
      v18 = System_Int32__ToString((int)this + 60, 0LL);
      v19 = System_String__Concat_44577788((System_String_o *)StringLiteral_4030/*"ChrVoice_"*/, v18, 0LL);
      randvoiceId = this->fields.randvoiceId;
      v21 = v19;
      v22 = SeManager_TypeInfo;
      if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        v22 = SeManager_TypeInfo;
      }
      DEFAULT_VOLUME = v22->static_fields->DEFAULT_VOLUME;
      v24 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v24, (Il2CppObject *)this, Method_EventRaceBoostEffect_afterVoice__, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playVoice_23391328(v21, randvoiceId, DEFAULT_VOLUME, v24, 0LL);
    }
  }
}


void __fastcall EventRaceBoostEffect__afterVoice(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42E8E16 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8E16 = 1;
  }
  if ( !this->fields.destroyedBeforeVoiceStop )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  UIAtlas_o *UIAtlasBySpriteName; // x0
  UIWidget_OnPostFillCallback_c *v54; // x8
  __int64 v55; // x8
  System_Collections_Generic_List_UIAtlas__o *v56; // x25
  System_String_o *SP_NAME; // x24
  Il2CppObject *v58; // x0
  System_String_o *v59; // x24
  struct UISprite_array *effectSp; // x8
  UIAtlas_o *v61; // x25
  __int64 v62; // x28
  int max_length; // w9
  il2cpp_array_size_t v64; // w22
  struct UISprite_array *v65; // x8
  UnityEngine_Object_o *boostItemSp; // x24
  UISprite_o *v67; // x24
  bool v68; // w23
  UnityEngine_Object_o *boostCntLb; // x23
  UILabel_o *v70; // x23
  System_String_o *v71; // x24
  Il2CppObject *v72; // x0
  EventRaceBoostEffect_c *v73; // x0
  System_String_o *ANIM_NAME; // x22
  Il2CppObject *v75; // x0
  System_String_o *v76; // x21
  UnityEngine_Object_o *ComponentInChildren_UIWidget; // x23
  UnityEngine_Object_o *v78; // x22
  __int64 v79; // x3
  UISprite_c *klass; // x8
  UIAtlas_o *v81; // x21
  unsigned __int64 v82; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v84; // x0
  float length; // s0
  System_String_o *Se; // x20
  const MethodInfo *v87; // x1
  System_Action_o *v88; // x21
  __int64 v89; // x0
  int32_t v90; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v91; // [xsp+8h] [xbp-58h] BYREF
  int32_t BoostTypeColor; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42E8E14 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)boostEnt, boostGrade, *(_QWORD *)&boostPoint);
    sub_B5D5C4(&AtlasManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v20, v21, v22);
    sub_B5D5C4(&Method_EventRaceBoostEffect__setupLocal_b__14_0__, v23, v24, v25);
    sub_B5D5C4(&EventRaceBoostEffect_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&int_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&SeManager_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_5754/*"EVENT_RACE_BOOST_COUNT"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_21522/*"onEndAnim"*/, v50, v51, v52);
    byte_42E8E14 = 1;
  }
  if ( this->fields.effectSp )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)boostEnt, boostGrade, *(_QWORD *)&boostPoint);
      byte_42E4B1E = 1;
    }
    UIAtlasBySpriteName = (UIAtlas_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      UIAtlasBySpriteName = (UIAtlas_o *)TerminalSceneComponent_TypeInfo;
    }
    v54 = *(UIWidget_OnPostFillCallback_c **)UIAtlasBySpriteName[2].monitor;
    if ( v54 )
    {
      v55 = *(_QWORD *)&v54->_2.static_fields_size;
      if ( v55 )
      {
        v56 = *(System_Collections_Generic_List_UIAtlas__o **)(v55 + 288);
        this->fields.callBack = callback;
        sub_B5D560(
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
          v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &BoostTypeColor);
          v59 = System_String__Format(SP_NAME, v58, 0LL);
          UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(v56, v59, 0LL);
          effectSp = this->fields.effectSp;
          if ( effectSp )
          {
            v61 = UIAtlasBySpriteName;
            v62 = 4LL;
            while ( 1 )
            {
              max_length = effectSp->max_length;
              v64 = v62 - 4;
              if ( (int)v62 - 4 >= max_length )
                break;
              if ( v64 >= max_length )
                goto LABEL_84;
              UIAtlasBySpriteName = (UIAtlas_o *)*((_QWORD *)&effectSp->obj.klass + v62);
              if ( UIAtlasBySpriteName )
              {
                UISprite__set_atlas((UISprite_o *)UIAtlasBySpriteName, v61, 0LL);
                v65 = this->fields.effectSp;
                if ( v65 )
                {
                  if ( v64 >= v65->max_length )
                  {
LABEL_84:
                    v89 = sub_B5D6C8(UIAtlasBySpriteName);
                    sub_B5D668(v89, 0LL);
                  }
                  UIAtlasBySpriteName = (UIAtlas_o *)*((_QWORD *)&v65->obj.klass + v62);
                  if ( UIAtlasBySpriteName )
                  {
                    UISprite__set_spriteName((UISprite_o *)UIAtlasBySpriteName, v59, 0LL);
                    effectSp = this->fields.effectSp;
                    ++v62;
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
                v68 = 0;
              }
              else
              {
                v67 = this->fields.boostItemSp;
                if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                v68 = AtlasManager__SetItem(v67, itemImgId, 0LL);
              }
              UIAtlasBySpriteName = (UIAtlas_o *)this->fields.boostItemSp;
              if ( !UIAtlasBySpriteName )
                goto LABEL_83;
              UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                   0LL);
              if ( !UIAtlasBySpriteName )
                goto LABEL_83;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)UIAtlasBySpriteName, v68, 0LL);
            }
            boostCntLb = (UnityEngine_Object_o *)this->fields.boostCntLb;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(boostCntLb, 0LL, 0LL) )
            {
              v70 = this->fields.boostCntLb;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v71 = LocalizationManager__Get((System_String_o *)StringLiteral_5754/*"EVENT_RACE_BOOST_COUNT"*/, 0LL);
              v91 = boostPoint;
              v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v91);
              UIAtlasBySpriteName = (UIAtlas_o *)System_String__Format(v71, v72, 0LL);
              if ( !v70 )
                goto LABEL_83;
              UILabel__set_text(v70, (System_String_o *)UIAtlasBySpriteName, 0LL);
            }
            v73 = EventRaceBoostEffect_TypeInfo;
            if ( (BYTE3(EventRaceBoostEffect_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventRaceBoostEffect_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRaceBoostEffect_TypeInfo);
              v73 = EventRaceBoostEffect_TypeInfo;
            }
            ANIM_NAME = v73->static_fields->ANIM_NAME;
            v90 = boostGrade;
            v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v90);
            v76 = System_String__Format(ANIM_NAME, v75, 0LL);
            UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
            if ( UIAtlasBySpriteName )
            {
              ComponentInChildren_UIWidget = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                       (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                                       (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
              UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
              if ( UIAtlasBySpriteName )
              {
                v78 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
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
                    SimpleAnimation__Play_16676044((SimpleAnimation_o *)ComponentInChildren_UIWidget, v76, 0LL);
                    UIAtlasBySpriteName = (UIAtlas_o *)SimpleAnimation__get_Item(
                                                         (SimpleAnimation_o *)ComponentInChildren_UIWidget,
                                                         v76,
                                                         0LL);
                    if ( UIAtlasBySpriteName )
                    {
                      klass = (UISprite_c *)UIAtlasBySpriteName->klass;
                      v81 = UIAtlasBySpriteName;
                      if ( *(_WORD *)&UIAtlasBySpriteName->klass->_2.bitflags1 )
                      {
                        v82 = 0LL;
                        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
                        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                        {
                          ++v82;
                          p_offset += 2;
                          if ( v82 >= *(unsigned __int16 *)&UIAtlasBySpriteName->klass->_2.bitflags1 )
                            goto LABEL_65;
                        }
                        v84 = (__int64)(&klass->vtable._13_GetSides.method + 2 * *(_DWORD *)p_offset);
                      }
                      else
                      {
LABEL_65:
                        v84 = sub_AF54C0(UIAtlasBySpriteName, SimpleAnimation_State_TypeInfo, 13LL, v79);
                      }
                      length = (*(float (__fastcall **)(UIAtlas_o *, _QWORD))v84)(v81, *(_QWORD *)(v84 + 8));
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
                  UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Object__op_Inequality(v78, 0LL, 0LL);
                  if ( ((unsigned __int8)UIAtlasBySpriteName & 1) == 0 )
                    goto LABEL_76;
                  if ( v78 )
                  {
                    UnityEngine_Animation__Play_51249124((UnityEngine_Animation_o *)v78, v76, 0LL);
                    UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Animation__get_Item(
                                                         (UnityEngine_Animation_o *)v78,
                                                         v76,
                                                         0LL);
                    if ( UIAtlasBySpriteName )
                    {
                      length = UnityEngine_AnimationState__get_length(
                                 (UnityEngine_AnimationState_o *)UIAtlasBySpriteName,
                                 0LL);
LABEL_75:
                      UnityEngine_MonoBehaviour__Invoke(
                        (UnityEngine_MonoBehaviour_o *)this,
                        (System_String_o *)StringLiteral_21522/*"onEndAnim"*/,
                        length,
                        0LL);
LABEL_76:
                      Se = QuestRacePointEntity__GetSe(boostEnt, 0LL);
                      if ( System_String__IsNullOrEmpty(Se, 0LL) )
                      {
                        EventRaceBoostEffect__afterSE(this, v87);
                      }
                      else
                      {
                        v88 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                        System_Action___ctor(
                          v88,
                          (Il2CppObject *)this,
                          Method_EventRaceBoostEffect__setupLocal_b__14_0__,
                          0LL);
                        if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !SeManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
                        }
                        SeManager__PlaySe(Se, 1.0, 0.0, v88, 0, 0LL);
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
    sub_B5D69C(UIAtlasBySpriteName, boostEnt);
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
    sub_B5D69C(0LL, method);
  EventRaceBoostEffect__setupLocal(
    _4__this,
    this->fields.boostEnt,
    this->fields.boostGrade,
    this->fields.boostPoint,
    this->fields.itemImgId,
    this->fields.callback,
    0LL);
}