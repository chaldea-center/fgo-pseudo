void __fastcall WaveBattlePartyOrganizationMenu___ctor(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_41873F6 & 1) == 0 )
  {
    sub_B2C35C(&BaseMenu_TypeInfo, method);
    byte_41873F6 = 1;
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
  __int64 v6; // x1

  if ( (byte_41873F4 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v3);
    sub_B2C35C(&TutorialFlag_TypeInfo, v4);
    byte_41873F4 = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_28617756(102, 0LL) )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      v5 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v5 )
        sub_B2C434(0LL, v6);
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

  WaveBattlePartyOrganizationMenu__Close_24505412(this, 0LL, v2);
}


void __fastcall WaveBattlePartyOrganizationMenu__Close_24505412(
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
  System_Action_o *v13; // x20

  if ( (byte_41873EB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_WaveBattlePartyOrganizationMenu_EndClose__, v5);
    byte_41873EB = 1;
  }
  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_B2C434(0LL, callback);
  WaveBattleWaveInfoListManager__DestroyList(waveInfoListManager, (const MethodInfo *)callback);
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_WaveBattlePartyOrganizationMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v13, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__Display(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v3);
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
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  PartyListViewItem_array *v3; // x24
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  PartyListViewItem_o *UserId; // x0
  __int64 v11; // x1
  PartyListViewItem_o *v12; // x8
  PartyListViewItem_o *v13; // x8
  int64_t userEquipId; // x21
  int32_t nestedTypes; // w22
  DeckServant_o *v16; // x23
  __int64 v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int max_length; // w8
  int v25; // w10
  unsigned int v26; // w11
  __int64 v27; // x8
  __int64 v28; // x19
  __int64 v29; // x8
  PartyListViewItem_o *v30; // x23
  unsigned __int64 v31; // x22
  int v32; // w27
  PartyOrganizationListViewItem_o *Member; // x25
  __int64 v34; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v36; // q0
  __int128 v37; // q1
  System_Int32_array **EquipList; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int32_t InitPos_k__BackingField; // w8
  __int64 v46; // x8
  __int64 v47; // x8
  __int64 v48; // x8
  _DWORD *v49; // x25
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  _DWORD *v56; // x0
  __int64 v58; // x0
  __int64 v59; // x0
  UserEventDeckEntity_o *v60; // [xsp+0h] [xbp-D0h]
  PartyListViewItem_array *v61; // [xsp+8h] [xbp-C8h]
  int v62; // [xsp+10h] [xbp-C0h]
  int v63; // [xsp+1Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65[2]; // [xsp+40h] [xbp-90h] BYREF

  v3 = deckItemList;
  if ( (byte_41873ED & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, deckItemList);
    sub_B2C35C(&DeckServantData_TypeInfo, v4);
    sub_B2C35C(&DeckServant_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B2C35C(&UserEventDeckEntity_TypeInfo, v8);
    byte_41873ED = 1;
  }
  memset(&v65[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v9 = sub_B2C42C(UserEventDeckEntity_TypeInfo);
  UserEventDeckEntity___ctor((UserEventDeckEntity_o *)v9, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = (PartyListViewItem_o *)NetworkManager__get_UserId(0LL);
  if ( !v9 )
    goto LABEL_54;
  *(_QWORD *)(v9 + 16) = UserId;
  if ( !v3 )
    goto LABEL_54;
  if ( !v3->max_length )
    goto LABEL_55;
  v12 = v3->m_Items[0];
  if ( !v12 )
    goto LABEL_54;
  *(_DWORD *)(v9 + 24) = v12->fields.id;
  if ( !v3->max_length )
    goto LABEL_55;
  UserId = v3->m_Items[0];
  if ( !UserId )
    goto LABEL_54;
  *(_DWORD *)(v9 + 28) = PartyListViewItem__get_DeckNum(UserId, 0LL);
  UserId = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    UserId = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
  }
  if ( !v3->max_length )
    goto LABEL_55;
  v13 = v3->m_Items[0];
  if ( !v13 )
LABEL_54:
    sub_B2C434(UserId, v11);
  userEquipId = v13->fields.userEquipId;
  nestedTypes = (int32_t)UserId[1].klass->_1.nestedTypes;
  v16 = (DeckServant_o *)sub_B2C42C(DeckServant_TypeInfo);
  DeckServant___ctor_16763180(v16, v3->max_length, nestedTypes, userEquipId, 0LL);
  *(_QWORD *)(v9 + 32) = v16;
  v17 = v9 + 32;
  v60 = (UserEventDeckEntity_o *)v9;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)v16, v18, v19, v20, v21, v22, v23);
  max_length = v3->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0;
    v26 = 0;
    v61 = v3;
    while ( v26 < max_length )
    {
      if ( !*(_QWORD *)v17 )
        goto LABEL_54;
      v27 = *(_QWORD *)(*(_QWORD *)v17 + 32LL);
      if ( !v27 )
        goto LABEL_54;
      v28 = (int)v26;
      if ( v26 >= *(_DWORD *)(v27 + 24) )
        break;
      v29 = *(_QWORD *)(v27 + 8LL * (int)v26 + 32);
      if ( !v29 )
        goto LABEL_54;
      v30 = v3->m_Items[v26];
      v31 = 0LL;
      v62 = v26 + 1;
      *(_DWORD *)(v29 + 16) = v26 + 1;
      v63 = v25;
      v32 = v25;
      while ( 1 )
      {
        UserId = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          UserId = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
        }
        if ( (__int64)v31 >= SLODWORD(UserId[1].klass->_1.nestedTypes) )
          break;
        if ( !v30 )
          goto LABEL_54;
        Member = PartyListViewItem__GetMember(v30, v31, 0LL);
        v34 = sub_B2C42C(DeckServantData_TypeInfo);
        DeckServantData___ctor((DeckServantData_o *)v34, 0LL);
        if ( !v34 )
          goto LABEL_54;
        *(_DWORD *)(v34 + 16) = v32 + v31 + 1;
        if ( !Member )
          goto LABEL_54;
        userServantEntity = Member->fields.userServantEntity;
        if ( userServantEntity )
        {
          v37 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          v36 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        }
        else
        {
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v65, 0LL, 0LL);
          v37 = *(_OWORD *)&v65[0].fields.currentCryptoKey;
          v36 = *(_OWORD *)&v65[0].fields.fakeValue;
        }
        *(_OWORD *)&v65[1].fields.currentCryptoKey = v37;
        *(_OWORD *)&v65[1].fields.fakeValue = v36;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v64 = v65[1];
        *(_QWORD *)(v34 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v64, 0LL);
        EquipList = (System_Int32_array **)PartyOrganizationListViewItem__GetEquipList(Member, 0LL);
        *(_QWORD *)(v34 + 32) = EquipList;
        sub_B2C2F8((BattleServantConfConponent_o *)(v34 + 32), EquipList, v39, v40, v41, v42, v43, v44);
        InitPos_k__BackingField = Member->fields._InitPos_k__BackingField;
        *(_QWORD *)(v34 + 48) = 0LL;
        *(_BYTE *)(v34 + 40) = 0;
        *(_DWORD *)(v34 + 60) = InitPos_k__BackingField;
        if ( !*(_QWORD *)v17 )
          goto LABEL_54;
        v46 = *(_QWORD *)(*(_QWORD *)v17 + 32LL);
        if ( !v46 )
          goto LABEL_54;
        if ( (unsigned int)v28 >= *(_DWORD *)(v46 + 24) )
          goto LABEL_55;
        v47 = *(_QWORD *)(v46 + 8 * v28 + 32);
        if ( !v47 )
          goto LABEL_54;
        v48 = *(_QWORD *)(v47 + 24);
        if ( !v48 )
          goto LABEL_54;
        if ( v31 >= *(unsigned int *)(v48 + 24) )
          goto LABEL_55;
        *(_DWORD *)(v48 + 4 * v31 + 32) = *(_DWORD *)(v34 + 16);
        if ( !*(_QWORD *)v17 )
          goto LABEL_54;
        v49 = *(_DWORD **)(*(_QWORD *)v17 + 16LL);
        if ( !v49 )
          goto LABEL_54;
        UserId = (PartyListViewItem_o *)sub_B2C41C(v34, *(_QWORD *)(*(_QWORD *)v49 + 64LL));
        if ( !UserId )
        {
          v59 = sub_B2C454(0LL);
          sub_B2C400(v59, 0LL);
        }
        if ( (unsigned int)(v32 + v31) >= v49[6] )
          goto LABEL_55;
        v56 = &v49[2 * v32 + 2 * (int)v31];
        *((_QWORD *)v56 + 4) = v34;
        sub_B2C2F8((BattleServantConfConponent_o *)(v56 + 8), (System_Int32_array **)v34, v50, v51, v52, v53, v54, v55);
        ++v31;
      }
      v3 = v61;
      v26 = v62;
      max_length = v61->max_length;
      v25 = v63 + v31;
      if ( v62 >= max_length )
        return v60;
    }
