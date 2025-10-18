void WaveBattlePartyOrganizationMenu___ctor(WaveBattlePartyOrganizationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C3ED99 & 1) == 0 )
  {
    sub_1C37058(&BaseMenu_TypeInfo);
    byte_4C3ED99 = 1;
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

  if ( (byte_4C3ED95 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C37058(&TutorialFlag_TypeInfo);
    sub_1C37058(&Method_WaveBattlePartyOrganizationMenu_OpenHintDialog__);
    byte_4C3ED95 = 1;
  }
  if ( !this->fields.questRestrictionInfo )
    goto LABEL_15;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40427704(102, 0) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_WaveBattlePartyOrganizationMenu_OpenHintDialog__, 0);
    if ( !Instance )
      sub_1C372B4(v5);
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

  WaveBattlePartyOrganizationMenu__Close_34739184(this, 0, v2);
}


void WaveBattlePartyOrganizationMenu__Close_34739184(
        WaveBattlePartyOrganizationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_4C3ED8C & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_WaveBattlePartyOrganizationMenu_EndClose__);
    byte_4C3ED8C = 1;
  }
  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1C372B4(0);
  WaveBattleWaveInfoListManager__DestroyList(waveInfoListManager, 0);
  this->fields.closeCallbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v6, v7);
  this->fields.state = 4;
  v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_WaveBattlePartyOrganizationMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v8, 0);
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
      sub_1C372B4(waveInfoListManager);
    }
  }
}


void WaveBattlePartyOrganizationMenu__Display(WaveBattlePartyOrganizationMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  WaveBattlePartyOrganizationMenu__DisabledEditButton(this, v4);
}


