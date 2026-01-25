void WaveBattlePartyOrganizationMenu___ctor(WaveBattlePartyOrganizationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CEA309 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseMenu_TypeInfo);
    byte_4CEA309 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void WaveBattlePartyOrganizationMenu__Awake(WaveBattlePartyOrganizationMenu_o *this, const MethodInfo *method)
{
  ;
}


void WaveBattlePartyOrganizationMenu__Callback(
        WaveBattlePartyOrganizationMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, int32_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      1,
      1,
      callbackFunc->fields.method);
}


void WaveBattlePartyOrganizationMenu__CheckQuestUseItemTutorial(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CEA305 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C7BAE8(&TutorialFlag_TypeInfo);
    sub_1C7BAE8(&Method_WaveBattlePartyOrganizationMenu_OpenHintDialog__);
    byte_4CEA305 = 1;
  }
  if ( !this->fields.questRestrictionInfo )
    goto LABEL_15;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40989036(102, 0) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v4 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_WaveBattlePartyOrganizationMenu_OpenHintDialog__, 0);
    if ( !Instance )
      sub_1C7BD40(v5, v6);
    PartyOrganizationUtility__OpenQuestUseItemDialogTutorial((PartyOrganizationUtility_o *)Instance, v4, 0);
  }
  else
  {
LABEL_15:
    if ( this->fields.isHintDialogOpenFlag )
    {
      this->fields.isHintDialogOpenFlag = 0;
      WaveBattlePartyOrganizationMenu__ShowHintDialogButton(this, method);
    }
  }
}


void WaveBattlePartyOrganizationMenu__Close(WaveBattlePartyOrganizationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationMenu__Close_35134640(this, 0, v2);
}


void WaveBattlePartyOrganizationMenu__Close_35134640(
        WaveBattlePartyOrganizationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Action_o *v12; // x20

  if ( (byte_4CEA2FC & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_WaveBattlePartyOrganizationMenu_EndClose__);
    byte_4CEA2FC = 1;
  }
  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1C7BD40(0, callback);
  WaveBattleWaveInfoListManager__DestroyList(waveInfoListManager, 0);
  this->fields.closeCallbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.state = 4;
  v12 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_WaveBattlePartyOrganizationMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v12, 0);
}


void WaveBattlePartyOrganizationMenu__DisabledEditButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  if ( this->fields.isSwitchPartyBattle )
  {
    waveInfoListManager = this->fields.waveInfoListManager;
    if ( !waveInfoListManager )
      goto LABEL_9;
    if ( WaveBattleWaveInfoListManager__IsAllPartySortied(waveInfoListManager, this->fields.restartWave, 0) )
    {
      waveInfoListManager = (WaveBattleWaveInfoListManager_o *)this->fields.autoOrganizationButton;
      if ( waveInfoListManager )
      {
        ((void (__fastcall *)(WaveBattleWaveInfoListManager_o *, __int64, __int64, Il2CppClass **))waveInfoListManager->klass[1]._1.nestedTypes)(
          waveInfoListManager,
          3,
          1,
          waveInfoListManager->klass[1]._1.implementedInterfaces);
        waveInfoListManager = (WaveBattleWaveInfoListManager_o *)this->fields.partyEditButton;
        if ( waveInfoListManager )
        {
          ((void (__fastcall *)(WaveBattleWaveInfoListManager_o *, __int64, __int64, Il2CppClass **))waveInfoListManager->klass[1]._1.nestedTypes)(
            waveInfoListManager,
            3,
            1,
            waveInfoListManager->klass[1]._1.implementedInterfaces);
          waveInfoListManager = (WaveBattleWaveInfoListManager_o *)this->fields.applyInterruptionDeckButton;
          if ( waveInfoListManager )
          {
            ((void (__fastcall *)(WaveBattleWaveInfoListManager_o *, __int64, __int64, Il2CppClass **))waveInfoListManager->klass[1]._1.nestedTypes)(
              waveInfoListManager,
              3,
              1,
              waveInfoListManager->klass[1]._1.implementedInterfaces);
            return;
          }
        }
      }
LABEL_9:
      sub_1C7BD40(waveInfoListManager, method);
    }
  }
}


void WaveBattlePartyOrganizationMenu__Display(WaveBattlePartyOrganizationMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  WaveBattlePartyOrganizationMenu__DisabledEditButton(this, v5);
}


