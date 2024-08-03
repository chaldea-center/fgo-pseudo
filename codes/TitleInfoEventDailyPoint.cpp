void __fastcall TitleInfoEventDailyPoint___ctor(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventDailyPoint__Close(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *voiceName; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  struct System_String_o **p_voiceAssetName; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Action_o **p_endCallback; // x19
  System_Action_o *v14; // x20
  struct System_Action_o *endCallback; // t1

  if ( (byte_49FA4CA & 1) == 0 )
  {
    sub_1B640C8(&SoundManager_TypeInfo, method);
    byte_49FA4CA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( this->fields.voicePlayer )
  {
    voiceName = this->fields.voiceName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoice_38387556(voiceName, 0.0, 0LL);
    this->fields.voicePlayer = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayer, 0, v5, v6);
  }
  p_voiceAssetName = &this->fields.voiceAssetName;
  if ( !System_String__IsNullOrEmpty(this->fields.voiceAssetName, 0LL) )
  {
    v10 = *p_voiceAssetName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(v10, 0LL);
    *p_voiceAssetName = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.voiceAssetName, 0, v11, v12);
  }
  endCallback = this->fields.endCallback;
  p_endCallback = &this->fields.endCallback;
  v14 = endCallback;
  p_endCallback[7] = 0LL;
  *((_DWORD *)p_endCallback + 16) = 0;
  if ( endCallback )
  {
    *p_endCallback = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_endCallback, 0, v8, v9);
    ActionExtensions__Call(v14, 0LL);
  }
}


