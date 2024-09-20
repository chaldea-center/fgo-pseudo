void __fastcall WaveBattlePartyOrganizationMenu___ctor(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A572E9 & 1) == 0 )
  {
    sub_1B885B0(&BaseMenu_TypeInfo);
    byte_4A572E9 = 1;
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A572E6 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A572E6 = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_37688364(102, 0LL) )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        sub_1B8880C(0LL, v4);
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

  WaveBattlePartyOrganizationMenu__Close_32381320(this, 0LL, v2);
}


void __fastcall WaveBattlePartyOrganizationMenu__Close_32381320(
        WaveBattlePartyOrganizationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_Action_o *v8; // x20

  if ( (byte_4A572DC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_WaveBattlePartyOrganizationMenu_EndClose__);
    byte_4A572DC = 1;
  }
  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1B8880C(0LL, callback);
  WaveBattleWaveInfoListManager__DestroyList(waveInfoListManager, (const MethodInfo *)callback);
  this->fields.closeCallbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v6, v7);
  this->fields.state = 4;
  v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_WaveBattlePartyOrganizationMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v8, 0LL);
}


void __fastcall WaveBattlePartyOrganizationMenu__Display(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v3);
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
    sub_1B88554(p_closeCallbackFunc, 0, v3, v4);
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
  UserEventDeckEntity_o *v4; // x20
  __int64 UserId; // x0
  __int64 v6; // x1
  PartyListViewItem_o *v7; // x8
  int64_t userEquipId; // x21
  int32_t v9; // w22
  DeckServant_o *v10; // x0
  il2cpp_array_size_t max_length; // w1
  DeckServant_o *v12; // x23
  UserEventDeckEntity_o *v13; // x21
  PartyListViewItem_array *v14; // x20
  ServantStatusBattleListViewItem_o *p_deckInfo; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  int v18; // w8
  int v19; // w10
  signed int v20; // w11
  _DWORD *data; // x8
  __int64 v22; // x29
  __int64 v23; // x8
  PartyListViewItem_o *v24; // x23
  unsigned __int64 v25; // x22
  int v26; // w20
  PartyOrganizationListViewItem_o *Member; // x25
  __int64 v28; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v30; // q0
  struct UserServantEntity_o *v31; // x8
  __int64 v32; // x26
  __int64 v33; // x27
  int32_t v34; // w0
  System_Int64_array *EquipList; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t InitPos_k__BackingField; // w8
  ServantStatusBattleListViewItem_c *klass; // x8
  _DWORD *v44; // x9
  __int64 v45; // x9
  __int64 v46; // x9
  const char *name; // x25
  int32_t v48; // w2
  int32_t v49; // w3
  const char *v50; // x0
  __int64 v52; // x0
  UserEventDeckEntity_o *v53; // [xsp+0h] [xbp-E0h]
  PartyListViewItem_array *v54; // [xsp+8h] [xbp-D8h]
  int v55; // [xsp+10h] [xbp-D0h]
  int v56; // [xsp+1Ch] [xbp-C4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58[2]; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_4A572DE & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&DeckServantData_TypeInfo);
    sub_1B885B0(&DeckServant_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&UserEventDeckEntity_TypeInfo);
    byte_4A572DE = 1;
  }
  memset(&v58[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v4 = (UserEventDeckEntity_o *)sub_1B887FC(UserEventDeckEntity_TypeInfo);
  UserEventDeckEntity___ctor(v4, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v4 )
    goto LABEL_55;
  v4->fields.userId = UserId;
  if ( !deckItemList )
    goto LABEL_55;
  if ( !deckItemList->max_length )
    goto LABEL_56;
  UserId = (__int64)deckItemList->m_Items[0];
  if ( !UserId )
    goto LABEL_55;
  v4->fields.eventId = *(_QWORD *)(UserId + 128);
  v4->fields.deckNo = PartyListViewItem__get_DeckNum((PartyListViewItem_o *)UserId, 0LL);
  UserId = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    UserId = (__int64)BalanceConfig_TypeInfo;
  }
  if ( !deckItemList->max_length )
    goto LABEL_56;
  v7 = deckItemList->m_Items[0];
  if ( !v7 )
LABEL_55:
    sub_1B8880C(UserId, v6);
  userEquipId = v7->fields.userEquipId;
  v9 = *(_DWORD *)(*(_QWORD *)(UserId + 184) + 160LL);
  v10 = (DeckServant_o *)sub_1B887FC(DeckServant_TypeInfo);
  max_length = deckItemList->max_length;
  v54 = deckItemList;
  v12 = v10;
  DeckServant___ctor_38871516(v10, max_length, v9, userEquipId, 0LL);
  v53 = v4;
  v13 = v4;
  v14 = v54;
  v13->fields.deckInfo = v12;
  p_deckInfo = (ServantStatusBattleListViewItem_o *)&v13->fields.deckInfo;
  sub_1B88554(p_deckInfo, (int32_t)v12, v16, v17);
  v18 = v54->max_length;
  if ( v18 >= 1 )
  {
    v19 = 0;
    v20 = 0;
    while ( v20 < (unsigned int)v18 )
    {
      if ( !p_deckInfo->klass )
        goto LABEL_55;
      data = p_deckInfo->klass->_1.byval_arg.data;
      if ( !data )
        goto LABEL_55;
      v22 = v20;
      if ( (unsigned int)v20 >= data[6] )
        break;
      v23 = *(_QWORD *)&data[2 * v20 + 8];
      if ( !v23 )
        goto LABEL_55;
      v24 = v14->m_Items[v20];
      v25 = 0LL;
      v55 = v20 + 1;
      *(_DWORD *)(v23 + 16) = v20 + 1;
      v56 = v19;
      v26 = v19;
      while ( 1 )
      {
        UserId = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          UserId = (__int64)BalanceConfig_TypeInfo;
        }
        if ( (__int64)v25 >= *(int *)(*(_QWORD *)(UserId + 184) + 160LL) )
          break;
        if ( !v24 )
          goto LABEL_55;
        Member = PartyListViewItem__GetMember(v24, v25, 0LL);
        v28 = sub_1B887FC(DeckServantData_TypeInfo);
        DeckServantData___ctor((DeckServantData_o *)v28, 0LL);
        if ( !v28 )
          goto LABEL_55;
        *(_DWORD *)(v28 + 16) = v26 + v25 + 1;
        if ( !Member )
          goto LABEL_55;
        userServantEntity = Member->fields.userServantEntity;
        if ( userServantEntity )
        {
          v30 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v58[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v58[1].fields.fakeValue = v30;
        }
        else
        {
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v58, 0LL, 0LL);
          v58[1] = v58[0];
        }
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v57 = v58[1];
        *(_QWORD *)(v28 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v57, 0LL);
        v31 = Member->fields.userServantEntity;
        if ( v31 )
        {
          v33 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
          v32 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v59.fields.currentCryptoKey = v33;
          *(_QWORD *)&v59.fields.fakeValue = v32;
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v59, 0LL);
        }
        else
        {
          v34 = 0;
        }
        *(_DWORD *)(v28 + 32) = v34;
        EquipList = PartyOrganizationListViewItem__GetEquipList(Member, 0LL);
        *(_QWORD *)(v28 + 40) = EquipList;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 40), (int32_t)EquipList, v36, v37);
        v38 = sub_1B88658(int___TypeInfo, 1LL);
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(Member, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(EquipSvtId, 0LL);
        if ( !v38 )
          goto LABEL_55;
        if ( !*(_DWORD *)(v38 + 24) )
          goto LABEL_56;
        *(_DWORD *)(v38 + 32) = UserId;
        *(_QWORD *)(v28 + 48) = v38;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 48), v38, v40, v41);
        InitPos_k__BackingField = Member->fields._InitPos_k__BackingField;
        *(_QWORD *)(v28 + 64) = 0LL;
        *(_BYTE *)(v28 + 56) = 0;
        *(_DWORD *)(v28 + 76) = InitPos_k__BackingField;
        klass = p_deckInfo->klass;
        if ( !p_deckInfo->klass )
          goto LABEL_55;
        v44 = klass->_1.byval_arg.data;
        if ( !v44 )
          goto LABEL_55;
        if ( (unsigned int)v22 >= v44[6] )
          goto LABEL_56;
        v45 = *(_QWORD *)&v44[2 * v22 + 8];
        if ( !v45 )
          goto LABEL_55;
        v46 = *(_QWORD *)(v45 + 24);
        if ( !v46 )
          goto LABEL_55;
        if ( v25 >= *(unsigned int *)(v46 + 24) )
          goto LABEL_56;
        *(_DWORD *)(v46 + 4 * v25 + 32) = *(_DWORD *)(v28 + 16);
        name = klass->_1.name;
        if ( !name )
          goto LABEL_55;
        UserId = sub_1B886EC(v28, *(_QWORD *)(*(_QWORD *)name + 64LL));
        if ( !UserId )
        {
          v52 = sub_1B88830();
          sub_1B886D8(v52, 0LL);
        }
        if ( (unsigned int)(v26 + v25) >= *((_DWORD *)name + 6) )
          goto LABEL_56;
        v50 = &name[8 * v26 + 8 * (int)v25];
        *((_QWORD *)v50 + 4) = v28;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v50 + 32), v28, v48, v49);
        ++v25;
      }
      v14 = v54;
      v20 = v55;
      v18 = v54->max_length;
      v19 = v56 + v25;
      if ( v55 >= v18 )
        return v53;
    }
