void __fastcall TitleInfoEventDailyPoint___ctor(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventDailyPoint__Close(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *voiceName; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct System_String_o **p_voiceAssetName; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_Action_o **p_endCallback; // x19
  System_Action_o *v27; // x20
  struct System_Action_o *endCallback; // t1

  if ( (byte_42B43FA & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B43FA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( this->fields.voicePlayer )
  {
    voiceName = this->fields.voiceName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopVoice_23814188(voiceName, 0.0, 0LL);
    this->fields.voicePlayer = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.voicePlayer, 0LL, v6, v7, v8, v9, v10, v11);
  }
  p_voiceAssetName = &this->fields.voiceAssetName;
  if ( !System_String__IsNullOrEmpty(this->fields.voiceAssetName, 0LL) )
  {
    v19 = *p_voiceAssetName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(v19, 0LL);
    *p_voiceAssetName = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.voiceAssetName, 0LL, v20, v21, v22, v23, v24, v25);
  }
  endCallback = this->fields.endCallback;
  p_endCallback = &this->fields.endCallback;
  v27 = endCallback;
  p_endCallback[7] = 0LL;
  *((_DWORD *)p_endCallback + 16) = 0;
  if ( endCallback )
  {
    *p_endCallback = 0LL;
    sub_B52920((BattleServantConfConponent_o *)p_endCallback, 0LL, v13, v14, v15, v16, v17, v18);
    ActionExtensions__Call(v27, 0LL);
  }
}


void __fastcall TitleInfoEventDailyPoint__EndPlayVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  TitleInfoEventDailyPoint_o *v2; // x19
  int32_t playCnt; // w8
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x20
  __int64 selectVoiceIndex; // x21
  ServantVoiceData_array *v6; // x9
  ServantVoiceData_o *v7; // x8
  __int64 v8; // x0

  v2 = this;
  if ( (byte_42B43F7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this = (TitleInfoEventDailyPoint_o *)sub_B52984(&StringLiteral_10775/*"PlayVoice"*/);
    byte_42B43F7 = 1;
  }
  playCnt = v2->fields.playCnt;
  if ( playCnt < v2->fields.maxPlayCnt )
  {
    voiceList = v2->fields.voiceList;
    if ( voiceList )
    {
      selectVoiceIndex = v2->fields.selectVoiceIndex;
      if ( voiceList->fields._size <= (unsigned int)selectVoiceIndex )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v6 = voiceList->fields._items->m_Items[selectVoiceIndex];
      if ( v6 )
      {
        if ( playCnt >= v6->max_length )
        {
          v8 = sub_B52A88(this);
          sub_B52A28(v8, 0LL);
        }
        v7 = v6->m_Items[playCnt];
        if ( v7 )
        {
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)v2,
            (System_String_o *)StringLiteral_10775/*"PlayVoice"*/,
            v7->fields.delay,
            0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B52A5C(this, method);
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
  TitleInfoEventDailyPoint_o *v2; // x19
  struct EventPointBehavior_o *eventPointBehavior; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  struct EventPointBehavior_o *v5; // x8
  struct System_String_array *voiceIds; // x8
  TitleInfoEventDailyPoint_o *v7; // x22
  __int64 v8; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x23
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  unsigned __int64 v16; // x23
  struct EventPointBehavior_o *v17; // x8
  struct System_String_array *v18; // x9
  int size; // w24
  TitleInfoEventDailyPoint_o *v20; // x22
  __int64 v21; // x25
  unsigned int v22; // w8
  __int64 v23; // x8
  __int64 v24; // x8
  struct EventPointBehavior_o *v25; // x9
  struct EventPointBehavior_o *v26; // x8
  System_Int32_array **VoiceAssetName_30972712; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_o *voiceAssetName; // x20
  System_Action_o *v35; // x21
  __int64 v36; // x0

  v2 = this;
  if ( (byte_42B43F4 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_B52984(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    this = (TitleInfoEventDailyPoint_o *)sub_B52984(&Method_TitleInfoEventDailyPoint__OnLoadSvtVoice_b__26_0__);
    byte_42B43F4 = 1;
  }
  eventPointBehavior = v2->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_42;
  if ( eventPointBehavior->fields.voiceIds )
  {
    v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v4,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    this = (TitleInfoEventDailyPoint_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_42;
    this = (TitleInfoEventDailyPoint_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
    v5 = v2->fields.eventPointBehavior;
    if ( !v5 )
      goto LABEL_42;
    voiceIds = v5->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_42;
    v7 = this;
    v8 = *(_QWORD *)&voiceIds->max_length;
    v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v9,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    v2->fields.voiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v9;
    sub_B52920(
      (BattleServantConfConponent_o *)&v2->fields.voiceList,
      (System_Int32_array **)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    if ( (int)v8 >= 1 )
    {
      v16 = 0LL;
      while ( 1 )
      {
        v17 = v2->fields.eventPointBehavior;
        if ( !v17 )
          break;
        v18 = v17->fields.voiceIds;
        if ( !v18 )
          break;
        if ( v16 >= v18->max_length )
        {
LABEL_43:
          v36 = sub_B52A88(this);
          sub_B52A28(v36, 0LL);
        }
        if ( !v7 )
          break;
        this = (TitleInfoEventDailyPoint_o *)ServantVoiceMaster__getEntity_30992504(
                                               (ServantVoiceMaster_o *)v7,
                                               16,
                                               v17->fields.svtId,
                                               v17->fields.limitCount,
                                               v18->m_Items[v16],
                                               0LL);
        if ( this )
        {
          if ( !v4 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v4,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
        }
        if ( (__int64)++v16 >= (int)v8 )
          goto LABEL_18;
      }
LABEL_42:
      sub_B52A5C(this, method);
    }
LABEL_18:
    this = (TitleInfoEventDailyPoint_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_42;
    this = (TitleInfoEventDailyPoint_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !v4 )
      goto LABEL_42;
    size = v4->fields._size;
    if ( size >= 1 )
    {
      v20 = this;
      v21 = 4LL;
      v22 = v4->fields._size;
      while ( 1 )
      {
        if ( v22 <= (int)v21 - 4 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v23 = *((_QWORD *)&v4->fields._items->obj.klass + v21);
        if ( !v23 )
          goto LABEL_42;
        if ( !*(_DWORD *)(v23 + 24) )
          goto LABEL_43;
        v24 = *(_QWORD *)(v23 + 32);
        if ( !v24 )
          goto LABEL_42;
        v25 = v2->fields.eventPointBehavior;
        if ( !v25 || !v20 )
          goto LABEL_42;
        this = (TitleInfoEventDailyPoint_o *)VoicePlayCondMaster__isVoicePlay(
                                               (VoicePlayCondMaster_o *)v20,
                                               v25->fields.svtId,
                                               *(System_String_o **)(v24 + 16),
                                               0LL,
                                               -1LL,
                                               -1,
                                               0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( v4->fields._size <= (unsigned int)(v21 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          if ( !v2->fields.voiceList )
            goto LABEL_42;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v2->fields.voiceList,
            *((EventMissionProgressRequest_Argument_ProgressData_o **)&v4->fields._items->obj.klass + v21),
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
        }
        if ( (int)v21 - 3 >= size )
          break;
        v22 = v4->fields._size;
        ++v21;
      }
    }
    v26 = v2->fields.eventPointBehavior;
    if ( !v26 )
      goto LABEL_42;
    VoiceAssetName_30972712 = (System_Int32_array **)ServantVoiceEntity__getVoiceAssetName_30972712(
                                                       v26->fields.svtId,
                                                       0LL);
    v2->fields.voiceAssetName = (struct System_String_o *)VoiceAssetName_30972712;
    sub_B52920(
      (BattleServantConfConponent_o *)&v2->fields.voiceAssetName,
      VoiceAssetName_30972712,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    voiceAssetName = v2->fields.voiceAssetName;
    v35 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v35, (Il2CppObject *)v2, Method_TitleInfoEventDailyPoint__OnLoadSvtVoice_b__26_0__, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__loadAudioAssetStorage(voiceAssetName, v35, 1, 0LL);
  }
}


void __fastcall TitleInfoEventDailyPoint__OnTouchDisp(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *screenTouchInfo; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v5; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21

  if ( (byte_42B43F9 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_TitleInfoEventDailyPoint__OnTouchDisp_b__31_0__);
    byte_42B43F9 = 1;
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TitleInfoEventDailyPoint__OnTouchDisp_b__31_0__, 0LL);
  if ( !Instance )
LABEL_13:
    sub_B52A5C(screenTouchInfo, method);
  CommonUI__maskFadeout(Instance, 2, DEFAULT_FADE_TIME, v7, 0LL);
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
  TerminalPramsManager_c *v10; // x0
  struct EventDailyPoint_o *eventDailyPoint_k__BackingField; // x1
  struct EventDailyPoint_o **p_eventDailyPoint; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct EventPointBehavior_array *eventPointBehavior; // x8
  struct EventPointBehavior_o *v22; // x1
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  CommonUI_o *Instance; // x23
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct EventPointBehavior_o *v39; // x8
  Il2CppObject *v40; // x0
  System_String_o *v41; // x0
  UnityEngine_Object_o *simpleAnimation; // x22
  System_String_o *v43; // x21
  __int64 v44; // x3
  UnityEngine_Transform_c *klass; // x8
  UnityEngine_Transform_o *v46; // x21
  unsigned __int64 v47; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v49; // x0
  UnityEngine_Object_o *animation; // x22
  ItemIconComponent_o *itemIcon; // x21
  int32_t eventDailyPoint; // w20
  System_String_o *v53; // x20
  float LocalPositionX; // s0
  UnityEngine_GameObject_o *pointRoot; // x0
  struct UILabel_o *pointLabel; // x8
  float v57; // s0
  float v58; // s8
  int m_CachedPtr; // w20
  float LocalScaleX; // s9
  float v61; // s0
  float v62; // s10
  const MethodInfo *v63; // x1
  __int64 v64; // x0
  int32_t effectId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42B43F3 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&StringLiteral_16867/*"bit_dedicate_reward_"*/);
    byte_42B43F3 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC7AB )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC7AB = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  eventDailyPoint_k__BackingField = v10->static_fields->_eventDailyPoint_k__BackingField;
  this->fields.eventDailyPoint = eventDailyPoint_k__BackingField;
  p_eventDailyPoint = &this->fields.eventDailyPoint;
  sub_B52920(
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
    v64 = sub_B52A88(transform);
    sub_B52A28(v64, 0LL);
  }
  v22 = eventPointBehavior->m_Items[0];
  this->fields.eventPointBehavior = v22;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventPointBehavior,
    (System_Int32_array **)v22,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_72;
    transform = (UnityEngine_Transform_o *)CommonUI__CreateScreeenTouchInfo(Instance, transform, 0, 0LL);
    if ( !transform )
      goto LABEL_72;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       (UnityEngine_GameObject_o *)transform,
                                                       (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
      Component_srcLineSprite,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.endCallback,
    (System_Int32_array **)callback,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = this->fields.eventPointBehavior;
  this->fields.state = 0;
  if ( !v39 )
    goto LABEL_72;
  effectId = v39->fields.effectId;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId);
  v41 = System_String__Concat((Il2CppObject *)StringLiteral_16867/*"bit_dedicate_reward_"*/, v40, 0LL);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  v43 = v41;
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
      transform = (UnityEngine_Transform_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)transform, v43, 0LL);
      if ( transform )
      {
        klass = transform->klass;
        v46 = transform;
        if ( *(_WORD *)&transform->klass->_2.bitflags1 )
        {
          v47 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v47;
            p_offset += 2;
            if ( v47 >= *(unsigned __int16 *)&transform->klass->_2.bitflags1 )
              goto LABEL_35;
          }
          v49 = (__int64)(&klass[1]._1.methods + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_35:
          v49 = sub_AEB880(transform, SimpleAnimation_State_TypeInfo, 14LL, v44);
        }
        transform = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))v49)(
                                                 v46,
                                                 *(_QWORD *)(v49 + 8));
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
    sub_B52A5C(transform, v14);
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
                                             v43,
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
  if ( !byte_42B4472 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42B4472 = 1;
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
  v53 = (System_String_o *)transform;
  UILabel__set_text(this->fields.satisfyLabel, (System_String_o *)transform, 0LL);
  transform = (UnityEngine_Transform_o *)this->fields.pointLabel;
  if ( !transform )
    goto LABEL_72;
  UILabel__set_text((UILabel_o *)transform, v53, 0LL);
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
  v57 = GameObjectExtensions__GetLocalPositionX(this->fields.pointLabelLeft, 0LL);
  transform = (UnityEngine_Transform_o *)this->fields.pointLabelLeft;
  if ( !transform )
    goto LABEL_72;
  v58 = v57;
  transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           (UnityEngine_GameObject_o *)transform,
                                           (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !transform )
    goto LABEL_72;
  m_CachedPtr = transform[6].fields.m_CachedPtr;
  LocalScaleX = GameObjectExtensions__GetLocalScaleX(this->fields.pointLabelLeft, 0LL);
  v61 = GameObjectExtensions__GetLocalPositionX(this->fields.pointLabelRight, 0LL);
  transform = (UnityEngine_Transform_o *)this->fields.pointLabelRight;
  if ( !transform )
    goto LABEL_72;
  v62 = v61;
  transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           (UnityEngine_GameObject_o *)transform,
                                           (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !transform )
    goto LABEL_72;
  GameObjectExtensions__SetLocalPositionX(
    this->fields.pointRoot,
    this->fields.pointRootInitPosX
  + (float)((float)((float)(v58 - (float)(LocalScaleX * (float)m_CachedPtr))
                  + (float)(v62 + (float)transform[6].fields.m_CachedPtr))
          * -0.5),
    0LL);
  TitleInfoEventDailyPoint__OnLoadSvtVoice(this, v63);
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
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x20
  __int64 selectVoiceIndex; // x21
  ServantVoiceData_array *v11; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v13; // x8
  System_Int32_array **id; // x1
  struct EventPointBehavior_o *eventPointBehavior; // x8
  System_String_o *VoiceAssetName_30972712; // x0
  System_String_o *voiceName; // x20
  System_String_o *v18; // x21
  SeManager_c *v19; // x8
  float DEFAULT_VOLUME; // s8
  System_Action_o *v21; // x22
  System_Int32_array **v22; // x0
  BattleServantConfConponent_o *p_voicePlayer; // x19
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x0

  v8 = this;
  if ( (byte_42B43F6 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_B52984(&SeManager_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    this = (TitleInfoEventDailyPoint_o *)sub_B52984(&Method_TitleInfoEventDailyPoint_EndPlayVoice__);
    byte_42B43F6 = 1;
  }
  voiceList = v8->fields.voiceList;
  if ( !voiceList )
    goto LABEL_17;
  selectVoiceIndex = v8->fields.selectVoiceIndex;
  if ( voiceList->fields._size <= (unsigned int)selectVoiceIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v11 = voiceList->fields._items->m_Items[selectVoiceIndex];
  if ( !v11 )
    goto LABEL_17;
  playCnt = v8->fields.playCnt;
  if ( (unsigned int)playCnt >= v11->max_length )
  {
    v30 = sub_B52A88(this);
    sub_B52A28(v30, 0LL);
  }
  v13 = v11->m_Items[playCnt];
  if ( !v13
    || (id = (System_Int32_array **)v13->fields.id,
        v8->fields.voiceName = (struct System_String_o *)id,
        sub_B52920((BattleServantConfConponent_o *)&v8->fields.voiceName, id, v2, v3, v4, v5, v6, v7),
        (eventPointBehavior = v8->fields.eventPointBehavior) == 0LL) )
  {
LABEL_17:
    sub_B52A5C(this, method);
  }
  VoiceAssetName_30972712 = ServantVoiceEntity__getVoiceAssetName_30972712(eventPointBehavior->fields.svtId, 0LL);
  voiceName = v8->fields.voiceName;
  v18 = VoiceAssetName_30972712;
  v19 = SeManager_TypeInfo;
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v19 = SeManager_TypeInfo;
  }
  DEFAULT_VOLUME = v19->static_fields->DEFAULT_VOLUME;
  v21 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)v8, Method_TitleInfoEventDailyPoint_EndPlayVoice__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v22 = (System_Int32_array **)SoundManager__playVoice_23788136(v18, voiceName, DEFAULT_VOLUME, v21, 0LL);
  v8->fields.voicePlayer = (struct SePlayer_o *)v22;
  p_voicePlayer = (BattleServantConfConponent_o *)&v8->fields.voicePlayer;
  sub_B52920(p_voicePlayer, v22, v24, v25, v26, v27, v28, v29);
  ++p_voicePlayer->fields.m_CachedPtr;
}


void __fastcall TitleInfoEventDailyPoint__StartVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  TitleInfoEventDailyPoint_o *v2; // x19
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Random_o *v4; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *v5; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *v6; // x21
  ServantVoiceData_array *v7; // x8

  v2 = this;
  if ( (byte_42B43F5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this = (TitleInfoEventDailyPoint_o *)sub_B52984(&System_Random_TypeInfo);
    byte_42B43F5 = 1;
  }
  voiceList = v2->fields.voiceList;
  if ( !voiceList )
    goto LABEL_13;
  if ( voiceList->fields._size )
  {
    v4 = (System_Random_o *)sub_B52A54(System_Random_TypeInfo);
    System_Random___ctor(v4, 0LL);
    v5 = v2->fields.voiceList;
    if ( v5 )
    {
      if ( v4 )
      {
        this = (TitleInfoEventDailyPoint_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v4->klass->vtable._7_Next.method)(
                                               v4,
                                               (unsigned int)v5->fields._size,
                                               v4->klass->vtable._8_NextDouble.methodPtr);
        v6 = v2->fields.voiceList;
        v2->fields.selectVoiceIndex = (int)this;
        if ( v6 )
        {
          if ( v6->fields._size <= (unsigned int)this )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v7 = v6->fields._items->m_Items[(int)this];
          if ( v7 )
          {
            *(_QWORD *)&v2->fields.maxPlayCnt = (unsigned int)*(_QWORD *)&v7->max_length;
            TitleInfoEventDailyPoint__PlayVoice(v2, method);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_B52A5C(this, method);
  }
}


void __fastcall TitleInfoEventDailyPoint__Update(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_42B43F8 & 1) == 0 )
  {
    sub_B52984(&CTouch_TypeInfo);
    byte_42B43F8 = 1;
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
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  struct EventPointBehavior_o *eventPointBehavior; // x8
  struct EventPointBehavior_o *v7; // x8
  System_String_o *topImg; // x20
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v10; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v12; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *v16; // x20
  System_String_o *v17; // x0

  if ( (byte_42B43FB & 1) == 0 )
  {
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_B52984(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_13148/*"StartVoice"*/);
    byte_42B43FB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v5 )
    goto LABEL_44;
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13148/*"StartVoice"*/,
    this->fields.voiceStartTime,
    0LL);
  eventPointBehavior = this->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_44;
  if ( eventPointBehavior->fields.bgmId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_44;
    Instance = (CommonUI_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_BgmMaster___);
    v7 = this->fields.eventPointBehavior;
    if ( !v7 )
      goto LABEL_44;
    if ( !Instance )
      goto LABEL_44;
    Instance = (CommonUI_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                               v7->fields.bgmId,
                               (const MethodInfo_23E22D8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
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
    v10 = this->fields.simpleAnimation;
    if ( !v10 )
      goto LABEL_44;
    monitor = (UnityEngine_Object_o *)v10[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v12 = this->fields.simpleAnimation;
      if ( v12 )
      {
        Instance = (CommonUI_o *)v12[1].monitor;
        if ( Instance )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
          SimpleAnimation__Play_16625408(v12, name, 0LL);
          goto LABEL_43;
        }
      }
LABEL_44:
      sub_B52A5C(Instance, v4);
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
        v16 = this->fields.animation;
        if ( v16 )
        {
          Instance = (CommonUI_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0LL);
          if ( Instance )
          {
            v17 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
            UnityEngine_Animation__Play_51067744(v16, v17, 0LL);
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