void __fastcall TitleInfoEventDailyPoint__EndPlayVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *voiceList; // x0
  __int64 v5; // x1
  __int64 playCnt; // x8
  __int64 v7; // x8

  if ( (byte_49FA4C7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, method);
    sub_1B640C8(&StringLiteral_10618/*"PlayVoice"*/, v3);
    byte_49FA4C7 = 1;
  }
  if ( this->fields.playCnt < this->fields.maxPlayCnt )
  {
    voiceList = (System_Collections_Generic_List_object__o *)this->fields.voiceList;
    if ( voiceList )
    {
      voiceList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 voiceList,
                                                                 this->fields.selectVoiceIndex,
                                                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
      if ( voiceList )
      {
        playCnt = this->fields.playCnt;
        if ( (unsigned int)playCnt >= voiceList->fields._size )
          sub_1B6432C(voiceList, v5);
        v7 = *((_QWORD *)&voiceList->fields._syncRoot + playCnt);
        if ( v7 )
        {
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_10618/*"PlayVoice"*/,
            *(float *)(v7 + 24),
            0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_1B64324(voiceList);
  }
  voiceList = (System_Collections_Generic_List_object__o *)this->fields.screenTouchInfo;
  if ( !voiceList )
    goto LABEL_12;
  voiceList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)voiceList,
                                                             0LL);
  if ( !voiceList )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)voiceList, 1, 0LL);
  this->fields.state = 2;
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
  System_Collections_Generic_List_object__o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  struct EventPointBehavior_o *v19; // x8
  struct System_String_array *voiceIds; // x8
  TitleInfoEventDailyPoint_o *v21; // x22
  __int64 v22; // x25
  System_Collections_Generic_List_object__o *v23; // x23
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x1
  unsigned __int64 v27; // x23
  struct EventPointBehavior_o *v28; // x8
  struct System_String_array *v29; // x9
  int size; // w25
  TitleInfoEventDailyPoint_o *v31; // x22
  int32_t v32; // w23
  struct ItemIconComponent_o *itemIcon; // x8
  struct EventPointBehavior_o *v34; // x9
  System_Collections_Generic_List_object__o *voiceList; // x24
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  TitleInfoEventDailyPoint_o *v41; // x1
  Il2CppClass **v42; // x0
  struct EventPointBehavior_o *v43; // x8
  System_String_o *VoiceAssetName_39436496; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *voiceAssetName; // x20
  __int64 v48; // x1
  __int64 v49; // x2
  System_Action_o *v50; // x21

  v3 = this;
  if ( (byte_49FA4C4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____AddRange__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v10);
    sub_1B640C8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&SoundManager_TypeInfo, v13);
    this = (TitleInfoEventDailyPoint_o *)sub_1B640C8(&Method_TitleInfoEventDailyPoint__OnLoadSvtVoice_b__26_0__, v14);
    byte_49FA4C4 = 1;
  }
  eventPointBehavior = v3->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_39;
  if ( eventPointBehavior->fields.voiceIds )
  {
    v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                         method,
                                                         v2);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    this = (TitleInfoEventDailyPoint_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_39;
    this = (TitleInfoEventDailyPoint_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
    v19 = v3->fields.eventPointBehavior;
    if ( !v19 )
      goto LABEL_39;
    voiceIds = v19->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_39;
    v21 = this;
    v22 = *(_QWORD *)&voiceIds->max_length;
    v23 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                         v17,
                                                         v18);
    System_Collections_Generic_List_object____ctor(
      v23,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    v3->fields.voiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v23;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.voiceList, (int32_t)v23, v24, v25);
    if ( (int)v22 >= 1 )
    {
      v27 = 0LL;
      while ( 1 )
      {
        v28 = v3->fields.eventPointBehavior;
        if ( !v28 )
          break;
        v29 = v28->fields.voiceIds;
        if ( !v29 )
          break;
        if ( v27 >= v29->max_length )
LABEL_40:
          sub_1B6432C(this, v26);
        if ( !v21 )
          break;
        this = (TitleInfoEventDailyPoint_o *)ServantVoiceMaster__getEntity_39458332(
                                               (ServantVoiceMaster_o *)v21,
                                               16,
                                               v28->fields.svtId,
                                               v28->fields.limitCount,
                                               v29->m_Items[v27],
                                               0LL);
        if ( this )
        {
          if ( !v16 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v16,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
        }
        if ( (unsigned int)v22 == ++v27 )
          goto LABEL_18;
      }
LABEL_39:
      sub_1B64324(this);
    }
LABEL_18:
    this = (TitleInfoEventDailyPoint_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_39;
    this = (TitleInfoEventDailyPoint_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !v16 )
      goto LABEL_39;
    size = v16->fields._size;
    if ( size >= 1 )
    {
      v31 = this;
      v32 = 0;
      do
      {
        this = (TitleInfoEventDailyPoint_o *)System_Collections_Generic_List_object___get_Item(
                                               v16,
                                               v32,
                                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
        if ( !this )
          goto LABEL_39;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_40;
        itemIcon = this->fields.itemIcon;
        if ( !itemIcon )
          goto LABEL_39;
        v34 = v3->fields.eventPointBehavior;
        if ( !v34 || !v31 )
          goto LABEL_39;
        this = (TitleInfoEventDailyPoint_o *)VoicePlayCondMaster__isVoicePlay(
                                               (VoicePlayCondMaster_o *)v31,
                                               v34->fields.svtId,
                                               *(System_String_o **)&itemIcon->fields.m_CachedPtr,
                                               0LL,
                                               -1LL,
                                               -1,
                                               0LL,
                                               0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          voiceList = (System_Collections_Generic_List_object__o *)v3->fields.voiceList;
          this = (TitleInfoEventDailyPoint_o *)System_Collections_Generic_List_object___get_Item(
                                                 v16,
                                                 v32,
                                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
          if ( !voiceList )
            goto LABEL_39;
          items = voiceList->fields._items;
          v39 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          ++voiceList->fields._version;
          if ( !items )
            goto LABEL_39;
          v40 = voiceList->fields._size;
          v41 = this;
          if ( (unsigned int)v40 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              voiceList,
              (Il2CppObject *)this,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &items->obj.klass + v40;
            voiceList->fields._size = v40 + 1;
            v42[4] = (Il2CppClass *)v41;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)v41, v36, v37);
          }
        }
      }
      while ( size != ++v32 );
    }
    v43 = v3->fields.eventPointBehavior;
    if ( !v43 )
      goto LABEL_39;
    VoiceAssetName_39436496 = ServantVoiceEntity__getVoiceAssetName_39436496(v43->fields.svtId, 0LL);
    v3->fields.voiceAssetName = VoiceAssetName_39436496;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&v3->fields.voiceAssetName,
      (int32_t)VoiceAssetName_39436496,
      v45,
      v46);
    voiceAssetName = v3->fields.voiceAssetName;
    v50 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v48, v49);
    System_Action___ctor(v50, (Il2CppObject *)v3, Method_TitleInfoEventDailyPoint__OnLoadSvtVoice_b__26_0__, 0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage(voiceAssetName, v50, 1, 0LL);
  }
}


