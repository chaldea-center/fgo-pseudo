void __fastcall TitleInfoEventTowerReward___cctor(const MethodInfo *method)
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
  __int64 v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  struct TitleInfoEventTowerReward_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct TitleInfoEventTowerReward_StaticFields *v21; // x0
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_421309A & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventTowerReward_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_22823/*"tower_{0}_{1}"*/, v8);
    sub_B0D8A4(&StringLiteral_16815/*"bit_floor_reward"*/, v9);
    sub_B0D8A4(&StringLiteral_2664/*"Back/back{0:D5}"*/, v10);
    byte_421309A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventTowerReward_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_22823/*"tower_{0}_{1}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22823/*"tower_{0}_{1}"*/;
  sub_B0D840(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = TitleInfoEventTowerReward_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_2664/*"Back/back{0:D5}"*/;
  v13->SPRITE_NAME_BG = (struct System_String_o *)StringLiteral_2664/*"Back/back{0:D5}"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v13->SPRITE_NAME_BG, v14, v15, v16, v17, v18, v19, v20);
  v21 = TitleInfoEventTowerReward_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_16815/*"bit_floor_reward"*/;
  v21->CLIP_NAME_TOWER_REWARD = (struct System_String_o *)StringLiteral_16815/*"bit_floor_reward"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v21->CLIP_NAME_TOWER_REWARD, v22, v23, v24, v25, v26, v27, v28);
}


void __fastcall TitleInfoEventTowerReward___ctor(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventTowerReward__Close(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *voiceName; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_String_o **p_voiceAssetName; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Action_o *v23; // x20
  const MethodInfo *v24; // x2

  if ( (byte_4213097 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    sub_B0D8A4(&Method_TitleInfoEventTowerReward__Close_b__37_0__, v4);
    byte_4213097 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( this->fields.voicePlayer )
  {
    voiceName = this->fields.voiceName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopVoice_25003524(voiceName, 0.0, 0LL);
    this->fields.voicePlayer = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.voicePlayer, 0LL, v7, v8, v9, v10, v11, v12);
  }
  p_voiceAssetName = &this->fields.voiceAssetName;
  if ( !System_String__IsNullOrEmpty(this->fields.voiceAssetName, 0LL) )
  {
    v16 = *p_voiceAssetName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(v16, 0LL);
    *p_voiceAssetName = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.voiceAssetName, 0LL, v17, v18, v19, v20, v21, v22);
  }
  *(_QWORD *)&this->fields.selectVoiceIndex = 0LL;
  this->fields.playCnt = 0;
  v23 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_TitleInfoEventTowerReward__Close_b__37_0__, 0LL);
  TitleInfoEventTowerReward__StartRewardAction(this, v23, v24);
}


void __fastcall TitleInfoEventTowerReward__EndItemGetEffectAction(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  if ( !afterDetail )
    sub_B0D97C(this);
  System_Action__Invoke(afterDetail, 0LL);
}


void __fastcall TitleInfoEventTowerReward__EndPlayVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  TitleInfoEventTowerReward_o *v2; // x19
  __int64 v3; // x1
  int32_t playCnt; // w8
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x20
  __int64 selectVoiceIndex; // x21
  ServantVoiceData_array *v7; // x9
  ServantVoiceData_o *v8; // x8
  __int64 v9; // x0

  v2 = this;
  if ( (byte_4213094 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, method);
    this = (TitleInfoEventTowerReward_o *)sub_B0D8A4(&StringLiteral_10720/*"PlayVoice"*/, v3);
    byte_4213094 = 1;
  }
  playCnt = v2->fields.playCnt;
  if ( playCnt < v2->fields.maxPlayCnt )
  {
    voiceList = v2->fields.voiceList;
    if ( !voiceList )
      goto LABEL_12;
    selectVoiceIndex = v2->fields.selectVoiceIndex;
    if ( voiceList->fields._size <= (unsigned int)selectVoiceIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v7 = voiceList->fields._items->m_Items[selectVoiceIndex];
    if ( !v7 )
      goto LABEL_12;
    if ( playCnt >= v7->max_length )
    {
      v9 = sub_B0D9A8(this);
      sub_B0D948(v9, 0LL);
    }
    v8 = v7->m_Items[playCnt];
    if ( !v8 )
LABEL_12:
      sub_B0D97C(this);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)v2,
      (System_String_o *)StringLiteral_10720/*"PlayVoice"*/,
      v8->fields.delay,
      0LL);
  }
}


void __fastcall TitleInfoEventTowerReward__OnLoadEndBG(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  _DWORD *monitor; // x8
  int32_t v6; // w21
  int32_t v7; // w22
  UIStandFigureR_o *klass; // x20
  System_Action_o *v9; // x23

  v3 = (Il2CppObject *)this;
  if ( (byte_4213090 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    this = (TitleInfoEventTowerReward_o *)sub_B0D8A4(&Method_TitleInfoEventTowerReward_OnLoadEndSvt__, v4);
    byte_4213090 = 1;
  }
  monitor = v3[8].monitor;
  if ( !monitor
    || (v6 = monitor[11],
        v7 = monitor[12],
        klass = (UIStandFigureR_o *)v3[4].klass,
        v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2),
        System_Action___ctor(v9, v3, Method_TitleInfoEventTowerReward_OnLoadEndSvt__, 0LL),
        !klass) )
  {
    sub_B0D97C(this);
  }
  UIStandFigureR__SetCharacter(klass, v6, v7, 1, 0, 0, v9, 0LL);
}


