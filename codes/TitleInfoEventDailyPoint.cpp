void TitleInfoEventDailyPoint___ctor(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void TitleInfoEventDailyPoint__Close(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *voiceName; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct System_String_o **p_voiceAssetName; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_String_o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct System_Action_o **p_endCallback; // x19
  System_Action_o *v27; // x20
  struct System_Action_o *endCallback; // t1

  if ( (byte_4D2F1A9 & 1) == 0 )
  {
    sub_1C93AD4(&SoundManager_TypeInfo);
    byte_4D2F1A9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  if ( this->fields.voicePlayer )
  {
    voiceName = this->fields.voiceName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoice_42249956(voiceName, 0.0, 0);
    this->fields.voicePlayer = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.voicePlayer, 0, v6, v7, v8, v9, v10, v11);
  }
  p_voiceAssetName = &this->fields.voiceAssetName;
  if ( !System_String__IsNullOrEmpty(this->fields.voiceAssetName, 0) )
  {
    v19 = *p_voiceAssetName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(v19, 0);
    *p_voiceAssetName = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.voiceAssetName, 0, v20, v21, v22, v23, v24, v25);
  }
  endCallback = this->fields.endCallback;
  p_endCallback = &this->fields.endCallback;
  v27 = endCallback;
  p_endCallback[7] = 0;
  *((_DWORD *)p_endCallback + 16) = 0;
  if ( endCallback )
  {
    *p_endCallback = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)p_endCallback, 0, v13, v14, v15, v16, v17, v18);
    ActionExtensions__Call(v27, 0);
  }
}


void TitleInfoEventDailyPoint__EndPlayVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *voiceList; // x0
  __int64 playCnt; // x8
  __int64 v5; // x8

  if ( (byte_4D2F1A6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C93AD4(&StringLiteral_10753/*"PlayVoice"*/);
    byte_4D2F1A6 = 1;
  }
  if ( this->fields.playCnt < this->fields.maxPlayCnt )
  {
    voiceList = (System_Collections_Generic_List_object__o *)this->fields.voiceList;
    if ( voiceList )
    {
      voiceList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 voiceList,
                                                                 this->fields.selectVoiceIndex,
                                                                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
      if ( voiceList )
      {
        playCnt = this->fields.playCnt;
        if ( (unsigned int)playCnt >= voiceList->fields._size )
          sub_1C93D34(voiceList);
        v5 = *((_QWORD *)&voiceList->fields._syncRoot + playCnt);
        if ( v5 )
        {
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_10753/*"PlayVoice"*/,
            *(float *)(v5 + 24),
            0);
          return;
        }
      }
    }
LABEL_12:
    sub_1C93D2C(voiceList, method);
  }
  voiceList = (System_Collections_Generic_List_object__o *)this->fields.screenTouchInfo;
  if ( !voiceList )
    goto LABEL_12;
  voiceList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)voiceList,
                                                             0);
  if ( !voiceList )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)voiceList, 1, 0);
  this->fields.state = 2;
}


