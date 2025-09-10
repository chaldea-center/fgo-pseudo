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
  const MethodInfo *v7; // x3
  struct System_String_o **p_voiceAssetName; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_String_o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Action_o **p_endCallback; // x19
  System_Action_o *v15; // x20
  struct System_Action_o *endCallback; // t1

  if ( (byte_4C25377 & 1) == 0 )
  {
    sub_1C2D490(&SoundManager_TypeInfo);
    byte_4C25377 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  if ( this->fields.voicePlayer )
  {
    voiceName = this->fields.voiceName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoice_41297076(voiceName, 0.0, 0);
    this->fields.voicePlayer = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.voicePlayer, 0, v6, v7);
  }
  p_voiceAssetName = &this->fields.voiceAssetName;
  if ( !System_String__IsNullOrEmpty(this->fields.voiceAssetName, 0) )
  {
    v11 = *p_voiceAssetName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(v11, 0);
    *p_voiceAssetName = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.voiceAssetName, 0, v12, v13);
  }
  endCallback = this->fields.endCallback;
  p_endCallback = &this->fields.endCallback;
  v15 = endCallback;
  p_endCallback[7] = 0;
  *((_DWORD *)p_endCallback + 16) = 0;
  if ( endCallback )
  {
    *p_endCallback = 0;
    sub_1C2D434((CGThumbnailListItem_o *)p_endCallback, 0, v9, v10);
    ActionExtensions__Call(v15, 0);
  }
}