void __fastcall TitleInfoEventTowerReward__OnLoadEndSvt(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoEventTowerReward_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  struct EventTowerReward_o *v19; // x8
  struct System_String_array *voiceIds; // x8
  TitleInfoEventTowerReward_o *v21; // x22
  __int64 v22; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x23
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  unsigned __int64 v30; // x23
  struct EventTowerReward_o *v31; // x8
  struct System_String_array *v32; // x9
  int size; // w24
  TitleInfoEventTowerReward_o *v34; // x22
  __int64 v35; // x25
  unsigned int v36; // w8
  __int64 v37; // x8
  __int64 v38; // x8
  struct EventTowerReward_o *v39; // x9
  struct EventTowerReward_o *v40; // x8
  System_Int32_array **VoiceAssetName_29941680; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_o *voiceAssetName; // x20
  __int64 v49; // x1
  __int64 v50; // x2
  System_Action_o *v51; // x21
  __int64 v52; // x0

  v3 = this;
  if ( (byte_4213091 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____AddRange__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B0D8A4(&SoundManager_TypeInfo, v13);
    this = (TitleInfoEventTowerReward_o *)sub_B0D8A4(&Method_TitleInfoEventTowerReward__OnLoadEndSvt_b__31_0__, v14);
    byte_4213091 = 1;
  }
  eventTowerReward = v3->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_42;
  if ( eventTowerReward->fields.voiceIds )
  {
    v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                    method,
                                                                                                    v2);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v16,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    this = (TitleInfoEventTowerReward_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_42;
    this = (TitleInfoEventTowerReward_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
    v19 = v3->fields.eventTowerReward;
    if ( !v19 )
      goto LABEL_42;
    voiceIds = v19->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_42;
    v21 = this;
    v22 = *(_QWORD *)&voiceIds->max_length;
    v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                    v17,
                                                                                                    v18);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v23,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    v3->fields.voiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v23;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v3->fields.voiceList,
      (System_Int32_array **)v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    if ( (int)v22 >= 1 )
    {
      v30 = 0LL;
      while ( 1 )
      {
        v31 = v3->fields.eventTowerReward;
        if ( !v31 )
          break;
        v32 = v31->fields.voiceIds;
        if ( !v32 )
          break;
        if ( v30 >= v32->max_length )
        {
LABEL_43:
          v52 = sub_B0D9A8(this);
          sub_B0D948(v52, 0LL);
        }
        if ( !v21 )
          break;
        this = (TitleInfoEventTowerReward_o *)ServantVoiceMaster__getEntity_29961472(
                                                (ServantVoiceMaster_o *)v21,
                                                14,
                                                v31->fields.svtId,
                                                v31->fields.limitCount,
                                                v32->m_Items[v30],
                                                0LL);
        if ( this )
        {
          if ( !v16 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v16,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
        }
        if ( (__int64)++v30 >= (int)v22 )
          goto LABEL_18;
      }
LABEL_42:
      sub_B0D97C(this);
    }
LABEL_18:
    this = (TitleInfoEventTowerReward_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_42;
    this = (TitleInfoEventTowerReward_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !v16 )
      goto LABEL_42;
    size = v16->fields._size;
    if ( size >= 1 )
    {
      v34 = this;
      v35 = 4LL;
      v36 = v16->fields._size;
      while ( 1 )
      {
        if ( v36 <= (int)v35 - 4 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v37 = *((_QWORD *)&v16->fields._items->obj.klass + v35);
        if ( !v37 )
          goto LABEL_42;
        if ( !*(_DWORD *)(v37 + 24) )
          goto LABEL_43;
        v38 = *(_QWORD *)(v37 + 32);
        if ( !v38 )
          goto LABEL_42;
        v39 = v3->fields.eventTowerReward;
        if ( !v39 || !v34 )
          goto LABEL_42;
        this = (TitleInfoEventTowerReward_o *)VoicePlayCondMaster__isVoicePlay(
                                                (VoicePlayCondMaster_o *)v34,
                                                v39->fields.svtId,
                                                *(System_String_o **)(v38 + 16),
                                                0LL,
                                                -1LL,
                                                -1,
                                                0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( v16->fields._size <= (unsigned int)(v35 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          if ( !v3->fields.voiceList )
            goto LABEL_42;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v3->fields.voiceList,
            *((EventMissionProgressRequest_Argument_ProgressData_o **)&v16->fields._items->obj.klass + v35),
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
        }
        if ( (int)v35 - 3 >= size )
          break;
        v36 = v16->fields._size;
        ++v35;
      }
    }
    v40 = v3->fields.eventTowerReward;
    if ( !v40 )
      goto LABEL_42;
    VoiceAssetName_29941680 = (System_Int32_array **)ServantVoiceEntity__getVoiceAssetName_29941680(
                                                       v40->fields.svtId,
                                                       0LL);
    v3->fields.voiceAssetName = (struct System_String_o *)VoiceAssetName_29941680;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v3->fields.voiceAssetName,
      VoiceAssetName_29941680,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    voiceAssetName = v3->fields.voiceAssetName;
    v51 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v49, v50);
    System_Action___ctor(v51, (Il2CppObject *)v3, Method_TitleInfoEventTowerReward__OnLoadEndSvt_b__31_0__, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__loadAudioAssetStorage(voiceAssetName, v51, 1, 0LL);
  }
}


void __fastcall TitleInfoEventTowerReward__OnTouchDisp(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Component_o *screenTouchInfo; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v10; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21

  if ( (byte_4213096 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_TitleInfoEventTowerReward__OnTouchDisp_b__36_0__, v5);
    byte_4213096 = 1;
  }
  screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
  if ( !screenTouchInfo )
    goto LABEL_10;
  screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL);
  if ( !screenTouchInfo )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_TitleInfoEventTowerReward__OnTouchDisp_b__36_0__, 0LL);
  if ( !Instance )
LABEL_10:
    sub_B0D97C(screenTouchInfo);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v12, 0LL);
  this->fields.state = 0;
}


void __fastcall TitleInfoEventTowerReward__Open(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
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
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  TerminalPramsManager_c *v32; // x0
  struct EventTowerReward_o *eventTowerReward_k__BackingField; // x1
  struct EventTowerReward_o **p_eventTowerReward; // x20
  __int64 v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  TerminalPramsManager_c *v42; // x0
  struct QuestRewardInfo_array *resultEventTowerRewardInfo_k__BackingField; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  CommonUI_o *Instance; // x23
  __int64 transform; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x21
  TitleInfoEventTowerReward_c *v63; // x8
  int effectId; // w23
  System_String_o *CLIP_NAME_TOWER_REWARD; // x22
  System_String_o *FloorRewardPrefabName; // x0
  TitleInfoEventTowerReward_c *v67; // x0
  struct EventTowerReward_o *v68; // x8
  Il2CppObject *v69; // x0
  System_String_o *v70; // x0
  UnityEngine_Object_o *simpleAnimation; // x23
  System_String_o *v72; // x22
  __int64 v73; // x8
  __int64 v74; // x22
  unsigned __int64 v75; // x10
  SimpleAnimation_State_c **v76; // x11
  __int64 v77; // x0
  UnityEngine_Object_o *animation; // x23
  int towerId; // w8
  unsigned int v80; // w22
  struct System_Collections_Generic_List_UIFont__o *floorNumFontList; // x23
  int size; // w9
  UnityEngine_Object_o *v83; // x22
  struct EventTowerReward_o *v84; // x8
  struct System_Collections_Generic_List_UIFont__o *v85; // x23
  int v86; // w24
  struct EventTowerReward_o *v87; // x8
  UILabel_o *floorLabel; // x22
  UISprite_o *nameSprite; // x21
  System_String_o *v90; // x22
  Il2CppObject *v91; // x23
  Il2CppObject *v92; // x0
  __int64 v93; // x1
  __int64 v94; // x2
  int v95; // w23
  __int64 v96; // x21
  System_Text_StringBuilder_o *v97; // x22
  __int64 v98; // x26
  __int64 v99; // x27
  __int64 v100; // x8
  System_String_o *v101; // x0
  UILabel_o *rewardLabel; // x23
  _DWORD *v103; // x8
  int32_t v104; // w21
  struct EventTowerReward_o *v105; // x8
  System_String_o *SPRITE_NAME_BG; // x20
  Il2CppObject *v107; // x0
  System_String_o *v108; // x0
  ExUITexture_o *bgSprite; // x20
  System_String_o *v110; // x21
  __int64 v111; // x1
  __int64 v112; // x2
  System_Action_o *v113; // x22
  __int64 v114; // x0
  int32_t v115; // [xsp+0h] [xbp-70h] BYREF
  int eventId; // [xsp+4h] [xbp-6Ch] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *nameText; // [xsp+10h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_421308F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventTowerMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftMaster___, v12);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v13);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v14);
    sub_B0D8A4(&int_TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIFont__get_Count__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIFont__get_Item__, v17);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v18);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v19);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v22);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v23);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v24);
    sub_B0D8A4(&Method_TitleInfoEventTowerReward_OnLoadEndBG__, v25);
    sub_B0D8A4(&TitleInfoEventTowerReward_TypeInfo, v26);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v27);
    sub_B0D8A4(&StringLiteral_5757/*"EVENT_TOWER_REWARD_GET"*/, v28);
    sub_B0D8A4(&StringLiteral_10939/*"QUEST_CLEAR_COSTUME_GET"*/, v29);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v30);
    sub_B0D8A4(&StringLiteral_5758/*"EVENT_TOWER_REWARD_GET_2"*/, v31);
    byte_421308F = 1;
  }
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_421085F )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, callback);
    byte_421085F = 1;
  }
  v32 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v32 = TerminalPramsManager_TypeInfo;
  }
  eventTowerReward_k__BackingField = v32->static_fields->_eventTowerReward_k__BackingField;
  this->fields.eventTowerReward = eventTowerReward_k__BackingField;
  p_eventTowerReward = &this->fields.eventTowerReward;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventTowerReward,
    (System_Int32_array **)eventTowerReward_k__BackingField,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_4211AE7 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v35);
    byte_4211AE7 = 1;
  }
  v42 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v42 = TerminalPramsManager_TypeInfo;
  }
  resultEventTowerRewardInfo_k__BackingField = v42->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  this->fields.resultEventTowerRewardInfo = resultEventTowerRewardInfo_k__BackingField;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.resultEventTowerRewardInfo,
    (System_Int32_array **)resultEventTowerRewardInfo_k__BackingField,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  eventTowerReward = this->fields.eventTowerReward;
  if ( !eventTowerReward || eventTowerReward->fields.eventId <= 0 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_146;
    transform = (__int64)CommonUI__CreateScreeenTouchInfo(Instance, (UnityEngine_Transform_o *)transform, 0, 0LL);
    if ( !transform )
      goto LABEL_146;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       (UnityEngine_GameObject_o *)transform,
                                                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
      Component_srcLineSprite,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  transform = (__int64)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_146;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_146;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_146;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  transform = (__int64)this->fields.standFigure;
  if ( !transform )
    goto LABEL_146;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_146;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  this->fields.endCallback = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.endCallback,
    (System_Int32_array **)callback,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields.state = 0;
  transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_146;
  transform = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)transform,
                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventTowerMaster___);
  if ( !*p_eventTowerReward || !transform )
    goto LABEL_146;
  transform = (__int64)EventTowerMaster__GetEntity(
                         (EventTowerMaster_o *)transform,
                         (*p_eventTowerReward)->fields.eventId,
                         (*p_eventTowerReward)->fields.towerId,
                         0LL);
  v62 = transform;
  v63 = TitleInfoEventTowerReward_TypeInfo;
  if ( (BYTE3(TitleInfoEventTowerReward_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
    v63 = TitleInfoEventTowerReward_TypeInfo;
  }
  if ( !*p_eventTowerReward
    || (effectId = (*p_eventTowerReward)->fields.effectId,
        CLIP_NAME_TOWER_REWARD = v63->static_fields->CLIP_NAME_TOWER_REWARD,
        (transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (transform = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)transform,
                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !*p_eventTowerReward)
    || !transform )
  {
LABEL_146:
    sub_B0D97C(transform);
  }
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)transform,
         &entity,
         (*p_eventTowerReward)->fields.eventId,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    transform = (__int64)entity;
    if ( !entity )
      goto LABEL_146;
    FloorRewardPrefabName = EventDetailEntity__GetFloorRewardPrefabName((EventDetailEntity_o *)entity, 0LL);
    if ( FloorRewardPrefabName )
      CLIP_NAME_TOWER_REWARD = FloorRewardPrefabName;
  }
  v67 = TitleInfoEventTowerReward_TypeInfo;
  if ( (BYTE3(TitleInfoEventTowerReward_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
    v67 = TitleInfoEventTowerReward_TypeInfo;
  }
  transform = System_String__op_Equality(CLIP_NAME_TOWER_REWARD, v67->static_fields->CLIP_NAME_TOWER_REWARD, 0LL);
  if ( (transform & 1) != 0 )
  {
    v68 = *p_eventTowerReward;
    if ( !*p_eventTowerReward )
      goto LABEL_146;
    if ( v68->fields.towerId == 2 && v68->fields.floor == 100 )
      effectId = 3;
  }
  eventId = effectId;
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v70 = System_String__Concat_43929608(
          (Il2CppObject *)CLIP_NAME_TOWER_REWARD,
          (Il2CppObject *)StringLiteral_15952/*"_"*/,
          v69,
          0LL);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  v72 = v70;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    transform = (__int64)this->fields.simpleAnimation;
    if ( !transform )
      goto LABEL_146;
    transform = (__int64)SimpleAnimation__get_Item((SimpleAnimation_o *)transform, v72, 0LL);
    if ( !transform )
      goto LABEL_146;
    v73 = *(_QWORD *)transform;
    v74 = transform;
    if ( *(_WORD *)(*(_QWORD *)transform + 298LL) )
    {
      v75 = 0LL;
      v76 = (SimpleAnimation_State_c **)(*(_QWORD *)(v73 + 176) + 8LL);
      while ( *(v76 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v75;
        v76 += 2;
        if ( v75 >= *(unsigned __int16 *)(*(_QWORD *)transform + 298LL) )
          goto LABEL_62;
      }
      v77 = v73 + 16LL * (*(_DWORD *)v76 + 14) + 312;
    }
    else
    {
LABEL_62:
      v77 = sub_AA67A0(transform, SimpleAnimation_State_TypeInfo, 14LL);
    }
    transform = (*(__int64 (__fastcall **)(__int64, _QWORD))v77)(v74, *(_QWORD *)(v77 + 8));
    if ( !this->fields.simpleAnimation )
      goto LABEL_146;
    SimpleAnimation__set_clip(this->fields.simpleAnimation, (UnityEngine_AnimationClip_o *)transform, 0LL);
    transform = (__int64)this->fields.simpleAnimation;
    if ( !transform )
      goto LABEL_146;
    goto LABEL_75;
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    transform = (__int64)this->fields.animation;
    if ( !transform )
      goto LABEL_146;
    transform = (__int64)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)transform, v72, 0LL);
    if ( !this->fields.animation )
      goto LABEL_146;
    UnityEngine_Animation__set_clip(this->fields.animation, (UnityEngine_AnimationClip_o *)transform, 0LL);
    transform = (__int64)this->fields.animation;
    if ( !transform )
      goto LABEL_146;
LABEL_75:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 0, 0LL);
  }
  if ( !*p_eventTowerReward )
    goto LABEL_146;
  towerId = (*p_eventTowerReward)->fields.towerId;
  v80 = towerId - 1;
  if ( towerId >= 1 )
  {
    floorNumFontList = this->fields.floorNumFontList;
    if ( !floorNumFontList )
      goto LABEL_146;
    size = floorNumFontList->fields._size;
    if ( size >= towerId )
    {
      if ( size <= v80 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v83 = (UnityEngine_Object_o *)floorNumFontList->fields._items->m_Items[v80];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = UnityEngine_Object__op_Inequality(v83, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        v84 = this->fields.eventTowerReward;
        if ( !v84 )
          goto LABEL_146;
        v85 = this->fields.floorNumFontList;
        if ( !v85 )
          goto LABEL_146;
        v86 = v84->fields.towerId - 1;
        if ( v85->fields._size <= (unsigned int)v86 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !this->fields.floorLabel )
          goto LABEL_146;
        UILabel__set_font(this->fields.floorLabel, v85->fields._items->m_Items[v86], 0LL);
      }
    }
  }
  v87 = this->fields.eventTowerReward;
  if ( !v87 )
    goto LABEL_146;
  floorLabel = this->fields.floorLabel;
  transform = (__int64)System_Int32__ToString((int)v87 + 24, 0LL);
  if ( !floorLabel )
    goto LABEL_146;
  UILabel__set_text(floorLabel, (System_String_o *)transform, 0LL);
  if ( v62 )
  {
    transform = (__int64)TitleInfoEventTowerReward_TypeInfo;
    nameSprite = this->fields.nameSprite;
    if ( (BYTE3(TitleInfoEventTowerReward_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
      transform = (__int64)TitleInfoEventTowerReward_TypeInfo;
    }
    if ( !*p_eventTowerReward )
      goto LABEL_146;
    v90 = **(System_String_o ***)(transform + 184);
    eventId = (*p_eventTowerReward)->fields.eventId;
    transform = j_il2cpp_value_box_0(int_TypeInfo, &eventId);
    if ( !*p_eventTowerReward )
      goto LABEL_146;
    v91 = (Il2CppObject *)transform;
    v115 = (*p_eventTowerReward)->fields.towerId;
    v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v115);
    transform = (__int64)System_String__Format_43845440(v90, v91, v92, 0LL);
    if ( !nameSprite )
      goto LABEL_146;
    UISprite__set_spriteName(nameSprite, (System_String_o *)transform, 0LL);
    transform = (__int64)this->fields.nameSprite;
    if ( !transform )
      goto LABEL_146;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)transform + 840LL))(
      transform,
      *(_QWORD *)(*(_QWORD *)transform + 848LL));
  }
  transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_146;
  transform = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)transform,
                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*p_eventTowerReward )
    goto LABEL_146;
  if ( !transform )
    goto LABEL_146;
  transform = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)transform, (*p_eventTowerReward)->fields.giftId, 0LL);
  if ( !transform )
    goto LABEL_146;
  v95 = *(_DWORD *)(transform + 24);
  v96 = transform;
  if ( v95 >= 1 )
  {
    v97 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v93, v94);
    System_Text_StringBuilder___ctor(v97, 0LL);
    v98 = 0LL;
    v99 = v96 + 32;
    while ( 1 )
    {
      if ( (_DWORD)v98 )
      {
        if ( !v97 )
          goto LABEL_146;
        transform = (__int64)System_Text_StringBuilder__Append_42155400(v97, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      }
      if ( (unsigned int)v98 >= *(_DWORD *)(v96 + 24) )
        goto LABEL_147;
      transform = *(_QWORD *)(v99 + 8 * v98);
      if ( !transform )
        goto LABEL_146;
      GiftEntity__GetInfo((GiftEntity_o *)transform, &nameText, &countText, 0LL);
      if ( (unsigned int)v98 >= *(_DWORD *)(v96 + 24) )
        goto LABEL_147;
      v100 = *(_QWORD *)(v99 + 8 * v98);
      if ( !v100 )
        goto LABEL_146;
      if ( *(_DWORD *)(v100 + 20) == 9 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v101 = (System_String_o *)StringLiteral_10939/*"QUEST_CLEAR_COSTUME_GET"*/;
      }
      else
      {
        if ( !System_String__IsNullOrEmpty(countText, 0LL) )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5757/*"EVENT_TOWER_REWARD_GET"*/, 0LL);
          if ( !v97 )
            goto LABEL_146;
          transform = (__int64)System_Text_StringBuilder__AppendFormat_42161952(
                                 v97,
                                 (System_String_o *)transform,
                                 (Il2CppObject *)nameText,
                                 (Il2CppObject *)countText,
                                 0LL);
          goto LABEL_133;
        }
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v101 = (System_String_o *)StringLiteral_5758/*"EVENT_TOWER_REWARD_GET_2"*/;
      }
      transform = (__int64)LocalizationManager__Get(v101, 0LL);
      if ( !v97 )
        goto LABEL_146;
      transform = (__int64)System_Text_StringBuilder__AppendFormat(
                             v97,
                             (System_String_o *)transform,
                             (Il2CppObject *)nameText,
                             0LL);