void WaveBattlePartyOrganizationMenu__EndClose(WaveBattlePartyOrganizationMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C7BA8C(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void WaveBattlePartyOrganizationMenu__EndOpen(WaveBattlePartyOrganizationMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
  WaveBattlePartyOrganizationMenu__OpenTutorial(this, method);
}


UserEventDeckEntity_o *WaveBattlePartyOrganizationMenu__GetUserEventDeck(
        WaveBattlePartyOrganizationMenu_o *this,
        PartyListViewItem_array *deckItemList,
        const MethodInfo *method)
{
  UserEventDeckEntity_o *v4; // x21
  __int64 v5; // x1
  PartyListViewItem_o *v6; // x0
  PartyListViewItem_o *v7; // x8
  int64_t userEquipId; // x21
  int32_t v9; // w22
  DeckServant_o *v10; // x0
  int32_t max_length; // w1
  DeckServant_o *v12; // x23
  PartyListViewItem_array *v13; // x20
  struct DeckServant_o **p_deckInfo; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int v21; // w8
  int v22; // w10
  signed int v23; // w11
  struct DeckWaveServantData_array *waveSvts; // x8
  __int64 v25; // x29
  DeckWaveServantData_o *v26; // x8
  PartyListViewItem_o *v27; // x23
  unsigned __int64 v28; // x22
  int v29; // w20
  PartyOrganizationListViewItem_o *Member; // x25
  __int64 v31; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v33; // q0
  struct UserServantEntity_o *v34; // x8
  __int64 v35; // x26
  __int64 v36; // x27
  int32_t v37; // w0
  System_Int64_array *EquipList; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  __int64 v45; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  int32_t InitPos_k__BackingField; // w8
  struct DeckServant_o *v54; // x8
  struct DeckWaveServantData_array *v55; // x9
  DeckWaveServantData_o *v56; // x9
  struct System_Int32_array *uniqueIds; // x9
  struct DeckServantData_array *svts; // x25
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  Il2CppClass **v65; // x0
  __int64 v67; // x0
  UserEventDeckEntity_o *v68; // [xsp+0h] [xbp-E0h]
  PartyListViewItem_array *v69; // [xsp+8h] [xbp-D8h]
  int v70; // [xsp+1Ch] [xbp-C4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72[2]; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_4CEA2FD & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&DeckServantData_TypeInfo);
    sub_1C7BAE8(&DeckServant_TypeInfo);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&UserEventDeckEntity_TypeInfo);
    byte_4CEA2FD = 1;
  }
  memset(&v72[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v4 = (UserEventDeckEntity_o *)sub_1C7BD34(UserEventDeckEntity_TypeInfo);
  UserEventDeckEntity___ctor(v4, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  v6 = (PartyListViewItem_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = (PartyListViewItem_o *)NetworkManager_TypeInfo;
  }
  if ( !v4 )
    goto LABEL_59;
  v4->fields.userId = *(_QWORD *)&v6->fields.waveBattleEnemyClassIds->m_Items[8];
  if ( !deckItemList )
    goto LABEL_59;
  if ( !LODWORD(deckItemList->max_length) )
    goto LABEL_60;
  v6 = deckItemList->m_Items[0];
  if ( !v6 )
    goto LABEL_59;
  v4->fields.eventId = v6->fields.id;
  v4->fields.deckNo = PartyListViewItem__get_DeckNum(v6, 0);
  v6 = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
  }
  if ( !LODWORD(deckItemList->max_length) )
    goto LABEL_60;
  v7 = deckItemList->m_Items[0];
  v68 = v4;
  if ( !v7 )
LABEL_59:
    sub_1C7BD40(v6, v5);
  userEquipId = v7->fields.userEquipId;
  v9 = v6->fields.waveBattleEnemyClassIds->m_Items[36];
  v10 = (DeckServant_o *)sub_1C7BD34(DeckServant_TypeInfo);
  max_length = deckItemList->max_length;
  v69 = deckItemList;
  v12 = v10;
  DeckServant___ctor_42272744(v10, max_length, v9, userEquipId, 0);
  v13 = v69;
  v68->fields.deckInfo = v12;
  p_deckInfo = &v68->fields.deckInfo;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v68->fields.deckInfo, (int32_t)v12, v15, v16, v17, v18, v19, v20);
  v21 = v69->max_length;
  if ( v21 >= 1 )
  {
    v22 = 0;
    v23 = 0;
    while ( v23 < (unsigned int)v21 )
    {
      if ( !*p_deckInfo )
        goto LABEL_59;
      waveSvts = (*p_deckInfo)->fields.waveSvts;
      if ( !waveSvts )
        goto LABEL_59;
      v25 = v23;
      if ( (unsigned int)v23 >= LODWORD(waveSvts->max_length) )
        break;
      v26 = waveSvts->m_Items[v23];
      if ( !v26 )
        goto LABEL_59;
      v27 = v13->m_Items[v23];
      v28 = 0;
      v26->fields.wave = v23 + 1;
      v70 = v22;
      v29 = v22;
      while ( 1 )
      {
        v6 = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v6 = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
        }
        if ( (__int64)v28 >= v6->fields.waveBattleEnemyClassIds->m_Items[36] )
          break;
        if ( !v27 )
          goto LABEL_59;
        Member = PartyListViewItem__GetMember(v27, v28, 0);
        v31 = sub_1C7BD34(DeckServantData_TypeInfo);
        DeckServantData___ctor((DeckServantData_o *)v31, 0);
        if ( !v31 )
          goto LABEL_59;
        *(_DWORD *)(v31 + 16) = v29 + v28 + 1;
        if ( !Member )
          goto LABEL_59;
        userServantEntity = Member->fields.userServantEntity;
        if ( userServantEntity )
        {
          v33 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v72[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v72[1].fields.fakeValue = v33;
        }
        else
        {
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v72, 0, 0);
          v72[1] = v72[0];
        }
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v71 = v72[1];
        *(_QWORD *)(v31 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v71, 0);
        v34 = Member->fields.userServantEntity;
        if ( v34 )
        {
          v36 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
          v35 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v73.fields.currentCryptoKey = v36;
          *(_QWORD *)&v73.fields.fakeValue = v35;
          v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v73, 0);
        }
        else
        {
          v37 = 0;
        }
        *(_DWORD *)(v31 + 32) = v37;
        EquipList = PartyOrganizationListViewItem__GetEquipList(Member, 0);
        *(_QWORD *)(v31 + 40) = EquipList;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v31 + 40), (int32_t)EquipList, v39, v40, v41, v42, v43, v44);
        v45 = sub_1C7BB90(int___TypeInfo, 1);
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(Member, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        v6 = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(EquipSvtId, 0);
        if ( !v45 )
          goto LABEL_59;
        if ( !*(_DWORD *)(v45 + 24) )
          goto LABEL_60;
        *(_DWORD *)(v45 + 32) = (_DWORD)v6;
        *(_QWORD *)(v31 + 48) = v45;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v31 + 48), v45, v47, v48, v49, v50, v51, v52);
        InitPos_k__BackingField = Member->fields._InitPos_k__BackingField;
        *(_QWORD *)(v31 + 64) = 0;
        *(_BYTE *)(v31 + 56) = 0;
        *(_DWORD *)(v31 + 76) = InitPos_k__BackingField;
        v54 = *p_deckInfo;
        if ( !*p_deckInfo )
          goto LABEL_59;
        v55 = v54->fields.waveSvts;
        if ( !v55 )
          goto LABEL_59;
        if ( (unsigned int)v25 >= LODWORD(v55->max_length) )
          goto LABEL_60;
        v56 = v55->m_Items[v25];
        if ( !v56 )
          goto LABEL_59;
        uniqueIds = v56->fields.uniqueIds;
        if ( !uniqueIds )
          goto LABEL_59;
        if ( v28 >= LODWORD(uniqueIds->max_length) )
          goto LABEL_60;
        uniqueIds->m_Items[v28] = *(_DWORD *)(v31 + 16);
        svts = v54->fields.svts;
        if ( !svts )
          goto LABEL_59;
        v6 = (PartyListViewItem_o *)sub_1C7BC24(v31, svts->obj.klass->_1.element_class);
        if ( !v6 )
        {
          v67 = sub_1C7BD64();
          sub_1C7BC10(v67, 0);
        }
        if ( (unsigned int)(v29 + v28) >= LODWORD(svts->max_length) )
          goto LABEL_60;
        v65 = &svts->obj.klass + v29 + (int)v28;
        v65[4] = (Il2CppClass *)v31;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v65 + 4), v31, v59, v60, v61, v62, v63, v64);
        ++v28;
      }
      v13 = v69;
      v23 = v25 + 1;
      v21 = v69->max_length;
      v22 = v70 + v28;
      if ( (int)v25 + 1 >= v21 )
        return v68;
    }
