void __fastcall WaveBattlePartyOrganizationMenu___ctor(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_49F861A & 1) == 0 )
  {
    sub_1B640C8(&BaseMenu_TypeInfo, method);
    byte_49F861A = 1;
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

  if ( (byte_49F8617 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method);
    sub_1B640C8(&TutorialFlag_TypeInfo, v3);
    byte_49F8617 = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_37376848(102, 0LL) )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        sub_1B64324(0LL);
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

  WaveBattlePartyOrganizationMenu__Close_32117444(this, 0LL, v2);
}


void __fastcall WaveBattlePartyOrganizationMenu__Close_32117444(
        WaveBattlePartyOrganizationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x20

  if ( (byte_49F860D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_WaveBattlePartyOrganizationMenu_EndClose__, v5);
    byte_49F860D = 1;
  }
  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1B64324(0LL);
  WaveBattleWaveInfoListManager__DestroyList(waveInfoListManager, (const MethodInfo *)callback);
  this->fields.closeCallbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v7, v8);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_WaveBattlePartyOrganizationMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v11, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__Display(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__EndClose(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B6406C(p_closeCallbackFunc, 0, v3, v4);
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
  UserEventDeckEntity_o *v11; // x20
  __int64 UserId; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  PartyListViewItem_o *v15; // x8
  int64_t userEquipId; // x21
  int32_t v17; // w22
  DeckServant_o *v18; // x0
  il2cpp_array_size_t max_length; // w1
  DeckServant_o *v20; // x23
  UserEventDeckEntity_o *v21; // x21
  PartyListViewItem_array *v22; // x20
  ServantStatusBattleListViewItem_o *p_deckInfo; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  int v26; // w8
  int v27; // w10
  signed int v28; // w11
  _DWORD *data; // x8
  __int64 v30; // x29
  __int64 v31; // x8
  PartyListViewItem_o *v32; // x23
  unsigned __int64 v33; // x22
  int v34; // w20
  PartyOrganizationListViewItem_o *Member; // x25
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v40; // q0
  struct UserServantEntity_o *v41; // x8
  __int64 v42; // x26
  __int64 v43; // x27
  int32_t v44; // w0
  System_Int64_array *EquipList; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t InitPos_k__BackingField; // w8
  ServantStatusBattleListViewItem_c *klass; // x8
  _DWORD *v54; // x9
  __int64 v55; // x9
  __int64 v56; // x9
  const char *name; // x25
  int32_t v58; // w2
  int32_t v59; // w3
  const char *v60; // x0
  __int64 v62; // x0
  UserEventDeckEntity_o *v63; // [xsp+0h] [xbp-E0h]
  PartyListViewItem_array *v64; // [xsp+8h] [xbp-D8h]
  int v65; // [xsp+10h] [xbp-D0h]
  int v66; // [xsp+1Ch] [xbp-C4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68[2]; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_49F860F & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, deckItemList);
    sub_1B640C8(&DeckServantData_TypeInfo, v4);
    sub_1B640C8(&DeckServant_TypeInfo, v5);
    sub_1B640C8(&int___TypeInfo, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1B640C8(&UserEventDeckEntity_TypeInfo, v10);
    byte_49F860F = 1;
  }
  memset(&v68[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v11 = (UserEventDeckEntity_o *)sub_1B64314(UserEventDeckEntity_TypeInfo, deckItemList, method);
  UserEventDeckEntity___ctor(v11, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v11 )
    goto LABEL_55;
  v11->fields.userId = UserId;
  if ( !deckItemList )
    goto LABEL_55;
  if ( !deckItemList->max_length )
    goto LABEL_56;
  UserId = (__int64)deckItemList->m_Items[0];
  if ( !UserId )
    goto LABEL_55;
  v11->fields.eventId = *(_QWORD *)(UserId + 128);
  v11->fields.deckNo = PartyListViewItem__get_DeckNum((PartyListViewItem_o *)UserId, 0LL);
  UserId = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    UserId = (__int64)BalanceConfig_TypeInfo;
  }
  if ( !deckItemList->max_length )
    goto LABEL_56;
  v15 = deckItemList->m_Items[0];
  if ( !v15 )
LABEL_55:
    sub_1B64324(UserId);
  userEquipId = v15->fields.userEquipId;
  v17 = *(_DWORD *)(*(_QWORD *)(UserId + 184) + 160LL);
  v18 = (DeckServant_o *)sub_1B64314(DeckServant_TypeInfo, v13, v14);
  max_length = deckItemList->max_length;
  v64 = deckItemList;
  v20 = v18;
  DeckServant___ctor_38554896(v18, max_length, v17, userEquipId, 0LL);
  v63 = v11;
  v21 = v11;
  v22 = v64;
  v21->fields.deckInfo = v20;
  p_deckInfo = (ServantStatusBattleListViewItem_o *)&v21->fields.deckInfo;
  sub_1B6406C(p_deckInfo, (int32_t)v20, v24, v25);
  v26 = v64->max_length;
  if ( v26 >= 1 )
  {
    v27 = 0;
    v28 = 0;
    while ( v28 < (unsigned int)v26 )
    {
      if ( !p_deckInfo->klass )
        goto LABEL_55;
      data = p_deckInfo->klass->_1.byval_arg.data;
      if ( !data )
        goto LABEL_55;
      v30 = v28;
      if ( (unsigned int)v28 >= data[6] )
        break;
      v31 = *(_QWORD *)&data[2 * v28 + 8];
      if ( !v31 )
        goto LABEL_55;
      v32 = v22->m_Items[v28];
      v33 = 0LL;
      v65 = v28 + 1;
      *(_DWORD *)(v31 + 16) = v28 + 1;
      v66 = v27;
      v34 = v27;
      while ( 1 )
      {
        UserId = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          UserId = (__int64)BalanceConfig_TypeInfo;
        }
        if ( (__int64)v33 >= *(int *)(*(_QWORD *)(UserId + 184) + 160LL) )
          break;
        if ( !v32 )
          goto LABEL_55;
        Member = PartyListViewItem__GetMember(v32, v33, 0LL);
        v38 = sub_1B64314(DeckServantData_TypeInfo, v36, v37);
        DeckServantData___ctor((DeckServantData_o *)v38, 0LL);
        if ( !v38 )
          goto LABEL_55;
        *(_DWORD *)(v38 + 16) = v34 + v33 + 1;
        if ( !Member )
          goto LABEL_55;
        userServantEntity = Member->fields.userServantEntity;
        if ( userServantEntity )
        {
          v40 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v68[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v68[1].fields.fakeValue = v40;
        }
        else
        {
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v68, 0LL, 0LL);
          v68[1] = v68[0];
        }
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v67 = v68[1];
        *(_QWORD *)(v38 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v67, 0LL);
        v41 = Member->fields.userServantEntity;
        if ( v41 )
        {
          v43 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
          v42 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v69.fields.currentCryptoKey = v43;
          *(_QWORD *)&v69.fields.fakeValue = v42;
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v69, 0LL);
        }
        else
        {
          v44 = 0;
        }
        *(_DWORD *)(v38 + 32) = v44;
        EquipList = PartyOrganizationListViewItem__GetEquipList(Member, 0LL);
        *(_QWORD *)(v38 + 40) = EquipList;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 40), (int32_t)EquipList, v46, v47);
        v48 = sub_1B64170(int___TypeInfo, 1LL);
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(Member, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(EquipSvtId, 0LL);
        if ( !v48 )
          goto LABEL_55;
        if ( !*(_DWORD *)(v48 + 24) )
          goto LABEL_56;
        *(_DWORD *)(v48 + 32) = UserId;
        *(_QWORD *)(v38 + 48) = v48;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 48), v48, v50, v51);
        InitPos_k__BackingField = Member->fields._InitPos_k__BackingField;
        *(_QWORD *)(v38 + 64) = 0LL;
        *(_BYTE *)(v38 + 56) = 0;
        *(_DWORD *)(v38 + 76) = InitPos_k__BackingField;
        klass = p_deckInfo->klass;
        if ( !p_deckInfo->klass )
          goto LABEL_55;
        v54 = klass->_1.byval_arg.data;
        if ( !v54 )
          goto LABEL_55;
        if ( (unsigned int)v30 >= v54[6] )
          goto LABEL_56;
        v55 = *(_QWORD *)&v54[2 * v30 + 8];
        if ( !v55 )
          goto LABEL_55;
        v56 = *(_QWORD *)(v55 + 24);
        if ( !v56 )
          goto LABEL_55;
        if ( v33 >= *(unsigned int *)(v56 + 24) )
          goto LABEL_56;
        *(_DWORD *)(v56 + 4 * v33 + 32) = *(_DWORD *)(v38 + 16);
        name = klass->_1.name;
        if ( !name )
          goto LABEL_55;
        UserId = sub_1B64204(v38, *(_QWORD *)(*(_QWORD *)name + 64LL));
        if ( !UserId )
        {
          v62 = sub_1B64348();
          sub_1B641F0(v62, 0LL);
        }
        if ( (unsigned int)(v34 + v33) >= *((_DWORD *)name + 6) )
          goto LABEL_56;
        v60 = &name[8 * v34 + 8 * (int)v33];
        *((_QWORD *)v60 + 4) = v38;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v60 + 32), v38, v58, v59);
        ++v33;
      }
      v22 = v64;
      v28 = v65;
      v26 = v64->max_length;
      v27 = v66 + v33;
      if ( v65 >= v26 )
        return v63;
    }
