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

  if ( (byte_42187E3 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_42187E3 = 1;
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
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.voicePlayer, 0LL, v5, v6, v7, v8, v9, v10);
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
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.voiceAssetName, 0LL, v19, v20, v21, v22, v23, v24);
  }
  endCallback = this->fields.endCallback;
  p_endCallback = &this->fields.endCallback;
  v26 = endCallback;
  p_endCallback[7] = 0LL;
  *((_DWORD *)p_endCallback + 16) = 0;
  if ( endCallback )
  {
    *p_endCallback = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)p_endCallback, 0LL, v12, v13, v14, v15, v16, v17);
    ActionExtensions__Call(v26, 0LL);
  }
}


void __fastcall TitleInfoEventDailyPoint__EndPlayVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  TitleInfoEventDailyPoint_o *v2; // x19
  __int64 v3; // x1
  int32_t playCnt; // w8
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x20
  __int64 selectVoiceIndex; // x21
  ServantVoiceData_array *v7; // x9
  ServantVoiceData_o *v8; // x8
  __int64 v9; // x0

  v2 = this;
  if ( (byte_42187E0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, method);
    this = (TitleInfoEventDailyPoint_o *)sub_B0D8A4(&StringLiteral_10720/*"PlayVoice"*/, v3);
    byte_42187E0 = 1;
  }
  playCnt = v2->fields.playCnt;
  if ( playCnt < v2->fields.maxPlayCnt )
  {
    voiceList = v2->fields.voiceList;
    if ( voiceList )
    {
      selectVoiceIndex = v2->fields.selectVoiceIndex;
      if ( voiceList->fields._size <= (unsigned int)selectVoiceIndex )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v7 = voiceList->fields._items->m_Items[selectVoiceIndex];
      if ( v7 )
      {
        if ( playCnt >= v7->max_length )
        {
          v9 = sub_B0D9A8(this);
          sub_B0D948(v9, 0LL);
        }
        v8 = v7->m_Items[playCnt];
        if ( v8 )
        {
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)v2,
            (System_String_o *)StringLiteral_10720/*"PlayVoice"*/,
            v8->fields.delay,
            0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B0D97C(this);
  }
  this = (TitleInfoEventDailyPoint_o *)v2->fields.screenTouchInfo;
  if ( !this )
    goto LABEL_14;
  this = (TitleInfoEventDailyPoint_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v2->fields.state = 2;
}


void __fastcall TitleInfoEventDailyPoint__OnLoadSvtVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoEventDailyPoint_o *v3; // x19
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
  struct EventPointBehavior_o *eventPointBehavior; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  struct EventPointBehavior_o *v19; // x8
  struct System_String_array *voiceIds; // x8
  TitleInfoEventDailyPoint_o *v21; // x22
  __int64 v22; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x23
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  unsigned __int64 v30; // x23
  struct EventPointBehavior_o *v31; // x8
  struct System_String_array *v32; // x9
  int size; // w24
  TitleInfoEventDailyPoint_o *v34; // x22
  __int64 v35; // x25
  unsigned int v36; // w8
  __int64 v37; // x8
  __int64 v38; // x8
  struct EventPointBehavior_o *v39; // x9
  struct EventPointBehavior_o *v40; // x8
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
  if ( (byte_42187DD & 1) == 0 )
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
    this = (TitleInfoEventDailyPoint_o *)sub_B0D8A4(&Method_TitleInfoEventDailyPoint__OnLoadSvtVoice_b__26_0__, v14);
    byte_42187DD = 1;
  }
  eventPointBehavior = v3->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_42;
  if ( eventPointBehavior->fields.voiceIds )
  {
    v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                    method,
                                                                                                    v2);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v16,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    this = (TitleInfoEventDailyPoint_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_42;
    this = (TitleInfoEventDailyPoint_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
    v19 = v3->fields.eventPointBehavior;
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
        v31 = v3->fields.eventPointBehavior;
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
        this = (TitleInfoEventDailyPoint_o *)ServantVoiceMaster__getEntity_29961472(
                                               (ServantVoiceMaster_o *)v21,
                                               16,
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
    this = (TitleInfoEventDailyPoint_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_42;
    this = (TitleInfoEventDailyPoint_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
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
        v39 = v3->fields.eventPointBehavior;
        if ( !v39 || !v34 )
          goto LABEL_42;
        this = (TitleInfoEventDailyPoint_o *)VoicePlayCondMaster__isVoicePlay(
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
    v40 = v3->fields.eventPointBehavior;
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
    System_Action___ctor(v51, (Il2CppObject *)v3, Method_TitleInfoEventDailyPoint__OnLoadSvtVoice_b__26_0__, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__loadAudioAssetStorage(voiceAssetName, v51, 1, 0LL);
  }
}


void __fastcall TitleInfoEventDailyPoint__OnTouchDisp(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *screenTouchInfo; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v11; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_42187E2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    sub_B0D8A4(&Method_TitleInfoEventDailyPoint__OnTouchDisp_b__31_0__, v6);
    byte_42187E2 = 1;
  }
  screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
  if ( !screenTouchInfo )
    goto LABEL_13;
  screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL);
  if ( !screenTouchInfo )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_TitleInfoEventDailyPoint__OnTouchDisp_b__31_0__, 0LL);
  if ( !Instance )
LABEL_13:
    sub_B0D97C(screenTouchInfo);
  CommonUI__maskFadeout(Instance, 2, DEFAULT_FADE_TIME, v13, 0LL);
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
  UnityEngine_Transform_o *transform; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct EventPointBehavior_array *eventPointBehavior; // x8
  struct EventPointBehavior_o *v30; // x1
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  CommonUI_o *Instance; // x23
  System_Int32_array **Component_srcLineSprite; // x0
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
  struct EventPointBehavior_o *v47; // x8
  Il2CppObject *v48; // x0
  System_String_o *v49; // x0
  UnityEngine_Object_o *simpleAnimation; // x22
  System_String_o *v51; // x21
  UnityEngine_Transform_c *klass; // x8
  UnityEngine_Transform_o *v53; // x21
  unsigned __int64 v54; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v56; // x0
  UnityEngine_Object_o *animation; // x22
  __int64 v58; // x1
  ItemIconComponent_o *itemIcon; // x21
  int32_t eventDailyPoint; // w20
  System_String_o *v61; // x20
  float LocalPositionX; // s0
  UnityEngine_GameObject_o *pointRoot; // x0
  struct UILabel_o *pointLabel; // x8
  float v65; // s0
  float v66; // s8
  int m_CachedPtr; // w20
  float LocalScaleX; // s9
  float v69; // s0
  float v70; // s10
  const MethodInfo *v71; // x1
  __int64 v72; // x0
  int32_t effectId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42187DC & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, callback);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v10);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v11);
    sub_B0D8A4(&int_TypeInfo, v12);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v13);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v16);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_16801/*"bit_dedicate_reward_"*/, v18);
    byte_42187DC = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210D41 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, callback);
    byte_4210D41 = 1;
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
  sub_B0D840(
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
    v72 = sub_B0D9A8(transform);
    sub_B0D948(v72, 0LL);
  }
  v30 = eventPointBehavior->m_Items[0];
  this->fields.eventPointBehavior = v30;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventPointBehavior,
    (System_Int32_array **)v30,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
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
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_72;
    transform = (UnityEngine_Transform_o *)CommonUI__CreateScreeenTouchInfo(Instance, transform, 0, 0LL);
    if ( !transform )
      goto LABEL_72;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       (UnityEngine_GameObject_o *)transform,
                                                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
      Component_srcLineSprite,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  transform = (UnityEngine_Transform_o *)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_72;
  transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  this->fields.endCallback = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.endCallback,
    (System_Int32_array **)callback,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = this->fields.eventPointBehavior;
  this->fields.state = 0;
  if ( !v47 )
    goto LABEL_72;
  effectId = v47->fields.effectId;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId);
  v49 = System_String__Concat((Il2CppObject *)StringLiteral_16801/*"bit_dedicate_reward_"*/, v48, 0LL);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  v51 = v49;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    transform = (UnityEngine_Transform_o *)this->fields.simpleAnimation;
    if ( transform )
    {
      transform = (UnityEngine_Transform_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)transform, v51, 0LL);
      if ( transform )
      {
        klass = transform->klass;
        v53 = transform;
        if ( *(_WORD *)&transform->klass->_2.bitflags1 )
        {
          v54 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v54;
            p_offset += 2;
            if ( v54 >= *(unsigned __int16 *)&transform->klass->_2.bitflags1 )
              goto LABEL_35;
          }
          v56 = (__int64)(&klass[1]._1.methods + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_35:
          v56 = sub_AA67A0(transform, SimpleAnimation_State_TypeInfo, 14LL);
        }
        transform = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))v56)(
                                                 v53,
                                                 *(_QWORD *)(v56 + 8));
        if ( this->fields.simpleAnimation )
        {
          SimpleAnimation__set_clip(this->fields.simpleAnimation, (UnityEngine_AnimationClip_o *)transform, 0LL);
          transform = (UnityEngine_Transform_o *)this->fields.simpleAnimation;
          if ( transform )
          {
LABEL_48:
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 0, 0LL);
            goto LABEL_49;
          }
        }
      }
    }
