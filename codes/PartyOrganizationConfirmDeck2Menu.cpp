void __fastcall PartyOrganizationConfirmDeck2Menu___ctor(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BalanceConfig_c *v11; // x0
  struct PartyOrganizationConfirmItemDraw_array *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct PartyOrganizationConfirmItemDraw_array *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42EB067 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BaseDialog_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&PartyOrganizationConfirmItemDraw___TypeInfo, v8, v9, v10);
    byte_42EB067 = 1;
  }
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  v12 = (struct PartyOrganizationConfirmItemDraw_array *)sub_B5D5DC(
                                                           PartyOrganizationConfirmItemDraw___TypeInfo,
                                                           (unsigned int)v11->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v12;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.memberObjectList,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (struct PartyOrganizationConfirmItemDraw_array *)sub_B5D5DC(
                                                           PartyOrganizationConfirmItemDraw___TypeInfo,
                                                           (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
  this->fields.baseObjectList = v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseObjectList,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PartyOrganizationConfirmDeck2Menu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall PartyOrganizationConfirmDeck2Menu__Close(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmDeck2Menu__Close_29708940(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmDeck2Menu__Close_29708940(
        PartyOrganizationConfirmDeck2Menu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42EB063 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PartyOrganizationConfirmDeck2Menu_EndClose__, v10, v11, v12);
    byte_42EB063 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeck2Menu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B5D560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *titleLabel; // x0

  if ( (byte_42EB060 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EB060 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.cancelLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeLabel) == 0LL) )
  {
LABEL_9:
    sub_B5D69C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


bool __fastcall PartyOrganizationConfirmDeck2Menu__IsHideRarity(
        PartyOrganizationConfirmDeck2Menu_o *this,
        PartyOrganizationListViewItem_o *member,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w21
  int32_t questPhase; // w22
  NpcServantFollowerMaster_o *v14; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EB062 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, (_DWORD)member, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    this = (PartyOrganizationConfirmDeck2Menu_o *)sub_B5D5C4(
                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                    v8,
                                                    v9,
                                                    v10);
    byte_42EB062 = 1;
  }
  npcServantFollowerEntity = 0LL;
  if ( !member )
    goto LABEL_18;
  if ( !member->fields.questRestrictionInfo )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyOrganizationConfirmDeck2Menu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  questRestrictionInfo = member->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_18;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  v14 = (NpcServantFollowerMaster_o *)this;
  SvtId = PartyOrganizationListViewItem__get_SvtId(member, (const MethodInfo *)member);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  this = (PartyOrganizationConfirmDeck2Menu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                  SvtId,
                                                  0LL);
  if ( !v14 )
LABEL_18:
    sub_B5D69C(this, member);
  this = (PartyOrganizationConfirmDeck2Menu_o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                                  v14,
                                                  &npcServantFollowerEntity,
                                                  questId,
                                                  questPhase,
                                                  (int32_t)this,
                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !npcServantFollowerEntity )
    goto LABEL_18;
  return NpcServantFollowerEntity__IsHideRarity(npcServantFollowerEntity->fields.flag, 0LL);
}


void __fastcall PartyOrganizationConfirmDeck2Menu__OnClickCancel(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42EB065 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB065 = 1;
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
    PartyOrganizationConfirmDeck2Menu__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationConfirmDeck2Menu__OnClickClose(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_42EB066 & 1) == 0 )
  {
    sub_B5D5C4(&Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__, (_DWORD)method, v2, v3);
    byte_42EB066 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    PartyOrganizationConfirmDeck2Menu__Callback(this, 0, v7);
  }
}


void __fastcall PartyOrganizationConfirmDeck2Menu__OnClickDecide(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42EB064 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB064 = 1;
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
    PartyOrganizationConfirmDeck2Menu__Callback(this, 1, v5);
  }
}


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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  int v103; // w1
  int v104; // w2
  __int64 v105; // x3
  int v106; // w1
  int v107; // w2
  __int64 v108; // x3
  int v109; // w1
  int v110; // w2
  __int64 v111; // x3
  int v112; // w1
  int v113; // w2
  __int64 v114; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v116; // x1
  struct PartyOrganizationConfirmItemDraw_array *memberObjectList; // x8
  __int64 v118; // x23
  PartyOrganizationConfirmDeck2Menu_o *Member; // x24
  const MethodInfo *v120; // x2
  const MethodInfo *v121; // x7
  struct PartyOrganizationConfirmItemDraw_array *v122; // x8
  PartyOrganizationConfirmItemDraw_o *v123; // x8
  struct PartyOrganizationConfirmItemDraw_array *baseObjectList; // x8
  __int64 v125; // x22
  PartyOrganizationConfirmDeck2Menu_o *v126; // x23
  const MethodInfo *v127; // x2
  const MethodInfo *v128; // x7
  struct PartyOrganizationConfirmItemDraw_array *v129; // x8
  PartyOrganizationConfirmItemDraw_o *v130; // x8
  UnityEngine_GameObject_o *v131; // x21
  UILabel_o *memberTitleLabel; // x21
  UILabel_o *baseTitleLabel; // x21
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  __int64 *v138; // x8
  UILabel_o *v139; // x20
  UILabel_o *v140; // x20
  UILabel_o *v141; // x20
  UILabel_o *v142; // x20
  UILabel_o *v143; // x20
  UILabel_o *v144; // x20
  UILabel_o *v145; // x20
  UILabel_o *v146; // x20
  UILabel_o *v147; // x20
  UILabel_o *v148; // x20
  UILabel_o *v149; // x20
  UILabel_o *v150; // x20
  UILabel_o *v151; // x20
  UILabel_o *v152; // x20
  UILabel_o *v153; // x20
  UILabel_o *v154; // x20
  UILabel_o *v155; // x20
  UILabel_o *v156; // x20
  System_Action_o *v157; // x20
  __int64 v158; // x0

  if ( (byte_42EB061 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, (_DWORD)basePartyItem, partyItem);
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_PartyOrganizationConfirmDeck2Menu_EndOpen__, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_10325/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_10376/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_10348/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_10380/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_10324/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_10397/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_10381/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_10323/*"PARTY_ORGANIZATION_CONFIRM2_BASE_PARTY_TITLE"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_10327/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_TITLE"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_10389/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_10423/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_10425/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_10390/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_10346/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_10396/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_10377/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_10424/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_10391/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/, v73, v74, v75);
    sub_B5D5C4(&StringLiteral_10383/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MESSAGE"*/, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_10392/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/, v79, v80, v81);
    sub_B5D5C4(&StringLiteral_10326/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/, v82, v83, v84);
    sub_B5D5C4(&StringLiteral_10370/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_CANCEL"*/, v85, v86, v87);
    sub_B5D5C4(&StringLiteral_10345/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/, v88, v89, v90);
    sub_B5D5C4(&StringLiteral_10384/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_TITLE"*/, v91, v92, v93);
    sub_B5D5C4(&StringLiteral_10379/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/, v94, v95, v96);
    sub_B5D5C4(&StringLiteral_10378/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/, v97, v98, v99);
    sub_B5D5C4(&StringLiteral_10398/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/, v100, v101, v102);
    sub_B5D5C4(&StringLiteral_10382/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/, v103, v104, v105);
    sub_B5D5C4(&StringLiteral_10328/*"PARTY_ORGANIZATION_CONFIRM2_NOW_PARTY_TITLE"*/, v106, v107, v108);
    sub_B5D5C4(&StringLiteral_10371/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_DECIDE"*/, v109, v110, v111);
    sub_B5D5C4(&StringLiteral_10347/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/, v112, v113, v114);
    byte_42EB061 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B5D560(
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
    v118 = 0LL;
    while ( (int)v118 < (signed int)memberObjectList->max_length )
    {
      if ( partyItem )
      {
        Member = (PartyOrganizationConfirmDeck2Menu_o *)PartyListViewItem__GetMember(partyItem, v118, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyOrganizationConfirmDeck2Menu__IsHideRarity(
                                                   Member,
                                                   (PartyOrganizationListViewItem_o *)Member,
                                                   v120);
        v122 = this->fields.memberObjectList;
        if ( v122 )
        {
          if ( (unsigned int)v118 >= v122->max_length )
          {
LABEL_112:
            v158 = sub_B5D6C8(gameObject);
            sub_B5D668(v158, 0LL);
          }
          v123 = v122->m_Items[v118];
          if ( v123 )
          {
            PartyOrganizationConfirmItemDraw__SetItem(
              v123,
              (PartyOrganizationListViewItem_o *)Member,
              2,
              0,
              (unsigned __int8)gameObject & 1,
              0,
              0,
              v121);
            memberObjectList = this->fields.memberObjectList;
            ++v118;
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
    v125 = 0LL;
    while ( (int)v125 < (signed int)baseObjectList->max_length )
    {
      if ( basePartyItem )
      {
        v126 = (PartyOrganizationConfirmDeck2Menu_o *)PartyListViewItem__GetMember(basePartyItem, v125, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyOrganizationConfirmDeck2Menu__IsHideRarity(
                                                   v126,
                                                   (PartyOrganizationListViewItem_o *)v126,
                                                   v127);
        v129 = this->fields.baseObjectList;
        if ( v129 )
        {
          if ( (unsigned int)v125 >= v129->max_length )
            goto LABEL_112;
          v130 = v129->m_Items[v125];
          if ( v130 )
          {
            PartyOrganizationConfirmItemDraw__SetItem(
              v130,
              (PartyOrganizationListViewItem_o *)v126,
              2,
              0,
              (unsigned __int8)gameObject & 1,
              0,
              0,
              v128);
            baseObjectList = this->fields.baseObjectList;
            ++v125;
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
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( !gameObject )
          goto LABEL_111;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_111;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_111;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_111;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_111;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_111;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( !gameObject )
          goto LABEL_111;
        ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
          gameObject,
          0LL,
          1LL,
          gameObject->klass[1]._1.interfaceOffsets);
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_111;
        ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
          gameObject,
          0LL,
          1LL,
          gameObject->klass[1]._1.interfaceOffsets);
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_111;
      }
      else
      {
        if ( ((1 << kind) & 0x1C0) == 0 )
          goto LABEL_49;
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( !gameObject )
          goto LABEL_111;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_111;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_111;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_111;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_111;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_111;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_111;
        ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
          gameObject,
          0LL,
          1LL,
          gameObject->klass[1]._1.interfaceOffsets);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_111;
      }
      v131 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
      }
      AndroidBackKeyManager__AddBackBtn(v131, 0LL);
    }
LABEL_49:
    memberTitleLabel = this->fields.memberTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10328/*"PARTY_ORGANIZATION_CONFIRM2_NOW_PARTY_TITLE"*/, 0LL);
    if ( memberTitleLabel )
    {
      UILabel__set_text(memberTitleLabel, (System_String_o *)gameObject, 0LL);
      baseTitleLabel = this->fields.baseTitleLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10323/*"PARTY_ORGANIZATION_CONFIRM2_BASE_PARTY_TITLE"*/, 0LL);
      if ( baseTitleLabel )
      {
        UILabel__set_text(baseTitleLabel, (System_String_o *)gameObject, 0LL);
        switch ( kind )
        {
          case 0:
            titleLabel = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10327/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_TITLE"*/,
                                                       0LL);
            if ( !titleLabel )
              goto LABEL_111;
            UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
            messageLabel = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10326/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/,
                                                       0LL);
            if ( !messageLabel )
              goto LABEL_111;
            UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
            decideLabel = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10325/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/,
                                                       0LL);
            if ( !decideLabel )
              goto LABEL_111;
            UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v138 = &StringLiteral_10324/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/;
            break;
          case 1:
            v139 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10348/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/,
                                                       0LL);
            if ( !v139 )
              goto LABEL_111;
            UILabel__set_text(v139, (System_String_o *)gameObject, 0LL);
            v140 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10347/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/,
                                                       0LL);
            if ( !v140 )
              goto LABEL_111;
            UILabel__set_text(v140, (System_String_o *)gameObject, 0LL);
            v141 = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10346/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/,
                                                       0LL);
            if ( !v141 )
              goto LABEL_111;
            UILabel__set_text(v141, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v138 = &StringLiteral_10345/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/;
            break;
          case 2:
            v142 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10392/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/,
                                                       0LL);
            if ( !v142 )
              goto LABEL_111;
            UILabel__set_text(v142, (System_String_o *)gameObject, 0LL);
            v143 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10391/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/,
                                                       0LL);
            if ( !v143 )
              goto LABEL_111;
            UILabel__set_text(v143, (System_String_o *)gameObject, 0LL);
            v144 = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10390/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/,
                                                       0LL);
            if ( !v144 )
              goto LABEL_111;
            UILabel__set_text(v144, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v138 = &StringLiteral_10389/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/;
            break;
          case 4:
            v151 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10384/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_TITLE"*/,
                                                       0LL);
            if ( !v151 )
              goto LABEL_111;
            UILabel__set_text(v151, (System_String_o *)gameObject, 0LL);
            v152 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10383/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MESSAGE"*/,
                                                       0LL);
            if ( !v152 )
              goto LABEL_111;
            UILabel__set_text(v152, (System_String_o *)gameObject, 0LL);
            v153 = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10371/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_DECIDE"*/,
                                                       0LL);
            if ( !v153 )
              goto LABEL_111;
            UILabel__set_text(v153, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v138 = &StringLiteral_10370/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_CANCEL"*/;
            break;
          case 5:
            v154 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10382/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/,
                                                       0LL);
            if ( !v154 )
              goto LABEL_111;
            UILabel__set_text(v154, (System_String_o *)gameObject, 0LL);
            v155 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10381/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/,
                                                       0LL);
            if ( !v155 )
              goto LABEL_111;
            UILabel__set_text(v155, (System_String_o *)gameObject, 0LL);
            v156 = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10377/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/,
                                                       0LL);
            if ( !v156 )
              goto LABEL_111;
            UILabel__set_text(v156, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v138 = &StringLiteral_10376/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/;
            break;
          case 6:
            v145 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10380/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/,
                                                       0LL);
            if ( !v145 )
              goto LABEL_111;
            UILabel__set_text(v145, (System_String_o *)gameObject, 0LL);
            v146 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10379/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/,
                                                       0LL);
            if ( !v146 )
              goto LABEL_111;
            UILabel__set_text(v146, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.closeLabel;
            v138 = &StringLiteral_10378/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/;
            break;
          case 7:
            v147 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10425/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/,
                                                       0LL);
            if ( !v147 )
              goto LABEL_111;
            UILabel__set_text(v147, (System_String_o *)gameObject, 0LL);
            v148 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10424/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/,
                                                       0LL);
            if ( !v148 )
              goto LABEL_111;
            UILabel__set_text(v148, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.closeLabel;
            v138 = &StringLiteral_10423/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/;
            break;
          case 8:
            v149 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10398/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/,
                                                       0LL);
            if ( !v149 )
              goto LABEL_111;
            UILabel__set_text(v149, (System_String_o *)gameObject, 0LL);
            v150 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10397/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/,
                                                       0LL);
            if ( !v150 )
              goto LABEL_111;
            UILabel__set_text(v150, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.closeLabel;
            v138 = &StringLiteral_10396/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/;
            break;
          default:
            goto LABEL_110;
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v138, 0LL);
        if ( cancelLabel )
        {
          UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
LABEL_110:
          this->fields.state = 1;
          v157 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(v157, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeck2Menu_EndOpen__, 0LL);
          BaseDialog__Open((BaseDialog_o *)this, v157, 0, 0LL);
          return;
        }
      }
    }
