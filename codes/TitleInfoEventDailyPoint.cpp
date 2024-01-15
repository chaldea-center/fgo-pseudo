void __fastcall TitleInfoEventDailyPoint___ctor(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventDailyPoint__Close(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *voiceName; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_String_o **p_voiceAssetName; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Action_o **p_endCallback; // x19
  System_Action_o *v26; // x20
  struct System_Action_o *endCallback; // t1

  if ( (byte_40FDFA1 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FDFA1 = 1;
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
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.voicePlayer, 0LL, v5, v6, v7, v8, v9, v10);
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
  endCallback = this->fields.endCallback;
  p_endCallback = &this->fields.endCallback;
  v26 = endCallback;
  p_endCallback[7] = 0LL;
  *((_DWORD *)p_endCallback + 16) = 0;
  if ( endCallback )
  {
    *p_endCallback = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_endCallback, 0LL, v12, v13, v14, v15, v16, v17);
    ActionExtensions__Call(v26, 0LL);
  }
}


void __fastcall TitleInfoEventDailyPoint__EndPlayVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoEventDailyPoint_o *v3; // x19
  __int64 v4; // x1
  int32_t playCnt; // w8
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x20
  __int64 selectVoiceIndex; // x21
  ServantVoiceData_array *v8; // x9
  ServantVoiceData_o *v9; // x8
  UnityEngine_Component_o *screenTouchInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  v3 = this;
  if ( (byte_40FDF9E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, method);
    this = (TitleInfoEventDailyPoint_o *)sub_B16FFC(&StringLiteral_10661/*"PlayVoice"*/, v4);
    byte_40FDF9E = 1;
  }
  playCnt = v3->fields.playCnt;
  if ( playCnt < v3->fields.maxPlayCnt )
  {
    voiceList = v3->fields.voiceList;
    if ( voiceList )
    {
      selectVoiceIndex = v3->fields.selectVoiceIndex;
      if ( voiceList->fields._size <= (unsigned int)selectVoiceIndex )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v8 = voiceList->fields._items->m_Items[selectVoiceIndex];
      if ( v8 )
      {
        if ( playCnt >= v8->max_length )
        {
          sub_B17100(this, method, v2);
          sub_B170A0();
        }
        v9 = v8->m_Items[playCnt];
        if ( v9 )
        {
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)v3,
            (System_String_o *)StringLiteral_10661/*"PlayVoice"*/,
            v9->fields.delay,
            0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B170D4();
  }
  screenTouchInfo = (UnityEngine_Component_o *)v3->fields.screenTouchInfo;
  if ( !screenTouchInfo )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v3->fields.state = 2;
}


void __fastcall TitleInfoEventDailyPoint__OnLoadSvtVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
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
  struct EventPointBehavior_o *eventPointBehavior; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x20
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  struct EventPointBehavior_o *v26; // x8
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
  struct EventPointBehavior_o *v41; // x8
  struct System_String_array *v42; // x9
  WebViewManager_o *v43; // x0
  int size; // w24
  VoicePlayCondMaster_o *v45; // x22
  __int64 v46; // x25
  unsigned int v47; // w8
  __int64 v48; // x8
  __int64 v49; // x8
  struct EventPointBehavior_o *v50; // x9
  struct EventPointBehavior_o *v51; // x8
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

  if ( (byte_40FDF9B & 1) == 0 )
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
    sub_B16FFC(&Method_TitleInfoEventDailyPoint__OnLoadSvtVoice_b__26_0__, v17);
    byte_40FDF9B = 1;
  }
  eventPointBehavior = this->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_45;
  if ( eventPointBehavior->fields.voiceIds )
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
    v26 = this->fields.eventPointBehavior;
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
        v41 = this->fields.eventPointBehavior;
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
                                                                           16,
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
        v50 = this->fields.eventPointBehavior;
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
    v51 = this->fields.eventPointBehavior;
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
    System_Action___ctor(v65, (Il2CppObject *)this, Method_TitleInfoEventDailyPoint__OnLoadSvtVoice_b__26_0__, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__loadAudioAssetStorage(voiceAssetName, v65, 1, 0LL);
  }
}


void __fastcall TitleInfoEventDailyPoint__OnTouchDisp(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *screenTouchInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v14; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x21

  if ( (byte_40FDFA0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    sub_B16FFC(&Method_TitleInfoEventDailyPoint__OnTouchDisp_b__31_0__, v6);
    byte_40FDFA0 = 1;
  }
  screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
  if ( !screenTouchInfo )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_TitleInfoEventDailyPoint__OnTouchDisp_b__31_0__, 0LL);
  if ( !Instance )
LABEL_13:
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 2, DEFAULT_FADE_TIME, v16, 0LL);
  this->fields.state = 0;
}


