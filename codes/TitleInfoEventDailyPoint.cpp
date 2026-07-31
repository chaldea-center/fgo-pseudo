void TitleInfoEventDailyPoint___ctor(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void TitleInfoEventDailyPoint__Close(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *voiceName; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_String_o **p_voiceAssetName; // x20
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x21
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Action_o **p_endCallback; // x19
  System_Action_o *v30; // x20
  struct System_Action_o *endCallback; // t1

  if ( (byte_59365B5 & 1) == 0 )
  {
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_59365B5 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  if ( this->fields.voicePlayer )
  {
    voiceName = this->fields.voiceName;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v5, v6);
    SoundManager__stopVoice_48465744(voiceName, 0.0, 0);
    this->fields.voicePlayer = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.voicePlayer, 0, v8, v9, v10, v11, v12, v13);
  }
  p_voiceAssetName = &this->fields.voiceAssetName;
  if ( !System_String__IsNullOrEmpty(this->fields.voiceAssetName, 0) )
  {
    v22 = *p_voiceAssetName;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v15, v16);
    SoundManager__releaseAudioAssetStorage(v22, 0);
    *p_voiceAssetName = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.voiceAssetName, 0, v23, v24, v25, v26, v27, v28);
  }
  endCallback = this->fields.endCallback;
  p_endCallback = &this->fields.endCallback;
  v30 = endCallback;
  p_endCallback[7] = 0;
  *((_DWORD *)p_endCallback + 16) = 0;
  if ( endCallback )
  {
    *p_endCallback = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_endCallback, 0, v16, v17, v18, v19, v20, v21);
    ActionExtensions__Call(v30, 0);
  }
}


void TitleInfoEventDailyPoint__EndPlayVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *voiceList; // x0
  __int64 playCnt; // x8
  __int64 v5; // x8

  if ( (byte_59365B2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_21FFC50(&StringLiteral_11111/*"PlayVoice"*/);
    byte_59365B2 = 1;
  }
  if ( this->fields.playCnt < this->fields.maxPlayCnt )
  {
    voiceList = (System_Collections_Generic_List_object__o *)this->fields.voiceList;
    if ( voiceList )
    {
      voiceList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 voiceList,
                                                                 this->fields.selectVoiceIndex,
                                                                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
      if ( voiceList )
      {
        playCnt = this->fields.playCnt;
        if ( (unsigned int)playCnt >= voiceList->fields._size )
          sub_21FFED4(voiceList);
        v5 = *((_QWORD *)&voiceList->fields._syncRoot + playCnt);
        if ( v5 )
        {
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_11111/*"PlayVoice"*/,
            *(float *)(v5 + 24),
            0);
          return;
        }
      }
    }
LABEL_12:
    sub_21FFECC(voiceList, method);
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
  il2cpp_array_size_t max_length; // x26
  System_Collections_Generic_List_object__o *v9; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  unsigned __int64 v16; // x23
  struct EventPointBehavior_o *v17; // x8
  struct System_String_array *v18; // x9
  int size; // w25
  TitleInfoEventDailyPoint_o *v20; // x22
  int32_t v21; // w23
  struct ItemIconComponent_o *itemIcon; // x8
  struct EventPointBehavior_o *v23; // x9
  System_Collections_Generic_List_object__o *voiceList; // x24
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  TitleInfoEventDailyPoint_o *v34; // x1
  Il2CppClass **v35; // x0
  struct EventPointBehavior_o *v36; // x8
  System_String_o *VoiceAssetName_49754652; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *voiceAssetName; // x20
  System_Action_o *v45; // x21
  __int64 v46; // x1
  __int64 v47; // x2

  v2 = this;
  if ( (byte_59365AF & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&SoundManager_TypeInfo);
    this = (TitleInfoEventDailyPoint_o *)sub_21FFC50(&Method_TitleInfoEventDailyPoint__OnLoadSvtVoice_b__26_0__);
    byte_59365AF = 1;
  }
  eventPointBehavior = v2->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_39;
  if ( eventPointBehavior->fields.voiceIds )
  {
    v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v4,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    this = (TitleInfoEventDailyPoint_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_39;
    this = (TitleInfoEventDailyPoint_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
    v5 = v2->fields.eventPointBehavior;
    if ( !v5 )
      goto LABEL_39;
    voiceIds = v5->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_39;
    v7 = this;
    max_length = voiceIds->max_length;
    v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    v2->fields.voiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v9;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields.voiceList, (int32_t)v9, v10, v11, v12, v13, v14, v15);
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
          sub_21FFED4(this);
        if ( !v7 )
          break;
        this = (TitleInfoEventDailyPoint_o *)ServantVoiceMaster__getEntity_49775332(
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
            (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
        }
        if ( (unsigned int)max_length == ++v16 )
          goto LABEL_18;
      }
LABEL_39:
      sub_21FFECC(this, method);
    }
LABEL_18:
    this = (TitleInfoEventDailyPoint_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_39;
    this = (TitleInfoEventDailyPoint_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
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
                                               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
                                                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v35 = &items->obj.klass + v33;
            voiceList->fields._size = v33 + 1;
            v35[4] = (Il2CppClass *)v34;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v35 + 4), (int32_t)v34, v25, v26, v27, v28, v29, v30);
          }
        }
      }
      while ( size != ++v21 );
    }
    v36 = v2->fields.eventPointBehavior;
    if ( !v36 )
      goto LABEL_39;
    VoiceAssetName_49754652 = ServantVoiceEntity__getVoiceAssetName_49754652(v36->fields.svtId, 0);
    v2->fields.voiceAssetName = VoiceAssetName_49754652;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v2->fields.voiceAssetName,
      (int32_t)VoiceAssetName_49754652,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    voiceAssetName = v2->fields.voiceAssetName;
    v45 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v45, (Il2CppObject *)v2, Method_TitleInfoEventDailyPoint__OnLoadSvtVoice_b__26_0__, 0);
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v46, v47);
    SoundManager__loadAudioAssetStorage(voiceAssetName, v45, 1, 0);
  }
}


