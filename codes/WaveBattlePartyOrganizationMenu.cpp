void WaveBattlePartyOrganizationMenu___ctor(WaveBattlePartyOrganizationMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_593427B & 1) == 0 )
  {
    sub_21FFC50(&BaseMenu_TypeInfo);
    byte_593427B = 1;
  }
  if ( !*(&BaseMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method, v2);
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_5934277 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&TutorialFlag_TypeInfo);
    sub_21FFC50(&Method_WaveBattlePartyOrganizationMenu_OpenHintDialog__);
    byte_5934277 = 1;
  }
  if ( !this->fields.questRestrictionInfo )
    goto LABEL_15;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  if ( TutorialFlag__Get_47357952(102, 0) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_WaveBattlePartyOrganizationMenu_OpenHintDialog__, 0);
    if ( !Instance )
      sub_21FFECC(v6, v7);
    PartyOrganizationUtility__OpenQuestUseItemDialogTutorial((PartyOrganizationUtility_o *)Instance, v5, 0);
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

  WaveBattlePartyOrganizationMenu__Close_41467912(this, 0, v2);
}


void WaveBattlePartyOrganizationMenu__Close_41467912(
        WaveBattlePartyOrganizationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Action_c *v12; // x0
  System_Action_o *v13; // x20

  if ( (byte_593426E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_WaveBattlePartyOrganizationMenu_EndClose__);
    byte_593426E = 1;
  }
  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_21FFECC(0, callback);
  WaveBattleWaveInfoListManager__DestroyList(waveInfoListManager, 0);
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = System_Action_TypeInfo;
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_21FFEBC(v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_WaveBattlePartyOrganizationMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v13, 0);
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
      sub_21FFECC(waveInfoListManager, method);
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
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  WaveBattlePartyOrganizationMenu__DisabledEditButton(this, v5);
}