LABEL_56:
    sub_1B88814(UserId, v6);
  }
  return v53;
}


void __fastcall WaveBattlePartyOrganizationMenu__Hide(
        WaveBattlePartyOrganizationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v3);
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
    sub_1B8880C(0LL, v3);
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
  QuestPhaseEntity_o *v11; // [xsp+0h] [xbp-40h] BYREF
  QuestHintEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4A572DA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    this = (WaveBattlePartyOrganizationMenu_o *)sub_1B885B0(&DataManager_TypeInfo);
    byte_4A572DA = 1;
  }
  v11 = 0LL;
  entity = 0LL;
  *isEvery = 0;
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_19;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestHintMaster___);
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
    this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
LABEL_19:
    sub_1B8880C(this, isEvery);
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

  if ( (byte_4A572E0 & 1) == 0 )
  {
    sub_1B885B0(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__);
    byte_4A572E0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_WaveBattlePartyOrganizationMenu_OnClickAutoOrganization__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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

  if ( (byte_4A572E3 & 1) == 0 )
  {
    sub_1B885B0(&Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__);
    byte_4A572E3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_WaveBattlePartyOrganizationMenu_OnClickAutoSell__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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

  if ( (byte_4A572E2 & 1) == 0 )
  {
    sub_1B885B0(&Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__);
    byte_4A572E2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_WaveBattlePartyOrganizationMenu_OnClickClassInfo__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
  PartyOrganizationUtility_c *v3; // x0
  int32_t Int; // w0
  _QWORD *v5; // x8
  int32_t v6; // w20
  System_Reflection_MethodBase_o *v7; // x0
  PartyOrganizationUtility_c *v8; // x0
  __int64 v9; // x1
  FriendshipUpItemUseItem_o *friendshipUpItemUseButton; // x0
  bool v11; // w1
  PartyOrganizationUtility_c *v12; // x0

  if ( (byte_4A572E7 & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationUtility_TypeInfo);
    sub_1B885B0(&Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__);
    byte_4A572E7 = 1;
  }
  v3 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v3 = PartyOrganizationUtility_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  v5 = Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__;
  v6 = Int;
  if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B885C8(Method_WaveBattlePartyOrganizationMenu_OnClickFriendshipUpItemUseButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
  if ( !v6 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
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
    sub_1B8880C(friendshipUpItemUseButton, v9);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
  v8 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v8 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v8->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
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

  if ( (byte_4A572E4 & 1) == 0 )
  {
    sub_1B885B0(&Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__);
    byte_4A572E4 = 1;
  }
  v3 = Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__;
  if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_WaveBattlePartyOrganizationMenu_OnClickHintDialogButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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

  if ( (byte_4A572DF & 1) == 0 )
  {
    sub_1B885B0(&Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__);
    byte_4A572DF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_WaveBattlePartyOrganizationMenu_OnClickMasterFormation__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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

  if ( (byte_4A572E1 & 1) == 0 )
  {
    sub_1B885B0(&Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__);
    byte_4A572E1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_WaveBattlePartyOrganizationMenu_OnClickPartyEdit__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x25
  WaveBattleWaveInfoListManager_CallbackFunc_o *v17; // x26
  const MethodInfo *v18; // x3
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x6
  struct DeckServant_o *deckInfo; // x8
  UISprite_o *classInfoSpriteOrganization; // x21
  const MethodInfo *v24; // x2
  char v25; // w21
  int32_t questId; // w22
  int32_t v27; // w22
  struct QuestRestrictionInfo_o *v28; // x8
  _BOOL4 v29; // w20
  int32_t v30; // w22
  QuestHintDialogOpenManager_c *v31; // x0
  _BOOL4 isInterruption; // w20
  UISprite_o *applyInterruptionDeckSprite; // x20
  System_Action_o *v34; // x20
  System_String_o *v35; // [xsp+0h] [xbp-70h] BYREF
  System_String_o *equipName; // [xsp+8h] [xbp-68h] BYREF
  __int64 maxLv; // [xsp+10h] [xbp-60h] BYREF
  int32_t genderImageId; // [xsp+18h] [xbp-58h] BYREF
  bool isEvery; // [xsp+1Ch] [xbp-54h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A572D9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__);
    sub_1B885B0(&QuestHintDialogOpenManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_WaveBattlePartyOrganizationMenu_EndOpen__);
    sub_1B885B0(&Method_WaveBattlePartyOrganizationMenu_OnSelectWavePartyList__);
    sub_1B885B0(&StringLiteral_17672/*"buttontxt_formation_21"*/);
    sub_1B885B0(&StringLiteral_17667/*"buttontxt_battlerestart"*/);
    sub_1B885B0(&StringLiteral_17671/*"buttontxt_formation_20"*/);
    byte_4A572D9 = 1;
  }
  entity = 0LL;
  isEvery = 0;
  genderImageId = 0;
  equipName = 0LL;
  maxLv = 0LL;
  v35 = 0LL;
  if ( !this->fields.state )
  {
    this->fields.questRestrictionInfo = questRestrictionInfo;
    p_questRestrictionInfo = &this->fields.questRestrictionInfo;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
      (int32_t)questRestrictionInfo,
      (int32_t)questRestrictionInfo,
      waveCount);
    this->fields.callbackFunc = callback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v14, v15);
    waveInfoListManager = this->fields.waveInfoListManager;
    v17 = (WaveBattleWaveInfoListManager_CallbackFunc_o *)sub_1B887FC(WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
    WaveBattleWaveInfoListManager_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_WaveBattlePartyOrganizationMenu_OnSelectWavePartyList__,
      v18);
    if ( waveInfoListManager )
    {
      WaveBattleWaveInfoListManager__CreateList(
        waveInfoListManager,
        deckEntity,
        questRestrictionInfo,
        waveCount,
        v17,
        restartWave,
        v21);
      this->fields.restartWave = restartWave;
      this->fields.isInterruption = restartWave > 0;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEquipMaster___);
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
                     (const MethodInfo_311DB34 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__) )
              {
                Instance = (DataManager_o *)entity;
                if ( !entity )
                  goto LABEL_58;
                UserEquipEntity__getEquipInfo(
                  (UserEquipEntity_o *)entity,
                  (int32_t *)&maxLv + 1,
                  (int32_t *)&maxLv,
                  &equipName,
                  &v35,
                  &genderImageId,
                  0LL);
                Instance = (DataManager_o *)this->fields.masterEquipIcon;
                if ( !Instance )
                  goto LABEL_58;
                ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, genderImageId, 0LL);
                Instance = (DataManager_o *)this->fields.masterEquipButton;
                if ( this->fields.isInterruption )
                {
                  v20 = this->fields.restartWave == 1;
                  if ( !Instance )
                    goto LABEL_58;
                }
                else
                {
                  v20 = 1LL;
                  if ( !Instance )
                    goto LABEL_58;
                }
                UICommonButton__SetEnable((UICommonButton_o *)Instance, v20, 0LL);
              }
              classInfoSpriteOrganization = this->fields.classInfoSpriteOrganization;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetPartyOrganizationImage(
                classInfoSpriteOrganization,
                (System_String_o *)StringLiteral_17671/*"buttontxt_formation_20"*/,
                0LL);
              Instance = (DataManager_o *)WaveBattlePartyOrganizationMenu__IsHintDialog(this, &isEvery, v24);
              if ( this->fields.hintDialogButton )
              {
                v25 = (char)Instance;
                Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                              0LL);
                if ( Instance )
                {
                  if ( (v25 & 1) != 0 )
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
                      v27 = (*p_questRestrictionInfo)->fields.questId;
                      if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                      Instance = (DataManager_o *)QuestHintDialogOpenManager__IsQuestHintOpen(v27, 0LL);
                      if ( ((unsigned __int8)Instance & 1) == 0 )
                      {
                        v28 = *p_questRestrictionInfo;
                        if ( !*p_questRestrictionInfo )
                          goto LABEL_58;
                        v29 = isEvery;
                        v30 = v28->fields.questId;
                        if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                        if ( !byte_4A56F68 )
                        {
                          sub_1B885B0(&QuestHintDialogOpenManager_TypeInfo);
                          byte_4A56F68 = 1;
                        }
                        v31 = QuestHintDialogOpenManager_TypeInfo;
                        if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                          v31 = QuestHintDialogOpenManager_TypeInfo;
                        }
                        v31->static_fields->temporarilyId = v30;
                        if ( !v29 )
                        {
                          if ( !byte_4A56F69 )
                          {
                            sub_1B885B0(&QuestHintDialogOpenManager_TypeInfo);
                            v31 = QuestHintDialogOpenManager_TypeInfo;
                            byte_4A56F69 = 1;
                          }
                          if ( !v31->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v31);
                            v31 = QuestHintDialogOpenManager_TypeInfo;
                          }
                          QuestHintDialogOpenManager__SetQuestId(v31->static_fields->temporarilyId, 0LL);
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
                  WaveBattlePartyOrganizationMenu__SetFriendshipUpItemButton(this, (const MethodInfo *)v20);
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
                        (System_String_o *)StringLiteral_17672/*"buttontxt_formation_21"*/,
                        0LL);
                      Instance = (DataManager_o *)this->fields.applyInterruptionDeckSprite;
                      if ( Instance )
                      {
                        ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
                          Instance,
                          Instance->klass[2]._1.interopData);
                        AtlasManager__SetPartyOrganizationImage(
                          this->fields.battleStartSprite,
                          (System_String_o *)StringLiteral_17667/*"buttontxt_battlerestart"*/,
                          0LL);
                        Instance = (DataManager_o *)this->fields.battleStartSprite;
                        if ( Instance )
                        {
                          Instance = (DataManager_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)Instance,
                                                        0LL);
                          if ( Instance )
                          {
                            v41.fields.x = 0.0;
                            v41.fields.y = -2.0;
                            v41.fields.z = 0.0;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v41, 0LL);
                            Instance = (DataManager_o *)this->fields.battleStartSprite;
                            if ( Instance )
                            {
                              ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
                                Instance,
                                Instance->klass[2]._1.interopData);
LABEL_56:
                              this->fields.state = 1;
                              v34 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
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
      }
    }
LABEL_58:
    sub_1B8880C(Instance, v20);
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

  if ( (byte_4A572E5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_WaveBattlePartyOrganizationMenu_CheckFriendshipUpItemTutorial__);
    byte_4A572E5 = 1;
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
    v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v4,
      (Il2CppObject *)this,
      Method_WaveBattlePartyOrganizationMenu_CheckFriendshipUpItemTutorial__,
      0LL);
    v7 = this->fields.questRestrictionInfo;
    if ( !v7 )
      sub_1B8880C(v5, v6);
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
  _BOOL4 isInterruption; // w20
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v5; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int InterruptionUseFriendshipUpItemId; // w20
  bool v8; // w1
  bool v9; // w2
  char v10; // w20
  char v11; // w20

  if ( (byte_4A572E8 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A572E8 = 1;
  }
  isInterruption = this->fields.isInterruption;
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
    Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
              v8 = 1;
              v9 = 1;
LABEL_31:
              FriendshipUpItemUseItem__SetWaveBattleRestart((FriendshipUpItemUseItem_o *)Instance, v8, v9, 0LL);
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
            v8 = 1;
            v9 = 0;
            goto LABEL_31;
          }
        }
      }