void TitleInfoEventDailyPoint__EndPlayVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *voiceList; // x0
  __int64 v4; // x2
  __int64 playCnt; // x8
  __int64 v6; // x8

  if ( (byte_4C25374 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C2D490(&StringLiteral_10669/*"PlayVoice"*/);
    byte_4C25374 = 1;
  }
  if ( this->fields.playCnt < this->fields.maxPlayCnt )
  {
    voiceList = (System_Collections_Generic_List_object__o *)this->fields.voiceList;
    if ( voiceList )
    {
      voiceList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 voiceList,
                                                                 this->fields.selectVoiceIndex,
                                                                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
      if ( voiceList )
      {
        playCnt = this->fields.playCnt;
        if ( (unsigned int)playCnt >= voiceList->fields._size )
          sub_1C2D6F4(voiceList, method, v4);
        v6 = *((_QWORD *)&voiceList->fields._syncRoot + playCnt);
        if ( v6 )
        {
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_10669/*"PlayVoice"*/,
            *(float *)(v6 + 24),
            0);
          return;
        }
      }
    }
LABEL_12:
    sub_1C2D6EC(voiceList, method);
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
  const MethodInfo *v11; // x3
  __int64 v12; // x2
  unsigned __int64 v13; // x23
  struct EventPointBehavior_o *v14; // x8
  struct System_String_array *v15; // x9
  int size; // w25
  TitleInfoEventDailyPoint_o *v17; // x22
  int32_t v18; // w23
  struct ItemIconComponent_o *itemIcon; // x8
  struct EventPointBehavior_o *v20; // x9
  System_Collections_Generic_List_object__o *voiceList; // x24
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  TitleInfoEventDailyPoint_o *v27; // x1
  Il2CppClass **v28; // x0
  struct EventPointBehavior_o *v29; // x8
  System_String_o *VoiceAssetName_42560796; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_String_o *voiceAssetName; // x20
  System_Action_o *v34; // x21

  v2 = this;
  if ( (byte_4C25371 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&SoundManager_TypeInfo);
    this = (TitleInfoEventDailyPoint_o *)sub_1C2D490(&Method_TitleInfoEventDailyPoint__OnLoadSvtVoice_b__26_0__);
    byte_4C25371 = 1;
  }
  eventPointBehavior = v2->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_39;
  if ( eventPointBehavior->fields.voiceIds )
  {
    v4 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v4,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    this = (TitleInfoEventDailyPoint_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_39;
    this = (TitleInfoEventDailyPoint_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
    v5 = v2->fields.eventPointBehavior;
    if ( !v5 )
      goto LABEL_39;
    voiceIds = v5->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_39;
    v7 = this;
    max_length = voiceIds->max_length;
    v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    v2->fields.voiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v9;
    sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.voiceList, (int32_t)v9, v10, v11);
    if ( (int)max_length >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        v14 = v2->fields.eventPointBehavior;
        if ( !v14 )
          break;
        v15 = v14->fields.voiceIds;
        if ( !v15 )
          break;
        if ( v13 >= LODWORD(v15->max_length) )
LABEL_40:
          sub_1C2D6F4(this, method, v12);
        if ( !v7 )
          break;
        this = (TitleInfoEventDailyPoint_o *)ServantVoiceMaster__getEntity_42582632(
                                               (ServantVoiceMaster_o *)v7,
                                               16,
                                               v14->fields.svtId,
                                               v14->fields.limitCount,
                                               v15->m_Items[v13],
                                               0);
        if ( this )
        {
          if ( !v4 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v4,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
        }
        if ( (unsigned int)max_length == ++v13 )
          goto LABEL_18;
      }
LABEL_39:
      sub_1C2D6EC(this, method);
    }
LABEL_18:
    this = (TitleInfoEventDailyPoint_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_39;
    this = (TitleInfoEventDailyPoint_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !v4 )
      goto LABEL_39;
    size = v4->fields._size;
    if ( size >= 1 )
    {
      v17 = this;
      v18 = 0;
      do
      {
        this = (TitleInfoEventDailyPoint_o *)System_Collections_Generic_List_object___get_Item(
                                               v4,
                                               v18,
                                               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
        if ( !this )
          goto LABEL_39;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_40;
        itemIcon = this->fields.itemIcon;
        if ( !itemIcon )
          goto LABEL_39;
        v20 = v2->fields.eventPointBehavior;
        if ( !v20 || !v17 )
          goto LABEL_39;
        this = (TitleInfoEventDailyPoint_o *)VoicePlayCondMaster__isVoicePlay(
                                               (VoicePlayCondMaster_o *)v17,
                                               v20->fields.svtId,
                                               (System_String_o *)itemIcon->fields.m_CachedPtr,
                                               0,
                                               -1,
                                               -1,
                                               0,
                                               0,
                                               0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          voiceList = (System_Collections_Generic_List_object__o *)v2->fields.voiceList;
          this = (TitleInfoEventDailyPoint_o *)System_Collections_Generic_List_object___get_Item(
                                                 v4,
                                                 v18,
                                                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
          if ( !voiceList )
            goto LABEL_39;
          items = voiceList->fields._items;
          v25 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          ++voiceList->fields._version;
          if ( !items )
            goto LABEL_39;
          v26 = voiceList->fields._size;
          v27 = this;
          if ( (unsigned int)v26 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              voiceList,
              (Il2CppObject *)this,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + v26;
            voiceList->fields._size = v26 + 1;
            v28[4] = (Il2CppClass *)v27;
            sub_1C2D434((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v27, v22, v23);
          }
        }
      }
      while ( size != ++v18 );
    }
    v29 = v2->fields.eventPointBehavior;
    if ( !v29 )
      goto LABEL_39;
    VoiceAssetName_42560796 = ServantVoiceEntity__getVoiceAssetName_42560796(v29->fields.svtId, 0);
    v2->fields.voiceAssetName = VoiceAssetName_42560796;
    sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.voiceAssetName, (int32_t)VoiceAssetName_42560796, v31, v32);
    voiceAssetName = v2->fields.voiceAssetName;
    v34 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v34, (Il2CppObject *)v2, Method_TitleInfoEventDailyPoint__OnLoadSvtVoice_b__26_0__, 0);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage(voiceAssetName, v34, 1, 0);
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

  if ( (byte_4C25376 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_TitleInfoEventDailyPoint_OnTouchDisp__);
    sub_1C2D490(&Method_TitleInfoEventDailyPoint__OnTouchDisp_b__31_0__);
    byte_4C25376 = 1;
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
    v4 = (_QWORD *)sub_1C2D4A8(Method_TitleInfoEventDailyPoint_OnTouchDisp__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_TitleInfoEventDailyPoint__OnTouchDisp_b__31_0__, 0);
  if ( !v8 )
LABEL_11:
    sub_1C2D6EC(screenTouchInfo, method);
  CommonUI__maskFadeout(v8, 2, DEFAULT_FADE_TIME, v10, 0);
  this->fields.state = 0;
}


void TitleInfoEventDailyPoint__Open(
        TitleInfoEventDailyPoint_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v6; // x0
  struct EventDailyPoint_o *eventDailyPoint_k__BackingField; // x1
  struct EventDailyPoint_o **p_eventDailyPoint; // x20
  __int64 *transform; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  struct EventPointBehavior_array *eventPointBehavior; // x8
  struct EventPointBehavior_o *v14; // x1
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  Il2CppObject *Instance; // x23
  Il2CppObject *Component_object; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  struct EventPointBehavior_o *v26; // x8
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  UnityEngine_Object_o *simpleAnimation; // x22
  System_String_o *v30; // x21
  __int64 v31; // x8
  void *v32; // x21
  __int64 v33; // x9
  SimpleAnimation_State_c **v34; // x10
  __int64 v35; // x0
  UnityEngine_Object_o *animation; // x22
  ItemIconComponent_o *itemIcon; // x21
  int32_t eventDailyPoint; // w20
  System_String_o *v39; // x20
  float LocalPositionX; // s0
  UnityEngine_GameObject_o *pointRoot; // x0
  struct UILabel_o *pointLabel; // x8
  float v43; // s0
  float v44; // s8
  int v45; // w20
  float LocalScaleX; // s9
  float v47; // s0
  float v48; // s10
  const MethodInfo *v49; // x1
  int32_t effectId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C25370 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_17189/*"bit_dedicate_reward_"*/);
    byte_4C25370 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C253B3 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C253B3 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  eventDailyPoint_k__BackingField = v6->static_fields->_eventDailyPoint_k__BackingField;
  this->fields.eventDailyPoint = eventDailyPoint_k__BackingField;
  p_eventDailyPoint = &this->fields.eventDailyPoint;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.eventDailyPoint,
    (int32_t)eventDailyPoint_k__BackingField,
    (int32_t)method,
    v3);
  if ( !this->fields.eventDailyPoint )
  {
    ActionExtensions__Call(callback, 0);
    return;
  }
  eventPointBehavior = this->fields.eventDailyPoint->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_64;
  if ( !LODWORD(eventPointBehavior->max_length) )
    sub_1C2D6F4(transform, v10, v11);
  v14 = eventPointBehavior->m_Items[0];
  this->fields.eventPointBehavior = v14;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventPointBehavior, (int32_t)v14, v11, v12);
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.screenTouchInfo, (int32_t)Component_object, v19, v20);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callback, v21, v22);
  v26 = this->fields.eventPointBehavior;
  this->fields.state = 0;
  if ( !v26 )
    goto LABEL_64;
  effectId = v26->fields.effectId;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId, v23, v24, v25);
  v28 = System_String__Concat((Il2CppObject *)StringLiteral_17189/*"bit_dedicate_reward_"*/, v27, 0);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  v30 = v28;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0) )
  {
    transform = (__int64 *)this->fields.simpleAnimation;
    if ( transform )
    {
      transform = (__int64 *)SimpleAnimation__get_Item((SimpleAnimation_o *)transform, v30, 0);
      if ( transform )
      {
        v31 = *transform;
        v32 = transform;
        v33 = *(unsigned __int16 *)(*transform + 302);
        if ( *(_WORD *)(*transform + 302) )
        {
          v34 = (SimpleAnimation_State_c **)(*(_QWORD *)(v31 + 176) + 8LL);
          while ( *(v34 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v33;
            v34 += 2;
            if ( !v33 )
              goto LABEL_31;
          }
          v35 = v31 + 16LL * (*(_DWORD *)v34 + 14) + 312;
        }
        else
        {
LABEL_31:
          v35 = sub_1C7DCA8(transform, SimpleAnimation_State_TypeInfo, 14);
        }
        transform = (__int64 *)(*(__int64 (__fastcall **)(void *, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8));
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
    sub_1C2D6EC(transform, v10);
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animation, 0, 0) )
  {
    transform = (__int64 *)this->fields.animation;
    if ( !transform )
      goto LABEL_64;
    transform = (__int64 *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)transform, v30, 0);
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
  if ( !byte_4C253B4 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C253B4 = 1;
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
  v39 = (System_String_o *)transform;
  UILabel__set_text(this->fields.satisfyLabel, (System_String_o *)transform, 0);
  transform = (__int64 *)this->fields.pointLabel;
  if ( !transform )
    goto LABEL_64;
  UILabel__set_text((UILabel_o *)transform, v39, 0);
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
  v43 = GameObjectExtensions__GetLocalPositionX(this->fields.pointLabelLeft, 0);
  transform = (__int64 *)this->fields.pointLabelLeft;
  if ( !transform )
    goto LABEL_64;
  v44 = v43;
  transform = (__int64 *)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)transform,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !transform )
    goto LABEL_64;
  v45 = *((_DWORD *)transform + 42);
  LocalScaleX = GameObjectExtensions__GetLocalScaleX(this->fields.pointLabelLeft, 0);
  v47 = GameObjectExtensions__GetLocalPositionX(this->fields.pointLabelRight, 0);
  transform = (__int64 *)this->fields.pointLabelRight;
  if ( !transform )
    goto LABEL_64;
  v48 = v47;
  transform = (__int64 *)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)transform,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !transform )
    goto LABEL_64;
  GameObjectExtensions__SetLocalPositionX(
    this->fields.pointRoot,
    this->fields.pointRootInitPosX
  + (float)((float)((float)(v44 - (float)(LocalScaleX * (float)v45)) + (float)(v48 + (float)*((int *)transform + 42)))
          * -0.5),
    0);
  TitleInfoEventDailyPoint__OnLoadSvtVoice(this, v49);
}