void TitleInfoEventDailyPoint__OnLoadSvtVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  TitleInfoEventDailyPoint_o *v2; // x19
  struct EventPointBehavior_o *eventPointBehavior; // x8
  System_Collections_Generic_List_object__o *v4; // x20
  struct EventPointBehavior_o *v5; // x8
  struct System_String_array *voiceIds; // x8
  TitleInfoEventDailyPoint_o *v7; // x22
  il2cpp_array_size_t max_length; // x25
  System_Collections_Generic_List_object__o *v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  unsigned __int64 v16; // x23
  struct EventPointBehavior_o *v17; // x8
  struct System_String_array *v18; // x9
  int size; // w25
  TitleInfoEventDailyPoint_o *v20; // x22
  int32_t v21; // w23
  struct ItemIconComponent_o *itemIcon; // x8
  struct EventPointBehavior_o *v23; // x9
  System_Collections_Generic_List_object__o *voiceList; // x24
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  TitleInfoEventDailyPoint_o *v34; // x1
  Il2CppClass **v35; // x0
  struct EventPointBehavior_o *v36; // x8
  System_String_o *VoiceAssetName_43508840; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  System_String_o *voiceAssetName; // x20
  System_Action_o *v45; // x21

  v2 = this;
  if ( (byte_4D2F1A3 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&SoundManager_TypeInfo);
    this = (TitleInfoEventDailyPoint_o *)sub_1C93AD4(&Method_TitleInfoEventDailyPoint__OnLoadSvtVoice_b__26_0__);
    byte_4D2F1A3 = 1;
  }
  eventPointBehavior = v2->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_39;
  if ( eventPointBehavior->fields.voiceIds )
  {
    v4 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v4,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    this = (TitleInfoEventDailyPoint_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_39;
    this = (TitleInfoEventDailyPoint_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
    v5 = v2->fields.eventPointBehavior;
    if ( !v5 )
      goto LABEL_39;
    voiceIds = v5->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_39;
    v7 = this;
    max_length = voiceIds->max_length;
    v9 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    v2->fields.voiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v9;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.voiceList, (int32_t)v9, v10, v11, v12, v13, v14, v15);
    if ( (int)max_length >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        v17 = v2->fields.eventPointBehavior;
        if ( !v17 )
          break;
        v18 = v17->fields.voiceIds;
        if ( !v18 )
          break;
        if ( v16 >= LODWORD(v18->max_length) )
LABEL_40:
          sub_1C93D34(this);
        if ( !v7 )
          break;
        this = (TitleInfoEventDailyPoint_o *)ServantVoiceMaster__getEntity_43529260(
                                               (ServantVoiceMaster_o *)v7,
                                               16,
                                               v17->fields.svtId,
                                               v17->fields.limitCount,
                                               v18->m_Items[v16],
                                               0);
        if ( this )
        {
          if ( !v4 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v4,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
        }
        if ( (unsigned int)max_length == ++v16 )
          goto LABEL_18;
      }
LABEL_39:
      sub_1C93D2C(this, method);
    }
LABEL_18:
    this = (TitleInfoEventDailyPoint_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_39;
    this = (TitleInfoEventDailyPoint_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !v4 )
      goto LABEL_39;
    size = v4->fields._size;
    if ( size >= 1 )
    {
      v20 = this;
      v21 = 0;
      do
      {
        this = (TitleInfoEventDailyPoint_o *)System_Collections_Generic_List_object___get_Item(
                                               v4,
                                               v21,
                                               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
        if ( !this )
          goto LABEL_39;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_40;
        itemIcon = this->fields.itemIcon;
        if ( !itemIcon )
          goto LABEL_39;
        v23 = v2->fields.eventPointBehavior;
        if ( !v23 || !v20 )
          goto LABEL_39;
        this = (TitleInfoEventDailyPoint_o *)VoicePlayCondMaster__isVoicePlay(
                                               (VoicePlayCondMaster_o *)v20,
                                               v23->fields.svtId,
                                               (System_String_o *)itemIcon->fields.m_CachedPtr,
                                               0,
                                               -1,
                                               -1,
                                               0,
                                               0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          voiceList = (System_Collections_Generic_List_object__o *)v2->fields.voiceList;
          this = (TitleInfoEventDailyPoint_o *)System_Collections_Generic_List_object___get_Item(
                                                 v4,
                                                 v21,
                                                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
          if ( !voiceList )
            goto LABEL_39;
          items = voiceList->fields._items;
          v32 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          ++voiceList->fields._version;
          if ( !items )
            goto LABEL_39;
          v33 = voiceList->fields._size;
          v34 = this;
          if ( (unsigned int)v33 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              voiceList,
              (Il2CppObject *)this,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v35 = &items->obj.klass + v33;
            voiceList->fields._size = v33 + 1;
            v35[4] = (Il2CppClass *)v34;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)v34, v25, v26, v27, v28, v29, v30);
          }
        }
      }
      while ( size != ++v21 );
    }
    v36 = v2->fields.eventPointBehavior;
    if ( !v36 )
      goto LABEL_39;
    VoiceAssetName_43508840 = ServantVoiceEntity__getVoiceAssetName_43508840(v36->fields.svtId, 0);
    v2->fields.voiceAssetName = VoiceAssetName_43508840;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v2->fields.voiceAssetName,
      (int32_t)VoiceAssetName_43508840,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    voiceAssetName = v2->fields.voiceAssetName;
    v45 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v45, (Il2CppObject *)v2, Method_TitleInfoEventDailyPoint__OnLoadSvtVoice_b__26_0__, 0);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage(voiceAssetName, v45, 1, 0);
  }
}


