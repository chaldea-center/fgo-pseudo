void __fastcall TitleInfoEventDailyPoint___ctor(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventDailyPoint__Close(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *voiceName; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_String_o **p_voiceAssetName; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_String_o *v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Action_o **p_endCallback; // x19
  System_Action_o *v27; // x20
  struct System_Action_o *endCallback; // t1

  if ( (byte_4B64E6F & 1) == 0 )
  {
    sub_1BE4ACC(&SoundManager_TypeInfo, method);
    byte_4B64E6F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BE4D28(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( this->fields.voicePlayer )
  {
    voiceName = this->fields.voiceName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoice_39615916(voiceName, 0.0, 0LL);
    this->fields.voicePlayer = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.voicePlayer, 0LL, v6, v7, v8, v9, v10, v11);
  }
  p_voiceAssetName = &this->fields.voiceAssetName;
  if ( !System_String__IsNullOrEmpty(this->fields.voiceAssetName, 0LL) )
  {
    v19 = *p_voiceAssetName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(v19, 0LL);
    *p_voiceAssetName = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.voiceAssetName, 0LL, v20, v21, v22, v23, v24, v25);
  }
  endCallback = this->fields.endCallback;
  p_endCallback = &this->fields.endCallback;
  v27 = endCallback;
  p_endCallback[7] = 0LL;
  *((_DWORD *)p_endCallback + 16) = 0;
  if ( endCallback )
  {
    *p_endCallback = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)p_endCallback, 0LL, v13, v14, v15, v16, v17, v18);
    ActionExtensions__Call(v27, 0LL);
  }
}