void __fastcall TitleInfoEventDailyPoint__OnTouchDisp(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *screenTouchInfo; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  AvalonSceneManager_c *v13; // x8
  CommonUI_o *v14; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x21

  if ( (byte_49FA4C9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_TitleInfoEventDailyPoint_OnTouchDisp__, v5);
    sub_1B640C8(&Method_TitleInfoEventDailyPoint__OnTouchDisp_b__31_0__, v6);
    byte_49FA4C9 = 1;
  }
  screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
  if ( !screenTouchInfo )
    goto LABEL_11;
  screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL);
  if ( !screenTouchInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0LL);
  v8 = Method_TitleInfoEventDailyPoint_OnTouchDisp__;
  if ( (*((_BYTE *)Method_TitleInfoEventDailyPoint_OnTouchDisp__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1B640E0(Method_TitleInfoEventDailyPoint_OnTouchDisp__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B640AC(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = AvalonSceneManager_TypeInfo;
  v14 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v13 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
  v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_TitleInfoEventDailyPoint__OnTouchDisp_b__31_0__, 0LL);
  if ( !v14 )
LABEL_11:
    sub_1B64324(screenTouchInfo);
  CommonUI__maskFadeout(v14, 2, DEFAULT_FADE_TIME, v16, 0LL);
  this->fields.state = 0;
}


void __fastcall TitleInfoEventDailyPoint__Open(
        TitleInfoEventDailyPoint_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  TerminalPramsManager_c *v15; // x0
  struct EventDailyPoint_o *eventDailyPoint_k__BackingField; // x1
  struct EventDailyPoint_o **p_eventDailyPoint; // x20
  __int64 *transform; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  struct EventPointBehavior_array *eventPointBehavior; // x8
  struct EventPointBehavior_o *v23; // x1
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  Il2CppObject *Instance; // x23
  Il2CppObject *Component_object; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  struct EventPointBehavior_o *v32; // x8
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  UnityEngine_Object_o *simpleAnimation; // x22
  System_String_o *v36; // x21
  __int64 v37; // x8
  void *v38; // x21
  __int64 v39; // x9
  SimpleAnimation_State_c **v40; // x10
  __int64 v41; // x0
  UnityEngine_Object_o *animation; // x22
  __int64 v43; // x1
  ItemIconComponent_o *itemIcon; // x21
  int32_t eventDailyPoint; // w20
  System_String_o *v46; // x20
  float LocalPositionX; // s0
  UnityEngine_GameObject_o *pointRoot; // x0
  struct UILabel_o *pointLabel; // x8
  float v50; // s0
  float v51; // s8
  int v52; // w20
  float LocalScaleX; // s9
  float v54; // s0
  float v55; // s10
  const MethodInfo *v56; // x1
  int32_t effectId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49FA4C3 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, callback);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_1B640C8(&int_TypeInfo, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v12);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_17154/*"bit_dedicate_reward_"*/, v14);
    byte_49FA4C3 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FA53D )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, callback);
    byte_49FA53D = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  eventDailyPoint_k__BackingField = v15->static_fields->_eventDailyPoint_k__BackingField;
  this->fields.eventDailyPoint = eventDailyPoint_k__BackingField;
  p_eventDailyPoint = &this->fields.eventDailyPoint;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventDailyPoint,
    (int32_t)eventDailyPoint_k__BackingField,
    (int32_t)method,
    v3);
  if ( !this->fields.eventDailyPoint )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  eventPointBehavior = this->fields.eventDailyPoint->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_64;
  if ( !eventPointBehavior->max_length )
    sub_1B6432C(transform, v19);
  v23 = eventPointBehavior->m_Items[0];
  this->fields.eventPointBehavior = v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventPointBehavior, (int32_t)v23, v20, v21);
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = (__int64 *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_64;
    transform = (__int64 *)CommonUI__CreateScreeenTouchInfo(
                             (CommonUI_o *)Instance,
                             (UnityEngine_Transform_o *)transform,
                             0,
                             0LL);
    if ( !transform )
      goto LABEL_64;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.screenTouchInfo, (int32_t)Component_object, v28, v29);
  }
  transform = (__int64 *)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_64;
  transform = (__int64 *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (__int64 *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  this->fields.endCallback = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.endCallback, (int32_t)callback, v30, v31);
  v32 = this->fields.eventPointBehavior;
  this->fields.state = 0;
  if ( !v32 )
    goto LABEL_64;
  effectId = v32->fields.effectId;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId);
  v34 = System_String__Concat((Il2CppObject *)StringLiteral_17154/*"bit_dedicate_reward_"*/, v33, 0LL);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  v36 = v34;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    transform = (__int64 *)this->fields.simpleAnimation;
    if ( transform )
    {
      transform = (__int64 *)SimpleAnimation__get_Item((SimpleAnimation_o *)transform, v36, 0LL);
      if ( transform )
      {
        v37 = *transform;
        v38 = transform;
        v39 = *(unsigned __int16 *)(*transform + 302);
        if ( *(_WORD *)(*transform + 302) )
        {
          v40 = (SimpleAnimation_State_c **)(*(_QWORD *)(v37 + 176) + 8LL);
          while ( *(v40 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v39;
            v40 += 2;
            if ( !v39 )
              goto LABEL_31;
          }
          v41 = v37 + 16LL * (*(_DWORD *)v40 + 14) + 312;
        }
        else
        {
LABEL_31:
          v41 = sub_1BB60A8(transform, SimpleAnimation_State_TypeInfo, 14LL);
        }
        transform = (__int64 *)(*(__int64 (__fastcall **)(void *, _QWORD))v41)(v38, *(_QWORD *)(v41 + 8));
        if ( this->fields.simpleAnimation )
        {
          SimpleAnimation__set_clip(this->fields.simpleAnimation, (UnityEngine_AnimationClip_o *)transform, 0LL);
          transform = (__int64 *)this->fields.simpleAnimation;
          if ( transform )
          {
LABEL_43:
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 0, 0LL);
            goto LABEL_44;
          }
        }
      }
    }