void TitleInfoEventDailyPoint__PlayVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *voiceList; // x0
  __int64 v4; // x2
  const MethodInfo *v5; // x3
  __int64 playCnt; // x8
  __int64 v7; // x8
  struct System_String_o *v8; // x1
  struct EventPointBehavior_o *eventPointBehavior; // x8
  System_String_o *VoiceAssetName_42560796; // x0
  SeManager_c *v11; // x8
  System_String_o *voiceName; // x20
  System_String_o *v13; // x21
  float DEFAULT_VOLUME; // s8
  System_Action_o *v15; // x22
  struct SePlayer_o *v16; // x0
  CGThumbnailListItem_o *p_voicePlayer; // x19
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C25373 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C2D490(&SeManager_TypeInfo);
    sub_1C2D490(&SoundManager_TypeInfo);
    sub_1C2D490(&Method_TitleInfoEventDailyPoint_EndPlayVoice__);
    byte_4C25373 = 1;
  }
  voiceList = (System_Collections_Generic_List_object__o *)this->fields.voiceList;
  if ( !voiceList )
    goto LABEL_13;
  voiceList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             voiceList,
                                                             this->fields.selectVoiceIndex,
                                                             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  if ( !voiceList )
    goto LABEL_13;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= voiceList->fields._size )
    sub_1C2D6F4(voiceList, method, v4);
  v7 = *((_QWORD *)&voiceList->fields._syncRoot + playCnt);
  if ( !v7
    || (v8 = *(struct System_String_o **)(v7 + 16),
        this->fields.voiceName = v8,
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.voiceName, (int32_t)v8, v4, v5),
        (eventPointBehavior = this->fields.eventPointBehavior) == 0) )
  {
LABEL_13:
    sub_1C2D6EC(voiceList, method);
  }
  VoiceAssetName_42560796 = ServantVoiceEntity__getVoiceAssetName_42560796(eventPointBehavior->fields.svtId, 0);
  v11 = SeManager_TypeInfo;
  voiceName = this->fields.voiceName;
  v13 = VoiceAssetName_42560796;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v11 = SeManager_TypeInfo;
  }
  DEFAULT_VOLUME = v11->static_fields->DEFAULT_VOLUME;
  v15 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_TitleInfoEventDailyPoint_EndPlayVoice__, 0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v16 = SoundManager__playVoice_41296680(v13, voiceName, DEFAULT_VOLUME, v15, 0, 0);
  this->fields.voicePlayer = v16;
  p_voicePlayer = (CGThumbnailListItem_o *)&this->fields.voicePlayer;
  sub_1C2D434(p_voicePlayer, (int32_t)v16, v18, v19);
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
  if ( (byte_4C25372 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this = (TitleInfoEventDailyPoint_o *)sub_1C2D490(&System_Random_TypeInfo);
    byte_4C25372 = 1;
  }
  voiceList = v2->fields.voiceList;
  if ( !voiceList )
    goto LABEL_11;
  if ( voiceList->fields._size )
  {
    v4 = (System_Random_o *)sub_1C2D6DC(System_Random_TypeInfo);
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
                                                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
    sub_1C2D6EC(this, method);
  }
}


void TitleInfoEventDailyPoint__Update(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4C25375 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C25375 = 1;
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

  if ( (byte_4C25378 & 1) == 0 )
  {
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C2D490(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&SoundManager_TypeInfo);
    sub_1C2D490(&StringLiteral_13060/*"StartVoice"*/);
    byte_4C25378 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5 )
    goto LABEL_38;
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13060/*"StartVoice"*/,
    this->fields.voiceStartTime,
    0);
  eventPointBehavior = this->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_38;
  if ( eventPointBehavior->fields.bgmId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    Instance = (CommonUI_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_BgmMaster___);
    v7 = this->fields.eventPointBehavior;
    if ( !v7 )
      goto LABEL_38;
    if ( !Instance )
      goto LABEL_38;
    Instance = (CommonUI_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               v7->fields.bgmId,
                               (const MethodInfo_3387D98 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
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
          SimpleAnimation__Play_66404364(v12, name, 0);
          goto LABEL_37;
        }
      }
LABEL_38:
      sub_1C2D6EC(Instance, v4);
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
            UnityEngine_Animation__Play_70908988(v16, v17, 0);
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