void __fastcall TitleInfoEventDailyPoint__Open(
        TitleInfoEventDailyPoint_o *this,
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
  TerminalPramsManager_c *v19; // x0
  struct EventDailyPoint_o *eventDailyPoint_k__BackingField; // x1
  struct EventDailyPoint_o **p_eventDailyPoint; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct EventPointBehavior_array *eventPointBehavior; // x8
  struct EventPointBehavior_o *v31; // x1
  UnityEngine_Component_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  CommonUI_o *Instance; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct EventPointBehavior_o *v52; // x8
  Il2CppObject *v53; // x0
  System_String_o *v54; // x0
  UnityEngine_Object_o *simpleAnimation; // x22
  System_String_o *v56; // x21
  SimpleAnimation_o *v57; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v60; // x21
  unsigned __int64 v61; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *animation; // x22
  __int64 v65; // x1
  UnityEngine_Animation_o *v66; // x0
  UnityEngine_AnimationClip_o *Clip; // x0
  UnityEngine_Behaviour_o *v68; // x0
  UnityEngine_AnimationClip_o *v69; // x0
  ItemIconComponent_o *itemIcon; // x21
  TerminalPramsManager_c *v71; // x0
  int32_t eventDailyPoint; // w20
  System_String_o *NumberFormat; // x0
  System_String_o *v74; // x20
  UILabel_o *pointLabel; // x0
  float LocalPositionX; // s0
  UnityEngine_GameObject_o *pointRoot; // x0
  struct UILabel_o *v78; // x8
  float v79; // s0
  UnityEngine_GameObject_o *pointLabelLeft; // x0
  float v81; // s8
  srcLineSprite_o *v82; // x0
  int mFSM; // w20
  float LocalScaleX; // s9
  float v85; // s0
  UnityEngine_GameObject_o *pointLabelRight; // x0
  float v87; // s10
  srcLineSprite_o *v88; // x0
  const MethodInfo *v89; // x1
  int32_t effectId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40FDF9A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, callback);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v11);
    sub_B16FFC(&int_TypeInfo, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v16);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_16688/*"bit_dedicate_reward_"*/, v18);
    byte_40FDF9A = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F72FB )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, callback);
    byte_40F72FB = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  eventDailyPoint_k__BackingField = v19->static_fields->_eventDailyPoint_k__BackingField;
  this->fields.eventDailyPoint = eventDailyPoint_k__BackingField;
  p_eventDailyPoint = &this->fields.eventDailyPoint;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventDailyPoint,
    (System_Int32_array **)eventDailyPoint_k__BackingField,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !this->fields.eventDailyPoint )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  eventPointBehavior = this->fields.eventDailyPoint->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_72;
  if ( !eventPointBehavior->max_length )
  {
    sub_B17100(v22, v23, v24);
    sub_B170A0();
  }
  v31 = eventPointBehavior->m_Items[0];
  this->fields.eventPointBehavior = v31;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventPointBehavior,
    (System_Int32_array **)v31,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
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
      goto LABEL_72;
    ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(Instance, transform, 0, 0LL);
    if ( !ScreeenTouchInfo )
      goto LABEL_72;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       ScreeenTouchInfo,
                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (UnityEngine_Component_o *)Component_srcLineSprite;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
      Component_srcLineSprite,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  if ( !*p_screenTouchInfo )
    goto LABEL_72;
  gameObject = UnityEngine_Component__get_gameObject(*p_screenTouchInfo, 0LL);
  if ( !gameObject )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v45 )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive(v45, 1, 0LL);
  this->fields.endCallback = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endCallback,
    (System_Int32_array **)callback,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = this->fields.eventPointBehavior;
  this->fields.state = 0;
  if ( !v52 )
    goto LABEL_72;
  effectId = v52->fields.effectId;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId);
  v54 = System_String__Concat((Il2CppObject *)StringLiteral_16688/*"bit_dedicate_reward_"*/, v53, 0LL);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  v56 = v54;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    v57 = this->fields.simpleAnimation;
    if ( v57 )
    {
      Item = SimpleAnimation__get_Item(v57, v56, 0LL);
      if ( Item )
      {
        klass = Item->klass;
        v60 = Item;
        if ( *(_WORD *)&Item->klass->_2.bitflags1 )
        {
          v61 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v61;
            p_offset += 2;
            if ( v61 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
              goto LABEL_35;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14].method;
        }
        else
        {
LABEL_35:
          p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 14LL);
        }
        v69 = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                               v60,
                                               *(_QWORD *)(p_method + 8));
        if ( this->fields.simpleAnimation )
        {
          SimpleAnimation__set_clip(this->fields.simpleAnimation, v69, 0LL);
          v68 = (UnityEngine_Behaviour_o *)this->fields.simpleAnimation;
          if ( v68 )
          {
LABEL_48:
            UnityEngine_Behaviour__set_enabled(v68, 0, 0LL);
            goto LABEL_49;
          }
        }
      }
    }