LABEL_64:
    sub_1B64324(transform);
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
  {
    transform = (__int64 *)this->fields.animation;
    if ( !transform )
      goto LABEL_64;
    transform = (__int64 *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)transform, v36, 0LL);
    if ( !this->fields.animation )
      goto LABEL_64;
    UnityEngine_Animation__set_clip(this->fields.animation, (UnityEngine_AnimationClip_o *)transform, 0LL);
    transform = (__int64 *)this->fields.animation;
    if ( !transform )
      goto LABEL_64;
    goto LABEL_43;
  }
LABEL_44:
  itemIcon = this->fields.itemIcon;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FA53E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v43);
    byte_49FA53E = 1;
  }
  transform = (__int64 *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    transform = (__int64 *)TerminalPramsManager_TypeInfo;
  }
  if ( !itemIcon )
    goto LABEL_64;
  ItemIconComponent__SetItem(itemIcon, *(_DWORD *)(transform[23] + 360), -1, 0LL);
  if ( !*p_eventDailyPoint )
    goto LABEL_64;
  eventDailyPoint = (*p_eventDailyPoint)->fields.eventDailyPoint;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transform = (__int64 *)LocalizationManager__GetNumberFormat(eventDailyPoint, 0LL);
  if ( !this->fields.satisfyLabel )
    goto LABEL_64;
  v46 = (System_String_o *)transform;
  UILabel__set_text(this->fields.satisfyLabel, (System_String_o *)transform, 0LL);
  transform = (__int64 *)this->fields.pointLabel;
  if ( !transform )
    goto LABEL_64;
  UILabel__set_text((UILabel_o *)transform, v46, 0LL);
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
    goto LABEL_64;
  GameObjectExtensions__SetLocalPositionX(
    this->fields.pointLabelRight,
    this->fields.pointLabelRightInitPosX + (float)pointLabel->fields.mWidth,
    0LL);
  v50 = GameObjectExtensions__GetLocalPositionX(this->fields.pointLabelLeft, 0LL);
  transform = (__int64 *)this->fields.pointLabelLeft;
  if ( !transform )
    goto LABEL_64;
  v51 = v50;
  transform = (__int64 *)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)transform,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !transform )
    goto LABEL_64;
  v52 = *((_DWORD *)transform + 42);
  LocalScaleX = GameObjectExtensions__GetLocalScaleX(this->fields.pointLabelLeft, 0LL);
  v54 = GameObjectExtensions__GetLocalPositionX(this->fields.pointLabelRight, 0LL);
  transform = (__int64 *)this->fields.pointLabelRight;
  if ( !transform )
    goto LABEL_64;
  v55 = v54;
  transform = (__int64 *)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)transform,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !transform )
    goto LABEL_64;
  GameObjectExtensions__SetLocalPositionX(
    this->fields.pointRoot,
    this->fields.pointRootInitPosX
  + (float)((float)((float)(v51 - (float)(LocalScaleX * (float)v52)) + (float)(v55 + (float)*((int *)transform + 42)))
          * -0.5),
    0LL);
  TitleInfoEventDailyPoint__OnLoadSvtVoice(this, v56);
}