LABEL_72:
    sub_B0D97C(transform);
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
  {
    transform = (UnityEngine_Transform_o *)this->fields.animation;
    if ( !transform )
      goto LABEL_72;
    transform = (UnityEngine_Transform_o *)UnityEngine_Animation__GetClip(
                                             (UnityEngine_Animation_o *)transform,
                                             v51,
                                             0LL);
    if ( !this->fields.animation )
      goto LABEL_72;
    UnityEngine_Animation__set_clip(this->fields.animation, (UnityEngine_AnimationClip_o *)transform, 0LL);
    transform = (UnityEngine_Transform_o *)this->fields.animation;
    if ( !transform )
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
  if ( !byte_421885B )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v58);
    byte_421885B = 1;
  }
  transform = (UnityEngine_Transform_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    transform = (UnityEngine_Transform_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !itemIcon )
    goto LABEL_72;
  ItemIconComponent__SetItem(itemIcon, *(_DWORD *)(*(_QWORD *)&transform[7].fields.m_CachedPtr + 336LL), -1, 0LL);
  if ( !*p_eventDailyPoint )
    goto LABEL_72;
  eventDailyPoint = (*p_eventDailyPoint)->fields.eventDailyPoint;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  transform = (UnityEngine_Transform_o *)LocalizationManager__GetNumberFormat(eventDailyPoint, 0LL);
  if ( !this->fields.satisfyLabel )
    goto LABEL_72;
  v61 = (System_String_o *)transform;
  UILabel__set_text(this->fields.satisfyLabel, (System_String_o *)transform, 0LL);
  transform = (UnityEngine_Transform_o *)this->fields.pointLabel;
  if ( !transform )
    goto LABEL_72;
  UILabel__set_text((UILabel_o *)transform, v61, 0LL);
  if ( !this->fields.initPosFlag )
  {
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(this->fields.pointLabelRight, 0LL);
    pointRoot = this->fields.pointRoot;
    this->fields.pointLabelRightInitPosX = LocalPositionX;
    this->fields.pointRootInitPosX = GameObjectExtensions__GetLocalPositionX(pointRoot, 0LL);
    this->fields.initPosFlag = 1;
  }
  pointLabel = this->fields.pointLabel;
  if ( !pointLabel )
    goto LABEL_72;
  GameObjectExtensions__SetLocalPositionX(
    this->fields.pointLabelRight,
    this->fields.pointLabelRightInitPosX + (float)pointLabel->fields.mWidth,
    0LL);
  v65 = GameObjectExtensions__GetLocalPositionX(this->fields.pointLabelLeft, 0LL);
  transform = (UnityEngine_Transform_o *)this->fields.pointLabelLeft;
  if ( !transform )
    goto LABEL_72;
  v66 = v65;
  transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           (UnityEngine_GameObject_o *)transform,
                                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !transform )
    goto LABEL_72;
  m_CachedPtr = transform[6].fields.m_CachedPtr;
  LocalScaleX = GameObjectExtensions__GetLocalScaleX(this->fields.pointLabelLeft, 0LL);
  v69 = GameObjectExtensions__GetLocalPositionX(this->fields.pointLabelRight, 0LL);
  transform = (UnityEngine_Transform_o *)this->fields.pointLabelRight;
  if ( !transform )
    goto LABEL_72;
  v70 = v69;
  transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           (UnityEngine_GameObject_o *)transform,
                                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !transform )
    goto LABEL_72;
  GameObjectExtensions__SetLocalPositionX(
    this->fields.pointRoot,
    this->fields.pointRootInitPosX
  + (float)((float)((float)(v66 - (float)(LocalScaleX * (float)m_CachedPtr))
                  + (float)(v70 + (float)transform[6].fields.m_CachedPtr))
          * -0.5),
    0LL);
  TitleInfoEventDailyPoint__OnLoadSvtVoice(this, v71);
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
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x20
  __int64 selectVoiceIndex; // x21
  ServantVoiceData_array *v15; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v17; // x8
  System_Int32_array **id; // x1
  struct EventPointBehavior_o *eventPointBehavior; // x8
  System_String_o *VoiceAssetName_29941680; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  System_String_o *voiceName; // x20
  System_String_o *v24; // x21
  SeManager_c *v25; // x8
  float DEFAULT_VOLUME; // s8
  System_Action_o *v27; // x22
  System_Int32_array **v28; // x0
  BattleServantConfConponent_o *p_voicePlayer; // x19
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x0

  v8 = this;
  if ( (byte_42187DF & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v9);
    sub_B0D8A4(&SeManager_TypeInfo, v10);
    sub_B0D8A4(&SoundManager_TypeInfo, v11);
    this = (TitleInfoEventDailyPoint_o *)sub_B0D8A4(&Method_TitleInfoEventDailyPoint_EndPlayVoice__, v12);
    byte_42187DF = 1;
  }
  voiceList = v8->fields.voiceList;
  if ( !voiceList )
    goto LABEL_17;
  selectVoiceIndex = v8->fields.selectVoiceIndex;
  if ( voiceList->fields._size <= (unsigned int)selectVoiceIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v15 = voiceList->fields._items->m_Items[selectVoiceIndex];
  if ( !v15 )
    goto LABEL_17;
  playCnt = v8->fields.playCnt;
  if ( (unsigned int)playCnt >= v15->max_length )
  {
    v36 = sub_B0D9A8(this);
    sub_B0D948(v36, 0LL);
  }
  v17 = v15->m_Items[playCnt];
  if ( !v17
    || (id = (System_Int32_array **)v17->fields.id,
        v8->fields.voiceName = (struct System_String_o *)id,
        sub_B0D840((BattleServantConfConponent_o *)&v8->fields.voiceName, id, v2, v3, v4, v5, v6, v7),
        (eventPointBehavior = v8->fields.eventPointBehavior) == 0LL) )
  {
LABEL_17:
    sub_B0D97C(this);
  }
  VoiceAssetName_29941680 = ServantVoiceEntity__getVoiceAssetName_29941680(eventPointBehavior->fields.svtId, 0LL);
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
  System_Action___ctor(v27, (Il2CppObject *)v8, Method_TitleInfoEventDailyPoint_EndPlayVoice__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v28 = (System_Int32_array **)SoundManager__playVoice_24977528(v24, voiceName, DEFAULT_VOLUME, v27, 0LL);
  v8->fields.voicePlayer = (struct SePlayer_o *)v28;
  p_voicePlayer = (BattleServantConfConponent_o *)&v8->fields.voicePlayer;
  sub_B0D840(p_voicePlayer, v28, v30, v31, v32, v33, v34, v35);
  ++p_voicePlayer->fields.m_CachedPtr;
}


void __fastcall TitleInfoEventDailyPoint__StartVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoEventDailyPoint_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Random_o *v7; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *v8; // x8
  const MethodInfo *v9; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o *v10; // x21
  ServantVoiceData_array *v11; // x8

  v3 = this;
  if ( (byte_42187DE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v4);
    this = (TitleInfoEventDailyPoint_o *)sub_B0D8A4(&System_Random_TypeInfo, v5);
    byte_42187DE = 1;
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
        this = (TitleInfoEventDailyPoint_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._7_Next.method)(
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
            TitleInfoEventDailyPoint__PlayVoice(v3, v9);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_B0D97C(this);
  }
}


void __fastcall TitleInfoEventDailyPoint__Update(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_42187E1 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, method);
    byte_42187E1 = 1;
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
  CommonUI_o *Instance; // x0
  CommonUI_o *v11; // x20
  struct EventPointBehavior_o *eventPointBehavior; // x8
  struct EventPointBehavior_o *v13; // x8
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

  if ( (byte_42187E4 & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BgmMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&SoundManager_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_13095/*"StartVoice"*/, v9);
    byte_42187E4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v11 )
    goto LABEL_44;
  CommonUI__maskFadein(v11, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13095/*"StartVoice"*/,
    this->fields.voiceStartTime,
    0LL);
  eventPointBehavior = this->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_44;
  if ( eventPointBehavior->fields.bgmId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_44;
    Instance = (CommonUI_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BgmMaster___);
    v13 = this->fields.eventPointBehavior;
    if ( !v13 )
      goto LABEL_44;
    if ( !Instance )
      goto LABEL_44;
    Instance = (CommonUI_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                               v13->fields.bgmId,
                               (const MethodInfo_2669BD4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_44;
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
      goto LABEL_44;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    v16 = this->fields.simpleAnimation;
    if ( !v16 )
      goto LABEL_44;
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
LABEL_44:
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
        goto LABEL_44;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
      Instance = (CommonUI_o *)this->fields.animation;
      if ( !Instance )
        goto LABEL_44;
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
        goto LABEL_44;
      }
    }
  }
LABEL_43:
  this->fields.state = 1;
}