LABEL_55:
    v58 = sub_B2C460(UserId);
    sub_B2C400(v58, 0LL);
  }
  return v60;
}


void __fastcall WaveBattlePartyOrganizationMenu__Hide(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v3);
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
    sub_B2C434(friendshipUpItemUseButton, method);
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
    sub_B2C434(0LL, v3);
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
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w20
  int32_t questId; // w21
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v13; // [xsp+0h] [xbp-30h] BYREF
  QuestHintEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_41873E9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_QuestHintMaster___, isEvery);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v5);
    this = (WaveBattlePartyOrganizationMenu_o *)sub_B2C35C(&DataManager_TypeInfo, v6);
    byte_41873E9 = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  *isEvery = 0;
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_21;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestHintMaster___);
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
    this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( this )
    {
      if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &v13, questId, questPhase, 0LL) )
        return 0;
      this = (WaveBattlePartyOrganizationMenu_o *)v13;
      if ( v13 )
      {
        *isEvery = QuestPhaseEntity__getHintOpenType(v13, 0LL) == 0;
        this = (WaveBattlePartyOrganizationMenu_o *)v13;
        if ( v13 )
        {
          HintMessage = QuestPhaseEntity__getHintMessage(v13, 0LL);
          return !System_String__IsNullOrEmpty(HintMessage, 0LL);
        }
      }
    }