void WaveBattlePartyOrganizationMenu__EndClose(WaveBattlePartyOrganizationMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_21FFBF4(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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
  __int64 v4; // x24
  __int64 v5; // x1
  __int64 v6; // x2
  PartyListViewItem_o *DeckNum; // x0
  __int64 v8; // x2
  BalanceConfig_c *v9; // x8
  PartyListViewItem_o *v10; // x9
  int64_t userEquipId; // x22
  int32_t DeckMainMemberMax; // w21
  DeckServant_o *v13; // x0
  int32_t max_length; // w1
  DeckServant_o *v15; // x23
  int32_t v16; // w1
  __int64 v17; // x21
  PartyListViewItem_array *v18; // x23
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x2
  unsigned __int64 max_length_low; // x8
  int v27; // w20
  unsigned __int64 v28; // x19
  __int64 v29; // x8
  __int64 v30; // x8
  unsigned __int64 v31; // x22
  PartyListViewItem_o *v32; // x23
  PartyOrganizationListViewItem_o *Member; // x25
  __int64 v34; // x24
  __int64 v35; // x2
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v37; // q1
  int64_t v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  struct UserServantEntity_o *v41; // x8
  __int64 v42; // x26
  __int64 v43; // x27
  int32_t v44; // w0
  System_Int64_array *EquipList; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  __int64 v52; // x26
  __int64 v53; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  int32_t InitPos_k__BackingField; // w9
  __int64 v62; // x8
  __int64 v63; // x9
  __int64 v64; // x9
  __int64 v65; // x9
  _DWORD *v66; // x25
  __int64 v67; // x1
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  _DWORD *v74; // x0
  __int64 v76; // x0
  UserEventDeckEntity_o *v77; // [xsp+8h] [xbp-B8h]
  PartyListViewItem_array *v78; // [xsp+10h] [xbp-B0h]
  int v79; // [xsp+18h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16

  if ( (byte_593426F & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&DeckServantData_TypeInfo);
    sub_21FFC50(&DeckServant_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&UserEventDeckEntity_TypeInfo);
    byte_593426F = 1;
  }
  memset(&v81, 0, sizeof(v81));
  v4 = sub_21FFEBC(UserEventDeckEntity_TypeInfo);
  UserEventDeckEntity___ctor((UserEventDeckEntity_o *)v4, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  DeckNum = (PartyListViewItem_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    DeckNum = (PartyListViewItem_o *)NetworkManager_TypeInfo;
  }
  if ( !v4 )
    goto LABEL_59;
  *(_QWORD *)(v4 + 16) = *(_QWORD *)&DeckNum->fields.waveBattleEnemyClassIds->m_Items[8];
  if ( !deckItemList )
    goto LABEL_59;
  if ( !LODWORD(deckItemList->max_length) )
    goto LABEL_60;
  DeckNum = deckItemList->m_Items[0];
  if ( !DeckNum )
    goto LABEL_59;
  *(_DWORD *)(v4 + 24) = DeckNum->fields.id;
  DeckNum = (PartyListViewItem_o *)PartyListViewItem__get_DeckNum(DeckNum, 0);
  v9 = BalanceConfig_TypeInfo;
  *(_DWORD *)(v4 + 28) = (_DWORD)DeckNum;
  if ( !*(&v9->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v9, v5, v8);
    v9 = BalanceConfig_TypeInfo;
  }
  if ( !LODWORD(deckItemList->max_length) )
    goto LABEL_60;
  v10 = deckItemList->m_Items[0];
  if ( !v10 )
LABEL_59:
    sub_21FFECC(DeckNum, v5);
  userEquipId = v10->fields.userEquipId;
  DeckMainMemberMax = v9->static_fields->DeckMainMemberMax;
  v13 = (DeckServant_o *)sub_21FFEBC(DeckServant_TypeInfo);
  max_length = deckItemList->max_length;
  v78 = deckItemList;
  v15 = v13;
  DeckServant___ctor_48649700(v13, max_length, DeckMainMemberMax, userEquipId, 0);
  v16 = (int)v15;
  v77 = (UserEventDeckEntity_o *)v4;
  *(_QWORD *)(v4 + 32) = v15;
  v17 = v4 + 32;
  v18 = v78;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 32), v16, v19, v20, v21, v22, v23, v24);
  max_length_low = LODWORD(v78->max_length);
  if ( (int)max_length_low >= 1 )
  {
    v27 = 0;
    v28 = 0;
    while ( v28 < max_length_low )
    {
      if ( !*(_QWORD *)v17 )
        goto LABEL_59;
      v29 = *(_QWORD *)(*(_QWORD *)v17 + 32LL);
      if ( !v29 )
        goto LABEL_59;
      if ( v28 >= *(unsigned int *)(v29 + 24) )
        break;
      v30 = *(_QWORD *)(v29 + 8 * v28 + 32);
      if ( !v30 )
        goto LABEL_59;
      v31 = 0;
      v32 = v18->m_Items[v28];
      v79 = v28 + 1;
      *(_DWORD *)(v30 + 16) = v28 + 1;
      while ( 1 )
      {
        DeckNum = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5, v25);
          DeckNum = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
        }
        if ( (__int64)v31 >= DeckNum->fields.waveBattleEnemyClassIds->m_Items[36] )
          break;
        if ( !v32 )
          goto LABEL_59;
        Member = PartyListViewItem__GetMember(v32, v31, 0);
        v34 = sub_21FFEBC(DeckServantData_TypeInfo);
        DeckServantData___ctor((DeckServantData_o *)v34, 0);
        if ( !v34 )
          goto LABEL_59;
        *(_DWORD *)(v34 + 16) = v27 + v31 + 1;
        if ( !Member )
          goto LABEL_59;
        userServantEntity = Member->fields.userServantEntity;
        if ( userServantEntity )
        {
          v37 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v81.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v81.fields.fakeValue = v37;
        }
        else
        {
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v35);
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v81, 0, 0);
        }
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v35);
        v80 = v81;
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v80, 0);
        v41 = Member->fields.userServantEntity;
        *(_QWORD *)(v34 + 24) = v38;
        if ( v41 )
        {
          v42 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
          v43 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39, v40);
          *(_QWORD *)&v82.fields.currentCryptoKey = v42;
          *(_QWORD *)&v82.fields.fakeValue = v43;
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v82, 0);
        }
        else
        {
          v44 = 0;
        }
        *(_DWORD *)(v34 + 32) = v44;
        EquipList = PartyOrganizationListViewItem__GetEquipList(Member, 0);
        *(_QWORD *)(v34 + 40) = EquipList;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 40), (int32_t)EquipList, v46, v47, v48, v49, v50, v51);
        v52 = sub_21FFD10(int___TypeInfo, 1);
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(Member, 0);
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            *(_QWORD *)&EquipSvtId.fields.fakeValue,
            v53);
        DeckNum = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                           EquipSvtId,
                                           0);
        if ( !v52 )
          goto LABEL_59;
        if ( !*(_DWORD *)(v52 + 24) )
          goto LABEL_60;
        *(_DWORD *)(v52 + 32) = (_DWORD)DeckNum;
        *(_QWORD *)(v34 + 48) = v52;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 48), v52, v55, v56, v57, v58, v59, v60);
        InitPos_k__BackingField = Member->fields._InitPos_k__BackingField;
        v62 = *(_QWORD *)v17;
        *(_QWORD *)(v34 + 64) = 0;
        *(_BYTE *)(v34 + 56) = 0;
        *(_DWORD *)(v34 + 76) = InitPos_k__BackingField;
        if ( !v62 )
          goto LABEL_59;
        v63 = *(_QWORD *)(v62 + 32);
        if ( !v63 )
          goto LABEL_59;
        if ( v28 >= *(unsigned int *)(v63 + 24) )
          goto LABEL_60;
        v64 = *(_QWORD *)(v63 + 8 * v28 + 32);
        if ( !v64 )
          goto LABEL_59;
        v65 = *(_QWORD *)(v64 + 24);
        if ( !v65 )
          goto LABEL_59;
        if ( v31 >= *(unsigned int *)(v65 + 24) )
          goto LABEL_60;
        v66 = *(_DWORD **)(v62 + 16);
        *(_DWORD *)(v65 + 4 * v31 + 32) = *(_DWORD *)(v34 + 16);
        if ( !v66 )
          goto LABEL_59;
        DeckNum = (PartyListViewItem_o *)sub_21FFDA4(v34, *(_QWORD *)(*(_QWORD *)v66 + 64LL));
        if ( !DeckNum )
        {
          v76 = sub_21FFEF0(0, v67);
          sub_21FFD90(v76, 0);
        }
        if ( (unsigned int)(v27 + v31) >= v66[6] )
          goto LABEL_60;
        v74 = &v66[2 * v27 + 2 * (int)v31];
        *((_QWORD *)v74 + 4) = v34;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v74 + 8), v34, v68, v69, v70, v71, v72, v73);
        ++v31;
      }
      v18 = v78;
      ++v28;
      v27 += v31;
      max_length_low = LODWORD(v78->max_length);
      if ( v79 >= (int)max_length_low )
        return v77;
    }
