void __fastcall EventRaceBoostEffect___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct EventRaceBoostEffect_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49F91AB & 1) == 0 )
  {
    sub_1B640C8(&EventRaceBoostEffect_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_22653/*"race_boost_effect_{0}"*/, v4);
    sub_1B640C8(&StringLiteral_6172/*"EventRaceBoostEffect_{0}"*/, v5);
    byte_49F91AB = 1;
  }
  EventRaceBoostEffect_TypeInfo->static_fields->SP_NAME = (struct System_String_o *)StringLiteral_22653/*"race_boost_effect_{0}"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventRaceBoostEffect_TypeInfo->static_fields,
    StringLiteral_22653/*"race_boost_effect_{0}"*/,
    v2,
    v3);
  v6 = StringLiteral_6172/*"EventRaceBoostEffect_{0}"*/;
  static_fields = EventRaceBoostEffect_TypeInfo->static_fields;
  static_fields->ANIM_NAME = (struct System_String_o *)StringLiteral_6172/*"EventRaceBoostEffect_{0}"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->ANIM_NAME, v6, v8, v9);
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
  __int64 v3; // x1
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( !voiceStr || (this = (EventRaceBoostEffect_o *)System_String__Split(voiceStr, 0x5Fu, 0, 0LL), result = 0, !this) )
    sub_1B64324(this);
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    sub_1B6432C(this, v3);
  if ( System_Int32__TryParse((System_String_o *)this->fields.effectSp, &result, 0LL) )
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
  int m_CancellationTokenSource; // w8

  if ( (byte_49F91A9 & 1) == 0 )
  {
    this = (EventRaceBoostEffect_o *)sub_1B640C8(&StringLiteral_16054/*"_"*/, voiceStr);
    byte_49F91A9 = 1;
  }
  if ( !voiceStr || (this = (EventRaceBoostEffect_o *)System_String__Split(voiceStr, 0x5Fu, 0, 0LL)) == 0LL )
    sub_1B64324(this);
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource < 2 )
    return 0LL;
  if ( m_CancellationTokenSource == 2 )
    sub_1B6432C(this, v4);
  return System_String__Concat_61386656(
           (System_String_o *)this->fields.boostItemSp,
           (System_String_o *)StringLiteral_16054/*"_"*/,
           (System_String_o *)this->fields.boostCntLb,
           0LL);
}