void TitleInfoEventDailyPoint__OnTouchDisp(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *screenTouchInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21

  if ( (byte_4D2F1A8 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_TitleInfoEventDailyPoint_OnTouchDisp__);
    sub_1C93AD4(&Method_TitleInfoEventDailyPoint__OnTouchDisp_b__31_0__);
    byte_4D2F1A8 = 1;
  }
  screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
  if ( !screenTouchInfo )
    goto LABEL_11;
  screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0);
  if ( !screenTouchInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0);
  v4 = Method_TitleInfoEventDailyPoint_OnTouchDisp__;
  if ( (*((_BYTE *)Method_TitleInfoEventDailyPoint_OnTouchDisp__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C93AEC(Method_TitleInfoEventDailyPoint_OnTouchDisp__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_TitleInfoEventDailyPoint__OnTouchDisp_b__31_0__, 0);
  if ( !v8 )
LABEL_11:
    sub_1C93D2C(screenTouchInfo, method);
  CommonUI__maskFadeout(v8, 2, DEFAULT_FADE_TIME, v10, 0);
  this->fields.state = 0;
}


void TitleInfoEventDailyPoint__Open(
        TitleInfoEventDailyPoint_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v10; // x0
  struct EventDailyPoint_o *eventDailyPoint_k__BackingField; // x1
  struct EventDailyPoint_o **p_eventDailyPoint; // x20
  __int64 *transform; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct EventPointBehavior_array *eventPointBehavior; // x8
  struct EventPointBehavior_o *v22; // x1
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  Il2CppObject *Instance; // x23
  Il2CppObject *Component_object; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct EventPointBehavior_o *v39; // x8
  Il2CppObject *v40; // x0
  System_String_o *v41; // x0
  UnityEngine_Object_o *simpleAnimation; // x22
  System_String_o *v43; // x21
  __int64 v44; // x8
  void *v45; // x21
  __int64 v46; // x9
  SimpleAnimation_State_c **v47; // x10
  __int64 v48; // x0
  UnityEngine_Object_o *animation; // x22
  ItemIconComponent_o *itemIcon; // x21
  int32_t eventDailyPoint; // w20
  System_String_o *v52; // x20
  float LocalPositionX; // s0
  UnityEngine_GameObject_o *pointRoot; // x0
  struct UILabel_o *pointLabel; // x8
  float v56; // s0
  float v57; // s8
  int v58; // w20
  float LocalScaleX; // s9
  float v60; // s0
  float v61; // s10
  const MethodInfo *v62; // x1
  int32_t effectId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4D2F1A2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&SimpleAnimation_State_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_17323/*"bit_dedicate_reward_"*/);
    byte_4D2F1A2 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2F1DF )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2F1DF = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  eventDailyPoint_k__BackingField = v10->static_fields->_eventDailyPoint_k__BackingField;
  this->fields.eventDailyPoint = eventDailyPoint_k__BackingField;
  p_eventDailyPoint = &this->fields.eventDailyPoint;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventDailyPoint,
    (int32_t)eventDailyPoint_k__BackingField,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !this->fields.eventDailyPoint )
  {
    ActionExtensions__Call(callback, 0);
    return;
  }
  eventPointBehavior = this->fields.eventDailyPoint->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_64;
  if ( !LODWORD(eventPointBehavior->max_length) )
    sub_1C93D34(transform);
  v22 = eventPointBehavior->m_Items[0];
  this->fields.eventPointBehavior = v22;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventPointBehavior,
    (int32_t)v22,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = (__int64 *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !Instance )
      goto LABEL_64;
    transform = (__int64 *)CommonUI__CreateScreeenTouchInfo(
                             (CommonUI_o *)Instance,
                             (UnityEngine_Transform_o *)transform,
                             0,
                             0);
    if ( !transform )
      goto LABEL_64;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.screenTouchInfo,
      (int32_t)Component_object,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  transform = (__int64 *)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_64;
  transform = (__int64 *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  transform = (__int64 *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
  this->fields.endCallback = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.endCallback, (int32_t)callback, v33, v34, v35, v36, v37, v38);
  v39 = this->fields.eventPointBehavior;
  this->fields.state = 0;
  if ( !v39 )
    goto LABEL_64;
  effectId = v39->fields.effectId;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId);
  v41 = System_String__Concat((Il2CppObject *)StringLiteral_17323/*"bit_dedicate_reward_"*/, v40, 0);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  v43 = v41;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0) )
  {
    transform = (__int64 *)this->fields.simpleAnimation;
    if ( transform )
    {
      transform = (__int64 *)SimpleAnimation__get_Item((SimpleAnimation_o *)transform, v43, 0);
      if ( transform )
      {
        v44 = *transform;
        v45 = transform;
        v46 = *(unsigned __int16 *)(*transform + 302);
        if ( *(_WORD *)(*transform + 302) )
        {
          v47 = (SimpleAnimation_State_c **)(*(_QWORD *)(v44 + 176) + 8LL);
          while ( *(v47 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v46;
            v47 += 2;
            if ( !v46 )
              goto LABEL_31;
          }
          v48 = v44 + 16LL * (*(_DWORD *)v47 + 14) + 312;
        }
        else
        {
LABEL_31:
          v48 = sub_1C69E5C(transform, SimpleAnimation_State_TypeInfo, 14);
        }
        transform = (__int64 *)(*(__int64 (__fastcall **)(void *, _QWORD))v48)(v45, *(_QWORD *)(v48 + 8));
        if ( this->fields.simpleAnimation )
        {
          SimpleAnimation__set_clip(this->fields.simpleAnimation, (UnityEngine_AnimationClip_o *)transform, 0);
          transform = (__int64 *)this->fields.simpleAnimation;
          if ( transform )
          {
LABEL_43:
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 0, 0);
            goto LABEL_44;
          }
        }
      }
    }
LABEL_64:
    sub_1C93D2C(transform, v14);
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animation, 0, 0) )
  {
    transform = (__int64 *)this->fields.animation;
    if ( !transform )
      goto LABEL_64;
    transform = (__int64 *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)transform, v43, 0);
    if ( !this->fields.animation )
      goto LABEL_64;
    UnityEngine_Animation__set_clip(this->fields.animation, (UnityEngine_AnimationClip_o *)transform, 0);
    transform = (__int64 *)this->fields.animation;
    if ( !transform )
      goto LABEL_64;
    goto LABEL_43;
  }