LABEL_60:
    sub_21FFED4(DeckNum);
  }
  return v77;
}


void WaveBattlePartyOrganizationMenu__Hide(WaveBattlePartyOrganizationMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v3);
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
    sub_21FFECC(0, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0);
}


bool WaveBattlePartyOrganizationMenu__IsHintDialog(
        WaveBattlePartyOrganizationMenu_o *this,
        bool *isEvery,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationMenu_o *v4; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w20
  int32_t questPhase; // w21
  QuestHintOverwriteEntity_o *CompleteCondEntity; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t openType; // w8
  __int64 v12; // x2
  int32_t HintOpenType; // w8
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v17; // [xsp+0h] [xbp-40h] BYREF
  QuestHintEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_593426C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestHintOverwriteMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    this = (WaveBattlePartyOrganizationMenu_o *)sub_21FFC50(&DataManager_TypeInfo);
    byte_593426C = 1;
  }
  *isEvery = 0;
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  v17 = 0;
  entity = 0;
  if ( !questRestrictionInfo )
    goto LABEL_25;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isEvery, method);
  this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestHintOverwriteMaster___);
  if ( !this )
    goto LABEL_25;
  CompleteCondEntity = QuestHintOverwriteMaster__GetCompleteCondEntity(
                         (QuestHintOverwriteMaster_o *)this,
                         questId,
                         questPhase,
                         0);
  if ( !CompleteCondEntity )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v10);
    this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestHintMaster___);
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
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isEvery, v12);
        this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( this )
        {
          if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &v17, questId, questPhase, 0) )
            return 0;
          this = (WaveBattlePartyOrganizationMenu_o *)v17;
          if ( v17 )
          {
            HintOpenType = QuestPhaseEntity__getHintOpenType(v17, 0);
            this = (WaveBattlePartyOrganizationMenu_o *)v17;
            *isEvery = HintOpenType == 0;
            if ( this )
            {
              HintMessage = QuestPhaseEntity__getHintMessage((QuestPhaseEntity_o *)this, 0);
              return !System_String__IsNullOrEmpty(HintMessage, 0);
            }
          }
        }
      }
    }
