void __fastcall WaveBattlePartyOrganizationMenu___ctor(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F6758 & 1) == 0 )
  {
    sub_B16FFC(&BaseMenu_TypeInfo, method);
    byte_40F6758 = 1;
  }
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
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
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    WaveBattlePartyOrganizationMenu_CallbackFunc__Invoke(callbackFunc, result, 1, 1, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__CheckFriendshipUpItemTutorial(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  PartyOrganizationUtility_o *v5; // x0

  if ( (byte_40F6756 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v3);
    sub_B16FFC(&TutorialFlag_TypeInfo, v4);
    byte_40F6756 = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_28023340(102, 0LL) )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      v5 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v5 )
        sub_B170D4();
      if ( PartyOrganizationUtility__IsAvailableFriendshipUpItem(v5, 0LL) )
        EventTutorialMaster__CheckTutorial(0, 71, 0LL, 0, 0, 0, 0, 0LL);
    }
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__Close(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationMenu__Close_18343752(this, 0LL, v2);
}


void __fastcall WaveBattlePartyOrganizationMenu__Close_18343752(
        WaveBattlePartyOrganizationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_o *v17; // x20

  if ( (byte_40F674D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_WaveBattlePartyOrganizationMenu_EndClose__, v5);
    byte_40F674D = 1;
  }
  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_B170D4();
  WaveBattleWaveInfoListManager__DestroyList(waveInfoListManager, (const MethodInfo *)callback);
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.state = 4;
  v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_WaveBattlePartyOrganizationMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v17, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__Display(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__EndClose(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
  PartyListViewItem_array *v5; // x24
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  __int64 UserId; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  PartyListViewItem_o *v15; // x8
  PartyListViewItem_o *v16; // x0
  __int64 v17; // x3
  __int64 v18; // x4
  PartyListViewItem_o *v19; // x8
  int64_t userEquipId; // x21
  int32_t v21; // w22
  DeckServant_o *v22; // x23
  __int64 v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int max_length; // w8
  int v31; // w10
  unsigned int v32; // w11
  __int64 v33; // x8
  __int64 v34; // x19
  __int64 v35; // x8
  PartyListViewItem_o *v36; // x23
  unsigned __int64 v37; // x22
  int v38; // w27
  PartyOrganizationListViewItem_o *Member; // x25
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v46; // q0
  __int128 v47; // q1
  System_Int32_array **EquipList; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  int32_t InitPos_k__BackingField; // w8
  __int64 v56; // x8
  __int64 v57; // x8
  __int64 v58; // x8
  _DWORD *v59; // x25
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  _DWORD *v65; // x0
  UserEventDeckEntity_o *v67; // [xsp+0h] [xbp-D0h]
  PartyListViewItem_array *v68; // [xsp+8h] [xbp-C8h]
  int v69; // [xsp+10h] [xbp-C0h]
  int v70; // [xsp+1Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72[2]; // [xsp+40h] [xbp-90h] BYREF

  v5 = deckItemList;
  if ( (byte_40F674F & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, deckItemList);
    sub_B16FFC(&DeckServantData_TypeInfo, v6);
    sub_B16FFC(&DeckServant_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B16FFC(&UserEventDeckEntity_TypeInfo, v10);
    byte_40F674F = 1;
  }
  memset(&v72[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v11 = sub_B170CC(UserEventDeckEntity_TypeInfo, deckItemList, method, v3, v4);
  UserEventDeckEntity___ctor((UserEventDeckEntity_o *)v11, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v11 )
    goto LABEL_54;
  *(_QWORD *)(v11 + 16) = UserId;
  if ( !v5 )
    goto LABEL_54;
  if ( !v5->max_length )
    goto LABEL_55;
  v15 = v5->m_Items[0];
  if ( !v15 )
    goto LABEL_54;
  *(_DWORD *)(v11 + 24) = v15->fields.id;
  if ( !v5->max_length )
    goto LABEL_55;
  v16 = v5->m_Items[0];
  if ( !v16 )
    goto LABEL_54;
  *(_DWORD *)(v11 + 28) = PartyListViewItem__get_DeckNum(v16, 0LL);
  UserId = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    UserId = (__int64)BalanceConfig_TypeInfo;
  }
  if ( !v5->max_length )
    goto LABEL_55;
  v19 = v5->m_Items[0];
  if ( !v19 )
LABEL_54:
    sub_B170D4();
  userEquipId = v19->fields.userEquipId;
  v21 = *(_DWORD *)(*(_QWORD *)(UserId + 184) + 160LL);
  v22 = (DeckServant_o *)sub_B170CC(DeckServant_TypeInfo, v13, v14, v17, v18);
  DeckServant___ctor_16649072(v22, v5->max_length, v21, userEquipId, 0LL);
  *(_QWORD *)(v11 + 32) = v22;
  v23 = v11 + 32;
  v67 = (UserEventDeckEntity_o *)v11;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)v22, v24, v25, v26, v27, v28, v29);
  max_length = v5->max_length;
  if ( max_length >= 1 )
  {
    v31 = 0;
    v32 = 0;
    v68 = v5;
    while ( v32 < max_length )
    {
      if ( !*(_QWORD *)v23 )
        goto LABEL_54;
      v33 = *(_QWORD *)(*(_QWORD *)v23 + 32LL);
      if ( !v33 )
        goto LABEL_54;
      v34 = (int)v32;
      if ( v32 >= *(_DWORD *)(v33 + 24) )
        break;
      v35 = *(_QWORD *)(v33 + 8LL * (int)v32 + 32);
      if ( !v35 )
        goto LABEL_54;
      v36 = v5->m_Items[v32];
      v37 = 0LL;
      v69 = v32 + 1;
      *(_DWORD *)(v35 + 16) = v32 + 1;
      v70 = v31;
      v38 = v31;
      while ( 1 )
      {
        UserId = (__int64)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          UserId = (__int64)BalanceConfig_TypeInfo;
        }
        if ( (__int64)v37 >= *(int *)(*(_QWORD *)(UserId + 184) + 160LL) )
          break;
        if ( !v36 )
          goto LABEL_54;
        Member = PartyListViewItem__GetMember(v36, v37, 0LL);
        v44 = sub_B170CC(DeckServantData_TypeInfo, v40, v41, v42, v43);
        DeckServantData___ctor((DeckServantData_o *)v44, 0LL);
        if ( !v44 )
          goto LABEL_54;
        *(_DWORD *)(v44 + 16) = v38 + v37 + 1;
        if ( !Member )
          goto LABEL_54;
        userServantEntity = Member->fields.userServantEntity;
        if ( userServantEntity )
        {
          v47 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          v46 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        }
        else
        {
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v72, 0LL, 0LL);
          v47 = *(_OWORD *)&v72[0].fields.currentCryptoKey;
          v46 = *(_OWORD *)&v72[0].fields.fakeValue;
        }
        *(_OWORD *)&v72[1].fields.currentCryptoKey = v47;
        *(_OWORD *)&v72[1].fields.fakeValue = v46;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v71 = v72[1];
        *(_QWORD *)(v44 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v71, 0LL);
        EquipList = (System_Int32_array **)PartyOrganizationListViewItem__GetEquipList(Member, 0LL);
        *(_QWORD *)(v44 + 32) = EquipList;
        sub_B16F98((BattleServantConfConponent_o *)(v44 + 32), EquipList, v49, v50, v51, v52, v53, v54);
        InitPos_k__BackingField = Member->fields._InitPos_k__BackingField;
        *(_QWORD *)(v44 + 48) = 0LL;
        *(_BYTE *)(v44 + 40) = 0;
        *(_DWORD *)(v44 + 60) = InitPos_k__BackingField;
        if ( !*(_QWORD *)v23 )
          goto LABEL_54;
        v56 = *(_QWORD *)(*(_QWORD *)v23 + 32LL);
        if ( !v56 )
          goto LABEL_54;
        if ( (unsigned int)v34 >= *(_DWORD *)(v56 + 24) )
          goto LABEL_55;
        v57 = *(_QWORD *)(v56 + 8 * v34 + 32);
        if ( !v57 )
          goto LABEL_54;
        v58 = *(_QWORD *)(v57 + 24);
        if ( !v58 )
          goto LABEL_54;
        if ( v37 >= *(unsigned int *)(v58 + 24) )
          goto LABEL_55;
        *(_DWORD *)(v58 + 4 * v37 + 32) = *(_DWORD *)(v44 + 16);
        if ( !*(_QWORD *)v23 )
          goto LABEL_54;
        v59 = *(_DWORD **)(*(_QWORD *)v23 + 16LL);
        if ( !v59 )
          goto LABEL_54;
        UserId = sub_B170BC(v44, *(_QWORD *)(*(_QWORD *)v59 + 64LL));
        if ( !UserId )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
        if ( (unsigned int)(v38 + v37) >= v59[6] )
          goto LABEL_55;
        v65 = &v59[2 * v38 + 2 * (int)v37];
        *((_QWORD *)v65 + 4) = v44;
        sub_B16F98((BattleServantConfConponent_o *)(v65 + 8), (System_Int32_array **)v44, v14, v60, v61, v62, v63, v64);
        ++v37;
      }
      v5 = v68;
      v32 = v69;
      max_length = v68->max_length;
      v31 = v70 + v37;
      if ( v69 >= max_length )
        return v67;
    }
LABEL_55:
    sub_B17100(UserId, v13, v14);
    sub_B170A0();
  }
  return v67;
}


