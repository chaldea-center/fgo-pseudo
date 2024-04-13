void __fastcall TitleInfoEventDailyPoint___ctor(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventDailyPoint__Close(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  System_String_o *voiceName; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_String_o **p_voiceAssetName; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct System_Action_o **p_endCallback; // x19
  System_Action_o *v29; // x20
  struct System_Action_o *endCallback; // t1

  if ( (byte_42ECBC8 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECBC8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( this->fields.voicePlayer )
  {
    voiceName = this->fields.voiceName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopVoice_23417380(voiceName, 0.0, 0LL);
    this->fields.voicePlayer = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.voicePlayer, 0LL, v8, v9, v10, v11, v12, v13);
  }
  p_voiceAssetName = &this->fields.voiceAssetName;
  if ( !System_String__IsNullOrEmpty(this->fields.voiceAssetName, 0LL) )
  {
    v21 = *p_voiceAssetName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(v21, 0LL);
    *p_voiceAssetName = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.voiceAssetName, 0LL, v22, v23, v24, v25, v26, v27);
  }
  endCallback = this->fields.endCallback;
  p_endCallback = &this->fields.endCallback;
  v29 = endCallback;
  p_endCallback[7] = 0LL;
  *((_DWORD *)p_endCallback + 16) = 0;
  if ( endCallback )
  {
    *p_endCallback = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)p_endCallback, 0LL, v15, v16, v17, v18, v19, v20);
    ActionExtensions__Call(v29, 0LL);
  }
}


