void PartyOrganizationConfirmDeck2Menu___ctor(PartyOrganizationConfirmDeck2Menu_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct PartyOrganizationConfirmItemDraw_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct PartyOrganizationConfirmItemDraw_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D280D7 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&BaseDialog_TypeInfo);
    sub_1C94098(&PartyOrganizationConfirmItemDraw___TypeInfo);
    byte_4D280D7 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct PartyOrganizationConfirmItemDraw_array *)sub_1C94140(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v4;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.memberObjectList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct PartyOrganizationConfirmItemDraw_array *)sub_1C94140(
                                                           PartyOrganizationConfirmItemDraw___TypeInfo,
                                                           (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
  this->fields.baseObjectList = v11;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.baseObjectList, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PartyOrganizationConfirmDeck2Menu__Callback(
        PartyOrganizationConfirmDeck2Menu_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *v9; // x20
  struct PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C9403C(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void PartyOrganizationConfirmDeck2Menu__Close(PartyOrganizationConfirmDeck2Menu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmDeck2Menu__Close_34780440(this, 0, v2);
}


void PartyOrganizationConfirmDeck2Menu__Close_34780440(
        PartyOrganizationConfirmDeck2Menu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4D280D3 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_PartyOrganizationConfirmDeck2Menu_EndClose__);
    byte_4D280D3 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeck2Menu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void PartyOrganizationConfirmDeck2Menu__EndClose(PartyOrganizationConfirmDeck2Menu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationConfirmDeck2Menu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C9403C(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void PartyOrganizationConfirmDeck2Menu__EndOpen(PartyOrganizationConfirmDeck2Menu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void PartyOrganizationConfirmDeck2Menu__Init(PartyOrganizationConfirmDeck2Menu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4D280D0 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D280D0 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.decideLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.cancelLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.closeLabel) == 0) )
  {
LABEL_9:
    sub_1C942F0(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


bool PartyOrganizationConfirmDeck2Menu__IsHideRarity(
        PartyOrganizationConfirmDeck2Menu_o *this,
        PartyOrganizationListViewItem_o *member,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w21
  int32_t questPhase; // w22
  NpcServantFollowerMaster_o *v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D280D2 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    this = (PartyOrganizationConfirmDeck2Menu_o *)sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D280D2 = 1;
  }
  npcServantFollowerEntity = 0;
  if ( !member )
    goto LABEL_16;
  if ( !member->fields.questRestrictionInfo )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyOrganizationConfirmDeck2Menu_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  questRestrictionInfo = member->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_16;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  v7 = (NpcServantFollowerMaster_o *)this;
  SvtId = PartyOrganizationListViewItem__get_SvtId(member, 0);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this = (PartyOrganizationConfirmDeck2Menu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                  SvtId,
                                                  0);
  if ( !v7 )
LABEL_16:
    sub_1C942F0(this, member);
  this = (PartyOrganizationConfirmDeck2Menu_o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                                  v7,
                                                  &npcServantFollowerEntity,
                                                  questId,
                                                  questPhase,
                                                  (int32_t)this,
                                                  0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !npcServantFollowerEntity )
    goto LABEL_16;
  return NpcServantFollowerEntity__IsHideRarity(npcServantFollowerEntity->fields.flag, 0);
}


void PartyOrganizationConfirmDeck2Menu__OnClickCancel(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D280D5 & 1) == 0 )
  {
    sub_1C94098(&Method_PartyOrganizationConfirmDeck2Menu_OnClickCancel__);
    byte_4D280D5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmDeck2Menu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeck2Menu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_PartyOrganizationConfirmDeck2Menu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    PartyOrganizationConfirmDeck2Menu__Callback(this, 0, v5);
  }
}


void PartyOrganizationConfirmDeck2Menu__OnClickClose(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D280D6 & 1) == 0 )
  {
    sub_1C94098(&Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__);
    byte_4D280D6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    PartyOrganizationConfirmDeck2Menu__Callback(this, 0, v5);
  }
}


void PartyOrganizationConfirmDeck2Menu__OnClickDecide(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D280D4 & 1) == 0 )
  {
    sub_1C94098(&Method_PartyOrganizationConfirmDeck2Menu_OnClickDecide__);
    byte_4D280D4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmDeck2Menu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeck2Menu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_PartyOrganizationConfirmDeck2Menu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    PartyOrganizationConfirmDeck2Menu__Callback(this, 1, v5);
  }
}


