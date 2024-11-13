void __fastcall TitleInfoEventDailyPoint___ctor(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventDailyPoint__Close(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *voiceName; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_String_o **p_voiceAssetName; // x20
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_String_o *v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Action_o **p_endCallback; // x19
  System_Action_o *v30; // x20
  struct System_Action_o *endCallback; // t1

  if ( (byte_4B144DB & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, method, v2);
    byte_4B144DB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( this->fields.voicePlayer )
  {
    voiceName = this->fields.voiceName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v6);
    SoundManager__stopVoice_39419756(voiceName, 0.0, 0LL);
    this->fields.voicePlayer = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voicePlayer, 0LL, v8, v9, v10, v11, v12, v13);
  }
  p_voiceAssetName = &this->fields.voiceAssetName;
  if ( !System_String__IsNullOrEmpty(this->fields.voiceAssetName, 0LL) )
  {
    v22 = *p_voiceAssetName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v15);
    SoundManager__releaseAudioAssetStorage(v22, 0LL);
    *p_voiceAssetName = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voiceAssetName, 0LL, v23, v24, v25, v26, v27, v28);
  }
  endCallback = this->fields.endCallback;
  p_endCallback = &this->fields.endCallback;
  v30 = endCallback;
  p_endCallback[7] = 0LL;
  *((_DWORD *)p_endCallback + 16) = 0;
  if ( endCallback )
  {
    *p_endCallback = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_endCallback, 0LL, v16, v17, v18, v19, v20, v21);
    ActionExtensions__Call(v30, 0LL);
  }
}


