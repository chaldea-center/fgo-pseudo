void __fastcall WaveBattlePartyOrganizationMenu___ctor(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AF960 & 1) == 0 )
  {
    sub_B52984(&BaseMenu_TypeInfo);
    byte_42AF960 = 1;
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
  PartyOrganizationUtility_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_42AF95E & 1) == 0 )
  {
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B52984(&TutorialFlag_TypeInfo);
    byte_42AF95E = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_29217932(102, 0LL) )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      v3 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v3 )
        sub_B52A5C(0LL, v4);
      if ( PartyOrganizationUtility__IsAvailableFriendshipUpItem(v3, 0LL) )
        EventTutorialMaster__CheckTutorial(0, 71, 0LL, 0, 0, 0, 0, 0LL);
    }
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__Close(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationMenu__Close_24387600(this, 0LL, v2);
}


void __fastcall WaveBattlePartyOrganizationMenu__Close_24387600(
        WaveBattlePartyOrganizationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Action_o *v12; // x20

  if ( (byte_42AF955 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_WaveBattlePartyOrganizationMenu_EndClose__);
    byte_42AF955 = 1;
  }
  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_B52A5C(0LL, callback);
  WaveBattleWaveInfoListManager__DestroyList(waveInfoListManager, (const MethodInfo *)callback);
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.state = 4;
  v12 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_WaveBattlePartyOrganizationMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v12, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__Display(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v3);
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
    sub_B52920(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  __int64 v4; // x19
  PartyListViewItem_o *UserId; // x0
  __int64 v6; // x1
  PartyListViewItem_o *v7; // x8
  PartyListViewItem_o *v8; // x8
  int64_t userEquipId; // x21
  int32_t nestedTypes; // w22
  DeckServant_o *v11; // x23
  __int64 v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  signed int max_length; // w8
  int v20; // w10
  unsigned int v21; // w11
  __int64 v22; // x8
  __int64 v23; // x19
  __int64 v24; // x8
  PartyListViewItem_o *v25; // x23
  unsigned __int64 v26; // x22
  int v27; // w27
  PartyOrganizationListViewItem_o *Member; // x25
  __int64 v29; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v31; // q0
  __int128 v32; // q1
  System_Int32_array **EquipList; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  int32_t InitPos_k__BackingField; // w8
  __int64 v41; // x8
  __int64 v42; // x8
  __int64 v43; // x8
  _DWORD *v44; // x25
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  _DWORD *v51; // x0
  __int64 v53; // x0
  __int64 v54; // x0
  UserEventDeckEntity_o *v55; // [xsp+0h] [xbp-D0h]
  PartyListViewItem_array *v56; // [xsp+8h] [xbp-C8h]
  signed int v57; // [xsp+10h] [xbp-C0h]
  int v58; // [xsp+1Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60[2]; // [xsp+40h] [xbp-90h] BYREF

  if ( (byte_42AF957 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&DeckServantData_TypeInfo);
    sub_B52984(&DeckServant_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&UserEventDeckEntity_TypeInfo);
    byte_42AF957 = 1;
  }
  memset(&v60[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v4 = sub_B52A54(UserEventDeckEntity_TypeInfo);
  UserEventDeckEntity___ctor((UserEventDeckEntity_o *)v4, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = (PartyListViewItem_o *)NetworkManager__get_UserId(0LL);
  if ( !v4 )
    goto LABEL_54;
  *(_QWORD *)(v4 + 16) = UserId;
  if ( !deckItemList )
    goto LABEL_54;
  if ( !deckItemList->max_length )
    goto LABEL_55;
  v7 = deckItemList->m_Items[0];
  if ( !v7 )
    goto LABEL_54;
  *(_DWORD *)(v4 + 24) = v7->fields.id;
  if ( !deckItemList->max_length )
    goto LABEL_55;
  UserId = deckItemList->m_Items[0];
  if ( !UserId )
    goto LABEL_54;
  *(_DWORD *)(v4 + 28) = PartyListViewItem__get_DeckNum(UserId, 0LL);
  UserId = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    UserId = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
  }
  if ( !deckItemList->max_length )
    goto LABEL_55;
  v8 = deckItemList->m_Items[0];
  if ( !v8 )
LABEL_54:
    sub_B52A5C(UserId, v6);
  userEquipId = v8->fields.userEquipId;
  nestedTypes = (int32_t)UserId[1].klass->_1.nestedTypes;
  v11 = (DeckServant_o *)sub_B52A54(DeckServant_TypeInfo);
  DeckServant___ctor_16910352(v11, deckItemList->max_length, nestedTypes, userEquipId, 0LL);
  *(_QWORD *)(v4 + 32) = v11;
  v12 = v4 + 32;
  v55 = (UserEventDeckEntity_o *)v4;
  sub_B52920((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)v11, v13, v14, v15, v16, v17, v18);
  max_length = deckItemList->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    v21 = 0;
    v56 = deckItemList;
    while ( v21 < max_length )
    {
      if ( !*(_QWORD *)v12 )
        goto LABEL_54;
      v22 = *(_QWORD *)(*(_QWORD *)v12 + 32LL);
      if ( !v22 )
        goto LABEL_54;
      v23 = (int)v21;
      if ( v21 >= *(_DWORD *)(v22 + 24) )
        break;
      v24 = *(_QWORD *)(v22 + 8LL * (int)v21 + 32);
      if ( !v24 )
        goto LABEL_54;
      v25 = deckItemList->m_Items[v21];
      v26 = 0LL;
      v57 = v21 + 1;
      *(_DWORD *)(v24 + 16) = v21 + 1;
      v58 = v20;
      v27 = v20;
      while ( 1 )
      {
        UserId = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          UserId = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
        }
        if ( (__int64)v26 >= SLODWORD(UserId[1].klass->_1.nestedTypes) )
          break;
        if ( !v25 )
          goto LABEL_54;
        Member = PartyListViewItem__GetMember(v25, v26, 0LL);
        v29 = sub_B52A54(DeckServantData_TypeInfo);
        DeckServantData___ctor((DeckServantData_o *)v29, 0LL);
        if ( !v29 )
          goto LABEL_54;
        *(_DWORD *)(v29 + 16) = v27 + v26 + 1;
        if ( !Member )
          goto LABEL_54;
        userServantEntity = Member->fields.userServantEntity;
        if ( userServantEntity )
        {
          v32 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          v31 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        }
        else
        {
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v60, 0LL, 0LL);
          v32 = *(_OWORD *)&v60[0].fields.currentCryptoKey;
          v31 = *(_OWORD *)&v60[0].fields.fakeValue;
        }
        *(_OWORD *)&v60[1].fields.currentCryptoKey = v32;
        *(_OWORD *)&v60[1].fields.fakeValue = v31;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v59 = v60[1];
        *(_QWORD *)(v29 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v59, 0LL);
        EquipList = (System_Int32_array **)PartyOrganizationListViewItem__GetEquipList(Member, 0LL);
        *(_QWORD *)(v29 + 32) = EquipList;
        sub_B52920((BattleServantConfConponent_o *)(v29 + 32), EquipList, v34, v35, v36, v37, v38, v39);
        InitPos_k__BackingField = Member->fields._InitPos_k__BackingField;
        *(_QWORD *)(v29 + 48) = 0LL;
        *(_BYTE *)(v29 + 40) = 0;
        *(_DWORD *)(v29 + 60) = InitPos_k__BackingField;
        if ( !*(_QWORD *)v12 )
          goto LABEL_54;
        v41 = *(_QWORD *)(*(_QWORD *)v12 + 32LL);
        if ( !v41 )
          goto LABEL_54;
        if ( (unsigned int)v23 >= *(_DWORD *)(v41 + 24) )
          goto LABEL_55;
        v42 = *(_QWORD *)(v41 + 8 * v23 + 32);
        if ( !v42 )
          goto LABEL_54;
        v43 = *(_QWORD *)(v42 + 24);
        if ( !v43 )
          goto LABEL_54;
        if ( v26 >= *(unsigned int *)(v43 + 24) )
          goto LABEL_55;
        *(_DWORD *)(v43 + 4 * v26 + 32) = *(_DWORD *)(v29 + 16);
        if ( !*(_QWORD *)v12 )
          goto LABEL_54;
        v44 = *(_DWORD **)(*(_QWORD *)v12 + 16LL);
        if ( !v44 )
          goto LABEL_54;
        UserId = (PartyListViewItem_o *)sub_B52A44(v29, *(_QWORD *)(*(_QWORD *)v44 + 64LL));
        if ( !UserId )
        {
          v54 = sub_B52A7C(0LL);
          sub_B52A28(v54, 0LL);
        }
        if ( (unsigned int)(v27 + v26) >= v44[6] )
          goto LABEL_55;
        v51 = &v44[2 * v27 + 2 * (int)v26];
        *((_QWORD *)v51 + 4) = v29;
        sub_B52920((BattleServantConfConponent_o *)(v51 + 8), (System_Int32_array **)v29, v45, v46, v47, v48, v49, v50);
        ++v26;
      }
      deckItemList = v56;
      v21 = v57;
      max_length = v56->max_length;
      v20 = v58 + v26;
      if ( v57 >= max_length )
        return v55;
    }
LABEL_55:
    v53 = sub_B52A88(UserId);
    sub_B52A28(v53, 0LL);
  }
  return v55;
}