LABEL_25:
    sub_21FFECC(this, isEvery);
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

  if ( (byte_5934271 & 1) == 0 )
  {
    sub_21FFC50(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__);
    byte_5934271 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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

  if ( (byte_5934274 & 1) == 0 )
  {
    sub_21FFC50(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__);
    byte_5934274 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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

  if ( (byte_5934273 & 1) == 0 )
  {
    sub_21FFC50(&Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__);
    byte_5934273 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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

  if ( (byte_5934278 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_WaveBattlePartyOrganizationMenu__OnClickFriendshipUpItemUseButton_b__58_0__);
    byte_5934278 = 1;
  }
  friendshipUpItemSwitchComponent = this->fields.friendshipUpItemSwitchComponent;
  v4 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationMenu__OnClickFriendshipUpItemUseButton_b__58_0__,
    0);
  if ( !friendshipUpItemSwitchComponent )
    sub_21FFECC(v5, v6);
  FriendshipUpItemSwitchComponent__ChangeButtonState(friendshipUpItemSwitchComponent, v4, 0);
}


void WaveBattlePartyOrganizationMenu__OnClickHintDialogButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_5934275 & 1) == 0 )
  {
    sub_21FFC50(&Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__);
    byte_5934275 = 1;
  }
  v3 = Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__;
  if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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

  if ( (byte_5934270 & 1) == 0 )
  {
    sub_21FFC50(&Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__);
    byte_5934270 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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

  if ( (byte_5934272 & 1) == 0 )
  {
    sub_21FFC50(&Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__);
    byte_5934272 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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
  int32_t state; // w8
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Component_object; // x25
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  float y; // s8
  float z; // s9
  float v27; // s10
  float v28; // s11
  bool v29; // w25
  bool v30; // w1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x24
  WaveBattleWaveInfoListManager_CallbackFunc_o *v38; // x26
  const MethodInfo *v39; // x2
  struct DeckServant_o *deckInfo; // x8
  __int64 v41; // x1
  __int64 v42; // x2
  UISprite_o *classInfoSpriteOrganization; // x20
  const MethodInfo *v44; // x2
  bool IsHintDialog; // w8
  __int64 v46; // x2
  struct QuestRestrictionInfo_o *v47; // x8
  int32_t questId; // w20
  int32_t questPhase; // w21
  __int64 v50; // x2
  struct QuestRestrictionInfo_o *v51; // x8
  int32_t v52; // w20
  int32_t v53; // w21
  __int64 v54; // x2
  struct QuestRestrictionInfo_o *v55; // x8
  int32_t v56; // w20
  int32_t v57; // w21
  __int64 v58; // x1
  __int64 v59; // x2
  UISprite_o *applyInterruptionDeckSprite; // x20
  const MethodInfo *v61; // x1
  System_Action_o *v62; // x20
  int32_t v63; // w20
  int32_t v64; // w21
  struct QuestRestrictionInfo_o *v65; // x8
  bool isEvery; // [xsp+Ch] [xbp-74h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+38h] [xbp-48h] BYREF
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593426B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&QuestHintDialogOpenManager_TypeInfo);
    sub_21FFC50(&Method_WaveBattlePartyOrganizationMenu_EndOpen__);
    sub_21FFC50(&Method_WaveBattlePartyOrganizationMenu_OnSelectWavePartyList__);
    sub_21FFC50(&StringLiteral_18406/*"buttontxt_formation_21"*/);
    sub_21FFC50(&StringLiteral_18400/*"buttontxt_battlerestart"*/);
    sub_21FFC50(&StringLiteral_18405/*"buttontxt_formation_20"*/);
    byte_593426B = 1;
  }
  state = this->fields.state;
  entity = 0;
  isEvery = 0;
  if ( !state )
  {
    this->fields.isSwitchPartyBattle = 0;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, deckEntity, questRestrictionInfo);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !questRestrictionInfo || !Master_object )
      goto LABEL_76;
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
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      Master_object = (QuestPhaseMaster_o *)this->fields.otherView;
      if ( !Master_object )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
      Master_object = (QuestPhaseMaster_o *)this->fields.separateView;
      if ( !Master_object )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      Master_object = (QuestPhaseMaster_o *)this->fields.waveInfoListManager;
      if ( !Master_object )
        goto LABEL_76;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)Master_object,
                           (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
      Master_object = (QuestPhaseMaster_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)Component_object,
                                              0,
                                              0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_76;
        center = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)Component_object, 0);
        y = center.fields.y;
        z = center.fields.z;
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)Component_object, 0);
        v27 = size.fields.y;
        v28 = size.fields.z;
        size.fields.y = y;
        size.fields.z = z;
        size.fields.x = 200.0;
        UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Component_object, size, 0);
        v70.fields.y = v27;
        v70.fields.z = v28;
        v70.fields.x = 540.0;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v70, 0);
      }
      v29 = 1;
      goto LABEL_31;
    }
    if ( entity && QuestPhaseEntity__IsWaveSetupSwitchParty(entity, 0) )
    {
      Master_object = (QuestPhaseMaster_o *)this->fields.normalView;
      this->fields.isSwitchPartyBattle = 1;
      if ( !Master_object )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      Master_object = (QuestPhaseMaster_o *)this->fields.otherView;
      if ( !Master_object )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      Master_object = (QuestPhaseMaster_o *)this->fields.separateView;
      if ( !Master_object )
        goto LABEL_76;
      v30 = 1;
    }
    else
    {
LABEL_26:
      Master_object = (QuestPhaseMaster_o *)this->fields.normalView;
      if ( !Master_object )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
      Master_object = (QuestPhaseMaster_o *)this->fields.otherView;
      if ( !Master_object )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      Master_object = (QuestPhaseMaster_o *)this->fields.separateView;
      if ( !Master_object )
        goto LABEL_76;
      v30 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v30, 0);
    v29 = 0;