LABEL_56:
    sub_1B6432C(UserId, v13);
  }
  return v63;
}


void __fastcall WaveBattlePartyOrganizationMenu__Hide(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
  QuestPhaseEntity_o *v13; // [xsp+0h] [xbp-40h] BYREF
  QuestHintEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_49F860B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_QuestHintMaster___, isEvery);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestPhaseMaster___, v5);
    this = (WaveBattlePartyOrganizationMenu_o *)sub_1B640C8(&DataManager_TypeInfo, v6);
    byte_49F860B = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  *isEvery = 0;
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_19;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestHintMaster___);
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
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
LABEL_19:
    sub_1B64324(this);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_49F8611 & 1) == 0 )
  {
    sub_1B640C8(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__, method);
    byte_49F8611 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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

  if ( (byte_49F8614 & 1) == 0 )
  {
    sub_1B640C8(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__, method);
    byte_49F8614 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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

  if ( (byte_49F8613 & 1) == 0 )
  {
    sub_1B640C8(&Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__, method);
    byte_49F8613 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
  PartyOrganizationUtility_c *v4; // x0
  int32_t Int; // w0
  _QWORD *v6; // x8
  int32_t v7; // w20
  System_Reflection_MethodBase_o *v8; // x0
  PartyOrganizationUtility_c *v9; // x0
  FriendshipUpItemUseItem_o *friendshipUpItemUseButton; // x0
  bool v11; // w1
  PartyOrganizationUtility_c *v12; // x0

  if ( (byte_49F8618 & 1) == 0 )
  {
    sub_1B640C8(&PartyOrganizationUtility_TypeInfo, method);
    sub_1B640C8(&Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__, v3);
    byte_49F8618 = 1;
  }
  v4 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v4 = PartyOrganizationUtility_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  v6 = Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__;
  v7 = Int;
  if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B640E0(Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
  if ( !v7 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    v12 = PartyOrganizationUtility_TypeInfo;
    if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
      v12 = PartyOrganizationUtility_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v12->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 1, 0LL);
    friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
    if ( friendshipUpItemUseButton )
    {
      v11 = 1;
      goto LABEL_16;
    }
LABEL_17:
    sub_1B64324(friendshipUpItemUseButton);
  }
  OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0LL);
  v9 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v9 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v9->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
  if ( !friendshipUpItemUseButton )
    goto LABEL_17;
  v11 = 0;
LABEL_16:
  FriendshipUpItemUseItem__ChangeButtonState(friendshipUpItemUseButton, v11, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickHintDialogButton(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49F8615 & 1) == 0 )
  {
    sub_1B640C8(&Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__, method);
    byte_49F8615 = 1;
  }
  v3 = Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__;
  if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  WaveBattlePartyOrganizationMenu__ShowHintDialogButton(this, v5);
}


void __fastcall WaveBattlePartyOrganizationMenu__OnClickMasterFormation(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct WaveBattlePartyOrganizationMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_49F8610 & 1) == 0 )
  {
    sub_1B640C8(&Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__, method);
    byte_49F8610 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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

  if ( (byte_49F8612 & 1) == 0 )
  {
    sub_1B640C8(&Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__, method);
    byte_49F8612 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x25
  __int64 v28; // x1
  __int64 v29; // x2
  WaveBattleWaveInfoListManager_CallbackFunc_o *v30; // x26
  const MethodInfo *v31; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v33; // x6
  struct DeckServant_o *deckInfo; // x8
  char v35; // w1
  UISprite_o *classInfoSpriteOrganization; // x21
  const MethodInfo *v37; // x2
  char v38; // w21
  int32_t questId; // w22
  const MethodInfo *v40; // x1
  int32_t v41; // w22
  struct QuestRestrictionInfo_o *v42; // x8
  _BOOL4 v43; // w20
  int32_t v44; // w22
  QuestHintDialogOpenManager_c *v45; // x0
  _BOOL4 isInterruption; // w20
  UISprite_o *applyInterruptionDeckSprite; // x20
  __int64 v48; // x1
  __int64 v49; // x2
  System_Action_o *v50; // x20
  System_String_o *v51; // [xsp+0h] [xbp-70h] BYREF
  System_String_o *equipName; // [xsp+8h] [xbp-68h] BYREF
  __int64 maxLv; // [xsp+10h] [xbp-60h] BYREF
  int32_t genderImageId; // [xsp+18h] [xbp-58h] BYREF
  bool isEvery; // [xsp+1Ch] [xbp-54h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F860A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, deckEntity);
    sub_1B640C8(&AtlasManager_TypeInfo, v13);
    sub_1B640C8(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo, v14);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEquipMaster___, v15);
    sub_1B640C8(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__, v16);
    sub_1B640C8(&QuestHintDialogOpenManager_TypeInfo, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B640C8(&Method_WaveBattlePartyOrganizationMenu_EndOpen__, v19);
    sub_1B640C8(&Method_WaveBattlePartyOrganizationMenu_OnSelectWavePartyList__, v20);
    sub_1B640C8(&StringLiteral_17602/*"buttontxt_formation_21"*/, v21);
    sub_1B640C8(&StringLiteral_17597/*"buttontxt_battlerestart"*/, v22);
    sub_1B640C8(&StringLiteral_17601/*"buttontxt_formation_20"*/, v23);
    byte_49F860A = 1;
  }
  entity = 0LL;
  isEvery = 0;
  genderImageId = 0;
  equipName = 0LL;
  maxLv = 0LL;
  v51 = 0LL;
  if ( !this->fields.state )
  {
    this->fields.questRestrictionInfo = questRestrictionInfo;
    p_questRestrictionInfo = &this->fields.questRestrictionInfo;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
      (int32_t)questRestrictionInfo,
      (int32_t)questRestrictionInfo,
      waveCount);
    this->fields.callbackFunc = callback;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v25, v26);
    waveInfoListManager = this->fields.waveInfoListManager;
    v30 = (WaveBattleWaveInfoListManager_CallbackFunc_o *)sub_1B64314(
                                                            WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo,
                                                            v28,
                                                            v29);
    WaveBattleWaveInfoListManager_CallbackFunc___ctor(
      v30,
      (Il2CppObject *)this,
      Method_WaveBattlePartyOrganizationMenu_OnSelectWavePartyList__,
      v31);
    if ( waveInfoListManager )
    {
      WaveBattleWaveInfoListManager__CreateList(
        waveInfoListManager,
        deckEntity,
        questRestrictionInfo,
        waveCount,
        v30,
        restartWave,
        v33);
      this->fields.restartWave = restartWave;
      this->fields.isInterruption = restartWave > 0;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEquipMaster___);
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
                     (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__) )
              {
                Instance = (DataManager_o *)entity;
                if ( !entity )
                  goto LABEL_58;
                UserEquipEntity__getEquipInfo(
                  (UserEquipEntity_o *)entity,
                  (int32_t *)&maxLv + 1,
                  (int32_t *)&maxLv,
                  &equipName,
                  &v51,
                  &genderImageId,
                  0LL);
                Instance = (DataManager_o *)this->fields.masterEquipIcon;
                if ( !Instance )
                  goto LABEL_58;
                ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, genderImageId, 0LL);
                Instance = (DataManager_o *)this->fields.masterEquipButton;
                if ( this->fields.isInterruption )
                {
                  v35 = this->fields.restartWave == 1;
                  if ( !Instance )
                    goto LABEL_58;
                }
                else
                {
                  v35 = 1;
                  if ( !Instance )
                    goto LABEL_58;
                }
                UICommonButton__SetEnable((UICommonButton_o *)Instance, v35, 0LL);
              }
              classInfoSpriteOrganization = this->fields.classInfoSpriteOrganization;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetPartyOrganizationImage(
                classInfoSpriteOrganization,
                (System_String_o *)StringLiteral_17601/*"buttontxt_formation_20"*/,
                0LL);
              Instance = (DataManager_o *)WaveBattlePartyOrganizationMenu__IsHintDialog(this, &isEvery, v37);
              if ( this->fields.hintDialogButton )
              {
                v38 = (char)Instance;
                Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                              0LL);
                if ( Instance )
                {
                  if ( (v38 & 1) != 0 )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                    if ( !*p_questRestrictionInfo )
                      goto LABEL_58;
                    questId = (*p_questRestrictionInfo)->fields.questId;
                    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                    Instance = (DataManager_o *)QuestHintDialogOpenManager__IsSettingTemporarilyId(questId, 0LL);
                    if ( ((unsigned __int8)Instance & 1) == 0 )
                    {
                      if ( !*p_questRestrictionInfo )
                        goto LABEL_58;
                      v41 = (*p_questRestrictionInfo)->fields.questId;
                      if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                      Instance = (DataManager_o *)QuestHintDialogOpenManager__IsQuestHintOpen(v41, 0LL);
                      if ( ((unsigned __int8)Instance & 1) == 0 )
                      {
                        v42 = *p_questRestrictionInfo;
                        if ( !*p_questRestrictionInfo )
                          goto LABEL_58;
                        v43 = isEvery;
                        v44 = v42->fields.questId;
                        if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                        if ( !byte_49F82A3 )
                        {
                          sub_1B640C8(&QuestHintDialogOpenManager_TypeInfo, v40);
                          byte_49F82A3 = 1;
                        }
                        v45 = QuestHintDialogOpenManager_TypeInfo;
                        if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                          v45 = QuestHintDialogOpenManager_TypeInfo;
                        }
                        v45->static_fields->temporarilyId = v44;
                        if ( !v43 )
                        {
                          if ( !byte_49F82A4 )
                          {
                            sub_1B640C8(&QuestHintDialogOpenManager_TypeInfo, v40);
                            v45 = QuestHintDialogOpenManager_TypeInfo;
                            byte_49F82A4 = 1;
                          }
                          if ( !v45->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v45);
                            v45 = QuestHintDialogOpenManager_TypeInfo;
                          }
                          QuestHintDialogOpenManager__SetQuestId(v45->static_fields->temporarilyId, 0LL);
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
                  WaveBattlePartyOrganizationMenu__SetFriendshipUpItemButton(this, v40);
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
                        goto LABEL_56;
                      }
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                      applyInterruptionDeckSprite = this->fields.applyInterruptionDeckSprite;
                      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                      AtlasManager__SetPartyOrganizationImage(
                        applyInterruptionDeckSprite,
                        (System_String_o *)StringLiteral_17602/*"buttontxt_formation_21"*/,
                        0LL);
                      Instance = (DataManager_o *)this->fields.applyInterruptionDeckSprite;
                      if ( Instance )
                      {
                        ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
                          Instance,
                          Instance->klass[2]._1.interopData);
                        AtlasManager__SetPartyOrganizationImage(
                          this->fields.battleStartSprite,
                          (System_String_o *)StringLiteral_17597/*"buttontxt_battlerestart"*/,
                          0LL);
                        Instance = (DataManager_o *)this->fields.battleStartSprite;
                        if ( Instance )
                        {
                          Instance = (DataManager_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)Instance,
                                                        0LL);
                          if ( Instance )
                          {
                            v57.fields.x = 0.0;
                            v57.fields.y = -2.0;
                            v57.fields.z = 0.0;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v57, 0LL);
                            Instance = (DataManager_o *)this->fields.battleStartSprite;
                            if ( Instance )
                            {
                              ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
                                Instance,
                                Instance->klass[2]._1.interopData);
LABEL_56:
                              this->fields.state = 1;
                              v50 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v48, v49);
                              System_Action___ctor(
                                v50,
                                (Il2CppObject *)this,
                                Method_WaveBattlePartyOrganizationMenu_EndOpen__,
                                0LL);
                              BaseMenu__Open((BaseMenu_o *)this, v50, 0LL);
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
LABEL_58:
    sub_1B64324(Instance);
  }
}