void __fastcall TitleInfoEventDailyPoint__PlayVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *voiceList; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 playCnt; // x8
  __int64 v12; // x8
  struct System_String_o *v13; // x1
  struct EventPointBehavior_o *eventPointBehavior; // x8
  System_String_o *VoiceAssetName_39436496; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  SeManager_c *v18; // x8
  System_String_o *voiceName; // x20
  System_String_o *v20; // x21
  float DEFAULT_VOLUME; // s8
  System_Action_o *v22; // x22
  struct SePlayer_o *v23; // x0
  ServantStatusBattleListViewItem_o *p_voicePlayer; // x19
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_49FA4C6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v3);
    sub_1B640C8(&SeManager_TypeInfo, v4);
    sub_1B640C8(&SoundManager_TypeInfo, v5);
    sub_1B640C8(&Method_TitleInfoEventDailyPoint_EndPlayVoice__, v6);
    byte_49FA4C6 = 1;
  }
  voiceList = (System_Collections_Generic_List_object__o *)this->fields.voiceList;
  if ( !voiceList )
    goto LABEL_13;
  voiceList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             voiceList,
                                                             this->fields.selectVoiceIndex,
                                                             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  if ( !voiceList )
    goto LABEL_13;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= voiceList->fields._size )
    sub_1B6432C(voiceList, v8);
  v12 = *((_QWORD *)&voiceList->fields._syncRoot + playCnt);
  if ( !v12
    || (v13 = *(struct System_String_o **)(v12 + 16),
        this->fields.voiceName = v13,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.voiceName, (int32_t)v13, v9, v10),
        (eventPointBehavior = this->fields.eventPointBehavior) == 0LL) )
  {
LABEL_13:
    sub_1B64324(voiceList);
  }
  VoiceAssetName_39436496 = ServantVoiceEntity__getVoiceAssetName_39436496(eventPointBehavior->fields.svtId, 0LL);
  v18 = SeManager_TypeInfo;
  voiceName = this->fields.voiceName;
  v20 = VoiceAssetName_39436496;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v18 = SeManager_TypeInfo;
  }
  DEFAULT_VOLUME = v18->static_fields->DEFAULT_VOLUME;
  v22 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_TitleInfoEventDailyPoint_EndPlayVoice__, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v23 = SoundManager__playVoice_38387180(v20, voiceName, DEFAULT_VOLUME, v22, 0LL);
  this->fields.voicePlayer = v23;
  p_voicePlayer = (ServantStatusBattleListViewItem_o *)&this->fields.voicePlayer;
  sub_1B6406C(p_voicePlayer, (int32_t)v23, v25, v26);
  ++p_voicePlayer->fields.selectNum;
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
  System_Collections_Generic_List_object__o *v9; // x8
  const MethodInfo *v10; // x1

  v3 = this;
  if ( (byte_49FA4C5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v4);
    this = (TitleInfoEventDailyPoint_o *)sub_1B640C8(&System_Random_TypeInfo, v5);
    byte_49FA4C5 = 1;
  }
  voiceList = v3->fields.voiceList;
  if ( !voiceList )
    goto LABEL_11;
  if ( voiceList->fields._size )
  {
    v7 = (System_Random_o *)sub_1B64314(System_Random_TypeInfo, method, v2);
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
        v9 = (System_Collections_Generic_List_object__o *)v3->fields.voiceList;
        v3->fields.selectVoiceIndex = (int)this;
        if ( v9 )
        {
          this = (TitleInfoEventDailyPoint_o *)System_Collections_Generic_List_object___get_Item(
                                                 v9,
                                                 (int32_t)this,
                                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
          if ( this )
          {
            *(_QWORD *)&v3->fields.maxPlayCnt = (unsigned int)this->fields.m_CancellationTokenSource;
            TitleInfoEventDailyPoint__PlayVoice(v3, v10);
            return;
          }
        }
      }
    }