LABEL_60:
    sub_1C7BD48(v6);
  }
  return v68;
}


void WaveBattlePartyOrganizationMenu__Hide(WaveBattlePartyOrganizationMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void WaveBattlePartyOrganizationMenu__Init(WaveBattlePartyOrganizationMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


bool WaveBattlePartyOrganizationMenu__IsDisplay(WaveBattlePartyOrganizationMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0);
}


bool WaveBattlePartyOrganizationMenu__IsHintDialog(
        WaveBattlePartyOrganizationMenu_o *this,
        bool *isEvery,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationMenu_o *v4; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w20
  int32_t questId; // w21
  QuestHintOverwriteEntity_o *CompleteCondEntity; // x0
  int32_t openType; // w8
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v13; // [xsp+0h] [xbp-40h] BYREF
  QuestHintEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4CEA2FA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestHintOverwriteMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    this = (WaveBattlePartyOrganizationMenu_o *)sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CEA2FA = 1;
  }
  v13 = 0;
  entity = 0;
  *isEvery = 0;
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_25;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestHintOverwriteMaster___);
  if ( !this )
    goto LABEL_25;
  CompleteCondEntity = QuestHintOverwriteMaster__GetCompleteCondEntity(
                         (QuestHintOverwriteMaster_o *)this,
                         questId,
                         questPhase,
                         0);
  if ( !CompleteCondEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestHintMaster___);
    if ( this )
    {
      this = (WaveBattlePartyOrganizationMenu_o *)QuestHintMaster__TryGetEntity(
                                                    (QuestHintMaster_o *)this,
                                                    &entity,
                                                    questId,
                                                    questPhase,
                                                    0);
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
        this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( this )
        {
          if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &v13, questId, questPhase, 0) )
            return 0;
          this = (WaveBattlePartyOrganizationMenu_o *)v13;
          if ( v13 )
          {
            *isEvery = QuestPhaseEntity__getHintOpenType(v13, 0) == 0;
            this = (WaveBattlePartyOrganizationMenu_o *)v13;
            if ( v13 )
            {
              HintMessage = QuestPhaseEntity__getHintMessage(v13, 0);
              return !System_String__IsNullOrEmpty(HintMessage, 0);
            }
          }
        }
      }
    }