LABEL_133:
      if ( (int)++v98 >= v95 )
      {
        rewardLabel = this->fields.rewardLabel;
        transform = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v97->klass->vtable._3_ToString.method)(
                      v97,
                      v97->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        if ( rewardLabel )
        {
          UILabel__set_text(rewardLabel, (System_String_o *)transform, 0LL);
          if ( !*(_DWORD *)(v96 + 24) )
          {
LABEL_147:
            v114 = sub_B0D9A8(transform);
            sub_B0D948(v114, 0LL);
          }
          v103 = *(_DWORD **)(v96 + 32);
          if ( v103 )
          {
            transform = (__int64)this->fields.itemIcon;
            if ( transform )
            {
              v104 = v103[5];
              ItemIconComponent__SetGift((ItemIconComponent_o *)transform, v104, v103[6], v103[7], 0, 0LL);
              transform = (__int64)this->fields.imageFrame;
              if ( transform )
              {
                UnityEngine_GameObject__SetActive(
                  (UnityEngine_GameObject_o *)transform,
                  ((unsigned int)(v104 - 1) < 0xB) & (0x461u >> (v104 - 1)),
                  0LL);
                break;
              }
            }
          }
        }
        goto LABEL_146;
      }
    }
  }
  transform = (__int64)TitleInfoEventTowerReward_TypeInfo;
  if ( (BYTE3(TitleInfoEventTowerReward_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
  }
  v105 = *p_eventTowerReward;
  if ( !*p_eventTowerReward )
    goto LABEL_146;
  SPRITE_NAME_BG = TitleInfoEventTowerReward_TypeInfo->static_fields->SPRITE_NAME_BG;
  eventId = v105->fields.bgId;
  v107 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v108 = System_String__Format(SPRITE_NAME_BG, v107, 0LL);
  bgSprite = this->fields.bgSprite;
  v110 = v108;
  v113 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v111, v112);
  System_Action___ctor(v113, (Il2CppObject *)this, Method_TitleInfoEventTowerReward_OnLoadEndBG__, 0LL);
  if ( !bgSprite )
    goto LABEL_146;
  ExUITexture__SetAssetImage(bgSprite, v110, v113, 0LL);
}