LABEL_33:
      sub_1B8880C(Instance, v5);
    }
    Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
        Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
        if ( Instance )
        {
          v9 = 1;
          v8 = 0;
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
    sub_1B8880C(0LL, wave);
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
  QuestPhaseEntity_o *v9; // [xsp+0h] [xbp-40h] BYREF
  QuestHintEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4A572DB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (WaveBattlePartyOrganizationMenu_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A572DB = 1;
  }
  v9 = 0LL;
  entity = 0LL;
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_23;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  message = (System_String_o *)StringLiteral_1/*""*/;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestHintMaster___);
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
    this = (WaveBattlePartyOrganizationMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !this )
      goto LABEL_23;
    if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &v9, questId, questPhase, 0LL) )
    {
      this = (WaveBattlePartyOrganizationMenu_o *)v9;
      if ( !v9 )
        goto LABEL_23;
      this = (WaveBattlePartyOrganizationMenu_o *)QuestPhaseEntity__getHintMessageTitle(v9, 0LL);
      if ( !v9 )
        goto LABEL_23;
      title = (System_String_o *)this;
      this = (WaveBattlePartyOrganizationMenu_o *)QuestPhaseEntity__getHintMessage(v9, 0LL);
      if ( !v9 )
        goto LABEL_23;
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
  this = (WaveBattlePartyOrganizationMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_23:
    sub_1B8880C(this, method);
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
  PartyOrganizationUtility_c *v9; // x0
  System_String_o *v10; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *equipName; // [xsp+8h] [xbp-48h] BYREF
  int32_t maxLv; // [xsp+14h] [xbp-3Ch] BYREF
  int32_t genderImageId[2]; // [xsp+18h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4A572DD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__);
    sub_1B885B0(&PartyOrganizationUtility_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A572DD = 1;
  }
  entity = 0LL;
  *(_QWORD *)genderImageId = 0LL;
  maxLv = 0;
  v10 = 0LL;
  equipName = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !deckEntity )
    goto LABEL_24;
  deckInfo = deckEntity->fields.deckInfo;
  if ( !deckInfo || !Instance )
    goto LABEL_24;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         deckInfo->fields.userEquipId,
         (const MethodInfo_311DB34 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_24;
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
      goto LABEL_24;
    ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, genderImageId[1], 0LL);
    Instance = (DataManager_o *)this->fields.masterEquipButton;
    if ( this->fields.isInterruption )
    {
      v6 = this->fields.restartWave == 1;
      if ( !Instance )
        goto LABEL_24;
    }
    else
    {
      v6 = 1LL;
      if ( !Instance )
        goto LABEL_24;
    }
    UICommonButton__SetEnable((UICommonButton_o *)Instance, v6, 0LL);
  }
  Instance = (DataManager_o *)this->fields.waveInfoListManager;
  if ( !Instance )
    goto LABEL_24;
  WaveBattleWaveInfoListManager__UpdateWaveServantInfo(
    (WaveBattleWaveInfoListManager_o *)Instance,
    deckEntity,
    this->fields.isInterruption,
    v8);
  Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  if ( PartyOrganizationUtility__IsAvailableFriendshipUpItem((PartyOrganizationUtility_o *)Instance, 0LL)
    && !this->fields.isInterruption )
  {
    v9 = PartyOrganizationUtility_TypeInfo;
    if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
      v9 = PartyOrganizationUtility_TypeInfo;
    }
    Instance = (DataManager_o *)UnityEngine_PlayerPrefs__GetInt(
                                  v9->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE,
                                  0,
                                  0LL);
    if ( this->fields.friendshipUpItemUseButton )
    {
      FriendshipUpItemUseItem__ChangeButtonState(this->fields.friendshipUpItemUseButton, (_DWORD)Instance != 0, 0LL);
      return;
    }