LABEL_25:
    sub_1C7BD40(this, isEvery);
  }
  openType = CompleteCondEntity->fields.openType;
LABEL_15:
  *isEvery = openType == 0;
  return 1;
}


void WaveBattlePartyOrganizationMenu__OnClickApplyInterruptionDeckButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( this->fields.state == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        6,
        1,
        1,
        callbackFunc->fields.method);
  }
}


void WaveBattlePartyOrganizationMenu__OnClickAutoOrganization(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4CEA2FF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__);
    byte_4CEA2FF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        2,
        1,
        1,
        callbackFunc->fields.method);
  }
}


void WaveBattlePartyOrganizationMenu__OnClickAutoSell(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4CEA302 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__);
    byte_4CEA302 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        5,
        1,
        1,
        callbackFunc->fields.method);
  }
}


void WaveBattlePartyOrganizationMenu__OnClickBattleStart(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( this->fields.state == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        7,
        1,
        1,
        callbackFunc->fields.method);
  }
}


void WaveBattlePartyOrganizationMenu__OnClickClassInfo(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4CEA301 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__);
    byte_4CEA301 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        4,
        1,
        1,
        callbackFunc->fields.method);
  }
}


void WaveBattlePartyOrganizationMenu__OnClickFriendshipUpItemUseButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  FriendshipUpItemSwitchComponent_o *friendshipUpItemSwitchComponent; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CEA306 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_WaveBattlePartyOrganizationMenu__OnClickFriendshipUpItemUseButton_b__58_0__);
    byte_4CEA306 = 1;
  }
  friendshipUpItemSwitchComponent = this->fields.friendshipUpItemSwitchComponent;
  v4 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationMenu__OnClickFriendshipUpItemUseButton_b__58_0__,
    0);
  if ( !friendshipUpItemSwitchComponent )
    sub_1C7BD40(v5, v6);
  FriendshipUpItemSwitchComponent__ChangeButtonState(friendshipUpItemSwitchComponent, v4, 0);
}


void WaveBattlePartyOrganizationMenu__OnClickHintDialogButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4CEA303 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__);
    byte_4CEA303 = 1;
  }
  v3 = Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__;
  if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  WaveBattlePartyOrganizationMenu__ShowHintDialogButton(this, v5);
}


void WaveBattlePartyOrganizationMenu__OnClickMasterFormation(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4CEA2FE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__);
    byte_4CEA2FE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        1,
        1,
        1,
        callbackFunc->fields.method);
  }
}


void WaveBattlePartyOrganizationMenu__OnClickPartyEdit(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4CEA300 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__);
    byte_4CEA300 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        3,
        1,
        1,
        callbackFunc->fields.method);
  }
}


void WaveBattlePartyOrganizationMenu__OnSelectWavePartyList(
        WaveBattlePartyOrganizationMenu_o *this,
        int32_t result,
        int32_t wave,
        int32_t idx,
        const MethodInfo *method)
{
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, int32_t, int32_t, int32_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      wave,
      idx,
      callbackFunc->fields.method);
}


