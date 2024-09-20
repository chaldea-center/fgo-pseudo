void __fastcall PartyOrganizationConfirmDeck2Menu___ctor(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct PartyOrganizationConfirmItemDraw_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  struct PartyOrganizationConfirmItemDraw_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A57027 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&BaseDialog_TypeInfo);
    sub_1B885B0(&PartyOrganizationConfirmItemDraw___TypeInfo);
    byte_4A57027 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct PartyOrganizationConfirmItemDraw_array *)sub_1B88658(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.memberObjectList, (int32_t)v4, v5, v6);
  v7 = (struct PartyOrganizationConfirmItemDraw_array *)sub_1B88658(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
  this->fields.baseObjectList = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseObjectList, (int32_t)v7, v8, v9);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmDeck2Menu__Callback(
        PartyOrganizationConfirmDeck2Menu_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *v5; // x20
  struct PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B88554(p_callbackFunc, 0, (int32_t)method, v3);
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

  PartyOrganizationConfirmDeck2Menu__Close_32008852(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmDeck2Menu__Close_32008852(
        PartyOrganizationConfirmDeck2Menu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A57023 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationConfirmDeck2Menu_EndClose__);
    byte_4A57023 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeck2Menu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall PartyOrganizationConfirmDeck2Menu__EndClose(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationConfirmDeck2Menu__Init(this, method);
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

  if ( (byte_4A57020 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57020 = 1;
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
    sub_1B8880C(titleLabel, method);
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
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w21
  int32_t questPhase; // w22
  NpcServantFollowerMaster_o *v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A57022 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    this = (PartyOrganizationConfirmDeck2Menu_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A57022 = 1;
  }
  npcServantFollowerEntity = 0LL;
  if ( !member )
    goto LABEL_16;
  if ( !member->fields.questRestrictionInfo )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyOrganizationConfirmDeck2Menu_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  questRestrictionInfo = member->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_16;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  v7 = (NpcServantFollowerMaster_o *)this;
  SvtId = PartyOrganizationListViewItem__get_SvtId(member, (const MethodInfo *)member);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this = (PartyOrganizationConfirmDeck2Menu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                  SvtId,
                                                  0LL);
  if ( !v7 )
LABEL_16:
    sub_1B8880C(this, member);
  this = (PartyOrganizationConfirmDeck2Menu_o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                                  v7,
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

  if ( (byte_4A57025 & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyOrganizationConfirmDeck2Menu_OnClickCancel__);
    byte_4A57025 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmDeck2Menu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeck2Menu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationConfirmDeck2Menu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
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

  if ( (byte_4A57026 & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__);
    byte_4A57026 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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

  if ( (byte_4A57024 & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyOrganizationConfirmDeck2Menu_OnClickDecide__);
    byte_4A57024 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmDeck2Menu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeck2Menu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationConfirmDeck2Menu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  struct PartyOrganizationConfirmItemDraw_array *memberObjectList; // x8
  __int64 v14; // x23
  PartyOrganizationConfirmDeck2Menu_o *Member; // x24
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x7
  struct PartyOrganizationConfirmItemDraw_array *v18; // x8
  PartyOrganizationConfirmItemDraw_o *v19; // x8
  struct PartyOrganizationConfirmItemDraw_array *baseObjectList; // x8
  __int64 v21; // x22
  PartyOrganizationConfirmDeck2Menu_o *v22; // x23
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x7
  struct PartyOrganizationConfirmItemDraw_array *v25; // x8
  PartyOrganizationConfirmItemDraw_o *v26; // x8
  UnityEngine_GameObject_o *v27; // x0
  UILabel_o *memberTitleLabel; // x21
  UILabel_o *baseTitleLabel; // x21
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  __int64 *v34; // x8
  UILabel_o *v35; // x20
  UILabel_o *v36; // x20
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
  System_Action_o *v53; // x20

  if ( (byte_4A57021 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationConfirmDeck2Menu_EndOpen__);
    sub_1B885B0(&StringLiteral_10136/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/);
    sub_1B885B0(&StringLiteral_10187/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/);
    sub_1B885B0(&StringLiteral_10159/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/);
    sub_1B885B0(&StringLiteral_10191/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/);
    sub_1B885B0(&StringLiteral_10135/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/);
    sub_1B885B0(&StringLiteral_10208/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_10192/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_10134/*"PARTY_ORGANIZATION_CONFIRM2_BASE_PARTY_TITLE"*/);
    sub_1B885B0(&StringLiteral_10138/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_TITLE"*/);
    sub_1B885B0(&StringLiteral_10200/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/);
    sub_1B885B0(&StringLiteral_10234/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/);
    sub_1B885B0(&StringLiteral_10236/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/);
    sub_1B885B0(&StringLiteral_10201/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/);
    sub_1B885B0(&StringLiteral_10157/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/);
    sub_1B885B0(&StringLiteral_10207/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/);
    sub_1B885B0(&StringLiteral_10188/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/);
    sub_1B885B0(&StringLiteral_10235/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_10202/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_10194/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_10203/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/);
    sub_1B885B0(&StringLiteral_10137/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_10181/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_CANCEL"*/);
    sub_1B885B0(&StringLiteral_10156/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/);
    sub_1B885B0(&StringLiteral_10195/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_TITLE"*/);
    sub_1B885B0(&StringLiteral_10190/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_10189/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/);
    sub_1B885B0(&StringLiteral_10209/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/);
    sub_1B885B0(&StringLiteral_10193/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/);
    sub_1B885B0(&StringLiteral_10139/*"PARTY_ORGANIZATION_CONFIRM2_NOW_PARTY_TITLE"*/);
    sub_1B885B0(&StringLiteral_10182/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_DECIDE"*/);
    sub_1B885B0(&StringLiteral_10158/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/);
    byte_4A57021 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)basePartyItem,
      (int32_t)partyItem);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_99;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    memberObjectList = this->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_99;
    v14 = 0LL;
    while ( (int)v14 < (signed int)memberObjectList->max_length )
    {
      if ( partyItem )
      {
        Member = (PartyOrganizationConfirmDeck2Menu_o *)PartyListViewItem__GetMember(partyItem, v14, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyOrganizationConfirmDeck2Menu__IsHideRarity(
                                                   Member,
                                                   (PartyOrganizationListViewItem_o *)Member,
                                                   v16);
        v18 = this->fields.memberObjectList;
        if ( v18 )
        {
          if ( (unsigned int)v14 >= v18->max_length )
LABEL_100:
            sub_1B88814(gameObject, v12);
          v19 = v18->m_Items[v14];
          if ( v19 )
          {
            PartyOrganizationConfirmItemDraw__SetItem(
              v19,
              (PartyOrganizationListViewItem_o *)Member,
              2,
              0,
              (unsigned __int8)gameObject & 1,
              0,
              0,
              v17);
            memberObjectList = this->fields.memberObjectList;
            ++v14;
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
    v21 = 0LL;
    while ( (int)v21 < (signed int)baseObjectList->max_length )
    {
      if ( basePartyItem )
      {
        v22 = (PartyOrganizationConfirmDeck2Menu_o *)PartyListViewItem__GetMember(basePartyItem, v21, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyOrganizationConfirmDeck2Menu__IsHideRarity(
                                                   v22,
                                                   (PartyOrganizationListViewItem_o *)v22,
                                                   v23);
        v25 = this->fields.baseObjectList;
        if ( v25 )
        {
          if ( (unsigned int)v21 >= v25->max_length )
            goto LABEL_100;
          v26 = v25->m_Items[v21];
          if ( v26 )
          {
            PartyOrganizationConfirmItemDraw__SetItem(
              v26,
              (PartyOrganizationListViewItem_o *)v22,
              2,
              0,
              (unsigned __int8)gameObject & 1,
              0,
              0,
              v24);
            baseObjectList = this->fields.baseObjectList;
            ++v21;
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
      v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      AndroidBackKeyManager__AddBackBtn(v27, 0LL);
    }
LABEL_46:
    memberTitleLabel = this->fields.memberTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10139/*"PARTY_ORGANIZATION_CONFIRM2_NOW_PARTY_TITLE"*/, 0LL);
    if ( memberTitleLabel )
    {
      UILabel__set_text(memberTitleLabel, (System_String_o *)gameObject, 0LL);
      baseTitleLabel = this->fields.baseTitleLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10134/*"PARTY_ORGANIZATION_CONFIRM2_BASE_PARTY_TITLE"*/, 0LL);
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
                                                       (System_String_o *)StringLiteral_10138/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_TITLE"*/,
                                                       0LL);
            if ( !titleLabel )
              goto LABEL_99;
            UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
            messageLabel = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10137/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/,
                                                       0LL);
            if ( !messageLabel )
              goto LABEL_99;
            UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
            decideLabel = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10136/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/,
                                                       0LL);
            if ( !decideLabel )
              goto LABEL_99;
            UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v34 = &StringLiteral_10135/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/;
            break;
          case 1:
            v35 = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10159/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/,
                                                       0LL);
            if ( !v35 )
              goto LABEL_99;
            UILabel__set_text(v35, (System_String_o *)gameObject, 0LL);
            v36 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10158/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/,
                                                       0LL);
            if ( !v36 )
              goto LABEL_99;
            UILabel__set_text(v36, (System_String_o *)gameObject, 0LL);
            v37 = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10157/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/,
                                                       0LL);
            if ( !v37 )
              goto LABEL_99;
            UILabel__set_text(v37, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v34 = &StringLiteral_10156/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/;
            break;
          case 2:
            v38 = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10203/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/,
                                                       0LL);
            if ( !v38 )
              goto LABEL_99;
            UILabel__set_text(v38, (System_String_o *)gameObject, 0LL);
            v39 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10202/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/,
                                                       0LL);
            if ( !v39 )
              goto LABEL_99;
            UILabel__set_text(v39, (System_String_o *)gameObject, 0LL);
            v40 = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10201/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/,
                                                       0LL);
            if ( !v40 )
              goto LABEL_99;
            UILabel__set_text(v40, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v34 = &StringLiteral_10200/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/;
            break;
          case 4:
            v41 = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10195/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_TITLE"*/,
                                                       0LL);
            if ( !v41 )
              goto LABEL_99;
            UILabel__set_text(v41, (System_String_o *)gameObject, 0LL);
            v42 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10194/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MESSAGE"*/,
                                                       0LL);
            if ( !v42 )
              goto LABEL_99;
            UILabel__set_text(v42, (System_String_o *)gameObject, 0LL);
            v43 = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10182/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_DECIDE"*/,
                                                       0LL);
            if ( !v43 )
              goto LABEL_99;
            UILabel__set_text(v43, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v34 = &StringLiteral_10181/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_CANCEL"*/;
            break;
          case 5:
            v44 = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10193/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/,
                                                       0LL);
            if ( !v44 )
              goto LABEL_99;
            UILabel__set_text(v44, (System_String_o *)gameObject, 0LL);
            v45 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10192/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/,
                                                       0LL);
            if ( !v45 )
              goto LABEL_99;
            UILabel__set_text(v45, (System_String_o *)gameObject, 0LL);
            v46 = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10188/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/,
                                                       0LL);
            if ( !v46 )
              goto LABEL_99;
            UILabel__set_text(v46, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v34 = &StringLiteral_10187/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/;
            break;
          case 6:
            v47 = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10191/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/,
                                                       0LL);
            if ( !v47 )
              goto LABEL_99;
            UILabel__set_text(v47, (System_String_o *)gameObject, 0LL);
            v48 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10190/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/,
                                                       0LL);
            if ( !v48 )
              goto LABEL_99;
            UILabel__set_text(v48, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.closeLabel;
            v34 = &StringLiteral_10189/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/;
            break;
          case 7:
            v49 = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10236/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/,
                                                       0LL);
            if ( !v49 )
              goto LABEL_99;
            UILabel__set_text(v49, (System_String_o *)gameObject, 0LL);
            v50 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10235/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/,
                                                       0LL);
            if ( !v50 )
              goto LABEL_99;
            UILabel__set_text(v50, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.closeLabel;
            v34 = &StringLiteral_10234/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/;
            break;
          case 8:
            v51 = this->fields.titleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10209/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/,
                                                       0LL);
            if ( !v51 )
              goto LABEL_99;
            UILabel__set_text(v51, (System_String_o *)gameObject, 0LL);
            v52 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10208/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/,
                                                       0LL);
            if ( !v52 )
              goto LABEL_99;
            UILabel__set_text(v52, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.closeLabel;
            v34 = &StringLiteral_10207/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/;
            break;
          default:
            goto LABEL_98;
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v34, 0LL);
        if ( cancelLabel )
        {
          UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
LABEL_98:
          this->fields.state = 1;
          v53 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(v53, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeck2Menu_EndOpen__, 0LL);
          BaseDialog__Open((BaseDialog_o *)this, v53, 0, 0LL);
          return;
        }
      }
    }
LABEL_99:
    sub_1B8880C(gameObject, v12);
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

  if ( (byte_4A5701E & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo);
    byte_4A5701E = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmDeck2Menu_o *)sub_1B88ACC(v8);
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

  if ( (byte_4A5701F & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo);
    byte_4A5701F = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmDeck2Menu_o *)sub_1B88ACC(v8);
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
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19C8F84;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C8F3C;
}


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
  if ( (byte_4A57028 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A57028 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmDeck2Menu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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