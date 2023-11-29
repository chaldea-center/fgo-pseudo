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

  if ( (byte_40F8409 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventTowerReward_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_22654, v8);
    sub_B16FFC(&StringLiteral_16702, v9);
    sub_B16FFC(&StringLiteral_2642, v10);
    byte_40F8409 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventTowerReward_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_22654;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22654;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = TitleInfoEventTowerReward_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_2642;
  v13->SPRITE_NAME_BG = (struct System_String_o *)StringLiteral_2642;
  sub_B16F98((BattleServantConfConponent_o *)&v13->SPRITE_NAME_BG, v14, v15, v16, v17, v18, v19, v20);
  v21 = TitleInfoEventTowerReward_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_16702;
  v21->CLIP_NAME_TOWER_REWARD = (struct System_String_o *)StringLiteral_16702;
  sub_B16F98((BattleServantConfConponent_o *)&v21->CLIP_NAME_TOWER_REWARD, v22, v23, v24, v25, v26, v27, v28);
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
  __int64 v16; // x3
  __int64 v17; // x4
  System_String_o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Action_o *v25; // x20
  const MethodInfo *v26; // x2

  if ( (byte_40F8406 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_TitleInfoEventTowerReward__Close_b__37_0__, v4);
    byte_40F8406 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( this->fields.voicePlayer )
  {
    voiceName = this->fields.voiceName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopVoice_24850100(voiceName, 0.0, 0LL);
    this->fields.voicePlayer = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.voicePlayer, 0LL, v7, v8, v9, v10, v11, v12);
  }
  p_voiceAssetName = &this->fields.voiceAssetName;
  if ( !System_String__IsNullOrEmpty(this->fields.voiceAssetName, 0LL) )
  {
    v18 = *p_voiceAssetName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(v18, 0LL);
    *p_voiceAssetName = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.voiceAssetName, 0LL, v19, v20, v21, v22, v23, v24);
  }
  *(_QWORD *)&this->fields.selectVoiceIndex = 0LL;
  this->fields.playCnt = 0;
  v25 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_TitleInfoEventTowerReward__Close_b__37_0__, 0LL);
  TitleInfoEventTowerReward__StartRewardAction(this, v25, v26);
}


void __fastcall TitleInfoEventTowerReward__EndItemGetEffectAction(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  if ( !afterDetail )
    sub_B170D4();
  System_Action__Invoke(afterDetail, 0LL);
}


void __fastcall TitleInfoEventTowerReward__EndPlayVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoEventTowerReward_o *v3; // x19
  __int64 v4; // x1
  int32_t playCnt; // w8
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x20
  __int64 selectVoiceIndex; // x21
  ServantVoiceData_array *v8; // x9
  ServantVoiceData_o *v9; // x8

  v3 = this;
  if ( (byte_40F8403 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, method);
    this = (TitleInfoEventTowerReward_o *)sub_B16FFC(&StringLiteral_10661, v4);
    byte_40F8403 = 1;
  }
  playCnt = v3->fields.playCnt;
  if ( playCnt < v3->fields.maxPlayCnt )
  {
    voiceList = v3->fields.voiceList;
    if ( !voiceList )
      goto LABEL_12;
    selectVoiceIndex = v3->fields.selectVoiceIndex;
    if ( voiceList->fields._size <= (unsigned int)selectVoiceIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v8 = voiceList->fields._items->m_Items[selectVoiceIndex];
    if ( !v8 )
      goto LABEL_12;
    if ( playCnt >= v8->max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v9 = v8->m_Items[playCnt];
    if ( !v9 )
LABEL_12:
      sub_B170D4();
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)v3,
      (System_String_o *)StringLiteral_10661,
      v9->fields.delay,
      0LL);
  }
}


void __fastcall TitleInfoEventTowerReward__OnLoadEndBG(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  int32_t svtId; // w21
  int32_t limitCount; // w22
  UIStandFigureR_o *standFigure; // x20
  System_Action_o *v11; // x23

  if ( (byte_40F83FF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_TitleInfoEventTowerReward_OnLoadEndSvt__, v6);
    byte_40F83FF = 1;
  }
  eventTowerReward = this->fields.eventTowerReward;
  if ( !eventTowerReward
    || (svtId = eventTowerReward->fields.svtId,
        limitCount = eventTowerReward->fields.limitCount,
        standFigure = this->fields.standFigure,
        v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4),
        System_Action___ctor(v11, (Il2CppObject *)this, Method_TitleInfoEventTowerReward_OnLoadEndSvt__, 0LL),
        !standFigure) )
  {
    sub_B170D4();
  }
  UIStandFigureR__SetCharacter(standFigure, svtId, limitCount, 1, 0, 0, v11, 0LL);
}


