void __fastcall PartyOrganizationConfirmDeck2Menu___ctor(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  struct PartyOrganizationConfirmItemDraw_array *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct PartyOrganizationConfirmItemDraw_array *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4AFDAC0 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&BaseDialog_TypeInfo, v3);
    sub_1BC3008(&PartyOrganizationConfirmItemDraw___TypeInfo, v4);
    byte_4AFDAC0 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct PartyOrganizationConfirmItemDraw_array *)sub_1BC30B0(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v5->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v6;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.memberObjectList, (int32_t)v6, v7, v8);
  v9 = (struct PartyOrganizationConfirmItemDraw_array *)sub_1BC30B0(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
  this->fields.baseObjectList = v9;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseObjectList, (int32_t)v9, v10, v11);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmDeck2Menu__Callback(
        PartyOrganizationConfirmDeck2Menu_o *this,
        bool result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *v5; // x20
  struct PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BC2FAC(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationConfirmDeck2Menu__Close(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmDeck2Menu__Close_33306296(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmDeck2Menu__Close_33306296(
        PartyOrganizationConfirmDeck2Menu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4AFDABC & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, callback);
    sub_1BC3008(&Method_PartyOrganizationConfirmDeck2Menu_EndClose__, v6);
    byte_4AFDABC = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeck2Menu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall PartyOrganizationConfirmDeck2Menu__EndClose(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationConfirmDeck2Menu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BC2FAC(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
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

  if ( (byte_4AFDAB9 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, method);
    byte_4AFDAB9 = 1;
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
    sub_1BC3264(titleLabel, method);
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
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4AFDABB & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, member);
    sub_1BC3008(&DataManager_TypeInfo, v4);
    this = (PartyOrganizationConfirmDeck2Menu_o *)sub_1BC3008(
                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                    v5);
    byte_4AFDABB = 1;
  }
  npcServantFollowerEntity = 0LL;
  if ( !member )
    goto LABEL_16;
  if ( !member->fields.questRestrictionInfo )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyOrganizationConfirmDeck2Menu_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  questRestrictionInfo = member->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_16;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  v9 = (NpcServantFollowerMaster_o *)this;
  SvtId = PartyOrganizationListViewItem__get_SvtId(member, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this = (PartyOrganizationConfirmDeck2Menu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                  SvtId,
                                                  0LL);
  if ( !v9 )
LABEL_16:
    sub_1BC3264(this, member);
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
    goto LABEL_16;
  return NpcServantFollowerEntity__IsHideRarity(npcServantFollowerEntity->fields.flag, 0LL);
}


void __fastcall PartyOrganizationConfirmDeck2Menu__OnClickCancel(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4AFDABE & 1) == 0 )
  {
    sub_1BC3008(&Method_PartyOrganizationConfirmDeck2Menu_OnClickCancel__, method);
    byte_4AFDABE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmDeck2Menu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeck2Menu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_PartyOrganizationConfirmDeck2Menu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    PartyOrganizationConfirmDeck2Menu__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationConfirmDeck2Menu__OnClickClose(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4AFDABF & 1) == 0 )
  {
    sub_1BC3008(&Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__, method);
    byte_4AFDABF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    PartyOrganizationConfirmDeck2Menu__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationConfirmDeck2Menu__OnClickDecide(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4AFDABD & 1) == 0 )
  {
    sub_1BC3008(&Method_PartyOrganizationConfirmDeck2Menu_OnClickDecide__, method);
    byte_4AFDABD = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmDeck2Menu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeck2Menu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_PartyOrganizationConfirmDeck2Menu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    PartyOrganizationConfirmDeck2Menu__Callback(this, 1, v5);
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
  __int64 v11; // x1
  __int64 v12; // x1
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v45; // x1
  struct PartyOrganizationConfirmItemDraw_array *memberObjectList; // x8
  __int64 v47; // x23
  PartyOrganizationConfirmDeck2Menu_o *Member; // x24
  const MethodInfo *v49; // x2
  __int64 v50; // x2
  const MethodInfo *v51; // x7
  struct PartyOrganizationConfirmItemDraw_array *v52; // x8
  PartyOrganizationConfirmItemDraw_o *v53; // x8
  struct PartyOrganizationConfirmItemDraw_array *baseObjectList; // x8
  __int64 v55; // x22
  PartyOrganizationConfirmDeck2Menu_o *v56; // x23
  const MethodInfo *v57; // x2
  const MethodInfo *v58; // x7
  struct PartyOrganizationConfirmItemDraw_array *v59; // x8
  PartyOrganizationConfirmItemDraw_o *v60; // x8
  UnityEngine_GameObject_o *v61; // x0
  UILabel_o *memberTitleLabel; // x21
  UILabel_o *baseTitleLabel; // x21
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  __int64 *v68; // x8
  UILabel_o *v69; // x20
  UILabel_o *v70; // x20
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
  System_Action_o *v87; // x20

  if ( (byte_4AFDABA & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1BC3008(&LocalizationManager_TypeInfo, v11);
    sub_1BC3008(&Method_PartyOrganizationConfirmDeck2Menu_EndOpen__, v12);
    sub_1BC3008(&StringLiteral_10024/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/, v13);
    sub_1BC3008(&StringLiteral_10075/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/, v14);
    sub_1BC3008(&StringLiteral_10047/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/, v15);
    sub_1BC3008(&StringLiteral_10079/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/, v16);
    sub_1BC3008(&StringLiteral_10023/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/, v17);
    sub_1BC3008(&StringLiteral_10096/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/, v18);
    sub_1BC3008(&StringLiteral_10080/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/, v19);
    sub_1BC3008(&StringLiteral_10022/*"PARTY_ORGANIZATION_CONFIRM2_BASE_PARTY_TITLE"*/, v20);
    sub_1BC3008(&StringLiteral_10026/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_TITLE"*/, v21);
    sub_1BC3008(&StringLiteral_10088/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/, v22);
    sub_1BC3008(&StringLiteral_10122/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/, v23);
    sub_1BC3008(&StringLiteral_10124/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/, v24);
    sub_1BC3008(&StringLiteral_10089/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/, v25);
    sub_1BC3008(&StringLiteral_10045/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/, v26);
    sub_1BC3008(&StringLiteral_10095/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/, v27);
    sub_1BC3008(&StringLiteral_10076/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/, v28);
    sub_1BC3008(&StringLiteral_10123/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/, v29);
    sub_1BC3008(&StringLiteral_10090/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/, v30);
    sub_1BC3008(&StringLiteral_10082/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MESSAGE"*/, v31);
    sub_1BC3008(&StringLiteral_10091/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/, v32);
    sub_1BC3008(&StringLiteral_10025/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/, v33);
    sub_1BC3008(&StringLiteral_10069/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_CANCEL"*/, v34);
    sub_1BC3008(&StringLiteral_10044/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/, v35);
    sub_1BC3008(&StringLiteral_10083/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_TITLE"*/, v36);
    sub_1BC3008(&StringLiteral_10078/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/, v37);
    sub_1BC3008(&StringLiteral_10077/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/, v38);
    sub_1BC3008(&StringLiteral_10097/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/, v39);
    sub_1BC3008(&StringLiteral_10081/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/, v40);
    sub_1BC3008(&StringLiteral_10027/*"PARTY_ORGANIZATION_CONFIRM2_NOW_PARTY_TITLE"*/, v41);
    sub_1BC3008(&StringLiteral_10070/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_DECIDE"*/, v42);
    sub_1BC3008(&StringLiteral_10046/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/, v43);
    byte_4AFDABA = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1BC2FAC(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)basePartyItem,
      (const MethodInfo *)partyItem);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_99;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    memberObjectList = this->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_99;
    v47 = 0LL;
    while ( (int)v47 < (signed int)memberObjectList->max_length )
    {
      if ( partyItem )
      {
        Member = (PartyOrganizationConfirmDeck2Menu_o *)PartyListViewItem__GetMember(partyItem, v47, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyOrganizationConfirmDeck2Menu__IsHideRarity(
                                                   Member,
                                                   (PartyOrganizationListViewItem_o *)Member,
                                                   v49);
        v52 = this->fields.memberObjectList;
        if ( v52 )
        {
          if ( (unsigned int)v47 >= v52->max_length )
LABEL_100:
            sub_1BC326C(gameObject, v45, v50);
          v53 = v52->m_Items[v47];
          if ( v53 )
          {
            PartyOrganizationConfirmItemDraw__SetItem(
              v53,
              (PartyOrganizationListViewItem_o *)Member,
              2,
              0,
              (unsigned __int8)gameObject & 1,
              0,
              0,
              v51);
            memberObjectList = this->fields.memberObjectList;
            ++v47;
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
    v55 = 0LL;
    while ( (int)v55 < (signed int)baseObjectList->max_length )
    {
      if ( basePartyItem )
      {
        v56 = (PartyOrganizationConfirmDeck2Menu_o *)PartyListViewItem__GetMember(basePartyItem, v55, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyOrganizationConfirmDeck2Menu__IsHideRarity(
                                                   v56,
                                                   (PartyOrganizationListViewItem_o *)v56,
                                                   v57);
        v59 = this->fields.baseObjectList;
        if ( v59 )
        {
          if ( (unsigned int)v55 >= v59->max_length )
            goto LABEL_100;
          v60 = v59->m_Items[v55];
          if ( v60 )
          {
            PartyOrganizationConfirmItemDraw__SetItem(
              v60,
              (PartyOrganizationListViewItem_o *)v56,
              2,
              0,
              (unsigned __int8)gameObject & 1,
              0,
              0,
              v58);
            baseObjectList = this->fields.baseObjectList;
            ++v55;
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
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_99;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_99;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( !gameObject )
          goto LABEL_99;
        ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
          gameObject,
          0LL,
          1LL,
          gameObject->klass[1]._1.interfaceOffsets);
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_99;
        ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
          gameObject,
          0LL,
          1LL,
          gameObject->klass[1]._1.interfaceOffsets);
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
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_99;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_99;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_99;
        ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
          gameObject,
          0LL,
          1LL,
          gameObject->klass[1]._1.interfaceOffsets);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_99;
      }
      v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      AndroidBackKeyManager__AddBackBtn(v61, 0LL);
    }
LABEL_46:
    memberTitleLabel = this->fields.memberTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10027/*"PARTY_ORGANIZATION_CONFIRM2_NOW_PARTY_TITLE"*/, 0LL);
    if ( memberTitleLabel )
    {
      UILabel__set_text(memberTitleLabel, (System_String_o *)gameObject, 0LL);
      baseTitleLabel = this->fields.baseTitleLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10022/*"PARTY_ORGANIZATION_CONFIRM2_BASE_PARTY_TITLE"*/, 0LL);
      if ( baseTitleLabel )
      {
        UILabel__set_text(baseTitleLabel, (System_String_o *)gameObject, 0LL);
        switch ( kind )
        {
          case 0:
            titleLabel = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10026/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_TITLE"*/,
                                                       0LL);
            if ( !titleLabel )
              goto LABEL_99;
            UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
            messageLabel = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10025/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/,
                                                       0LL);
            if ( !messageLabel )
              goto LABEL_99;
            UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
            decideLabel = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10024/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/,
                                                       0LL);
            if ( !decideLabel )
              goto LABEL_99;
            UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v68 = &StringLiteral_10023/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/;
            break;
          case 1:
            v69 = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10047/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/,
                                                       0LL);
            if ( !v69 )
              goto LABEL_99;
            UILabel__set_text(v69, (System_String_o *)gameObject, 0LL);
            v70 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10046/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/,
                                                       0LL);
            if ( !v70 )
              goto LABEL_99;
            UILabel__set_text(v70, (System_String_o *)gameObject, 0LL);
            v71 = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10045/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/,
                                                       0LL);
            if ( !v71 )
              goto LABEL_99;
            UILabel__set_text(v71, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v68 = &StringLiteral_10044/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/;
            break;
          case 2:
            v72 = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10091/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/,
                                                       0LL);
            if ( !v72 )
              goto LABEL_99;
            UILabel__set_text(v72, (System_String_o *)gameObject, 0LL);
            v73 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10090/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/,
                                                       0LL);
            if ( !v73 )
              goto LABEL_99;
            UILabel__set_text(v73, (System_String_o *)gameObject, 0LL);
            v74 = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10089/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/,
                                                       0LL);
            if ( !v74 )
              goto LABEL_99;
            UILabel__set_text(v74, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v68 = &StringLiteral_10088/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/;
            break;
          case 4:
            v75 = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10083/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_TITLE"*/,
                                                       0LL);
            if ( !v75 )
              goto LABEL_99;
            UILabel__set_text(v75, (System_String_o *)gameObject, 0LL);
            v76 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10082/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MESSAGE"*/,
                                                       0LL);
            if ( !v76 )
              goto LABEL_99;
            UILabel__set_text(v76, (System_String_o *)gameObject, 0LL);
            v77 = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10070/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_DECIDE"*/,
                                                       0LL);
            if ( !v77 )
              goto LABEL_99;
            UILabel__set_text(v77, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v68 = &StringLiteral_10069/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_CANCEL"*/;
            break;
          case 5:
            v78 = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10081/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/,
                                                       0LL);
            if ( !v78 )
              goto LABEL_99;
            UILabel__set_text(v78, (System_String_o *)gameObject, 0LL);
            v79 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10080/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/,
                                                       0LL);
            if ( !v79 )
              goto LABEL_99;
            UILabel__set_text(v79, (System_String_o *)gameObject, 0LL);
            v80 = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10076/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/,
                                                       0LL);
            if ( !v80 )
              goto LABEL_99;
            UILabel__set_text(v80, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v68 = &StringLiteral_10075/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/;
            break;
          case 6:
            v81 = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10079/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/,
                                                       0LL);
            if ( !v81 )
              goto LABEL_99;
            UILabel__set_text(v81, (System_String_o *)gameObject, 0LL);
            v82 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10078/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/,
                                                       0LL);
            if ( !v82 )
              goto LABEL_99;
            UILabel__set_text(v82, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.closeLabel;
            v68 = &StringLiteral_10077/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/;
            break;
          case 7:
            v83 = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10124/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/,
                                                       0LL);
            if ( !v83 )
              goto LABEL_99;
            UILabel__set_text(v83, (System_String_o *)gameObject, 0LL);
            v84 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10123/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/,
                                                       0LL);
            if ( !v84 )
              goto LABEL_99;
            UILabel__set_text(v84, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.closeLabel;
            v68 = &StringLiteral_10122/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/;
            break;
          case 8:
            v85 = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10097/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/,
                                                       0LL);
            if ( !v85 )
              goto LABEL_99;
            UILabel__set_text(v85, (System_String_o *)gameObject, 0LL);
            v86 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10096/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/,
                                                       0LL);
            if ( !v86 )
              goto LABEL_99;
            UILabel__set_text(v86, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.closeLabel;
            v68 = &StringLiteral_10095/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/;
            break;
          default:
            goto LABEL_98;
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v68, 0LL);
        if ( cancelLabel )
        {
          UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
LABEL_98:
          this->fields.state = 1;
          v87 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          System_Action___ctor(v87, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeck2Menu_EndOpen__, 0LL);
          BaseDialog__Open((BaseDialog_o *)this, v87, 0, 0LL);
          return;
        }
      }
    }
LABEL_99:
    sub_1BC3264(gameObject, v45);
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

  if ( (byte_4AFDAB7 & 1) == 0 )
  {
    sub_1BC3008(&PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo, value);
    byte_4AFDAB7 = 1;
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
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmDeck2Menu_o *)sub_1BC3524(v8);
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

  if ( (byte_4AFDAB8 & 1) == 0 )
  {
    sub_1BC3008(&PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo, value);
    byte_4AFDAB8 = 1;
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
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmDeck2Menu_o *)sub_1BC3524(v8);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A07AB8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A07A70;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PartyOrganizationConfirmDeck2Menu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4AFDAC1 & 1) == 0 )
  {
    sub_1BC3008(&bool_TypeInfo, result);
    byte_4AFDAC1 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmDeck2Menu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
}


void __fastcall PartyOrganizationConfirmDeck2Menu_CallbackFunc__Invoke(
        PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}