void WaveBattlePartyOrganizationMenu__EndClose(WaveBattlePartyOrganizationMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C36FFC(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
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
  PartyListViewItem_o *v5; // x0
  PartyListViewItem_o *v6; // x8
  int64_t userEquipId; // x21
  int32_t v8; // w22
  DeckServant_o *v9; // x0
  int32_t max_length; // w1
  DeckServant_o *v11; // x23
  PartyListViewItem_array *v12; // x20
  struct DeckServant_o **p_deckInfo; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int v16; // w8
  int v17; // w10
  signed int v18; // w11
  struct DeckWaveServantData_array *waveSvts; // x8
  __int64 v20; // x29
  DeckWaveServantData_o *v21; // x8
  PartyListViewItem_o *v22; // x23
  unsigned __int64 v23; // x22
  int v24; // w20
  PartyOrganizationListViewItem_o *Member; // x25
  __int64 v26; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v28; // q0
  struct UserServantEntity_o *v29; // x8
  __int64 v30; // x26
  __int64 v31; // x27
  int32_t v32; // w0
  System_Int64_array *EquipList; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t InitPos_k__BackingField; // w8
  struct DeckServant_o *v41; // x8
  struct DeckWaveServantData_array *v42; // x9
  DeckWaveServantData_o *v43; // x9
  struct System_Int32_array *uniqueIds; // x9
  struct DeckServantData_array *svts; // x25
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  Il2CppClass **v48; // x0
  __int64 v50; // x0
  UserEventDeckEntity_o *v51; // [xsp+0h] [xbp-E0h]
  PartyListViewItem_array *v52; // [xsp+8h] [xbp-D8h]
  int v53; // [xsp+1Ch] [xbp-C4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55[2]; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_4C3ED8D & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&DeckServantData_TypeInfo);
    sub_1C37058(&DeckServant_TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&UserEventDeckEntity_TypeInfo);
    byte_4C3ED8D = 1;
  }
  memset(&v55[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v4 = (UserEventDeckEntity_o *)sub_1C372A4(UserEventDeckEntity_TypeInfo);
  UserEventDeckEntity___ctor(v4, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  v5 = (PartyListViewItem_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = (PartyListViewItem_o *)NetworkManager_TypeInfo;
  }
  if ( !v4 )
    goto LABEL_59;
  v4->fields.userId = *(_QWORD *)&v5->fields.waveBattleEnemyClassIds->m_Items[8];
  if ( !deckItemList )
    goto LABEL_59;
  if ( !LODWORD(deckItemList->max_length) )
    goto LABEL_60;
  v5 = deckItemList->m_Items[0];
  if ( !v5 )
    goto LABEL_59;
  v4->fields.eventId = v5->fields.id;
  v4->fields.deckNo = PartyListViewItem__get_DeckNum(v5, 0);
  v5 = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
  }
  if ( !LODWORD(deckItemList->max_length) )
    goto LABEL_60;
  v6 = deckItemList->m_Items[0];
  v51 = v4;
  if ( !v6 )
LABEL_59:
    sub_1C372B4(v5);
  userEquipId = v6->fields.userEquipId;
  v8 = v5->fields.waveBattleEnemyClassIds->m_Items[36];
  v9 = (DeckServant_o *)sub_1C372A4(DeckServant_TypeInfo);
  max_length = deckItemList->max_length;
  v52 = deckItemList;
  v11 = v9;
  DeckServant___ctor_41698320(v9, max_length, v8, userEquipId, 0);
  v12 = v52;
  v51->fields.deckInfo = v11;
  p_deckInfo = &v51->fields.deckInfo;
  sub_1C36FFC((CGThumbnailListItem_o *)&v51->fields.deckInfo, (int32_t)v11, v14, v15);
  v16 = v52->max_length;
  if ( v16 >= 1 )
  {
    v17 = 0;
    v18 = 0;
    while ( v18 < (unsigned int)v16 )
    {
      if ( !*p_deckInfo )
        goto LABEL_59;
      waveSvts = (*p_deckInfo)->fields.waveSvts;
      if ( !waveSvts )
        goto LABEL_59;
      v20 = v18;
      if ( (unsigned int)v18 >= LODWORD(waveSvts->max_length) )
        break;
      v21 = waveSvts->m_Items[v18];
      if ( !v21 )
        goto LABEL_59;
      v22 = v12->m_Items[v18];
      v23 = 0;
      v21->fields.wave = v18 + 1;
      v53 = v17;
      v24 = v17;
      while ( 1 )
      {
        v5 = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v5 = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
        }
        if ( (__int64)v23 >= v5->fields.waveBattleEnemyClassIds->m_Items[36] )
          break;
        if ( !v22 )
          goto LABEL_59;
        Member = PartyListViewItem__GetMember(v22, v23, 0);
        v26 = sub_1C372A4(DeckServantData_TypeInfo);
        DeckServantData___ctor((DeckServantData_o *)v26, 0);
        if ( !v26 )
          goto LABEL_59;
        *(_DWORD *)(v26 + 16) = v24 + v23 + 1;
        if ( !Member )
          goto LABEL_59;
        userServantEntity = Member->fields.userServantEntity;
        if ( userServantEntity )
        {
          v28 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v55[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v55[1].fields.fakeValue = v28;
        }
        else
        {
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v55, 0, 0);
          v55[1] = v55[0];
        }
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v54 = v55[1];
        *(_QWORD *)(v26 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v54, 0);
        v29 = Member->fields.userServantEntity;
        if ( v29 )
        {
          v31 = *(_QWORD *)&v29->fields.svtId.fields.currentCryptoKey;
          v30 = *(_QWORD *)&v29->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v56.fields.currentCryptoKey = v31;
          *(_QWORD *)&v56.fields.fakeValue = v30;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v56, 0);
        }
        else
        {
          v32 = 0;
        }
        *(_DWORD *)(v26 + 32) = v32;
        EquipList = PartyOrganizationListViewItem__GetEquipList(Member, 0);
        *(_QWORD *)(v26 + 40) = EquipList;
        sub_1C36FFC((CGThumbnailListItem_o *)(v26 + 40), (int32_t)EquipList, v34, v35);
        v36 = sub_1C37100(int___TypeInfo, 1);
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(Member, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        v5 = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(EquipSvtId, 0);
        if ( !v36 )
          goto LABEL_59;
        if ( !*(_DWORD *)(v36 + 24) )
          goto LABEL_60;
        *(_DWORD *)(v36 + 32) = (_DWORD)v5;
        *(_QWORD *)(v26 + 48) = v36;
        sub_1C36FFC((CGThumbnailListItem_o *)(v26 + 48), v36, v38, v39);
        InitPos_k__BackingField = Member->fields._InitPos_k__BackingField;
        *(_QWORD *)(v26 + 64) = 0;
        *(_BYTE *)(v26 + 56) = 0;
        *(_DWORD *)(v26 + 76) = InitPos_k__BackingField;
        v41 = *p_deckInfo;
        if ( !*p_deckInfo )
          goto LABEL_59;
        v42 = v41->fields.waveSvts;
        if ( !v42 )
          goto LABEL_59;
        if ( (unsigned int)v20 >= LODWORD(v42->max_length) )
          goto LABEL_60;
        v43 = v42->m_Items[v20];
        if ( !v43 )
          goto LABEL_59;
        uniqueIds = v43->fields.uniqueIds;
        if ( !uniqueIds )
          goto LABEL_59;
        if ( v23 >= LODWORD(uniqueIds->max_length) )
          goto LABEL_60;
        uniqueIds->m_Items[v23] = *(_DWORD *)(v26 + 16);
        svts = v41->fields.svts;
        if ( !svts )
          goto LABEL_59;
        v5 = (PartyListViewItem_o *)sub_1C37194(v26, svts->obj.klass->_1.element_class);
        if ( !v5 )
        {
          v50 = sub_1C372D8();
          sub_1C37180(v50, 0);
        }
        if ( (unsigned int)(v24 + v23) >= LODWORD(svts->max_length) )
          goto LABEL_60;
        v48 = &svts->obj.klass + v24 + (int)v23;
        v48[4] = (Il2CppClass *)v26;
        sub_1C36FFC((CGThumbnailListItem_o *)(v48 + 4), v26, v46, v47);
        ++v23;
      }
      v12 = v52;
      v18 = v20 + 1;
      v16 = v52->max_length;
      v17 = v53 + v23;
      if ( (int)v20 + 1 >= v16 )
        return v51;
    }
LABEL_60:
    sub_1C372BC(v5);
  }
  return v51;
}


void WaveBattlePartyOrganizationMenu__Hide(WaveBattlePartyOrganizationMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
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
  if ( (byte_4C3ED8A & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestHintOverwriteMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    this = (WaveBattlePartyOrganizationMenu_o *)sub_1C37058(&DataManager_TypeInfo);
    byte_4C3ED8A = 1;
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
  this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestHintOverwriteMaster___);
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
    this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestHintMaster___);
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
        this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
    sub_1C372B4(this);
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

  if ( (byte_4C3ED8F & 1) == 0 )
  {
    sub_1C37058(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__);
    byte_4C3ED8F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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

  if ( (byte_4C3ED92 & 1) == 0 )
  {
    sub_1C37058(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__);
    byte_4C3ED92 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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

  if ( (byte_4C3ED91 & 1) == 0 )
  {
    sub_1C37058(&Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__);
    byte_4C3ED91 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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

  if ( (byte_4C3ED96 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_WaveBattlePartyOrganizationMenu__OnClickFriendshipUpItemUseButton_b__58_0__);
    byte_4C3ED96 = 1;
  }
  friendshipUpItemSwitchComponent = this->fields.friendshipUpItemSwitchComponent;
  v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationMenu__OnClickFriendshipUpItemUseButton_b__58_0__,
    0);
  if ( !friendshipUpItemSwitchComponent )
    sub_1C372B4(v5);
  FriendshipUpItemSwitchComponent__ChangeButtonState(friendshipUpItemSwitchComponent, v4, 0);
}


void WaveBattlePartyOrganizationMenu__OnClickHintDialogButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C3ED93 & 1) == 0 )
  {
    sub_1C37058(&Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__);
    byte_4C3ED93 = 1;
  }
  v3 = Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__;
  if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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

  if ( (byte_4C3ED8E & 1) == 0 )
  {
    sub_1C37058(&Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__);
    byte_4C3ED8E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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

  if ( (byte_4C3ED90 & 1) == 0 )
  {
    sub_1C37058(&Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__);
    byte_4C3ED90 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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
  Il2CppObject *Component_object; // x25
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  float y; // s8
  float z; // s9
  float v19; // s10
  float v20; // s11
  bool v21; // w26
  bool v22; // w1
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x25
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x24
  WaveBattleWaveInfoListManager_CallbackFunc_o *v27; // x27
  const MethodInfo *v28; // x2
  struct DeckServant_o *deckInfo; // x8
  UISprite_o *classInfoSpriteOrganization; // x20
  const MethodInfo *v31; // x2
  char v32; // w20
  struct QuestRestrictionInfo_o *v33; // x8
  int32_t questPhase; // w20
  int32_t questId; // w21
  struct QuestRestrictionInfo_o *v36; // x8
  int32_t v37; // w20
  int32_t v38; // w21
  struct QuestRestrictionInfo_o *v39; // x8
  _BOOL4 v40; // w23
  int32_t v41; // w20
  int32_t v42; // w21
  _BOOL4 isInterruption; // w20
  UISprite_o *applyInterruptionDeckSprite; // x20
  const MethodInfo *v45; // x1
  System_Action_o *v46; // x20
  bool isEvery; // [xsp+14h] [xbp-7Ch] BYREF
  QuestPhaseEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3ED89 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&QuestHintDialogOpenManager_TypeInfo);
    sub_1C37058(&Method_WaveBattlePartyOrganizationMenu_EndOpen__);
    sub_1C37058(&Method_WaveBattlePartyOrganizationMenu_OnSelectWavePartyList__);
    sub_1C37058(&StringLiteral_17666/*"buttontxt_formation_21"*/);
    sub_1C37058(&StringLiteral_17660/*"buttontxt_battlerestart"*/);
    sub_1C37058(&StringLiteral_17665/*"buttontxt_formation_20"*/);
    byte_4C3ED89 = 1;
  }
  entity = 0;
  isEvery = 0;
  if ( !this->fields.state )
  {
    this->fields.isSwitchPartyBattle = 0;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
                           (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
        v19 = size.fields.y;
        v20 = size.fields.z;
        size.fields.x = 200.0;
        size.fields.y = y;
        size.fields.z = z;
        UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Component_object, size, 0);
        v51.fields.x = 540.0;
        v51.fields.y = v19;
        v51.fields.z = v20;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v51, 0);
      }
      v21 = 1;
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
      v22 = 1;
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
      v22 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v22, 0);
    v21 = 0;