void __fastcall WaveBattlePartyOrganizationMenu__Hide(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__HideFriendshipUpItemUseButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *friendshipUpItemUseButton; // x0

  friendshipUpItemUseButton = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton;
  if ( !friendshipUpItemUseButton
    || (friendshipUpItemUseButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                 friendshipUpItemUseButton,
                                                                 0LL)) == 0LL )
  {
    sub_B52A5C(friendshipUpItemUseButton, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)friendshipUpItemUseButton, 0, 0LL);
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
    sub_B52A5C(0LL, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}


bool __fastcall WaveBattlePartyOrganizationMenu__IsHintDialog(
        WaveBattlePartyOrganizationMenu_o *this,
        bool *isEvery,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationMenu_o *v4; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w20
  int32_t questId; // w21
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v11; // [xsp+0h] [xbp-30h] BYREF
  QuestHintEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_42AF953 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_B52984(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    this = (WaveBattlePartyOrganizationMenu_o *)sub_B52984(&DataManager_TypeInfo);
    byte_42AF953 = 1;
  }
  v11 = 0LL;
  entity = 0LL;
  *isEvery = 0;
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_21;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !this )
    goto LABEL_21;
  this = (WaveBattlePartyOrganizationMenu_o *)QuestHintMaster__TryGetEntity(
                                                (QuestHintMaster_o *)this,
                                                &entity,
                                                questId,
                                                questPhase,
                                                0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( this )
    {
      if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &v11, questId, questPhase, 0LL) )
        return 0;
      this = (WaveBattlePartyOrganizationMenu_o *)v11;
      if ( v11 )
      {
        *isEvery = QuestPhaseEntity__getHintOpenType(v11, 0LL) == 0;
        this = (WaveBattlePartyOrganizationMenu_o *)v11;
        if ( v11 )
        {
          HintMessage = QuestPhaseEntity__getHintMessage(v11, 0LL);
          return !System_String__IsNullOrEmpty(HintMessage, 0LL);
        }
      }
    }