void __fastcall TitleInfoEventDailyPoint__EndPlayVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *voiceList; // x0
  __int64 playCnt; // x8
  __int64 v8; // x8

  if ( (byte_4B144D8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, method, v2);
    sub_1BCA7E0(&StringLiteral_10805/*"PlayVoice"*/, v4, v5);
    byte_4B144D8 = 1;
  }
  if ( this->fields.playCnt < this->fields.maxPlayCnt )
  {
    voiceList = (System_Collections_Generic_List_object__o *)this->fields.voiceList;
    if ( voiceList )
    {
      voiceList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 voiceList,
                                                                 this->fields.selectVoiceIndex,
                                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
      if ( voiceList )
      {
        playCnt = this->fields.playCnt;
        if ( (unsigned int)playCnt >= voiceList->fields._size )
          sub_1BCAA44(voiceList, method);
        v8 = *((_QWORD *)&voiceList->fields._syncRoot + playCnt);
        if ( v8 )
        {
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_10805/*"PlayVoice"*/,
            *(float *)(v8 + 24),
            0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_1BCAA3C(voiceList, method);
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
  __int64 v3; // x3
  TitleInfoEventDailyPoint_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  struct EventPointBehavior_o *eventPointBehavior; // x8
  System_Collections_Generic_List_object__o *v28; // x20
  __int64 v29; // x2
  __int64 v30; // x3
  struct EventPointBehavior_o *v31; // x8
  struct System_String_array *voiceIds; // x8
  TitleInfoEventDailyPoint_o *v33; // x22
  __int64 v34; // x25
  System_Collections_Generic_List_object__o *v35; // x23
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  unsigned __int64 v42; // x23
  struct EventPointBehavior_o *v43; // x8
  struct System_String_array *v44; // x9
  int size; // w25
  TitleInfoEventDailyPoint_o *v46; // x22
  int32_t v47; // w23
  struct ItemIconComponent_o *itemIcon; // x8
  struct EventPointBehavior_o *v49; // x9
  System_Collections_Generic_List_object__o *voiceList; // x24
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  TitleInfoEventDailyPoint_o *v60; // x1
  Il2CppClass **v61; // x0
  struct EventPointBehavior_o *v62; // x8
  System_String_o *VoiceAssetName_40580584; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  System_String_o *voiceAssetName; // x20
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  System_Action_o *v74; // x21
  __int64 v75; // x1

  v4 = this;
  if ( (byte_4B144D5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____AddRange__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&SoundManager_TypeInfo, v23, v24);
    this = (TitleInfoEventDailyPoint_o *)sub_1BCA7E0(
                                           &Method_TitleInfoEventDailyPoint__OnLoadSvtVoice_b__26_0__,
                                           v25,
                                           v26);
    byte_4B144D5 = 1;
  }
  eventPointBehavior = v4->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_39;
  if ( eventPointBehavior->fields.voiceIds )
  {
    v28 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
    System_Collections_Generic_List_object____ctor(
      v28,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    this = (TitleInfoEventDailyPoint_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_39;
    this = (TitleInfoEventDailyPoint_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
    v31 = v4->fields.eventPointBehavior;
    if ( !v31 )
      goto LABEL_39;
    voiceIds = v31->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_39;
    v33 = this;
    v34 = *(_QWORD *)&voiceIds->max_length;
    v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                         method,
                                                         v29,
                                                         v30);
    System_Collections_Generic_List_object____ctor(
      v35,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    v4->fields.voiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v35;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.voiceList, (int64_t)v35, v36, v37, v38, v39, v40, v41);
    if ( (int)v34 >= 1 )
    {
      v42 = 0LL;
      while ( 1 )
      {
        v43 = v4->fields.eventPointBehavior;
        if ( !v43 )
          break;
        v44 = v43->fields.voiceIds;
        if ( !v44 )
          break;
        if ( v42 >= v44->max_length )
LABEL_40:
          sub_1BCAA44(this, method);
        if ( !v33 )
          break;
        this = (TitleInfoEventDailyPoint_o *)ServantVoiceMaster__getEntity_40602528(
                                               (ServantVoiceMaster_o *)v33,
                                               16,
                                               v43->fields.svtId,
                                               v43->fields.limitCount,
                                               v44->m_Items[v42],
                                               0LL);
        if ( this )
        {
          if ( !v28 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v28,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
        }
        if ( (unsigned int)v34 == ++v42 )
          goto LABEL_18;
      }
LABEL_39:
      sub_1BCAA3C(this, method);
    }
LABEL_18:
    this = (TitleInfoEventDailyPoint_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_39;
    this = (TitleInfoEventDailyPoint_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !v28 )
      goto LABEL_39;
    size = v28->fields._size;
    if ( size >= 1 )
    {
      v46 = this;
      v47 = 0;
      do
      {
        this = (TitleInfoEventDailyPoint_o *)System_Collections_Generic_List_object___get_Item(
                                               v28,
                                               v47,
                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
        if ( !this )
          goto LABEL_39;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_40;
        itemIcon = this->fields.itemIcon;
        if ( !itemIcon )
          goto LABEL_39;
        v49 = v4->fields.eventPointBehavior;
        if ( !v49 || !v46 )
          goto LABEL_39;
        this = (TitleInfoEventDailyPoint_o *)VoicePlayCondMaster__isVoicePlay(
                                               (VoicePlayCondMaster_o *)v46,
                                               v49->fields.svtId,
                                               *(System_String_o **)&itemIcon->fields.m_CachedPtr,
                                               0LL,
                                               -1LL,
                                               -1,
                                               0LL,
                                               0LL,
                                               0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          voiceList = (System_Collections_Generic_List_object__o *)v4->fields.voiceList;
          this = (TitleInfoEventDailyPoint_o *)System_Collections_Generic_List_object___get_Item(
                                                 v28,
                                                 v47,
                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
          if ( !voiceList )
            goto LABEL_39;
          items = voiceList->fields._items;
          v58 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          ++voiceList->fields._version;
          if ( !items )
            goto LABEL_39;
          v59 = voiceList->fields._size;
          v60 = this;
          if ( (unsigned int)v59 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              voiceList,
              (Il2CppObject *)this,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
          }
          else
          {
            v61 = &items->obj.klass + v59;
            voiceList->fields._size = v59 + 1;
            v61[4] = (Il2CppClass *)v60;
            sub_1BCA784((PartyOrganizationUtility_o *)(v61 + 4), (int64_t)v60, v51, v52, v53, v54, v55, v56);
          }
        }
      }
      while ( size != ++v47 );
    }
    v62 = v4->fields.eventPointBehavior;
    if ( !v62 )
      goto LABEL_39;
    VoiceAssetName_40580584 = ServantVoiceEntity__getVoiceAssetName_40580584(v62->fields.svtId, 0LL);
    v4->fields.voiceAssetName = VoiceAssetName_40580584;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v4->fields.voiceAssetName,
      (int64_t)VoiceAssetName_40580584,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
    voiceAssetName = v4->fields.voiceAssetName;
    v74 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v71, v72, v73);
    System_Action___ctor(v74, (Il2CppObject *)v4, Method_TitleInfoEventDailyPoint__OnLoadSvtVoice_b__26_0__, 0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v75);
    SoundManager__loadAudioAssetStorage(voiceAssetName, v74, 1, 0LL);
  }
}


void __fastcall TitleInfoEventDailyPoint__OnTouchDisp(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Component_o *screenTouchInfo; // x0
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  AvalonSceneManager_c *v19; // x8
  CommonUI_o *v20; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x21

  if ( (byte_4B144DA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_TitleInfoEventDailyPoint_OnTouchDisp__, v8, v9);
    sub_1BCA7E0(&Method_TitleInfoEventDailyPoint__OnTouchDisp_b__31_0__, v10, v11);
    byte_4B144DA = 1;
  }
  screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
  if ( !screenTouchInfo )
    goto LABEL_11;
  screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL);
  if ( !screenTouchInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0LL);
  v13 = Method_TitleInfoEventDailyPoint_OnTouchDisp__;
  if ( (*((_BYTE *)Method_TitleInfoEventDailyPoint_OnTouchDisp__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1BCA7F8(Method_TitleInfoEventDailyPoint_OnTouchDisp__);
  v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = AvalonSceneManager_TypeInfo;
  v20 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v16);
    v19 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
  v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v16, v17, v18);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_TitleInfoEventDailyPoint__OnTouchDisp_b__31_0__, 0LL);
  if ( !v20 )
LABEL_11:
    sub_1BCAA3C(screenTouchInfo, method);
  CommonUI__maskFadeout(v20, 2, DEFAULT_FADE_TIME, v22, 0LL);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  TerminalPramsManager_c *v28; // x0
  struct EventDailyPoint_o *eventDailyPoint_k__BackingField; // x1
  struct EventDailyPoint_o **p_eventDailyPoint; // x20
  __int64 *transform; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct EventPointBehavior_array *eventPointBehavior; // x8
  struct EventPointBehavior_o *v40; // x1
  __int64 v41; // x1
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  Il2CppObject *Instance; // x23
  Il2CppObject *Component_object; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct EventPointBehavior_o *v58; // x8
  Il2CppObject *v59; // x0
  System_String_o *v60; // x0
  __int64 v61; // x1
  UnityEngine_Object_o *simpleAnimation; // x22
  System_String_o *v63; // x21
  __int64 v64; // x8
  void *v65; // x21
  __int64 v66; // x9
  SimpleAnimation_State_c **v67; // x10
  __int64 v68; // x0
  UnityEngine_Object_o *animation; // x22
  __int64 v70; // x2
  ItemIconComponent_o *itemIcon; // x21
  int32_t eventDailyPoint; // w20
  System_String_o *v73; // x20
  float LocalPositionX; // s0
  UnityEngine_GameObject_o *pointRoot; // x0
  struct UILabel_o *pointLabel; // x8
  float v77; // s0
  float v78; // s8
  int v79; // w20
  float LocalScaleX; // s9
  float v81; // s0
  float v82; // s10
  const MethodInfo *v83; // x1
  int32_t effectId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B144D4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, callback, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v12, v13);
    sub_1BCA7E0(&int_TypeInfo, v14, v15);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20, v21);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v22, v23);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_17396/*"bit_dedicate_reward_"*/, v26, v27);
    byte_4B144D4 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, callback);
  if ( !byte_4B1454E )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, callback, method);
    byte_4B1454E = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, callback);
    v28 = TerminalPramsManager_TypeInfo;
  }
  eventDailyPoint_k__BackingField = v28->static_fields->_eventDailyPoint_k__BackingField;
  this->fields.eventDailyPoint = eventDailyPoint_k__BackingField;
  p_eventDailyPoint = &this->fields.eventDailyPoint;
  sub_1BCA784(
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
    sub_1BCAA44(transform, v32);
  v40 = eventPointBehavior->m_Items[0];
  this->fields.eventPointBehavior = v40;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventPointBehavior,
    (int64_t)v40,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.screenTouchInfo,
      (int64_t)Component_object,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.endCallback, (int64_t)callback, v52, v53, v54, v55, v56, v57);
  v58 = this->fields.eventPointBehavior;
  this->fields.state = 0;
  if ( !v58 )
    goto LABEL_64;
  effectId = v58->fields.effectId;
  v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId);
  v60 = System_String__Concat((Il2CppObject *)StringLiteral_17396/*"bit_dedicate_reward_"*/, v59, 0LL);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  v63 = v60;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v61);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    transform = (__int64 *)this->fields.simpleAnimation;
    if ( transform )
    {
      transform = (__int64 *)SimpleAnimation__get_Item((SimpleAnimation_o *)transform, v63, 0LL);
      if ( transform )
      {
        v64 = *transform;
        v65 = transform;
        v66 = *(unsigned __int16 *)(*transform + 302);
        if ( *(_WORD *)(*transform + 302) )
        {
          v67 = (SimpleAnimation_State_c **)(*(_QWORD *)(v64 + 176) + 8LL);
          while ( *(v67 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v66;
            v67 += 2;
            if ( !v66 )
              goto LABEL_31;
          }
          v68 = v64 + 16LL * (*(_DWORD *)v67 + 14) + 312;
        }
        else
        {
LABEL_31:
          v68 = sub_1C1C7C0(transform, SimpleAnimation_State_TypeInfo, 14LL);
        }
        transform = (__int64 *)(*(__int64 (__fastcall **)(void *, _QWORD))v68)(v65, *(_QWORD *)(v68 + 8));
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
    sub_1BCAA3C(transform, v32);
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
  if ( UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
  {
    transform = (__int64 *)this->fields.animation;
    if ( !transform )
      goto LABEL_64;
    transform = (__int64 *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)transform, v63, 0LL);
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
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v32);
  if ( !byte_4B1454F )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v32, v70);
    byte_4B1454F = 1;
  }
  transform = (__int64 *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v32);
    transform = (__int64 *)TerminalPramsManager_TypeInfo;
  }
  if ( !itemIcon )
    goto LABEL_64;
  ItemIconComponent__SetItem(itemIcon, *(_DWORD *)(transform[23] + 360), -1, 0LL);
  if ( !*p_eventDailyPoint )
    goto LABEL_64;
  eventDailyPoint = (*p_eventDailyPoint)->fields.eventDailyPoint;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
  transform = (__int64 *)LocalizationManager__GetNumberFormat(eventDailyPoint, 0LL);
  if ( !this->fields.satisfyLabel )
    goto LABEL_64;
  v73 = (System_String_o *)transform;
  UILabel__set_text(this->fields.satisfyLabel, (System_String_o *)transform, 0LL);
  transform = (__int64 *)this->fields.pointLabel;
  if ( !transform )
    goto LABEL_64;
  UILabel__set_text((UILabel_o *)transform, v73, 0LL);
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
  v77 = GameObjectExtensions__GetLocalPositionX(this->fields.pointLabelLeft, 0LL);
  transform = (__int64 *)this->fields.pointLabelLeft;
  if ( !transform )
    goto LABEL_64;
  v78 = v77;
  transform = (__int64 *)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)transform,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !transform )
    goto LABEL_64;
  v79 = *((_DWORD *)transform + 42);
  LocalScaleX = GameObjectExtensions__GetLocalScaleX(this->fields.pointLabelLeft, 0LL);
  v81 = GameObjectExtensions__GetLocalPositionX(this->fields.pointLabelRight, 0LL);
  transform = (__int64 *)this->fields.pointLabelRight;
  if ( !transform )
    goto LABEL_64;
  v82 = v81;
  transform = (__int64 *)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)transform,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !transform )
    goto LABEL_64;
  GameObjectExtensions__SetLocalPositionX(
    this->fields.pointRoot,
    this->fields.pointRootInitPosX
  + (float)((float)((float)(v78 - (float)(LocalScaleX * (float)v79)) + (float)(v82 + (float)*((int *)transform + 42)))
          * -0.5),
    0LL);
  TitleInfoEventDailyPoint__OnLoadSvtVoice(this, v83);
}