void WaveBattlePartyOrganizationMenu__Open(
        WaveBattlePartyOrganizationMenu_o *this,
        UserEventDeckEntity_o *deckEntity,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t waveCount,
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *callback,
        int32_t restartWave,
        const MethodInfo *method)
{
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v14; // x1
  Il2CppObject *Component_object; // x25
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  float y; // s8
  float z; // s9
  float v24; // s10
  float v25; // s11
  bool v26; // w26
  bool v27; // w1
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x25
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x24
  WaveBattleWaveInfoListManager_CallbackFunc_o *v36; // x27
  const MethodInfo *v37; // x2
  struct DeckServant_o *deckInfo; // x8
  UISprite_o *classInfoSpriteOrganization; // x20
  const MethodInfo *v40; // x2
  char v41; // w20
  struct QuestRestrictionInfo_o *v42; // x8
  int32_t questPhase; // w20
  int32_t questId; // w21
  struct QuestRestrictionInfo_o *v45; // x8
  int32_t v46; // w20
  int32_t v47; // w21
  struct QuestRestrictionInfo_o *v48; // x8
  _BOOL4 v49; // w23
  int32_t v50; // w20
  int32_t v51; // w21
  _BOOL4 isInterruption; // w20
  UISprite_o *applyInterruptionDeckSprite; // x20
  const MethodInfo *v54; // x1
  System_Action_o *v55; // x20
  bool isEvery; // [xsp+14h] [xbp-7Ch] BYREF
  QuestPhaseEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEA2F9 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&QuestHintDialogOpenManager_TypeInfo);
    sub_1C7BAE8(&Method_WaveBattlePartyOrganizationMenu_EndOpen__);
    sub_1C7BAE8(&Method_WaveBattlePartyOrganizationMenu_OnSelectWavePartyList__);
    sub_1C7BAE8(&StringLiteral_17757/*"buttontxt_formation_21"*/);
    sub_1C7BAE8(&StringLiteral_17751/*"buttontxt_battlerestart"*/);
    sub_1C7BAE8(&StringLiteral_17756/*"buttontxt_formation_20"*/);
    byte_4CEA2F9 = 1;
  }
  entity = 0;
  isEvery = 0;
  if ( !this->fields.state )
  {
    this->fields.isSwitchPartyBattle = 0;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !questRestrictionInfo || !Master_object )
      goto LABEL_68;
    QuestPhaseMaster__TryGetEntity(
      Master_object,
      &entity,
      questRestrictionInfo->fields.questId,
      questRestrictionInfo->fields.questPhase,
      0);
    if ( !entity )
      goto LABEL_26;
    if ( QuestPhaseEntity__IsWaveSetupAsOneParty(entity, 0) )
    {
      Master_object = (QuestPhaseMaster_o *)this->fields.normalView;
      if ( !Master_object )
        goto LABEL_68;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      Master_object = (QuestPhaseMaster_o *)this->fields.otherView;
      if ( !Master_object )
        goto LABEL_68;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
      Master_object = (QuestPhaseMaster_o *)this->fields.separateView;
      if ( !Master_object )
        goto LABEL_68;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      Master_object = (QuestPhaseMaster_o *)this->fields.waveInfoListManager;
      if ( !Master_object )
        goto LABEL_68;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)Master_object,
                           (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Master_object = (QuestPhaseMaster_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)Component_object,
                                              0,
                                              0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_68;
        center = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)Component_object, 0);
        y = center.fields.y;
        z = center.fields.z;
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)Component_object, 0);
        v24 = size.fields.y;
        v25 = size.fields.z;
        size.fields.x = 200.0;
        size.fields.y = y;
        size.fields.z = z;
        UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Component_object, size, 0);
        v60.fields.x = 540.0;
        v60.fields.y = v24;
        v60.fields.z = v25;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v60, 0);
      }
      v26 = 1;
      goto LABEL_31;
    }
    if ( entity && QuestPhaseEntity__IsWaveSetupSwitchParty(entity, 0) )
    {
      Master_object = (QuestPhaseMaster_o *)this->fields.normalView;
      this->fields.isSwitchPartyBattle = 1;
      if ( !Master_object )
        goto LABEL_68;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      Master_object = (QuestPhaseMaster_o *)this->fields.otherView;
      if ( !Master_object )
        goto LABEL_68;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      Master_object = (QuestPhaseMaster_o *)this->fields.separateView;
      if ( !Master_object )
        goto LABEL_68;
      v27 = 1;
    }
    else
    {
LABEL_26:
      Master_object = (QuestPhaseMaster_o *)this->fields.normalView;
      if ( !Master_object )
        goto LABEL_68;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
      Master_object = (QuestPhaseMaster_o *)this->fields.otherView;
      if ( !Master_object )
        goto LABEL_68;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      Master_object = (QuestPhaseMaster_o *)this->fields.separateView;
      if ( !Master_object )
        goto LABEL_68;
      v27 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v27, 0);
    v26 = 0;