LABEL_31:
    this->fields.questRestrictionInfo = questRestrictionInfo;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
      (int32_t)questRestrictionInfo,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    this->fields.callbackFunc = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    waveInfoListManager = this->fields.waveInfoListManager;
    v38 = (WaveBattleWaveInfoListManager_CallbackFunc_o *)sub_21FFEBC(WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
    WaveBattleWaveInfoListManager_CallbackFunc___ctor(
      v38,
      (Il2CppObject *)this,
      Method_WaveBattlePartyOrganizationMenu_OnSelectWavePartyList__,
      0);
    if ( !waveInfoListManager )
      goto LABEL_76;
    WaveBattleWaveInfoListManager__CreateList(
      waveInfoListManager,
      deckEntity,
      questRestrictionInfo,
      waveCount,
      v38,
      restartWave,
      v29,
      this->fields.isSwitchPartyBattle,
      0);
    this->fields.restartWave = restartWave;
    this->fields.isInterruption = restartWave > 0;
    if ( !deckEntity )
      goto LABEL_76;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_76;
    WaveBattlePartyOrganizationMenu__SetMasterEquipButton(this, deckInfo->fields.userEquipId, v39);
    classInfoSpriteOrganization = this->fields.classInfoSpriteOrganization;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v41, v42);
    AtlasManager__SetPartyOrganizationImage(classInfoSpriteOrganization, (System_String_o *)StringLiteral_18405/*"buttontxt_formation_20"*/, 0);
    IsHintDialog = WaveBattlePartyOrganizationMenu__IsHintDialog(this, &isEvery, v44);
    Master_object = (QuestPhaseMaster_o *)this->fields.hintDialogButton;
    if ( IsHintDialog )
    {
      if ( !Master_object )
        goto LABEL_76;
      Master_object = (QuestPhaseMaster_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_object,
                                              0);
      if ( !Master_object )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
      v47 = this->fields.questRestrictionInfo;
      if ( !v47 )
        goto LABEL_76;
      questId = v47->fields.questId;
      questPhase = v47->fields.questPhase;
      if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v15, v46);
      Master_object = (QuestPhaseMaster_o *)QuestHintDialogOpenManager__IsSettingTemporarilyInfo(questId, questPhase, 0);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
      {
        v51 = this->fields.questRestrictionInfo;
        if ( !v51 )
          goto LABEL_76;
        v52 = v51->fields.questId;
        v53 = v51->fields.questPhase;
        if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v15, v50);
        Master_object = (QuestPhaseMaster_o *)QuestHintDialogOpenManager__IsQuestHintOpen(v52, v53, 0);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          v55 = this->fields.questRestrictionInfo;
          if ( isEvery )
          {
            if ( !v55 )
              goto LABEL_76;
            v56 = v55->fields.questId;
            v57 = v55->fields.questPhase;
            if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v15, v54);
            QuestHintDialogOpenManager__SetTemporarilyInfo(v56, v57, 0);
          }
          else
          {
            if ( !v55 )
              goto LABEL_76;
            v63 = v55->fields.questId;
            v64 = v55->fields.questPhase;
            if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v15, v54);
            QuestHintDialogOpenManager__SetTemporarilyInfo(v63, v64, 0);
            v65 = this->fields.questRestrictionInfo;
            if ( !v65 )
              goto LABEL_76;
            QuestHintDialogOpenManager__SetQuestInfo(v65->fields.questId, v65->fields.questPhase, 0);
            QuestHintDialogOpenManager__WriteData(0);
          }
          this->fields.isHintDialogOpenFlag = 1;
        }
      }
    }
    else
    {
      if ( !Master_object )
        goto LABEL_76;
      Master_object = (QuestPhaseMaster_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_object,
                                              0);
      if ( !Master_object )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    }
    Master_object = (QuestPhaseMaster_o *)this->fields.applyInterruptionDeckButton;
    if ( this->fields.isInterruption )
    {
      if ( Master_object )
      {
        Master_object = (QuestPhaseMaster_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Master_object,
                                                0);
        if ( Master_object )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
          applyInterruptionDeckSprite = this->fields.applyInterruptionDeckSprite;
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v58, v59);
          AtlasManager__SetPartyOrganizationImage(
            applyInterruptionDeckSprite,
            (System_String_o *)StringLiteral_18406/*"buttontxt_formation_21"*/,
            0);
          Master_object = (QuestPhaseMaster_o *)this->fields.applyInterruptionDeckSprite;
          if ( Master_object )
          {
            (*(void (__fastcall **)(QuestPhaseMaster_o *, _QWORD))&Master_object->klass[1]._2.element_size)(
              Master_object,
              *(_QWORD *)&Master_object->klass[1]._2.static_fields_size);
            AtlasManager__SetPartyOrganizationImage(
              this->fields.battleStartSprite,
              (System_String_o *)StringLiteral_18400/*"buttontxt_battlerestart"*/,
              0);
            Master_object = (QuestPhaseMaster_o *)this->fields.battleStartSprite;
            if ( Master_object )
            {
              Master_object = (QuestPhaseMaster_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)Master_object,
                                                      0);
              if ( Master_object )
              {
                v71.fields.x = 0.0;
                v71.fields.z = 0.0;
                v71.fields.y = -2.0;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Master_object, v71, 0);
                Master_object = (QuestPhaseMaster_o *)this->fields.battleStartSprite;
                if ( Master_object )
                {
                  (*(void (__fastcall **)(QuestPhaseMaster_o *, _QWORD))&Master_object->klass[1]._2.element_size)(
                    Master_object,
                    *(_QWORD *)&Master_object->klass[1]._2.static_fields_size);
                  WaveBattlePartyOrganizationMenu__DisabledEditButton(this, v61);
LABEL_68:
                  this->fields.state = 1;
                  v62 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                  System_Action___ctor(v62, (Il2CppObject *)this, Method_WaveBattlePartyOrganizationMenu_EndOpen__, 0);
                  BaseMenu__Open((BaseMenu_o *)this, v62, 0);
                  return;
                }
              }
            }
          }
        }
      }
    }
    else if ( Master_object )
    {
      Master_object = (QuestPhaseMaster_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_object,
                                              0);
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
        goto LABEL_68;
      }
    }