void __fastcall TitleInfoEventDailyPoint__EndPlayVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *voiceList; // x0
  __int64 playCnt; // x8
  __int64 v6; // x8

  if ( (byte_4B64E6C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, method);
    sub_1BE4ACC(&StringLiteral_10833/*"PlayVoice"*/, v3);
    byte_4B64E6C = 1;
  }
  if ( this->fields.playCnt < this->fields.maxPlayCnt )
  {
    voiceList = (System_Collections_Generic_List_object__o *)this->fields.voiceList;
    if ( voiceList )
    {
      voiceList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 voiceList,
                                                                 this->fields.selectVoiceIndex,
                                                                 (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
      if ( voiceList )
      {
        playCnt = this->fields.playCnt;
        if ( (unsigned int)playCnt >= voiceList->fields._size )
          sub_1BE4D30(voiceList, method);
        v6 = *((_QWORD *)&voiceList->fields._syncRoot + playCnt);
        if ( v6 )
        {
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_10833/*"PlayVoice"*/,
            *(float *)(v6 + 24),
            0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_1BE4D28(voiceList, method);
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
  struct EventPointBehavior_o *eventPointBehavior; // x8
  System_Collections_Generic_List_object__o *v15; // x20
  struct EventPointBehavior_o *v16; // x8
  struct System_String_array *voiceIds; // x8
  TitleInfoEventDailyPoint_o *v18; // x22
  __int64 v19; // x25
  System_Collections_Generic_List_object__o *v20; // x23
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  unsigned __int64 v27; // x23
  struct EventPointBehavior_o *v28; // x8
  struct System_String_array *v29; // x9
  int size; // w25
  TitleInfoEventDailyPoint_o *v31; // x22
  int32_t v32; // w23
  struct ItemIconComponent_o *itemIcon; // x8
  struct EventPointBehavior_o *v34; // x9
  System_Collections_Generic_List_object__o *voiceList; // x24
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  TitleInfoEventDailyPoint_o *v45; // x1
  Il2CppClass **v46; // x0
  struct EventPointBehavior_o *v47; // x8
  System_String_o *VoiceAssetName_40803308; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_String_o *voiceAssetName; // x20
  System_Action_o *v56; // x21

  v2 = this;
  if ( (byte_4B64E69 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v3);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantVoiceData____AddRange__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BE4ACC(&SoundManager_TypeInfo, v12);
    this = (TitleInfoEventDailyPoint_o *)sub_1BE4ACC(&Method_TitleInfoEventDailyPoint__OnLoadSvtVoice_b__26_0__, v13);
    byte_4B64E69 = 1;
  }
  eventPointBehavior = v2->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_39;
  if ( eventPointBehavior->fields.voiceIds )
  {
    v15 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v15,
      (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    this = (TitleInfoEventDailyPoint_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_39;
    this = (TitleInfoEventDailyPoint_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
    v16 = v2->fields.eventPointBehavior;
    if ( !v16 )
      goto LABEL_39;
    voiceIds = v16->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_39;
    v18 = this;
    v19 = *(_QWORD *)&voiceIds->max_length;
    v20 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v20,
      (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    v2->fields.voiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v20;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v2->fields.voiceList, (int64_t)v20, v21, v22, v23, v24, v25, v26);
    if ( (int)v19 >= 1 )
    {
      v27 = 0LL;
      while ( 1 )
      {
        v28 = v2->fields.eventPointBehavior;
        if ( !v28 )
          break;
        v29 = v28->fields.voiceIds;
        if ( !v29 )
          break;
        if ( v27 >= v29->max_length )
LABEL_40:
          sub_1BE4D30(this, method);
        if ( !v18 )
          break;
        this = (TitleInfoEventDailyPoint_o *)ServantVoiceMaster__getEntity_40825340(
                                               (ServantVoiceMaster_o *)v18,
                                               16,
                                               v28->fields.svtId,
                                               v28->fields.limitCount,
                                               v29->m_Items[v27],
                                               0LL);
        if ( this )
        {
          if ( !v15 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v15,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_35EC430 *)Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
        }
        if ( (unsigned int)v19 == ++v27 )
          goto LABEL_18;
      }
LABEL_39:
      sub_1BE4D28(this, method);
    }
LABEL_18:
    this = (TitleInfoEventDailyPoint_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_39;
    this = (TitleInfoEventDailyPoint_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !v15 )
      goto LABEL_39;
    size = v15->fields._size;
    if ( size >= 1 )
    {
      v31 = this;
      v32 = 0;
      do
      {
        this = (TitleInfoEventDailyPoint_o *)System_Collections_Generic_List_object___get_Item(
                                               v15,
                                               v32,
                                               (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
        if ( !this )
          goto LABEL_39;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_40;
        itemIcon = this->fields.itemIcon;
        if ( !itemIcon )
          goto LABEL_39;
        v34 = v2->fields.eventPointBehavior;
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
                                               0LL,
                                               0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          voiceList = (System_Collections_Generic_List_object__o *)v2->fields.voiceList;
          this = (TitleInfoEventDailyPoint_o *)System_Collections_Generic_List_object___get_Item(
                                                 v15,
                                                 v32,
                                                 (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
          if ( !voiceList )
            goto LABEL_39;
          items = voiceList->fields._items;
          v43 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          ++voiceList->fields._version;
          if ( !items )
            goto LABEL_39;
          v44 = voiceList->fields._size;
          v45 = this;
          if ( (unsigned int)v44 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              voiceList,
              (Il2CppObject *)this,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = &items->obj.klass + v44;
            voiceList->fields._size = v44 + 1;
            v46[4] = (Il2CppClass *)v45;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v46 + 4), (int64_t)v45, v36, v37, v38, v39, v40, v41);
          }
        }
      }
      while ( size != ++v32 );
    }
    v47 = v2->fields.eventPointBehavior;
    if ( !v47 )
      goto LABEL_39;
    VoiceAssetName_40803308 = ServantVoiceEntity__getVoiceAssetName_40803308(v47->fields.svtId, 0LL);
    v2->fields.voiceAssetName = VoiceAssetName_40803308;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&v2->fields.voiceAssetName,
      (int64_t)VoiceAssetName_40803308,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    voiceAssetName = v2->fields.voiceAssetName;
    v56 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v56, (Il2CppObject *)v2, Method_TitleInfoEventDailyPoint__OnLoadSvtVoice_b__26_0__, 0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage(voiceAssetName, v56, 1, 0LL);
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
  AvalonSceneManager_c *v11; // x8
  CommonUI_o *v12; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21

  if ( (byte_4B64E6E & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BE4ACC(&Method_TitleInfoEventDailyPoint_OnTouchDisp__, v5);
    sub_1BE4ACC(&Method_TitleInfoEventDailyPoint__OnTouchDisp_b__31_0__, v6);
    byte_4B64E6E = 1;
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
    v8 = (_QWORD *)sub_1BE4AE4(Method_TitleInfoEventDailyPoint_OnTouchDisp__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  v12 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v14 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_TitleInfoEventDailyPoint__OnTouchDisp_b__31_0__, 0LL);
  if ( !v12 )
LABEL_11:
    sub_1BE4D28(screenTouchInfo, method);
  CommonUI__maskFadeout(v12, 2, DEFAULT_FADE_TIME, v14, 0LL);
  this->fields.state = 0;
}


void __fastcall TitleInfoEventDailyPoint__Open(
        TitleInfoEventDailyPoint_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  __int64 *transform; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct EventPointBehavior_array *eventPointBehavior; // x8
  struct EventPointBehavior_o *v31; // x1
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  Il2CppObject *Instance; // x23
  Il2CppObject *Component_object; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  struct EventPointBehavior_o *v51; // x8
  Il2CppObject *v52; // x0
  System_String_o *v53; // x0
  UnityEngine_Object_o *simpleAnimation; // x22
  System_String_o *v55; // x21
  __int64 v56; // x8
  void *v57; // x21
  __int64 v58; // x9
  SimpleAnimation_State_c **v59; // x10
  __int64 v60; // x0
  UnityEngine_Object_o *animation; // x22
  ItemIconComponent_o *itemIcon; // x21
  int32_t eventDailyPoint; // w20
  System_String_o *v64; // x20
  float LocalPositionX; // s0
  UnityEngine_GameObject_o *pointRoot; // x0
  struct UILabel_o *pointLabel; // x8
  float v68; // s0
  float v69; // s8
  int v70; // w20
  float LocalScaleX; // s9
  float v72; // s0
  float v73; // s10
  const MethodInfo *v74; // x1
  int32_t effectId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B64E68 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, callback);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v10);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v11);
    sub_1BE4ACC(&int_TypeInfo, v12);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v13);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v14);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1BE4ACC(&SimpleAnimation_State_TypeInfo, v16);
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v17);
    sub_1BE4ACC(&StringLiteral_17440/*"bit_dedicate_reward_"*/, v18);
    byte_4B64E68 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B64EE3 )
  {
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, callback);
    byte_4B64EE3 = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  eventDailyPoint_k__BackingField = v19->static_fields->_eventDailyPoint_k__BackingField;
  this->fields.eventDailyPoint = eventDailyPoint_k__BackingField;
  p_eventDailyPoint = &this->fields.eventDailyPoint;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.eventDailyPoint,
    (int64_t)eventDailyPoint_k__BackingField,
    (int64_t)method,
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
    goto LABEL_64;
  if ( !eventPointBehavior->max_length )
    sub_1BE4D30(transform, v23);
  v31 = eventPointBehavior->m_Items[0];
  this->fields.eventPointBehavior = v31;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.eventPointBehavior,
    (int64_t)v31,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                         (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.screenTouchInfo,
      (int64_t)Component_object,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
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
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.endCallback, (int64_t)callback, v42, v43, v44, v45, v46, v47);
  v51 = this->fields.eventPointBehavior;
  this->fields.state = 0;
  if ( !v51 )
    goto LABEL_64;
  effectId = v51->fields.effectId;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId, v48, v49, v50);
  v53 = System_String__Concat((Il2CppObject *)StringLiteral_17440/*"bit_dedicate_reward_"*/, v52, 0LL);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  v55 = v53;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    transform = (__int64 *)this->fields.simpleAnimation;
    if ( transform )
    {
      transform = (__int64 *)SimpleAnimation__get_Item((SimpleAnimation_o *)transform, v55, 0LL);
      if ( transform )
      {
        v56 = *transform;
        v57 = transform;
        v58 = *(unsigned __int16 *)(*transform + 302);
        if ( *(_WORD *)(*transform + 302) )
        {
          v59 = (SimpleAnimation_State_c **)(*(_QWORD *)(v56 + 176) + 8LL);
          while ( *(v59 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v58;
            v59 += 2;
            if ( !v58 )
              goto LABEL_31;
          }
          v60 = v56 + 16LL * (*(_DWORD *)v59 + 14) + 312;
        }
        else
        {
LABEL_31:
          v60 = sub_1C36AAC(transform, SimpleAnimation_State_TypeInfo, 14LL);
        }
        transform = (__int64 *)(*(__int64 (__fastcall **)(void *, _QWORD))v60)(v57, *(_QWORD *)(v60 + 8));
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
    sub_1BE4D28(transform, v23);
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
  {
    transform = (__int64 *)this->fields.animation;
    if ( !transform )
      goto LABEL_64;
    transform = (__int64 *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)transform, v55, 0LL);
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
  if ( !byte_4B64EE4 )
  {
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v23);
    byte_4B64EE4 = 1;
  }
  transform = (__int64 *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    transform = (__int64 *)TerminalPramsManager_TypeInfo;
  }
  if ( !itemIcon )
    goto LABEL_64;
  ItemIconComponent__SetItem(itemIcon, *(_DWORD *)(transform[23] + 360), -1, 1, 0LL);
  if ( !*p_eventDailyPoint )
    goto LABEL_64;
  eventDailyPoint = (*p_eventDailyPoint)->fields.eventDailyPoint;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transform = (__int64 *)LocalizationManager__GetNumberFormat(eventDailyPoint, 0LL);
  if ( !this->fields.satisfyLabel )
    goto LABEL_64;
  v64 = (System_String_o *)transform;
  UILabel__set_text(this->fields.satisfyLabel, (System_String_o *)transform, 0LL);
  transform = (__int64 *)this->fields.pointLabel;
  if ( !transform )
    goto LABEL_64;
  UILabel__set_text((UILabel_o *)transform, v64, 0LL);
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
  v68 = GameObjectExtensions__GetLocalPositionX(this->fields.pointLabelLeft, 0LL);
  transform = (__int64 *)this->fields.pointLabelLeft;
  if ( !transform )
    goto LABEL_64;
  v69 = v68;
  transform = (__int64 *)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)transform,
                           (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !transform )
    goto LABEL_64;
  v70 = *((_DWORD *)transform + 42);
  LocalScaleX = GameObjectExtensions__GetLocalScaleX(this->fields.pointLabelLeft, 0LL);
  v72 = GameObjectExtensions__GetLocalPositionX(this->fields.pointLabelRight, 0LL);
  transform = (__int64 *)this->fields.pointLabelRight;
  if ( !transform )
    goto LABEL_64;
  v73 = v72;
  transform = (__int64 *)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)transform,
                           (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !transform )
    goto LABEL_64;
  GameObjectExtensions__SetLocalPositionX(
    this->fields.pointRoot,
    this->fields.pointRootInitPosX
  + (float)((float)((float)(v69 - (float)(LocalScaleX * (float)v70)) + (float)(v73 + (float)*((int *)transform + 42)))
          * -0.5),
    0LL);
  TitleInfoEventDailyPoint__OnLoadSvtVoice(this, v74);
}


void __fastcall TitleInfoEventDailyPoint__PlayVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *voiceList; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 playCnt; // x8
  __int64 v15; // x8
  struct System_String_o *v16; // x1
  struct EventPointBehavior_o *eventPointBehavior; // x8
  System_String_o *VoiceAssetName_40803308; // x0
  SeManager_c *v19; // x8
  System_String_o *voiceName; // x20
  System_String_o *v21; // x21
  float DEFAULT_VOLUME; // s8
  System_Action_o *v23; // x22
  struct SePlayer_o *v24; // x0
  struct SePlayer_o **p_voicePlayer; // x19
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4B64E6B & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v3);
    sub_1BE4ACC(&SeManager_TypeInfo, v4);
    sub_1BE4ACC(&SoundManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_TitleInfoEventDailyPoint_EndPlayVoice__, v6);
    byte_4B64E6B = 1;
  }
  voiceList = (System_Collections_Generic_List_object__o *)this->fields.voiceList;
  if ( !voiceList )
    goto LABEL_13;
  voiceList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             voiceList,
                                                             this->fields.selectVoiceIndex,
                                                             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  if ( !voiceList )
    goto LABEL_13;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= voiceList->fields._size )
    sub_1BE4D30(voiceList, method);
  v15 = *((_QWORD *)&voiceList->fields._syncRoot + playCnt);
  if ( !v15
    || (v16 = *(struct System_String_o **)(v15 + 16),
        this->fields.voiceName = v16,
        sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.voiceName, (int64_t)v16, v8, v9, v10, v11, v12, v13),
        (eventPointBehavior = this->fields.eventPointBehavior) == 0LL) )
  {
LABEL_13:
    sub_1BE4D28(voiceList, method);
  }
  VoiceAssetName_40803308 = ServantVoiceEntity__getVoiceAssetName_40803308(eventPointBehavior->fields.svtId, 0LL);
  v19 = SeManager_TypeInfo;
  voiceName = this->fields.voiceName;
  v21 = VoiceAssetName_40803308;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v19 = SeManager_TypeInfo;
  }
  DEFAULT_VOLUME = v19->static_fields->DEFAULT_VOLUME;
  v23 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_TitleInfoEventDailyPoint_EndPlayVoice__, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v24 = SoundManager__playVoice_39615552(v21, voiceName, DEFAULT_VOLUME, v23, 0LL);
  this->fields.voicePlayer = v24;
  p_voicePlayer = &this->fields.voicePlayer;
  sub_1BE4A70((PartyOrganizationUtility_o *)p_voicePlayer, (int64_t)v24, v26, v27, v28, v29, v30, v31);
  ++*((_DWORD *)p_voicePlayer + 4);
}