LABEL_31:
    p_questRestrictionInfo = &this->fields.questRestrictionInfo;
    this->fields.questRestrictionInfo = questRestrictionInfo;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v15, v16);
    this->fields.callbackFunc = callback;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v24, v25);
    waveInfoListManager = this->fields.waveInfoListManager;
    v27 = (WaveBattleWaveInfoListManager_CallbackFunc_o *)sub_1C372A4(WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
    WaveBattleWaveInfoListManager_CallbackFunc___ctor(
      v27,
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
        v27,
        restartWave,
        v21,
        this->fields.isSwitchPartyBattle,
        0);
      this->fields.isInterruption = restartWave > 0;
      this->fields.restartWave = restartWave;
      if ( deckEntity )
      {
        deckInfo = deckEntity->fields.deckInfo;
        if ( deckInfo )
        {
          WaveBattlePartyOrganizationMenu__SetMasterEquipButton(this, deckInfo->fields.userEquipId, v28);
          classInfoSpriteOrganization = this->fields.classInfoSpriteOrganization;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetPartyOrganizationImage(
            classInfoSpriteOrganization,
            (System_String_o *)StringLiteral_17665/*"buttontxt_formation_20"*/,
            0);
          Master_object = (QuestPhaseMaster_o *)WaveBattlePartyOrganizationMenu__IsHintDialog(this, &isEvery, v31);
          if ( this->fields.hintDialogButton )
          {
            v32 = (char)Master_object;
            Master_object = (QuestPhaseMaster_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                                    0);
            if ( Master_object )
            {
              if ( (v32 & 1) != 0 )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
                v33 = *p_questRestrictionInfo;
                if ( !*p_questRestrictionInfo )
                  goto LABEL_68;
                questId = v33->fields.questId;
                questPhase = v33->fields.questPhase;
                if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                Master_object = (QuestPhaseMaster_o *)QuestHintDialogOpenManager__IsSettingTemporarilyInfo(
                                                        questId,
                                                        questPhase,
                                                        0);
                if ( ((unsigned __int8)Master_object & 1) == 0 )
                {
                  v36 = *p_questRestrictionInfo;
                  if ( !*p_questRestrictionInfo )
                    goto LABEL_68;
                  v38 = v36->fields.questId;
                  v37 = v36->fields.questPhase;
                  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                  Master_object = (QuestPhaseMaster_o *)QuestHintDialogOpenManager__IsQuestHintOpen(v38, v37, 0);
                  if ( ((unsigned __int8)Master_object & 1) == 0 )
                  {
                    v39 = *p_questRestrictionInfo;
                    if ( !*p_questRestrictionInfo )
                      goto LABEL_68;
                    v40 = isEvery;
                    v42 = v39->fields.questId;
                    v41 = v39->fields.questPhase;
                    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                    QuestHintDialogOpenManager__SetTemporarilyInfo(v42, v41, 0);
                    if ( !v40 )
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
                    (System_String_o *)StringLiteral_17666/*"buttontxt_formation_21"*/,
                    0);
                  Master_object = (QuestPhaseMaster_o *)this->fields.applyInterruptionDeckSprite;
                  if ( Master_object )
                  {
                    (*(void (__fastcall **)(QuestPhaseMaster_o *, _QWORD))&Master_object->klass[1]._2.element_size)(
                      Master_object,
                      *(_QWORD *)&Master_object->klass[1]._2.static_fields_size);
                    AtlasManager__SetPartyOrganizationImage(
                      this->fields.battleStartSprite,
                      (System_String_o *)StringLiteral_17660/*"buttontxt_battlerestart"*/,
                      0);
                    Master_object = (QuestPhaseMaster_o *)this->fields.battleStartSprite;
                    if ( Master_object )
                    {
                      Master_object = (QuestPhaseMaster_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)Master_object,
                                                              0);
                      if ( Master_object )
                      {
                        v52.fields.x = 0.0;
                        v52.fields.y = -2.0;
                        v52.fields.z = 0.0;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Master_object, v52, 0);
                        Master_object = (QuestPhaseMaster_o *)this->fields.battleStartSprite;
                        if ( Master_object )
                        {
                          (*(void (__fastcall **)(QuestPhaseMaster_o *, _QWORD))&Master_object->klass[1]._2.element_size)(
                            Master_object,
                            *(_QWORD *)&Master_object->klass[1]._2.static_fields_size);
                          WaveBattlePartyOrganizationMenu__DisabledEditButton(this, v45);
LABEL_66:
                          this->fields.state = 1;
                          v46 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                          System_Action___ctor(
                            v46,
                            (Il2CppObject *)this,
                            Method_WaveBattlePartyOrganizationMenu_EndOpen__,
                            0);
                          BaseMenu__Open((BaseMenu_o *)this, v46, 0);
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
    sub_1C372B4(Master_object);
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
  struct QuestRestrictionInfo_o *v6; // x8

  if ( (byte_4C3ED94 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_WaveBattlePartyOrganizationMenu_CheckQuestUseItemTutorial__);
    byte_4C3ED94 = 1;
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
    v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v4,
      (Il2CppObject *)this,
      Method_WaveBattlePartyOrganizationMenu_CheckQuestUseItemTutorial__,
      0);
    v6 = this->fields.questRestrictionInfo;
    if ( !v6 )
      sub_1C372B4(v5);
    EventTutorialMaster__CheckTutorial(0, 45, v4, v6->fields.questId, v6->fields.questPhase, 0, 0, 0);
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
  char v8; // w1
  System_String_o *detail; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *equipName; // [xsp+10h] [xbp-40h] BYREF
  int32_t maxLv[2]; // [xsp+18h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+20h] [xbp-30h] BYREF
  int32_t genderImageId; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_4C3ED98 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_UserEquipMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_10257/*"PARTY_ORGANIZATION_MASTER_EQUIP_FIXED"*/);
    byte_4C3ED98 = 1;
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
    Master_object = (ItemIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserEquipMaster___);
    if ( Master_object )
    {
      if ( DataMasterBase_object__object__long___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             userEquipId,
             (const MethodInfo_33A3648 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__) )
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
    sub_1C372B4(Master_object);
  }
  masterEquipFixedLabel = this->fields.masterEquipFixedLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10257/*"PARTY_ORGANIZATION_MASTER_EQUIP_FIXED"*/, 0);
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
  v8 = 0;
LABEL_22:
  UICommonButton__SetEnable((UICommonButton_o *)Master_object, v8, 0);
}


void WaveBattlePartyOrganizationMenu__SetQuestUseItemButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *Instance; // x0
  char v4; // w20

  if ( (byte_4C3ED97 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C3ED97 = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__HasCachedQuestUseItem(Instance, 0);
  if ( !this->fields.friendshipUpItemSwitchComponent )
    goto LABEL_10;
  v4 = (char)Instance;
  Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                             0);
  if ( !Instance )
    goto LABEL_10;
  if ( (v4 & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
    if ( Instance )
    {
      FriendshipUpItemSwitchComponent__SetItemInfo((FriendshipUpItemSwitchComponent_o *)Instance, 0);
      return;
    }
LABEL_10:
    sub_1C372B4(Instance);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
}


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
    sub_1C372B4(waveInfoListManager);
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
  QuestHintOverwriteEntity_o *CompleteCondEntity; // x0
  System_String_o *title; // x20
  int32_t leftIndent; // w21
  QuestPhaseEntity_o *v11; // [xsp+10h] [xbp-40h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C3ED8B & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestHintOverwriteMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3ED8B = 1;
  }
  v11 = 0;
  entity = 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    questId = questRestrictionInfo->fields.questId;
    questPhase = questRestrictionInfo->fields.questPhase;
    message = (System_String_o *)StringLiteral_1/*""*/;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestHintOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestHintOverwriteMaster___);
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
        Master_object = (QuestHintOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestHintMaster___);
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
          Master_object = (QuestHintOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
          if ( !Master_object )
            goto LABEL_28;
          if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v11, questId, questPhase, 0) )
          {
            Master_object = (QuestHintOverwriteMaster_o *)v11;
            if ( !v11 )
              goto LABEL_28;
            Master_object = (QuestHintOverwriteMaster_o *)QuestPhaseEntity__getHintMessageTitle(v11, 0);
            if ( !v11 )
              goto LABEL_28;
            title = (System_String_o *)Master_object;
            Master_object = (QuestHintOverwriteMaster_o *)QuestPhaseEntity__getHintMessage(v11, 0);
            if ( !v11 )
              goto LABEL_28;
            message = (System_String_o *)Master_object;
            leftIndent = QuestPhaseEntity__getHintLeftIndent(v11, 0);
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
      Master_object = (QuestHintOverwriteMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Master_object )
      {
        CommonUI__OpenScrollMessageDialog((CommonUI_o *)Master_object, title, message, leftIndent, 0, 0, 1, 0, 1, 0);
        return;
      }
    }
LABEL_28:
    sub_1C372B4(Master_object);
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
    sub_1C372B4(this);
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

  if ( (byte_4C3ED87 & 1) == 0 )
  {
    sub_1C37058(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo);
    byte_4C3ED87 = 1;
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
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationMenu_o *)sub_1C37574(v8);
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

  if ( (byte_4C3ED88 & 1) == 0 )
  {
    sub_1C37058(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo);
    byte_4C3ED88 = 1;
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
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationMenu_o *)sub_1C37574(v8);
  WaveBattlePartyOrganizationMenu__Awake(v11, v12);
}


void WaveBattlePartyOrganizationMenu_CallbackFunc___ctor(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A766D8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A76678;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *WaveBattlePartyOrganizationMenu_CallbackFunc__BeginInvoke(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v7; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  _QWORD v24[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v25; // [xsp+10h] [xbp-60h]
  int32_t v26; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v27; // [xsp+38h] [xbp-38h] BYREF
  int32_t v28; // [xsp+3Ch] [xbp-34h] BYREF

  v27 = n;
  v28 = result;
  v26 = m;
  if ( (byte_4C3ED9A & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo);
    byte_4C3ED9A = 1;
  }
  v25 = 0u;
  v24[0] = j_il2cpp_value_box_0(
             WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo,
             &v28,
             *(_QWORD *)&n,
             *(_QWORD *)&m,
             callback,
             object,
             method,
             v7);
  v24[1] = j_il2cpp_value_box_0(int_TypeInfo, &v27, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)&v25 = j_il2cpp_value_box_0(int_TypeInfo, &v26, v17, v18, v19, v20, v21, v22);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v24, callback, object);
}


void WaveBattlePartyOrganizationMenu_CallbackFunc__EndInvoke(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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