LABEL_76:
    sub_21FFECC(Master_object, v15);
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

  if ( (byte_5934276 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_WaveBattlePartyOrganizationMenu_CheckQuestUseItemTutorial__);
    byte_5934276 = 1;
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
    v4 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v4,
      (Il2CppObject *)this,
      Method_WaveBattlePartyOrganizationMenu_CheckQuestUseItemTutorial__,
      0);
    v7 = this->fields.questRestrictionInfo;
    if ( !v7 )
      sub_21FFECC(v5, v6);
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

  if ( (byte_593427A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserEquipMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10654/*"PARTY_ORGANIZATION_MASTER_EQUIP_FIXED"*/);
    byte_593427A = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  genderImageId = 0;
  *(_QWORD *)maxLv = 0;
  entity = 0;
  detail = 0;
  equipName = 0;
  if ( !questRestrictionInfo
    || !QuestRestrictionInfo__TryGetFixedMasterEquipInfo(questRestrictionInfo, &genderImageId, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, userEquipId, method);
    Master_object = (ItemIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEquipMaster___);
    if ( Master_object )
    {
      if ( DataMasterBase_object__object__long___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             userEquipId,
             (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__) )
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
    sub_21FFECC(Master_object, v8);
  }
  masterEquipFixedLabel = this->fields.masterEquipFixedLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, userEquipId, method);
  Master_object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10654/*"PARTY_ORGANIZATION_MASTER_EQUIP_FIXED"*/, 0);
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
  bool HasCachedQuestUseItem; // w8

  if ( (byte_5934279 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_5934279 = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  HasCachedQuestUseItem = PartyOrganizationUtility__HasCachedQuestUseItem(Instance, 0);
  Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
  if ( HasCachedQuestUseItem )
  {
    if ( Instance )
    {
      Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)Instance,
                                                 0);
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
        if ( Instance )
        {
          FriendshipUpItemSwitchComponent__SetItemInfo((FriendshipUpItemSwitchComponent_o *)Instance, 0);
          return;
        }
      }
    }