void __fastcall TitleInfoEventTowerReward__OnLoadEndSvt(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x20
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  struct EventTowerReward_o *v26; // x8
  struct System_String_array *voiceIds; // x8
  ServantVoiceMaster_o *v28; // x22
  __int64 v29; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x23
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_IEnumerable_T__o *Entity_30054132; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  unsigned __int64 v40; // x23
  struct EventTowerReward_o *v41; // x8
  struct System_String_array *v42; // x9
  WebViewManager_o *v43; // x0
  int size; // w24
  VoicePlayCondMaster_o *v45; // x22
  __int64 v46; // x25
  unsigned int v47; // w8
  __int64 v48; // x8
  __int64 v49; // x8
  struct EventTowerReward_o *v50; // x9
  struct EventTowerReward_o *v51; // x8
  int32_t svtId; // w20
  struct System_String_o *VoiceAssetName_30033140; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_o *voiceAssetName; // x20
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  System_Action_o *v65; // x21

  if ( (byte_40F8400 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____AddRange__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v12);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v13);
    sub_B16FFC(&ServantVoiceEntity_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&SoundManager_TypeInfo, v16);
    sub_B16FFC(&Method_TitleInfoEventTowerReward__OnLoadEndSvt_b__31_0__, v17);
    byte_40F8400 = 1;
  }
  eventTowerReward = this->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_45;
  if ( eventTowerReward->fields.voiceIds )
  {
    v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                    method,
                                                                                                    v2,
                                                                                                    v3,
                                                                                                    v4);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v19,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
    v26 = this->fields.eventTowerReward;
    if ( !v26 )
      goto LABEL_45;
    voiceIds = v26->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_45;
    v28 = (ServantVoiceMaster_o *)MasterData_WarQuestSelectionMaster;
    v29 = *(_QWORD *)&voiceIds->max_length;
    v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                    v22,
                                                                                                    v23,
                                                                                                    v24,
                                                                                                    v25);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v30,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    this->fields.voiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v30;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.voiceList,
      (System_Int32_array **)v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    if ( (int)v29 >= 1 )
    {
      v40 = 0LL;
      while ( 1 )
      {
        v41 = this->fields.eventTowerReward;
        if ( !v41 )
          break;
        v42 = v41->fields.voiceIds;
        if ( !v42 )
          break;
        if ( v40 >= v42->max_length )
        {
LABEL_46:
          sub_B17100(Entity_30054132, v38, v39);
          sub_B170A0();
        }
        if ( !v28 )
          break;
        Entity_30054132 = (System_Collections_Generic_IEnumerable_T__o *)ServantVoiceMaster__getEntity_30054132(
                                                                           v28,
                                                                           14,
                                                                           v41->fields.svtId,
                                                                           v41->fields.limitCount,
                                                                           v42->m_Items[v40],
                                                                           0LL);
        if ( Entity_30054132 )
        {
          if ( !v19 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v19,
            Entity_30054132,
            (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
        }
        if ( (__int64)++v40 >= (int)v29 )
          goto LABEL_18;
      }
LABEL_45:
      sub_B170D4();
    }
LABEL_18:
    v43 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v43 )
      goto LABEL_45;
    Entity_30054132 = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)v43,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !v19 )
      goto LABEL_45;
    size = v19->fields._size;
    if ( size >= 1 )
    {
      v45 = (VoicePlayCondMaster_o *)Entity_30054132;
      v46 = 4LL;
      v47 = v19->fields._size;
      while ( 1 )
      {
        if ( v47 <= (int)v46 - 4 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v48 = *((_QWORD *)&v19->fields._items->obj.klass + v46);
        if ( !v48 )
          goto LABEL_45;
        if ( !*(_DWORD *)(v48 + 24) )
          goto LABEL_46;
        v49 = *(_QWORD *)(v48 + 32);
        if ( !v49 )
          goto LABEL_45;
        v50 = this->fields.eventTowerReward;
        if ( !v50 || !v45 )
          goto LABEL_45;
        Entity_30054132 = (System_Collections_Generic_IEnumerable_T__o *)VoicePlayCondMaster__isVoicePlay(
                                                                           v45,
                                                                           v50->fields.svtId,
                                                                           *(System_String_o **)(v49 + 16),
                                                                           0LL,
                                                                           -1LL,
                                                                           -1,
                                                                           0LL);
        if ( ((unsigned __int8)Entity_30054132 & 1) != 0 )
        {
          if ( v19->fields._size <= (unsigned int)(v46 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          if ( !this->fields.voiceList )
            goto LABEL_45;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.voiceList,
            *((EventMissionProgressRequest_Argument_ProgressData_o **)&v19->fields._items->obj.klass + v46),
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
        }
        if ( (int)v46 - 3 >= size )
          break;
        v47 = v19->fields._size;
        ++v46;
      }
    }
    v51 = this->fields.eventTowerReward;
    if ( !v51 )
      goto LABEL_45;
    svtId = v51->fields.svtId;
    if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
    }
    VoiceAssetName_30033140 = ServantVoiceEntity__getVoiceAssetName_30033140(svtId, 0LL);
    this->fields.voiceAssetName = VoiceAssetName_30033140;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.voiceAssetName,
      (System_Int32_array **)VoiceAssetName_30033140,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
    voiceAssetName = this->fields.voiceAssetName;
    v65 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v61, v62, v63, v64);
    System_Action___ctor(v65, (Il2CppObject *)this, Method_TitleInfoEventTowerReward__OnLoadEndSvt_b__31_0__, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__loadAudioAssetStorage(voiceAssetName, v65, 1, 0LL);
  }
}


void __fastcall TitleInfoEventTowerReward__OnTouchDisp(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Component_o *screenTouchInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v13; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x21

  if ( (byte_40F8405 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_TitleInfoEventTowerReward__OnTouchDisp_b__36_0__, v5);
    byte_40F8405 = 1;
  }
  screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
  if ( !screenTouchInfo )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v13 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_TitleInfoEventTowerReward__OnTouchDisp_b__36_0__, 0LL);
  if ( !Instance )
