void __fastcall WaveBattlePartyOrganizationMenu___ctor(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B122C7 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseMenu_TypeInfo, method, v2);
    byte_4B122C7 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B122C4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method, v2);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v4, v5);
    byte_4B122C4 = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
    if ( TutorialFlag__Get_38402052(102, 0LL) )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        sub_1BCAA3C(0LL, v7);
      if ( PartyOrganizationUtility__IsAvailableFriendshipUpItem((PartyOrganizationUtility_o *)Instance, 0LL) )
        EventTutorialMaster__CheckTutorial(0, 71, 0LL, 0, 0, 0, 0, 0LL);
    }
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__Close(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationMenu__Close_33039516(this, 0LL, v2);
}


void __fastcall WaveBattlePartyOrganizationMenu__Close_33039516(
        WaveBattlePartyOrganizationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Action_o *v17; // x20

  if ( (byte_4B122BA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_WaveBattlePartyOrganizationMenu_EndClose__, v5, v6);
    byte_4B122BA = 1;
  }
  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1BCAA3C(0LL, callback);
  WaveBattleWaveInfoListManager__DestroyList(waveInfoListManager, (const MethodInfo *)callback);
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.state = 4;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_WaveBattlePartyOrganizationMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v17, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__Display(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__EndClose(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
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
  UserEventDeckEntity_o *v19; // x20
  __int64 v20; // x1
  __int64 UserId; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  PartyListViewItem_o *v25; // x8
  int64_t userEquipId; // x21
  int32_t v27; // w22
  DeckServant_o *v28; // x0
  il2cpp_array_size_t max_length; // w1
  int64_t v30; // x23
  UserEventDeckEntity_o *v31; // x21
  PartyListViewItem_array *v32; // x20
  PartyOrganizationUtility_o *p_deckInfo; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int v40; // w8
  int v41; // w10
  signed int v42; // w11
  _DWORD *data; // x8
  __int64 v44; // x29
  __int64 v45; // x8
  PartyListViewItem_o *v46; // x23
  unsigned __int64 v47; // x22
  int v48; // w20
  PartyOrganizationListViewItem_o *Member; // x25
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  int64_t v53; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v55; // q0
  __int64 v56; // x1
  struct UserServantEntity_o *v57; // x8
  __int64 v58; // x26
  __int64 v59; // x27
  int32_t v60; // w0
  System_Int64_array *EquipList; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int32_t InitPos_k__BackingField; // w8
  PartyOrganizationUtility_c *klass; // x8
  _DWORD *v78; // x9
  __int64 v79; // x9
  __int64 v80; // x9
  const char *name; // x25
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  const char *v88; // x0
  __int64 v90; // x0
  UserEventDeckEntity_o *v91; // [xsp+0h] [xbp-E0h]
  PartyListViewItem_array *v92; // [xsp+8h] [xbp-D8h]
  int v93; // [xsp+10h] [xbp-D0h]
  int v94; // [xsp+1Ch] [xbp-C4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96[2]; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16

  if ( (byte_4B122BC & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, deckItemList, method);
    sub_1BCA7E0(&DeckServantData_TypeInfo, v5, v6);
    sub_1BCA7E0(&DeckServant_TypeInfo, v7, v8);
    sub_1BCA7E0(&int___TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16);
    sub_1BCA7E0(&UserEventDeckEntity_TypeInfo, v17, v18);
    byte_4B122BC = 1;
  }
  memset(&v96[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v19 = (UserEventDeckEntity_o *)sub_1BCAA2C(UserEventDeckEntity_TypeInfo, deckItemList, method, v3);
  UserEventDeckEntity___ctor(v19, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v20);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v19 )
    goto LABEL_55;
  v19->fields.userId = UserId;
  if ( !deckItemList )
    goto LABEL_55;
  if ( !deckItemList->max_length )
    goto LABEL_56;
  UserId = (__int64)deckItemList->m_Items[0];
  if ( !UserId )
    goto LABEL_55;
  v19->fields.eventId = *(_QWORD *)(UserId + 128);
  v19->fields.deckNo = PartyListViewItem__get_DeckNum((PartyListViewItem_o *)UserId, 0LL);
  UserId = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v22);
    UserId = (__int64)BalanceConfig_TypeInfo;
  }
  if ( !deckItemList->max_length )
    goto LABEL_56;
  v25 = deckItemList->m_Items[0];
  if ( !v25 )
LABEL_55:
    sub_1BCAA3C(UserId, v22);
  userEquipId = v25->fields.userEquipId;
  v27 = *(_DWORD *)(*(_QWORD *)(UserId + 184) + 160LL);
  v28 = (DeckServant_o *)sub_1BCAA2C(DeckServant_TypeInfo, v22, v23, v24);
  max_length = deckItemList->max_length;
  v92 = deckItemList;
  v30 = (int64_t)v28;
  DeckServant___ctor_39590128(v28, max_length, v27, userEquipId, 0LL);
  v91 = v19;
  v31 = v19;
  v32 = v92;
  v31->fields.deckInfo = (struct DeckServant_o *)v30;
  p_deckInfo = (PartyOrganizationUtility_o *)&v31->fields.deckInfo;
  sub_1BCA784(p_deckInfo, v30, v34, v35, v36, v37, v38, v39);
  v40 = v92->max_length;
  if ( v40 >= 1 )
  {
    v41 = 0;
    v42 = 0;
    while ( v42 < (unsigned int)v40 )
    {
      if ( !p_deckInfo->klass )
        goto LABEL_55;
      data = p_deckInfo->klass->_1.byval_arg.data;
      if ( !data )
        goto LABEL_55;
      v44 = v42;
      if ( (unsigned int)v42 >= data[6] )
        break;
      v45 = *(_QWORD *)&data[2 * v42 + 8];
      if ( !v45 )
        goto LABEL_55;
      v46 = v32->m_Items[v42];
      v47 = 0LL;
      v93 = v42 + 1;
      *(_DWORD *)(v45 + 16) = v42 + 1;
      v94 = v41;
      v48 = v41;
      while ( 1 )
      {
        UserId = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v22);
          UserId = (__int64)BalanceConfig_TypeInfo;
        }
        if ( (__int64)v47 >= *(int *)(*(_QWORD *)(UserId + 184) + 160LL) )
          break;
        if ( !v46 )
          goto LABEL_55;
        Member = PartyListViewItem__GetMember(v46, v47, 0LL);
        v53 = sub_1BCAA2C(DeckServantData_TypeInfo, v50, v51, v52);
        DeckServantData___ctor((DeckServantData_o *)v53, 0LL);
        if ( !v53 )
          goto LABEL_55;
        *(_DWORD *)(v53 + 16) = v48 + v47 + 1;
        if ( !Member )
          goto LABEL_55;
        userServantEntity = Member->fields.userServantEntity;
        if ( userServantEntity )
        {
          v55 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v96[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v96[1].fields.fakeValue = v55;
        }
        else
        {
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v96, 0LL, 0LL);
          v96[1] = v96[0];
        }
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
        v95 = v96[1];
        *(_QWORD *)(v53 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v95, 0LL);
        v57 = Member->fields.userServantEntity;
        if ( v57 )
        {
          v59 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
          v58 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v56);
          *(_QWORD *)&v97.fields.currentCryptoKey = v59;
          *(_QWORD *)&v97.fields.fakeValue = v58;
          v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v97, 0LL);
        }
        else
        {
          v60 = 0;
        }
        *(_DWORD *)(v53 + 32) = v60;
        EquipList = PartyOrganizationListViewItem__GetEquipList(Member, 0LL);
        *(_QWORD *)(v53 + 40) = EquipList;
        sub_1BCA784((PartyOrganizationUtility_o *)(v53 + 40), (int64_t)EquipList, v62, v63, v64, v65, v66, v67);
        v68 = sub_1BCA888(int___TypeInfo, 1LL);
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(Member, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            *(_QWORD *)&EquipSvtId.fields.fakeValue);
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(EquipSvtId, 0LL);
        if ( !v68 )
          goto LABEL_55;
        if ( !*(_DWORD *)(v68 + 24) )
          goto LABEL_56;
        *(_DWORD *)(v68 + 32) = UserId;
        *(_QWORD *)(v53 + 48) = v68;
        sub_1BCA784((PartyOrganizationUtility_o *)(v53 + 48), v68, v70, v71, v72, v73, v74, v75);
        InitPos_k__BackingField = Member->fields._InitPos_k__BackingField;
        *(_QWORD *)(v53 + 64) = 0LL;
        *(_BYTE *)(v53 + 56) = 0;
        *(_DWORD *)(v53 + 76) = InitPos_k__BackingField;
        klass = p_deckInfo->klass;
        if ( !p_deckInfo->klass )
          goto LABEL_55;
        v78 = klass->_1.byval_arg.data;
        if ( !v78 )
          goto LABEL_55;
        if ( (unsigned int)v44 >= v78[6] )
          goto LABEL_56;
        v79 = *(_QWORD *)&v78[2 * v44 + 8];
        if ( !v79 )
          goto LABEL_55;
        v80 = *(_QWORD *)(v79 + 24);
        if ( !v80 )
          goto LABEL_55;
        if ( v47 >= *(unsigned int *)(v80 + 24) )
          goto LABEL_56;
        *(_DWORD *)(v80 + 4 * v47 + 32) = *(_DWORD *)(v53 + 16);
        name = klass->_1.name;
        if ( !name )
          goto LABEL_55;
        UserId = sub_1BCA91C(v53, *(_QWORD *)(*(_QWORD *)name + 64LL));
        if ( !UserId )
        {
          v90 = sub_1BCAA60();
          sub_1BCA908(v90, 0LL);
        }
        if ( (unsigned int)(v48 + v47) >= *((_DWORD *)name + 6) )
          goto LABEL_56;
        v88 = &name[8 * v48 + 8 * (int)v47];
        *((_QWORD *)v88 + 4) = v53;
        sub_1BCA784((PartyOrganizationUtility_o *)(v88 + 32), v53, v82, v83, v84, v85, v86, v87);
        ++v47;
      }
      v32 = v92;
      v42 = v93;
      v40 = v92->max_length;
      v41 = v94 + v47;
      if ( v93 >= v40 )
        return v91;
    }
