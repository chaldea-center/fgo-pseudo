void __fastcall WaveBattlePartyOrganizationMenu___ctor(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4350100 & 1) == 0 )
  {
    sub_B70694(&BaseMenu_TypeInfo);
    byte_4350100 = 1;
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

  if ( (byte_43500FD & 1) == 0 )
  {
    sub_B70694(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B70694(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B70694(&TutorialFlag_TypeInfo);
    byte_43500FD = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_29045252(102, 0LL) )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      v3 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v3 )
        sub_B7076C(0LL, v4);
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

  WaveBattlePartyOrganizationMenu__Close_22114816(this, 0LL, v2);
}


void __fastcall WaveBattlePartyOrganizationMenu__Close_22114816(
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

  if ( (byte_43500F3 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_WaveBattlePartyOrganizationMenu_EndClose__);
    byte_43500F3 = 1;
  }
  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_B7076C(0LL, callback);
  WaveBattleWaveInfoListManager__DestroyList(waveInfoListManager, (const MethodInfo *)callback);
  this->fields.closeCallbackFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.state = 4;
  v12 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
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
    sub_B7076C(0LL, v3);
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
    sub_B70630(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  __int64 UserId; // x0
  __int64 v6; // x1
  PartyListViewItem_o *v7; // x8
  PartyListViewItem_o *v8; // x8
  int64_t userEquipId; // x21
  int32_t v10; // w22
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
  int v27; // w20
  PartyOrganizationListViewItem_o *Member; // x25
  __int64 v29; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v31; // q0
  __int128 v32; // q1
  struct UserServantEntity_o *v33; // x8
  __int64 v34; // x26
  __int64 v35; // x27
  int32_t v36; // w0
  System_Int32_array **EquipList; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  int32_t InitPos_k__BackingField; // w8
  __int64 v53; // x8
  __int64 v54; // x8
  __int64 v55; // x8
  _DWORD *v56; // x25
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  _DWORD *v63; // x0
  __int64 v65; // x0
  __int64 v66; // x0
  UserEventDeckEntity_o *v67; // [xsp+0h] [xbp-D0h]
  PartyListViewItem_array *v68; // [xsp+8h] [xbp-C8h]
  signed int v69; // [xsp+10h] [xbp-C0h]
  int v70; // [xsp+1Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72[2]; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_43500F5 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&DeckServantData_TypeInfo);
    sub_B70694(&DeckServant_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&UserEventDeckEntity_TypeInfo);
    byte_43500F5 = 1;
  }
  memset(&v72[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v4 = sub_B70764(UserEventDeckEntity_TypeInfo);
  UserEventDeckEntity___ctor((UserEventDeckEntity_o *)v4, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v4 )
    goto LABEL_65;
  *(_QWORD *)(v4 + 16) = UserId;
  if ( !deckItemList )
    goto LABEL_65;
  if ( !deckItemList->max_length )
    goto LABEL_66;
  v7 = deckItemList->m_Items[0];
  if ( !v7 )
    goto LABEL_65;
  *(_DWORD *)(v4 + 24) = v7->fields.id;
  if ( !deckItemList->max_length )
    goto LABEL_66;
  UserId = (__int64)deckItemList->m_Items[0];
  if ( !UserId )
    goto LABEL_65;
  *(_DWORD *)(v4 + 28) = PartyListViewItem__get_DeckNum((PartyListViewItem_o *)UserId, 0LL);
  UserId = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    UserId = (__int64)BalanceConfig_TypeInfo;
  }
  if ( !deckItemList->max_length )
    goto LABEL_66;
  v8 = deckItemList->m_Items[0];
  v67 = (UserEventDeckEntity_o *)v4;
  if ( !v8 )
LABEL_65:
    sub_B7076C(UserId, v6);
  userEquipId = v8->fields.userEquipId;
  v10 = *(_DWORD *)(*(_QWORD *)(UserId + 184) + 160LL);
  v11 = (DeckServant_o *)sub_B70764(DeckServant_TypeInfo);
  DeckServant___ctor_16958604(v11, deckItemList->max_length, v10, userEquipId, 0LL);
  *(_QWORD *)(v4 + 32) = v11;
  v12 = v4 + 32;
  sub_B70630((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)v11, v13, v14, v15, v16, v17, v18);
  max_length = deckItemList->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    v21 = 0;
    v68 = deckItemList;
    while ( v21 < max_length )
    {
      if ( !*(_QWORD *)v12 )
        goto LABEL_65;
      v22 = *(_QWORD *)(*(_QWORD *)v12 + 32LL);
      if ( !v22 )
        goto LABEL_65;
      v23 = (int)v21;
      if ( v21 >= *(_DWORD *)(v22 + 24) )
        break;
      v24 = *(_QWORD *)(v22 + 8LL * (int)v21 + 32);
      if ( !v24 )
        goto LABEL_65;
      v25 = deckItemList->m_Items[v21];
      v26 = 0LL;
      v69 = v21 + 1;
      *(_DWORD *)(v24 + 16) = v21 + 1;
      v70 = v20;
      v27 = v20;
      while ( 1 )
      {
        UserId = (__int64)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          UserId = (__int64)BalanceConfig_TypeInfo;
        }
        if ( (__int64)v26 >= *(int *)(*(_QWORD *)(UserId + 184) + 160LL) )
          break;
        if ( !v25 )
          goto LABEL_65;
        Member = PartyListViewItem__GetMember(v25, v26, 0LL);
        v29 = sub_B70764(DeckServantData_TypeInfo);
        DeckServantData___ctor((DeckServantData_o *)v29, 0LL);
        if ( !v29 )
          goto LABEL_65;
        *(_DWORD *)(v29 + 16) = v27 + v26 + 1;
        if ( !Member )
          goto LABEL_65;
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
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v72, 0LL, 0LL);
          v32 = *(_OWORD *)&v72[0].fields.currentCryptoKey;
          v31 = *(_OWORD *)&v72[0].fields.fakeValue;
        }
        *(_OWORD *)&v72[1].fields.currentCryptoKey = v32;
        *(_OWORD *)&v72[1].fields.fakeValue = v31;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v71 = v72[1];
        *(_QWORD *)(v29 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v71, 0LL);
        v33 = Member->fields.userServantEntity;
        if ( v33 )
        {
          v35 = *(_QWORD *)&v33->fields.svtId.fields.currentCryptoKey;
          v34 = *(_QWORD *)&v33->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v73.fields.currentCryptoKey = v35;
          *(_QWORD *)&v73.fields.fakeValue = v34;
          v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v73, 0LL);
        }
        else
        {
          v36 = 0;
        }
        *(_DWORD *)(v29 + 32) = v36;
        EquipList = (System_Int32_array **)PartyOrganizationListViewItem__GetEquipList(Member, 0LL);
        *(_QWORD *)(v29 + 40) = EquipList;
        sub_B70630((BattleServantConfConponent_o *)(v29 + 40), EquipList, v38, v39, v40, v41, v42, v43);
        v44 = sub_B706AC(int___TypeInfo, 1LL);
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(Member, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(EquipSvtId, 0LL);
        if ( !v44 )
          goto LABEL_65;
        if ( !*(_DWORD *)(v44 + 24) )
          goto LABEL_66;
        *(_DWORD *)(v44 + 32) = UserId;
        *(_QWORD *)(v29 + 48) = v44;
        sub_B70630((BattleServantConfConponent_o *)(v29 + 48), (System_Int32_array **)v44, v46, v47, v48, v49, v50, v51);
        InitPos_k__BackingField = Member->fields._InitPos_k__BackingField;
        *(_QWORD *)(v29 + 64) = 0LL;
        *(_BYTE *)(v29 + 56) = 0;
        *(_DWORD *)(v29 + 76) = InitPos_k__BackingField;
        if ( !*(_QWORD *)v12 )
          goto LABEL_65;
        v53 = *(_QWORD *)(*(_QWORD *)v12 + 32LL);
        if ( !v53 )
          goto LABEL_65;
        if ( (unsigned int)v23 >= *(_DWORD *)(v53 + 24) )
          goto LABEL_66;
        v54 = *(_QWORD *)(v53 + 8 * v23 + 32);
        if ( !v54 )
          goto LABEL_65;
        v55 = *(_QWORD *)(v54 + 24);
        if ( !v55 )
          goto LABEL_65;
        if ( v26 >= *(unsigned int *)(v55 + 24) )
          goto LABEL_66;
        *(_DWORD *)(v55 + 4 * v26 + 32) = *(_DWORD *)(v29 + 16);
        if ( !*(_QWORD *)v12 )
          goto LABEL_65;
        v56 = *(_DWORD **)(*(_QWORD *)v12 + 16LL);
        if ( !v56 )
          goto LABEL_65;
        UserId = sub_B70754(v29, *(_QWORD *)(*(_QWORD *)v56 + 64LL));
        if ( !UserId )
        {
          v66 = sub_B7078C();
          sub_B70738(v66, 0LL);
        }
        if ( (unsigned int)(v27 + v26) >= v56[6] )
          goto LABEL_66;
        v63 = &v56[2 * v27 + 2 * (int)v26];
        *((_QWORD *)v63 + 4) = v29;
        sub_B70630((BattleServantConfConponent_o *)(v63 + 8), (System_Int32_array **)v29, v57, v58, v59, v60, v61, v62);
        ++v26;
      }
      deckItemList = v68;
      v21 = v69;
      max_length = v68->max_length;
      v20 = v70 + v26;
      if ( v69 >= max_length )
        return v67;
    }