LABEL_44:
  itemIcon = this->fields.itemIcon;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2F1E0 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2F1E0 = 1;
  }
  transform = (__int64 *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    transform = (__int64 *)TerminalPramsManager_TypeInfo;
  }
  if ( !itemIcon )
    goto LABEL_64;
  ItemIconComponent__SetItem(itemIcon, *(_DWORD *)(transform[23] + 360), -1, 1, 0);
  if ( !*p_eventDailyPoint )
    goto LABEL_64;
  eventDailyPoint = (*p_eventDailyPoint)->fields.eventDailyPoint;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transform = (__int64 *)LocalizationManager__GetNumberFormat(eventDailyPoint, 0);
  if ( !this->fields.satisfyLabel )
    goto LABEL_64;
  v52 = (System_String_o *)transform;
  UILabel__set_text(this->fields.satisfyLabel, (System_String_o *)transform, 0);
  transform = (__int64 *)this->fields.pointLabel;
  if ( !transform )
    goto LABEL_64;
  UILabel__set_text((UILabel_o *)transform, v52, 0);
  if ( !this->fields.initPosFlag )
  {
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(this->fields.pointLabelRight, 0);
    pointRoot = this->fields.pointRoot;
    this->fields.pointLabelRightInitPosX = LocalPositionX;
    this->fields.pointRootInitPosX = GameObjectExtensions__GetLocalPositionX(pointRoot, 0);
    this->fields.initPosFlag = 1;
  }
  pointLabel = this->fields.pointLabel;
  if ( !pointLabel )
    goto LABEL_64;
  GameObjectExtensions__SetLocalPositionX(
    this->fields.pointLabelRight,
    this->fields.pointLabelRightInitPosX + (float)pointLabel->fields.mWidth,
    0);
  v56 = GameObjectExtensions__GetLocalPositionX(this->fields.pointLabelLeft, 0);
  transform = (__int64 *)this->fields.pointLabelLeft;
  if ( !transform )
    goto LABEL_64;
  v57 = v56;
  transform = (__int64 *)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)transform,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !transform )
    goto LABEL_64;
  v58 = *((_DWORD *)transform + 42);
  LocalScaleX = GameObjectExtensions__GetLocalScaleX(this->fields.pointLabelLeft, 0);
  v60 = GameObjectExtensions__GetLocalPositionX(this->fields.pointLabelRight, 0);
  transform = (__int64 *)this->fields.pointLabelRight;
  if ( !transform )
    goto LABEL_64;
  v61 = v60;
  transform = (__int64 *)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)transform,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !transform )
    goto LABEL_64;
  GameObjectExtensions__SetLocalPositionX(
    this->fields.pointRoot,
    this->fields.pointRootInitPosX
  + (float)((float)((float)(v57 - (float)(LocalScaleX * (float)v58)) + (float)(v61 + (float)*((int *)transform + 42)))
          * -0.5),
    0);
  TitleInfoEventDailyPoint__OnLoadSvtVoice(this, v62);
}