LABEL_12:
    sub_21FFECC(Instance, v4);
  }
  if ( !Instance )
    goto LABEL_12;
  Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_12;
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
    sub_21FFECC(waveInfoListManager, *(_QWORD *)&wave);
  }
}


void WaveBattlePartyOrganizationMenu__ShowHintDialogButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w20
  int32_t questPhase; // w21
  System_String_o *message; // x19
  QuestHintOverwriteMaster_o *Master_object; // x0
  __int64 v9; // x1
  QuestHintOverwriteEntity_o *CompleteCondEntity; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *title; // x20
  int32_t leftIndent; // w21
  __int64 v15; // x2
  QuestPhaseEntity_o *v16; // [xsp+10h] [xbp-40h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_593426D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestHintOverwriteMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593426D = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  v16 = 0;
  entity = 0;
  if ( questRestrictionInfo )
  {
    questId = questRestrictionInfo->fields.questId;
    questPhase = questRestrictionInfo->fields.questPhase;
    message = (System_String_o *)StringLiteral_1/*""*/;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
    Master_object = (QuestHintOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestHintOverwriteMaster___);
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
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11, v12);
        Master_object = (QuestHintOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestHintMaster___);
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
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v15);
          Master_object = (QuestHintOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
          if ( !Master_object )
            goto LABEL_28;
          if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v16, questId, questPhase, 0) )
          {
            Master_object = (QuestHintOverwriteMaster_o *)v16;
            if ( !v16 )
              goto LABEL_28;
            Master_object = (QuestHintOverwriteMaster_o *)QuestPhaseEntity__getHintMessageTitle(v16, 0);
            if ( !v16 )
              goto LABEL_28;
            title = (System_String_o *)Master_object;
            Master_object = (QuestHintOverwriteMaster_o *)QuestPhaseEntity__getHintMessage(v16, 0);
            if ( !v16 )
              goto LABEL_28;
            message = (System_String_o *)Master_object;
            leftIndent = QuestPhaseEntity__getHintLeftIndent(v16, 0);
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
      Master_object = (QuestHintOverwriteMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Master_object )
      {
        CommonUI__OpenScrollMessageDialog((CommonUI_o *)Master_object, title, message, leftIndent, 0, 0, 1, 0, 1, 0);
        return;
      }
    }