void __fastcall TitleInfoEventTowerReward__PlayVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TitleInfoEventTowerReward_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x20
  __int64 selectVoiceIndex; // x21
  ServantVoiceData_array *v15; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v17; // x20
  System_Int32_array **id; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  System_String_o *VoiceAssetName_29941680; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  System_String_o *voiceName; // x21
  System_String_o *v24; // x22
  SeManager_c *v25; // x8
  float DEFAULT_VOLUME; // s8
  System_Action_o *v27; // x23
  System_Int32_array **v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UIStandFigureR_o *standFigure; // x21
  int32_t face; // w22
  float FadeTime; // s0
  __int64 v38; // x0

  v8 = this;
  if ( (byte_4213093 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v9);
    sub_B0D8A4(&SeManager_TypeInfo, v10);
    sub_B0D8A4(&SoundManager_TypeInfo, v11);
    this = (TitleInfoEventTowerReward_o *)sub_B0D8A4(&Method_TitleInfoEventTowerReward_EndPlayVoice__, v12);
    byte_4213093 = 1;
  }
  voiceList = v8->fields.voiceList;
  if ( !voiceList )
    goto LABEL_18;
  selectVoiceIndex = v8->fields.selectVoiceIndex;
  if ( voiceList->fields._size <= (unsigned int)selectVoiceIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v15 = voiceList->fields._items->m_Items[selectVoiceIndex];
  if ( !v15 )
    goto LABEL_18;
  playCnt = v8->fields.playCnt;
  if ( (unsigned int)playCnt >= v15->max_length )
  {
    v38 = sub_B0D9A8(this);
    sub_B0D948(v38, 0LL);
  }
  v17 = v15->m_Items[playCnt];
  if ( !v17 )
    goto LABEL_18;
  id = (System_Int32_array **)v17->fields.id;
  v8->fields.voiceName = (struct System_String_o *)id;
  sub_B0D840((BattleServantConfConponent_o *)&v8->fields.voiceName, id, v2, v3, v4, v5, v6, v7);
  eventTowerReward = v8->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_18;
  VoiceAssetName_29941680 = ServantVoiceEntity__getVoiceAssetName_29941680(eventTowerReward->fields.svtId, 0LL);
  voiceName = v8->fields.voiceName;
  v24 = VoiceAssetName_29941680;
  v25 = SeManager_TypeInfo;
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v25 = SeManager_TypeInfo;
  }
  DEFAULT_VOLUME = v25->static_fields->DEFAULT_VOLUME;
  v27 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v21, v22);
  System_Action___ctor(v27, (Il2CppObject *)v8, Method_TitleInfoEventTowerReward_EndPlayVoice__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v28 = (System_Int32_array **)SoundManager__playVoice_24977528(v24, voiceName, DEFAULT_VOLUME, v27, 0LL);
  v8->fields.voicePlayer = (struct SePlayer_o *)v28;
  sub_B0D840((BattleServantConfConponent_o *)&v8->fields.voicePlayer, v28, v29, v30, v31, v32, v33, v34);
  standFigure = v8->fields.standFigure;
  face = v17->fields.face;
  FadeTime = ServantVoiceData__GetFadeTime(v17, 0LL);
  if ( !standFigure )
LABEL_18:
    sub_B0D97C(this);
  UIStandFigureR__SetFace(standFigure, face, FadeTime, 0LL);
  ++v8->fields.playCnt;
}