LABEL_31:
    p_questRestrictionInfo = &this->fields.questRestrictionInfo;
    this->fields.questRestrictionInfo = questRestrictionInfo;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
      (int32_t)questRestrictionInfo,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    this->fields.callbackFunc = callback;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    waveInfoListManager = this->fields.waveInfoListManager;
    v36 = (WaveBattleWaveInfoListManager_CallbackFunc_o *)sub_1C7BD34(WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
    WaveBattleWaveInfoListManager_CallbackFunc___ctor(
      v36,
      (Il2CppObject *)this,
      Method_WaveBattlePartyOrganizationMenu_OnSelectWavePartyList__,
      0);
    if ( waveInfoListManager )
    {
      WaveBattleWaveInfoListManager__CreateList(
        waveInfoListManager,
        deckEntity,
        questRestrictionInfo,
        waveCount,
        v36,
        restartWave,
        v26,
        this->fields.isSwitchPartyBattle,
        0);
      this->fields.isInterruption = restartWave > 0;
      this->fields.restartWave = restartWave;
      if ( deckEntity )
      {
        deckInfo = deckEntity->fields.deckInfo;
        if ( deckInfo )
        {
          WaveBattlePartyOrganizationMenu__SetMasterEquipButton(this, deckInfo->fields.userEquipId, v37);
          classInfoSpriteOrganization = this->fields.classInfoSpriteOrganization;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetPartyOrganizationImage(
            classInfoSpriteOrganization,
            (System_String_o *)StringLiteral_17756/*"buttontxt_formation_20"*/,
            0);
          Master_object = (QuestPhaseMaster_o *)WaveBattlePartyOrganizationMenu__IsHintDialog(this, &isEvery, v40);
          if ( this->fields.hintDialogButton )
          {
            v41 = (char)Master_object;
            Master_object = (QuestPhaseMaster_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                                    0);
            if ( Master_object )
            {
              if ( (v41 & 1) != 0 )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
                v42 = *p_questRestrictionInfo;
                if ( !*p_questRestrictionInfo )
                  goto LABEL_68;
                questId = v42->fields.questId;
                questPhase = v42->fields.questPhase;
                if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                Master_object = (QuestPhaseMaster_o *)QuestHintDialogOpenManager__IsSettingTemporarilyInfo(
                                                        questId,
                                                        questPhase,
                                                        0);
                if ( ((unsigned __int8)Master_object & 1) == 0 )
                {
                  v45 = *p_questRestrictionInfo;
                  if ( !*p_questRestrictionInfo )
                    goto LABEL_68;
                  v47 = v45->fields.questId;
                  v46 = v45->fields.questPhase;
                  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                  Master_object = (QuestPhaseMaster_o *)QuestHintDialogOpenManager__IsQuestHintOpen(v47, v46, 0);
                  if ( ((unsigned __int8)Master_object & 1) == 0 )
                  {
                    v48 = *p_questRestrictionInfo;
                    if ( !*p_questRestrictionInfo )
                      goto LABEL_68;
                    v49 = isEvery;
                    v51 = v48->fields.questId;
                    v50 = v48->fields.questPhase;
                    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                    QuestHintDialogOpenManager__SetTemporarilyInfo(v51, v50, 0);
                    if ( !v49 )
                    {
                      if ( !*p_questRestrictionInfo )
                        goto LABEL_68;
                      QuestHintDialogOpenManager__SetQuestInfo(
                        (*p_questRestrictionInfo)->fields.questId,
                        (*p_questRestrictionInfo)->fields.questPhase,
                        0);
                      QuestHintDialogOpenManager__WriteData(0);
                    }
                    this->fields.isHintDialogOpenFlag = 1;
                  }
                }
              }
              else
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
              }
              Master_object = (QuestPhaseMaster_o *)this->fields.applyInterruptionDeckButton;
              if ( Master_object )
              {
                isInterruption = this->fields.isInterruption;
                Master_object = (QuestPhaseMaster_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)Master_object,
                                                        0);
                if ( Master_object )
                {
                  if ( !isInterruption )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
                    goto LABEL_66;
                  }
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
                  applyInterruptionDeckSprite = this->fields.applyInterruptionDeckSprite;
                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                  AtlasManager__SetPartyOrganizationImage(
                    applyInterruptionDeckSprite,
                    (System_String_o *)StringLiteral_17757/*"buttontxt_formation_21"*/,
                    0);
                  Master_object = (QuestPhaseMaster_o *)this->fields.applyInterruptionDeckSprite;
                  if ( Master_object )
                  {
                    (*(void (__fastcall **)(QuestPhaseMaster_o *, _QWORD))&Master_object->klass[1]._2.element_size)(
                      Master_object,
                      *(_QWORD *)&Master_object->klass[1]._2.static_fields_size);
                    AtlasManager__SetPartyOrganizationImage(
                      this->fields.battleStartSprite,
                      (System_String_o *)StringLiteral_17751/*"buttontxt_battlerestart"*/,
                      0);
                    Master_object = (QuestPhaseMaster_o *)this->fields.battleStartSprite;
                    if ( Master_object )
                    {
                      Master_object = (QuestPhaseMaster_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)Master_object,
                                                              0);
                      if ( Master_object )
                      {
                        v61.fields.x = 0.0;
                        v61.fields.y = -2.0;
                        v61.fields.z = 0.0;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Master_object, v61, 0);
                        Master_object = (QuestPhaseMaster_o *)this->fields.battleStartSprite;
                        if ( Master_object )
                        {
                          (*(void (__fastcall **)(QuestPhaseMaster_o *, _QWORD))&Master_object->klass[1]._2.element_size)(
                            Master_object,
                            *(_QWORD *)&Master_object->klass[1]._2.static_fields_size);
                          WaveBattlePartyOrganizationMenu__DisabledEditButton(this, v54);
LABEL_66:
                          this->fields.state = 1;
                          v55 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
                          System_Action___ctor(
                            v55,
                            (Il2CppObject *)this,
                            Method_WaveBattlePartyOrganizationMenu_EndOpen__,
                            0);
                          BaseMenu__Open((BaseMenu_o *)this, v55, 0);
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
LABEL_68:
    sub_1C7BD40(Master_object, v14);
  }
}


void WaveBattlePartyOrganizationMenu__OpenHintDialog(WaveBattlePartyOrganizationMenu_o *this, const MethodInfo *method)
{
  if ( this->fields.isHintDialogOpenFlag )
  {
    this->fields.isHintDialogOpenFlag = 0;
    WaveBattlePartyOrganizationMenu__ShowHintDialogButton(this, method);
  }
}


void WaveBattlePartyOrganizationMenu__OpenTutorial(WaveBattlePartyOrganizationMenu_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Action_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  struct QuestRestrictionInfo_o *v7; // x8

  if ( (byte_4CEA304 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_WaveBattlePartyOrganizationMenu_CheckQuestUseItemTutorial__);
    byte_4CEA304 = 1;
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
         0) )
  {
    v4 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      v4,
      (Il2CppObject *)this,
      Method_WaveBattlePartyOrganizationMenu_CheckQuestUseItemTutorial__,
      0);
    v7 = this->fields.questRestrictionInfo;
    if ( !v7 )
      sub_1C7BD40(v5, v6);
    EventTutorialMaster__CheckTutorial(0, 45, v4, v7->fields.questId, v7->fields.questPhase, 0, 0, 0);
  }
  else
  {
    WaveBattlePartyOrganizationMenu__CheckQuestUseItemTutorial(this, method);
  }
}


void WaveBattlePartyOrganizationMenu__SetMasterEquipButton(
        WaveBattlePartyOrganizationMenu_o *this,
        int64_t userEquipId,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  UILabel_o *masterEquipFixedLabel; // x20
  ItemIconComponent_o *Master_object; // x0
  __int64 v8; // x1
  System_String_o *detail; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *equipName; // [xsp+10h] [xbp-40h] BYREF
  int32_t maxLv[2]; // [xsp+18h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+20h] [xbp-30h] BYREF
  int32_t genderImageId; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_4CEA308 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserEquipMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10288/*"PARTY_ORGANIZATION_MASTER_EQUIP_FIXED"*/);
    byte_4CEA308 = 1;
  }
  genderImageId = 0;
  *(_QWORD *)maxLv = 0;
  entity = 0;
  detail = 0;
  equipName = 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo
    || !QuestRestrictionInfo__TryGetFixedMasterEquipInfo(questRestrictionInfo, &genderImageId, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ItemIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserEquipMaster___);
    if ( Master_object )
    {
      if ( DataMasterBase_object__object__long___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             userEquipId,
             (const MethodInfo_34308A4 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__) )
      {
        Master_object = (ItemIconComponent_o *)entity;
        if ( !entity )
          goto LABEL_24;
        UserEquipEntity__getEquipInfo(
          (UserEquipEntity_o *)entity,
          &maxLv[1],
          maxLv,
          &equipName,
          &detail,
          &genderImageId,
          0);
        Master_object = this->fields.masterEquipIcon;
        if ( !Master_object )
          goto LABEL_24;
        ItemIconComponent__SetEquipItem(Master_object, genderImageId, 0);
      }
      Master_object = (ItemIconComponent_o *)this->fields.masterEquipFixedObject;
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
        Master_object = (ItemIconComponent_o *)this->fields.masterEquipButton;
        if ( this->fields.isInterruption )
        {
          v8 = this->fields.restartWave == 1;
          if ( Master_object )
            goto LABEL_22;
        }
        else
        {
          v8 = 1;
          if ( Master_object )
            goto LABEL_22;
        }
      }
    }