LABEL_24:
    sub_1B8880C(Instance, v6);
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

  if ( (byte_4A572D7 & 1) == 0 )
  {
    sub_1B885B0(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo);
    byte_4A572D7 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationMenu_o *)sub_1B88ACC(v8);
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

  if ( (byte_4A572D8 & 1) == 0 )
  {
    sub_1B885B0(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo);
    byte_4A572D8 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationMenu_o *)sub_1B88ACC(v8);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C9760;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C9700;
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
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  _QWORD v17[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v18; // [xsp+10h] [xbp-60h]
  int32_t v19; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v20; // [xsp+38h] [xbp-38h] BYREF
  int32_t v21; // [xsp+3Ch] [xbp-34h] BYREF

  v20 = n;
  v21 = result;
  v19 = m;
  if ( (byte_4A572EA & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo);
    byte_4A572EA = 1;
  }
  v18 = 0u;
  v17[0] = j_il2cpp_value_box_0(
             WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo,
             &v21,
             *(_QWORD *)&n,
             *(_QWORD *)&m,
             callback);
  v17[1] = j_il2cpp_value_box_0(int_TypeInfo, &v20, v10, v11, v12);
  *(_QWORD *)&v18 = j_il2cpp_value_box_0(int_TypeInfo, &v19, v13, v14, v15);
  return (System_IAsyncResult_o *)sub_1B88564(this, v17, callback, object);
}


void __fastcall WaveBattlePartyOrganizationMenu_CallbackFunc__EndInvoke(
        WaveBattlePartyOrganizationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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