LABEL_72:
    sub_B170D4();
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
  {
    v66 = this->fields.animation;
    if ( !v66 )
      goto LABEL_72;
    Clip = UnityEngine_Animation__GetClip(v66, v56, 0LL);
    if ( !this->fields.animation )
      goto LABEL_72;
    UnityEngine_Animation__set_clip(this->fields.animation, Clip, 0LL);
    v68 = (UnityEngine_Behaviour_o *)this->fields.animation;
    if ( !v68 )
      goto LABEL_72;
    goto LABEL_48;
  }
LABEL_49:
  itemIcon = this->fields.itemIcon;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40FE018 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v65);
    byte_40FE018 = 1;
  }
  v71 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v71 = TerminalPramsManager_TypeInfo;
  }
  if ( !itemIcon )
    goto LABEL_72;
  ItemIconComponent__SetItem(itemIcon, v71->static_fields->_EventDailyPointItem_k__BackingField, -1, 0LL);
  if ( !*p_eventDailyPoint )
    goto LABEL_72;
  eventDailyPoint = (*p_eventDailyPoint)->fields.eventDailyPoint;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__GetNumberFormat(eventDailyPoint, 0LL);
  if ( !this->fields.satisfyLabel )
    goto LABEL_72;
  v74 = NumberFormat;
  UILabel__set_text(this->fields.satisfyLabel, NumberFormat, 0LL);
  pointLabel = this->fields.pointLabel;
  if ( !pointLabel )
    goto LABEL_72;
  UILabel__set_text(pointLabel, v74, 0LL);
  if ( !this->fields.initPosFlag )
  {
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(this->fields.pointLabelRight, 0LL);
    pointRoot = this->fields.pointRoot;
    this->fields.pointLabelRightInitPosX = LocalPositionX;
    this->fields.pointRootInitPosX = GameObjectExtensions__GetLocalPositionX(pointRoot, 0LL);
    this->fields.initPosFlag = 1;
  }
  v78 = this->fields.pointLabel;
  if ( !v78 )
    goto LABEL_72;
  GameObjectExtensions__SetLocalPositionX(
    this->fields.pointLabelRight,
    this->fields.pointLabelRightInitPosX + (float)v78->fields.mWidth,
    0LL);
  v79 = GameObjectExtensions__GetLocalPositionX(this->fields.pointLabelLeft, 0LL);
  pointLabelLeft = this->fields.pointLabelLeft;
  if ( !pointLabelLeft )
    goto LABEL_72;
  v81 = v79;
  v82 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          pointLabelLeft,
          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !v82 )
    goto LABEL_72;
  mFSM = (int)v82[1].fields.mFSM;
  LocalScaleX = GameObjectExtensions__GetLocalScaleX(this->fields.pointLabelLeft, 0LL);
  v85 = GameObjectExtensions__GetLocalPositionX(this->fields.pointLabelRight, 0LL);
  pointLabelRight = this->fields.pointLabelRight;
  if ( !pointLabelRight )
    goto LABEL_72;
  v87 = v85;
  v88 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          pointLabelRight,
          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !v88 )
    goto LABEL_72;
  GameObjectExtensions__SetLocalPositionX(
    this->fields.pointRoot,
    this->fields.pointRootInitPosX
  + (float)((float)((float)(v81 - (float)(LocalScaleX * (float)mFSM))
                  + (float)(v87 + (float)SLODWORD(v88[1].fields.mFSM)))
          * -0.5),
    0LL);
  TitleInfoEventDailyPoint__OnLoadSvtVoice(this, v89);
}