void __fastcall TitleInfoEventDailyPoint__StartVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  TitleInfoEventDailyPoint_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Random_o *v6; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *v7; // x8
  System_Collections_Generic_List_object__o *v8; // x8

  v2 = this;
  if ( (byte_4B64E6A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v3);
    this = (TitleInfoEventDailyPoint_o *)sub_1BE4ACC(&System_Random_TypeInfo, v4);
    byte_4B64E6A = 1;
  }
  voiceList = v2->fields.voiceList;
  if ( !voiceList )
    goto LABEL_11;
  if ( voiceList->fields._size )
  {
    v6 = (System_Random_o *)sub_1BE4D18(System_Random_TypeInfo);
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
        v8 = (System_Collections_Generic_List_object__o *)v2->fields.voiceList;
        v2->fields.selectVoiceIndex = (int)this;
        if ( v8 )
        {
          this = (TitleInfoEventDailyPoint_o *)System_Collections_Generic_List_object___get_Item(
                                                 v8,
                                                 (int32_t)this,
                                                 (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
    sub_1BE4D28(this, method);
  }
}


void __fastcall TitleInfoEventDailyPoint__Update(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4B64E6D & 1) == 0 )
  {
    sub_1BE4ACC(&CTouch_TypeInfo, method);
    byte_4B64E6D = 1;
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
  __int64 v11; // x1
  CommonUI_o *v12; // x20
  struct EventPointBehavior_o *eventPointBehavior; // x8
  struct EventPointBehavior_o *v14; // x8
  System_String_o *m_CancellationTokenSource; // x20
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v17; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v19; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *v23; // x20
  System_String_o *v24; // x0

  if ( (byte_4B64E70 & 1) == 0 )
  {
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_BgmMaster___, v3);
    sub_1BE4ACC(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__, v4);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BE4ACC(&SoundManager_TypeInfo, v8);
    sub_1BE4ACC(&StringLiteral_13163/*"StartVoice"*/, v9);
    byte_4B64E70 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v12 )
    goto LABEL_38;
  CommonUI__maskFadein(v12, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13163/*"StartVoice"*/,
    this->fields.voiceStartTime,
    0LL);
  eventPointBehavior = this->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_38;
  if ( eventPointBehavior->fields.bgmId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    Instance = (CommonUI_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_BgmMaster___);
    v14 = this->fields.eventPointBehavior;
    if ( !v14 )
      goto LABEL_38;
    if ( !Instance )
      goto LABEL_38;
    Instance = (CommonUI_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               v14->fields.bgmId,
                               (const MethodInfo_31FD7C4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
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
    v17 = this->fields.simpleAnimation;
    if ( !v17 )
      goto LABEL_38;
    monitor = (UnityEngine_Object_o *)v17[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          SimpleAnimation__Play_64837092(v19, name, 0LL);
          goto LABEL_37;
        }
      }
LABEL_38:
      sub_1BE4D28(Instance, v11);
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
        v23 = this->fields.animation;
        if ( v23 )
        {
          Instance = (CommonUI_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0LL);
          if ( Instance )
          {
            v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
            UnityEngine_Animation__Play_70197004(v23, v24, 0LL);
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