LABEL_10:
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v15, 0LL);
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
  UnityEngine_Component_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  CommonUI_o *Instance; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_Component_o *standFigure; // x0
  UnityEngine_GameObject_o *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  WebViewManager_o *v67; // x0
  EventTowerMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventTowerEntity_o *v69; // x21
  TitleInfoEventTowerReward_c *v70; // x8
  int effectId; // w23
  System_String_o *CLIP_NAME_TOWER_REWARD; // x22
  WebViewManager_o *v73; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v74; // x0
  System_String_o *FloorRewardPrefabName; // x0
  TitleInfoEventTowerReward_c *v76; // x0
  struct EventTowerReward_o *v77; // x8
  Il2CppObject *v78; // x0
  System_String_o *v79; // x0
  UnityEngine_Object_o *simpleAnimation; // x23
  System_String_o *v81; // x22
  SimpleAnimation_o *v82; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v85; // x22
  unsigned __int64 v86; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *animation; // x23
  UnityEngine_Animation_o *v90; // x0
  UnityEngine_AnimationClip_o *Clip; // x0
  UnityEngine_Behaviour_o *v92; // x0
  UnityEngine_AnimationClip_o *v93; // x0
  int towerId; // w8
  unsigned int v95; // w22
  struct System_Collections_Generic_List_UIFont__o *floorNumFontList; // x23
  int size; // w9
  UnityEngine_Object_o *v98; // x22
  struct EventTowerReward_o *v99; // x8
  struct System_Collections_Generic_List_UIFont__o *v100; // x23
  int v101; // w24
  struct EventTowerReward_o *v102; // x8
  UILabel_o *floorLabel; // x22
  System_String_o *v104; // x0
  TitleInfoEventTowerReward_c *v105; // x0
  UISprite_o *nameSprite; // x21
  System_String_o *SPRITE_NAME_TOWER; // x22
  __int64 v108; // x0
  Il2CppObject *v109; // x23
  Il2CppObject *v110; // x0
  System_String_o *v111; // x0
  struct UISprite_o *v112; // x0
  WebViewManager_o *v113; // x0
  GiftMaster_o *v114; // x0
  GiftEntity_array *GiftListById; // x0
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x3
  __int64 v119; // x4
  int max_length; // w23
  GiftEntity_array *v121; // x21
  System_Text_StringBuilder_o *v122; // x22
  System_Text_StringBuilder_o *appended; // x0
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x26
  GiftEntity_o **m_Items; // x27
  GiftEntity_o *v128; // x0
  GiftEntity_o *v129; // x8
  System_String_o *v130; // x0
  System_String_o *v131; // x0
  System_String_o *v132; // x0
  UILabel_o *rewardLabel; // x23
  System_String_o *v134; // x0
  GiftEntity_o *v135; // x8
  ItemIconComponent_o *itemIcon; // x0
  int32_t type; // w21
  UnityEngine_GameObject_o *imageFrame; // x0
  struct EventTowerReward_o *v139; // x8
  System_String_o *SPRITE_NAME_BG; // x20
  Il2CppObject *v141; // x0
  System_String_o *v142; // x0
  ExUITexture_o *bgSprite; // x20
  System_String_o *v144; // x21
  __int64 v145; // x1
  __int64 v146; // x2
  __int64 v147; // x3
  __int64 v148; // x4
  System_Action_o *v149; // x22
  int32_t v150; // [xsp+0h] [xbp-70h] BYREF
  int eventId; // [xsp+4h] [xbp-6Ch] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *nameText; // [xsp+10h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_40F83FE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventTowerMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, v12);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v13);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v14);
    sub_B16FFC(&int_TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIFont__get_Count__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIFont__get_Item__, v17);
    sub_B16FFC(&LocalizationManager_TypeInfo, v18);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v22);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v23);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v24);
    sub_B16FFC(&Method_TitleInfoEventTowerReward_OnLoadEndBG__, v25);
    sub_B16FFC(&TitleInfoEventTowerReward_TypeInfo, v26);
    sub_B16FFC(&StringLiteral_26, v27);
    sub_B16FFC(&StringLiteral_5723, v28);
    sub_B16FFC(&StringLiteral_10877, v29);
    sub_B16FFC(&StringLiteral_15842, v30);
    sub_B16FFC(&StringLiteral_5724, v31);
    byte_40F83FE = 1;
  }
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6064 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, callback);
    byte_40F6064 = 1;
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventTowerReward,
    (System_Int32_array **)eventTowerReward_k__BackingField,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_40F6E53 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v35);
    byte_40F6E53 = 1;
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
  sub_B16F98(
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
  p_screenTouchInfo = (UnityEngine_Component_o **)&this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_146;
    ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(Instance, transform, 0, 0LL);
    if ( !ScreeenTouchInfo )
      goto LABEL_146;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       ScreeenTouchInfo,
                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (UnityEngine_Component_o *)Component_srcLineSprite;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
      Component_srcLineSprite,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  if ( !*p_screenTouchInfo )
    goto LABEL_146;
  gameObject = UnityEngine_Component__get_gameObject(*p_screenTouchInfo, 0LL);
  if ( !gameObject )
    goto LABEL_146;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v58 )
    goto LABEL_146;
  UnityEngine_GameObject__SetActive(v58, 1, 0LL);
  standFigure = (UnityEngine_Component_o *)this->fields.standFigure;
  if ( !standFigure )
    goto LABEL_146;
  v60 = UnityEngine_Component__get_gameObject(standFigure, 0LL);
  if ( !v60 )
    goto LABEL_146;
  UnityEngine_GameObject__SetActive(v60, 0, 0LL);
  this->fields.endCallback = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endCallback,
    (System_Int32_array **)callback,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  this->fields.state = 0;
  v67 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v67 )
    goto LABEL_146;
  MasterData_WarQuestSelectionMaster = (EventTowerMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v67,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventTowerMaster___);
  if ( !*p_eventTowerReward || !MasterData_WarQuestSelectionMaster )
    goto LABEL_146;
  v69 = EventTowerMaster__GetEntity(
          MasterData_WarQuestSelectionMaster,
          (*p_eventTowerReward)->fields.eventId,
          (*p_eventTowerReward)->fields.towerId,
          0LL);
  v70 = TitleInfoEventTowerReward_TypeInfo;
  if ( (BYTE3(TitleInfoEventTowerReward_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
    v70 = TitleInfoEventTowerReward_TypeInfo;
  }
  if ( !*p_eventTowerReward
    || (effectId = (*p_eventTowerReward)->fields.effectId,
        CLIP_NAME_TOWER_REWARD = v70->static_fields->CLIP_NAME_TOWER_REWARD,
        (v73 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v74 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v73,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !*p_eventTowerReward)
    || !v74 )
  {
LABEL_146:
    sub_B170D4();
  }
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v74,
         &entity,
         (*p_eventTowerReward)->fields.eventId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      goto LABEL_146;
    FloorRewardPrefabName = EventDetailEntity__GetFloorRewardPrefabName((EventDetailEntity_o *)entity, 0LL);
    if ( FloorRewardPrefabName )
      CLIP_NAME_TOWER_REWARD = FloorRewardPrefabName;
  }
  v76 = TitleInfoEventTowerReward_TypeInfo;
  if ( (BYTE3(TitleInfoEventTowerReward_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
    v76 = TitleInfoEventTowerReward_TypeInfo;
  }
  if ( System_String__op_Equality(CLIP_NAME_TOWER_REWARD, v76->static_fields->CLIP_NAME_TOWER_REWARD, 0LL) )
  {
    v77 = *p_eventTowerReward;
    if ( !*p_eventTowerReward )
      goto LABEL_146;
    if ( v77->fields.towerId == 2 && v77->fields.floor == 100 )
      effectId = 3;
  }
  eventId = effectId;
  v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v79 = System_String__Concat_43823436(
          (Il2CppObject *)CLIP_NAME_TOWER_REWARD,
          (Il2CppObject *)StringLiteral_15842,
          v78,
          0LL);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  v81 = v79;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    v82 = this->fields.simpleAnimation;
    if ( !v82 )
      goto LABEL_146;
    Item = SimpleAnimation__get_Item(v82, v81, 0LL);
    if ( !Item )
      goto LABEL_146;
    klass = Item->klass;
    v85 = Item;
    if ( *(_WORD *)&Item->klass->_2.bitflags1 )
    {
      v86 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v86;
        p_offset += 2;
        if ( v86 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
          goto LABEL_62;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14].method;
    }
    else
    {
LABEL_62:
      p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 14LL);
    }
    v93 = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                           v85,
                                           *(_QWORD *)(p_method + 8));
    if ( !this->fields.simpleAnimation )
      goto LABEL_146;
    SimpleAnimation__set_clip(this->fields.simpleAnimation, v93, 0LL);
    v92 = (UnityEngine_Behaviour_o *)this->fields.simpleAnimation;
    if ( !v92 )
      goto LABEL_146;
    goto LABEL_75;
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
  {
    v90 = this->fields.animation;
    if ( !v90 )
      goto LABEL_146;
    Clip = UnityEngine_Animation__GetClip(v90, v81, 0LL);
    if ( !this->fields.animation )
      goto LABEL_146;
    UnityEngine_Animation__set_clip(this->fields.animation, Clip, 0LL);
    v92 = (UnityEngine_Behaviour_o *)this->fields.animation;
    if ( !v92 )
      goto LABEL_146;
LABEL_75:
    UnityEngine_Behaviour__set_enabled(v92, 0, 0LL);
  }
  if ( !*p_eventTowerReward )
    goto LABEL_146;
  towerId = (*p_eventTowerReward)->fields.towerId;
  v95 = towerId - 1;
  if ( towerId >= 1 )
  {
    floorNumFontList = this->fields.floorNumFontList;
    if ( !floorNumFontList )
      goto LABEL_146;
    size = floorNumFontList->fields._size;
    if ( size >= towerId )
    {
      if ( size <= v95 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v98 = (UnityEngine_Object_o *)floorNumFontList->fields._items->m_Items[v95];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v98, 0LL, 0LL) )
      {
        v99 = this->fields.eventTowerReward;
        if ( !v99 )
          goto LABEL_146;
        v100 = this->fields.floorNumFontList;
        if ( !v100 )
          goto LABEL_146;
        v101 = v99->fields.towerId - 1;
        if ( v100->fields._size <= (unsigned int)v101 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !this->fields.floorLabel )
          goto LABEL_146;
        UILabel__set_font(this->fields.floorLabel, v100->fields._items->m_Items[v101], 0LL);
      }
    }
  }
  v102 = this->fields.eventTowerReward;
  if ( !v102 )
    goto LABEL_146;
  floorLabel = this->fields.floorLabel;
  v104 = System_Int32__ToString((int)v102 + 24, 0LL);
  if ( !floorLabel )
    goto LABEL_146;
  UILabel__set_text(floorLabel, v104, 0LL);
  if ( v69 )
  {
    v105 = TitleInfoEventTowerReward_TypeInfo;
    nameSprite = this->fields.nameSprite;
    if ( (BYTE3(TitleInfoEventTowerReward_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
      v105 = TitleInfoEventTowerReward_TypeInfo;
    }
    if ( !*p_eventTowerReward )
      goto LABEL_146;
    SPRITE_NAME_TOWER = v105->static_fields->SPRITE_NAME_TOWER;
    eventId = (*p_eventTowerReward)->fields.eventId;
    v108 = j_il2cpp_value_box_0(int_TypeInfo, &eventId);
    if ( !*p_eventTowerReward )
      goto LABEL_146;
    v109 = (Il2CppObject *)v108;
    v150 = (*p_eventTowerReward)->fields.towerId;
    v110 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v150);
    v111 = System_String__Format_43739268(SPRITE_NAME_TOWER, v109, v110, 0LL);
    if ( !nameSprite )
      goto LABEL_146;
    UISprite__set_spriteName(nameSprite, v111, 0LL);
    v112 = this->fields.nameSprite;
    if ( !v112 )
      goto LABEL_146;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v112->klass->vtable._33_MakePixelPerfect.method)(
      v112,
      v112->klass->vtable._34_get_minWidth.methodPtr);
  }
  v113 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v113 )
    goto LABEL_146;
  v114 = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)v113,
                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*p_eventTowerReward )
    goto LABEL_146;
  if ( !v114 )
    goto LABEL_146;
  GiftListById = GiftMaster__GetGiftListById(v114, (*p_eventTowerReward)->fields.giftId, 0LL);
  if ( !GiftListById )
    goto LABEL_146;
  max_length = GiftListById->max_length;
  v121 = GiftListById;
  if ( max_length >= 1 )
  {
    v122 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v116, v117, v118, v119);
    System_Text_StringBuilder___ctor(v122, 0LL);
    v126 = 0LL;
    m_Items = v121->m_Items;
    while ( 1 )
    {
      if ( (_DWORD)v126 )
      {
        if ( !v122 )
          goto LABEL_146;
        appended = System_Text_StringBuilder__Append_41914240(v122, (System_String_o *)StringLiteral_26, 0LL);
      }
      if ( (unsigned int)v126 >= v121->max_length )
        goto LABEL_147;
      v128 = m_Items[v126];
      if ( !v128 )
        goto LABEL_146;
      GiftEntity__GetInfo(v128, &nameText, &countText, 0LL);
      if ( (unsigned int)v126 >= v121->max_length )
        goto LABEL_147;
      v129 = m_Items[v126];
      if ( !v129 )
        goto LABEL_146;
      if ( v129->fields.type == 9 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v130 = (System_String_o *)StringLiteral_10877;
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
          v132 = LocalizationManager__Get((System_String_o *)StringLiteral_5723, 0LL);
          if ( !v122 )
            goto LABEL_146;
          appended = System_Text_StringBuilder__AppendFormat_41920792(
                       v122,
                       v132,
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
        v130 = (System_String_o *)StringLiteral_5724;
      }
      v131 = LocalizationManager__Get(v130, 0LL);
      if ( !v122 )
        goto LABEL_146;
      appended = System_Text_StringBuilder__AppendFormat(v122, v131, (Il2CppObject *)nameText, 0LL);
LABEL_133:
      if ( (int)++v126 >= max_length )
      {
        rewardLabel = this->fields.rewardLabel;
        v134 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v122->klass->vtable._3_ToString.method)(
                                    v122,
                                    v122->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        if ( rewardLabel )
        {
          UILabel__set_text(rewardLabel, v134, 0LL);
          if ( !v121->max_length )
          {
LABEL_147:
            sub_B17100(appended, v124, v125);
            sub_B170A0();
          }
          v135 = v121->m_Items[0];
          if ( v135 )
          {
            itemIcon = this->fields.itemIcon;
            if ( itemIcon )
            {
              type = v135->fields.type;
              ItemIconComponent__SetGift(itemIcon, type, v135->fields.objectId, v135->fields.num, 0, 0LL);
              imageFrame = this->fields.imageFrame;
              if ( imageFrame )
              {
                UnityEngine_GameObject__SetActive(
                  imageFrame,
                  ((unsigned int)(type - 1) < 0xB) & (0x461u >> (type - 1)),
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
  if ( (BYTE3(TitleInfoEventTowerReward_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
  }
  v139 = *p_eventTowerReward;
  if ( !*p_eventTowerReward )
    goto LABEL_146;
  SPRITE_NAME_BG = TitleInfoEventTowerReward_TypeInfo->static_fields->SPRITE_NAME_BG;
  eventId = v139->fields.bgId;
  v141 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v142 = System_String__Format(SPRITE_NAME_BG, v141, 0LL);
  bgSprite = this->fields.bgSprite;
  v144 = v142;
  v149 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v145, v146, v147, v148);
  System_Action___ctor(v149, (Il2CppObject *)this, Method_TitleInfoEventTowerReward_OnLoadEndBG__, 0LL);
  if ( !bgSprite )
    goto LABEL_146;
  ExUITexture__SetAssetImage(bgSprite, v144, v149, 0LL);
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
  __int64 v13; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x20
  __int64 selectVoiceIndex; // x21
  ServantVoiceData_array *v16; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v18; // x20
  System_Int32_array **id; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  int32_t svtId; // w22
  System_String_o *VoiceAssetName_30033140; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_String_o *voiceName; // x21
  System_String_o *v28; // x22
  SeManager_c *v29; // x8
  float DEFAULT_VOLUME; // s8
  System_Action_o *v31; // x23
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UIStandFigureR_o *standFigure; // x21
  int32_t face; // w22
  float FadeTime; // s0

  v8 = this;
  if ( (byte_40F8402 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v9);
    sub_B16FFC(&SeManager_TypeInfo, v10);
    sub_B16FFC(&ServantVoiceEntity_TypeInfo, v11);
    sub_B16FFC(&SoundManager_TypeInfo, v12);
    this = (TitleInfoEventTowerReward_o *)sub_B16FFC(&Method_TitleInfoEventTowerReward_EndPlayVoice__, v13);
    byte_40F8402 = 1;
  }
  voiceList = v8->fields.voiceList;
  if ( !voiceList )
    goto LABEL_21;
  selectVoiceIndex = v8->fields.selectVoiceIndex;
  if ( voiceList->fields._size <= (unsigned int)selectVoiceIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v16 = voiceList->fields._items->m_Items[selectVoiceIndex];
  if ( !v16 )
    goto LABEL_21;
  playCnt = v8->fields.playCnt;
  if ( (unsigned int)playCnt >= v16->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v18 = v16->m_Items[playCnt];
  if ( !v18 )
    goto LABEL_21;
  id = (System_Int32_array **)v18->fields.id;
  v8->fields.voiceName = (struct System_String_o *)id;
  sub_B16F98((BattleServantConfConponent_o *)&v8->fields.voiceName, id, v2, v3, v4, v5, v6, v7);
  eventTowerReward = v8->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_21;
  svtId = eventTowerReward->fields.svtId;
  if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
  }
  VoiceAssetName_30033140 = ServantVoiceEntity__getVoiceAssetName_30033140(svtId, 0LL);
  voiceName = v8->fields.voiceName;
  v28 = VoiceAssetName_30033140;
  v29 = SeManager_TypeInfo;
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v29 = SeManager_TypeInfo;
  }
  DEFAULT_VOLUME = v29->static_fields->DEFAULT_VOLUME;
  v31 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v23, v24, v25, v26);
  System_Action___ctor(v31, (Il2CppObject *)v8, Method_TitleInfoEventTowerReward_EndPlayVoice__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v32 = (System_Int32_array **)SoundManager__playVoice_24824004(v28, voiceName, DEFAULT_VOLUME, v31, 0LL);
  v8->fields.voicePlayer = (struct SePlayer_o *)v32;
  sub_B16F98((BattleServantConfConponent_o *)&v8->fields.voicePlayer, v32, v33, v34, v35, v36, v37, v38);
  standFigure = v8->fields.standFigure;
  face = v18->fields.face;
  FadeTime = ServantVoiceData__GetFadeTime(v18, 0LL);
  if ( !standFigure )
LABEL_21:
    sub_B170D4();
  UIStandFigureR__SetFace(standFigure, face, FadeTime, 0LL);
  ++v8->fields.playCnt;
}


void __fastcall TitleInfoEventTowerReward__StartRewardAction(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Action_o **v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  QuestRewardInfo_array *resultEventTowerRewardInfo; // x20
  System_Action_o *v28; // x22
  const MethodInfo *v29; // x4

  if ( (byte_40F8407 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_TitleInfoEventTowerReward___c__DisplayClass38_0__StartRewardAction_b__0__, v7);
    sub_B16FFC(&TitleInfoEventTowerReward___c__DisplayClass38_0_TypeInfo, v8);
    byte_40F8407 = 1;
  }
  v9 = sub_B170CC(TitleInfoEventTowerReward___c__DisplayClass38_0_TypeInfo, callback, method, v3, v4);
  TitleInfoEventTowerReward___c__DisplayClass38_0___ctor((TitleInfoEventTowerReward___c__DisplayClass38_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 24) = callback;
  v16 = (System_Action_o **)(v9 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)callback, v17, v18, v19, v20, v21, v22);
  resultEventTowerRewardInfo = this->fields.resultEventTowerRewardInfo;
  if ( resultEventTowerRewardInfo )
  {
    v28 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v23, v24, v25, v26);
    System_Action___ctor(
      v28,
      (Il2CppObject *)v9,
      Method_TitleInfoEventTowerReward___c__DisplayClass38_0__StartRewardAction_b__0__,
      0LL);
    TitleInfoEventTowerReward__StartRewardAction_sub(this, resultEventTowerRewardInfo, 0, v28, v29);
    return;
  }
  if ( !*v16 )
LABEL_8:
    sub_B170D4();
  System_Action__Invoke(*v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTowerReward__StartRewardAction_sub(
        TitleInfoEventTowerReward_o *this,
        QuestRewardInfo_array *rewardInfoList,
        int32_t idx,
        System_Action_o *subEndAction,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x28
  int32_t v6; // w19
  System_Int32_array **v7; // x20
  System_Int32_array **v9; // x1
  __int64 v10; // x19
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  WarEntity_o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x26
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Action_o **v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x0
  __int64 v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x8
  __int64 v50; // x9
  int v51; // w10
  SummonAssetManager_o *v52; // x19
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  System_Action_o *v57; // x20

  v5 = (System_Int32_array **)subEndAction;
  v6 = idx;
  v7 = (System_Int32_array **)rewardInfoList;
  while ( 1 )
  {
    if ( (byte_40F8408 & 1) == 0 )
    {
      sub_B16FFC(&System_Action_TypeInfo, rewardInfoList);
      sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v15);
      sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
      sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
      sub_B16FFC(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v18);
      sub_B16FFC(&Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__0__, v19);
      sub_B16FFC(&TitleInfoEventTowerReward___c__DisplayClass39_0_TypeInfo, v20);
      byte_40F8408 = 1;
    }
    v21 = sub_B170CC(
            TitleInfoEventTowerReward___c__DisplayClass39_0_TypeInfo,
            rewardInfoList,
            *(_QWORD *)&idx,
            subEndAction,
            method);
    TitleInfoEventTowerReward___c__DisplayClass39_0___ctor(
      (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v21,
      0LL);
    if ( !v21 )
      goto LABEL_24;
    *(_QWORD *)(v21 + 24) = this;
    sub_B16F98((BattleServantConfConponent_o *)(v21 + 24), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
    *(_QWORD *)(v21 + 32) = v7;
    sub_B16F98((BattleServantConfConponent_o *)(v21 + 32), v7, v28, v29, v30, v31, v32, v33);
    *(_QWORD *)(v21 + 48) = v5;
    v34 = (System_Action_o **)(v21 + 48);
    *(_DWORD *)(v21 + 40) = v6;
    sub_B16F98((BattleServantConfConponent_o *)(v21 + 48), v5, v35, v36, v37, v38, v39, v40);
    v49 = *(_QWORD *)(v21 + 32);
    if ( !v49 )
      goto LABEL_24;
    v50 = *(int *)(v21 + 40);
    v51 = *(_DWORD *)(v49 + 24);
    if ( (int)v50 >= v51 )
    {
      if ( *v34 )
      {
        System_Action__Invoke(*v34, 0LL);
        return;
      }
LABEL_24:
      sub_B170D4();
    }
    if ( (unsigned int)v50 >= v51 )
    {
      sub_B17100(v41, v42, v43);
      sub_B170A0();
    }
    v9 = *(System_Int32_array ***)(v49 + 8 * v50 + 32);
    *(_QWORD *)(v21 + 16) = v9;
    v10 = v21 + 16;
    sub_B16F98((BattleServantConfConponent_o *)(v21 + 16), v9, v43, v44, v45, v46, v47, v48);
    if ( !*(_QWORD *)(v21 + 16) )
      goto LABEL_24;
    if ( !Gift__IsServant_28854740(*(_DWORD *)(*(_QWORD *)(v21 + 16) + 16LL), 0LL) )
      break;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*(_QWORD *)v10 || !MasterData_WarQuestSelectionMaster )
      goto LABEL_24;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               MasterData_WarQuestSelectionMaster,
               *(_DWORD *)(*(_QWORD *)v10 + 20LL),
               (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( Entity )
    {
      v14 = Entity;
      if ( !SvtType__IsCombineMaterial(*(&Entity->fields.startType + 1), 0LL)
        && !SvtType__IsStatusUp(*(&v14->fields.startType + 1), 0LL) )
      {
        goto LABEL_22;
      }
    }
LABEL_14:
    v7 = *(System_Int32_array ***)(v21 + 32);
    v5 = *(System_Int32_array ***)(v21 + 48);
    v6 = *(_DWORD *)(v21 + 40) + 1;
  }
  if ( !*(_QWORD *)v10 )
    goto LABEL_24;
  if ( !Gift__IsCommandCode_28855136(*(_DWORD *)(*(_QWORD *)v10 + 16LL), 0LL) )
    goto LABEL_14;
LABEL_22:
  v52 = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v57 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v53, v54, v55, v56);
  System_Action___ctor(
    v57,
    (Il2CppObject *)v21,
    Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__0__,
    0LL);
  if ( !v52 )
    goto LABEL_24;
  SummonAssetManager__LoadSummonAssets(v52, v57, 0LL);
}


void __fastcall TitleInfoEventTowerReward__StartVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Random_o *v9; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *v10; // x8
  int32_t v11; // w0
  const MethodInfo *v12; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o *v13; // x21
  ServantVoiceData_array *v14; // x8

  if ( (byte_40F8401 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v6);
    sub_B16FFC(&System_Random_TypeInfo, v7);
    byte_40F8401 = 1;
  }
  voiceList = this->fields.voiceList;
  if ( !voiceList )
    goto LABEL_13;
  if ( voiceList->fields._size )
  {
    v9 = (System_Random_o *)sub_B170CC(System_Random_TypeInfo, method, v2, v3, v4);
    System_Random___ctor(v9, 0LL);
    v10 = this->fields.voiceList;
    if ( v10 )
    {
      if ( v9 )
      {
        v11 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v9->klass->vtable._7_Next.method)(
                v9,
                (unsigned int)v10->fields._size,
                v9->klass->vtable._8_NextDouble.methodPtr);
        v13 = this->fields.voiceList;
        this->fields.selectVoiceIndex = v11;
        if ( v13 )
        {
          if ( v13->fields._size <= (unsigned int)v11 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v14 = v13->fields._items->m_Items[v11];
          if ( v14 )
          {
            *(_QWORD *)&this->fields.maxPlayCnt = (unsigned int)*(_QWORD *)&v14->max_length;
            TitleInfoEventTowerReward__PlayVoice(this, v12);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_B170D4();
  }
}


void __fastcall TitleInfoEventTowerReward__Update(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t state; // w8
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v7; // x20
  UnityEngine_Object_o *monitor; // x0
  System_String_o *name; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v12; // x20
  unsigned __int64 v13; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  const MethodInfo *v16; // x1
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v18; // x20
  UnityEngine_Object_o *clip; // x0
  System_String_o *v20; // x0
  UnityEngine_AnimationState_o *v21; // x0
  UnityEngine_AnimationState_o *v22; // x20
  float time; // s8
  UnityEngine_AnimationClip_o *v24; // x0
  long double v25; // q0
  SimpleAnimation_State_c *v26; // x8
  unsigned __int64 v27; // x10
  SimpleAnimation_State_c **v28; // x11
  __int64 v29; // x0
  UnityEngine_Component_o *screenTouchInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F8404 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v4);
    byte_40F8404 = 1;
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
    if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
    {
      v7 = this->fields.simpleAnimation;
      if ( !v7 )
        goto LABEL_44;
      monitor = (UnityEngine_Object_o *)v7[1].monitor;
      if ( !monitor )
        goto LABEL_44;
      name = UnityEngine_Object__get_name(monitor, 0LL);
      Item = SimpleAnimation__get_Item(v7, name, 0LL);
      if ( !Item )
        goto LABEL_44;
      klass = Item->klass;
      v12 = Item;
      if ( *(_WORD *)&Item->klass->_2.bitflags1 )
      {
        v13 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v13;
          p_offset += 2;
          if ( v13 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
            goto LABEL_16;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3].method;
      }
      else
      {
LABEL_16:
        p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 3LL);
      }
      v25 = ((long double (__fastcall *)(SimpleAnimation_State_o *, _QWORD))*(_QWORD *)p_method)(
              v12,
              *(_QWORD *)(p_method + 8));
      v26 = v12->klass;
      time = *(float *)&v25;
      if ( *(_WORD *)&v12->klass->_2.bitflags1 )
      {
        v27 = 0LL;
        v28 = (SimpleAnimation_State_c **)&v26->_1.interfaceOffsets->offset;
        while ( *(v28 - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v27;
          v28 += 2;
          if ( v27 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
            goto LABEL_36;
        }
        v29 = (__int64)&v26->vtable[*(_DWORD *)v28 + 14].method;
      }
      else
      {
LABEL_36:
        v29 = sub_AAFEF8(v12, SimpleAnimation_State_TypeInfo, 14LL);
      }
      v24 = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v29)(
                                             v12,
                                             *(_QWORD *)(v29 + 8));
      if ( !v24 )
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
      if ( !UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
        goto LABEL_40;
      v18 = this->fields.animation;
      if ( !v18 )
        goto LABEL_44;
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0LL);
      if ( !clip )
        goto LABEL_44;
      v20 = UnityEngine_Object__get_name(clip, 0LL);
      v21 = UnityEngine_Animation__get_Item(v18, v20, 0LL);
      if ( !v21 )
        goto LABEL_44;
      v22 = v21;
      time = UnityEngine_AnimationState__get_time(v21, 0LL);
      v24 = UnityEngine_AnimationState__get_clip(v22, 0LL);
      if ( !v24 )
        goto LABEL_44;
    }
    if ( time < UnityEngine_AnimationClip__get_length(v24, 0LL) )
      return;
LABEL_40:
    screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
    if ( screenTouchInfo )
    {
      gameObject = UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        this->fields.state = 2;
        return;
      }
    }
LABEL_44:
    sub_B170D4();
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0LL) )
    TitleInfoEventTowerReward__OnTouchDisp(this, v16);
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
    sub_B16F98(p_endCallback, 0LL, v2, v3, v4, v5, v6, v7);
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
  CommonUI_o *Instance; // x20
  struct EventTowerReward_o *eventTowerReward; // x8
  WebViewManager_o *v12; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct EventTowerReward_o *v14; // x8
  WarEntity_o *Entity; // x0
  System_String_o *age; // x20
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Behaviour_o *v18; // x0
  struct SimpleAnimation_o *v19; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v21; // x20
  UnityEngine_Object_o *v22; // x0
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Behaviour_o *v25; // x0
  UnityEngine_Animation_o *v26; // x0
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *v28; // x20
  UnityEngine_Object_o *v29; // x0
  System_String_o *v30; // x0
  UnityEngine_Component_o *standFigure; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F840A & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_BgmMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_12995, v9);
    byte_40F840A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !Instance )
    goto LABEL_46;
  CommonUI__maskFadein(Instance, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12995,
    this->fields.voiceStartTime,
    0LL);
  eventTowerReward = this->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_46;
  if ( eventTowerReward->fields.bgmId >= 1 )
  {
    v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v12 )
      goto LABEL_46;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)v12,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BgmMaster___);
    v14 = this->fields.eventTowerReward;
    if ( !v14 )
      goto LABEL_46;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_46;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               MasterData_WarQuestSelectionMaster,
               v14->fields.bgmId,
               (const MethodInfo_266F388 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    if ( !Entity )
      goto LABEL_46;
    age = Entity->fields.age;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playBgm(age, 0LL);
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    v18 = (UnityEngine_Behaviour_o *)this->fields.simpleAnimation;
    if ( !v18 )
      goto LABEL_46;
    UnityEngine_Behaviour__set_enabled(v18, 1, 0LL);
    v19 = this->fields.simpleAnimation;
    if ( !v19 )
      goto LABEL_46;
    monitor = (UnityEngine_Object_o *)v19[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v21 = this->fields.simpleAnimation;
      if ( v21 )
      {
        v22 = (UnityEngine_Object_o *)v21[1].monitor;
        if ( v22 )
        {
          name = UnityEngine_Object__get_name(v22, 0LL);
          SimpleAnimation__Play_16380456(v21, name, 0LL);
          goto LABEL_43;
        }
      }
LABEL_46:
      sub_B170D4();
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
      v25 = (UnityEngine_Behaviour_o *)this->fields.animation;
      if ( !v25 )
        goto LABEL_46;
      UnityEngine_Behaviour__set_enabled(v25, 1, 0LL);
      v26 = this->fields.animation;
      if ( !v26 )
        goto LABEL_46;
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(v26, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(clip, 0LL, 0LL) )
      {
        v28 = this->fields.animation;
        if ( v28 )
        {
          v29 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0LL);
          if ( v29 )
          {
            v30 = UnityEngine_Object__get_name(v29, 0LL);
            UnityEngine_Animation__Play_49744236(v28, v30, 0LL);
            goto LABEL_43;
          }
        }
        goto LABEL_46;
      }
    }
  }
LABEL_43:
  standFigure = (UnityEngine_Component_o *)this->fields.standFigure;
  if ( !standFigure )
    goto LABEL_46;
  gameObject = UnityEngine_Component__get_gameObject(standFigure, 0LL);
  if ( !gameObject )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
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
    sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct QuestRewardInfo_o *rewardInfo; // x8
  struct TitleInfoEventTowerReward_o *_4__this; // x20
  UnityEngine_Component_o **p__4__this; // x22
  WebViewManager_o *Instance; // x0
  SummonAssetManager_o *v10; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *Parent; // x0
  System_Int32_array **Prefab; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct QuestRewardInfo_o *v20; // x8
  int32_t v21; // w20
  ServantRewardAction_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  struct QuestRewardInfo_o *v27; // x8
  UnityEngine_Component_o *v28; // x20
  WebViewManager_o *v29; // x0
  SummonAssetManager_o *v30; // x21
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_Transform_o *v32; // x0
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  ServantRewardAction_o *v40; // x0
  ServantRewardAction_o *v41; // x20
  System_Action_o *_9__1; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_40F782F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__1__, v5);
    byte_40F782F = 1;
  }
  rewardInfo = this->fields.rewardInfo;
  if ( !rewardInfo )
    goto LABEL_31;
  if ( Gift__IsServant_28854740(rewardInfo->fields.type, 0LL) )
  {
    p__4__this = (UnityEngine_Component_o **)&this->fields.__4__this;
    _4__this = this->fields.__4__this;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( this->fields.__4__this )
    {
      v10 = (SummonAssetManager_o *)Instance;
      gameObject = UnityEngine_Component__get_gameObject(*p__4__this, 0LL);
      Parent = GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( v10 )
      {
        Prefab = (System_Int32_array **)SummonAssetManager__InstantiateSvtGetPrefab(v10, Parent, 0, 0LL);
        if ( _4__this )
        {
          _4__this->fields.servantRewardAction = (struct ServantRewardAction_o *)Prefab;
          sub_B16F98(
            (BattleServantConfConponent_o *)&_4__this->fields.servantRewardAction,
            Prefab,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19);
          v20 = this->fields.rewardInfo;
          if ( v20 )
          {
            if ( v20->fields.isSkipSvtDetail )
              v21 = 38;
            else
              v21 = 6;
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__stopBgm(0LL);
            if ( *p__4__this )
            {
              v22 = *(ServantRewardAction_o **)&(*p__4__this)[8].fields.m_CachedPtr;
              if ( v22 )
              {
                ServantRewardAction__Setup_28280972(v22, this->fields.rewardInfo, v21, 0LL);
                goto LABEL_26;
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_B170D4();
  }
  v27 = this->fields.rewardInfo;
  if ( !v27 )
    goto LABEL_31;
  p__4__this = (UnityEngine_Component_o **)&this->fields.__4__this;
  if ( Gift__IsCommandCode_28855136(v27->fields.type, 0LL) )
  {
    v28 = *p__4__this;
    v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( !*p__4__this )
      goto LABEL_31;
    v30 = (SummonAssetManager_o *)v29;
    v31 = UnityEngine_Component__get_gameObject(*p__4__this, 0LL);
    v32 = GameObjectExtensions__GetParent(v31, 0LL);
    if ( !v30 )
      goto LABEL_31;
    v33 = (System_Int32_array **)SummonAssetManager__InstantiateSvtGetPrefab(v30, v32, 0, 0LL);
    if ( !v28 )
      goto LABEL_31;
    *(_QWORD *)&v28[8].fields.m_CachedPtr = v33;
    sub_B16F98((BattleServantConfConponent_o *)&v28[8].fields, v33, v34, v35, v36, v37, v38, v39);
    if ( !*p__4__this )
      goto LABEL_31;
    v40 = *(ServantRewardAction_o **)&(*p__4__this)[8].fields.m_CachedPtr;
    if ( !v40 )
      goto LABEL_31;
    ServantRewardAction__SetupCommandCode(v40, this->fields.rewardInfo, 6, 0LL);
  }
LABEL_26:
  if ( !*p__4__this )
    goto LABEL_31;
  v41 = *(ServantRewardAction_o **)&(*p__4__this)[8].fields.m_CachedPtr;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v23, v24, v25, v26);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  if ( !v41 )
    goto LABEL_31;
  ServantRewardAction__Play(v41, _9__1, 0.0, 0LL);
}


void __fastcall TitleInfoEventTowerReward___c__DisplayClass39_0___StartRewardAction_sub_b__1(
        TitleInfoEventTowerReward___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct TitleInfoEventTowerReward_o *_4__this; // x8
  UnityEngine_Component_o *servantRewardAction; // x0
  UnityEngine_Object_o *gameObject; // x20
  SummonAssetManager_o *Instance; // x0
  TitleInfoEventTowerReward_o *v8; // x0

  if ( (byte_40F7830 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v3);
    byte_40F7830 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  servantRewardAction = (UnityEngine_Component_o *)_4__this->fields.servantRewardAction;
  if ( !servantRewardAction )
    goto LABEL_11;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(servantRewardAction, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_34809676(gameObject, 0LL);
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !Instance || (SummonAssetManager__UnloadSummonAssets(Instance, 0LL), (v8 = this->fields.__4__this) == 0LL) )
LABEL_11:
    sub_B170D4();
  TitleInfoEventTowerReward__StartRewardAction_sub(
    v8,
    this->fields.rewardInfoList,
    this->fields.idx + 1,
    this->fields.subEndAction,
    0LL);
}