void PartyOrganizationConfirmDeck2Menu__Open(
        PartyOrganizationConfirmDeck2Menu_o *this,
        int32_t kind,
        PartyListViewItem_o *basePartyItem,
        PartyListViewItem_o *partyItem,
        PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  struct PartyOrganizationConfirmItemDraw_array *memberObjectList; // x8
  __int64 v16; // x23
  PartyOrganizationConfirmDeck2Menu_o *Member; // x24
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x7
  struct PartyOrganizationConfirmItemDraw_array *v20; // x8
  PartyOrganizationConfirmItemDraw_o *v21; // x8
  struct PartyOrganizationConfirmItemDraw_array *baseObjectList; // x8
  __int64 v23; // x22
  PartyOrganizationConfirmDeck2Menu_o *v24; // x23
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x7
  struct PartyOrganizationConfirmItemDraw_array *v27; // x8
  PartyOrganizationConfirmItemDraw_o *v28; // x8
  UnityEngine_GameObject_o *v29; // x0
  UILabel_o *memberTitleLabel; // x21
  UILabel_o *baseTitleLabel; // x21
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  __int64 *v36; // x8
  UILabel_o *v37; // x20
  UILabel_o *v38; // x20
  UILabel_o *v39; // x20
  UILabel_o *v40; // x20
  UILabel_o *v41; // x20
  UILabel_o *v42; // x20
  UILabel_o *v43; // x20
  UILabel_o *v44; // x20
  UILabel_o *v45; // x20
  UILabel_o *v46; // x20
  UILabel_o *v47; // x20
  UILabel_o *v48; // x20
  UILabel_o *v49; // x20
  UILabel_o *v50; // x20
  UILabel_o *v51; // x20
  UILabel_o *v52; // x20
  UILabel_o *v53; // x20
  UILabel_o *v54; // x20
  System_Action_o *v55; // x20

  if ( (byte_4D280D1 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_PartyOrganizationConfirmDeck2Menu_EndOpen__);
    sub_1C94098(&StringLiteral_10141/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/);
    sub_1C94098(&StringLiteral_10192/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/);
    sub_1C94098(&StringLiteral_10164/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/);
    sub_1C94098(&StringLiteral_10196/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/);
    sub_1C94098(&StringLiteral_10140/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/);
    sub_1C94098(&StringLiteral_10213/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/);
    sub_1C94098(&StringLiteral_10197/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/);
    sub_1C94098(&StringLiteral_10139/*"PARTY_ORGANIZATION_CONFIRM2_BASE_PARTY_TITLE"*/);
    sub_1C94098(&StringLiteral_10143/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_TITLE"*/);
    sub_1C94098(&StringLiteral_10205/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/);
    sub_1C94098(&StringLiteral_10239/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/);
    sub_1C94098(&StringLiteral_10241/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/);
    sub_1C94098(&StringLiteral_10206/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/);
    sub_1C94098(&StringLiteral_10162/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/);
    sub_1C94098(&StringLiteral_10212/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/);
    sub_1C94098(&StringLiteral_10193/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/);
    sub_1C94098(&StringLiteral_10240/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/);
    sub_1C94098(&StringLiteral_10207/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/);
    sub_1C94098(&StringLiteral_10199/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MESSAGE"*/);
    sub_1C94098(&StringLiteral_10208/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/);
    sub_1C94098(&StringLiteral_10142/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/);
    sub_1C94098(&StringLiteral_10186/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_CANCEL"*/);
    sub_1C94098(&StringLiteral_10161/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/);
    sub_1C94098(&StringLiteral_10200/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_TITLE"*/);
    sub_1C94098(&StringLiteral_10195/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/);
    sub_1C94098(&StringLiteral_10194/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/);
    sub_1C94098(&StringLiteral_10214/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/);
    sub_1C94098(&StringLiteral_10198/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/);
    sub_1C94098(&StringLiteral_10144/*"PARTY_ORGANIZATION_CONFIRM2_NOW_PARTY_TITLE"*/);
    sub_1C94098(&StringLiteral_10187/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_DECIDE"*/);
    sub_1C94098(&StringLiteral_10163/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/);
    byte_4D280D1 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)basePartyItem,
      (int32_t)partyItem,
      (System_String_o *)callback,
      (int32_t)method,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_99;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    memberObjectList = this->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_99;
    v16 = 0;
    while ( (int)v16 < SLODWORD(memberObjectList->max_length) )
    {
      if ( partyItem )
      {
        Member = (PartyOrganizationConfirmDeck2Menu_o *)PartyListViewItem__GetMember(partyItem, v16, 0);
        gameObject = (UnityEngine_GameObject_o *)PartyOrganizationConfirmDeck2Menu__IsHideRarity(
                                                   Member,
                                                   (PartyOrganizationListViewItem_o *)Member,
                                                   v18);
        v20 = this->fields.memberObjectList;
        if ( v20 )
        {
          if ( (unsigned int)v16 >= LODWORD(v20->max_length) )
LABEL_100:
            sub_1C942F8(gameObject);
          v21 = v20->m_Items[v16];
          if ( v21 )
          {
            PartyOrganizationConfirmItemDraw__SetItem(
              v21,
              (PartyOrganizationListViewItem_o *)Member,
              2,
              0,
              (unsigned __int8)gameObject & 1,
              0,
              0,
              v19);
            memberObjectList = this->fields.memberObjectList;
            ++v16;
            if ( memberObjectList )
              continue;
          }
        }
      }
      goto LABEL_99;
    }
    baseObjectList = this->fields.baseObjectList;
    if ( !baseObjectList )
      goto LABEL_99;
    v23 = 0;
    while ( (int)v23 < SLODWORD(baseObjectList->max_length) )
    {
      if ( basePartyItem )
      {
        v24 = (PartyOrganizationConfirmDeck2Menu_o *)PartyListViewItem__GetMember(basePartyItem, v23, 0);
        gameObject = (UnityEngine_GameObject_o *)PartyOrganizationConfirmDeck2Menu__IsHideRarity(
                                                   v24,
                                                   (PartyOrganizationListViewItem_o *)v24,
                                                   v25);
        v27 = this->fields.baseObjectList;
        if ( v27 )
        {
          if ( (unsigned int)v23 >= LODWORD(v27->max_length) )
            goto LABEL_100;
          v28 = v27->m_Items[v23];
          if ( v28 )
          {
            PartyOrganizationConfirmItemDraw__SetItem(
              v28,
              (PartyOrganizationListViewItem_o *)v24,
              2,
              0,
              (unsigned __int8)gameObject & 1,
              0,
              0,
              v26);
            baseObjectList = this->fields.baseObjectList;
            ++v23;
            if ( baseObjectList )
              continue;
          }
        }
      }
      goto LABEL_99;
    }
    if ( (unsigned int)kind <= 8 )
    {
      if ( ((1 << kind) & 0x37) != 0 )
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( !gameObject )
          goto LABEL_99;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_99;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_99;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( !gameObject )
          goto LABEL_99;
        ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
          gameObject,
          0,
          1,
          gameObject->klass[1]._1.implementedInterfaces);
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_99;
        ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
          gameObject,
          0,
          1,
          gameObject->klass[1]._1.implementedInterfaces);
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_99;
      }
      else
      {
        if ( ((1 << kind) & 0x1C0) == 0 )
          goto LABEL_46;
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( !gameObject )
          goto LABEL_99;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_99;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_99;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_99;
        ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
          gameObject,
          0,
          1,
          gameObject->klass[1]._1.implementedInterfaces);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_99;
      }
      v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      AndroidBackKeyManager__AddBackBtn(v29, 0);
    }
LABEL_46:
    memberTitleLabel = this->fields.memberTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10144/*"PARTY_ORGANIZATION_CONFIRM2_NOW_PARTY_TITLE"*/, 0);
    if ( memberTitleLabel )
    {
      UILabel__set_text(memberTitleLabel, (System_String_o *)gameObject, 0);
      baseTitleLabel = this->fields.baseTitleLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10139/*"PARTY_ORGANIZATION_CONFIRM2_BASE_PARTY_TITLE"*/, 0);
      if ( baseTitleLabel )
      {
        UILabel__set_text(baseTitleLabel, (System_String_o *)gameObject, 0);
        switch ( kind )
        {
          case 0:
            titleLabel = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10143/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_TITLE"*/, 0);
            if ( !titleLabel )
              goto LABEL_99;
            UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
            messageLabel = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10142/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/, 0);
            if ( !messageLabel )
              goto LABEL_99;
            UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
            decideLabel = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10141/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/, 0);
            if ( !decideLabel )
              goto LABEL_99;
            UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
            cancelLabel = this->fields.cancelLabel;
            v36 = &StringLiteral_10140/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/;
            break;
          case 1:
            v37 = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10164/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/, 0);
            if ( !v37 )
              goto LABEL_99;
            UILabel__set_text(v37, (System_String_o *)gameObject, 0);
            v38 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10163/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/, 0);
            if ( !v38 )
              goto LABEL_99;
            UILabel__set_text(v38, (System_String_o *)gameObject, 0);
            v39 = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10162/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/, 0);
            if ( !v39 )
              goto LABEL_99;
            UILabel__set_text(v39, (System_String_o *)gameObject, 0);
            cancelLabel = this->fields.cancelLabel;
            v36 = &StringLiteral_10161/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/;
            break;
          case 2:
            v40 = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10208/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/, 0);
            if ( !v40 )
              goto LABEL_99;
            UILabel__set_text(v40, (System_String_o *)gameObject, 0);
            v41 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10207/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/, 0);
            if ( !v41 )
              goto LABEL_99;
            UILabel__set_text(v41, (System_String_o *)gameObject, 0);
            v42 = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10206/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/, 0);
            if ( !v42 )
              goto LABEL_99;
            UILabel__set_text(v42, (System_String_o *)gameObject, 0);
            cancelLabel = this->fields.cancelLabel;
            v36 = &StringLiteral_10205/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/;
            break;
          case 4:
            v43 = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10200/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_TITLE"*/, 0);
            if ( !v43 )
              goto LABEL_99;
            UILabel__set_text(v43, (System_String_o *)gameObject, 0);
            v44 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10199/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MESSAGE"*/, 0);
            if ( !v44 )
              goto LABEL_99;
            UILabel__set_text(v44, (System_String_o *)gameObject, 0);
            v45 = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10187/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_DECIDE"*/, 0);
            if ( !v45 )
              goto LABEL_99;
            UILabel__set_text(v45, (System_String_o *)gameObject, 0);
            cancelLabel = this->fields.cancelLabel;
            v36 = &StringLiteral_10186/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_CANCEL"*/;
            break;
          case 5:
            v46 = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10198/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/, 0);
            if ( !v46 )
              goto LABEL_99;
            UILabel__set_text(v46, (System_String_o *)gameObject, 0);
            v47 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10197/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/, 0);
            if ( !v47 )
              goto LABEL_99;
            UILabel__set_text(v47, (System_String_o *)gameObject, 0);
            v48 = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10193/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/, 0);
            if ( !v48 )
              goto LABEL_99;
            UILabel__set_text(v48, (System_String_o *)gameObject, 0);
            cancelLabel = this->fields.cancelLabel;
            v36 = &StringLiteral_10192/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/;
            break;
          case 6:
            v49 = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10196/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/, 0);
            if ( !v49 )
              goto LABEL_99;
            UILabel__set_text(v49, (System_String_o *)gameObject, 0);
            v50 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10195/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/, 0);
            if ( !v50 )
              goto LABEL_99;
            UILabel__set_text(v50, (System_String_o *)gameObject, 0);
            cancelLabel = this->fields.closeLabel;
            v36 = &StringLiteral_10194/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/;
            break;
          case 7:
            v51 = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10241/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/, 0);
            if ( !v51 )
              goto LABEL_99;
            UILabel__set_text(v51, (System_String_o *)gameObject, 0);
            v52 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10240/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/, 0);
            if ( !v52 )
              goto LABEL_99;
            UILabel__set_text(v52, (System_String_o *)gameObject, 0);
            cancelLabel = this->fields.closeLabel;
            v36 = &StringLiteral_10239/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/;
            break;
          case 8:
            v53 = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10214/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/, 0);
            if ( !v53 )
              goto LABEL_99;
            UILabel__set_text(v53, (System_String_o *)gameObject, 0);
            v54 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10213/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/, 0);
            if ( !v54 )
              goto LABEL_99;
            UILabel__set_text(v54, (System_String_o *)gameObject, 0);
            cancelLabel = this->fields.closeLabel;
            v36 = &StringLiteral_10212/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/;
            break;
          default:
            goto LABEL_98;
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v36, 0);
        if ( cancelLabel )
        {
          UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
LABEL_98:
          this->fields.state = 1;
          v55 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
          System_Action___ctor(v55, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeck2Menu_EndOpen__, 0);
          BaseDialog__Open((BaseDialog_o *)this, v55, 0, 0, 0);
          return;
        }
      }
    }
LABEL_99:
    sub_1C942F0(gameObject, v14);
  }
}


void PartyOrganizationConfirmDeck2Menu__add_callbackFunc(
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

  if ( (byte_4D280CE & 1) == 0 )
  {
    sub_1C94098(&PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo);
    byte_4D280CE = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmDeck2Menu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmDeck2Menu_o *)sub_1C9468C(v8);
  PartyOrganizationConfirmDeck2Menu__remove_callbackFunc(v11, v12, v13);
}


void PartyOrganizationConfirmDeck2Menu__remove_callbackFunc(
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

  if ( (byte_4D280CF & 1) == 0 )
  {
    sub_1C94098(&PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo);
    byte_4D280CF = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmDeck2Menu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmDeck2Menu_o *)sub_1C9468C(v8);
  PartyOrganizationConfirmDeck2Menu__Init(v11, v12);
}


void PartyOrganizationConfirmDeck2Menu_CallbackFunc___ctor(
        PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC29C8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC2980;
}


System_IAsyncResult_o *PartyOrganizationConfirmDeck2Menu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4D280D8 & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    byte_4D280D8 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void PartyOrganizationConfirmDeck2Menu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void PartyOrganizationConfirmDeck2Menu_CallbackFunc__Invoke(
        PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}