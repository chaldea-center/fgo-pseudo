void __fastcall WaveBattlePartyOrganizationMenu___ctor(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_49B6E50 & 1) == 0 )
  {
    sub_1B4CF90(&BaseMenu_TypeInfo, method);
    byte_49B6E50 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__Awake(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WaveBattlePartyOrganizationMenu__Callback(
        WaveBattlePartyOrganizationMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      1LL,
      1LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall WaveBattlePartyOrganizationMenu__CheckFriendshipUpItemTutorial(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_49B6E4D & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method);
    sub_1B4CF90(&TutorialFlag_TypeInfo, v3);
    byte_49B6E4D = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_38224448(102, 0LL) )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        sub_1B4D1EC(0LL, v5);
      PartyOrganizationUtility__OpenQuestUseItemDialogTutorial((PartyOrganizationUtility_o *)Instance, 0LL);
    }
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__Close(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationMenu__Close_32736532(this, 0LL, v2);
}


void __fastcall WaveBattlePartyOrganizationMenu__Close_32736532(
        WaveBattlePartyOrganizationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Action_o *v9; // x20

  if ( (byte_49B6E43 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, callback);
    sub_1B4CF90(&Method_WaveBattlePartyOrganizationMenu_EndClose__, v5);
    byte_49B6E43 = 1;
  }
  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1B4D1EC(0LL, callback);
  WaveBattleWaveInfoListManager__DestroyList(waveInfoListManager, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v7, v8);
  this->fields.state = 4;
  v9 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_WaveBattlePartyOrganizationMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v9, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__Display(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B4D1EC(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__EndClose(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B4CF34(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__EndOpen(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  this->fields.state = 2;
  WaveBattlePartyOrganizationMenu__OpenTutorial(this, method);
  if ( this->fields.isHintDialogOpenFlag )
  {
    this->fields.isHintDialogOpenFlag = 0;
    WaveBattlePartyOrganizationMenu__ShowHintDialogButton(this, v3);
  }
}


UserEventDeckEntity_o *__fastcall WaveBattlePartyOrganizationMenu__GetUserEventDeck(
        WaveBattlePartyOrganizationMenu_o *this,
        PartyListViewItem_array *deckItemList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UserEventDeckEntity_o *v11; // x21
  __int64 v12; // x1
  PartyListViewItem_o *v13; // x0
  PartyListViewItem_o *v14; // x8
  int64_t userEquipId; // x21
  int32_t v16; // w22
  DeckServant_o *v17; // x0
  il2cpp_array_size_t max_length; // w1
  DeckServant_o *v19; // x23
  PartyListViewItem_array *v20; // x20
  struct DeckServant_o **p_deckInfo; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int v24; // w8
  int v25; // w10
  signed int v26; // w11
  struct DeckWaveServantData_array *waveSvts; // x8
  __int64 v28; // x29
  DeckWaveServantData_o *v29; // x8
  PartyListViewItem_o *v30; // x23
  unsigned __int64 v31; // x22
  int v32; // w20
  PartyOrganizationListViewItem_o *Member; // x25
  __int64 v34; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v36; // q0
  struct UserServantEntity_o *v37; // x8
  __int64 v38; // x26
  __int64 v39; // x27
  int32_t v40; // w0
  System_Int64_array *EquipList; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t InitPos_k__BackingField; // w8
  struct DeckServant_o *v49; // x8
  struct DeckWaveServantData_array *v50; // x9
  DeckWaveServantData_o *v51; // x9
  struct System_Int32_array *uniqueIds; // x9
  struct DeckServantData_array *svts; // x25
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  Il2CppClass **v56; // x0
  __int64 v58; // x0
  UserEventDeckEntity_o *v59; // [xsp+0h] [xbp-E0h]
  PartyListViewItem_array *v60; // [xsp+8h] [xbp-D8h]
  int v61; // [xsp+10h] [xbp-D0h]
  int v62; // [xsp+1Ch] [xbp-C4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64[2]; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_49B6E45 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, deckItemList);
    sub_1B4CF90(&DeckServantData_TypeInfo, v4);
    sub_1B4CF90(&DeckServant_TypeInfo, v5);
    sub_1B4CF90(&int___TypeInfo, v6);
    sub_1B4CF90(&NetworkManager_TypeInfo, v7);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1B4CF90(&UserEventDeckEntity_TypeInfo, v10);
    byte_49B6E45 = 1;
  }
  memset(&v64[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v11 = (UserEventDeckEntity_o *)sub_1B4D1DC(UserEventDeckEntity_TypeInfo);
  UserEventDeckEntity___ctor(v11, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, v12);
    byte_49B57A5 = 1;
  }
  v13 = (PartyListViewItem_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v13 = (PartyListViewItem_o *)NetworkManager_TypeInfo;
  }
  if ( !v11 )
    goto LABEL_59;
  v11->fields.userId = *(_QWORD *)&v13->fields.trendDispWaveBattleEnemyClassIds->m_Items[9];
  if ( !deckItemList )
    goto LABEL_59;
  if ( !deckItemList->max_length )
    goto LABEL_60;
  v13 = deckItemList->m_Items[0];
  if ( !v13 )
    goto LABEL_59;
  v11->fields.eventId = v13->fields.id;
  v11->fields.deckNo = PartyListViewItem__get_DeckNum(v13, 0LL);
  v13 = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
  }
  if ( !deckItemList->max_length )
    goto LABEL_60;
  v14 = deckItemList->m_Items[0];
  v59 = v11;
  if ( !v14 )
LABEL_59:
    sub_1B4D1EC(v13, v12);
  userEquipId = v14->fields.userEquipId;
  v16 = v13->fields.trendDispWaveBattleEnemyClassIds->m_Items[33];
  v17 = (DeckServant_o *)sub_1B4D1DC(DeckServant_TypeInfo);
  max_length = deckItemList->max_length;
  v60 = deckItemList;
  v19 = v17;
  DeckServant___ctor_39429932(v17, max_length, v16, userEquipId, 0LL);
  v20 = v60;
  v59->fields.deckInfo = v19;
  p_deckInfo = &v59->fields.deckInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&v59->fields.deckInfo, (int32_t)v19, v22, v23);
  v24 = v60->max_length;
  if ( v24 >= 1 )
  {
    v25 = 0;
    v26 = 0;
    while ( v26 < (unsigned int)v24 )
    {
      if ( !*p_deckInfo )
        goto LABEL_59;
      waveSvts = (*p_deckInfo)->fields.waveSvts;
      if ( !waveSvts )
        goto LABEL_59;
      v28 = v26;
      if ( v26 >= waveSvts->max_length )
        break;
      v29 = waveSvts->m_Items[v26];
      if ( !v29 )
        goto LABEL_59;
      v30 = v20->m_Items[v26];
      v31 = 0LL;
      v61 = v26 + 1;
      v29->fields.wave = v26 + 1;
      v62 = v25;
      v32 = v25;
      while ( 1 )
      {
        v13 = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v13 = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
        }
        if ( (__int64)v31 >= v13->fields.trendDispWaveBattleEnemyClassIds->m_Items[33] )
          break;
        if ( !v30 )
          goto LABEL_59;
        Member = PartyListViewItem__GetMember(v30, v31, 0LL);
        v34 = sub_1B4D1DC(DeckServantData_TypeInfo);
        DeckServantData___ctor((DeckServantData_o *)v34, 0LL);
        if ( !v34 )
          goto LABEL_59;
        *(_DWORD *)(v34 + 16) = v32 + v31 + 1;
        if ( !Member )
          goto LABEL_59;
        userServantEntity = Member->fields.userServantEntity;
        if ( userServantEntity )
        {
          v36 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v64[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v64[1].fields.fakeValue = v36;
        }
        else
        {
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v64, 0LL, 0LL);
          v64[1] = v64[0];
        }
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v63 = v64[1];
        *(_QWORD *)(v34 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v63, 0LL);
        v37 = Member->fields.userServantEntity;
        if ( v37 )
        {
          v39 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
          v38 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v65.fields.currentCryptoKey = v39;
          *(_QWORD *)&v65.fields.fakeValue = v38;
          v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v65, 0LL);
        }
        else
        {
          v40 = 0;
        }
        *(_DWORD *)(v34 + 32) = v40;
        EquipList = PartyOrganizationListViewItem__GetEquipList(Member, 0LL);
        *(_QWORD *)(v34 + 40) = EquipList;
        sub_1B4CF34((CGThumbnailListItem_o *)(v34 + 40), (int32_t)EquipList, v42, v43);
        v44 = sub_1B4D038(int___TypeInfo, 1LL);
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(Member, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        v13 = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                       EquipSvtId,
                                       0LL);
        if ( !v44 )
          goto LABEL_59;
        if ( !*(_DWORD *)(v44 + 24) )
          goto LABEL_60;
        *(_DWORD *)(v44 + 32) = (_DWORD)v13;
        *(_QWORD *)(v34 + 48) = v44;
        sub_1B4CF34((CGThumbnailListItem_o *)(v34 + 48), v44, v46, v47);
        InitPos_k__BackingField = Member->fields._InitPos_k__BackingField;
        *(_QWORD *)(v34 + 64) = 0LL;
        *(_BYTE *)(v34 + 56) = 0;
        *(_DWORD *)(v34 + 76) = InitPos_k__BackingField;
        v49 = *p_deckInfo;
        if ( !*p_deckInfo )
          goto LABEL_59;
        v50 = v49->fields.waveSvts;
        if ( !v50 )
          goto LABEL_59;
        if ( (unsigned int)v28 >= v50->max_length )
          goto LABEL_60;
        v51 = v50->m_Items[v28];
        if ( !v51 )
          goto LABEL_59;
        uniqueIds = v51->fields.uniqueIds;
        if ( !uniqueIds )
          goto LABEL_59;
        if ( v31 >= uniqueIds->max_length )
          goto LABEL_60;
        uniqueIds->m_Items[v31 + 1] = *(_DWORD *)(v34 + 16);
        svts = v49->fields.svts;
        if ( !svts )
          goto LABEL_59;
        v13 = (PartyListViewItem_o *)sub_1B4D0CC(v34, svts->obj.klass->_1.element_class);
        if ( !v13 )
        {
          v58 = sub_1B4D210();
          sub_1B4D0B8(v58, 0LL);
        }
        if ( (unsigned int)(v32 + v31) >= svts->max_length )
          goto LABEL_60;
        v56 = &svts->obj.klass + v32 + (int)v31;
        v56[4] = (Il2CppClass *)v34;
        sub_1B4CF34((CGThumbnailListItem_o *)(v56 + 4), v34, v54, v55);
        ++v31;
      }
      v20 = v60;
      v26 = v61;
      v24 = v60->max_length;
      v25 = v62 + v31;
      if ( v61 >= v24 )
        return v59;
    }
LABEL_60:
    sub_1B4D1F4(v13, v12);
  }
  return v59;
}


void __fastcall WaveBattlePartyOrganizationMenu__Hide(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B4D1EC(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__Init(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


bool __fastcall WaveBattlePartyOrganizationMenu__IsDisplay(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B4D1EC(0LL, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}


bool __fastcall WaveBattlePartyOrganizationMenu__IsHintDialog(
        WaveBattlePartyOrganizationMenu_o *this,
        bool *isEvery,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationMenu_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w20
  int32_t questId; // w21
  QuestHintOverwriteEntity_o *CompleteCondEntity; // x0
  int32_t openType; // w8
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v16; // [xsp+0h] [xbp-40h] BYREF
  QuestHintEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_49B6E41 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestHintMaster___, isEvery);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestHintOverwriteMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestPhaseMaster___, v6);
    this = (WaveBattlePartyOrganizationMenu_o *)sub_1B4CF90(&DataManager_TypeInfo, v7);
    byte_49B6E41 = 1;
  }
  v16 = 0LL;
  entity = 0LL;
  *isEvery = 0;
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_25;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestHintOverwriteMaster___);
  if ( !this )
    goto LABEL_25;
  CompleteCondEntity = QuestHintOverwriteMaster__GetCompleteCondEntity(
                         (QuestHintOverwriteMaster_o *)this,
                         questId,
                         questPhase,
                         0LL);
  if ( !CompleteCondEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestHintMaster___);
    if ( this )
    {
      this = (WaveBattlePartyOrganizationMenu_o *)QuestHintMaster__TryGetEntity(
                                                    (QuestHintMaster_o *)this,
                                                    &entity,
                                                    questId,
                                                    questPhase,
                                                    0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( entity )
        {
          openType = entity->fields.openType;
          goto LABEL_15;
        }
      }
      else
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( this )
        {
          if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &v16, questId, questPhase, 0LL) )
            return 0;
          this = (WaveBattlePartyOrganizationMenu_o *)v16;
          if ( v16 )
          {
            *isEvery = QuestPhaseEntity__getHintOpenType(v16, 0LL) == 0;
            this = (WaveBattlePartyOrganizationMenu_o *)v16;
            if ( v16 )
            {
              HintMessage = QuestPhaseEntity__getHintMessage(v16, 0LL);
              return !System_String__IsNullOrEmpty(HintMessage, 0LL);
            }
          }
        }
      }
    }