LABEL_11:
    sub_1B64324(this);
  }
}


void __fastcall TitleInfoEventDailyPoint__Update(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_49FA4C8 & 1) == 0 )
  {
    sub_1B640C8(&CTouch_TypeInfo, method);
    byte_49FA4C8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
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
  System_String_o *m_CancellationTokenSource; // x20
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v16; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v18; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *v22; // x20
  System_String_o *v23; // x0

  if ( (byte_49FA4CB & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_BgmMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&SoundManager_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_12902/*"StartVoice"*/, v9);
    byte_49FA4CB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v11 )
    goto LABEL_38;
  CommonUI__maskFadein(v11, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12902/*"StartVoice"*/,
    this->fields.voiceStartTime,
    0LL);
  eventPointBehavior = this->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_38;
  if ( eventPointBehavior->fields.bgmId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    Instance = (CommonUI_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BgmMaster___);
    v13 = this->fields.eventPointBehavior;
    if ( !v13 )
      goto LABEL_38;
    if ( !Instance )
      goto LABEL_38;
    Instance = (CommonUI_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               v13->fields.bgmId,
                               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_38;
    m_CancellationTokenSource = (System_String_o *)Instance->fields.m_CancellationTokenSource;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm(m_CancellationTokenSource, 0LL);
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)this->fields.simpleAnimation;
    if ( !Instance )
      goto LABEL_38;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    v16 = this->fields.simpleAnimation;
    if ( !v16 )
      goto LABEL_38;
    monitor = (UnityEngine_Object_o *)v16[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          SimpleAnimation__Play_63513060(v18, name, 0LL);
          goto LABEL_37;
        }
      }
LABEL_38:
      sub_1B64324(Instance);
    }
  }
  else
  {
    animation = (UnityEngine_Object_o *)this->fields.animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
    {
      Instance = (CommonUI_o *)this->fields.animation;
      if ( !Instance )
        goto LABEL_38;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
      Instance = (CommonUI_o *)this->fields.animation;
      if ( !Instance )
        goto LABEL_38;
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)Instance, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            UnityEngine_Animation__Play_68872828(v22, v23, 0LL);
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