LABEL_28:
    sub_21FFECC(Master_object, v9);
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
    sub_21FFECC(this, deckEntity);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  WaveBattlePartyOrganizationMenu_o *v13; // x0
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5934269 & 1) == 0 )
  {
    sub_21FFC50(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo);
    byte_5934269 = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (WaveBattlePartyOrganizationMenu_o *)sub_220024C(
                                               v8,
                                               WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo,
                                               v9,
                                               v10);
  WaveBattlePartyOrganizationMenu__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  WaveBattlePartyOrganizationMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_593426A & 1) == 0 )
  {
    sub_21FFC50(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo);
    byte_593426A = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (WaveBattlePartyOrganizationMenu_o *)sub_220024C(
                                               v8,
                                               WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo,
                                               v9,
                                               v10);
  WaveBattlePartyOrganizationMenu__Awake(v13, v14);
}


void WaveBattlePartyOrganizationMenu_CallbackFunc___ctor(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF2174;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF2114;
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
  _QWORD v11[2]; // [xsp+0h] [xbp-60h] BYREF
  __int128 v12; // [xsp+10h] [xbp-50h]
  int32_t v13; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = n;
  v15 = result;
  v13 = m;
  if ( (byte_593427C & 1) == 0 )
  {
    sub_21FFC50(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo);
    byte_593427C = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v15);
  v11[1] = j_il2cpp_value_box_0(qword_594C070, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(qword_594C070, &v13);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v11, callback, object);
}


void WaveBattlePartyOrganizationMenu_CallbackFunc__EndInvoke(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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