void __fastcall TitleInfoEventTowerReward__StartRewardAction(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  System_Action_o *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Action_o **v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  QuestRewardInfo_array *resultEventTowerRewardInfo; // x20
  System_Action_o *v25; // x22
  const MethodInfo *v26; // x4

  if ( (byte_4213098 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_TitleInfoEventTowerReward___c__DisplayClass38_0__StartRewardAction_b__0__, v5);
    sub_B0D8A4(&TitleInfoEventTowerReward___c__DisplayClass38_0_TypeInfo, v6);
    byte_4213098 = 1;
  }
  v7 = sub_B0D974(TitleInfoEventTowerReward___c__DisplayClass38_0_TypeInfo, callback, method);
  TitleInfoEventTowerReward___c__DisplayClass38_0___ctor((TitleInfoEventTowerReward___c__DisplayClass38_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_8;
  *(_QWORD *)(v7 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v7 + 24) = callback;
  v15 = (System_Action_o **)(v7 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  resultEventTowerRewardInfo = this->fields.resultEventTowerRewardInfo;
  if ( resultEventTowerRewardInfo )
  {
    v25 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v22, v23);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTowerReward___c__DisplayClass38_0__StartRewardAction_b__0__,
      0LL);
    TitleInfoEventTowerReward__StartRewardAction_sub(this, resultEventTowerRewardInfo, 0, v25, v26);
    return;
  }
  v8 = *v15;
  if ( !*v15 )
LABEL_8:
    sub_B0D97C(v8);
  System_Action__Invoke(v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTowerReward__StartRewardAction_sub(
        TitleInfoEventTowerReward_o *this,
        QuestRewardInfo_array *rewardInfoList,
        int32_t idx,
        System_Action_o *subEndAction,
        const MethodInfo *method)
{
  int32_t v6; // w19
  System_Int32_array **v7; // x20
  System_Int32_array **v9; // x1
  __int64 v10; // x19
  System_Action_o *IsServant_26783204; // x0
  WarEntity_o *Entity; // x0
  WarEntity_o *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x26
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Action_o **v33; // x20
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
  __int64 v46; // x8
  __int64 v47; // x9
  int v48; // w10
  SummonAssetManager_o *Instance; // x19
  __int64 v50; // x1
  __int64 v51; // x2
  System_Action_o *v52; // x20
  __int64 v53; // x0

  v6 = idx;
  v7 = (System_Int32_array **)rewardInfoList;
  while ( 1 )
  {
    if ( (byte_4213099 & 1) == 0 )
    {
      sub_B0D8A4(&System_Action_TypeInfo, rewardInfoList);
      sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v14);
      sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
      sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
      sub_B0D8A4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v17);
      sub_B0D8A4(&Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__0__, v18);
      sub_B0D8A4(&TitleInfoEventTowerReward___c__DisplayClass39_0_TypeInfo, v19);
      byte_4213099 = 1;
    }
    v20 = sub_B0D974(TitleInfoEventTowerReward___c__DisplayClass39_0_TypeInfo, rewardInfoList, *(_QWORD *)&idx);
    TitleInfoEventTowerReward___c__DisplayClass39_0___ctor(
      (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v20,
      0LL);
    if ( !v20 )
      goto LABEL_24;
    *(_QWORD *)(v20 + 24) = this;
    sub_B0D840((BattleServantConfConponent_o *)(v20 + 24), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
    *(_QWORD *)(v20 + 32) = v7;
    sub_B0D840((BattleServantConfConponent_o *)(v20 + 32), v7, v27, v28, v29, v30, v31, v32);
    *(_QWORD *)(v20 + 48) = subEndAction;
    v33 = (System_Action_o **)(v20 + 48);
    *(_DWORD *)(v20 + 40) = v6;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v20 + 48),
      (System_Int32_array **)subEndAction,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    v46 = *(_QWORD *)(v20 + 32);
    if ( !v46 )
      goto LABEL_24;
    v47 = *(int *)(v20 + 40);
    v48 = *(_DWORD *)(v46 + 24);
    if ( (int)v47 >= v48 )
    {
      IsServant_26783204 = *v33;
      if ( *v33 )
      {
        System_Action__Invoke(IsServant_26783204, 0LL);
        return;
      }
LABEL_24:
      sub_B0D97C(IsServant_26783204);
    }
    if ( (unsigned int)v47 >= v48 )
    {
      v53 = sub_B0D9A8(IsServant_26783204);
      sub_B0D948(v53, 0LL);
    }
    v9 = *(System_Int32_array ***)(v46 + 8 * v47 + 32);
    *(_QWORD *)(v20 + 16) = v9;
    v10 = v20 + 16;
    sub_B0D840((BattleServantConfConponent_o *)(v20 + 16), v9, v40, v41, v42, v43, v44, v45);
    if ( !*(_QWORD *)(v20 + 16) )
      goto LABEL_24;
    IsServant_26783204 = (System_Action_o *)Gift__IsServant_26783204(*(_DWORD *)(*(_QWORD *)(v20 + 16) + 16LL), 0LL);
    if ( ((unsigned __int8)IsServant_26783204 & 1) == 0 )
      break;
    IsServant_26783204 = (System_Action_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsServant_26783204 )
      goto LABEL_24;
    IsServant_26783204 = (System_Action_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)IsServant_26783204,
                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*(_QWORD *)v10 || !IsServant_26783204 )
      goto LABEL_24;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)IsServant_26783204,
               *(_DWORD *)(*(_QWORD *)v10 + 20LL),
               (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( Entity )
    {
      v13 = Entity;
      if ( !SvtType__IsCombineMaterial(*(&Entity->fields.startType + 1), 0LL)
        && !SvtType__IsStatusUp(*(&v13->fields.startType + 1), 0LL) )
      {
        goto LABEL_22;
      }
    }
LABEL_14:
    v7 = *(System_Int32_array ***)(v20 + 32);
    subEndAction = *(System_Action_o **)(v20 + 48);
    v6 = *(_DWORD *)(v20 + 40) + 1;
  }
  if ( !*(_QWORD *)v10 )
    goto LABEL_24;
  if ( !Gift__IsCommandCode_26783600(*(_DWORD *)(*(_QWORD *)v10 + 16LL), 0LL) )
    goto LABEL_14;
LABEL_22:
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v52 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v50, v51);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v20,
    Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_24;
  SummonAssetManager__LoadSummonAssets(Instance, v52, 0LL);
}


