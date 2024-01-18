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

  if ( (byte_418B9DB & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B9DB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( this->fields.voicePlayer )
  {
    voiceName = this->fields.voiceName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopVoice_24812896(voiceName, 0.0, 0LL);
    this->fields.voicePlayer = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.voicePlayer, 0LL, v6, v7, v8, v9, v10, v11);
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.voiceAssetName, 0LL, v20, v21, v22, v23, v24, v25);
  }
  endCallback = this->fields.endCallback;
  p_endCallback = &this->fields.endCallback;
  v27 = endCallback;
  p_endCallback[7] = 0LL;
  *((_DWORD *)p_endCallback + 16) = 0;
  if ( endCallback )
  {
    *p_endCallback = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)p_endCallback, 0LL, v13, v14, v15, v16, v17, v18);
    ActionExtensions__Call(v27, 0LL);
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
  if ( (byte_418B9D8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, method);
    this = (TitleInfoEventDailyPoint_o *)sub_B2C35C(&StringLiteral_10695/*"PlayVoice"*/, v3);
    byte_418B9D8 = 1;
  }
  playCnt = v2->fields.playCnt;
  if ( playCnt < v2->fields.maxPlayCnt )
  {
    voiceList = v2->fields.voiceList;
    if ( voiceList )
    {
      selectVoiceIndex = v2->fields.selectVoiceIndex;
      if ( voiceList->fields._size <= (unsigned int)selectVoiceIndex )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v7 = voiceList->fields._items->m_Items[selectVoiceIndex];
      if ( v7 )
      {
        if ( playCnt >= v7->max_length )
        {
          v9 = sub_B2C460(this);
          sub_B2C400(v9, 0LL);
        }
        v8 = v7->m_Items[playCnt];
        if ( v8 )
        {
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)v2,
            (System_String_o *)StringLiteral_10695/*"PlayVoice"*/,
            v8->fields.delay,
            0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B2C434(this, method);
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
  __int64 v3; // x1
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
  struct EventPointBehavior_o *v17; // x8
  struct System_String_array *voiceIds; // x8
  TitleInfoEventDailyPoint_o *v19; // x22
  __int64 v20; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  unsigned __int64 v28; // x23
  struct EventPointBehavior_o *v29; // x8
  struct System_String_array *v30; // x9
  int size; // w24
  TitleInfoEventDailyPoint_o *v32; // x22
  __int64 v33; // x25
  unsigned int v34; // w8
  __int64 v35; // x8
  __int64 v36; // x8
  struct EventPointBehavior_o *v37; // x9
  struct EventPointBehavior_o *v38; // x8
  int32_t svtId; // w20
  System_Int32_array **VoiceAssetName_31404932; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_o *voiceAssetName; // x20
  System_Action_o *v48; // x21
  __int64 v49; // x0

  v2 = this;
  if ( (byte_418B9D5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____AddRange__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v9);
    sub_B2C35C(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v10);
    sub_B2C35C(&ServantVoiceEntity_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&SoundManager_TypeInfo, v13);
    this = (TitleInfoEventDailyPoint_o *)sub_B2C35C(&Method_TitleInfoEventDailyPoint__OnLoadSvtVoice_b__26_0__, v14);
    byte_418B9D5 = 1;
  }
  eventPointBehavior = v2->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_45;
  if ( eventPointBehavior->fields.voiceIds )
  {
    v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v16,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    this = (TitleInfoEventDailyPoint_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_45;
    this = (TitleInfoEventDailyPoint_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
    v17 = v2->fields.eventPointBehavior;
    if ( !v17 )
      goto LABEL_45;
    voiceIds = v17->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_45;
    v19 = this;
    v20 = *(_QWORD *)&voiceIds->max_length;
    v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v21,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    v2->fields.voiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v21;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v2->fields.voiceList,
      (System_Int32_array **)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    if ( (int)v20 >= 1 )
    {
      v28 = 0LL;
      while ( 1 )
      {
        v29 = v2->fields.eventPointBehavior;
        if ( !v29 )
          break;
        v30 = v29->fields.voiceIds;
        if ( !v30 )
          break;
        if ( v28 >= v30->max_length )
        {
LABEL_46:
          v49 = sub_B2C460(this);
          sub_B2C400(v49, 0LL);
        }
        if ( !v19 )
          break;
        this = (TitleInfoEventDailyPoint_o *)ServantVoiceMaster__getEntity_31426160(
                                               (ServantVoiceMaster_o *)v19,
                                               16,
                                               v29->fields.svtId,
                                               v29->fields.limitCount,
                                               v30->m_Items[v28],
                                               0LL);
        if ( this )
        {
          if ( !v16 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v16,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
        }
        if ( (__int64)++v28 >= (int)v20 )
          goto LABEL_18;
      }
LABEL_45:
      sub_B2C434(this, method);
    }
LABEL_18:
    this = (TitleInfoEventDailyPoint_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_45;
    this = (TitleInfoEventDailyPoint_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !v16 )
      goto LABEL_45;
    size = v16->fields._size;
    if ( size >= 1 )
    {
      v32 = this;
      v33 = 4LL;
      v34 = v16->fields._size;
      while ( 1 )
      {
        if ( v34 <= (int)v33 - 4 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v35 = *((_QWORD *)&v16->fields._items->obj.klass + v33);
        if ( !v35 )
          goto LABEL_45;
        if ( !*(_DWORD *)(v35 + 24) )
          goto LABEL_46;
        v36 = *(_QWORD *)(v35 + 32);
        if ( !v36 )
          goto LABEL_45;
        v37 = v2->fields.eventPointBehavior;
        if ( !v37 || !v32 )
          goto LABEL_45;
        this = (TitleInfoEventDailyPoint_o *)VoicePlayCondMaster__isVoicePlay(
                                               (VoicePlayCondMaster_o *)v32,
                                               v37->fields.svtId,
                                               *(System_String_o **)(v36 + 16),
                                               0LL,
                                               -1LL,
                                               -1,
                                               0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( v16->fields._size <= (unsigned int)(v33 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          if ( !v2->fields.voiceList )
            goto LABEL_45;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v2->fields.voiceList,
            *((EventMissionProgressRequest_Argument_ProgressData_o **)&v16->fields._items->obj.klass + v33),
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
        }
        if ( (int)v33 - 3 >= size )
          break;
        v34 = v16->fields._size;
        ++v33;
      }
    }
    v38 = v2->fields.eventPointBehavior;
    if ( !v38 )
      goto LABEL_45;
    svtId = v38->fields.svtId;
    if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
    }
    VoiceAssetName_31404932 = (System_Int32_array **)ServantVoiceEntity__getVoiceAssetName_31404932(svtId, 0LL);
    v2->fields.voiceAssetName = (struct System_String_o *)VoiceAssetName_31404932;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v2->fields.voiceAssetName,
      VoiceAssetName_31404932,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    voiceAssetName = v2->fields.voiceAssetName;
    v48 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v48, (Il2CppObject *)v2, Method_TitleInfoEventDailyPoint__OnLoadSvtVoice_b__26_0__, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__loadAudioAssetStorage(voiceAssetName, v48, 1, 0LL);
  }
}


void __fastcall TitleInfoEventDailyPoint__OnTouchDisp(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *screenTouchInfo; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21

  if ( (byte_418B9DA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    sub_B2C35C(&Method_TitleInfoEventDailyPoint__OnTouchDisp_b__31_0__, v6);
    byte_418B9DA = 1;
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_TitleInfoEventDailyPoint__OnTouchDisp_b__31_0__, 0LL);
  if ( !Instance )
LABEL_13:
    sub_B2C434(screenTouchInfo, method);
  CommonUI__maskFadeout(Instance, 2, DEFAULT_FADE_TIME, v11, 0LL);
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
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct EventPointBehavior_array *eventPointBehavior; // x8
  struct EventPointBehavior_o *v31; // x1
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  CommonUI_o *Instance; // x23
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct EventPointBehavior_o *v48; // x8
  Il2CppObject *v49; // x0
  System_String_o *v50; // x0
  UnityEngine_Object_o *simpleAnimation; // x22
  System_String_o *v52; // x21
  __int64 v53; // x3
  UnityEngine_Transform_c *klass; // x8
  UnityEngine_Transform_o *v55; // x21
  unsigned __int64 v56; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v58; // x0
  UnityEngine_Object_o *animation; // x22
  ItemIconComponent_o *itemIcon; // x21
  int32_t eventDailyPoint; // w20
  System_String_o *v62; // x20
  float LocalPositionX; // s0
  UnityEngine_GameObject_o *pointRoot; // x0
  struct UILabel_o *pointLabel; // x8
  float v66; // s0
  float v67; // s8
  int m_CachedPtr; // w20
  float LocalScaleX; // s9
  float v70; // s0
  float v71; // s10
  const MethodInfo *v72; // x1
  __int64 v73; // x0
  int32_t effectId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_418B9D4 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, callback);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v11);
    sub_B2C35C(&int_TypeInfo, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v16);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v17);
    sub_B2C35C(&StringLiteral_16752/*"bit_dedicate_reward_"*/, v18);
    byte_418B9D4 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184DBD )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, callback);
    byte_4184DBD = 1;
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
  sub_B2C2F8(
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
    v73 = sub_B2C460(transform);
    sub_B2C400(v73, 0LL);
  }
  v31 = eventPointBehavior->m_Items[0];
  this->fields.eventPointBehavior = v31;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventPointBehavior,
    (System_Int32_array **)v31,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_72;
    transform = (UnityEngine_Transform_o *)CommonUI__CreateScreeenTouchInfo(Instance, transform, 0, 0LL);
    if ( !transform )
      goto LABEL_72;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       (UnityEngine_GameObject_o *)transform,
                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
      Component_srcLineSprite,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endCallback,
    (System_Int32_array **)callback,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = this->fields.eventPointBehavior;
  this->fields.state = 0;
  if ( !v48 )
    goto LABEL_72;
  effectId = v48->fields.effectId;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId);
  v50 = System_String__Concat((Il2CppObject *)StringLiteral_16752/*"bit_dedicate_reward_"*/, v49, 0LL);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  v52 = v50;
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
      transform = (UnityEngine_Transform_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)transform, v52, 0LL);
      if ( transform )
      {
        klass = transform->klass;
        v55 = transform;
        if ( *(_WORD *)&transform->klass->_2.bitflags1 )
        {
          v56 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v56;
            p_offset += 2;
            if ( v56 >= *(unsigned __int16 *)&transform->klass->_2.bitflags1 )
              goto LABEL_35;
          }
          v58 = (__int64)(&klass[1]._1.methods + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_35:
          v58 = sub_AC5258(transform, SimpleAnimation_State_TypeInfo, 14LL, v53);
        }
        transform = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))v58)(
                                                 v55,
                                                 *(_QWORD *)(v58 + 8));
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
    sub_B2C434(transform, v23);
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
                                             v52,
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
  if ( !byte_418BA53 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v23);
    byte_418BA53 = 1;
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
  v62 = (System_String_o *)transform;
  UILabel__set_text(this->fields.satisfyLabel, (System_String_o *)transform, 0LL);
  transform = (UnityEngine_Transform_o *)this->fields.pointLabel;
  if ( !transform )
    goto LABEL_72;
  UILabel__set_text((UILabel_o *)transform, v62, 0LL);
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
  v66 = GameObjectExtensions__GetLocalPositionX(this->fields.pointLabelLeft, 0LL);
  transform = (UnityEngine_Transform_o *)this->fields.pointLabelLeft;
  if ( !transform )
    goto LABEL_72;
  v67 = v66;
  transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           (UnityEngine_GameObject_o *)transform,
                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !transform )
    goto LABEL_72;
  m_CachedPtr = transform[6].fields.m_CachedPtr;
  LocalScaleX = GameObjectExtensions__GetLocalScaleX(this->fields.pointLabelLeft, 0LL);
  v70 = GameObjectExtensions__GetLocalPositionX(this->fields.pointLabelRight, 0LL);
  transform = (UnityEngine_Transform_o *)this->fields.pointLabelRight;
  if ( !transform )
    goto LABEL_72;
  v71 = v70;
  transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           (UnityEngine_GameObject_o *)transform,
                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !transform )
    goto LABEL_72;
  GameObjectExtensions__SetLocalPositionX(
    this->fields.pointRoot,
    this->fields.pointRootInitPosX
  + (float)((float)((float)(v67 - (float)(LocalScaleX * (float)m_CachedPtr))
                  + (float)(v71 + (float)transform[6].fields.m_CachedPtr))
          * -0.5),
    0LL);
  TitleInfoEventDailyPoint__OnLoadSvtVoice(this, v72);
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
  System_String_o *VoiceAssetName_31404932; // x0
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
  if ( (byte_418B9D7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v9);
    sub_B2C35C(&SeManager_TypeInfo, v10);
    sub_B2C35C(&ServantVoiceEntity_TypeInfo, v11);
    sub_B2C35C(&SoundManager_TypeInfo, v12);
    this = (TitleInfoEventDailyPoint_o *)sub_B2C35C(&Method_TitleInfoEventDailyPoint_EndPlayVoice__, v13);
    byte_418B9D7 = 1;
  }
  voiceList = v8->fields.voiceList;
  if ( !voiceList )
    goto LABEL_20;
  selectVoiceIndex = v8->fields.selectVoiceIndex;
  if ( voiceList->fields._size <= (unsigned int)selectVoiceIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v16 = voiceList->fields._items->m_Items[selectVoiceIndex];
  if ( !v16 )
    goto LABEL_20;
  playCnt = v8->fields.playCnt;
  if ( (unsigned int)playCnt >= v16->max_length )
  {
    v36 = sub_B2C460(this);
    sub_B2C400(v36, 0LL);
  }
  v18 = v16->m_Items[playCnt];
  if ( !v18
    || (id = (System_Int32_array **)v18->fields.id,
        v8->fields.voiceName = (struct System_String_o *)id,
        sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.voiceName, id, v2, v3, v4, v5, v6, v7),
        (eventPointBehavior = v8->fields.eventPointBehavior) == 0LL) )
  {
LABEL_20:
    sub_B2C434(this, method);
  }
  svtId = eventPointBehavior->fields.svtId;
  if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
  }
  VoiceAssetName_31404932 = ServantVoiceEntity__getVoiceAssetName_31404932(svtId, 0LL);
  voiceName = v8->fields.voiceName;
  v24 = VoiceAssetName_31404932;
  v25 = SeManager_TypeInfo;
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v25 = SeManager_TypeInfo;
  }
  DEFAULT_VOLUME = v25->static_fields->DEFAULT_VOLUME;
  v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)v8, Method_TitleInfoEventDailyPoint_EndPlayVoice__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v28 = (System_Int32_array **)SoundManager__playVoice_24786800(v24, voiceName, DEFAULT_VOLUME, v27, 0LL);
  v8->fields.voicePlayer = (struct SePlayer_o *)v28;
  p_voicePlayer = (BattleServantConfConponent_o *)&v8->fields.voicePlayer;
  sub_B2C2F8(p_voicePlayer, v28, v30, v31, v32, v33, v34, v35);
  ++p_voicePlayer->fields.m_CachedPtr;
}