LABEL_66:
    v65 = sub_B70798(UserId);
    sub_B70738(v65, 0LL);
  }
  return v67;
}


void __fastcall WaveBattlePartyOrganizationMenu__Hide(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7076C(0LL, v3);
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
    sub_B7076C(0LL, v3);
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
  if ( (byte_43500F1 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_B70694(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    this = (WaveBattlePartyOrganizationMenu_o *)sub_B70694(&DataManager_TypeInfo);
    byte_43500F1 = 1;
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
  this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_QuestHintMaster___);
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
    this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
    sub_B7076C(this, isEvery);
  }
  if ( !entity )
    goto LABEL_21;
  *isEvery = entity->fields.openType == 0;
  return 1;
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickApplyInterruptionDeckButton(
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


void __fastcall WaveBattlePartyOrganizationMenu__OnClickAutoOrganization(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x0

  if ( (byte_43500F7 & 1) == 0 )
  {
    sub_B70694(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__);
    byte_43500F7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B7069C(Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__);
    v4 = (System_Reflection_MethodBase_o *)sub_B70678(v3, v3[3]);
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

  if ( (byte_43500FA & 1) == 0 )
  {
    sub_B70694(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__);
    byte_43500FA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B7069C(Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__);
    v4 = (System_Reflection_MethodBase_o *)sub_B70678(v3, v3[3]);
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
      WaveBattlePartyOrganizationMenu_CallbackFunc__Invoke(callbackFunc, 7, 1, 1, 0LL);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickClassInfo(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x0

  if ( (byte_43500F9 & 1) == 0 )
  {
    sub_B70694(&Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__);
    byte_43500F9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B7069C(Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__);
    v4 = (System_Reflection_MethodBase_o *)sub_B70678(v3, v3[3]);
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

  if ( (byte_43500FE & 1) == 0 )
  {
    sub_B70694(&PartyOrganizationUtility_TypeInfo);
    sub_B70694(&Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__);
    byte_43500FE = 1;
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
    v5 = (_QWORD *)sub_B7069C(Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_B70678(v5, v5[3]);
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
    sub_B7076C(friendshipUpItemUseButton, v8);
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

  if ( (byte_43500FB & 1) == 0 )
  {
    sub_B70694(&Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__);
    byte_43500FB = 1;
  }
  v3 = Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__;
  if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B7069C(Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_B70678(v3, v3[3]);
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

  if ( (byte_43500F6 & 1) == 0 )
  {
    sub_B70694(&Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__);
    byte_43500F6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B7069C(Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__);
    v4 = (System_Reflection_MethodBase_o *)sub_B70678(v3, v3[3]);
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

  if ( (byte_43500F8 & 1) == 0 )
  {
    sub_B70694(&Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__);
    byte_43500F8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B7069C(Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__);
    v4 = (System_Reflection_MethodBase_o *)sub_B70678(v3, v3[3]);
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
        int32_t restartWave,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x25
  WaveBattleWaveInfoListManager_CallbackFunc_o *v22; // x26
  DataManager_o *Instance; // x0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x6
  struct DeckServant_o *deckInfo; // x8
  UISprite_o *classInfoSpriteOrganization; // x21
  const MethodInfo *v28; // x2
  char v29; // w21
  int32_t questId; // w22
  int32_t v31; // w22
  int32_t v32; // w20
  QuestHintDialogOpenManager_c *v33; // x0
  _BOOL4 isInterruption; // w20
  UISprite_o *applyInterruptionDeckSprite; // x20
  System_Action_o *v36; // x20
  QuestHintDialogOpenManager_c *v37; // x0
  System_String_o *detail; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *equipName; // [xsp+10h] [xbp-60h] BYREF
  __int64 maxLv; // [xsp+18h] [xbp-58h] BYREF
  int32_t genderImageId; // [xsp+20h] [xbp-50h] BYREF
  bool isEvery; // [xsp+24h] [xbp-4Ch] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_43500F0 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_B70694(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__);
    sub_B70694(&QuestHintDialogOpenManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_WaveBattlePartyOrganizationMenu_EndOpen__);
    sub_B70694(&Method_WaveBattlePartyOrganizationMenu_OnSelectWavePartyList__);
    sub_B70694(&StringLiteral_17405/*"buttontxt_formation_21"*/);
    sub_B70694(&StringLiteral_17400/*"buttontxt_battlerestart"*/);
    sub_B70694(&StringLiteral_17404/*"buttontxt_formation_20"*/);
    byte_43500F0 = 1;
  }
  entity = 0LL;
  isEvery = 0;
  genderImageId = 0;
  equipName = 0LL;
  maxLv = 0LL;
  detail = 0LL;
  if ( !this->fields.state )
  {
    this->fields.questRestrictionInfo = questRestrictionInfo;
    p_questRestrictionInfo = &this->fields.questRestrictionInfo;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
      (System_Int32_array **)questRestrictionInfo,
      (System_String_array **)questRestrictionInfo,
      *(System_String_array ***)&waveCount,
      (System_Boolean_array **)callback,
      *(System_Int32_array ***)&restartWave,
      (System_Int32_array *)method,
      v7);
    this->fields.callbackFunc = callback;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    waveInfoListManager = this->fields.waveInfoListManager;
    v22 = (WaveBattleWaveInfoListManager_CallbackFunc_o *)sub_B70764(WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
    WaveBattleWaveInfoListManager_CallbackFunc___ctor(
      v22,
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
        v22,
        restartWave,
        v25);
      this->fields.isInterruption = restartWave > 0;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEquipMaster___);
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
                     (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__) )
              {
                Instance = (DataManager_o *)entity;
                if ( !entity )
                  goto LABEL_71;
                UserEquipEntity__getEquipInfo(
                  (UserEquipEntity_o *)entity,
                  (int32_t *)&maxLv + 1,
                  (int32_t *)&maxLv,
                  &equipName,
                  &detail,
                  &genderImageId,
                  0LL);
                Instance = (DataManager_o *)this->fields.masterEquipIcon;
                if ( !Instance )
                  goto LABEL_71;
                ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, genderImageId, 0LL);
                Instance = (DataManager_o *)this->fields.masterEquipButton;
                if ( !Instance )
                  goto LABEL_71;
                UICommonButton__SetEnable((UICommonButton_o *)Instance, !this->fields.isInterruption, 0LL);
              }
              classInfoSpriteOrganization = this->fields.classInfoSpriteOrganization;
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetPartyOrganizationImage(
                classInfoSpriteOrganization,
                (System_String_o *)StringLiteral_17404/*"buttontxt_formation_20"*/,
                0LL);
              Instance = (DataManager_o *)WaveBattlePartyOrganizationMenu__IsHintDialog(this, &isEvery, v28);
              if ( this->fields.hintDialogButton )
              {
                v29 = (char)Instance;
                Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                              0LL);
                if ( Instance )
                {
                  if ( (v29 & 1) != 0 )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                    if ( !*p_questRestrictionInfo )
                      goto LABEL_71;
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
                        goto LABEL_71;
                      v31 = (*p_questRestrictionInfo)->fields.questId;
                      if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                      }
                      Instance = (DataManager_o *)QuestHintDialogOpenManager__IsQuestHintOpen(v31, 0LL);
                      if ( ((unsigned __int8)Instance & 1) == 0 )
                      {
                        if ( !*p_questRestrictionInfo )
                          goto LABEL_71;
                        v32 = (*p_questRestrictionInfo)->fields.questId;
                        if ( isEvery )
                        {
                          if ( (WORD1(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                            && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                          }
                          if ( !byte_43501A8 )
                          {
                            sub_B70694(&QuestHintDialogOpenManager_TypeInfo);
                            byte_43501A8 = 1;
                          }
                          v33 = QuestHintDialogOpenManager_TypeInfo;
                          if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                            v33 = QuestHintDialogOpenManager_TypeInfo;
                          }
                          v33->static_fields->temporarilyId = v32;
                        }
                        else
                        {
                          if ( (WORD1(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                            && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                          }
                          if ( !byte_43501A8 )
                          {
                            sub_B70694(&QuestHintDialogOpenManager_TypeInfo);
                            byte_43501A8 = 1;
                          }
                          v37 = QuestHintDialogOpenManager_TypeInfo;
                          if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                            v37 = QuestHintDialogOpenManager_TypeInfo;
                          }
                          v37->static_fields->temporarilyId = v32;
                          if ( !byte_434F5DD )
                          {
                            sub_B70694(&QuestHintDialogOpenManager_TypeInfo);
                            v37 = QuestHintDialogOpenManager_TypeInfo;
                            byte_434F5DD = 1;
                          }
                          if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v37);
                            v37 = QuestHintDialogOpenManager_TypeInfo;
                          }
                          QuestHintDialogOpenManager__SetQuestId(v37->static_fields->temporarilyId, 0LL);
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
                  WaveBattlePartyOrganizationMenu__SetFriendshipUpItemButton(this, v24);
                  Instance = (DataManager_o *)this->fields.applyInterruptionDeckButton;
                  if ( Instance )
                  {
                    isInterruption = this->fields.isInterruption;
                    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Instance,
                                                  0LL);
                    if ( Instance )
                    {
                      if ( !isInterruption )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                        goto LABEL_54;
                      }
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                      applyInterruptionDeckSprite = this->fields.applyInterruptionDeckSprite;
                      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !AtlasManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                      }
                      AtlasManager__SetPartyOrganizationImage(
                        applyInterruptionDeckSprite,
                        (System_String_o *)StringLiteral_17405/*"buttontxt_formation_21"*/,
                        0LL);
                      Instance = (DataManager_o *)this->fields.applyInterruptionDeckSprite;
                      if ( Instance )
                      {
                        ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
                          Instance,
                          Instance->klass[2]._1.interopData);
                        AtlasManager__SetPartyOrganizationImage(
                          this->fields.battleStartSprite,
                          (System_String_o *)StringLiteral_17400/*"buttontxt_battlerestart"*/,
                          0LL);
                        Instance = (DataManager_o *)this->fields.battleStartSprite;
                        if ( Instance )
                        {
                          Instance = (DataManager_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)Instance,
                                                        0LL);
                          if ( Instance )
                          {
                            v44.fields.y = -2.0;
                            v44.fields.x = 0.0;
                            v44.fields.z = 0.0;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v44, 0LL);
                            Instance = (DataManager_o *)this->fields.battleStartSprite;
                            if ( Instance )
                            {
                              ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
                                Instance,
                                Instance->klass[2]._1.interopData);
LABEL_54:
                              this->fields.state = 1;
                              v36 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                              System_Action___ctor(
                                v36,
                                (Il2CppObject *)this,
                                Method_WaveBattlePartyOrganizationMenu_EndOpen__,
                                0LL);
                              BaseMenu__Open((BaseMenu_o *)this, v36, 0LL);
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
LABEL_71:
    sub_B7076C(Instance, v24);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OpenTutorial(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Action_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  struct QuestRestrictionInfo_o *v7; // x8

  if ( (byte_43500FC & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_WaveBattlePartyOrganizationMenu_CheckFriendshipUpItemTutorial__);
    byte_43500FC = 1;
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
    v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v4,
      (Il2CppObject *)this,
      Method_WaveBattlePartyOrganizationMenu_CheckFriendshipUpItemTutorial__,
      0LL);
    v7 = this->fields.questRestrictionInfo;
    if ( !v7 )
      sub_B7076C(v5, v6);
    EventTutorialMaster__CheckTutorial(0, 45, v4, v7->fields.questId, v7->fields.questPhase, 0, 0, 0LL);
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
  PartyOrganizationUtility_o *friendshipUpItemUseButton; // x0
  __int64 v4; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int InterruptionUseFriendshipUpItemId; // w20
  bool v7; // w1
  bool v8; // w2
  char v9; // w20
  char v10; // w20

  if ( (byte_43500FF & 1) == 0 )
  {
    sub_B70694(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B70694(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_43500FF = 1;
  }
  if ( this->fields.isInterruption )
  {
    if ( (WORD1(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    friendshipUpItemUseButton = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_42;
    if ( !friendshipUpItemUseButton )
      goto LABEL_42;
    InterruptionUseFriendshipUpItemId = PartyOrganizationUtility__GetInterruptionUseFriendshipUpItemId(
                                          friendshipUpItemUseButton,
                                          questRestrictionInfo->fields.questId,
                                          questRestrictionInfo->fields.questPhase,
                                          0LL);
    friendshipUpItemUseButton = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !friendshipUpItemUseButton )
      goto LABEL_42;
    if ( PartyOrganizationUtility__IsEnableFriendshipUpItem(
           friendshipUpItemUseButton,
           InterruptionUseFriendshipUpItemId,
           0LL) )
    {
      friendshipUpItemUseButton = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
      if ( friendshipUpItemUseButton )
      {
        friendshipUpItemUseButton = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)friendshipUpItemUseButton,
                                                                    0LL);
        if ( friendshipUpItemUseButton )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)friendshipUpItemUseButton, 1, 0LL);
          friendshipUpItemUseButton = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
          if ( friendshipUpItemUseButton )
          {
            FriendshipUpItemUseItem__SetInit((FriendshipUpItemUseItem_o *)friendshipUpItemUseButton, 0LL);
            friendshipUpItemUseButton = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
            if ( friendshipUpItemUseButton )
            {
              v7 = 1;
              v8 = 1;
LABEL_40:
              FriendshipUpItemUseItem__SetWaveBattleRestart(
                (FriendshipUpItemUseItem_o *)friendshipUpItemUseButton,
                v7,
                v8,
                0LL);
              return;
            }
          }
        }
      }
      goto LABEL_42;
    }
    if ( InterruptionUseFriendshipUpItemId >= 1 )
    {
      friendshipUpItemUseButton = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
      if ( friendshipUpItemUseButton )
      {
        friendshipUpItemUseButton = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)friendshipUpItemUseButton,
                                                                    0LL);
        if ( friendshipUpItemUseButton )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)friendshipUpItemUseButton, 1, 0LL);
          friendshipUpItemUseButton = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
          if ( friendshipUpItemUseButton )
          {
            v7 = 1;
            v8 = 0;
            goto LABEL_40;
          }
        }
      }
LABEL_42:
      sub_B7076C(friendshipUpItemUseButton, v4);
    }
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    friendshipUpItemUseButton = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !friendshipUpItemUseButton )
      goto LABEL_42;
    friendshipUpItemUseButton = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(
                                                                friendshipUpItemUseButton,
                                                                0LL);
    if ( !this->fields.friendshipUpItemUseButton )
      goto LABEL_42;
    v10 = (char)friendshipUpItemUseButton;
    friendshipUpItemUseButton = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                0LL);
    if ( !friendshipUpItemUseButton )
      goto LABEL_42;
    if ( (v10 & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)friendshipUpItemUseButton, 1, 0LL);
      friendshipUpItemUseButton = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
      if ( friendshipUpItemUseButton )
      {
        FriendshipUpItemUseItem__SetInit((FriendshipUpItemUseItem_o *)friendshipUpItemUseButton, 0LL);
        friendshipUpItemUseButton = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
        if ( friendshipUpItemUseButton )
        {
          v8 = 1;
          v7 = 0;
          goto LABEL_40;
        }
      }
      goto LABEL_42;
    }
  }
  else
  {
    if ( (WORD1(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    friendshipUpItemUseButton = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !friendshipUpItemUseButton )
      goto LABEL_42;
    friendshipUpItemUseButton = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(
                                                                friendshipUpItemUseButton,
                                                                0LL);
    if ( !this->fields.friendshipUpItemUseButton )
      goto LABEL_42;
    v9 = (char)friendshipUpItemUseButton;
    friendshipUpItemUseButton = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                0LL);
    if ( !friendshipUpItemUseButton )
      goto LABEL_42;
    if ( (v9 & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)friendshipUpItemUseButton, 1, 0LL);
      friendshipUpItemUseButton = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
      if ( friendshipUpItemUseButton )
      {
        FriendshipUpItemUseItem__SetInit((FriendshipUpItemUseItem_o *)friendshipUpItemUseButton, 0LL);
        return;
      }
      goto LABEL_42;
    }
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)friendshipUpItemUseButton, 0, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__SetWave(
        WaveBattlePartyOrganizationMenu_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_B7076C(0LL, wave);
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
  if ( (byte_43500F2 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_B70694(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (WaveBattlePartyOrganizationMenu_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_43500F2 = 1;
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
  this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_QuestHintMaster___);
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
    this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
  this = (WaveBattlePartyOrganizationMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_25:
    sub_B7076C(this, method);
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
  const MethodInfo *v8; // x3
  bool *p_isInterruption; // x21
  PartyOrganizationUtility_c *v10; // x0
  System_String_o *v11; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *equipName; // [xsp+8h] [xbp-38h] BYREF
  int32_t maxLv; // [xsp+14h] [xbp-2Ch] BYREF
  int32_t genderImageId[2]; // [xsp+18h] [xbp-28h] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_43500F4 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_B70694(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__);
    sub_B70694(&PartyOrganizationUtility_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B70694(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_43500F4 = 1;
  }
  entity = 0LL;
  *(_QWORD *)genderImageId = 0LL;
  maxLv = 0;
  v11 = 0LL;
  equipName = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !deckEntity )
    goto LABEL_26;
  deckInfo = deckEntity->fields.deckInfo;
  if ( !deckInfo || !Instance )
    goto LABEL_26;
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
         &entity,
         deckInfo->fields.userEquipId,
         (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_26;
    UserEquipEntity__getEquipInfo(
      (UserEquipEntity_o *)entity,
      genderImageId,
      &maxLv,
      &equipName,
      &v11,
      &genderImageId[1],
      0LL);
    Instance = (DataManager_o *)this->fields.masterEquipIcon;
    if ( !Instance )
      goto LABEL_26;
    ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, genderImageId[1], 0LL);
    Instance = (DataManager_o *)this->fields.masterEquipButton;
    if ( !Instance )
      goto LABEL_26;
    p_isInterruption = &this->fields.isInterruption;
    UICommonButton__SetEnable((UICommonButton_o *)Instance, !this->fields.isInterruption, 0LL);
  }
  else
  {
    p_isInterruption = &this->fields.isInterruption;
  }
  Instance = (DataManager_o *)this->fields.waveInfoListManager;
  if ( !Instance )
    goto LABEL_26;
  WaveBattleWaveInfoListManager__UpdateWaveServantInfo(
    (WaveBattleWaveInfoListManager_o *)Instance,
    deckEntity,
    *p_isInterruption,
    v8);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
LABEL_26:
    sub_B7076C(Instance, v6);
  if ( PartyOrganizationUtility__IsAvailableFriendshipUpItem((PartyOrganizationUtility_o *)Instance, 0LL)
    && !*p_isInterruption )
  {
    v10 = PartyOrganizationUtility_TypeInfo;
    if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
      v10 = PartyOrganizationUtility_TypeInfo;
    }
    Instance = (DataManager_o *)UnityEngine_PlayerPrefs__GetInt(
                                  v10->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE,
                                  0,
                                  0LL);
    if ( this->fields.friendshipUpItemUseButton )
    {
      FriendshipUpItemUseItem__ChangeButtonState(this->fields.friendshipUpItemUseButton, (_DWORD)Instance != 0, 0LL);
      return;
    }
    goto LABEL_26;
  }
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

  if ( (byte_43500EE & 1) == 0 )
  {
    sub_B70694(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo);
    byte_43500EE = 1;
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
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationMenu_o *)sub_B70A60(v8);
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

  if ( (byte_43500EF & 1) == 0 )
  {
    sub_B70694(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo);
    byte_43500EF = 1;
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
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationMenu_o *)sub_B70A60(v8);
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
  sub_B70630(
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
  __int64 v10; // x2
  __int64 v11; // x2
  __int64 v13[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v14; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v15; // [xsp+28h] [xbp-28h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-24h] BYREF

  v16 = result;
  v14 = m;
  v15 = n;
  if ( (byte_434FCC2 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo);
    byte_434FCC2 = 1;
  }
  v13[3] = 0LL;
  v13[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v16, *(_QWORD *)&n);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10);
  v13[2] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v11);
  return (System_IAsyncResult_o *)sub_B70638(this, v13, callback, object);
}


void __fastcall WaveBattlePartyOrganizationMenu_CallbackFunc__EndInvoke(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
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
        sub_B70750(*(_QWORD *)&v22->fields.extra_arg, *(_QWORD *)&result);
      if ( (sub_B706C4(v24) & 1) == 0 )
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
      v26 = sub_B706BC(v24);
      v27 = sub_B70AC0(v24);
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
            v20 = sub_B08590(v23, v30, v31);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B70744(v19, v24);
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
            v18 = sub_B08590(v23, class_0, v12);
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