LABEL_21:
    sub_B2C434(this, isEvery);
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

  if ( (byte_41873EF & 1) == 0 )
  {
    sub_B2C35C(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__, method);
    byte_41873EF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
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

  if ( (byte_41873F2 & 1) == 0 )
  {
    sub_B2C35C(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__, method);
    byte_41873F2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
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

  if ( (byte_41873F1 & 1) == 0 )
  {
    sub_B2C35C(&Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__, method);
    byte_41873F1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
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
  __int64 v9; // x1
  FriendshipUpItemUseItem_o *friendshipUpItemUseButton; // x0
  bool v11; // w1
  PartyOrganizationUtility_c *v12; // x0

  if ( (byte_41873F5 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationUtility_TypeInfo, method);
    sub_B2C35C(&Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__, v3);
    byte_41873F5 = 1;
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
    v6 = (_QWORD *)sub_B2C364(Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_B2C340(v6, v6[3]);
  if ( !Int )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    v12 = PartyOrganizationUtility_TypeInfo;
    if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
      v12 = PartyOrganizationUtility_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v12->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 1, 0LL);
    friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
    if ( friendshipUpItemUseButton )
    {
      v11 = 1;
      goto LABEL_19;
    }
LABEL_20:
    sub_B2C434(friendshipUpItemUseButton, v9);
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
  v11 = 0;
LABEL_19:
  FriendshipUpItemUseItem__ChangeButtonState(friendshipUpItemUseButton, v11, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickHintDialogButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_41873F3 & 1) == 0 )
  {
    sub_B2C35C(&Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__, method);
    byte_41873F3 = 1;
  }
  v3 = Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__;
  if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B2C364(Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
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

  if ( (byte_41873EE & 1) == 0 )
  {
    sub_B2C35C(&Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__, method);
    byte_41873EE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
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

  if ( (byte_41873F0 & 1) == 0 )
  {
    sub_B2C35C(&Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__, method);
    byte_41873F0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
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
  WaveBattleWaveInfoListManager_CallbackFunc_o *v32; // x25
  DataManager_o *Instance; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x5
  struct DeckServant_o *deckInfo; // x8
  UISprite_o *classInfoSpriteOrganization; // x21
  const MethodInfo *v38; // x2
  char v39; // w21
  int32_t questId; // w22
  int32_t v41; // w22
  int32_t v42; // w20
  QuestHintDialogOpenManager_c *v43; // x0
  char v44; // w20
  System_Action_o *v45; // x20
  QuestHintDialogOpenManager_c *v46; // x0
  System_String_o *v47; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *equipName; // [xsp+8h] [xbp-58h] BYREF
  __int64 maxLv; // [xsp+10h] [xbp-50h] BYREF
  int32_t genderImageId; // [xsp+18h] [xbp-48h] BYREF
  bool isEvery; // [xsp+1Ch] [xbp-44h] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_41873E8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, deckEntity);
    sub_B2C35C(&AtlasManager_TypeInfo, v13);
    sub_B2C35C(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEquipMaster___, v15);
    sub_B2C35C(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__, v16);
    sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v19);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v20);
    sub_B2C35C(&Method_WaveBattlePartyOrganizationMenu_EndOpen__, v21);
    sub_B2C35C(&Method_WaveBattlePartyOrganizationMenu_OnSelectWavePartyList__, v22);
    sub_B2C35C(&StringLiteral_17146/*"buttontxt_formation_20"*/, v23);
    byte_41873E8 = 1;
  }
  entity = 0LL;
  isEvery = 0;
  genderImageId = 0;
  equipName = 0LL;
  maxLv = 0LL;
  v47 = 0LL;
  if ( !this->fields.state )
  {
    this->fields.questRestrictionInfo = questRestrictionInfo;
    p_questRestrictionInfo = &this->fields.questRestrictionInfo;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
      (System_Int32_array **)questRestrictionInfo,
      (System_String_array **)questRestrictionInfo,
      *(System_String_array ***)&waveCount,
      (System_Boolean_array **)callback,
      (System_Int32_array **)method,
      v6,
      v7);
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    waveInfoListManager = this->fields.waveInfoListManager;
    v32 = (WaveBattleWaveInfoListManager_CallbackFunc_o *)sub_B2C42C(WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
    WaveBattleWaveInfoListManager_CallbackFunc___ctor(
      v32,
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
        v32,
        v35);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEquipMaster___);
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
                     (const MethodInfo_24E4354 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__) )
              {
                Instance = (DataManager_o *)entity;
                if ( !entity )
                  goto LABEL_68;
                UserEquipEntity__getEquipInfo(
                  (UserEquipEntity_o *)entity,
                  (int32_t *)&maxLv + 1,
                  (int32_t *)&maxLv,
                  &equipName,
                  &v47,
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
                (System_String_o *)StringLiteral_17146/*"buttontxt_formation_20"*/,
                0LL);
              Instance = (DataManager_o *)WaveBattlePartyOrganizationMenu__IsHintDialog(this, &isEvery, v38);
              if ( this->fields.hintDialogButton )
              {
                v39 = (char)Instance;
                Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                              0LL);
                if ( Instance )
                {
                  if ( (v39 & 1) != 0 )
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
                      v41 = (*p_questRestrictionInfo)->fields.questId;
                      if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                      }
                      Instance = (DataManager_o *)QuestHintDialogOpenManager__IsQuestHintOpen(v41, 0LL);
                      if ( ((unsigned __int8)Instance & 1) == 0 )
                      {
                        if ( !*p_questRestrictionInfo )
                          goto LABEL_68;
                        v42 = (*p_questRestrictionInfo)->fields.questId;
                        if ( isEvery )
                        {
                          if ( (WORD1(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                            && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                          }
                          if ( !byte_418526F )
                          {
                            sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, v34);
                            byte_418526F = 1;
                          }
                          v43 = QuestHintDialogOpenManager_TypeInfo;
                          if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                            v43 = QuestHintDialogOpenManager_TypeInfo;
                          }
                          v43->static_fields->temporarilyId = v42;
                        }
                        else
                        {
                          if ( (WORD1(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                            && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                          }
                          if ( !byte_418526F )
                          {
                            sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, v34);
                            byte_418526F = 1;
                          }
                          v46 = QuestHintDialogOpenManager_TypeInfo;
                          if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                            v46 = QuestHintDialogOpenManager_TypeInfo;
                          }
                          v46->static_fields->temporarilyId = v42;
                          if ( !byte_4185066 )
                          {
                            sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, v34);
                            v46 = QuestHintDialogOpenManager_TypeInfo;
                            byte_4185066 = 1;
                          }
                          if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v46);
                            v46 = QuestHintDialogOpenManager_TypeInfo;
                          }
                          QuestHintDialogOpenManager__SetQuestId(v46->static_fields->temporarilyId, 0LL);
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
                  Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                  if ( Instance )
                  {
                    Instance = (DataManager_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(
                                                  (PartyOrganizationUtility_o *)Instance,
                                                  0LL);
                    if ( this->fields.friendshipUpItemUseButton )
                    {
                      v44 = (char)Instance;
                      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                    0LL);
                      if ( Instance )
                      {
                        if ( (v44 & 1) == 0 )
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
                          v45 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                          System_Action___ctor(
                            v45,
                            (Il2CppObject *)this,
                            Method_WaveBattlePartyOrganizationMenu_EndOpen__,
                            0LL);
                          BaseMenu__Open((BaseMenu_o *)this, v45, 0LL);
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
    sub_B2C434(Instance, v34);
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
      sub_B2C434(IsTutorialDataExists, method);
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
    sub_B2C434(0LL, wave);
  WaveBattleWaveInfoListManager__SetScrollPos(waveInfoListManager, wave, method);
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
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w20
  int32_t questId; // w21
  System_String_o *message; // x19
  System_String_o *title; // x20
  int32_t leftIndent; // w21
  QuestPhaseEntity_o *v13; // [xsp+0h] [xbp-30h] BYREF
  QuestHintEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_41873EA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_QuestHintMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    this = (WaveBattlePartyOrganizationMenu_o *)sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_41873EA = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_25;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  message = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestHintMaster___);
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
    this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !this )
      goto LABEL_25;
    if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &v13, questId, questPhase, 0LL) )
    {
      this = (WaveBattlePartyOrganizationMenu_o *)v13;
      if ( !v13 )
        goto LABEL_25;
      this = (WaveBattlePartyOrganizationMenu_o *)QuestPhaseEntity__getHintMessageTitle(v13, 0LL);
      if ( !v13 )
        goto LABEL_25;
      title = (System_String_o *)this;
      this = (WaveBattlePartyOrganizationMenu_o *)QuestPhaseEntity__getHintMessage(v13, 0LL);
      if ( !v13 )
        goto LABEL_25;
      message = (System_String_o *)this;
      leftIndent = QuestPhaseEntity__getHintLeftIndent(v13, 0LL);
    }
    else
    {
      leftIndent = -1;
      title = message;
    }
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
    return;
  this = (WaveBattlePartyOrganizationMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_25:
    sub_B2C434(this, method);
  CommonUI__OpenScrollMessageDialog((CommonUI_o *)this, title, message, leftIndent, 0LL, 0, 1, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo *v13; // x2
  PartyOrganizationUtility_c *v14; // x0
  System_String_o *v15; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *equipName; // [xsp+8h] [xbp-38h] BYREF
  int32_t maxLv; // [xsp+14h] [xbp-2Ch] BYREF
  int32_t genderImageId[2]; // [xsp+18h] [xbp-28h] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_41873EC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEquipMaster___, deckEntity);
    sub_B2C35C(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__, v5);
    sub_B2C35C(&PartyOrganizationUtility_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v9);
    byte_41873EC = 1;
  }
  entity = 0LL;
  *(_QWORD *)genderImageId = 0LL;
  maxLv = 0;
  v15 = 0LL;
  equipName = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !deckEntity )
    goto LABEL_23;
  deckInfo = deckEntity->fields.deckInfo;
  if ( !deckInfo || !Instance )
    goto LABEL_23;
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
         &entity,
         deckInfo->fields.userEquipId,
         (const MethodInfo_24E4354 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_23;
    UserEquipEntity__getEquipInfo(
      (UserEquipEntity_o *)entity,
      genderImageId,
      &maxLv,
      &equipName,
      &v15,
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
  WaveBattleWaveInfoListManager__UpdateWaveServantInfo((WaveBattleWaveInfoListManager_o *)Instance, deckEntity, v13);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  if ( !PartyOrganizationUtility__IsAvailableFriendshipUpItem((PartyOrganizationUtility_o *)Instance, 0LL) )
    return;
  v14 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v14 = PartyOrganizationUtility_TypeInfo;
  }
  Instance = (DataManager_o *)UnityEngine_PlayerPrefs__GetInt(
                                v14->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE,
                                0,
                                0LL);
  if ( !this->fields.friendshipUpItemUseButton )
LABEL_23:
    sub_B2C434(Instance, v11);
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

  if ( (byte_41873E6 & 1) == 0 )
  {
    sub_B2C35C(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo, value);
    byte_41873E6 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationMenu_o *)sub_B2C728(v8);
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

  if ( (byte_41873E7 & 1) == 0 )
  {
    sub_B2C35C(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo, value);
    byte_41873E7 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationMenu_o *)sub_B2C728(v8);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4185561 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v10);
    byte_4185561 = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v15);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_B2C300(this, v12, callback, object);
}


void __fastcall WaveBattlePartyOrganizationMenu_CallbackFunc__EndInvoke(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&n, *(_QWORD *)&m);
      if ( (sub_B2C38C(v25) & 1) == 0 )
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
      v27 = sub_B2C384(v25);
      v28 = sub_B2C788(v25);
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
            v21 = sub_AC5258(v24, v32, v33, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B2C40C(v20, v25);
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
            v19 = sub_AC5258(v24, class_0, v12, v14);
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