LABEL_21:
    sub_B52A5C(this, isEvery);
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

  if ( (byte_42AF959 & 1) == 0 )
  {
    sub_B52984(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__);
    byte_42AF959 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
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

  if ( (byte_42AF95C & 1) == 0 )
  {
    sub_B52984(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__);
    byte_42AF95C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
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

  if ( (byte_42AF95B & 1) == 0 )
  {
    sub_B52984(&Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__);
    byte_42AF95B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
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
  PartyOrganizationUtility_c *v3; // x0
  int32_t Int; // w20
  _QWORD *v5; // x8
  System_Reflection_MethodBase_o *v6; // x0
  PartyOrganizationUtility_c *v7; // x0
  __int64 v8; // x1
  FriendshipUpItemUseItem_o *friendshipUpItemUseButton; // x0
  bool v10; // w1
  PartyOrganizationUtility_c *v11; // x0

  if ( (byte_42AF95F & 1) == 0 )
  {
    sub_B52984(&PartyOrganizationUtility_TypeInfo);
    sub_B52984(&Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__);
    byte_42AF95F = 1;
  }
  v3 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v3 = PartyOrganizationUtility_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  v5 = Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__;
  if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B5298C(Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_B52968(v5, v5[3]);
  if ( !Int )
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
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
    sub_B52A5C(friendshipUpItemUseButton, v8);
  }
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  v7 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v7 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v7->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
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

  if ( (byte_42AF95D & 1) == 0 )
  {
    sub_B52984(&Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__);
    byte_42AF95D = 1;
  }
  v3 = Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__;
  if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B5298C(Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
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

  if ( (byte_42AF958 & 1) == 0 )
  {
    sub_B52984(&Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__);
    byte_42AF958 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
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

  if ( (byte_42AF95A & 1) == 0 )
  {
    sub_B52984(&Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__);
    byte_42AF95A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
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
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x24
  WaveBattleWaveInfoListManager_CallbackFunc_o *v21; // x25
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x5
  struct DeckServant_o *deckInfo; // x8
  UISprite_o *classInfoSpriteOrganization; // x21
  const MethodInfo *v27; // x2
  char v28; // w21
  int32_t questId; // w22
  int32_t v30; // w22
  int32_t v31; // w20
  QuestHintDialogOpenManager_c *v32; // x0
  char v33; // w20
  System_Action_o *v34; // x20
  QuestHintDialogOpenManager_c *v35; // x0
  System_String_o *v36; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *equipName; // [xsp+8h] [xbp-58h] BYREF
  __int64 maxLv; // [xsp+10h] [xbp-50h] BYREF
  int32_t genderImageId; // [xsp+18h] [xbp-48h] BYREF
  bool isEvery; // [xsp+1Ch] [xbp-44h] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_42AF952 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_B52984(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__);
    sub_B52984(&QuestHintDialogOpenManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B52984(&Method_WaveBattlePartyOrganizationMenu_EndOpen__);
    sub_B52984(&Method_WaveBattlePartyOrganizationMenu_OnSelectWavePartyList__);
    sub_B52984(&StringLiteral_17265/*"buttontxt_formation_20"*/);
    byte_42AF952 = 1;
  }
  entity = 0LL;
  isEvery = 0;
  genderImageId = 0;
  equipName = 0LL;
  maxLv = 0LL;
  v36 = 0LL;
  if ( !this->fields.state )
  {
    this->fields.questRestrictionInfo = questRestrictionInfo;
    p_questRestrictionInfo = &this->fields.questRestrictionInfo;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
      (System_Int32_array **)questRestrictionInfo,
      (System_String_array **)questRestrictionInfo,
      *(System_String_array ***)&waveCount,
      (System_Boolean_array **)callback,
      (System_Int32_array **)method,
      v6,
      v7);
    this->fields.callbackFunc = callback;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    waveInfoListManager = this->fields.waveInfoListManager;
    v21 = (WaveBattleWaveInfoListManager_CallbackFunc_o *)sub_B52A54(WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
    WaveBattleWaveInfoListManager_CallbackFunc___ctor(
      v21,
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
        v21,
        v24);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEquipMaster___);
        if ( deckEntity )
        {
          deckInfo = deckEntity->fields.deckInfo;
          if ( deckInfo )
          {
            if ( Instance )
            {
              if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                     (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                     &entity,
                     deckInfo->fields.userEquipId,
                     (const MethodInfo_23E255C *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__) )
              {
                Instance = (DataManager_o *)entity;
                if ( !entity )
                  goto LABEL_68;
                UserEquipEntity__getEquipInfo(
                  (UserEquipEntity_o *)entity,
                  (int32_t *)&maxLv + 1,
                  (int32_t *)&maxLv,
                  &equipName,
                  &v36,
                  &genderImageId,
                  0LL);
                Instance = (DataManager_o *)this->fields.masterEquipIcon;
                if ( !Instance )
                  goto LABEL_68;
                ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, genderImageId, 0LL);
              }
              classInfoSpriteOrganization = this->fields.classInfoSpriteOrganization;
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetPartyOrganizationImage(
                classInfoSpriteOrganization,
                (System_String_o *)StringLiteral_17265/*"buttontxt_formation_20"*/,
                0LL);
              Instance = (DataManager_o *)WaveBattlePartyOrganizationMenu__IsHintDialog(this, &isEvery, v27);
              if ( this->fields.hintDialogButton )
              {
                v28 = (char)Instance;
                Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                              0LL);
                if ( Instance )
                {
                  if ( (v28 & 1) != 0 )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                    if ( !*p_questRestrictionInfo )
                      goto LABEL_68;
                    questId = (*p_questRestrictionInfo)->fields.questId;
                    if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                    }
                    Instance = (DataManager_o *)QuestHintDialogOpenManager__IsSettingTemporarilyId(questId, 0LL);
                    if ( ((unsigned __int8)Instance & 1) == 0 )
                    {
                      if ( !*p_questRestrictionInfo )
                        goto LABEL_68;
                      v30 = (*p_questRestrictionInfo)->fields.questId;
                      if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                      }
                      Instance = (DataManager_o *)QuestHintDialogOpenManager__IsQuestHintOpen(v30, 0LL);
                      if ( ((unsigned __int8)Instance & 1) == 0 )
                      {
                        if ( !*p_questRestrictionInfo )
                          goto LABEL_68;
                        v31 = (*p_questRestrictionInfo)->fields.questId;
                        if ( isEvery )
                        {
                          if ( (WORD1(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                            && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                          }
                          if ( !byte_42ADC5F )
                          {
                            sub_B52984(&QuestHintDialogOpenManager_TypeInfo);
                            byte_42ADC5F = 1;
                          }
                          v32 = QuestHintDialogOpenManager_TypeInfo;
                          if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                            v32 = QuestHintDialogOpenManager_TypeInfo;
                          }
                          v32->static_fields->temporarilyId = v31;
                        }
                        else
                        {
                          if ( (WORD1(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                            && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                          }
                          if ( !byte_42ADC5F )
                          {
                            sub_B52984(&QuestHintDialogOpenManager_TypeInfo);
                            byte_42ADC5F = 1;
                          }
                          v35 = QuestHintDialogOpenManager_TypeInfo;
                          if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                            v35 = QuestHintDialogOpenManager_TypeInfo;
                          }
                          v35->static_fields->temporarilyId = v31;
                          if ( !byte_42AD584 )
                          {
                            sub_B52984(&QuestHintDialogOpenManager_TypeInfo);
                            v35 = QuestHintDialogOpenManager_TypeInfo;
                            byte_42AD584 = 1;
                          }
                          if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v35);
                            v35 = QuestHintDialogOpenManager_TypeInfo;
                          }
                          QuestHintDialogOpenManager__SetQuestId(v35->static_fields->temporarilyId, 0LL);
                          QuestHintDialogOpenManager__WriteData(0LL);
                        }
                        this->fields.isHintDialogOpenFlag = 1;
                      }
                    }
                  }
                  else
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                  }
                  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
                  }
                  Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                  if ( Instance )
                  {
                    Instance = (DataManager_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(
                                                  (PartyOrganizationUtility_o *)Instance,
                                                  0LL);
                    if ( this->fields.friendshipUpItemUseButton )
                    {
                      v33 = (char)Instance;
                      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                    0LL);
                      if ( Instance )
                      {
                        if ( (v33 & 1) == 0 )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                          goto LABEL_51;
                        }
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                        Instance = (DataManager_o *)this->fields.friendshipUpItemUseButton;
                        if ( Instance )
                        {
                          FriendshipUpItemUseItem__SetInit((FriendshipUpItemUseItem_o *)Instance, 0LL);
LABEL_51:
                          this->fields.state = 1;
                          v34 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                          System_Action___ctor(
                            v34,
                            (Il2CppObject *)this,
                            Method_WaveBattlePartyOrganizationMenu_EndOpen__,
                            0LL);
                          BaseMenu__Open((BaseMenu_o *)this, v34, 0LL);
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
    sub_B52A5C(Instance, v23);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OpenTutorial(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  _BOOL8 IsTutorialDataExists; // x0
  struct QuestRestrictionInfo_o *v5; // x8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo
    && (IsTutorialDataExists = EventTutorialMaster__IsTutorialDataExists(
                                 questRestrictionInfo->fields.eventId,
                                 45,
                                 questRestrictionInfo->fields.questId,
                                 questRestrictionInfo->fields.questPhase,
                                 0,
                                 0,
                                 0,
                                 0LL)) )
  {
    v5 = this->fields.questRestrictionInfo;
    if ( !v5 )
      sub_B52A5C(IsTutorialDataExists, method);
    EventTutorialMaster__CheckTutorial(
      v5->fields.eventId,
      (int32_t)&qword_28 + 5,
      0LL,
      v5->fields.questId,
      v5->fields.questPhase,
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
    sub_B52A5C(0LL, wave);
  WaveBattleWaveInfoListManager__SetScrollPos(waveInfoListManager, wave, method);
}


void __fastcall WaveBattlePartyOrganizationMenu__ShowHintDialogButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationMenu_o *v2; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w20
  int32_t questId; // w21
  System_String_o *message; // x19
  System_String_o *title; // x20
  int32_t leftIndent; // w21
  QuestPhaseEntity_o *v9; // [xsp+0h] [xbp-30h] BYREF
  QuestHintEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_42AF954 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_B52984(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (WaveBattlePartyOrganizationMenu_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42AF954 = 1;
  }
  v9 = 0LL;
  entity = 0LL;
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_25;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  message = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !this )
    goto LABEL_25;
  this = (WaveBattlePartyOrganizationMenu_o *)QuestHintMaster__TryGetEntity(
                                                (QuestHintMaster_o *)this,
                                                &entity,
                                                questId,
                                                questPhase,
                                                0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
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
    this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !this )
      goto LABEL_25;
    if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &v9, questId, questPhase, 0LL) )
    {
      this = (WaveBattlePartyOrganizationMenu_o *)v9;
      if ( !v9 )
        goto LABEL_25;
      this = (WaveBattlePartyOrganizationMenu_o *)QuestPhaseEntity__getHintMessageTitle(v9, 0LL);
      if ( !v9 )
        goto LABEL_25;
      title = (System_String_o *)this;
      this = (WaveBattlePartyOrganizationMenu_o *)QuestPhaseEntity__getHintMessage(v9, 0LL);
      if ( !v9 )
        goto LABEL_25;
      message = (System_String_o *)this;
      leftIndent = QuestPhaseEntity__getHintLeftIndent(v9, 0LL);
    }
    else
    {
      leftIndent = -1;
      title = message;
    }
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
    return;
  this = (WaveBattlePartyOrganizationMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_25:
    sub_B52A5C(this, method);
  CommonUI__OpenScrollMessageDialog((CommonUI_o *)this, title, message, leftIndent, 0LL, 0, 1, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__UpdateInfo(
        WaveBattlePartyOrganizationMenu_o *this,
        UserEventDeckEntity_o *deckEntity,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo *v8; // x2
  PartyOrganizationUtility_c *v9; // x0
  System_String_o *v10; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *equipName; // [xsp+8h] [xbp-38h] BYREF
  int32_t maxLv; // [xsp+14h] [xbp-2Ch] BYREF
  int32_t genderImageId[2]; // [xsp+18h] [xbp-28h] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_42AF956 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_B52984(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__);
    sub_B52984(&PartyOrganizationUtility_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_42AF956 = 1;
  }
  entity = 0LL;
  *(_QWORD *)genderImageId = 0LL;
  maxLv = 0;
  v10 = 0LL;
  equipName = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !deckEntity )
    goto LABEL_23;
  deckInfo = deckEntity->fields.deckInfo;
  if ( !deckInfo || !Instance )
    goto LABEL_23;
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
         &entity,
         deckInfo->fields.userEquipId,
         (const MethodInfo_23E255C *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_23;
    UserEquipEntity__getEquipInfo(
      (UserEquipEntity_o *)entity,
      genderImageId,
      &maxLv,
      &equipName,
      &v10,
      &genderImageId[1],
      0LL);
    Instance = (DataManager_o *)this->fields.masterEquipIcon;
    if ( !Instance )
      goto LABEL_23;
    ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, genderImageId[1], 0LL);
  }
  Instance = (DataManager_o *)this->fields.waveInfoListManager;
  if ( !Instance )
    goto LABEL_23;
  WaveBattleWaveInfoListManager__UpdateWaveServantInfo((WaveBattleWaveInfoListManager_o *)Instance, deckEntity, v8);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  if ( !PartyOrganizationUtility__IsAvailableFriendshipUpItem((PartyOrganizationUtility_o *)Instance, 0LL) )
    return;
  v9 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v9 = PartyOrganizationUtility_TypeInfo;
  }
  Instance = (DataManager_o *)UnityEngine_PlayerPrefs__GetInt(
                                v9->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE,
                                0,
                                0LL);
  if ( !this->fields.friendshipUpItemUseButton )
LABEL_23:
    sub_B52A5C(Instance, v6);
  FriendshipUpItemUseItem__ChangeButtonState(this->fields.friendshipUpItemUseButton, (_DWORD)Instance != 0, 0LL);
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

  if ( (byte_42AF950 & 1) == 0 )
  {
    sub_B52984(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo);
    byte_42AF950 = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationMenu_o *)sub_B52D50(v8);
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

  if ( (byte_42AF951 & 1) == 0 )
  {
    sub_B52984(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo);
    byte_42AF951 = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationMenu_o *)sub_B52D50(v8);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall WaveBattlePartyOrganizationMenu_CallbackFunc__BeginInvoke(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v12; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v13; // [xsp+28h] [xbp-28h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-24h] BYREF

  v14 = result;
  v12 = m;
  v13 = n;
  if ( (byte_42AD77E & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo);
    byte_42AD77E = 1;
  }
  v11[3] = 0LL;
  v11[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v14);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  v11[2] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B52928(this, v11, callback, object);
}


void __fastcall WaveBattlePartyOrganizationMenu_CallbackFunc__EndInvoke(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
  __int64 v14; // x3
  __int64 v15; // x8
  unsigned int v16; // w24
  unsigned __int64 v17; // x10
  _DWORD *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  void (__fastcall **v22)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD); // x0
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *v23; // x8
  __int64 *v24; // x23
  __int64 v25; // x24
  void (__fastcall *v26)(unsigned int *, _QWORD, _QWORD, __int64); // x25
  char v27; // w25
  char v28; // w0
  __int64 v29; // x3
  unsigned int v30; // w25
  __int64 v31; // x8
  __int64 v32; // x1
  __int64 v33; // x2
  unsigned __int64 v34; // x10
  _DWORD *v35; // x11
  unsigned int v36; // [xsp+4h] [xbp-5Ch] BYREF
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *v37; // [xsp+8h] [xbp-58h] BYREF

  v37 = this;
  v36 = result;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v37;
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
      v23 = v10[v11];
      v24 = *(__int64 **)&v23->fields.method;
      v25 = *(_QWORD *)&v23->fields.extra_arg;
      v26 = *(void (__fastcall **)(unsigned int *, _QWORD, _QWORD, __int64))&v23->fields.method_ptr;
      if ( *(__int16 *)(v25 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&n, *(_QWORD *)&m);
      if ( (sub_B529B4(v25) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v25 + 74) != 3 )
        goto LABEL_36;
      v26((unsigned int *)v36, (unsigned int)n, (unsigned int)m, v25);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v24 )
    {
      v26(&v36 - 4, (unsigned int)n, (unsigned int)m, v25);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v25 + 72) != -1 && (*(_BYTE *)(*v24 + 277) & 1) == 0 && this->fields.m_target )
    {
      v27 = sub_B529AC(v25);
      v28 = sub_B52DB0(v25);
      if ( (v27 & 1) != 0 )
      {
        v30 = v36;
        if ( (v28 & 1) != 0 )
        {
          v31 = *v24;
          v32 = *(_QWORD *)(v25 + 24);
          v33 = *(unsigned __int16 *)(v25 + 72);
          if ( *(_WORD *)(*v24 + 298) )
          {
            v34 = 0LL;
            v35 = (_DWORD *)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *((_QWORD *)v35 - 1) != v32 )
            {
              ++v34;
              v35 += 4;
              if ( v34 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_35;
            }
            v21 = v31 + 16LL * (*v35 + (int)v33) + 312;
          }
          else
          {
LABEL_35:
            v21 = sub_AEB880(v24, v32, v33, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B52A34(v20, v25);
        (*v22)(v24, v30, (unsigned int)n, (unsigned int)m, v22);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v25 + 72);
        if ( (v28 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v25);
          v15 = *v24;
          v16 = v36;
          if ( *(_WORD *)(*v24 + 298) )
          {
            v17 = 0LL;
            v18 = (_DWORD *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((_QWORD *)v18 - 1) != class_0 )
            {
              ++v17;
              v18 += 4;
              if ( v17 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_11;
            }
            v19 = v15 + 16LL * (int)(*v18 + v12) + 312;
          }
          else
          {
LABEL_11:
            v19 = sub_AEB880(v24, class_0, v12, v14);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))v19)(
            v24,
            v16,
            (unsigned int)n,
            (unsigned int)m,
            *(_QWORD *)(v19 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))(*v24
                                                                            + 16LL * *(unsigned __int16 *)(v25 + 72)
                                                                            + 312))(
            v24,
            v36,
            (unsigned int)n,
            (unsigned int)m,
            *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, _QWORD, __int64))v26)(
      v24,
      v36,
      (unsigned int)n,
      (unsigned int)m,
      v25);
    goto LABEL_38;
  }
}