void __fastcall TitleInfoEventDailyPoint__StartVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  TitleInfoEventDailyPoint_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Random_o *v6; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *v7; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *v8; // x21
  ServantVoiceData_array *v9; // x8

  v2 = this;
  if ( (byte_418B9D6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v3);
    this = (TitleInfoEventDailyPoint_o *)sub_B2C35C(&System_Random_TypeInfo, v4);
    byte_418B9D6 = 1;
  }
  voiceList = v2->fields.voiceList;
  if ( !voiceList )
    goto LABEL_13;
  if ( voiceList->fields._size )
  {
    v6 = (System_Random_o *)sub_B2C42C(System_Random_TypeInfo);
    System_Random___ctor(v6, 0LL);
    v7 = v2->fields.voiceList;
    if ( v7 )
    {
      if ( v6 )
      {
        this = (TitleInfoEventDailyPoint_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._7_Next.method)(
                                               v6,
                                               (unsigned int)v7->fields._size,
                                               v6->klass->vtable._8_NextDouble.methodPtr);
        v8 = v2->fields.voiceList;
        v2->fields.selectVoiceIndex = (int)this;
        if ( v8 )
        {
          if ( v8->fields._size <= (unsigned int)this )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v9 = v8->fields._items->m_Items[(int)this];
          if ( v9 )
          {
            *(_QWORD *)&v2->fields.maxPlayCnt = (unsigned int)*(_QWORD *)&v9->max_length;
            TitleInfoEventDailyPoint__PlayVoice(v2, method);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_B2C434(this, method);
  }
}


void __fastcall TitleInfoEventDailyPoint__Update(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_418B9D9 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, method);
    byte_418B9D9 = 1;
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
  __int64 v11; // x1
  CommonUI_o *v12; // x20
  struct EventPointBehavior_o *eventPointBehavior; // x8
  struct EventPointBehavior_o *v14; // x8
  System_String_o *topImg; // x20
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v17; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v19; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *v23; // x20
  System_String_o *v24; // x0

  if ( (byte_418B9DC & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_BgmMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&SoundManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_13051/*"StartVoice"*/, v9);
    byte_418B9DC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v12 )
    goto LABEL_44;
  CommonUI__maskFadein(v12, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13051/*"StartVoice"*/,
    this->fields.voiceStartTime,
    0LL);
  eventPointBehavior = this->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_44;
  if ( eventPointBehavior->fields.bgmId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_44;
    Instance = (CommonUI_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BgmMaster___);
    v14 = this->fields.eventPointBehavior;
    if ( !v14 )
      goto LABEL_44;
    if ( !Instance )
      goto LABEL_44;
    Instance = (CommonUI_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                               v14->fields.bgmId,
                               (const MethodInfo_24E40D0 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
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
    v17 = this->fields.simpleAnimation;
    if ( !v17 )
      goto LABEL_44;
    monitor = (UnityEngine_Object_o *)v17[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v19 = this->fields.simpleAnimation;
      if ( v19 )
      {
        Instance = (CommonUI_o *)v19[1].monitor;
        if ( Instance )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
          SimpleAnimation__Play_16486620(v19, name, 0LL);
          goto LABEL_43;
        }
      }
LABEL_44:
      sub_B2C434(Instance, v11);
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
        v23 = this->fields.animation;
        if ( v23 )
        {
          Instance = (CommonUI_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0LL);
          if ( Instance )
          {
            v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
            UnityEngine_Animation__Play_50201580(v23, v24, 0LL);
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