void __fastcall WaveBattlePartyOrganizationMenu__Hide(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__HideFriendshipUpItemUseButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *friendshipUpItemUseButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  friendshipUpItemUseButton = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton;
  if ( !friendshipUpItemUseButton
    || (gameObject = UnityEngine_Component__get_gameObject(friendshipUpItemUseButton, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}


bool __fastcall WaveBattlePartyOrganizationMenu__IsHintDialog(
        WaveBattlePartyOrganizationMenu_o *this,
        bool *isEvery,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w20
  int32_t questId; // w21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  QuestPhaseMaster_o *v12; // x0
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v15; // [xsp+0h] [xbp-30h] BYREF
  QuestHintEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F674B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_QuestHintMaster___, isEvery);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestPhaseMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    byte_40F674B = 1;
  }
  v15 = 0LL;
  entity = 0LL;
  *isEvery = 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_21;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  if ( !QuestHintMaster__TryGetEntity(
          (QuestHintMaster_o *)Master_WarQuestSelectionMaster,
          &entity,
          questId,
          questPhase,
          0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v12 = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( v12 )
    {
      if ( !QuestPhaseMaster__TryGetEntity(v12, &v15, questId, questPhase, 0LL) )
        return 0;
      if ( v15 )
      {
        *isEvery = QuestPhaseEntity__getHintOpenType(v15, 0LL) == 0;
        if ( v15 )
        {
          HintMessage = QuestPhaseEntity__getHintMessage(v15, 0LL);
          return !System_String__IsNullOrEmpty(HintMessage, 0LL);
        }
      }
    }
LABEL_21:
    sub_B170D4();
  }
  if ( !entity )
    goto LABEL_21;
  *isEvery = entity->fields.openType == 0;
  return 1;
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickAutoOrganization(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x0

  if ( (byte_40F6751 & 1) == 0 )
  {
    sub_B16FFC(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__, method);
    byte_40F6751 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      WaveBattlePartyOrganizationMenu_CallbackFunc__Invoke(callbackFunc, 2, 1, 1, 0LL);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickAutoSell(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x0

  if ( (byte_40F6754 & 1) == 0 )
  {
    sub_B16FFC(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__, method);
    byte_40F6754 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      WaveBattlePartyOrganizationMenu_CallbackFunc__Invoke(callbackFunc, 5, 1, 1, 0LL);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickBattleStart(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x0

  if ( this->fields.state == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      WaveBattlePartyOrganizationMenu_CallbackFunc__Invoke(callbackFunc, 6, 1, 1, 0LL);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickClassInfo(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x0

  if ( (byte_40F6753 & 1) == 0 )
  {
    sub_B16FFC(&Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__, method);
    byte_40F6753 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      WaveBattlePartyOrganizationMenu_CallbackFunc__Invoke(callbackFunc, 4, 1, 1, 0LL);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickFriendshipUpItemUseButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PartyOrganizationUtility_c *v4; // x0
  int32_t Int; // w20
  _QWORD *v6; // x8
  System_Reflection_MethodBase_o *v7; // x0
  PartyOrganizationUtility_c *v8; // x0
  FriendshipUpItemUseItem_o *friendshipUpItemUseButton; // x0
  bool v10; // w1
  PartyOrganizationUtility_c *v11; // x0

  if ( (byte_40F6757 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationUtility_TypeInfo, method);
    sub_B16FFC(&Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__, v3);
    byte_40F6757 = 1;
  }
  v4 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v4 = PartyOrganizationUtility_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  v6 = Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__;
  if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B17004(Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_B16FE0(v6, v6[3]);
  if ( !Int )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    v11 = PartyOrganizationUtility_TypeInfo;
    if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
      v11 = PartyOrganizationUtility_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v11->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 1, 0LL);
    friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
    if ( friendshipUpItemUseButton )
    {
      v10 = 1;
      goto LABEL_19;
    }
LABEL_20:
    sub_B170D4();
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
  v8 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v8 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v8->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
  if ( !friendshipUpItemUseButton )
    goto LABEL_20;
  v10 = 0;
LABEL_19:
  FriendshipUpItemUseItem__ChangeButtonState(friendshipUpItemUseButton, v10, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickHintDialogButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_40F6755 & 1) == 0 )
  {
    sub_B16FFC(&Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__, method);
    byte_40F6755 = 1;
  }
  v3 = Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__;
  if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B17004(Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  WaveBattlePartyOrganizationMenu__ShowHintDialogButton(this, v5);
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickMasterFormation(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x0

  if ( (byte_40F6750 & 1) == 0 )
  {
    sub_B16FFC(&Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__, method);
    byte_40F6750 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      WaveBattlePartyOrganizationMenu_CallbackFunc__Invoke(callbackFunc, 1, 1, 1, 0LL);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickPartyEdit(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x0

  if ( (byte_40F6752 & 1) == 0 )
  {
    sub_B16FFC(&Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__, method);
    byte_40F6752 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      WaveBattlePartyOrganizationMenu_CallbackFunc__Invoke(callbackFunc, 3, 1, 1, 0LL);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnSelectWavePartyList(
        WaveBattlePartyOrganizationMenu_o *this,
        int32_t result,
        int32_t wave,
        int32_t idx,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    WaveBattlePartyOrganizationMenu_CallbackFunc__Invoke(callbackFunc, result, wave, idx, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationMenu__Open(
        WaveBattlePartyOrganizationMenu_o *this,
        UserEventDeckEntity_o *deckEntity,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t waveCount,
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x24
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  WaveBattleWaveInfoListManager_CallbackFunc_o *v36; // x25
  const MethodInfo *v37; // x5
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  struct DeckServant_o *deckInfo; // x8
  ItemIconComponent_o *masterEquipIcon; // x0
  UISprite_o *classInfoSpriteOrganization; // x21
  const MethodInfo *v43; // x2
  bool IsHintDialog; // w0
  bool v45; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t questId; // w22
  int32_t v48; // w22
  __int64 v49; // x1
  int32_t v50; // w20
  QuestHintDialogOpenManager_c *v51; // x0
  PartyOrganizationUtility_o *v52; // x0
  bool IsAvailableFriendshipUpItem; // w0
  bool v54; // w20
  UnityEngine_GameObject_o *v55; // x0
  FriendshipUpItemUseItem_o *friendshipUpItemUseButton; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  System_Action_o *v61; // x20
  QuestHintDialogOpenManager_c *v62; // x0
  System_String_o *v63; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *equipName; // [xsp+8h] [xbp-58h] BYREF
  __int64 maxLv; // [xsp+10h] [xbp-50h] BYREF
  int32_t genderImageId; // [xsp+18h] [xbp-48h] BYREF
  bool isEvery; // [xsp+1Ch] [xbp-44h] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_40F674A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, deckEntity);
    sub_B16FFC(&AtlasManager_TypeInfo, v13);
    sub_B16FFC(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEquipMaster___, v15);
    sub_B16FFC(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__, v16);
    sub_B16FFC(&QuestHintDialogOpenManager_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v19);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v20);
    sub_B16FFC(&Method_WaveBattlePartyOrganizationMenu_EndOpen__, v21);
    sub_B16FFC(&Method_WaveBattlePartyOrganizationMenu_OnSelectWavePartyList__, v22);
    sub_B16FFC(&StringLiteral_17080/*"buttontxt_formation_20"*/, v23);
    byte_40F674A = 1;
  }
  entity = 0LL;
  isEvery = 0;
  genderImageId = 0;
  equipName = 0LL;
  maxLv = 0LL;
  v63 = 0LL;
  if ( !this->fields.state )
  {
    this->fields.questRestrictionInfo = questRestrictionInfo;
    p_questRestrictionInfo = &this->fields.questRestrictionInfo;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
      (System_Int32_array **)questRestrictionInfo,
      (System_String_array **)questRestrictionInfo,
      *(System_String_array ***)&waveCount,
      (System_Boolean_array **)callback,
      (System_Int32_array **)method,
      v6,
      v7);
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    waveInfoListManager = this->fields.waveInfoListManager;
    v36 = (WaveBattleWaveInfoListManager_CallbackFunc_o *)sub_B170CC(
                                                            WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo,
                                                            v32,
                                                            v33,
                                                            v34,
                                                            v35);
    WaveBattleWaveInfoListManager_CallbackFunc___ctor(
      v36,
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
        v36,
        v37);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEquipMaster___);
        if ( deckEntity )
        {
          deckInfo = deckEntity->fields.deckInfo;
          if ( deckInfo )
          {
            if ( MasterData_WarQuestSelectionMaster )
            {
              if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                     MasterData_WarQuestSelectionMaster,
                     &entity,
                     deckInfo->fields.userEquipId,
                     (const MethodInfo_266F60C *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__) )
              {
                if ( !entity )
                  goto LABEL_68;
                UserEquipEntity__getEquipInfo(
                  (UserEquipEntity_o *)entity,
                  (int32_t *)&maxLv + 1,
                  (int32_t *)&maxLv,
                  &equipName,
                  &v63,
                  &genderImageId,
                  0LL);
                masterEquipIcon = this->fields.masterEquipIcon;
                if ( !masterEquipIcon )
                  goto LABEL_68;
                ItemIconComponent__SetEquipItem(masterEquipIcon, genderImageId, 0LL);
              }
              classInfoSpriteOrganization = this->fields.classInfoSpriteOrganization;
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetPartyOrganizationImage(
                classInfoSpriteOrganization,
                (System_String_o *)StringLiteral_17080/*"buttontxt_formation_20"*/,
                0LL);
              IsHintDialog = WaveBattlePartyOrganizationMenu__IsHintDialog(this, &isEvery, v43);
              if ( this->fields.hintDialogButton )
              {
                v45 = IsHintDialog;
                gameObject = UnityEngine_Component__get_gameObject(
                               (UnityEngine_Component_o *)this->fields.hintDialogButton,
                               0LL);
                if ( gameObject )
                {
                  if ( v45 )
                  {
                    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                    if ( !*p_questRestrictionInfo )
                      goto LABEL_68;
                    questId = (*p_questRestrictionInfo)->fields.questId;
                    if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                    }
                    if ( !QuestHintDialogOpenManager__IsSettingTemporarilyId(questId, 0LL) )
                    {
                      if ( !*p_questRestrictionInfo )
                        goto LABEL_68;
                      v48 = (*p_questRestrictionInfo)->fields.questId;
                      if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                      }
                      if ( !QuestHintDialogOpenManager__IsQuestHintOpen(v48, 0LL) )
                      {
                        if ( !*p_questRestrictionInfo )
                          goto LABEL_68;
                        v50 = (*p_questRestrictionInfo)->fields.questId;
                        if ( isEvery )
                        {
                          if ( (WORD1(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                            && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                          }
                          if ( !byte_40F6899 )
                          {
                            sub_B16FFC(&QuestHintDialogOpenManager_TypeInfo, v49);
                            byte_40F6899 = 1;
                          }
                          v51 = QuestHintDialogOpenManager_TypeInfo;
                          if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                            v51 = QuestHintDialogOpenManager_TypeInfo;
                          }
                          v51->static_fields->temporarilyId = v50;
                        }
                        else
                        {
                          if ( (WORD1(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                            && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                          }
                          if ( !byte_40F6899 )
                          {
                            sub_B16FFC(&QuestHintDialogOpenManager_TypeInfo, v49);
                            byte_40F6899 = 1;
                          }
                          v62 = QuestHintDialogOpenManager_TypeInfo;
                          if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                            v62 = QuestHintDialogOpenManager_TypeInfo;
                          }
                          v62->static_fields->temporarilyId = v50;
                          if ( !byte_40F689A )
                          {
                            sub_B16FFC(&QuestHintDialogOpenManager_TypeInfo, v49);
                            v62 = QuestHintDialogOpenManager_TypeInfo;
                            byte_40F689A = 1;
                          }
                          if ( (BYTE3(v62->vtable._0_Equals.methodPtr) & 4) != 0 && !v62->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v62);
                            v62 = QuestHintDialogOpenManager_TypeInfo;
                          }
                          QuestHintDialogOpenManager__SetQuestId(v62->static_fields->temporarilyId, 0LL);
                          QuestHintDialogOpenManager__WriteData(0LL);
                        }
                        this->fields.isHintDialogOpenFlag = 1;
                      }
                    }
                  }
                  else
                  {
                    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                  }
                  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
                  }
                  v52 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                  if ( v52 )
                  {
                    IsAvailableFriendshipUpItem = PartyOrganizationUtility__IsAvailableFriendshipUpItem(v52, 0LL);
                    if ( this->fields.friendshipUpItemUseButton )
                    {
                      v54 = IsAvailableFriendshipUpItem;
                      v55 = UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                              0LL);
                      if ( v55 )
                      {
                        if ( !v54 )
                        {
                          UnityEngine_GameObject__SetActive(v55, 0, 0LL);
                          goto LABEL_51;
                        }
                        UnityEngine_GameObject__SetActive(v55, 1, 0LL);
                        friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
                        if ( friendshipUpItemUseButton )
                        {
                          FriendshipUpItemUseItem__SetInit(friendshipUpItemUseButton, 0LL);
LABEL_51:
                          this->fields.state = 1;
                          v61 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v57, v58, v59, v60);
                          System_Action___ctor(
                            v61,
                            (Il2CppObject *)this,
                            Method_WaveBattlePartyOrganizationMenu_EndOpen__,
                            0LL);
                          BaseMenu__Open((BaseMenu_o *)this, v61, 0LL);
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
    sub_B170D4();
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OpenTutorial(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v4; // x8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo
    && EventTutorialMaster__IsTutorialDataExists(
         questRestrictionInfo->fields.eventId,
         45,
         questRestrictionInfo->fields.questId,
         questRestrictionInfo->fields.questPhase,
         0,
         0,
         0,
         0LL) )
  {
    v4 = this->fields.questRestrictionInfo;
    if ( !v4 )
      sub_B170D4();
    EventTutorialMaster__CheckTutorial(
      v4->fields.eventId,
      (int32_t)&qword_28 + 5,
      0LL,
      v4->fields.questId,
      v4->fields.questPhase,
      0,
      0,
      0LL);
  }
  else
  {
    WaveBattlePartyOrganizationMenu__CheckFriendshipUpItemTutorial(this, method);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__SetWave(
        WaveBattlePartyOrganizationMenu_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_B170D4();
  WaveBattleWaveInfoListManager__SetScrollPos(waveInfoListManager, wave, method);
}


void __fastcall WaveBattlePartyOrganizationMenu__ShowHintDialogButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w20
  int32_t questId; // w21
  System_String_o *message; // x19
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_o *title; // x20
  int32_t leftIndent; // w21
  QuestPhaseMaster_o *v14; // x0
  System_String_o *HintMessageTitle; // x0
  System_String_o *HintMessage; // x0
  CommonUI_o *Instance; // x0
  QuestPhaseEntity_o *v18; // [xsp+0h] [xbp-30h] BYREF
  QuestHintEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F674C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_QuestHintMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestPhaseMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_1/*""*/, v6);
    byte_40F674C = 1;
  }
  v18 = 0LL;
  entity = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_25;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  message = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_25;
  if ( QuestHintMaster__TryGetEntity(
         (QuestHintMaster_o *)Master_WarQuestSelectionMaster,
         &entity,
         questId,
         questPhase,
         0LL) )
  {
    if ( !entity )
      goto LABEL_25;
    title = entity->fields.title;
    message = entity->fields.message;
    leftIndent = entity->fields.leftIndent;
  }
  else
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v14 = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !v14 )
      goto LABEL_25;
    if ( QuestPhaseMaster__TryGetEntity(v14, &v18, questId, questPhase, 0LL) )
    {
      if ( !v18 )
        goto LABEL_25;
      HintMessageTitle = QuestPhaseEntity__getHintMessageTitle(v18, 0LL);
      if ( !v18 )
        goto LABEL_25;
      title = HintMessageTitle;
      HintMessage = QuestPhaseEntity__getHintMessage(v18, 0LL);
      if ( !v18 )
        goto LABEL_25;
      message = HintMessage;
      leftIndent = QuestPhaseEntity__getHintLeftIndent(v18, 0LL);
    }
    else
    {
      leftIndent = -1;
      title = message;
    }
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
    return;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_25:
    sub_B170D4();
  CommonUI__OpenScrollMessageDialog(Instance, title, message, leftIndent, 0LL, 0, 1, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__UpdateInfo(
        WaveBattlePartyOrganizationMenu_o *this,
        UserEventDeckEntity_o *deckEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo *v13; // x2
  ItemIconComponent_o *masterEquipIcon; // x0
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0
  PartyOrganizationUtility_o *v16; // x0
  PartyOrganizationUtility_c *v17; // x0
  int32_t Int; // w0
  System_String_o *v19; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *equipName; // [xsp+8h] [xbp-38h] BYREF
  int32_t maxLv; // [xsp+14h] [xbp-2Ch] BYREF
  int32_t genderImageId[2]; // [xsp+18h] [xbp-28h] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_40F674E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEquipMaster___, deckEntity);
    sub_B16FFC(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__, v5);
    sub_B16FFC(&PartyOrganizationUtility_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v9);
    byte_40F674E = 1;
  }
  entity = 0LL;
  *(_QWORD *)genderImageId = 0LL;
  maxLv = 0;
  v19 = 0LL;
  equipName = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !deckEntity )
    goto LABEL_23;
  deckInfo = deckEntity->fields.deckInfo;
  if ( !deckInfo || !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         deckInfo->fields.userEquipId,
         (const MethodInfo_266F60C *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__) )
  {
    if ( !entity )
      goto LABEL_23;
    UserEquipEntity__getEquipInfo(
      (UserEquipEntity_o *)entity,
      genderImageId,
      &maxLv,
      &equipName,
      &v19,
      &genderImageId[1],
      0LL);
    masterEquipIcon = this->fields.masterEquipIcon;
    if ( !masterEquipIcon )
      goto LABEL_23;
    ItemIconComponent__SetEquipItem(masterEquipIcon, genderImageId[1], 0LL);
  }
  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    goto LABEL_23;
  WaveBattleWaveInfoListManager__UpdateWaveServantInfo(waveInfoListManager, deckEntity, v13);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v16 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v16 )
    goto LABEL_23;
  if ( !PartyOrganizationUtility__IsAvailableFriendshipUpItem(v16, 0LL) )
    return;
  v17 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v17 = PartyOrganizationUtility_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v17->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  if ( !this->fields.friendshipUpItemUseButton )
LABEL_23:
    sub_B170D4();
  FriendshipUpItemUseItem__ChangeButtonState(this->fields.friendshipUpItemUseButton, Int != 0, 0LL);
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

  if ( (byte_40F6748 & 1) == 0 )
  {
    sub_B16FFC(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo, value);
    byte_40F6748 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationMenu_o *)sub_B173C8(v8);
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

  if ( (byte_40F6749 & 1) == 0 )
  {
    sub_B16FFC(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo, value);
    byte_40F6749 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationMenu_o *)sub_B173C8(v8);
  WaveBattlePartyOrganizationMenu__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationMenu_CallbackFunc___ctor(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v12[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v13; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v14; // [xsp+28h] [xbp-28h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-24h] BYREF

  v15 = result;
  v13 = m;
  v14 = n;
  if ( (byte_40F789B & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v10);
    byte_40F789B = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v15);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v12, callback, object);
}


void __fastcall WaveBattlePartyOrganizationMenu_CallbackFunc__EndInvoke(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationMenu_CallbackFunc__Invoke(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v9; // x26
  WaveBattlePartyOrganizationMenu_CallbackFunc_o **v10; // x27
  __int64 v11; // x28
  unsigned int v12; // w25
  __int64 class_0; // x0
  __int64 v14; // x8
  unsigned int v15; // w24
  unsigned __int64 v16; // x10
  _DWORD *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  void (__fastcall **v21)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD); // x0
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *v22; // x8
  __int64 *v23; // x23
  __int64 v24; // x24
  void (__fastcall *v25)(unsigned int *, _QWORD, _QWORD, __int64); // x25
  char v26; // w25
  char v27; // w0
  unsigned int v28; // w25
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+4h] [xbp-5Ch] BYREF
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *v35; // [xsp+8h] [xbp-58h] BYREF

  v35 = this;
  v34 = result;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v35;
    v9 = 1LL;
    goto LABEL_5;
  }
  v9 = *(_QWORD *)(v5 + 24);
  if ( v9 )
  {
    v10 = (WaveBattlePartyOrganizationMenu_CallbackFunc_o **)(v5 + 32);
LABEL_5:
    v11 = 0LL;
    while ( 1 )
    {
      v22 = v10[v11];
      v23 = *(__int64 **)&v22->fields.method;
      v24 = *(_QWORD *)&v22->fields.extra_arg;
      v25 = *(void (__fastcall **)(unsigned int *, _QWORD, _QWORD, __int64))&v22->fields.method_ptr;
      if ( *(__int16 *)(v24 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v22->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&n);
      if ( (sub_B1702C(v24) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v24 + 74) != 3 )
        goto LABEL_36;
      v25((unsigned int *)v34, (unsigned int)n, (unsigned int)m, v24);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v23 )
    {
      v25(&v34 - 4, (unsigned int)n, (unsigned int)m, v24);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v24 + 72) != -1 && (*(_BYTE *)(*v23 + 277) & 1) == 0 && this->fields.m_target )
    {
      v26 = sub_B17024(v24);
      v27 = sub_B17428(v24);
      if ( (v26 & 1) != 0 )
      {
        v28 = v34;
        if ( (v27 & 1) != 0 )
        {
          v29 = *v23;
          v30 = *(_QWORD *)(v24 + 24);
          v31 = *(unsigned __int16 *)(v24 + 72);
          if ( *(_WORD *)(*v23 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_35;
            }
            v20 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v20 = sub_AAFEF8(v23, v30, v31);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B170AC(v19, v24);
        (*v21)(v23, v28, (unsigned int)n, (unsigned int)m, v21);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v24 + 72);
        if ( (v27 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v24);
          v14 = *v23;
          v15 = v34;
          if ( *(_WORD *)(*v23 + 298) )
          {
            v16 = 0LL;
            v17 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((_QWORD *)v17 - 1) != class_0 )
            {
              ++v16;
              v17 += 4;
              if ( v16 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_11;
            }
            v18 = v14 + 16LL * (int)(*v17 + v12) + 312;
          }
          else
          {
LABEL_11:
            v18 = sub_AAFEF8(v23, class_0, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))v18)(
            v23,
            v15,
            (unsigned int)n,
            (unsigned int)m,
            *(_QWORD *)(v18 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))(*v23
                                                                            + 16LL * *(unsigned __int16 *)(v24 + 72)
                                                                            + 312))(
            v23,
            v34,
            (unsigned int)n,
            (unsigned int)m,
            *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, _QWORD, __int64))v25)(
      v23,
      v34,
      (unsigned int)n,
      (unsigned int)m,
      v24);
    goto LABEL_38;
  }
}