void TitleInfoEventDailyPoint__OnTouchDisp(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *screenTouchInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  AvalonSceneManager_c *v9; // x8
  CommonUI_o *v10; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21

  if ( (byte_59365B4 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TitleInfoEventDailyPoint_OnTouchDisp__);
    sub_21FFC50(&Method_TitleInfoEventDailyPoint__OnTouchDisp_b__31_0__);
    byte_59365B4 = 1;
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
    v4 = (_QWORD *)sub_21FFC68(Method_TitleInfoEventDailyPoint_OnTouchDisp__);
  v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  v10 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v7, v8);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v12 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_TitleInfoEventDailyPoint__OnTouchDisp_b__31_0__, 0);
  if ( !v10 )
LABEL_11:
    sub_21FFECC(screenTouchInfo, method);
  CommonUI__maskFadeout(v10, 2, DEFAULT_FADE_TIME, v12, 0);
  this->fields.state = 0;
}


void TitleInfoEventDailyPoint__Open(
        TitleInfoEventDailyPoint_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v10; // x0
  struct EventDailyPoint_o *eventDailyPoint_k__BackingField; // x1
  struct EventDailyPoint_o **p_eventDailyPoint; // x20
  __int64 *transform; // x0
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct EventPointBehavior_array *eventPointBehavior; // x8
  struct EventPointBehavior_o *v22; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  Il2CppObject *Instance; // x23
  Il2CppObject *Component_object; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct EventPointBehavior_o *v41; // x8
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  UnityEngine_Object_o *simpleAnimation; // x22
  System_String_o *v47; // x21
  __int64 v48; // x2
  __int64 v49; // x8
  void *v50; // x21
  __int64 v51; // x9
  SimpleAnimation_State_c **v52; // x10
  __int64 v53; // x0
  UnityEngine_Object_o *animation; // x22
  __int64 v55; // x2
  ItemIconComponent_o *itemIcon; // x21
  __int64 v57; // x2
  int32_t eventDailyPoint; // w20
  System_String_o *v59; // x20
  float LocalPositionX; // s0
  UnityEngine_GameObject_o *pointRoot; // x0
  struct UILabel_o *pointLabel; // x8
  float v63; // s0
  float v64; // s8
  int v65; // w20
  float LocalScaleX; // s9
  float v67; // s0
  float v68; // s10
  const MethodInfo *v69; // x1
  int32_t effectId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_59365AE & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&StringLiteral_17896/*"bit_dedicate_reward_"*/);
    byte_59365AE = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, callback, method);
  if ( !byte_59365DF )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59365DF = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, callback, method);
    v10 = TerminalPramsManager_TypeInfo;
  }
  eventDailyPoint_k__BackingField = v10->static_fields->_eventDailyPoint_k__BackingField;
  this->fields.eventDailyPoint = eventDailyPoint_k__BackingField;
  p_eventDailyPoint = &this->fields.eventDailyPoint;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventDailyPoint,
    (int32_t)eventDailyPoint_k__BackingField,
    (System_String_o *)method,
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
    sub_21FFED4(transform);
  v22 = eventPointBehavior->m_Items[0];
  this->fields.eventPointBehavior = v22;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventPointBehavior,
    (int32_t)v22,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.screenTouchInfo,
      (int32_t)Component_object,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endCallback,
    (int32_t)callback,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = this->fields.eventPointBehavior;
  this->fields.state = 0;
  if ( !v41 )
    goto LABEL_64;
  effectId = v41->fields.effectId;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &effectId);
  v43 = System_String__Concat((Il2CppObject *)StringLiteral_17896/*"bit_dedicate_reward_"*/, v42, 0);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  v47 = v43;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44, v45);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0) )
  {
    transform = (__int64 *)this->fields.simpleAnimation;
    if ( transform )
    {
      transform = (__int64 *)SimpleAnimation__get_Item((SimpleAnimation_o *)transform, v47, 0);
      if ( transform )
      {
        v49 = *transform;
        v50 = transform;
        v51 = *(unsigned __int16 *)(*transform + 302);
        if ( *(_WORD *)(*transform + 302) )
        {
          v52 = (SimpleAnimation_State_c **)(*(_QWORD *)(v49 + 176) + 8LL);
          while ( *(v52 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v51;
            v52 += 2;
            if ( !v51 )
              goto LABEL_31;
          }
          v53 = v49 + 16LL * (*(_DWORD *)v52 + 14) + 312;
        }
        else
        {
LABEL_31:
          v53 = sub_2237E2C(transform, SimpleAnimation_State_TypeInfo, 14);
        }
        transform = (__int64 *)(*(__int64 (__fastcall **)(void *, _QWORD))v53)(v50, *(_QWORD *)(v53 + 8));
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
    sub_21FFECC(transform, v14);
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v48);
  if ( UnityEngine_Object__op_Inequality(animation, 0, 0) )
  {
    transform = (__int64 *)this->fields.animation;
    if ( !transform )
      goto LABEL_64;
    transform = (__int64 *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)transform, v47, 0);
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
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14, v55);
  if ( !byte_59365E0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59365E0 = 1;
  }
  transform = (__int64 *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14, v55);
    transform = (__int64 *)TerminalPramsManager_TypeInfo;
  }
  if ( !itemIcon )
    goto LABEL_64;
  ItemIconComponent__SetItem(itemIcon, *(_DWORD *)(transform[23] + 376), -1, 1, 0);
  if ( !*p_eventDailyPoint )
    goto LABEL_64;
  eventDailyPoint = (*p_eventDailyPoint)->fields.eventDailyPoint;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v57);
  transform = (__int64 *)LocalizationManager__GetNumberFormat(eventDailyPoint, 0);
  if ( !this->fields.satisfyLabel )
    goto LABEL_64;
  v59 = (System_String_o *)transform;
  UILabel__set_text(this->fields.satisfyLabel, (System_String_o *)transform, 0);
  transform = (__int64 *)this->fields.pointLabel;
  if ( !transform )
    goto LABEL_64;
  UILabel__set_text((UILabel_o *)transform, v59, 0);
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
  v63 = GameObjectExtensions__GetLocalPositionX(this->fields.pointLabelLeft, 0);
  transform = (__int64 *)this->fields.pointLabelLeft;
  if ( !transform )
    goto LABEL_64;
  v64 = v63;
  transform = (__int64 *)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)transform,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !transform )
    goto LABEL_64;
  v65 = *((_DWORD *)transform + 42);
  LocalScaleX = GameObjectExtensions__GetLocalScaleX(this->fields.pointLabelLeft, 0);
  v67 = GameObjectExtensions__GetLocalPositionX(this->fields.pointLabelRight, 0);
  transform = (__int64 *)this->fields.pointLabelRight;
  if ( !transform )
    goto LABEL_64;
  v68 = v67;
  transform = (__int64 *)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)transform,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !transform )
    goto LABEL_64;
  GameObjectExtensions__SetLocalPositionX(
    this->fields.pointRoot,
    this->fields.pointRootInitPosX
  + (float)((float)((float)(v64 - (float)(LocalScaleX * (float)v65)) + (float)(v68 + (float)*((int *)transform + 42)))
          * -0.5),
    0);
  TitleInfoEventDailyPoint__OnLoadSvtVoice(this, v69);
}