LABEL_56:
    sub_1BCAA44(UserId, v22);
  }
  return v91;
}


void __fastcall WaveBattlePartyOrganizationMenu__Hide(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v3);
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
    sub_1BCAA3C(0LL, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}


bool __fastcall WaveBattlePartyOrganizationMenu__IsHintDialog(
        WaveBattlePartyOrganizationMenu_o *this,
        bool *isEvery,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationMenu_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w20
  int32_t questId; // w21
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v15; // [xsp+0h] [xbp-40h] BYREF
  QuestHintEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4B122B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestHintMaster___, isEvery, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v5, v6);
    this = (WaveBattlePartyOrganizationMenu_o *)sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    byte_4B122B8 = 1;
  }
  v15 = 0LL;
  entity = 0LL;
  *isEvery = 0;
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_19;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isEvery);
  this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !this )
    goto LABEL_19;
  this = (WaveBattlePartyOrganizationMenu_o *)QuestHintMaster__TryGetEntity(
                                                (QuestHintMaster_o *)this,
                                                &entity,
                                                questId,
                                                questPhase,
                                                0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isEvery);
    this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( this )
    {
      if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &v15, questId, questPhase, 0LL) )
        return 0;
      this = (WaveBattlePartyOrganizationMenu_o *)v15;
      if ( v15 )
      {
        *isEvery = QuestPhaseEntity__getHintOpenType(v15, 0LL) == 0;
        this = (WaveBattlePartyOrganizationMenu_o *)v15;
        if ( v15 )
        {
          HintMessage = QuestPhaseEntity__getHintMessage(v15, 0LL);
          return !System_String__IsNullOrEmpty(HintMessage, 0LL);
        }
      }
    }