LABEL_111:
    sub_B5D69C(gameObject, v116);
  }
}


void __fastcall PartyOrganizationConfirmDeck2Menu__add_callbackFunc(
        PartyOrganizationConfirmDeck2Menu_o *this,
        PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct PartyOrganizationConfirmDeck2Menu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PartyOrganizationConfirmDeck2Menu_o *v12; // x0
  PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EB05E & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB05E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PartyOrganizationConfirmDeck2Menu_CallbackFunc_c *)v9->klass != PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  PartyOrganizationConfirmDeck2Menu__remove_callbackFunc(v12, v13, v14);
}


void __fastcall PartyOrganizationConfirmDeck2Menu__remove_callbackFunc(
        PartyOrganizationConfirmDeck2Menu_o *this,
        PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct PartyOrganizationConfirmDeck2Menu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PartyOrganizationConfirmDeck2Menu_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EB05F & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB05F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PartyOrganizationConfirmDeck2Menu_CallbackFunc_c *)v9->klass != PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  PartyOrganizationConfirmDeck2Menu__Init(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmDeck2Menu_CallbackFunc___ctor(
        PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *this,
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
  sub_B5D560(p_method);
}


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
  if ( (byte_42E5A7D & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5A7D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmDeck2Menu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, result, v21);
    goto LABEL_37;
  }
}