void __fastcall TitleInfoEventDailyPoint__PlayVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *voiceList; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 playCnt; // x8
  __int64 v20; // x8
  struct System_String_o *v21; // x1
  struct EventPointBehavior_o *eventPointBehavior; // x8
  System_String_o *VoiceAssetName_40580584; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  SeManager_c *v27; // x8
  System_String_o *voiceName; // x20
  System_String_o *v29; // x21
  float DEFAULT_VOLUME; // s8
  System_Action_o *v31; // x22
  __int64 v32; // x1
  struct SePlayer_o *v33; // x0
  struct SePlayer_o **p_voicePlayer; // x19
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  if ( (byte_4B144D7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v4, v5);
    sub_1BCA7E0(&SeManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&SoundManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_TitleInfoEventDailyPoint_EndPlayVoice__, v10, v11);
    byte_4B144D7 = 1;
  }
  voiceList = (System_Collections_Generic_List_object__o *)this->fields.voiceList;
  if ( !voiceList )
    goto LABEL_13;
  voiceList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             voiceList,
                                                             this->fields.selectVoiceIndex,
                                                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  if ( !voiceList )
    goto LABEL_13;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= voiceList->fields._size )
    sub_1BCAA44(voiceList, method);
  v20 = *((_QWORD *)&voiceList->fields._syncRoot + playCnt);
  if ( !v20
    || (v21 = *(struct System_String_o **)(v20 + 16),
        this->fields.voiceName = v21,
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voiceName, (int64_t)v21, v13, v14, v15, v16, v17, v18),
        (eventPointBehavior = this->fields.eventPointBehavior) == 0LL) )
  {
LABEL_13:
    sub_1BCAA3C(voiceList, method);
  }
  VoiceAssetName_40580584 = ServantVoiceEntity__getVoiceAssetName_40580584(eventPointBehavior->fields.svtId, 0LL);
  v27 = SeManager_TypeInfo;
  voiceName = this->fields.voiceName;
  v29 = VoiceAssetName_40580584;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v24);
    v27 = SeManager_TypeInfo;
  }
  DEFAULT_VOLUME = v27->static_fields->DEFAULT_VOLUME;
  v31 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_TitleInfoEventDailyPoint_EndPlayVoice__, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v32);
  v33 = SoundManager__playVoice_39419392(v29, voiceName, DEFAULT_VOLUME, v31, 0LL);
  this->fields.voicePlayer = v33;
  p_voicePlayer = &this->fields.voicePlayer;
  sub_1BCA784((PartyOrganizationUtility_o *)p_voicePlayer, (int64_t)v33, v35, v36, v37, v38, v39, v40);
  ++*((_DWORD *)p_voicePlayer + 4);
}