LABEL_19:
    sub_1BCAA3C(this, isEvery);
  }
  if ( !entity )
    goto LABEL_19;
  *isEvery = entity->fields.openType == 0;
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4B122BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__, method, v2);
    byte_4B122BE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4B122C1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__, method, v2);
    byte_4B122C1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4B122C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__, method, v2);
    byte_4B122C0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PartyOrganizationUtility_c *v6; // x0
  int32_t Int; // w0
  _QWORD *v8; // x8
  int32_t v9; // w20
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  PartyOrganizationUtility_c *v12; // x0
  __int64 v13; // x1
  FriendshipUpItemUseItem_o *friendshipUpItemUseButton; // x0
  bool v15; // w1
  __int64 v16; // x1
  PartyOrganizationUtility_c *v17; // x0

  if ( (byte_4B122C5 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__, v4, v5);
    byte_4B122C5 = 1;
  }
  v6 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo, method);
    v6 = PartyOrganizationUtility_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v6->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  v8 = Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__;
  v9 = Int;
  if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__);
  v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  if ( !v9 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    v17 = PartyOrganizationUtility_TypeInfo;
    if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo, v16);
      v17 = PartyOrganizationUtility_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v17->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 1, 0LL);
    friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
    if ( friendshipUpItemUseButton )
    {
      v15 = 1;
      goto LABEL_16;
    }