void __fastcall TitleInfoEventTowerReward__StartVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoEventTowerReward_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Random_o *v7; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *v8; // x8
  const MethodInfo *v9; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o *v10; // x21
  ServantVoiceData_array *v11; // x8

  v3 = this;
  if ( (byte_4213092 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v4);
    this = (TitleInfoEventTowerReward_o *)sub_B0D8A4(&System_Random_TypeInfo, v5);
    byte_4213092 = 1;
  }
  voiceList = v3->fields.voiceList;
  if ( !voiceList )
    goto LABEL_13;
  if ( voiceList->fields._size )
  {
    v7 = (System_Random_o *)sub_B0D974(System_Random_TypeInfo, method, v2);
    System_Random___ctor(v7, 0LL);
    v8 = v3->fields.voiceList;
    if ( v8 )
    {
      if ( v7 )
      {
        this = (TitleInfoEventTowerReward_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._7_Next.method)(
                                                v7,
                                                (unsigned int)v8->fields._size,
                                                v7->klass->vtable._8_NextDouble.methodPtr);
        v10 = v3->fields.voiceList;
        v3->fields.selectVoiceIndex = (int)this;
        if ( v10 )
        {
          if ( v10->fields._size <= (unsigned int)this )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v11 = v10->fields._items->m_Items[(int)this];
          if ( v11 )
          {
            *(_QWORD *)&v3->fields.maxPlayCnt = (unsigned int)*(_QWORD *)&v11->max_length;
            TitleInfoEventTowerReward__PlayVoice(v3, v9);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_B0D97C(this);
  }
}


void __fastcall TitleInfoEventTowerReward__Update(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t state; // w8
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Object_o *monitor; // x0
  struct SimpleAnimation_o *v8; // x20
  System_String_o *name; // x0
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v11; // x20
  unsigned __int64 v12; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v14; // x0
  const MethodInfo *v15; // x1
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v17; // x20
  System_String_o *v18; // x0
  UnityEngine_AnimationState_o *v19; // x20
  float time; // s8
  long double v21; // q0
  UnityEngine_Object_c *v22; // x8
  unsigned __int64 v23; // x10
  SimpleAnimation_State_c **v24; // x11
  __int64 v25; // x0

  if ( (byte_4213095 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v4);
    byte_4213095 = 1;
  }
  state = this->fields.state;
  if ( state != 2 )
  {
    if ( state != 1 )
      return;
    simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)monitor & 1) != 0 )
    {
      v8 = this->fields.simpleAnimation;
      if ( !v8 )
        goto LABEL_44;
      monitor = (UnityEngine_Object_o *)v8[1].monitor;
      if ( !monitor )
        goto LABEL_44;
      name = UnityEngine_Object__get_name(monitor, 0LL);
      monitor = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v8, name, 0LL);
      if ( !monitor )
        goto LABEL_44;
      klass = monitor->klass;
      v11 = monitor;
      if ( *(_WORD *)&monitor->klass->_2.bitflags1 )
      {
        v12 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v12;
          p_offset += 2;
          if ( v12 >= *(unsigned __int16 *)&monitor->klass->_2.bitflags1 )
            goto LABEL_16;
        }
        v14 = (__int64)(&klass->vtable._3_ToString.method + 2 * *(_DWORD *)p_offset);
      }
      else
      {
LABEL_16:
        v14 = sub_AA67A0(monitor, SimpleAnimation_State_TypeInfo, 3LL);
      }
      v21 = ((long double (__fastcall *)(UnityEngine_Object_o *, _QWORD))*(_QWORD *)v14)(v11, *(_QWORD *)(v14 + 8));
      v22 = v11->klass;
      time = *(float *)&v21;
      if ( *(_WORD *)&v11->klass->_2.bitflags1 )
      {
        v23 = 0LL;
        v24 = (SimpleAnimation_State_c **)&v22->_1.interfaceOffsets->offset;
        while ( *(v24 - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v23;
          v24 += 2;
          if ( v23 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
            goto LABEL_36;
        }
        v25 = (__int64)(&v22[1]._1.implementedInterfaces + 2 * *(_DWORD *)v24);
      }
      else
      {
LABEL_36:
        v25 = sub_AA67A0(v11, SimpleAnimation_State_TypeInfo, 14LL);
      }
      monitor = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v25)(
                                          v11,
                                          *(_QWORD *)(v25 + 8));
      if ( !monitor )
        goto LABEL_44;
    }
    else
    {
      animation = (UnityEngine_Object_o *)this->fields.animation;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
      if ( ((unsigned __int8)monitor & 1) == 0 )
        goto LABEL_40;
      v17 = this->fields.animation;
      if ( !v17 )
        goto LABEL_44;
      monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0LL);
      if ( !monitor )
        goto LABEL_44;
      v18 = UnityEngine_Object__get_name(monitor, 0LL);
      monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v17, v18, 0LL);
      if ( !monitor )
        goto LABEL_44;
      v19 = (UnityEngine_AnimationState_o *)monitor;
      time = UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)monitor, 0LL);
      monitor = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v19, 0LL);
      if ( !monitor )
        goto LABEL_44;
    }
    if ( time < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)monitor, 0LL) )
      return;