LABEL_24:
    sub_1C7BD40(Master_object, v8);
  }
  masterEquipFixedLabel = this->fields.masterEquipFixedLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10288/*"PARTY_ORGANIZATION_MASTER_EQUIP_FIXED"*/, 0);
  if ( !masterEquipFixedLabel )
    goto LABEL_24;
  UILabel__set_text(masterEquipFixedLabel, (System_String_o *)Master_object, 0);
  Master_object = (ItemIconComponent_o *)this->fields.masterEquipFixedObject;
  if ( !Master_object )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  Master_object = this->fields.masterEquipIcon;
  if ( !Master_object )
    goto LABEL_24;
  ItemIconComponent__SetEquipItem(Master_object, genderImageId, 0);
  Master_object = (ItemIconComponent_o *)this->fields.masterEquipButton;
  if ( !Master_object )
    goto LABEL_24;
  LOBYTE(v8) = 0;
LABEL_22:
  UICommonButton__SetEnable((UICommonButton_o *)Master_object, v8, 0);
}


void WaveBattlePartyOrganizationMenu__SetQuestUseItemButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v4; // x1
  char v5; // w20

  if ( (byte_4CEA307 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CEA307 = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__HasCachedQuestUseItem(Instance, 0);
  if ( !this->fields.friendshipUpItemSwitchComponent )
    goto LABEL_10;
  v5 = (char)Instance;
  Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                             0);
  if ( !Instance )
    goto LABEL_10;
  if ( (v5 & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
    if ( Instance )
    {
      FriendshipUpItemSwitchComponent__SetItemInfo((FriendshipUpItemSwitchComponent_o *)Instance, 0);
      return;
    }
LABEL_10:
    sub_1C7BD40(Instance, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void WaveBattlePartyOrganizationMenu__SetWave(
        WaveBattlePartyOrganizationMenu_o *this,
        int32_t wave,
        bool isInitDisp,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    goto LABEL_8;
  WaveBattleWaveInfoListManager__SetScrollPos(waveInfoListManager, wave, 0, isInitDisp, 0);
  if ( isInitDisp && this->fields.isSwitchPartyBattle && this->fields.isInterruption )
  {
    waveInfoListManager = this->fields.waveInfoListManager;
    if ( waveInfoListManager )
    {
      WaveBattleWaveInfoListManager__UpdateSeparatePartyInfo(waveInfoListManager, this->fields.restartWave, 0);
      return;
    }
LABEL_8:
    sub_1C7BD40(waveInfoListManager, *(_QWORD *)&wave);
  }
}


void WaveBattlePartyOrganizationMenu__ShowHintDialogButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w20
  int32_t questId; // w21
  System_String_o *message; // x19
  QuestHintOverwriteMaster_o *Master_object; // x0
  __int64 v8; // x1
  QuestHintOverwriteEntity_o *CompleteCondEntity; // x0
  System_String_o *title; // x20
  int32_t leftIndent; // w21
  QuestPhaseEntity_o *v12; // [xsp+10h] [xbp-40h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CEA2FB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestHintOverwriteMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEA2FB = 1;
  }
  v12 = 0;
  entity = 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    questId = questRestrictionInfo->fields.questId;
    questPhase = questRestrictionInfo->fields.questPhase;
    message = (System_String_o *)StringLiteral_1/*""*/;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestHintOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestHintOverwriteMaster___);
    if ( Master_object )
    {
      CompleteCondEntity = QuestHintOverwriteMaster__GetCompleteCondEntity(Master_object, questId, questPhase, 0);
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
        Master_object = (QuestHintOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestHintMaster___);
        if ( !Master_object )
          goto LABEL_28;
        Master_object = (QuestHintOverwriteMaster_o *)QuestHintMaster__TryGetEntity(
                                                        (QuestHintMaster_o *)Master_object,
                                                        &entity,
                                                        questId,
                                                        questPhase,
                                                        0);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
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
          Master_object = (QuestHintOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
          if ( !Master_object )
            goto LABEL_28;
          if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v12, questId, questPhase, 0) )
          {
            Master_object = (QuestHintOverwriteMaster_o *)v12;
            if ( !v12 )
              goto LABEL_28;
            Master_object = (QuestHintOverwriteMaster_o *)QuestPhaseEntity__getHintMessageTitle(v12, 0);
            if ( !v12 )
              goto LABEL_28;
            title = (System_String_o *)Master_object;
            Master_object = (QuestHintOverwriteMaster_o *)QuestPhaseEntity__getHintMessage(v12, 0);
            if ( !v12 )
              goto LABEL_28;
            message = (System_String_o *)Master_object;
            leftIndent = QuestPhaseEntity__getHintLeftIndent(v12, 0);
          }
          else
          {
            leftIndent = -1;
            title = message;
          }
        }
      }
      if ( System_String__IsNullOrEmpty(message, 0) )
        return;
      Master_object = (QuestHintOverwriteMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Master_object )
      {
        CommonUI__OpenScrollMessageDialog((CommonUI_o *)Master_object, title, message, leftIndent, 0, 0, 1, 0, 1, 0);
        return;
      }
    }