void TitleInfoEventDailyPoint__PlayVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *voiceList; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 playCnt; // x8
  __int64 v11; // x8
  struct System_String_o *v12; // x1
  struct EventPointBehavior_o *eventPointBehavior; // x8
  System_String_o *VoiceAssetName_49754652; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  SeManager_c *v17; // x8
  System_String_o *voiceName; // x20
  System_String_o *v19; // x21
  float DEFAULT_VOLUME; // s8
  System_Action_o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  struct SePlayer_o *v24; // x0
  MissionNaviTransitionBoardItem_o *p_voicePlayer; // x19
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_59365B1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_21FFC50(&SeManager_TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&Method_TitleInfoEventDailyPoint_EndPlayVoice__);
    byte_59365B1 = 1;
  }
  voiceList = (System_Collections_Generic_List_object__o *)this->fields.voiceList;
  if ( !voiceList )
    goto LABEL_13;
  voiceList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             voiceList,
                                                             this->fields.selectVoiceIndex,
                                                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  if ( !voiceList )
    goto LABEL_13;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= voiceList->fields._size )
    sub_21FFED4(voiceList);
  v11 = *((_QWORD *)&voiceList->fields._syncRoot + playCnt);
  if ( !v11
    || (v12 = *(struct System_String_o **)(v11 + 16),
        this->fields.voiceName = v12,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.voiceName, (int32_t)v12, v4, v5, v6, v7, v8, v9),
        (eventPointBehavior = this->fields.eventPointBehavior) == 0) )
  {
LABEL_13:
    sub_21FFECC(voiceList, method);
  }
  VoiceAssetName_49754652 = ServantVoiceEntity__getVoiceAssetName_49754652(eventPointBehavior->fields.svtId, 0);
  v17 = SeManager_TypeInfo;
  voiceName = this->fields.voiceName;
  v19 = VoiceAssetName_49754652;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v15, v16);
    v17 = SeManager_TypeInfo;
  }
  DEFAULT_VOLUME = v17->static_fields->DEFAULT_VOLUME;
  v21 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_TitleInfoEventDailyPoint_EndPlayVoice__, 0);
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v22, v23);
  v24 = SoundManager__playVoice_48465348(v19, voiceName, DEFAULT_VOLUME, v21, 0, 0);
  this->fields.voicePlayer = v24;
  p_voicePlayer = (MissionNaviTransitionBoardItem_o *)&this->fields.voicePlayer;
  sub_21FFBF4(p_voicePlayer, (int32_t)v24, v26, v27, v28, v29, v30, v31);
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
  if ( (byte_59365B0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this = (TitleInfoEventDailyPoint_o *)sub_21FFC50(&System_Random_TypeInfo);
    byte_59365B0 = 1;
  }
  voiceList = v2->fields.voiceList;
  if ( !voiceList )
    goto LABEL_11;
  if ( voiceList->fields._size )
  {
    v4 = (System_Random_o *)sub_21FFEBC(System_Random_TypeInfo);
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
                                                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
    sub_21FFECC(this, method);
  }
}