void __fastcall EventRaceBoostEffect__OnDestroy(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  int32_t randvoiceSvt; // w8
  SoundManager_o *v6; // x19
  System_String_o *VoiceAssetName_39436496; // x0

  if ( (byte_49F91AA & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, method);
    sub_1B640C8(&SoundManager_TypeInfo, v3);
    byte_49F91AA = 1;
  }
  this->fields.destroyedBeforeVoiceStop = 1;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopVoiceAll(0.0, 0LL);
  if ( this->fields.randvoiceSvt >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    randvoiceSvt = this->fields.randvoiceSvt;
    v6 = (SoundManager_o *)Instance;
    VoiceAssetName_39436496 = ServantVoiceEntity__getVoiceAssetName_39436496(randvoiceSvt, 0LL);
    if ( !v6 )
      sub_1B64324(VoiceAssetName_39436496);
    SoundManager__ReleaseAudioAssetStorage(v6, VoiceAssetName_39436496, 0LL);
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x20
  QuestRacePointEntity_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  QuestRacePointEntity_o **v22; // x27
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // x2
  int32_t v28; // w3
  System_String_o *RandVoice; // x21
  _BOOL8 IsNullOrEmpty; // x0
  EventRaceBoostEffect_o *SvtId; // x0
  const MethodInfo *v32; // x2
  struct System_String_o *VoiceId; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  const MethodInfo *v36; // x6
  Il2CppObject *Instance; // x0
  int32_t randvoiceSvt; // w8
  SoundManager_o *v39; // x19
  System_String_o *VoiceAssetName_39436496; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  System_Action_o *v43; // x22

  if ( (byte_49F91A5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, boostEnt);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v15);
    sub_1B640C8(&Method_EventRaceBoostEffect___c__DisplayClass13_0__SetUpAndPlay_b__0__, v16);
    sub_1B640C8(&EventRaceBoostEffect___c__DisplayClass13_0_TypeInfo, v17);
    byte_49F91A5 = 1;
  }
  v18 = sub_1B64314(EventRaceBoostEffect___c__DisplayClass13_0_TypeInfo, boostEnt, *(_QWORD *)&boostGrade);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_12;
  *(_QWORD *)(v18 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)this, v20, v21);
  *(_QWORD *)(v18 + 24) = boostEnt;
  v22 = (QuestRacePointEntity_o **)(v18 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 24), (int32_t)boostEnt, v23, v24);
  *(_QWORD *)(v18 + 48) = callback;
  *(_DWORD *)(v18 + 32) = boostGrade;
  *(_DWORD *)(v18 + 36) = boostPoint;
  *(_DWORD *)(v18 + 40) = itemImgId;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 48), (int32_t)callback, v25, v26);
  if ( !playVoice )
  {
LABEL_9:
    this->fields.destroyedBeforeVoiceStop = 0;
    this->fields.randvoiceSvt = 0;
    this->fields.randvoiceId = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.randvoiceId, 0, (int32_t)v27, v28);
    EventRaceBoostEffect__setupLocal(
      this,
      *(QuestRacePointEntity_o **)(v18 + 24),
      *(_DWORD *)(v18 + 32),
      *(_DWORD *)(v18 + 36),
      *(_DWORD *)(v18 + 40),
      *(System_Action_o **)(v18 + 48),
      v36);
    return;
  }
  v19 = *v22;
  if ( !*v22 )
    goto LABEL_12;
  RandVoice = QuestRacePointEntity__GetRandVoice(v19, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(RandVoice, 0LL);
  if ( IsNullOrEmpty )
    goto LABEL_9;
  SvtId = (EventRaceBoostEffect_o *)EventRaceBoostEffect__GetSvtId(
                                      (EventRaceBoostEffect_o *)IsNullOrEmpty,
                                      RandVoice,
                                      v27);
  this->fields.randvoiceSvt = (int)SvtId;
  VoiceId = EventRaceBoostEffect__GetVoiceId(SvtId, RandVoice, v32);
  this->fields.randvoiceId = VoiceId;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.randvoiceId, (int32_t)VoiceId, v34, v35);
  if ( this->fields.randvoiceSvt < 1 || System_String__IsNullOrEmpty(this->fields.randvoiceId, 0LL) )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  randvoiceSvt = this->fields.randvoiceSvt;
  v39 = (SoundManager_o *)Instance;
  VoiceAssetName_39436496 = ServantVoiceEntity__getVoiceAssetName_39436496(randvoiceSvt, 0LL);
  v43 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v41, v42);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v18,
    Method_EventRaceBoostEffect___c__DisplayClass13_0__SetUpAndPlay_b__0__,
    0LL);
  if ( !v39 )
LABEL_12:
    sub_1B64324(v19);
  SoundManager__LoadAudioAssetStorage(v39, VoiceAssetName_39436496, v43, 1, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *randvoiceId; // x20
  System_String_o *v13; // x21
  SeManager_c *v14; // x8
  float DEFAULT_VOLUME; // s8
  System_Action_o *v16; // x22

  if ( (byte_49F91A7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_EventRaceBoostEffect_afterVoice__, v3);
    sub_1B640C8(&SeManager_TypeInfo, v4);
    sub_1B640C8(&SoundManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_4441/*"ChrVoice_"*/, v6);
    byte_49F91A7 = 1;
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
      v8 = System_Int32__ToString((int)this + 68, 0LL);
      v9 = System_String__Concat_61375396((System_String_o *)StringLiteral_4441/*"ChrVoice_"*/, v8, 0LL);
      randvoiceId = this->fields.randvoiceId;
      v13 = v9;
      v14 = SeManager_TypeInfo;
      if ( !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        v14 = SeManager_TypeInfo;
      }
      DEFAULT_VOLUME = v14->static_fields->DEFAULT_VOLUME;
      v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_EventRaceBoostEffect_afterVoice__, 0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__playVoice_38387180(v13, randvoiceId, DEFAULT_VOLUME, v16, 0LL);
    }
  }
}