LABEL_28:
    sub_1C7BD40(Master_object, v8);
  }
}


void WaveBattlePartyOrganizationMenu__UpdateInfo(
        WaveBattlePartyOrganizationMenu_o *this,
        UserEventDeckEntity_o *deckEntity,
        const MethodInfo *method)
{
  struct DeckServant_o *deckInfo; // x8
  WaveBattlePartyOrganizationMenu_o *v5; // x20

  if ( !deckEntity
    || (deckInfo = deckEntity->fields.deckInfo) == 0
    || (v5 = this,
        WaveBattlePartyOrganizationMenu__SetMasterEquipButton(this, deckInfo->fields.userEquipId, method),
        (this = (WaveBattlePartyOrganizationMenu_o *)v5->fields.waveInfoListManager) == 0) )
  {
    sub_1C7BD40(this, deckEntity);
  }
  WaveBattleWaveInfoListManager__UpdateWaveServantInfo(
    (WaveBattleWaveInfoListManager_o *)this,
    deckEntity,
    v5->fields.isInterruption,
    0);
}


void WaveBattlePartyOrganizationMenu___OnClickFriendshipUpItemUseButton_b__58_0(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, __int64, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      9,
      1,
      1,
      callbackFunc->fields.method);
}


void WaveBattlePartyOrganizationMenu__add_callbackFunc(
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

  if ( (byte_4CEA2F7 & 1) == 0 )
  {
    sub_1C7BAE8(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo);
    byte_4CEA2F7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (WaveBattlePartyOrganizationMenu_CallbackFunc_c *)v8->klass != WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationMenu_o *)sub_1C7C0DC(v8);
  WaveBattlePartyOrganizationMenu__remove_callbackFunc(v11, v12, v13);
}


void WaveBattlePartyOrganizationMenu__remove_callbackFunc(
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

  if ( (byte_4CEA2F8 & 1) == 0 )
  {
    sub_1C7BAE8(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo);
    byte_4CEA2F8 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (WaveBattlePartyOrganizationMenu_CallbackFunc_c *)v8->klass != WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationMenu_o *)sub_1C7C0DC(v8);
  WaveBattlePartyOrganizationMenu__Awake(v11, v12);
}


void WaveBattlePartyOrganizationMenu_CallbackFunc___ctor(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AAC0C8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AAC068;
}


System_IAsyncResult_o *WaveBattlePartyOrganizationMenu_CallbackFunc__BeginInvoke(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v12; // [xsp+10h] [xbp-60h]
  int32_t v13; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v14; // [xsp+38h] [xbp-38h] BYREF
  int32_t v15; // [xsp+3Ch] [xbp-34h] BYREF

  v14 = n;
  v15 = result;
  v13 = m;
  if ( (byte_4CEA30A & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo);
    byte_4CEA30A = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v15);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v11, callback, object);
}


void WaveBattlePartyOrganizationMenu_CallbackFunc__EndInvoke(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void WaveBattlePartyOrganizationMenu_CallbackFunc__Invoke(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    n,
    m,
    this->fields.method);
}