LABEL_40:
    monitor = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
    if ( monitor )
    {
      monitor = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)monitor, 0LL);
      if ( monitor )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)monitor, 1, 0LL);
        this->fields.state = 2;
        return;
      }
    }
LABEL_44:
    sub_B0D97C(monitor);
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0LL) )
    TitleInfoEventTowerReward__OnTouchDisp(this, v15);
}


void __fastcall TitleInfoEventTowerReward___Close_b__37_0(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_endCallback; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *endCallback; // t1

  endCallback = this->fields.endCallback;
  p_endCallback = (BattleServantConfConponent_o *)&this->fields.endCallback;
  v9 = endCallback;
  if ( endCallback )
  {
    p_endCallback->klass = 0LL;
    sub_B0D840(p_endCallback, 0LL, v2, v3, v4, v5, v6, v7);
    ActionExtensions__Call(v9, 0LL);
  }
}


void __fastcall TitleInfoEventTowerReward___OnLoadEndSvt_b__31_0(
        TitleInfoEventTowerReward_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  CommonUI_o *Instance; // x0
  CommonUI_o *v11; // x20
  struct EventTowerReward_o *eventTowerReward; // x8
  struct EventTowerReward_o *v13; // x8
  System_String_o *topImg; // x20
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v16; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v18; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *v22; // x20
  System_String_o *v23; // x0

  if ( (byte_421309B & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BgmMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&SoundManager_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_13095/*"StartVoice"*/, v9);
    byte_421309B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v11 )
    goto LABEL_46;
  CommonUI__maskFadein(v11, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13095/*"StartVoice"*/,
    this->fields.voiceStartTime,
    0LL);
  eventTowerReward = this->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_46;
  if ( eventTowerReward->fields.bgmId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    Instance = (CommonUI_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BgmMaster___);
    v13 = this->fields.eventTowerReward;
    if ( !v13 )
      goto LABEL_46;
    if ( !Instance )
      goto LABEL_46;
    Instance = (CommonUI_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                               v13->fields.bgmId,
                               (const MethodInfo_2669BD4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_46;
    topImg = (System_String_o *)Instance->fields.topImg;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playBgm(topImg, 0LL);
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)this->fields.simpleAnimation;
    if ( !Instance )
      goto LABEL_46;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    v16 = this->fields.simpleAnimation;
    if ( !v16 )
      goto LABEL_46;
    monitor = (UnityEngine_Object_o *)v16[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v18 = this->fields.simpleAnimation;
      if ( v18 )
      {
        Instance = (CommonUI_o *)v18[1].monitor;
        if ( Instance )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
          SimpleAnimation__Play_50482404(v18, name, 0LL);
          goto LABEL_43;
        }
      }
LABEL_46:
      sub_B0D97C(Instance);
    }
  }
  else
  {
    animation = (UnityEngine_Object_o *)this->fields.animation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
    {
      Instance = (CommonUI_o *)this->fields.animation;
      if ( !Instance )
        goto LABEL_46;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
      Instance = (CommonUI_o *)this->fields.animation;
      if ( !Instance )
        goto LABEL_46;
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)Instance, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(clip, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        v22 = this->fields.animation;
        if ( v22 )
        {
          Instance = (CommonUI_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0LL);
          if ( Instance )
          {
            v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
            UnityEngine_Animation__Play_50564840(v22, v23, 0LL);
            goto LABEL_43;
          }
        }
        goto LABEL_46;
      }
    }
  }