void TitleInfoEventDailyPoint__Update(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1

  if ( (byte_59365B3 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_59365B3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method, v2);
    if ( CTouch__isTouchPush(0) )
      TitleInfoEventDailyPoint__OnTouchDisp(this, v4);
  }
}


void TitleInfoEventDailyPoint___OnLoadSvtVoice_b__26_0(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  CommonUI_o *v6; // x20
  __int64 v7; // x2
  struct EventPointBehavior_o *eventPointBehavior; // x8
  struct EventPointBehavior_o *v9; // x8
  __int64 v10; // x2
  System_String_o *m_CancellationTokenSource; // x20
  UnityEngine_Object_o *simpleAnimation; // x20
  __int64 v13; // x2
  __int64 v14; // x2
  struct SimpleAnimation_o *v15; // x8
  UnityEngine_Object_o *m_Clip; // x20
  struct SimpleAnimation_o *v17; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *v23; // x20
  System_String_o *v24; // x0

  if ( (byte_59365B6 & 1) == 0 )
  {
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_21FFC50(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&StringLiteral_13583/*"StartVoice"*/);
    byte_59365B6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4, v5);
  if ( !v6 )
    goto LABEL_38;
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13583/*"StartVoice"*/,
    this->fields.voiceStartTime,
    0);
  eventPointBehavior = this->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_38;
  if ( eventPointBehavior->fields.bgmId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    Instance = (CommonUI_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_BgmMaster___);
    v9 = this->fields.eventPointBehavior;
    if ( !v9 )
      goto LABEL_38;
    if ( !Instance )
      goto LABEL_38;
    Instance = (CommonUI_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               v9->fields.bgmId,
                               (const MethodInfo_3EDD388 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_38;
    m_CancellationTokenSource = (System_String_o *)Instance->fields.m_CancellationTokenSource;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v4, v10);
    SoundManager__playBgm(m_CancellationTokenSource, 0);
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v7);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0) )
  {
    Instance = (CommonUI_o *)this->fields.simpleAnimation;
    if ( !Instance )
      goto LABEL_38;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
    v15 = this->fields.simpleAnimation;
    if ( !v15 )
      goto LABEL_38;
    m_Clip = (UnityEngine_Object_o *)v15->fields.m_Clip;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v14);
    Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(m_Clip, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v17 = this->fields.simpleAnimation;
      if ( v17 )
      {
        Instance = (CommonUI_o *)v17->fields.m_Clip;
        if ( Instance )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0);
          SimpleAnimation__Play_78338864(v17, name, 0);
          goto LABEL_37;
        }
      }
LABEL_38:
      sub_21FFECC(Instance, v4);
    }
  }
  else
  {
    animation = (UnityEngine_Object_o *)this->fields.animation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v13);
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
      Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(clip, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        v23 = this->fields.animation;
        if ( v23 )
        {
          Instance = (CommonUI_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0);
          if ( Instance )
          {
            v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0);
            UnityEngine_Animation__Play_82865240(v23, v24, 0);
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