void __fastcall TitleInfoEventDailyPoint__PlayVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TitleInfoEventDailyPoint_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x20
  __int64 selectVoiceIndex; // x21
  ServantVoiceData_array *v16; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v18; // x8
  System_Int32_array **id; // x1
  struct EventPointBehavior_o *eventPointBehavior; // x8
  int32_t svtId; // w21
  System_String_o *VoiceAssetName_30033140; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_String_o *voiceName; // x20
  System_String_o *v28; // x21
  SeManager_c *v29; // x8
  float DEFAULT_VOLUME; // s8
  System_Action_o *v31; // x22
  System_Int32_array **v32; // x0
  BattleServantConfConponent_o *p_voicePlayer; // x19
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  v8 = this;
  if ( (byte_40FDF9D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v9);
    sub_B16FFC(&SeManager_TypeInfo, v10);
    sub_B16FFC(&ServantVoiceEntity_TypeInfo, v11);
    sub_B16FFC(&SoundManager_TypeInfo, v12);
    this = (TitleInfoEventDailyPoint_o *)sub_B16FFC(&Method_TitleInfoEventDailyPoint_EndPlayVoice__, v13);
    byte_40FDF9D = 1;
  }
  voiceList = v8->fields.voiceList;
  if ( !voiceList )
    goto LABEL_20;
  selectVoiceIndex = v8->fields.selectVoiceIndex;
  if ( voiceList->fields._size <= (unsigned int)selectVoiceIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v16 = voiceList->fields._items->m_Items[selectVoiceIndex];
  if ( !v16 )
    goto LABEL_20;
  playCnt = v8->fields.playCnt;
  if ( (unsigned int)playCnt >= v16->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v18 = v16->m_Items[playCnt];
  if ( !v18
    || (id = (System_Int32_array **)v18->fields.id,
        v8->fields.voiceName = (struct System_String_o *)id,
        sub_B16F98((BattleServantConfConponent_o *)&v8->fields.voiceName, id, v2, v3, v4, v5, v6, v7),
        (eventPointBehavior = v8->fields.eventPointBehavior) == 0LL) )
  {
LABEL_20:
    sub_B170D4();
  }
  svtId = eventPointBehavior->fields.svtId;
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
  System_Action___ctor(v31, (Il2CppObject *)v8, Method_TitleInfoEventDailyPoint_EndPlayVoice__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v32 = (System_Int32_array **)SoundManager__playVoice_24824004(v28, voiceName, DEFAULT_VOLUME, v31, 0LL);
  v8->fields.voicePlayer = (struct SePlayer_o *)v32;
  p_voicePlayer = (BattleServantConfConponent_o *)&v8->fields.voicePlayer;
  sub_B16F98(p_voicePlayer, v32, v34, v35, v36, v37, v38, v39);
  ++p_voicePlayer->fields.m_CachedPtr;
}


void __fastcall TitleInfoEventDailyPoint__StartVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
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

  if ( (byte_40FDF9C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v6);
    sub_B16FFC(&System_Random_TypeInfo, v7);
    byte_40FDF9C = 1;
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
            TitleInfoEventDailyPoint__PlayVoice(this, v12);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_B170D4();
  }
}


void __fastcall TitleInfoEventDailyPoint__Update(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_40FDF9F & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    byte_40FDF9F = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( CTouch__isTouchPush(0LL) )
      TitleInfoEventDailyPoint__OnTouchDisp(this, v3);
  }
}


void __fastcall TitleInfoEventDailyPoint___OnLoadSvtVoice_b__26_0(
        TitleInfoEventDailyPoint_o *this,
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
  struct EventPointBehavior_o *eventPointBehavior; // x8
  WebViewManager_o *v12; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct EventPointBehavior_o *v14; // x8
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

  if ( (byte_40FDFA2 & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_BgmMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_12995/*"StartVoice"*/, v9);
    byte_40FDFA2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !Instance )
    goto LABEL_44;
  CommonUI__maskFadein(Instance, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12995/*"StartVoice"*/,
    this->fields.voiceStartTime,
    0LL);
  eventPointBehavior = this->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_44;
  if ( eventPointBehavior->fields.bgmId >= 1 )
  {
    v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v12 )
      goto LABEL_44;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)v12,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BgmMaster___);
    v14 = this->fields.eventPointBehavior;
    if ( !v14 )
      goto LABEL_44;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_44;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               MasterData_WarQuestSelectionMaster,
               v14->fields.bgmId,
               (const MethodInfo_266F388 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    if ( !Entity )
      goto LABEL_44;
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
      goto LABEL_44;
    UnityEngine_Behaviour__set_enabled(v18, 1, 0LL);
    v19 = this->fields.simpleAnimation;
    if ( !v19 )
      goto LABEL_44;
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
LABEL_44:
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
        goto LABEL_44;
      UnityEngine_Behaviour__set_enabled(v25, 1, 0LL);
      v26 = this->fields.animation;
      if ( !v26 )
        goto LABEL_44;
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
        goto LABEL_44;
      }
    }
  }
LABEL_43:
  this->fields.state = 1;
}