void __fastcall TitleInfoEventDailyPoint__EndPlayVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TitleInfoEventDailyPoint_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t playCnt; // w8
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x20
  __int64 selectVoiceIndex; // x21
  ServantVoiceData_array *v11; // x9
  ServantVoiceData_o *v12; // x8
  __int64 v13; // x0

  v4 = this;
  if ( (byte_42ECBC5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, (_DWORD)method, v2, v3);
    this = (TitleInfoEventDailyPoint_o *)sub_B5D5C4(&StringLiteral_10821/*"PlayVoice"*/, v5, v6, v7);
    byte_42ECBC5 = 1;
  }
  playCnt = v4->fields.playCnt;
  if ( playCnt < v4->fields.maxPlayCnt )
  {
    voiceList = v4->fields.voiceList;
    if ( voiceList )
    {
      selectVoiceIndex = v4->fields.selectVoiceIndex;
      if ( voiceList->fields._size <= (unsigned int)selectVoiceIndex )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v11 = voiceList->fields._items->m_Items[selectVoiceIndex];
      if ( v11 )
      {
        if ( playCnt >= v11->max_length )
        {
          v13 = sub_B5D6C8(this);
          sub_B5D668(v13, 0LL);
        }
        v12 = v11->m_Items[playCnt];
        if ( v12 )
        {
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)v4,
            (System_String_o *)StringLiteral_10821/*"PlayVoice"*/,
            v12->fields.delay,
            0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B5D69C(this, method);
  }
  this = (TitleInfoEventDailyPoint_o *)v4->fields.screenTouchInfo;
  if ( !this )
    goto LABEL_14;
  this = (TitleInfoEventDailyPoint_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v4->fields.state = 2;
}


void __fastcall TitleInfoEventDailyPoint__OnLoadSvtVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TitleInfoEventDailyPoint_o *v4; // x19
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
  struct EventPointBehavior_o *eventPointBehavior; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x20
  struct EventPointBehavior_o *v40; // x8
  struct System_String_array *voiceIds; // x8
  TitleInfoEventDailyPoint_o *v42; // x22
  __int64 v43; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x23
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  unsigned __int64 v51; // x23
  struct EventPointBehavior_o *v52; // x8
  struct System_String_array *v53; // x9
  int size; // w24
  TitleInfoEventDailyPoint_o *v55; // x22
  __int64 v56; // x25
  unsigned int v57; // w8
  __int64 v58; // x8
  __int64 v59; // x8
  struct EventPointBehavior_o *v60; // x9
  struct EventPointBehavior_o *v61; // x8
  System_Int32_array **VoiceAssetName_31472176; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_String_o *voiceAssetName; // x20
  System_Action_o *v70; // x21
  __int64 v71; // x0

  v4 = this;
  if ( (byte_42ECBC2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____AddRange__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&SoundManager_TypeInfo, v32, v33, v34);
    this = (TitleInfoEventDailyPoint_o *)sub_B5D5C4(
                                           &Method_TitleInfoEventDailyPoint__OnLoadSvtVoice_b__26_0__,
                                           v35,
                                           v36,
                                           v37);
    byte_42ECBC2 = 1;
  }
  eventPointBehavior = v4->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_42;
  if ( eventPointBehavior->fields.voiceIds )
  {
    v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v39,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    this = (TitleInfoEventDailyPoint_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_42;
    this = (TitleInfoEventDailyPoint_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
    v40 = v4->fields.eventPointBehavior;
    if ( !v40 )
      goto LABEL_42;
    voiceIds = v40->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_42;
    v42 = this;
    v43 = *(_QWORD *)&voiceIds->max_length;
    v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v44,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    v4->fields.voiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v44;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v4->fields.voiceList,
      (System_Int32_array **)v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    if ( (int)v43 >= 1 )
    {
      v51 = 0LL;
      while ( 1 )
      {
        v52 = v4->fields.eventPointBehavior;
        if ( !v52 )
          break;
        v53 = v52->fields.voiceIds;
        if ( !v53 )
          break;
        if ( v51 >= v53->max_length )
        {
LABEL_43:
          v71 = sub_B5D6C8(this);
          sub_B5D668(v71, 0LL);
        }
        if ( !v42 )
          break;
        this = (TitleInfoEventDailyPoint_o *)ServantVoiceMaster__getEntity_31491968(
                                               (ServantVoiceMaster_o *)v42,
                                               16,
                                               v52->fields.svtId,
                                               v52->fields.limitCount,
                                               v53->m_Items[v51],
                                               0LL);
        if ( this )
        {
          if ( !v39 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v39,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
        }
        if ( (__int64)++v51 >= (int)v43 )
          goto LABEL_18;
      }
LABEL_42:
      sub_B5D69C(this, method);
    }
LABEL_18:
    this = (TitleInfoEventDailyPoint_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_42;
    this = (TitleInfoEventDailyPoint_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !v39 )
      goto LABEL_42;
    size = v39->fields._size;
    if ( size >= 1 )
    {
      v55 = this;
      v56 = 4LL;
      v57 = v39->fields._size;
      while ( 1 )
      {
        if ( v57 <= (int)v56 - 4 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v58 = *((_QWORD *)&v39->fields._items->obj.klass + v56);
        if ( !v58 )
          goto LABEL_42;
        if ( !*(_DWORD *)(v58 + 24) )
          goto LABEL_43;
        v59 = *(_QWORD *)(v58 + 32);
        if ( !v59 )
          goto LABEL_42;
        v60 = v4->fields.eventPointBehavior;
        if ( !v60 || !v55 )
          goto LABEL_42;
        this = (TitleInfoEventDailyPoint_o *)VoicePlayCondMaster__isVoicePlay(
                                               (VoicePlayCondMaster_o *)v55,
                                               v60->fields.svtId,
                                               *(System_String_o **)(v59 + 16),
                                               0LL,
                                               -1LL,
                                               -1,
                                               0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( v39->fields._size <= (unsigned int)(v56 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          if ( !v4->fields.voiceList )
            goto LABEL_42;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.voiceList,
            *((EventMissionProgressRequest_Argument_ProgressData_o **)&v39->fields._items->obj.klass + v56),
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
        }
        if ( (int)v56 - 3 >= size )
          break;
        v57 = v39->fields._size;
        ++v56;
      }
    }
    v61 = v4->fields.eventPointBehavior;
    if ( !v61 )
      goto LABEL_42;
    VoiceAssetName_31472176 = (System_Int32_array **)ServantVoiceEntity__getVoiceAssetName_31472176(
                                                       v61->fields.svtId,
                                                       0LL);
    v4->fields.voiceAssetName = (struct System_String_o *)VoiceAssetName_31472176;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v4->fields.voiceAssetName,
      VoiceAssetName_31472176,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
    voiceAssetName = v4->fields.voiceAssetName;
    v70 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v70, (Il2CppObject *)v4, Method_TitleInfoEventDailyPoint__OnLoadSvtVoice_b__26_0__, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__loadAudioAssetStorage(voiceAssetName, v70, 1, 0LL);
  }
}


void __fastcall TitleInfoEventDailyPoint__OnTouchDisp(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
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
  UnityEngine_Component_o *screenTouchInfo; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v19; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21

  if ( (byte_42ECBC7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_TitleInfoEventDailyPoint__OnTouchDisp_b__31_0__, v14, v15, v16);
    byte_42ECBC7 = 1;
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v19 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
  v21 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_TitleInfoEventDailyPoint__OnTouchDisp_b__31_0__, 0LL);
  if ( !Instance )
LABEL_13:
    sub_B5D69C(screenTouchInfo, method);
  CommonUI__maskFadeout(Instance, 2, DEFAULT_FADE_TIME, v21, 0LL);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  TerminalPramsManager_c *v37; // x0
  struct EventDailyPoint_o *eventDailyPoint_k__BackingField; // x1
  struct EventDailyPoint_o **p_eventDailyPoint; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct EventPointBehavior_array *eventPointBehavior; // x8
  struct EventPointBehavior_o *v49; // x1
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  CommonUI_o *Instance; // x23
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct EventPointBehavior_o *v66; // x8
  Il2CppObject *v67; // x0
  System_String_o *v68; // x0
  UnityEngine_Object_o *simpleAnimation; // x22
  System_String_o *v70; // x21
  __int64 v71; // x3
  UnityEngine_Transform_c *klass; // x8
  UnityEngine_Transform_o *v73; // x21
  unsigned __int64 v74; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v76; // x0
  UnityEngine_Object_o *animation; // x22
  int v78; // w2
  __int64 v79; // x3
  ItemIconComponent_o *itemIcon; // x21
  int32_t eventDailyPoint; // w20
  System_String_o *v82; // x20
  float LocalPositionX; // s0
  UnityEngine_GameObject_o *pointRoot; // x0
  struct UILabel_o *pointLabel; // x8
  float v86; // s0
  float v87; // s8
  int m_CachedPtr; // w20
  float LocalScaleX; // s9
  float v90; // s0
  float v91; // s10
  const MethodInfo *v92; // x1
  __int64 v93; // x0
  int32_t effectId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42ECBC1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___,
      (_DWORD)callback,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v10, v11, v12);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v13, v14, v15);
    sub_B5D5C4(&int_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25, v26, v27);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_16958/*"bit_dedicate_reward_"*/, v34, v35, v36);
    byte_42ECBC1 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E502E )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    byte_42E502E = 1;
  }
  v37 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v37 = TerminalPramsManager_TypeInfo;
  }
  eventDailyPoint_k__BackingField = v37->static_fields->_eventDailyPoint_k__BackingField;
  this->fields.eventDailyPoint = eventDailyPoint_k__BackingField;
  p_eventDailyPoint = &this->fields.eventDailyPoint;
  sub_B5D560(
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
    v93 = sub_B5D6C8(transform);
    sub_B5D668(v93, 0LL);
  }
  v49 = eventPointBehavior->m_Items[0];
  this->fields.eventPointBehavior = v49;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventPointBehavior,
    (System_Int32_array **)v49,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_72;
    transform = (UnityEngine_Transform_o *)CommonUI__CreateScreeenTouchInfo(Instance, transform, 0, 0LL);
    if ( !transform )
      goto LABEL_72;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       (UnityEngine_GameObject_o *)transform,
                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
      Component_srcLineSprite,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endCallback,
    (System_Int32_array **)callback,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v66 = this->fields.eventPointBehavior;
  this->fields.state = 0;
  if ( !v66 )
    goto LABEL_72;
  effectId = v66->fields.effectId;
  v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId);
  v68 = System_String__Concat((Il2CppObject *)StringLiteral_16958/*"bit_dedicate_reward_"*/, v67, 0LL);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  v70 = v68;
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
      transform = (UnityEngine_Transform_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)transform, v70, 0LL);
      if ( transform )
      {
        klass = transform->klass;
        v73 = transform;
        if ( *(_WORD *)&transform->klass->_2.bitflags1 )
        {
          v74 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v74;
            p_offset += 2;
            if ( v74 >= *(unsigned __int16 *)&transform->klass->_2.bitflags1 )
              goto LABEL_35;
          }
          v76 = (__int64)(&klass[1]._1.methods + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_35:
          v76 = sub_AF54C0(transform, SimpleAnimation_State_TypeInfo, 14LL, v71);
        }
        transform = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))v76)(
                                                 v73,
                                                 *(_QWORD *)(v76 + 8));
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
    sub_B5D69C(transform, v41);
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
                                             v70,
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
  if ( !byte_42ECC40 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v41, v78, v79);
    byte_42ECC40 = 1;
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
  ItemIconComponent__SetItem(itemIcon, *(_DWORD *)(*(_QWORD *)&transform[7].fields.m_CachedPtr + 352LL), -1, 0LL);
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
  v82 = (System_String_o *)transform;
  UILabel__set_text(this->fields.satisfyLabel, (System_String_o *)transform, 0LL);
  transform = (UnityEngine_Transform_o *)this->fields.pointLabel;
  if ( !transform )
    goto LABEL_72;
  UILabel__set_text((UILabel_o *)transform, v82, 0LL);
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
  v86 = GameObjectExtensions__GetLocalPositionX(this->fields.pointLabelLeft, 0LL);
  transform = (UnityEngine_Transform_o *)this->fields.pointLabelLeft;
  if ( !transform )
    goto LABEL_72;
  v87 = v86;
  transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           (UnityEngine_GameObject_o *)transform,
                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !transform )
    goto LABEL_72;
  m_CachedPtr = transform[6].fields.m_CachedPtr;
  LocalScaleX = GameObjectExtensions__GetLocalScaleX(this->fields.pointLabelLeft, 0LL);
  v90 = GameObjectExtensions__GetLocalPositionX(this->fields.pointLabelRight, 0LL);
  transform = (UnityEngine_Transform_o *)this->fields.pointLabelRight;
  if ( !transform )
    goto LABEL_72;
  v91 = v90;
  transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           (UnityEngine_GameObject_o *)transform,
                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !transform )
    goto LABEL_72;
  GameObjectExtensions__SetLocalPositionX(
    this->fields.pointRoot,
    this->fields.pointRootInitPosX
  + (float)((float)((float)(v87 - (float)(LocalScaleX * (float)m_CachedPtr))
                  + (float)(v91 + (float)transform[6].fields.m_CachedPtr))
          * -0.5),
    0LL);
  TitleInfoEventDailyPoint__OnLoadSvtVoice(this, v92);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x20
  __int64 selectVoiceIndex; // x21
  ServantVoiceData_array *v23; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v25; // x8
  System_Int32_array **id; // x1
  struct EventPointBehavior_o *eventPointBehavior; // x8
  System_String_o *VoiceAssetName_31472176; // x0
  System_String_o *voiceName; // x20
  System_String_o *v30; // x21
  SeManager_c *v31; // x8
  float DEFAULT_VOLUME; // s8
  System_Action_o *v33; // x22
  System_Int32_array **v34; // x0
  BattleServantConfConponent_o *p_voicePlayer; // x19
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x0

  v8 = this;
  if ( (byte_42ECBC4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v9, v10, v11);
    sub_B5D5C4(&SeManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&SoundManager_TypeInfo, v15, v16, v17);
    this = (TitleInfoEventDailyPoint_o *)sub_B5D5C4(&Method_TitleInfoEventDailyPoint_EndPlayVoice__, v18, v19, v20);
    byte_42ECBC4 = 1;
  }
  voiceList = v8->fields.voiceList;
  if ( !voiceList )
    goto LABEL_17;
  selectVoiceIndex = v8->fields.selectVoiceIndex;
  if ( voiceList->fields._size <= (unsigned int)selectVoiceIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v23 = voiceList->fields._items->m_Items[selectVoiceIndex];
  if ( !v23 )
    goto LABEL_17;
  playCnt = v8->fields.playCnt;
  if ( (unsigned int)playCnt >= v23->max_length )
  {
    v42 = sub_B5D6C8(this);
    sub_B5D668(v42, 0LL);
  }
  v25 = v23->m_Items[playCnt];
  if ( !v25
    || (id = (System_Int32_array **)v25->fields.id,
        v8->fields.voiceName = (struct System_String_o *)id,
        sub_B5D560((BattleServantConfConponent_o *)&v8->fields.voiceName, id, v2, v3, v4, v5, v6, v7),
        (eventPointBehavior = v8->fields.eventPointBehavior) == 0LL) )
  {
LABEL_17:
    sub_B5D69C(this, method);
  }
  VoiceAssetName_31472176 = ServantVoiceEntity__getVoiceAssetName_31472176(eventPointBehavior->fields.svtId, 0LL);
  voiceName = v8->fields.voiceName;
  v30 = VoiceAssetName_31472176;
  v31 = SeManager_TypeInfo;
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v31 = SeManager_TypeInfo;
  }
  DEFAULT_VOLUME = v31->static_fields->DEFAULT_VOLUME;
  v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)v8, Method_TitleInfoEventDailyPoint_EndPlayVoice__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v34 = (System_Int32_array **)SoundManager__playVoice_23391328(v30, voiceName, DEFAULT_VOLUME, v33, 0LL);
  v8->fields.voicePlayer = (struct SePlayer_o *)v34;
  p_voicePlayer = (BattleServantConfConponent_o *)&v8->fields.voicePlayer;
  sub_B5D560(p_voicePlayer, v34, v36, v37, v38, v39, v40, v41);
  ++p_voicePlayer->fields.m_CachedPtr;
}