LABEL_25:
    sub_1B4D1EC(this, isEvery);
  }
  openType = CompleteCondEntity->fields.openType;
LABEL_15:
  *isEvery = openType == 0;
  return 1;
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickApplyInterruptionDeckButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( this->fields.state == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        6LL,
        1LL,
        1LL,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickAutoOrganization(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_49B6E47 & 1) == 0 )
  {
    sub_1B4CF90(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__, method);
    byte_49B6E47 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        2LL,
        1LL,
        1LL,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickAutoSell(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_49B6E4A & 1) == 0 )
  {
    sub_1B4CF90(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__, method);
    byte_49B6E4A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        5LL,
        1LL,
        1LL,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickBattleStart(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( this->fields.state == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        7LL,
        1LL,
        1LL,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickClassInfo(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_49B6E49 & 1) == 0 )
  {
    sub_1B4CF90(&Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__, method);
    byte_49B6E49 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        4LL,
        1LL,
        1LL,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickFriendshipUpItemUseButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FriendshipUpItemSwitchComponent_o *friendshipUpItemSwitchComponent; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_49B6E4E & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_WaveBattlePartyOrganizationMenu__OnClickFriendshipUpItemUseButton_b__51_0__, v3);
    byte_49B6E4E = 1;
  }
  friendshipUpItemSwitchComponent = this->fields.friendshipUpItemSwitchComponent;
  v5 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationMenu__OnClickFriendshipUpItemUseButton_b__51_0__,
    0LL);
  if ( !friendshipUpItemSwitchComponent )
    sub_1B4D1EC(v6, v7);
  FriendshipUpItemSwitchComponent__ChangeButtonState(friendshipUpItemSwitchComponent, v5, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickHintDialogButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49B6E4B & 1) == 0 )
  {
    sub_1B4CF90(&Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__, method);
    byte_49B6E4B = 1;
  }
  v3 = Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__;
  if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B4CFA8(Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  WaveBattlePartyOrganizationMenu__ShowHintDialogButton(this, v5);
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickMasterFormation(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_49B6E46 & 1) == 0 )
  {
    sub_1B4CF90(&Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__, method);
    byte_49B6E46 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        1LL,
        1LL,
        1LL,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickPartyEdit(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_49B6E48 & 1) == 0 )
  {
    sub_1B4CF90(&Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__, method);
    byte_49B6E48 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        3LL,
        1LL,
        1LL,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnSelectWavePartyList(
        WaveBattlePartyOrganizationMenu_o *this,
        int32_t result,
        int32_t wave,
        int32_t idx,
        const MethodInfo *method)
{
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, int32_t, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      wave,
      idx,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall WaveBattlePartyOrganizationMenu__Open(
        WaveBattlePartyOrganizationMenu_o *this,
        UserEventDeckEntity_o *deckEntity,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t waveCount,
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *callback,
        int32_t restartWave,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v29; // x1
  Il2CppObject *Component_object; // x24
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  float y; // s8
  float z; // s9
  float v35; // s10
  float v36; // s11
  bool v37; // w26
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x24
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x25
  WaveBattleWaveInfoListManager_CallbackFunc_o *v42; // x27
  struct DeckServant_o *deckInfo; // x8
  UISprite_o *classInfoSpriteOrganization; // x20
  const MethodInfo *v45; // x2
  char v46; // w20
  struct QuestRestrictionInfo_o *v47; // x8
  int32_t questPhase; // w20
  int32_t questId; // w21
  struct QuestRestrictionInfo_o *v50; // x8
  int32_t v51; // w20
  int32_t v52; // w21
  struct QuestRestrictionInfo_o *v53; // x8
  _BOOL4 v54; // w23
  int32_t v55; // w20
  int32_t v56; // w21
  _BOOL4 isInterruption; // w20
  UISprite_o *applyInterruptionDeckSprite; // x20
  System_Action_o *v59; // x20
  System_String_o *v60; // [xsp+0h] [xbp-A0h] BYREF
  System_String_o *equipName; // [xsp+8h] [xbp-98h] BYREF
  __int64 maxLv; // [xsp+10h] [xbp-90h] BYREF
  int32_t genderImageId; // [xsp+18h] [xbp-88h] BYREF
  bool isEvery; // [xsp+1Ch] [xbp-84h] BYREF
  Il2CppObject *v65; // [xsp+20h] [xbp-80h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49B6E40 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, deckEntity);
    sub_1B4CF90(&AtlasManager_TypeInfo, v13);
    sub_1B4CF90(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo, v14);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v15);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserEquipMaster___, v16);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestPhaseMaster___, v17);
    sub_1B4CF90(&DataManager_TypeInfo, v18);
    sub_1B4CF90(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__, v19);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v20);
    sub_1B4CF90(&QuestHintDialogOpenManager_TypeInfo, v21);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1B4CF90(&Method_WaveBattlePartyOrganizationMenu_EndOpen__, v23);
    sub_1B4CF90(&Method_WaveBattlePartyOrganizationMenu_OnSelectWavePartyList__, v24);
    sub_1B4CF90(&StringLiteral_17363/*"buttontxt_formation_21"*/, v25);
    sub_1B4CF90(&StringLiteral_17357/*"buttontxt_battlerestart"*/, v26);
    sub_1B4CF90(&StringLiteral_17362/*"buttontxt_formation_20"*/, v27);
    byte_49B6E40 = 1;
  }
  v65 = 0LL;
  entity = 0LL;
  isEvery = 0;
  genderImageId = 0;
  equipName = 0LL;
  maxLv = 0LL;
  v60 = 0LL;
  if ( !this->fields.state )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( questRestrictionInfo && Master_object )
    {
      QuestPhaseMaster__TryGetEntity(
        Master_object,
        &entity,
        questRestrictionInfo->fields.questId,
        questRestrictionInfo->fields.questPhase,
        0LL);
      if ( entity && QuestPhaseEntity__IsWaveSetupAsOneParty(entity, 0LL) )
      {
        Master_object = (QuestPhaseMaster_o *)this->fields.normalView;
        if ( !Master_object )
          goto LABEL_69;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
        Master_object = (QuestPhaseMaster_o *)this->fields.otherView;
        if ( !Master_object )
          goto LABEL_69;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
        Master_object = (QuestPhaseMaster_o *)this->fields.waveInfoListManager;
        if ( !Master_object )
          goto LABEL_69;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)Master_object,
                             (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Master_object = (QuestPhaseMaster_o *)UnityEngine_Object__op_Inequality(
                                                (UnityEngine_Object_o *)Component_object,
                                                0LL,
                                                0LL);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_69;
          center = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)Component_object, 0LL);
          y = center.fields.y;
          z = center.fields.z;
          size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)Component_object, 0LL);
          v35 = size.fields.y;
          v36 = size.fields.z;
          size.fields.x = 200.0;
          size.fields.y = y;
          size.fields.z = z;
          UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Component_object, size, 0LL);
          v69.fields.x = 540.0;
          v69.fields.y = v35;
          v69.fields.z = v36;
          UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v69, 0LL);
        }
        v37 = 1;
      }
      else
      {
        Master_object = (QuestPhaseMaster_o *)this->fields.normalView;
        if ( !Master_object )
          goto LABEL_69;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
        Master_object = (QuestPhaseMaster_o *)this->fields.otherView;
        if ( !Master_object )
          goto LABEL_69;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
        v37 = 0;
      }
      this->fields.questRestrictionInfo = questRestrictionInfo;
      p_questRestrictionInfo = &this->fields.questRestrictionInfo;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v31, v32);
      this->fields.callbackFunc = callback;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v39, v40);
      waveInfoListManager = this->fields.waveInfoListManager;
      v42 = (WaveBattleWaveInfoListManager_CallbackFunc_o *)sub_1B4D1DC(WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
      WaveBattleWaveInfoListManager_CallbackFunc___ctor(
        v42,
        (Il2CppObject *)this,
        Method_WaveBattlePartyOrganizationMenu_OnSelectWavePartyList__,
        0LL);
      if ( waveInfoListManager )
      {
        WaveBattleWaveInfoListManager__CreateList(
          waveInfoListManager,
          deckEntity,
          questRestrictionInfo,
          waveCount,
          v42,
          restartWave,
          v37,
          0LL);
        this->fields.restartWave = restartWave;
        this->fields.isInterruption = restartWave > 0;
        Master_object = (QuestPhaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Master_object )
        {
          Master_object = (QuestPhaseMaster_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)Master_object,
                                                  (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserEquipMaster___);
          if ( deckEntity )
          {
            deckInfo = deckEntity->fields.deckInfo;
            if ( deckInfo )
            {
              if ( Master_object )
              {
                if ( DataMasterBase_object__object__long___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                       &v65,
                       deckInfo->fields.userEquipId,
                       (const MethodInfo_319FF44 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__) )
                {
                  Master_object = (QuestPhaseMaster_o *)v65;
                  if ( !v65 )
                    goto LABEL_69;
                  UserEquipEntity__getEquipInfo(
                    (UserEquipEntity_o *)v65,
                    (int32_t *)&maxLv + 1,
                    (int32_t *)&maxLv,
                    &equipName,
                    &v60,
                    &genderImageId,
                    0LL);
                  Master_object = (QuestPhaseMaster_o *)this->fields.masterEquipIcon;
                  if ( !Master_object )
                    goto LABEL_69;
                  ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Master_object, genderImageId, 0LL);
                  Master_object = (QuestPhaseMaster_o *)this->fields.masterEquipButton;
                  if ( this->fields.isInterruption )
                  {
                    v29 = this->fields.restartWave == 1;
                    if ( !Master_object )
                      goto LABEL_69;
                  }
                  else
                  {
                    v29 = 1LL;
                    if ( !Master_object )
                      goto LABEL_69;
                  }
                  UICommonButton__SetEnable((UICommonButton_o *)Master_object, v29, 0LL);
                }
                classInfoSpriteOrganization = this->fields.classInfoSpriteOrganization;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                AtlasManager__SetPartyOrganizationImage(
                  classInfoSpriteOrganization,
                  (System_String_o *)StringLiteral_17362/*"buttontxt_formation_20"*/,
                  0LL);
                Master_object = (QuestPhaseMaster_o *)WaveBattlePartyOrganizationMenu__IsHintDialog(this, &isEvery, v45);
                if ( this->fields.hintDialogButton )
                {
                  v46 = (char)Master_object;
                  Master_object = (QuestPhaseMaster_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                                          0LL);
                  if ( Master_object )
                  {
                    if ( (v46 & 1) != 0 )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
                      v47 = *p_questRestrictionInfo;
                      if ( !*p_questRestrictionInfo )
                        goto LABEL_69;
                      questId = v47->fields.questId;
                      questPhase = v47->fields.questPhase;
                      if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                      Master_object = (QuestPhaseMaster_o *)QuestHintDialogOpenManager__IsSettingTemporarilyInfo(
                                                              questId,
                                                              questPhase,
                                                              0LL);
                      if ( ((unsigned __int8)Master_object & 1) == 0 )
                      {
                        v50 = *p_questRestrictionInfo;
                        if ( !*p_questRestrictionInfo )
                          goto LABEL_69;
                        v52 = v50->fields.questId;
                        v51 = v50->fields.questPhase;
                        if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                        Master_object = (QuestPhaseMaster_o *)QuestHintDialogOpenManager__IsQuestHintOpen(v52, v51, 0LL);
                        if ( ((unsigned __int8)Master_object & 1) == 0 )
                        {
                          v53 = *p_questRestrictionInfo;
                          if ( !*p_questRestrictionInfo )
                            goto LABEL_69;
                          v54 = isEvery;
                          v56 = v53->fields.questId;
                          v55 = v53->fields.questPhase;
                          if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                          QuestHintDialogOpenManager__SetTemporarilyInfo(v56, v55, 0LL);
                          if ( !v54 )
                          {
                            if ( !*p_questRestrictionInfo )
                              goto LABEL_69;
                            QuestHintDialogOpenManager__SetQuestInfo(
                              (*p_questRestrictionInfo)->fields.questId,
                              (*p_questRestrictionInfo)->fields.questPhase,
                              0LL);
                            QuestHintDialogOpenManager__WriteData(0LL);
                          }
                          this->fields.isHintDialogOpenFlag = 1;
                        }
                      }
                    }
                    else
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
                    }
                    Master_object = (QuestPhaseMaster_o *)this->fields.applyInterruptionDeckButton;
                    if ( Master_object )
                    {
                      isInterruption = this->fields.isInterruption;
                      Master_object = (QuestPhaseMaster_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)Master_object,
                                                              0LL);
                      if ( Master_object )
                      {
                        if ( !isInterruption )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
                          goto LABEL_67;
                        }
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
                        applyInterruptionDeckSprite = this->fields.applyInterruptionDeckSprite;
                        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        AtlasManager__SetPartyOrganizationImage(
                          applyInterruptionDeckSprite,
                          (System_String_o *)StringLiteral_17363/*"buttontxt_formation_21"*/,
                          0LL);
                        Master_object = (QuestPhaseMaster_o *)this->fields.applyInterruptionDeckSprite;
                        if ( Master_object )
                        {
                          (*(void (__fastcall **)(QuestPhaseMaster_o *, _QWORD))&Master_object->klass[1]._2.thread_static_fields_offset)(
                            Master_object,
                            *(_QWORD *)&Master_object->klass[1]._2.token);
                          AtlasManager__SetPartyOrganizationImage(
                            this->fields.battleStartSprite,
                            (System_String_o *)StringLiteral_17357/*"buttontxt_battlerestart"*/,
                            0LL);
                          Master_object = (QuestPhaseMaster_o *)this->fields.battleStartSprite;
                          if ( Master_object )
                          {
                            Master_object = (QuestPhaseMaster_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)Master_object,
                                                                    0LL);
                            if ( Master_object )
                            {
                              v70.fields.x = 0.0;
                              v70.fields.y = -2.0;
                              v70.fields.z = 0.0;
                              UnityEngine_Transform__set_localPosition(
                                (UnityEngine_Transform_o *)Master_object,
                                v70,
                                0LL);
                              Master_object = (QuestPhaseMaster_o *)this->fields.battleStartSprite;
                              if ( Master_object )
                              {
                                (*(void (__fastcall **)(QuestPhaseMaster_o *, _QWORD))&Master_object->klass[1]._2.thread_static_fields_offset)(
                                  Master_object,
                                  *(_QWORD *)&Master_object->klass[1]._2.token);
LABEL_67:
                                this->fields.state = 1;
                                v59 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
                                System_Action___ctor(
                                  v59,
                                  (Il2CppObject *)this,
                                  Method_WaveBattlePartyOrganizationMenu_EndOpen__,
                                  0LL);
                                BaseMenu__Open((BaseMenu_o *)this, v59, 0LL);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_69:
    sub_1B4D1EC(Master_object, v29);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OpenTutorial(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Action_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  struct QuestRestrictionInfo_o *v8; // x8

  if ( (byte_49B6E4C & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_WaveBattlePartyOrganizationMenu_CheckFriendshipUpItemTutorial__, v3);
    byte_49B6E4C = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo
    && EventTutorialMaster__IsTutorialDataExists(
         0,
         45,
         questRestrictionInfo->fields.questId,
         questRestrictionInfo->fields.questPhase,
         0,
         0,
         0,
         0LL) )
  {
    v5 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_WaveBattlePartyOrganizationMenu_CheckFriendshipUpItemTutorial__,
      0LL);
    v8 = this->fields.questRestrictionInfo;
    if ( !v8 )
      sub_1B4D1EC(v6, v7);
    EventTutorialMaster__CheckTutorial(0, 45, v5, v8->fields.questId, v8->fields.questPhase, 0, 0, 0LL);
  }
  else
  {
    WaveBattlePartyOrganizationMenu__CheckFriendshipUpItemTutorial(this, method);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__SetFriendshipUpItemButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v4; // x1
  char v5; // w20

  if ( (byte_49B6E4F & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method);
    byte_49B6E4F = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__HasQuestUseItem(Instance, 0LL);
  if ( !this->fields.friendshipUpItemSwitchComponent )
    goto LABEL_10;
  v5 = (char)Instance;
  Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                             0LL);
  if ( !Instance )
    goto LABEL_10;
  if ( (v5 & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
    if ( Instance )
    {
      FriendshipUpItemSwitchComponent__SetItemInfo((FriendshipUpItemSwitchComponent_o *)Instance, 0LL);
      return;
    }
LABEL_10:
    sub_1B4D1EC(Instance, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__SetWave(
        WaveBattlePartyOrganizationMenu_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1B4D1EC(0LL, wave);
  WaveBattleWaveInfoListManager__SetScrollPos(waveInfoListManager, wave, 0, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__ShowHintDialogButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w20
  int32_t questId; // w21
  System_String_o *message; // x19
  QuestHintOverwriteEntity_o *CompleteCondEntity; // x0
  System_String_o *title; // x20
  int32_t leftIndent; // w21
  QuestPhaseEntity_o *v15; // [xsp+0h] [xbp-40h] BYREF
  QuestHintEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_49B6E42 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestHintMaster___, method);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestHintOverwriteMaster___, v3);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestPhaseMaster___, v4);
    sub_1B4CF90(&DataManager_TypeInfo, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    this = (WaveBattlePartyOrganizationMenu_o *)sub_1B4CF90(&StringLiteral_1/*""*/, v7);
    byte_49B6E42 = 1;
  }
  v15 = 0LL;
  entity = 0LL;
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_28;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  message = (System_String_o *)StringLiteral_1/*""*/;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestHintOverwriteMaster___);
  if ( !this )
    goto LABEL_28;
  CompleteCondEntity = QuestHintOverwriteMaster__GetCompleteCondEntity(
                         (QuestHintOverwriteMaster_o *)this,
                         questId,
                         questPhase,
                         0LL);
  if ( CompleteCondEntity )
  {
    title = CompleteCondEntity->fields.title;
    message = CompleteCondEntity->fields.message;
    leftIndent = CompleteCondEntity->fields.leftIndent;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestHintMaster___);
    if ( !this )
      goto LABEL_28;
    this = (WaveBattlePartyOrganizationMenu_o *)QuestHintMaster__TryGetEntity(
                                                  (QuestHintMaster_o *)this,
                                                  &entity,
                                                  questId,
                                                  questPhase,
                                                  0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_28;
      title = entity->fields.title;
      message = entity->fields.message;
      leftIndent = entity->fields.leftIndent;
    }
    else
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !this )
        goto LABEL_28;
      if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &v15, questId, questPhase, 0LL) )
      {
        this = (WaveBattlePartyOrganizationMenu_o *)v15;
        if ( !v15 )
          goto LABEL_28;
        this = (WaveBattlePartyOrganizationMenu_o *)QuestPhaseEntity__getHintMessageTitle(v15, 0LL);
        if ( !v15 )
          goto LABEL_28;
        title = (System_String_o *)this;
        this = (WaveBattlePartyOrganizationMenu_o *)QuestPhaseEntity__getHintMessage(v15, 0LL);
        if ( !v15 )
          goto LABEL_28;
        message = (System_String_o *)this;
        leftIndent = QuestPhaseEntity__getHintLeftIndent(v15, 0LL);
      }
      else
      {
        leftIndent = -1;
        title = message;
      }
    }
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
    return;
  this = (WaveBattlePartyOrganizationMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_28:
    sub_1B4D1EC(this, method);
  CommonUI__OpenScrollMessageDialog((CommonUI_o *)this, title, message, leftIndent, 0LL, 0, 1, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__UpdateInfo(
        WaveBattlePartyOrganizationMenu_o *this,
        UserEventDeckEntity_o *deckEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  struct DeckServant_o *deckInfo; // x8
  System_String_o *v10; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *equipName; // [xsp+8h] [xbp-48h] BYREF
  int32_t maxLv; // [xsp+14h] [xbp-3Ch] BYREF
  int32_t genderImageId[2]; // [xsp+18h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_49B6E44 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserEquipMaster___, deckEntity);
    sub_1B4CF90(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49B6E44 = 1;
  }
  entity = 0LL;
  *(_QWORD *)genderImageId = 0LL;
  maxLv = 0;
  v10 = 0LL;
  equipName = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !deckEntity )
    goto LABEL_17;
  deckInfo = deckEntity->fields.deckInfo;
  if ( !deckInfo || !Instance )
    goto LABEL_17;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          deckInfo->fields.userEquipId,
          (const MethodInfo_319FF44 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__) )
    goto LABEL_15;
  Instance = (DataManager_o *)entity;
  if ( !entity
    || (UserEquipEntity__getEquipInfo(
          (UserEquipEntity_o *)entity,
          genderImageId,
          &maxLv,
          &equipName,
          &v10,
          &genderImageId[1],
          0LL),
        (Instance = (DataManager_o *)this->fields.masterEquipIcon) == 0LL) )
  {
LABEL_17:
    sub_1B4D1EC(Instance, v8);
  }
  ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, genderImageId[1], 0LL);
  Instance = (DataManager_o *)this->fields.masterEquipButton;
  if ( this->fields.isInterruption )
  {
    v8 = this->fields.restartWave == 1;
    if ( !Instance )
      goto LABEL_17;
  }
  else
  {
    v8 = 1LL;
    if ( !Instance )
      goto LABEL_17;
  }
  UICommonButton__SetEnable((UICommonButton_o *)Instance, v8, 0LL);
LABEL_15:
  Instance = (DataManager_o *)this->fields.waveInfoListManager;
  if ( !Instance )
    goto LABEL_17;
  WaveBattleWaveInfoListManager__UpdateWaveServantInfo(
    (WaveBattleWaveInfoListManager_o *)Instance,
    deckEntity,
    this->fields.isInterruption,
    0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu___OnClickFriendshipUpItemUseButton_b__51_0(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      9LL,
      1LL,
      1LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall WaveBattlePartyOrganizationMenu__add_callbackFunc(
        WaveBattlePartyOrganizationMenu_o *this,
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WaveBattlePartyOrganizationMenu_o *v11; // x0
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_49B6E3E & 1) == 0 )
  {
    sub_1B4CF90(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo, value);
    byte_49B6E3E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattlePartyOrganizationMenu_CallbackFunc_c *)v8->klass != WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B8724C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationMenu_o *)sub_1B4D4AC(v8);
  WaveBattlePartyOrganizationMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall WaveBattlePartyOrganizationMenu__remove_callbackFunc(
        WaveBattlePartyOrganizationMenu_o *this,
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WaveBattlePartyOrganizationMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_49B6E3F & 1) == 0 )
  {
    sub_1B4CF90(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo, value);
    byte_49B6E3F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattlePartyOrganizationMenu_CallbackFunc_c *)v8->klass != WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B8724C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationMenu_o *)sub_1B4D4AC(v8);
  WaveBattlePartyOrganizationMenu__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationMenu_CallbackFunc___ctor(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B4D050(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B4D208(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B4D0B8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19973B8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1997358;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall WaveBattlePartyOrganizationMenu_CallbackFunc__BeginInvoke(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  _QWORD v18[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v19; // [xsp+10h] [xbp-60h]
  int32_t v20; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v21; // [xsp+38h] [xbp-38h] BYREF
  int32_t v22; // [xsp+3Ch] [xbp-34h] BYREF

  v21 = n;
  v22 = result;
  v20 = m;
  if ( (byte_49B6E51 & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, *(_QWORD *)&result);
    sub_1B4CF90(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v10);
    byte_49B6E51 = 1;
  }
  v19 = 0u;
  v18[0] = j_il2cpp_value_box_0(
             WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo,
             &v22,
             *(_QWORD *)&n,
             *(_QWORD *)&m,
             callback);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v21, v11, v12, v13);
  *(_QWORD *)&v19 = j_il2cpp_value_box_0(int_TypeInfo, &v20, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1B4CF44(this, v18, callback, object);
}


void __fastcall WaveBattlePartyOrganizationMenu_CallbackFunc__EndInvoke(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B4CF48(result, 0LL, method);
}


void __fastcall WaveBattlePartyOrganizationMenu_CallbackFunc__Invoke(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    n,
    m,
    *(_QWORD *)&this->fields.extra_arg);
}