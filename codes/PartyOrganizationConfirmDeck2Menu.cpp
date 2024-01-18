void __fastcall PartyOrganizationConfirmDeck2Menu___ctor(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  struct PartyOrganizationConfirmItemDraw_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct PartyOrganizationConfirmItemDraw_array *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_418B690 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&BaseDialog_TypeInfo, v3);
    sub_B2C35C(&PartyOrganizationConfirmItemDraw___TypeInfo, v4);
    byte_418B690 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct PartyOrganizationConfirmItemDraw_array *)sub_B2C374(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v5->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.memberObjectList,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (struct PartyOrganizationConfirmItemDraw_array *)sub_B2C374(
                                                           PartyOrganizationConfirmItemDraw___TypeInfo,
                                                           (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
  this->fields.baseObjectList = v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseObjectList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PartyOrganizationConfirmDeck2Menu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall PartyOrganizationConfirmDeck2Menu__Close(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmDeck2Menu__Close_32163400(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmDeck2Menu__Close_32163400(
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
  System_Action_o *v11; // x20

  if ( (byte_418B68C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_PartyOrganizationConfirmDeck2Menu_EndClose__, v10);
    byte_418B68C = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeck2Menu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_418B689 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418B689 = 1;
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
    sub_B2C434(titleLabel, method);
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
  __int64 v4; // x1
  __int64 v5; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w21
  int32_t questPhase; // w22
  NpcServantFollowerMaster_o *v9; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418B68B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, member);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    this = (PartyOrganizationConfirmDeck2Menu_o *)sub_B2C35C(
                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                    v5);
    byte_418B68B = 1;
  }
  npcServantFollowerEntity = 0LL;
  if ( !member )
    goto LABEL_18;
  if ( !member->fields.questRestrictionInfo )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyOrganizationConfirmDeck2Menu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  questRestrictionInfo = member->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_18;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  v9 = (NpcServantFollowerMaster_o *)this;
  SvtId = PartyOrganizationListViewItem__get_SvtId(member, (const MethodInfo *)member);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  this = (PartyOrganizationConfirmDeck2Menu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                  SvtId,
                                                  0LL);
  if ( !v9 )
LABEL_18:
    sub_B2C434(this, member);
  this = (PartyOrganizationConfirmDeck2Menu_o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                                  v9,
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
  const MethodInfo *v3; // x2

  if ( (byte_418B68E & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B68E = 1;
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

  if ( (byte_418B68F & 1) == 0 )
  {
    sub_B2C35C(&Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__, method);
    byte_418B68F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    PartyOrganizationConfirmDeck2Menu__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationConfirmDeck2Menu__OnClickDecide(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_418B68D & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B68D = 1;
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
  __int64 v48; // x1
  struct PartyOrganizationConfirmItemDraw_array *memberObjectList; // x8
  __int64 v50; // x23
  PartyOrganizationConfirmDeck2Menu_o *Member; // x24
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x7
  struct PartyOrganizationConfirmItemDraw_array *v54; // x8
  PartyOrganizationConfirmItemDraw_o *v55; // x8
  struct PartyOrganizationConfirmItemDraw_array *baseObjectList; // x8
  __int64 v57; // x22
  PartyOrganizationConfirmDeck2Menu_o *v58; // x23
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x7
  struct PartyOrganizationConfirmItemDraw_array *v61; // x8
  PartyOrganizationConfirmItemDraw_o *v62; // x8
  UnityEngine_GameObject_o *v63; // x21
  UILabel_o *memberTitleLabel; // x21
  UILabel_o *baseTitleLabel; // x21
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  __int64 *v70; // x8
  UILabel_o *v71; // x20
  UILabel_o *v72; // x20
  UILabel_o *v73; // x20
  UILabel_o *v74; // x20
  UILabel_o *v75; // x20
  UILabel_o *v76; // x20
  UILabel_o *v77; // x20
  UILabel_o *v78; // x20
  UILabel_o *v79; // x20
  UILabel_o *v80; // x20
  UILabel_o *v81; // x20
  UILabel_o *v82; // x20
  UILabel_o *v83; // x20
  UILabel_o *v84; // x20
  UILabel_o *v85; // x20
  UILabel_o *v86; // x20
  UILabel_o *v87; // x20
  UILabel_o *v88; // x20
  System_Action_o *v89; // x20
  __int64 v90; // x0

  if ( (byte_418B68A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&Method_PartyOrganizationConfirmDeck2Menu_EndOpen__, v15);
    sub_B2C35C(&StringLiteral_10219/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/, v16);
    sub_B2C35C(&StringLiteral_10270/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/, v17);
    sub_B2C35C(&StringLiteral_10242/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/, v18);
    sub_B2C35C(&StringLiteral_10274/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/, v19);
    sub_B2C35C(&StringLiteral_10218/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/, v20);
    sub_B2C35C(&StringLiteral_10291/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/, v21);
    sub_B2C35C(&StringLiteral_10275/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/, v22);
    sub_B2C35C(&StringLiteral_10217/*"PARTY_ORGANIZATION_CONFIRM2_BASE_PARTY_TITLE"*/, v23);
    sub_B2C35C(&StringLiteral_10221/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_TITLE"*/, v24);
    sub_B2C35C(&StringLiteral_10283/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/, v25);
    sub_B2C35C(&StringLiteral_10317/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/, v26);
    sub_B2C35C(&StringLiteral_10319/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/, v27);
    sub_B2C35C(&StringLiteral_10284/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/, v28);
    sub_B2C35C(&StringLiteral_10240/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/, v29);
    sub_B2C35C(&StringLiteral_10290/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/, v30);
    sub_B2C35C(&StringLiteral_10271/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/, v31);
    sub_B2C35C(&StringLiteral_10318/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/, v32);
    sub_B2C35C(&StringLiteral_10285/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/, v33);
    sub_B2C35C(&StringLiteral_10277/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MESSAGE"*/, v34);
    sub_B2C35C(&StringLiteral_10286/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/, v35);
    sub_B2C35C(&StringLiteral_10220/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/, v36);
    sub_B2C35C(&StringLiteral_10264/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_CANCEL"*/, v37);
    sub_B2C35C(&StringLiteral_10239/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/, v38);
    sub_B2C35C(&StringLiteral_10278/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_TITLE"*/, v39);
    sub_B2C35C(&StringLiteral_10273/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/, v40);
    sub_B2C35C(&StringLiteral_10272/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/, v41);
    sub_B2C35C(&StringLiteral_10292/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/, v42);
    sub_B2C35C(&StringLiteral_10276/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/, v43);
    sub_B2C35C(&StringLiteral_10222/*"PARTY_ORGANIZATION_CONFIRM2_NOW_PARTY_TITLE"*/, v44);
    sub_B2C35C(&StringLiteral_10265/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_DECIDE"*/, v45);
    sub_B2C35C(&StringLiteral_10241/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/, v46);
    byte_418B68A = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
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
    v50 = 0LL;
    while ( (int)v50 < (signed int)memberObjectList->max_length )
    {
      if ( partyItem )
      {
        Member = (PartyOrganizationConfirmDeck2Menu_o *)PartyListViewItem__GetMember(partyItem, v50, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyOrganizationConfirmDeck2Menu__IsHideRarity(
                                                   Member,
                                                   (PartyOrganizationListViewItem_o *)Member,
                                                   v52);
        v54 = this->fields.memberObjectList;
        if ( v54 )
        {
          if ( (unsigned int)v50 >= v54->max_length )
          {
LABEL_112:
            v90 = sub_B2C460(gameObject);
            sub_B2C400(v90, 0LL);
          }
          v55 = v54->m_Items[v50];
          if ( v55 )
          {
            PartyOrganizationConfirmItemDraw__SetItem(
              v55,
              (PartyOrganizationListViewItem_o *)Member,
              2,
              0,
              (unsigned __int8)gameObject & 1,
              0,
              0,
              v53);
            memberObjectList = this->fields.memberObjectList;
            ++v50;
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
    v57 = 0LL;
    while ( (int)v57 < (signed int)baseObjectList->max_length )
    {
      if ( basePartyItem )
      {
        v58 = (PartyOrganizationConfirmDeck2Menu_o *)PartyListViewItem__GetMember(basePartyItem, v57, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyOrganizationConfirmDeck2Menu__IsHideRarity(
                                                   v58,
                                                   (PartyOrganizationListViewItem_o *)v58,
                                                   v59);
        v61 = this->fields.baseObjectList;
        if ( v61 )
        {
          if ( (unsigned int)v57 >= v61->max_length )
            goto LABEL_112;
          v62 = v61->m_Items[v57];
          if ( v62 )
          {
            PartyOrganizationConfirmItemDraw__SetItem(
              v62,
              (PartyOrganizationListViewItem_o *)v58,
              2,
              0,
              (unsigned __int8)gameObject & 1,
              0,
              0,
              v60);
            baseObjectList = this->fields.baseObjectList;
            ++v57;
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
      v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
      }
      AndroidBackKeyManager__AddBackBtn(v63, 0LL);
    }
LABEL_49:
    memberTitleLabel = this->fields.memberTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10222/*"PARTY_ORGANIZATION_CONFIRM2_NOW_PARTY_TITLE"*/, 0LL);
    if ( memberTitleLabel )
    {
      UILabel__set_text(memberTitleLabel, (System_String_o *)gameObject, 0LL);
      baseTitleLabel = this->fields.baseTitleLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10217/*"PARTY_ORGANIZATION_CONFIRM2_BASE_PARTY_TITLE"*/, 0LL);
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
                                                       (System_String_o *)StringLiteral_10221/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_TITLE"*/,
                                                       0LL);
            if ( !titleLabel )
              goto LABEL_111;
            UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
            messageLabel = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10220/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/,
                                                       0LL);
            if ( !messageLabel )
              goto LABEL_111;
            UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
            decideLabel = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10219/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/,
                                                       0LL);
            if ( !decideLabel )
              goto LABEL_111;
            UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v70 = &StringLiteral_10218/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/;
            break;
          case 1:
            v71 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10242/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/,
                                                       0LL);
            if ( !v71 )
              goto LABEL_111;
            UILabel__set_text(v71, (System_String_o *)gameObject, 0LL);
            v72 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10241/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/,
                                                       0LL);
            if ( !v72 )
              goto LABEL_111;
            UILabel__set_text(v72, (System_String_o *)gameObject, 0LL);
            v73 = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10240/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/,
                                                       0LL);
            if ( !v73 )
              goto LABEL_111;
            UILabel__set_text(v73, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v70 = &StringLiteral_10239/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/;
            break;
          case 2:
            v74 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10286/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/,
                                                       0LL);
            if ( !v74 )
              goto LABEL_111;
            UILabel__set_text(v74, (System_String_o *)gameObject, 0LL);
            v75 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10285/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/,
                                                       0LL);
            if ( !v75 )
              goto LABEL_111;
            UILabel__set_text(v75, (System_String_o *)gameObject, 0LL);
            v76 = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10284/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/,
                                                       0LL);
            if ( !v76 )
              goto LABEL_111;
            UILabel__set_text(v76, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v70 = &StringLiteral_10283/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/;
            break;
          case 4:
            v83 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10278/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_TITLE"*/,
                                                       0LL);
            if ( !v83 )
              goto LABEL_111;
            UILabel__set_text(v83, (System_String_o *)gameObject, 0LL);
            v84 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10277/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MESSAGE"*/,
                                                       0LL);
            if ( !v84 )
              goto LABEL_111;
            UILabel__set_text(v84, (System_String_o *)gameObject, 0LL);
            v85 = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10265/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_DECIDE"*/,
                                                       0LL);
            if ( !v85 )
              goto LABEL_111;
            UILabel__set_text(v85, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v70 = &StringLiteral_10264/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_CANCEL"*/;
            break;
          case 5:
            v86 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10276/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/,
                                                       0LL);
            if ( !v86 )
              goto LABEL_111;
            UILabel__set_text(v86, (System_String_o *)gameObject, 0LL);
            v87 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10275/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/,
                                                       0LL);
            if ( !v87 )
              goto LABEL_111;
            UILabel__set_text(v87, (System_String_o *)gameObject, 0LL);
            v88 = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10271/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/,
                                                       0LL);
            if ( !v88 )
              goto LABEL_111;
            UILabel__set_text(v88, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v70 = &StringLiteral_10270/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/;
            break;
          case 6:
            v77 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10274/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/,
                                                       0LL);
            if ( !v77 )
              goto LABEL_111;
            UILabel__set_text(v77, (System_String_o *)gameObject, 0LL);
            v78 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10273/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/,
                                                       0LL);
            if ( !v78 )
              goto LABEL_111;
            UILabel__set_text(v78, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.closeLabel;
            v70 = &StringLiteral_10272/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/;
            break;
          case 7:
            v79 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10319/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/,
                                                       0LL);
            if ( !v79 )
              goto LABEL_111;
            UILabel__set_text(v79, (System_String_o *)gameObject, 0LL);
            v80 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10318/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/,
                                                       0LL);
            if ( !v80 )
              goto LABEL_111;
            UILabel__set_text(v80, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.closeLabel;
            v70 = &StringLiteral_10317/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/;
            break;
          case 8:
            v81 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10292/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/,
                                                       0LL);
            if ( !v81 )
              goto LABEL_111;
            UILabel__set_text(v81, (System_String_o *)gameObject, 0LL);
            v82 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10291/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/,
                                                       0LL);
            if ( !v82 )
              goto LABEL_111;
            UILabel__set_text(v82, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.closeLabel;
            v70 = &StringLiteral_10290/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/;
            break;
          default:
            goto LABEL_110;
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v70, 0LL);
        if ( cancelLabel )
        {
          UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
LABEL_110:
          this->fields.state = 1;
          v89 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(v89, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeck2Menu_EndOpen__, 0LL);
          BaseDialog__Open((BaseDialog_o *)this, v89, 0, 0LL);
          return;
        }
      }
    }
LABEL_111:
    sub_B2C434(gameObject, v48);
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

  if ( (byte_418B687 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo, value);
    byte_418B687 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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

  if ( (byte_418B688 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo, value);
    byte_418B688 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  PartyOrganizationConfirmDeck2Menu__Init(v11, v12);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4185289 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_4185289 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmDeck2Menu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmDeck2Menu_CallbackFunc__Invoke(
        PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  PartyOrganizationConfirmDeck2Menu_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (PartyOrganizationConfirmDeck2Menu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, result, v22);
    goto LABEL_37;
  }
}