LABEL_17:
    sub_1BCAA3C(friendshipUpItemUseButton, v13);
  }
  OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0LL);
  v12 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo, v11);
    v12 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v12->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
  if ( !friendshipUpItemUseButton )
    goto LABEL_17;
  v15 = 0;
LABEL_16:
  FriendshipUpItemUseItem__ChangeButtonState(friendshipUpItemUseButton, v15, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickHintDialogButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B122C2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__, method, v2);
    byte_4B122C2 = 1;
  }
  v4 = Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__;
  if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  WaveBattlePartyOrganizationMenu__ShowHintDialogButton(this, v6);
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickMasterFormation(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4B122BD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__, method, v2);
    byte_4B122BD = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4B122BF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__, method, v2);
    byte_4B122BF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
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
  PartyListViewItem_o *v7; // x7
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
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x25
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  WaveBattleWaveInfoListManager_CallbackFunc_o *v47; // x26
  const MethodInfo *v48; // x3
  DataManager_o *Instance; // x0
  __int64 v50; // x1
  const MethodInfo *v51; // x6
  struct DeckServant_o *deckInfo; // x8
  UISprite_o *classInfoSpriteOrganization; // x21
  const MethodInfo *v54; // x2
  char v55; // w21
  struct QuestRestrictionInfo_o *v56; // x8
  int32_t questPhase; // w21
  int32_t questId; // w22
  struct QuestRestrictionInfo_o *v59; // x8
  int32_t v60; // w21
  int32_t v61; // w22
  struct QuestRestrictionInfo_o *v62; // x8
  _BOOL4 v63; // w24
  int32_t v64; // w21
  int32_t v65; // w22
  _BOOL4 isInterruption; // w20
  __int64 v67; // x1
  UISprite_o *applyInterruptionDeckSprite; // x20
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  System_Action_o *v72; // x20
  System_String_o *v73; // [xsp+0h] [xbp-70h] BYREF
  System_String_o *equipName; // [xsp+8h] [xbp-68h] BYREF
  __int64 maxLv; // [xsp+10h] [xbp-60h] BYREF
  int32_t genderImageId; // [xsp+18h] [xbp-58h] BYREF
  bool isEvery; // [xsp+1Ch] [xbp-54h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B122B7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, deckEntity, questRestrictionInfo);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEquipMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__, v20, v21);
    sub_1BCA7E0(&QuestHintDialogOpenManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    sub_1BCA7E0(&Method_WaveBattlePartyOrganizationMenu_EndOpen__, v26, v27);
    sub_1BCA7E0(&Method_WaveBattlePartyOrganizationMenu_OnSelectWavePartyList__, v28, v29);
    sub_1BCA7E0(&StringLiteral_17851/*"buttontxt_formation_21"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_17845/*"buttontxt_battlerestart"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_17850/*"buttontxt_formation_20"*/, v34, v35);
    byte_4B122B7 = 1;
  }
  entity = 0LL;
  isEvery = 0;
  genderImageId = 0;
  equipName = 0LL;
  maxLv = 0LL;
  v73 = 0LL;
  if ( !this->fields.state )
  {
    this->fields.questRestrictionInfo = questRestrictionInfo;
    p_questRestrictionInfo = &this->fields.questRestrictionInfo;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo,
      (int64_t)questRestrictionInfo,
      (int64_t)questRestrictionInfo,
      waveCount,
      (System_String_o *)callback,
      *(BattleSetupInfo_o **)&restartWave,
      (FollowerInfo_o *)method,
      v7);
    this->fields.callbackFunc = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    waveInfoListManager = this->fields.waveInfoListManager;
    v47 = (WaveBattleWaveInfoListManager_CallbackFunc_o *)sub_1BCAA2C(
                                                            WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo,
                                                            v44,
                                                            v45,
                                                            v46);
    WaveBattleWaveInfoListManager_CallbackFunc___ctor(
      v47,
      (Il2CppObject *)this,
      Method_WaveBattlePartyOrganizationMenu_OnSelectWavePartyList__,
      v48);
    if ( waveInfoListManager )
    {
      WaveBattleWaveInfoListManager__CreateList(
        waveInfoListManager,
        deckEntity,
        questRestrictionInfo,
        waveCount,
        v47,
        restartWave,
        v51);
      this->fields.restartWave = restartWave;
      this->fields.isInterruption = restartWave > 0;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEquipMaster___);
        if ( deckEntity )
        {
          deckInfo = deckEntity->fields.deckInfo;
          if ( deckInfo )
          {
            if ( Instance )
            {
              if ( DataMasterBase_object__object__long___TryGetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     &entity,
                     deckInfo->fields.userEquipId,
                     (const MethodInfo_31B3040 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__) )
              {
                Instance = (DataManager_o *)entity;
                if ( !entity )
                  goto LABEL_51;
                UserEquipEntity__getEquipInfo(
                  (UserEquipEntity_o *)entity,
                  (int32_t *)&maxLv + 1,
                  (int32_t *)&maxLv,
                  &equipName,
                  &v73,
                  &genderImageId,
                  0LL);
                Instance = (DataManager_o *)this->fields.masterEquipIcon;
                if ( !Instance )
                  goto LABEL_51;
                ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, genderImageId, 0LL);
                Instance = (DataManager_o *)this->fields.masterEquipButton;
                if ( this->fields.isInterruption )
                {
                  v50 = this->fields.restartWave == 1;
                  if ( !Instance )
                    goto LABEL_51;
                }
                else
                {
                  v50 = 1LL;
                  if ( !Instance )
                    goto LABEL_51;
                }
                UICommonButton__SetEnable((UICommonButton_o *)Instance, v50, 0LL);
              }
              classInfoSpriteOrganization = this->fields.classInfoSpriteOrganization;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v50);
              AtlasManager__SetPartyOrganizationImage(
                classInfoSpriteOrganization,
                (System_String_o *)StringLiteral_17850/*"buttontxt_formation_20"*/,
                0LL);
              Instance = (DataManager_o *)WaveBattlePartyOrganizationMenu__IsHintDialog(this, &isEvery, v54);
              if ( this->fields.hintDialogButton )
              {
                v55 = (char)Instance;
                Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                              0LL);
                if ( Instance )
                {
                  if ( (v55 & 1) != 0 )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                    v56 = *p_questRestrictionInfo;
                    if ( !*p_questRestrictionInfo )
                      goto LABEL_51;
                    questId = v56->fields.questId;
                    questPhase = v56->fields.questPhase;
                    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v50);
                    Instance = (DataManager_o *)QuestHintDialogOpenManager__IsSettingTemporarilyInfo(
                                                  questId,
                                                  questPhase,
                                                  0LL);
                    if ( ((unsigned __int8)Instance & 1) == 0 )
                    {
                      v59 = *p_questRestrictionInfo;
                      if ( !*p_questRestrictionInfo )
                        goto LABEL_51;
                      v61 = v59->fields.questId;
                      v60 = v59->fields.questPhase;
                      if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v50);
                      Instance = (DataManager_o *)QuestHintDialogOpenManager__IsQuestHintOpen(v61, v60, 0LL);
                      if ( ((unsigned __int8)Instance & 1) == 0 )
                      {
                        v62 = *p_questRestrictionInfo;
                        if ( !*p_questRestrictionInfo )
                          goto LABEL_51;
                        v63 = isEvery;
                        v65 = v62->fields.questId;
                        v64 = v62->fields.questPhase;
                        if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v50);
                        QuestHintDialogOpenManager__SetTemporarilyInfo(v65, v64, 0LL);
                        if ( !v63 )
                        {
                          if ( !*p_questRestrictionInfo )
                            goto LABEL_51;
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
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                  }
                  WaveBattlePartyOrganizationMenu__SetFriendshipUpItemButton(this, (const MethodInfo *)v50);
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
                        goto LABEL_49;
                      }
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                      applyInterruptionDeckSprite = this->fields.applyInterruptionDeckSprite;
                      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v67);
                      AtlasManager__SetPartyOrganizationImage(
                        applyInterruptionDeckSprite,
                        (System_String_o *)StringLiteral_17851/*"buttontxt_formation_21"*/,
                        0LL);
                      Instance = (DataManager_o *)this->fields.applyInterruptionDeckSprite;
                      if ( Instance )
                      {
                        ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
                          Instance,
                          Instance->klass[2]._1.interopData);
                        AtlasManager__SetPartyOrganizationImage(
                          this->fields.battleStartSprite,
                          (System_String_o *)StringLiteral_17845/*"buttontxt_battlerestart"*/,
                          0LL);
                        Instance = (DataManager_o *)this->fields.battleStartSprite;
                        if ( Instance )
                        {
                          Instance = (DataManager_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)Instance,
                                                        0LL);
                          if ( Instance )
                          {
                            v79.fields.x = 0.0;
                            v79.fields.y = -2.0;
                            v79.fields.z = 0.0;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v79, 0LL);
                            Instance = (DataManager_o *)this->fields.battleStartSprite;
                            if ( Instance )
                            {
                              ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
                                Instance,
                                Instance->klass[2]._1.interopData);