void __fastcall TitleInfoEventDailyPoint__StartVoice(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  TitleInfoEventDailyPoint_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Random_o *v10; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *v11; // x8
  System_Collections_Generic_List_object__o *v12; // x8

  v4 = this;
  if ( (byte_4B144D6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v5, v6);
    this = (TitleInfoEventDailyPoint_o *)sub_1BCA7E0(&System_Random_TypeInfo, v7, v8);
    byte_4B144D6 = 1;
  }
  voiceList = v4->fields.voiceList;
  if ( !voiceList )
    goto LABEL_11;
  if ( voiceList->fields._size )
  {
    v10 = (System_Random_o *)sub_1BCAA2C(System_Random_TypeInfo, method, v2, v3);
    System_Random___ctor(v10, 0LL);
    v11 = v4->fields.voiceList;
    if ( v11 )
    {
      if ( v10 )
      {
        this = (TitleInfoEventDailyPoint_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._7_Next.method)(
                                               v10,
                                               (unsigned int)v11->fields._size,
                                               v10->klass->vtable._8_NextDouble.methodPtr);
        v12 = (System_Collections_Generic_List_object__o *)v4->fields.voiceList;
        v4->fields.selectVoiceIndex = (int)this;
        if ( v12 )
        {
          this = (TitleInfoEventDailyPoint_o *)System_Collections_Generic_List_object___get_Item(
                                                 v12,
                                                 (int32_t)this,
                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
          if ( this )
          {
            *(_QWORD *)&v4->fields.maxPlayCnt = (unsigned int)this->fields.m_CancellationTokenSource;
            TitleInfoEventDailyPoint__PlayVoice(v4, method);
            return;
          }
        }
      }
    }
LABEL_11:
    sub_1BCAA3C(this, method);
  }
}


void __fastcall TitleInfoEventDailyPoint__Update(TitleInfoEventDailyPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1

  if ( (byte_4B144D9 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, method, v2);
    byte_4B144D9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
    if ( CTouch__isTouchPush(0LL) )
      TitleInfoEventDailyPoint__OnTouchDisp(this, v4);
  }
}


void __fastcall TitleInfoEventDailyPoint___OnLoadSvtVoice_b__26_0(
        TitleInfoEventDailyPoint_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  CommonUI_o *Instance; // x0
  __int64 v19; // x1
  CommonUI_o *v20; // x20
  struct EventPointBehavior_o *eventPointBehavior; // x8
  struct EventPointBehavior_o *v22; // x8
  System_String_o *m_CancellationTokenSource; // x20
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v25; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v27; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  __int64 v30; // x1
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *v32; // x20
  System_String_o *v33; // x0

  if ( (byte_4B144DC & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BgmMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&SoundManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_13126/*"StartVoice"*/, v16, v17);
    byte_4B144DC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v19);
  if ( !v20 )
    goto LABEL_38;
  CommonUI__maskFadein(v20, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13126/*"StartVoice"*/,
    this->fields.voiceStartTime,
    0LL);
  eventPointBehavior = this->fields.eventPointBehavior;
  if ( !eventPointBehavior )
    goto LABEL_38;
  if ( eventPointBehavior->fields.bgmId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    Instance = (CommonUI_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BgmMaster___);
    v22 = this->fields.eventPointBehavior;
    if ( !v22 )
      goto LABEL_38;
    if ( !Instance )
      goto LABEL_38;
    Instance = (CommonUI_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               v22->fields.bgmId,
                               (const MethodInfo_31B2E40 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_38;
    m_CancellationTokenSource = (System_String_o *)Instance->fields.m_CancellationTokenSource;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v19);
    SoundManager__playBgm(m_CancellationTokenSource, 0LL);
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)this->fields.simpleAnimation;
    if ( !Instance )
      goto LABEL_38;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    v25 = this->fields.simpleAnimation;
    if ( !v25 )
      goto LABEL_38;
    monitor = (UnityEngine_Object_o *)v25[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v27 = this->fields.simpleAnimation;
      if ( v27 )
      {
        Instance = (CommonUI_o *)v27[1].monitor;
        if ( Instance )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
          SimpleAnimation__Play_64539336(v27, name, 0LL);
          goto LABEL_37;
        }
      }
LABEL_38:
      sub_1BCAA3C(Instance, v19);
    }
  }
  else
  {
    animation = (UnityEngine_Object_o *)this->fields.animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
      Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(clip, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        v32 = this->fields.animation;
        if ( v32 )
        {
          Instance = (CommonUI_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0LL);
          if ( Instance )
          {
            v33 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
            UnityEngine_Animation__Play_69899248(v32, v33, 0LL);
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