void __fastcall WaveBattlePartyOrganizationMenu__OpenTutorial(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 v5; // x2
  System_Action_o *v6; // x20
  __int64 v7; // x0
  struct QuestRestrictionInfo_o *v8; // x8

  if ( (byte_49F8616 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_WaveBattlePartyOrganizationMenu_CheckFriendshipUpItemTutorial__, v3);
    byte_49F8616 = 1;
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
    v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v5);
    System_Action___ctor(
      v6,
      (Il2CppObject *)this,
      Method_WaveBattlePartyOrganizationMenu_CheckFriendshipUpItemTutorial__,
      0LL);
    v8 = this->fields.questRestrictionInfo;
    if ( !v8 )
      sub_1B64324(v7);
    EventTutorialMaster__CheckTutorial(0, 45, v6, v8->fields.questId, v8->fields.questPhase, 0, 0, 0LL);
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
  _BOOL4 isInterruption; // w20
  PartyOrganizationUtility_o *Instance; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int InterruptionUseFriendshipUpItemId; // w20
  bool v7; // w1
  bool v8; // w2
  char v9; // w20
  char v10; // w20

  if ( (byte_49F8619 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method);
    byte_49F8619 = 1;
  }
  isInterruption = this->fields.isInterruption;
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
    Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
              v7 = 1;
              v8 = 1;
LABEL_31:
              FriendshipUpItemUseItem__SetWaveBattleRestart((FriendshipUpItemUseItem_o *)Instance, v7, v8, 0LL);
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
            v7 = 1;
            v8 = 0;
            goto LABEL_31;
          }
        }
      }