void TitleInfoEventDailyPoint__PlayVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *voiceList; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  __int64 playCnt; // x8
  __int64 v11; // x8
  struct System_String_o *v12; // x1
  struct EventPointBehavior_o *eventPointBehavior; // x8
  System_String_o *VoiceAssetName_43508840; // x0
  SeManager_c *v15; // x8
  System_String_o *voiceName; // x20
  System_String_o *v17; // x21
  float DEFAULT_VOLUME; // s8
  System_Action_o *v19; // x22
  struct SePlayer_o *v20; // x0
  GrandQuestFolderBoardItem_o *p_voicePlayer; // x19
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4D2F1A5 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C93AD4(&SeManager_TypeInfo);
    sub_1C93AD4(&SoundManager_TypeInfo);
    sub_1C93AD4(&Method_TitleInfoEventDailyPoint_EndPlayVoice__);
    byte_4D2F1A5 = 1;
  }
  voiceList = (System_Collections_Generic_List_object__o *)this->fields.voiceList;
  if ( !voiceList )
    goto LABEL_13;
  voiceList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             voiceList,
                                                             this->fields.selectVoiceIndex,
                                                             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  if ( !voiceList )
    goto LABEL_13;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= voiceList->fields._size )
    sub_1C93D34(voiceList);
  v11 = *((_QWORD *)&voiceList->fields._syncRoot + playCnt);
  if ( !v11
    || (v12 = *(struct System_String_o **)(v11 + 16),
        this->fields.voiceName = v12,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.voiceName, (int32_t)v12, v4, v5, v6, v7, v8, v9),
        (eventPointBehavior = this->fields.eventPointBehavior) == 0) )
  {
LABEL_13:
    sub_1C93D2C(voiceList, method);
  }
  VoiceAssetName_43508840 = ServantVoiceEntity__getVoiceAssetName_43508840(eventPointBehavior->fields.svtId, 0);
  v15 = SeManager_TypeInfo;
  voiceName = this->fields.voiceName;
  v17 = VoiceAssetName_43508840;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v15 = SeManager_TypeInfo;
  }
  DEFAULT_VOLUME = v15->static_fields->DEFAULT_VOLUME;
  v19 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_TitleInfoEventDailyPoint_EndPlayVoice__, 0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v20 = SoundManager__playVoice_42249560(v17, voiceName, DEFAULT_VOLUME, v19, 0, 0);
  this->fields.voicePlayer = v20;
  p_voicePlayer = (GrandQuestFolderBoardItem_o *)&this->fields.voicePlayer;
  sub_1C93A78(p_voicePlayer, (int32_t)v20, v22, v23, v24, v25, v26, v27);
  ++p_voicePlayer->fields.selectNum;
}