LABEL_49:
                              this->fields.state = 1;
                              v72 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v69, v70, v71);
                              System_Action___ctor(
                                v72,
                                (Il2CppObject *)this,
                                Method_WaveBattlePartyOrganizationMenu_EndOpen__,
                                0LL);
                              BaseMenu__Open((BaseMenu_o *)this, v72, 0LL);
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
LABEL_51:
    sub_1BCAA3C(Instance, v50);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OpenTutorial(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 v7; // x2
  __int64 v8; // x3
  System_Action_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  struct QuestRestrictionInfo_o *v12; // x8

  if ( (byte_4B122C3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WaveBattlePartyOrganizationMenu_CheckFriendshipUpItemTutorial__, v4, v5);
    byte_4B122C3 = 1;
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
    v9 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v7, v8);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_WaveBattlePartyOrganizationMenu_CheckFriendshipUpItemTutorial__,
      0LL);
    v12 = this->fields.questRestrictionInfo;
    if ( !v12 )
      sub_1BCAA3C(v10, v11);
    EventTutorialMaster__CheckTutorial(0, 45, v9, v12->fields.questId, v12->fields.questPhase, 0, 0, 0LL);
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
  __int64 v2; // x2
  _BOOL4 isInterruption; // w20
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v6; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int InterruptionUseFriendshipUpItemId; // w20
  bool v9; // w1
  bool v10; // w2
  char v11; // w20
  char v12; // w20

  if ( (byte_4B122C6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method, v2);
    byte_4B122C6 = 1;
  }
  isInterruption = this->fields.isInterruption;
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( isInterruption )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_33;
    if ( !Instance )
      goto LABEL_33;
    InterruptionUseFriendshipUpItemId = PartyOrganizationUtility__GetInterruptionUseFriendshipUpItemId(
                                          Instance,
                                          questRestrictionInfo->fields.questId,
                                          questRestrictionInfo->fields.questPhase,
                                          0LL);
    Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    if ( PartyOrganizationUtility__IsEnableFriendshipUpItem(Instance, InterruptionUseFriendshipUpItemId, 0LL) )
    {
      Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
      if ( Instance )
      {
        Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)Instance,
                                                   0LL);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
          if ( Instance )
          {
            FriendshipUpItemUseItem__SetInit((FriendshipUpItemUseItem_o *)Instance, 0LL);
            Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
            if ( Instance )
            {
              v9 = 1;
              v10 = 1;
LABEL_31:
              FriendshipUpItemUseItem__SetWaveBattleRestart((FriendshipUpItemUseItem_o *)Instance, v9, v10, 0LL);
              return;
            }
          }
        }
      }
      goto LABEL_33;
    }
    if ( InterruptionUseFriendshipUpItemId >= 1 )
    {
      Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
      if ( Instance )
      {
        Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)Instance,
                                                   0LL);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
          if ( Instance )
          {
            v9 = 1;
            v10 = 0;
            goto LABEL_31;
          }
        }
      }