void __fastcall TitleInfoEventDailyPoint__StartVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TitleInfoEventDailyPoint_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Random_o *v12; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *v13; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *v14; // x21
  ServantVoiceData_array *v15; // x8

  v4 = this;
  if ( (byte_42ECBC3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v5, v6, v7);
    this = (TitleInfoEventDailyPoint_o *)sub_B5D5C4(&System_Random_TypeInfo, v8, v9, v10);
    byte_42ECBC3 = 1;
  }
  voiceList = v4->fields.voiceList;
  if ( !voiceList )
    goto LABEL_13;
  if ( voiceList->fields._size )
  {
    v12 = (System_Random_o *)sub_B5D694(System_Random_TypeInfo);
    System_Random___ctor(v12, 0LL);
    v13 = v4->fields.voiceList;
    if ( v13 )
    {
      if ( v12 )
      {
        this = (TitleInfoEventDailyPoint_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v12->klass->vtable._7_Next.method)(
                                               v12,
                                               (unsigned int)v13->fields._size,
                                               v12->klass->vtable._8_NextDouble.methodPtr);
        v14 = v4->fields.voiceList;
        v4->fields.selectVoiceIndex = (int)this;
        if ( v14 )
        {
          if ( v14->fields._size <= (unsigned int)this )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v15 = v14->fields._items->m_Items[(int)this];
          if ( v15 )
          {
            *(_QWORD *)&v4->fields.maxPlayCnt = (unsigned int)*(_QWORD *)&v15->max_length;
            TitleInfoEventDailyPoint__PlayVoice(v4, method);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_B5D69C(this, method);
  }
}


void __fastcall TitleInfoEventDailyPoint__Update(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1

  if ( (byte_42ECBC6 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECBC6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( CTouch__isTouchPush(0LL) )
      TitleInfoEventDailyPoint__OnTouchDisp(this, v5);
  }
}


void __fastcall TitleInfoEventDailyPoint___OnLoadSvtVoice_b__26_0(
        TitleInfoEventDailyPoint_o *this,
        const MethodInfo *method)
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  CommonUI_o *Instance; // x0
  __int64 v27; // x1
  CommonUI_o *v28; // x20
  struct EventPointBehavior_o *eventPointBehavior; // x8
  struct EventPointBehavior_o *v30; // x8
  System_String_o *topImg; // x20
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v33; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v35; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *v39; // x20
  System_String_o *v40; // x0

  if ( (byte_42ECBC9 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BgmMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&SoundManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_13207/*"StartVoice"*/, v23, v24, v25);
    byte_42ECBC9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v28 = Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v28 )
    goto LABEL_44;
  CommonUI__maskFadein(v28, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13207/*"StartVoice"*/,
    this->fields.voiceStartTime,
    0LL);
  eventPointBehavior = this->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_44;
  if ( eventPointBehavior->fields.bgmId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_44;
    Instance = (CommonUI_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BgmMaster___);
    v30 = this->fields.eventPointBehavior;
    if ( !v30 )
      goto LABEL_44;
    if ( !Instance )
      goto LABEL_44;
    Instance = (CommonUI_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                               v30->fields.bgmId,
                               (const MethodInfo_23FAE10 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
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
    v33 = this->fields.simpleAnimation;
    if ( !v33 )
      goto LABEL_44;
    monitor = (UnityEngine_Object_o *)v33[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v35 = this->fields.simpleAnimation;
      if ( v35 )
      {
        Instance = (CommonUI_o *)v35[1].monitor;
        if ( Instance )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
          SimpleAnimation__Play_16676044(v35, name, 0LL);
          goto LABEL_43;
        }
      }
LABEL_44:
      sub_B5D69C(Instance, v27);
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
        v39 = this->fields.animation;
        if ( v39 )
        {
          Instance = (CommonUI_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0LL);
          if ( Instance )
          {
            v40 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
            UnityEngine_Animation__Play_51249124(v39, v40, 0LL);
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