void TitleInfoEventDailyPoint__StartVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  TitleInfoEventDailyPoint_o *v2; // x19
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Random_o *v4; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *v5; // x8
  System_Collections_Generic_List_object__o *v6; // x8

  v2 = this;
  if ( (byte_4D2F1A4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this = (TitleInfoEventDailyPoint_o *)sub_1C93AD4(&System_Random_TypeInfo);
    byte_4D2F1A4 = 1;
  }
  voiceList = v2->fields.voiceList;
  if ( !voiceList )
    goto LABEL_11;
  if ( voiceList->fields._size )
  {
    v4 = (System_Random_o *)sub_1C93D20(System_Random_TypeInfo);
    System_Random___ctor(v4, 0);
    v5 = v2->fields.voiceList;
    if ( v5 )
    {
      if ( v4 )
      {
        this = (TitleInfoEventDailyPoint_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v4->klass->vtable._7_Next.methodPtr)(
                                               v4,
                                               (unsigned int)v5->fields._size,
                                               v4->klass->vtable._7_Next.method);
        v6 = (System_Collections_Generic_List_object__o *)v2->fields.voiceList;
        v2->fields.selectVoiceIndex = (int)this;
        if ( v6 )
        {
          this = (TitleInfoEventDailyPoint_o *)System_Collections_Generic_List_object___get_Item(
                                                 v6,
                                                 (int32_t)this,
                                                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
          if ( this )
          {
            *(_QWORD *)&v2->fields.maxPlayCnt = (unsigned int)this->fields.m_CancellationTokenSource;
            TitleInfoEventDailyPoint__PlayVoice(v2, method);
            return;
          }
        }
      }
    }
LABEL_11:
    sub_1C93D2C(this, method);
  }
}


void TitleInfoEventDailyPoint__Update(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4D2F1A7 & 1) == 0 )
  {
    sub_1C93AD4(&CTouch_TypeInfo);
    byte_4D2F1A7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( CTouch__isTouchPush(0) )
      TitleInfoEventDailyPoint__OnTouchDisp(this, v3);
  }
}


void TitleInfoEventDailyPoint___OnLoadSvtVoice_b__26_0(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  struct EventPointBehavior_o *eventPointBehavior; // x8
  struct EventPointBehavior_o *v7; // x8
  System_String_o *m_CancellationTokenSource; // x20
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v10; // x8
  UnityEngine_Object_o *m_Clip; // x20
  struct SimpleAnimation_o *v12; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *v16; // x20
  System_String_o *v17; // x0

  if ( (byte_4D2F1AA & 1) == 0 )
  {
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C93AD4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&SoundManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_13158/*"StartVoice"*/);
    byte_4D2F1AA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5 )
    goto LABEL_38;
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13158/*"StartVoice"*/,
    this->fields.voiceStartTime,
    0);
  eventPointBehavior = this->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_38;
  if ( eventPointBehavior->fields.bgmId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    Instance = (CommonUI_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_BgmMaster___);
    v7 = this->fields.eventPointBehavior;
    if ( !v7 )
      goto LABEL_38;
    if ( !Instance )
      goto LABEL_38;
    Instance = (CommonUI_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               v7->fields.bgmId,
                               (const MethodInfo_3463274 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_38;
    m_CancellationTokenSource = (System_String_o *)Instance->fields.m_CancellationTokenSource;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm(m_CancellationTokenSource, 0);
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0) )
  {
    Instance = (CommonUI_o *)this->fields.simpleAnimation;
    if ( !Instance )
      goto LABEL_38;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
    v10 = this->fields.simpleAnimation;
    if ( !v10 )
      goto LABEL_38;
    m_Clip = (UnityEngine_Object_o *)v10->fields.m_Clip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(m_Clip, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v12 = this->fields.simpleAnimation;
      if ( v12 )
      {
        Instance = (CommonUI_o *)v12->fields.m_Clip;
        if ( Instance )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0);
          SimpleAnimation__Play_67370764(v12, name, 0);
          goto LABEL_37;
        }
      }
LABEL_38:
      sub_1C93D2C(Instance, v4);
    }
  }
  else
  {
    animation = (UnityEngine_Object_o *)this->fields.animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(animation, 0, 0) )
    {
      Instance = (CommonUI_o *)this->fields.animation;
      if ( !Instance )
        goto LABEL_38;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
      Instance = (CommonUI_o *)this->fields.animation;
      if ( !Instance )
        goto LABEL_38;
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)Instance, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(clip, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        v16 = this->fields.animation;
        if ( v16 )
        {
          Instance = (CommonUI_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0);
          if ( Instance )
          {
            v17 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0);
            UnityEngine_Animation__Play_71862428(v16, v17, 0);
            goto LABEL_37;
          }
        }
        goto LABEL_38;
      }
    }
  }
LABEL_37:
  this->fields.state = 1;
}