LABEL_33:
      sub_1BCAA3C(Instance, v6);
    }
    Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(Instance, 0LL);
    if ( !this->fields.friendshipUpItemUseButton )
      goto LABEL_33;
    v12 = (char)Instance;
    Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                               0LL);
    if ( !Instance )
      goto LABEL_33;
    if ( (v12 & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
      if ( Instance )
      {
        FriendshipUpItemUseItem__SetInit((FriendshipUpItemUseItem_o *)Instance, 0LL);
        Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
        if ( Instance )
        {
          v10 = 1;
          v9 = 0;
          goto LABEL_31;
        }
      }
      goto LABEL_33;
    }
  }
  else
  {
    if ( !Instance )
      goto LABEL_33;
    Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(Instance, 0LL);
    if ( !this->fields.friendshipUpItemUseButton )
      goto LABEL_33;
    v11 = (char)Instance;
    Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                               0LL);
    if ( !Instance )
      goto LABEL_33;
    if ( (v11 & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
      if ( Instance )
      {
        FriendshipUpItemUseItem__SetInit((FriendshipUpItemUseItem_o *)Instance, 0LL);
        return;
      }
      goto LABEL_33;
    }
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationMenu__SetWave(
        WaveBattlePartyOrganizationMenu_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1BCAA3C(0LL, *(_QWORD *)&wave);
  WaveBattleWaveInfoListManager__SetScrollPos(waveInfoListManager, wave, method);
}


void __fastcall WaveBattlePartyOrganizationMenu__ShowHintDialogButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WaveBattlePartyOrganizationMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w20
  int32_t questId; // w21
  System_String_o *message; // x19
  System_String_o *title; // x20
  int32_t leftIndent; // w21
  QuestPhaseEntity_o *v18; // [xsp+0h] [xbp-40h] BYREF
  QuestHintEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_4B122B9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestHintMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    this = (WaveBattlePartyOrganizationMenu_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B122B9 = 1;
  }
  v18 = 0LL;
  entity = 0LL;
  questRestrictionInfo = v3->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_23;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  message = (System_String_o *)StringLiteral_1/*""*/;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !this )
    goto LABEL_23;
  this = (WaveBattlePartyOrganizationMenu_o *)QuestHintMaster__TryGetEntity(
                                                (QuestHintMaster_o *)this,
                                                &entity,
                                                questId,
                                                questPhase,
                                                0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_23;
    title = entity->fields.title;
    message = entity->fields.message;
    leftIndent = entity->fields.leftIndent;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !this )
      goto LABEL_23;
    if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &v18, questId, questPhase, 0LL) )
    {
      this = (WaveBattlePartyOrganizationMenu_o *)v18;
      if ( !v18 )
        goto LABEL_23;
      this = (WaveBattlePartyOrganizationMenu_o *)QuestPhaseEntity__getHintMessageTitle(v18, 0LL);
      if ( !v18 )
        goto LABEL_23;
      title = (System_String_o *)this;
      this = (WaveBattlePartyOrganizationMenu_o *)QuestPhaseEntity__getHintMessage(v18, 0LL);
      if ( !v18 )
        goto LABEL_23;
      message = (System_String_o *)this;
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
  this = (WaveBattlePartyOrganizationMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_23:
    sub_1BCAA3C(this, method);
  CommonUI__OpenScrollMessageDialog((CommonUI_o *)this, title, message, leftIndent, 0LL, 0, 1, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__UpdateInfo(
        WaveBattlePartyOrganizationMenu_o *this,
        UserEventDeckEntity_o *deckEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo *v16; // x3
  __int64 v17; // x1
  PartyOrganizationUtility_c *v18; // x0
  System_String_o *v19; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *equipName; // [xsp+8h] [xbp-48h] BYREF
  int32_t maxLv; // [xsp+14h] [xbp-3Ch] BYREF
  int32_t genderImageId[2]; // [xsp+18h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4B122BB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEquipMaster___, deckEntity, method);
    sub_1BCA7E0(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__, v5, v6);
    sub_1BCA7E0(&PartyOrganizationUtility_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v11, v12);
    byte_4B122BB = 1;
  }
  entity = 0LL;
  *(_QWORD *)genderImageId = 0LL;
  maxLv = 0;
  v19 = 0LL;
  equipName = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !deckEntity )
    goto LABEL_24;
  deckInfo = deckEntity->fields.deckInfo;
  if ( !deckInfo || !Instance )
    goto LABEL_24;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         deckInfo->fields.userEquipId,
         (const MethodInfo_31B3040 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_24;
    UserEquipEntity__getEquipInfo(
      (UserEquipEntity_o *)entity,
      genderImageId,
      &maxLv,
      &equipName,
      &v19,
      &genderImageId[1],
      0LL);
    Instance = (DataManager_o *)this->fields.masterEquipIcon;
    if ( !Instance )
      goto LABEL_24;
    ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, genderImageId[1], 0LL);
    Instance = (DataManager_o *)this->fields.masterEquipButton;
    if ( this->fields.isInterruption )
    {
      v14 = this->fields.restartWave == 1;
      if ( !Instance )
        goto LABEL_24;
    }
    else
    {
      v14 = 1LL;
      if ( !Instance )
        goto LABEL_24;
    }
    UICommonButton__SetEnable((UICommonButton_o *)Instance, v14, 0LL);
  }
  Instance = (DataManager_o *)this->fields.waveInfoListManager;
  if ( !Instance )
    goto LABEL_24;
  WaveBattleWaveInfoListManager__UpdateWaveServantInfo(
    (WaveBattleWaveInfoListManager_o *)Instance,
    deckEntity,
    this->fields.isInterruption,
    v16);
  Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  if ( PartyOrganizationUtility__IsAvailableFriendshipUpItem((PartyOrganizationUtility_o *)Instance, 0LL)
    && !this->fields.isInterruption )
  {
    v18 = PartyOrganizationUtility_TypeInfo;
    if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo, v17);
      v18 = PartyOrganizationUtility_TypeInfo;
    }
    Instance = (DataManager_o *)UnityEngine_PlayerPrefs__GetInt(
                                  v18->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE,
                                  0,
                                  0LL);
    if ( this->fields.friendshipUpItemUseButton )
    {
      FriendshipUpItemUseItem__ChangeButtonState(this->fields.friendshipUpItemUseButton, (_DWORD)Instance != 0, 0LL);
      return;
    }
LABEL_24:
    sub_1BCAA3C(Instance, v14);
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

  if ( (byte_4B122B5 & 1) == 0 )
  {
    sub_1BCA7E0(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B122B5 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationMenu_o *)sub_1BCACFC(v8);
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

  if ( (byte_4B122B6 & 1) == 0 )
  {
    sub_1BCA7E0(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B122B6 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationMenu_o *)sub_1BCACFC(v8);
  WaveBattlePartyOrganizationMenu__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationMenu_CallbackFunc___ctor(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A07CC8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A07C68;
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
  _QWORD v13[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v14; // [xsp+10h] [xbp-60h]
  int32_t v15; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v16; // [xsp+38h] [xbp-38h] BYREF
  int32_t v17; // [xsp+3Ch] [xbp-34h] BYREF

  v16 = n;
  v17 = result;
  v15 = m;
  if ( (byte_4B122C8 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&n);
    sub_1BCA7E0(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v10, v11);
    byte_4B122C8 = 1;
  }
  v14 = 0u;
  v13[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v17);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  *(_QWORD *)&v14 = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v13, callback, object);
}


void __fastcall WaveBattlePartyOrganizationMenu_CallbackFunc__EndInvoke(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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