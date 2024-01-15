void __fastcall PartyOrganizationConfirmDeck2Menu___ctor(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0
  struct PartyOrganizationConfirmItemDraw_array *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x2
  struct PartyOrganizationConfirmItemDraw_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40FDC2D & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&BaseDialog_TypeInfo, v4);
    sub_B16FFC(&PartyOrganizationConfirmItemDraw___TypeInfo, v5);
    byte_40FDC2D = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct PartyOrganizationConfirmItemDraw_array *)sub_B17014(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v6->static_fields->DeckMemberMax,
                                                          v2);
  this->fields.memberObjectList = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.memberObjectList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v15 = (struct PartyOrganizationConfirmItemDraw_array *)sub_B17014(
                                                           PartyOrganizationConfirmItemDraw___TypeInfo,
                                                           (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax,
                                                           v14);
  this->fields.baseObjectList = v15;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseObjectList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmDeck2Menu__Callback(
        PartyOrganizationConfirmDeck2Menu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *v9; // x19
  struct PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PartyOrganizationConfirmDeck2Menu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall PartyOrganizationConfirmDeck2Menu__Close(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmDeck2Menu__Close_32262440(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmDeck2Menu__Close_32262440(
        PartyOrganizationConfirmDeck2Menu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FDC29 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_PartyOrganizationConfirmDeck2Menu_EndClose__, v10);
    byte_40FDC29 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeck2Menu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall PartyOrganizationConfirmDeck2Menu__EndClose(
        PartyOrganizationConfirmDeck2Menu_o *this,
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

  PartyOrganizationConfirmDeck2Menu__Init(this, method);
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


void __fastcall PartyOrganizationConfirmDeck2Menu__EndOpen(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PartyOrganizationConfirmDeck2Menu__Init(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UILabel_o *messageLabel; // x0
  UILabel_o *decideLabel; // x0
  UILabel_o *cancelLabel; // x0
  UILabel_o *closeLabel; // x0

  if ( (byte_40FDC26 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FDC26 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (decideLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(decideLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (cancelLabel = this->fields.cancelLabel) == 0LL)
    || (UILabel__set_text(cancelLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (closeLabel = this->fields.closeLabel) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  UILabel__set_text(closeLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


bool __fastcall PartyOrganizationConfirmDeck2Menu__IsHideRarity(
        PartyOrganizationConfirmDeck2Menu_o *this,
        PartyOrganizationListViewItem_o *member,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v7; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w21
  int32_t questPhase; // w22
  NpcServantFollowerMaster_o *v11; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v13; // w0
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FDC28 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, member);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_40FDC28 = 1;
  }
  npcServantFollowerEntity = 0LL;
  if ( !member )
    goto LABEL_18;
  if ( !member->fields.questRestrictionInfo )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  questRestrictionInfo = member->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_18;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  v11 = (NpcServantFollowerMaster_o *)Master_WarQuestSelectionMaster;
  SvtId = PartyOrganizationListViewItem__get_SvtId(member, v7);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(SvtId, 0LL);
  if ( !v11 )
LABEL_18:
    sub_B170D4();
  if ( !NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
          v11,
          &npcServantFollowerEntity,
          questId,
          questPhase,
          v13,
          0LL) )
    return 0;
  if ( !npcServantFollowerEntity )
    goto LABEL_18;
  return NpcServantFollowerEntity__IsHideRarity(npcServantFollowerEntity->fields.flag, 0LL);
}


void __fastcall PartyOrganizationConfirmDeck2Menu__OnClickCancel(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FDC2B & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FDC2B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    PartyOrganizationConfirmDeck2Menu__Callback(this, 0, v3);
  }
}


void __fastcall PartyOrganizationConfirmDeck2Menu__OnClickClose(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_40FDC2C & 1) == 0 )
  {
    sub_B16FFC(&Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__, method);
    byte_40FDC2C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    PartyOrganizationConfirmDeck2Menu__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationConfirmDeck2Menu__OnClickDecide(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FDC2A & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FDC2A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    PartyOrganizationConfirmDeck2Menu__Callback(this, 1, v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmDeck2Menu__Open(
        PartyOrganizationConfirmDeck2Menu_o *this,
        int32_t kind,
        PartyListViewItem_o *basePartyItem,
        PartyListViewItem_o *partyItem,
        PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *callback,
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
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  struct PartyOrganizationConfirmItemDraw_array *memberObjectList; // x8
  __int64 v49; // x23
  PartyOrganizationConfirmDeck2Menu_o *Member; // x24
  const MethodInfo *v51; // x2
  _BOOL8 IsHideRarity; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  const MethodInfo *v55; // x7
  struct PartyOrganizationConfirmItemDraw_array *v56; // x8
  PartyOrganizationConfirmItemDraw_o *v57; // x8
  struct PartyOrganizationConfirmItemDraw_array *baseObjectList; // x8
  __int64 v59; // x22
  PartyOrganizationConfirmDeck2Menu_o *v60; // x23
  const MethodInfo *v61; // x2
  const MethodInfo *v62; // x7
  struct PartyOrganizationConfirmItemDraw_array *v63; // x8
  PartyOrganizationConfirmItemDraw_o *v64; // x8
  UnityEngine_Component_o *decideButton; // x0
  UnityEngine_GameObject_o *v66; // x0
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *v68; // x0
  UnityEngine_Component_o *closeButton; // x0
  UnityEngine_GameObject_o *v70; // x0
  struct UICommonButton_o *v71; // x0
  struct UICommonButton_o *v72; // x0
  UnityEngine_Component_o *v73; // x0
  UnityEngine_Component_o *v74; // x0
  UnityEngine_GameObject_o *v75; // x0
  UnityEngine_Component_o *v76; // x0
  UnityEngine_GameObject_o *v77; // x0
  UnityEngine_Component_o *v78; // x0
  UnityEngine_GameObject_o *v79; // x0
  struct UICommonButton_o *v80; // x0
  UnityEngine_GameObject_o *v81; // x21
  UILabel_o *memberTitleLabel; // x21
  System_String_o *v83; // x0
  UILabel_o *baseTitleLabel; // x21
  System_String_o *v85; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  UILabel_o *titleLabel; // x20
  System_String_o *v91; // x0
  UILabel_o *messageLabel; // x20
  System_String_o *v93; // x0
  UILabel_o *decideLabel; // x20
  System_String_o *v95; // x0
  UILabel_o *cancelLabel; // x20
  __int64 *v97; // x8
  UILabel_o *v98; // x20
  System_String_o *v99; // x0
  UILabel_o *v100; // x20
  System_String_o *v101; // x0
  UILabel_o *v102; // x20
  System_String_o *v103; // x0
  UILabel_o *v104; // x20
  System_String_o *v105; // x0
  UILabel_o *v106; // x20
  System_String_o *v107; // x0
  UILabel_o *v108; // x20
  System_String_o *v109; // x0
  UILabel_o *v110; // x20
  System_String_o *v111; // x0
  UILabel_o *v112; // x20
  System_String_o *v113; // x0
  UILabel_o *v114; // x20
  System_String_o *v115; // x0
  UILabel_o *v116; // x20
  System_String_o *v117; // x0
  UILabel_o *v118; // x20
  System_String_o *v119; // x0
  UILabel_o *v120; // x20
  System_String_o *v121; // x0
  UILabel_o *v122; // x20
  System_String_o *v123; // x0
  UILabel_o *v124; // x20
  System_String_o *v125; // x0
  UILabel_o *v126; // x20
  System_String_o *v127; // x0
  UILabel_o *v128; // x20
  System_String_o *v129; // x0
  UILabel_o *v130; // x20
  System_String_o *v131; // x0
  UILabel_o *v132; // x20
  System_String_o *v133; // x0
  System_String_o *v134; // x0
  System_Action_o *v135; // x20

  if ( (byte_40FDC27 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&Method_PartyOrganizationConfirmDeck2Menu_EndOpen__, v15);
    sub_B16FFC(&StringLiteral_10186/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/, v16);
    sub_B16FFC(&StringLiteral_10237/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/, v17);
    sub_B16FFC(&StringLiteral_10209/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/, v18);
    sub_B16FFC(&StringLiteral_10241/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/, v19);
    sub_B16FFC(&StringLiteral_10185/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/, v20);
    sub_B16FFC(&StringLiteral_10258/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/, v21);
    sub_B16FFC(&StringLiteral_10242/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/, v22);
    sub_B16FFC(&StringLiteral_10184/*"PARTY_ORGANIZATION_CONFIRM2_BASE_PARTY_TITLE"*/, v23);
    sub_B16FFC(&StringLiteral_10188/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_TITLE"*/, v24);
    sub_B16FFC(&StringLiteral_10250/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/, v25);
    sub_B16FFC(&StringLiteral_10284/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/, v26);
    sub_B16FFC(&StringLiteral_10286/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/, v27);
    sub_B16FFC(&StringLiteral_10251/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/, v28);
    sub_B16FFC(&StringLiteral_10207/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/, v29);
    sub_B16FFC(&StringLiteral_10257/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/, v30);
    sub_B16FFC(&StringLiteral_10238/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/, v31);
    sub_B16FFC(&StringLiteral_10285/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/, v32);
    sub_B16FFC(&StringLiteral_10252/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/, v33);
    sub_B16FFC(&StringLiteral_10244/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MESSAGE"*/, v34);
    sub_B16FFC(&StringLiteral_10253/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/, v35);
    sub_B16FFC(&StringLiteral_10187/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/, v36);
    sub_B16FFC(&StringLiteral_10231/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_CANCEL"*/, v37);
    sub_B16FFC(&StringLiteral_10206/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/, v38);
    sub_B16FFC(&StringLiteral_10245/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_TITLE"*/, v39);
    sub_B16FFC(&StringLiteral_10240/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/, v40);
    sub_B16FFC(&StringLiteral_10239/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/, v41);
    sub_B16FFC(&StringLiteral_10259/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/, v42);
    sub_B16FFC(&StringLiteral_10243/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/, v43);
    sub_B16FFC(&StringLiteral_10189/*"PARTY_ORGANIZATION_CONFIRM2_NOW_PARTY_TITLE"*/, v44);
    sub_B16FFC(&StringLiteral_10232/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_DECIDE"*/, v45);
    sub_B16FFC(&StringLiteral_10208/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/, v46);
    byte_40FDC27 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)basePartyItem,
      (System_String_array **)partyItem,
      (System_Boolean_array **)callback,
      (System_Int32_array **)method,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_111;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    memberObjectList = this->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_111;
    v49 = 0LL;
    while ( (int)v49 < (signed int)memberObjectList->max_length )
    {
      if ( partyItem )
      {
        Member = (PartyOrganizationConfirmDeck2Menu_o *)PartyListViewItem__GetMember(partyItem, v49, 0LL);
        IsHideRarity = PartyOrganizationConfirmDeck2Menu__IsHideRarity(
                         Member,
                         (PartyOrganizationListViewItem_o *)Member,
                         v51);
        v56 = this->fields.memberObjectList;
        if ( v56 )
        {
          if ( (unsigned int)v49 >= v56->max_length )
          {
LABEL_112:
            sub_B17100(IsHideRarity, v53, v54);
            sub_B170A0();
          }
          v57 = v56->m_Items[v49];
          if ( v57 )
          {
            PartyOrganizationConfirmItemDraw__SetItem(
              v57,
              (PartyOrganizationListViewItem_o *)Member,
              2,
              0,
              IsHideRarity,
              0,
              0,
              v55);
            memberObjectList = this->fields.memberObjectList;
            ++v49;
            if ( memberObjectList )
              continue;
          }
        }
      }
      goto LABEL_111;
    }
    baseObjectList = this->fields.baseObjectList;
    if ( !baseObjectList )
      goto LABEL_111;
    v59 = 0LL;
    while ( (int)v59 < (signed int)baseObjectList->max_length )
    {
      if ( basePartyItem )
      {
        v60 = (PartyOrganizationConfirmDeck2Menu_o *)PartyListViewItem__GetMember(basePartyItem, v59, 0LL);
        IsHideRarity = PartyOrganizationConfirmDeck2Menu__IsHideRarity(v60, (PartyOrganizationListViewItem_o *)v60, v61);
        v63 = this->fields.baseObjectList;
        if ( v63 )
        {
          if ( (unsigned int)v59 >= v63->max_length )
            goto LABEL_112;
          v64 = v63->m_Items[v59];
          if ( v64 )
          {
            PartyOrganizationConfirmItemDraw__SetItem(
              v64,
              (PartyOrganizationListViewItem_o *)v60,
              2,
              0,
              IsHideRarity,
              0,
              0,
              v62);
            baseObjectList = this->fields.baseObjectList;
            ++v59;
            if ( baseObjectList )
              continue;
          }
        }
      }
      goto LABEL_111;
    }
    if ( (unsigned int)kind <= 8 )
    {
      if ( ((1 << kind) & 0x37) != 0 )
      {
        decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
        if ( !decideButton )
          goto LABEL_111;
        v66 = UnityEngine_Component__get_gameObject(decideButton, 0LL);
        if ( !v66 )
          goto LABEL_111;
        UnityEngine_GameObject__SetActive(v66, 1, 0LL);
        cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
        if ( !cancelButton )
          goto LABEL_111;
        v68 = UnityEngine_Component__get_gameObject(cancelButton, 0LL);
        if ( !v68 )
          goto LABEL_111;
        UnityEngine_GameObject__SetActive(v68, 1, 0LL);
        closeButton = (UnityEngine_Component_o *)this->fields.closeButton;
        if ( !closeButton )
          goto LABEL_111;
        v70 = UnityEngine_Component__get_gameObject(closeButton, 0LL);
        if ( !v70 )
          goto LABEL_111;
        UnityEngine_GameObject__SetActive(v70, 0, 0LL);
        v71 = this->fields.decideButton;
        if ( !v71 )
          goto LABEL_111;
        ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v71->klass->vtable._14_SetState.method)(
          v71,
          0LL,
          1LL,
          v71->klass->vtable._15_OnPress.methodPtr);
        v72 = this->fields.cancelButton;
        if ( !v72 )
          goto LABEL_111;
        ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v72->klass->vtable._14_SetState.method)(
          v72,
          0LL,
          1LL,
          v72->klass->vtable._15_OnPress.methodPtr);
        v73 = (UnityEngine_Component_o *)this->fields.cancelButton;
        if ( !v73 )
          goto LABEL_111;
      }
      else
      {
        if ( ((1 << kind) & 0x1C0) == 0 )
          goto LABEL_49;
        v74 = (UnityEngine_Component_o *)this->fields.decideButton;
        if ( !v74 )
          goto LABEL_111;
        v75 = UnityEngine_Component__get_gameObject(v74, 0LL);
        if ( !v75 )
          goto LABEL_111;
        UnityEngine_GameObject__SetActive(v75, 0, 0LL);
        v76 = (UnityEngine_Component_o *)this->fields.cancelButton;
        if ( !v76 )
          goto LABEL_111;
        v77 = UnityEngine_Component__get_gameObject(v76, 0LL);
        if ( !v77 )
          goto LABEL_111;
        UnityEngine_GameObject__SetActive(v77, 0, 0LL);
        v78 = (UnityEngine_Component_o *)this->fields.closeButton;
        if ( !v78 )
          goto LABEL_111;
        v79 = UnityEngine_Component__get_gameObject(v78, 0LL);
        if ( !v79 )
          goto LABEL_111;
        UnityEngine_GameObject__SetActive(v79, 1, 0LL);
        v80 = this->fields.closeButton;
        if ( !v80 )
          goto LABEL_111;
        ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v80->klass->vtable._14_SetState.method)(
          v80,
          0LL,
          1LL,
          v80->klass->vtable._15_OnPress.methodPtr);
        v73 = (UnityEngine_Component_o *)this->fields.closeButton;
        if ( !v73 )
          goto LABEL_111;
      }
      v81 = UnityEngine_Component__get_gameObject(v73, 0LL);
      if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
      }
      AndroidBackKeyManager__AddBackBtn(v81, 0LL);
    }
LABEL_49:
    memberTitleLabel = this->fields.memberTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v83 = LocalizationManager__Get((System_String_o *)StringLiteral_10189/*"PARTY_ORGANIZATION_CONFIRM2_NOW_PARTY_TITLE"*/, 0LL);
    if ( memberTitleLabel )
    {
      UILabel__set_text(memberTitleLabel, v83, 0LL);
      baseTitleLabel = this->fields.baseTitleLabel;
      v85 = LocalizationManager__Get((System_String_o *)StringLiteral_10184/*"PARTY_ORGANIZATION_CONFIRM2_BASE_PARTY_TITLE"*/, 0LL);
      if ( baseTitleLabel )
      {
        UILabel__set_text(baseTitleLabel, v85, 0LL);
        switch ( kind )
        {
          case 0:
            titleLabel = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v91 = LocalizationManager__Get((System_String_o *)StringLiteral_10188/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_TITLE"*/, 0LL);
            if ( !titleLabel )
              goto LABEL_111;
            UILabel__set_text(titleLabel, v91, 0LL);
            messageLabel = this->fields.messageLabel;
            v93 = LocalizationManager__Get((System_String_o *)StringLiteral_10187/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/, 0LL);
            if ( !messageLabel )
              goto LABEL_111;
            UILabel__set_text(messageLabel, v93, 0LL);
            decideLabel = this->fields.decideLabel;
            v95 = LocalizationManager__Get((System_String_o *)StringLiteral_10186/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/, 0LL);
            if ( !decideLabel )
              goto LABEL_111;
            UILabel__set_text(decideLabel, v95, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v97 = &StringLiteral_10185/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/;
            break;
          case 1:
            v98 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v99 = LocalizationManager__Get((System_String_o *)StringLiteral_10209/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/, 0LL);
            if ( !v98 )
              goto LABEL_111;
            UILabel__set_text(v98, v99, 0LL);
            v100 = this->fields.messageLabel;
            v101 = LocalizationManager__Get((System_String_o *)StringLiteral_10208/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/, 0LL);
            if ( !v100 )
              goto LABEL_111;
            UILabel__set_text(v100, v101, 0LL);
            v102 = this->fields.decideLabel;
            v103 = LocalizationManager__Get((System_String_o *)StringLiteral_10207/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/, 0LL);
            if ( !v102 )
              goto LABEL_111;
            UILabel__set_text(v102, v103, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v97 = &StringLiteral_10206/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/;
            break;
          case 2:
            v104 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v105 = LocalizationManager__Get((System_String_o *)StringLiteral_10253/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/, 0LL);
            if ( !v104 )
              goto LABEL_111;
            UILabel__set_text(v104, v105, 0LL);
            v106 = this->fields.messageLabel;
            v107 = LocalizationManager__Get((System_String_o *)StringLiteral_10252/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/, 0LL);
            if ( !v106 )
              goto LABEL_111;
            UILabel__set_text(v106, v107, 0LL);
            v108 = this->fields.decideLabel;
            v109 = LocalizationManager__Get((System_String_o *)StringLiteral_10251/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/, 0LL);
            if ( !v108 )
              goto LABEL_111;
            UILabel__set_text(v108, v109, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v97 = &StringLiteral_10250/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/;
            break;
          case 4:
            v122 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v123 = LocalizationManager__Get((System_String_o *)StringLiteral_10245/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_TITLE"*/, 0LL);
            if ( !v122 )
              goto LABEL_111;
            UILabel__set_text(v122, v123, 0LL);
            v124 = this->fields.messageLabel;
            v125 = LocalizationManager__Get((System_String_o *)StringLiteral_10244/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MESSAGE"*/, 0LL);
            if ( !v124 )
              goto LABEL_111;
            UILabel__set_text(v124, v125, 0LL);
            v126 = this->fields.decideLabel;
            v127 = LocalizationManager__Get((System_String_o *)StringLiteral_10232/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_DECIDE"*/, 0LL);
            if ( !v126 )
              goto LABEL_111;
            UILabel__set_text(v126, v127, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v97 = &StringLiteral_10231/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_CANCEL"*/;
            break;
          case 5:
            v128 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v129 = LocalizationManager__Get((System_String_o *)StringLiteral_10243/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/, 0LL);
            if ( !v128 )
              goto LABEL_111;
            UILabel__set_text(v128, v129, 0LL);
            v130 = this->fields.messageLabel;
            v131 = LocalizationManager__Get((System_String_o *)StringLiteral_10242/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/, 0LL);
            if ( !v130 )
              goto LABEL_111;
            UILabel__set_text(v130, v131, 0LL);
            v132 = this->fields.decideLabel;
            v133 = LocalizationManager__Get((System_String_o *)StringLiteral_10238/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/, 0LL);
            if ( !v132 )
              goto LABEL_111;
            UILabel__set_text(v132, v133, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v97 = &StringLiteral_10237/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/;
            break;
          case 6:
            v110 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v111 = LocalizationManager__Get((System_String_o *)StringLiteral_10241/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/, 0LL);
            if ( !v110 )
              goto LABEL_111;
            UILabel__set_text(v110, v111, 0LL);
            v112 = this->fields.messageLabel;
            v113 = LocalizationManager__Get((System_String_o *)StringLiteral_10240/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/, 0LL);
            if ( !v112 )
              goto LABEL_111;
            UILabel__set_text(v112, v113, 0LL);
            cancelLabel = this->fields.closeLabel;
            v97 = &StringLiteral_10239/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/;
            break;
          case 7:
            v114 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v115 = LocalizationManager__Get((System_String_o *)StringLiteral_10286/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/, 0LL);
            if ( !v114 )
              goto LABEL_111;
            UILabel__set_text(v114, v115, 0LL);
            v116 = this->fields.messageLabel;
            v117 = LocalizationManager__Get((System_String_o *)StringLiteral_10285/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/, 0LL);
            if ( !v116 )
              goto LABEL_111;
            UILabel__set_text(v116, v117, 0LL);
            cancelLabel = this->fields.closeLabel;
            v97 = &StringLiteral_10284/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/;
            break;
          case 8:
            v118 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v119 = LocalizationManager__Get((System_String_o *)StringLiteral_10259/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/, 0LL);
            if ( !v118 )
              goto LABEL_111;
            UILabel__set_text(v118, v119, 0LL);
            v120 = this->fields.messageLabel;
            v121 = LocalizationManager__Get((System_String_o *)StringLiteral_10258/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/, 0LL);
            if ( !v120 )
              goto LABEL_111;
            UILabel__set_text(v120, v121, 0LL);
            cancelLabel = this->fields.closeLabel;
            v97 = &StringLiteral_10257/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/;
            break;
          default:
            goto LABEL_110;
        }
        v134 = LocalizationManager__Get((System_String_o *)*v97, 0LL);
        if ( cancelLabel )
        {
          UILabel__set_text(cancelLabel, v134, 0LL);
LABEL_110:
          this->fields.state = 1;
          v135 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v86, v87, v88, v89);
          System_Action___ctor(v135, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeck2Menu_EndOpen__, 0LL);
          BaseDialog__Open((BaseDialog_o *)this, v135, 0, 0LL);
          return;
        }
      }
    }
LABEL_111:
    sub_B170D4();
  }
}


void __fastcall PartyOrganizationConfirmDeck2Menu__add_callbackFunc(
        PartyOrganizationConfirmDeck2Menu_o *this,
        PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmDeck2Menu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationConfirmDeck2Menu_o *v11; // x0
  PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FDC24 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo, value);
    byte_40FDC24 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmDeck2Menu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  PartyOrganizationConfirmDeck2Menu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PartyOrganizationConfirmDeck2Menu__remove_callbackFunc(
        PartyOrganizationConfirmDeck2Menu_o *this,
        PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmDeck2Menu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationConfirmDeck2Menu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40FDC25 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo, value);
    byte_40FDC25 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmDeck2Menu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  PartyOrganizationConfirmDeck2Menu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmDeck2Menu_CallbackFunc___ctor(
        PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *this,
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
System_IAsyncResult_o *__fastcall PartyOrganizationConfirmDeck2Menu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_40F8373 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F8373 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmDeck2Menu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmDeck2Menu_CallbackFunc__Invoke(
        PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  PartyOrganizationConfirmDeck2Menu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (PartyOrganizationConfirmDeck2Menu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
    goto LABEL_37;
  }
}