LABEL_33:
      sub_1B64324(Instance);
    }
    Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(Instance, 0LL);
    if ( !this->fields.friendshipUpItemUseButton )
      goto LABEL_33;
    v10 = (char)Instance;
    Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                               0LL);
    if ( !Instance )
      goto LABEL_33;
    if ( (v10 & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
      if ( Instance )
      {
        FriendshipUpItemUseItem__SetInit((FriendshipUpItemUseItem_o *)Instance, 0LL);
        Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
        if ( Instance )
        {
          v8 = 1;
          v7 = 0;
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
    v9 = (char)Instance;
    Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                               0LL);
    if ( !Instance )
      goto LABEL_33;
    if ( (v9 & 1) != 0 )
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


void __fastcall WaveBattlePartyOrganizationMenu__SetWave(
        WaveBattlePartyOrganizationMenu_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1B64324(0LL);
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
  QuestPhaseEntity_o *v13; // [xsp+0h] [xbp-40h] BYREF
  QuestHintEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_49F860C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_QuestHintMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestPhaseMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    this = (WaveBattlePartyOrganizationMenu_o *)sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49F860C = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_23;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  message = (System_String_o *)StringLiteral_1/*""*/;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestHintMaster___);
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
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !this )
      goto LABEL_23;
    if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &v13, questId, questPhase, 0LL) )
    {
      this = (WaveBattlePartyOrganizationMenu_o *)v13;
      if ( !v13 )
        goto LABEL_23;
      this = (WaveBattlePartyOrganizationMenu_o *)QuestPhaseEntity__getHintMessageTitle(v13, 0LL);
      if ( !v13 )
        goto LABEL_23;
      title = (System_String_o *)this;
      this = (WaveBattlePartyOrganizationMenu_o *)QuestPhaseEntity__getHintMessage(v13, 0LL);
      if ( !v13 )
        goto LABEL_23;
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
  this = (WaveBattlePartyOrganizationMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_23:
    sub_1B64324(this);
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
  DataManager_o *Instance; // x0
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo *v11; // x3
  char v12; // w1
  PartyOrganizationUtility_c *v13; // x0
  System_String_o *v14; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *equipName; // [xsp+8h] [xbp-48h] BYREF
  int32_t maxLv; // [xsp+14h] [xbp-3Ch] BYREF
  int32_t genderImageId[2]; // [xsp+18h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_49F860E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEquipMaster___, deckEntity);
    sub_1B640C8(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__, v5);
    sub_1B640C8(&PartyOrganizationUtility_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    byte_49F860E = 1;
  }
  entity = 0LL;
  *(_QWORD *)genderImageId = 0LL;
  maxLv = 0;
  v14 = 0LL;
  equipName = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !deckEntity )
    goto LABEL_24;
  deckInfo = deckEntity->fields.deckInfo;
  if ( !deckInfo || !Instance )
    goto LABEL_24;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         deckInfo->fields.userEquipId,
         (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_24;
    UserEquipEntity__getEquipInfo(
      (UserEquipEntity_o *)entity,
      genderImageId,
      &maxLv,
      &equipName,
      &v14,
      &genderImageId[1],
      0LL);
    Instance = (DataManager_o *)this->fields.masterEquipIcon;
    if ( !Instance )
      goto LABEL_24;
    ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, genderImageId[1], 0LL);
    Instance = (DataManager_o *)this->fields.masterEquipButton;
    if ( this->fields.isInterruption )
    {
      v12 = this->fields.restartWave == 1;
      if ( !Instance )
        goto LABEL_24;
    }
    else
    {
      v12 = 1;
      if ( !Instance )
        goto LABEL_24;
    }
    UICommonButton__SetEnable((UICommonButton_o *)Instance, v12, 0LL);
  }
  Instance = (DataManager_o *)this->fields.waveInfoListManager;
  if ( !Instance )
    goto LABEL_24;
  WaveBattleWaveInfoListManager__UpdateWaveServantInfo(
    (WaveBattleWaveInfoListManager_o *)Instance,
    deckEntity,
    this->fields.isInterruption,
    v11);
  Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  if ( PartyOrganizationUtility__IsAvailableFriendshipUpItem((PartyOrganizationUtility_o *)Instance, 0LL)
    && !this->fields.isInterruption )
  {
    v13 = PartyOrganizationUtility_TypeInfo;
    if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
      v13 = PartyOrganizationUtility_TypeInfo;
    }
    Instance = (DataManager_o *)UnityEngine_PlayerPrefs__GetInt(
                                  v13->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE,
                                  0,
                                  0LL);
    if ( this->fields.friendshipUpItemUseButton )
    {
      FriendshipUpItemUseItem__ChangeButtonState(this->fields.friendshipUpItemUseButton, (_DWORD)Instance != 0, 0LL);
      return;
    }
LABEL_24:
    sub_1B64324(Instance);
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

  if ( (byte_49F8608 & 1) == 0 )
  {
    sub_1B640C8(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo, value);
    byte_49F8608 = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationMenu_o *)sub_1B645E4(v8);
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

  if ( (byte_49F8609 & 1) == 0 )
  {
    sub_1B640C8(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo, value);
    byte_49F8609 = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationMenu_o *)sub_1B645E4(v8);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A6F6C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A6F0C;
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
  _QWORD v12[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v13; // [xsp+10h] [xbp-60h]
  int32_t v14; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v15; // [xsp+38h] [xbp-38h] BYREF
  int32_t v16; // [xsp+3Ch] [xbp-34h] BYREF

  v15 = n;
  v16 = result;
  v14 = m;
  if ( (byte_49F861B & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v10);
    byte_49F861B = 1;
  }
  v13 = 0u;
  v12[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v16);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  *(_QWORD *)&v13 = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v12, callback, object);
}


void __fastcall WaveBattlePartyOrganizationMenu_CallbackFunc__EndInvoke(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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