void __fastcall EventRaceBoostEffect__afterVoice(EventRaceBoostEffect_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_49F91A8 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F91A8 = 1;
  }
  if ( !this->fields.destroyedBeforeVoiceStop )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
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


void __fastcall EventRaceBoostEffect__setupLocal(
        EventRaceBoostEffect_o *this,
        QuestRacePointEntity_o *boostEnt,
        int32_t boostGrade,
        int32_t boostPoint,
        int32_t itemImgId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v13; // x1
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
  UIAtlas_o *UIAtlasBySpriteName; // x0
  UIWidget_OnDimensionsChanged_c *klass; // x8
  __int64 v28; // x8
  System_Collections_Generic_List_UIAtlas__o *v29; // x25
  System_String_o *SP_NAME; // x24
  Il2CppObject *v31; // x0
  System_String_o *v32; // x24
  __int64 v33; // x1
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
  Il2CppObject *ComponentInChildren_object__48431348; // x23
  Il2CppObject *v52; // x22
  UISprite_c *v53; // x8
  UIAtlas_o *v54; // x21
  __int64 v55; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v57; // x0
  float length; // s0
  System_String_o *Se; // x20
  const MethodInfo *v60; // x1
  _QWORD *v61; // x0
  System_Reflection_MethodBase_o *v62; // x21
  __int64 v63; // x1
  __int64 v64; // x2
  System_Action_o *v65; // x22
  int32_t v66; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v67; // [xsp+8h] [xbp-68h] BYREF
  int32_t BoostTypeColor; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49F91A6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, boostEnt);
    sub_1B640C8(&AtlasManager_TypeInfo, v13);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v14);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v15);
    sub_1B640C8(&Method_EventRaceBoostEffect__setupLocal_b__14_0__, v16);
    sub_1B640C8(&Method_EventRaceBoostEffect_setupLocal__, v17);
    sub_1B640C8(&EventRaceBoostEffect_TypeInfo, v18);
    sub_1B640C8(&int_TypeInfo, v19);
    sub_1B640C8(&LocalizationManager_TypeInfo, v20);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v21);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v22);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v23);
    sub_1B640C8(&StringLiteral_5644/*"EVENT_RACE_BOOST_COUNT"*/, v24);
    sub_1B640C8(&StringLiteral_22164/*"onEndAnim"*/, v25);
    byte_49F91A6 = 1;
  }
  if ( this->fields.effectSp )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49F76BD )
    {
      sub_1B640C8(&TerminalSceneComponent_TypeInfo, boostEnt);
      byte_49F76BD = 1;
    }
    UIAtlasBySpriteName = (UIAtlas_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      UIAtlasBySpriteName = (UIAtlas_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = (UIWidget_OnDimensionsChanged_c *)UIAtlasBySpriteName[1].fields.mSpriteIndices->klass;
    if ( klass )
    {
      v28 = *(_QWORD *)&klass->_2.thread_static_fields_offset;
      if ( v28 )
      {
        v29 = *(System_Collections_Generic_List_UIAtlas__o **)(v28 + 296);
        this->fields.callBack = callback;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields.callBack,
          (int32_t)callback,
          boostGrade,
          boostPoint);
        UIAtlasBySpriteName = (UIAtlas_o *)EventRaceBoostEffect_TypeInfo;
        if ( !EventRaceBoostEffect_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventRaceBoostEffect_TypeInfo);
        if ( boostEnt )
        {
          SP_NAME = EventRaceBoostEffect_TypeInfo->static_fields->SP_NAME;
          BoostTypeColor = QuestRacePointEntity__GetBoostTypeColor(boostEnt, 0LL);
          v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &BoostTypeColor);
          v32 = System_String__Format(SP_NAME, v31, 0LL);
          UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(v29, v32, 0LL);
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
                goto LABEL_73;
              UIAtlasBySpriteName = (UIAtlas_o *)*((_QWORD *)&effectSp->obj.klass + v36);
              if ( UIAtlasBySpriteName )
              {
                UISprite__set_atlas((UISprite_o *)UIAtlasBySpriteName, v35, 0LL);
                v39 = this->fields.effectSp;
                if ( v39 )
                {
                  if ( v38 >= v39->max_length )
LABEL_73:
                    sub_1B6432C(UIAtlasBySpriteName, v33);
                  UIAtlasBySpriteName = (UIAtlas_o *)*((_QWORD *)&v39->obj.klass + v36);
                  if ( UIAtlasBySpriteName )
                  {
                    UISprite__set_spriteName((UISprite_o *)UIAtlasBySpriteName, v32, 0LL);
                    effectSp = this->fields.effectSp;
                    ++v36;
                    if ( effectSp )
                      continue;
                  }
                }
              }
              goto LABEL_72;
            }
            boostItemSp = (UnityEngine_Object_o *)this->fields.boostItemSp;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(boostItemSp, 0LL, 0LL) )
            {
              if ( itemImgId < 1 )
              {
                v42 = 0;
              }
              else
              {
                v41 = this->fields.boostItemSp;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                v42 = AtlasManager__SetItem(v41, itemImgId, 0LL);
              }
              UIAtlasBySpriteName = (UIAtlas_o *)this->fields.boostItemSp;
              if ( !UIAtlasBySpriteName )
                goto LABEL_72;
              UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                   0LL);
              if ( !UIAtlasBySpriteName )
                goto LABEL_72;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)UIAtlasBySpriteName, v42, 0LL);
            }
            boostCntLb = (UnityEngine_Object_o *)this->fields.boostCntLb;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(boostCntLb, 0LL, 0LL) )
            {
              v44 = this->fields.boostCntLb;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v45 = LocalizationManager__Get((System_String_o *)StringLiteral_5644/*"EVENT_RACE_BOOST_COUNT"*/, 0LL);
              v67 = boostPoint;
              v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
              UIAtlasBySpriteName = (UIAtlas_o *)System_String__Format(v45, v46, 0LL);
              if ( !v44 )
                goto LABEL_72;
              UILabel__set_text(v44, (System_String_o *)UIAtlasBySpriteName, 0LL);
            }
            v47 = EventRaceBoostEffect_TypeInfo;
            if ( !EventRaceBoostEffect_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRaceBoostEffect_TypeInfo);
              v47 = EventRaceBoostEffect_TypeInfo;
            }
            ANIM_NAME = v47->static_fields->ANIM_NAME;
            v66 = boostGrade;
            v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66);
            v50 = System_String__Format(ANIM_NAME, v49, 0LL);
            UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
            if ( UIAtlasBySpriteName )
            {
              ComponentInChildren_object__48431348 = UnityEngine_Component__GetComponentInChildren_object__48431348(
                                                       (UnityEngine_Component_o *)UIAtlasBySpriteName,
                                                       (const MethodInfo_2E300F4 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
              UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
              if ( UIAtlasBySpriteName )
              {
                v52 = UnityEngine_Component__GetComponentInChildren_object__48431348(
                        (UnityEngine_Component_o *)UIAtlasBySpriteName,
                        (const MethodInfo_2E300F4 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)ComponentInChildren_object__48431348,
                                                     0LL,
                                                     0LL);
                if ( ((unsigned __int8)UIAtlasBySpriteName & 1) != 0 )
                {
                  if ( ComponentInChildren_object__48431348 )
                  {
                    SimpleAnimation__Play_63513060((SimpleAnimation_o *)ComponentInChildren_object__48431348, v50, 0LL);
                    UIAtlasBySpriteName = (UIAtlas_o *)SimpleAnimation__get_Item(
                                                         (SimpleAnimation_o *)ComponentInChildren_object__48431348,
                                                         v50,
                                                         0LL);
                    if ( UIAtlasBySpriteName )
                    {
                      v53 = (UISprite_c *)UIAtlasBySpriteName->klass;
                      v54 = UIAtlasBySpriteName;
                      v55 = *(unsigned __int16 *)(&UIAtlasBySpriteName->klass->_2.bitflags2 + 3);
                      if ( *(_WORD *)(&UIAtlasBySpriteName->klass->_2.bitflags2 + 3) )
                      {
                        p_offset = (SimpleAnimation_State_c **)&v53->_1.interfaceOffsets->offset;
                        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                        {
                          --v55;
                          p_offset += 2;
                          if ( !v55 )
                            goto LABEL_56;
                        }
                        v57 = (__int64)(&v53->vtable._13_GetSides.method + 2 * *(_DWORD *)p_offset);
                      }
                      else
                      {
LABEL_56:
                        v57 = sub_1BB60A8(UIAtlasBySpriteName, SimpleAnimation_State_TypeInfo, 13LL);
                      }
                      length = (*(float (__fastcall **)(UIAtlas_o *, _QWORD))v57)(v54, *(_QWORD *)(v57 + 8));
                      goto LABEL_65;
                    }
                  }
                }
                else
                {
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)v52,
                                                       0LL,
                                                       0LL);
                  if ( ((unsigned __int8)UIAtlasBySpriteName & 1) == 0 )
                    goto LABEL_66;
                  if ( v52 )
                  {
                    UnityEngine_Animation__Play_68872828((UnityEngine_Animation_o *)v52, v50, 0LL);
                    UIAtlasBySpriteName = (UIAtlas_o *)UnityEngine_Animation__get_Item(
                                                         (UnityEngine_Animation_o *)v52,
                                                         v50,
                                                         0LL);
                    if ( UIAtlasBySpriteName )
                    {
                      length = UnityEngine_AnimationState__get_length(
                                 (UnityEngine_AnimationState_o *)UIAtlasBySpriteName,
                                 0LL);
LABEL_65:
                      UnityEngine_MonoBehaviour__Invoke(
                        (UnityEngine_MonoBehaviour_o *)this,
                        (System_String_o *)StringLiteral_22164/*"onEndAnim"*/,
                        length,
                        0LL);
LABEL_66:
                      Se = QuestRacePointEntity__GetSe(boostEnt, 0LL);
                      if ( System_String__IsNullOrEmpty(Se, 0LL) )
                      {
                        EventRaceBoostEffect__afterSE(this, v60);
                      }
                      else
                      {
                        v61 = Method_EventRaceBoostEffect_setupLocal__;
                        if ( (*((_BYTE *)Method_EventRaceBoostEffect_setupLocal__ + 83) & 2) != 0 )
                          v61 = (_QWORD *)sub_1B640E0(Method_EventRaceBoostEffect_setupLocal__);
                        v62 = (System_Reflection_MethodBase_o *)sub_1B640AC(v61, v61[4]);
                        v65 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v63, v64);
                        System_Action___ctor(
                          v65,
                          (Il2CppObject *)this,
                          Method_EventRaceBoostEffect__setupLocal_b__14_0__,
                          0LL);
                        OverwriteAssetSoundName__PlaySe_38216468(v62, Se, 1.0, v65, 0LL);
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
LABEL_72:
    sub_1B64324(UIAtlasBySpriteName);
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
  const MethodInfo *v2; // x6

  if ( !this->fields.__4__this )
    sub_1B64324(this);
  EventRaceBoostEffect__setupLocal(
    this->fields.__4__this,
    this->fields.boostEnt,
    this->fields.boostGrade,
    this->fields.boostPoint,
    this->fields.itemImgId,
    this->fields.callback,
    v2);
}