LABEL_43:
  Instance = (CommonUI_o *)this->fields.standFigure;
  if ( !Instance )
    goto LABEL_46;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.state = 1;
}


void __fastcall TitleInfoEventTowerReward___c__DisplayClass38_0___ctor(
        TitleInfoEventTowerReward___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventTowerReward___c__DisplayClass38_0___StartRewardAction_b__0(
        TitleInfoEventTowerReward___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  TitleInfoEventTowerReward_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  TitleInfoEventTowerReward__EndItemGetEffectAction(_4__this, this->fields.callback, 0LL);
}


void __fastcall TitleInfoEventTowerReward___c__DisplayClass39_0___ctor(
        TitleInfoEventTowerReward___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventTowerReward___c__DisplayClass39_0___StartRewardAction_sub_b__0(
        TitleInfoEventTowerReward___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct QuestRewardInfo_o *rewardInfo; // x8
  struct TitleInfoEventTowerReward_o *_4__this; // x20
  UnityEngine_Component_o **p__4__this; // x22
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v9; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct QuestRewardInfo_o *v11; // x8
  int32_t v12; // w20
  __int64 v13; // x1
  __int64 v14; // x2
  struct QuestRewardInfo_o *v15; // x8
  UnityEngine_Component_o *v16; // x20
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v17; // x21
  UnityEngine_GameObject_o *v18; // x0
  ServantRewardAction_o *v19; // x20
  System_Action_o *_9__1; // x21

  v2 = this;
  if ( (byte_42125A6 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)sub_B0D8A4(
                                                                  &Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__1__,
                                                                  v5);
    byte_42125A6 = 1;
  }
  rewardInfo = v2->fields.rewardInfo;
  if ( !rewardInfo )
    goto LABEL_31;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)Gift__IsServant_26783204(rewardInfo->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    p__4__this = (UnityEngine_Component_o **)&v2->fields.__4__this;
    _4__this = v2->fields.__4__this;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( v2->fields.__4__this )
    {
      v9 = this;
      gameObject = UnityEngine_Component__get_gameObject(*p__4__this, 0LL);
      this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( v9 )
      {
        this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SummonAssetManager__InstantiateSvtGetPrefab(
                                                                      (SummonAssetManager_o *)v9,
                                                                      (UnityEngine_Transform_o *)this,
                                                                      0,
                                                                      0LL);
        if ( _4__this )
        {
          _4__this->fields.servantRewardAction = (struct ServantRewardAction_o *)this;
          sub_B0D840(&_4__this->fields.servantRewardAction, this);
          v11 = v2->fields.rewardInfo;
          if ( v11 )
          {
            if ( v11->fields.isSkipSvtDetail )
              v12 = 38;
            else
              v12 = 6;
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__stopBgm(0LL);
            if ( *p__4__this )
            {
              this = *(TitleInfoEventTowerReward___c__DisplayClass39_0_o **)&(*p__4__this)[8].fields.m_CachedPtr;
              if ( this )
              {
                ServantRewardAction__Setup_28240232((ServantRewardAction_o *)this, v2->fields.rewardInfo, v12, 0LL);
                goto LABEL_26;
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_B0D97C(this);
  }
  v15 = v2->fields.rewardInfo;
  if ( !v15 )
    goto LABEL_31;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)Gift__IsCommandCode_26783600(v15->fields.type, 0LL);
  p__4__this = (UnityEngine_Component_o **)&v2->fields.__4__this;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v16 = *p__4__this;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( !*p__4__this )
      goto LABEL_31;
    v17 = this;
    v18 = UnityEngine_Component__get_gameObject(*p__4__this, 0LL);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)GameObjectExtensions__GetParent(v18, 0LL);
    if ( !v17 )
      goto LABEL_31;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SummonAssetManager__InstantiateSvtGetPrefab(
                                                                  (SummonAssetManager_o *)v17,
                                                                  (UnityEngine_Transform_o *)this,
                                                                  0,
                                                                  0LL);
    if ( !v16 )
      goto LABEL_31;
    *(_QWORD *)&v16[8].fields.m_CachedPtr = this;
    sub_B0D840(&v16[8].fields, this);
    if ( !*p__4__this )
      goto LABEL_31;
    this = *(TitleInfoEventTowerReward___c__DisplayClass39_0_o **)&(*p__4__this)[8].fields.m_CachedPtr;
    if ( !this )
      goto LABEL_31;
    ServantRewardAction__SetupCommandCode((ServantRewardAction_o *)this, v2->fields.rewardInfo, 6, 0LL);
  }
LABEL_26:
  if ( !*p__4__this )
    goto LABEL_31;
  v19 = *(ServantRewardAction_o **)&(*p__4__this)[8].fields.m_CachedPtr;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_B0D840(&v2->fields.__9__1, _9__1);
  }
  if ( !v19 )
    goto LABEL_31;
  ServantRewardAction__Play(v19, _9__1, 0.0, 0LL);
}


void __fastcall TitleInfoEventTowerReward___c__DisplayClass39_0___StartRewardAction_sub_b__1(
        TitleInfoEventTowerReward___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v2; // x19
  __int64 v3; // x1
  struct TitleInfoEventTowerReward_o *_4__this; // x8
  UnityEngine_Object_o *gameObject; // x20

  v2 = this;
  if ( (byte_42125A7 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)sub_B0D8A4(
                                                                  &Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__,
                                                                  v3);
    byte_42125A7 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)_4__this->fields.servantRewardAction;
  if ( !this )
    goto LABEL_11;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_34935488(gameObject, 0LL);
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !this
    || (SummonAssetManager__UnloadSummonAssets((SummonAssetManager_o *)this, 0LL),
        (this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v2->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_B0D97C(this);
  }
  TitleInfoEventTowerReward__StartRewardAction_sub(
    (TitleInfoEventTowerReward_o *)this,
    v2->fields.rewardInfoList,
    v2->fields.idx + 1,
    v2->fields.subEndAction,
    0LL);
}