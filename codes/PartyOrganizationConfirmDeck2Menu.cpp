void PartyOrganizationConfirmDeck2Menu___ctor(PartyOrganizationConfirmDeck2Menu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationConfirmItemDraw_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct PartyOrganizationConfirmItemDraw_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  __int64 v20; // x2

  if ( (byte_596BFAD & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&PartyOrganizationConfirmItemDraw___TypeInfo);
    byte_596BFAD = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct PartyOrganizationConfirmItemDraw_array *)sub_2213B20(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v4->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.memberObjectList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (struct PartyOrganizationConfirmItemDraw_array *)sub_2213B20(
                                                           PartyOrganizationConfirmItemDraw___TypeInfo,
                                                           (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
  this->fields.baseObjectList = v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseObjectList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v19, v20);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PartyOrganizationConfirmDeck2Menu__Callback(
        PartyOrganizationConfirmDeck2Menu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *v9; // x20
  struct PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void PartyOrganizationConfirmDeck2Menu__Close(PartyOrganizationConfirmDeck2Menu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmDeck2Menu__Close_40923168(this, 0, v2);
}


void PartyOrganizationConfirmDeck2Menu__Close_40923168(
        PartyOrganizationConfirmDeck2Menu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596BFA9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationConfirmDeck2Menu_EndClose__);
    byte_596BFA9 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeck2Menu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void PartyOrganizationConfirmDeck2Menu__EndClose(PartyOrganizationConfirmDeck2Menu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationConfirmDeck2Menu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_596BFA6 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BFA6 = 1;
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
    sub_2213CDC(titleLabel, method);
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
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596BFA8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    this = (PartyOrganizationConfirmDeck2Menu_o *)sub_2213A60(&DataManager_TypeInfo);
    byte_596BFA8 = 1;
  }
  npcServantFollowerEntity = 0;
  if ( !member )
    goto LABEL_14;
  if ( !member->fields.questRestrictionInfo )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, member, method);
  this = (PartyOrganizationConfirmDeck2Menu_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  questRestrictionInfo = member->fields.questRestrictionInfo;
  if ( !questRestrictionInfo
    || (questId = questRestrictionInfo->fields.questId,
        questPhase = questRestrictionInfo->fields.questPhase,
        v7 = (NpcServantFollowerMaster_o *)this,
        this = (PartyOrganizationConfirmDeck2Menu_o *)PartyOrganizationListViewItem__get_ServantId(member, 0),
        !v7) )
  {
LABEL_14:
    sub_2213CDC(this, member);
  }
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
    goto LABEL_14;
  return NpcServantFollowerEntity__IsHideRarity(npcServantFollowerEntity->fields.flag, 0);
}


void PartyOrganizationConfirmDeck2Menu__OnClickCancel(
        PartyOrganizationConfirmDeck2Menu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596BFAB & 1) == 0 )
  {
    sub_2213A60(&Method_PartyOrganizationConfirmDeck2Menu_OnClickCancel__);
    byte_596BFAB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmDeck2Menu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeck2Menu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PartyOrganizationConfirmDeck2Menu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596BFAC & 1) == 0 )
  {
    sub_2213A60(&Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__);
    byte_596BFAC = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PartyOrganizationConfirmDeck2Menu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596BFAA & 1) == 0 )
  {
    sub_2213A60(&Method_PartyOrganizationConfirmDeck2Menu_OnClickDecide__);
    byte_596BFAA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmDeck2Menu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeck2Menu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PartyOrganizationConfirmDeck2Menu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct PartyOrganizationConfirmItemDraw_array *memberObjectList; // x8
  __int64 v17; // x23
  PartyOrganizationConfirmDeck2Menu_o *Member; // x24
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x7
  struct PartyOrganizationConfirmItemDraw_array *v21; // x8
  PartyOrganizationConfirmItemDraw_o *v22; // x8
  struct PartyOrganizationConfirmItemDraw_array *baseObjectList; // x8
  __int64 v24; // x22
  PartyOrganizationConfirmDeck2Menu_o *v25; // x23
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x7
  struct PartyOrganizationConfirmItemDraw_array *v28; // x8
  PartyOrganizationConfirmItemDraw_o *v29; // x8
  UnityEngine_GameObject_o *v30; // x0
  UILabel_o *memberTitleLabel; // x21
  UILabel_o *baseTitleLabel; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  UILabel_o *v35; // x20
  UILabel_o *v36; // x20
  UILabel_o *v37; // x20
  __int64 *v38; // x8
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
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *v56; // x20
  UILabel_o *v57; // x20
  System_Action_c *v58; // x0
  System_Action_o *v59; // x20

  if ( (byte_596BFA7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationConfirmDeck2Menu_EndOpen__);
    sub_2213A60(&StringLiteral_10522/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/);
    sub_2213A60(&StringLiteral_10573/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/);
    sub_2213A60(&StringLiteral_10545/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/);
    sub_2213A60(&StringLiteral_10577/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/);
    sub_2213A60(&StringLiteral_10521/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/);
    sub_2213A60(&StringLiteral_10594/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10578/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10520/*"PARTY_ORGANIZATION_CONFIRM2_BASE_PARTY_TITLE"*/);
    sub_2213A60(&StringLiteral_10524/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_TITLE"*/);
    sub_2213A60(&StringLiteral_10586/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/);
    sub_2213A60(&StringLiteral_10620/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/);
    sub_2213A60(&StringLiteral_10622/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/);
    sub_2213A60(&StringLiteral_10587/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/);
    sub_2213A60(&StringLiteral_10543/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/);
    sub_2213A60(&StringLiteral_10593/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/);
    sub_2213A60(&StringLiteral_10574/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/);
    sub_2213A60(&StringLiteral_10621/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10588/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10580/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10589/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/);
    sub_2213A60(&StringLiteral_10523/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10567/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_CANCEL"*/);
    sub_2213A60(&StringLiteral_10542/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/);
    sub_2213A60(&StringLiteral_10581/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_TITLE"*/);
    sub_2213A60(&StringLiteral_10576/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10575/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/);
    sub_2213A60(&StringLiteral_10595/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/);
    sub_2213A60(&StringLiteral_10579/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/);
    sub_2213A60(&StringLiteral_10525/*"PARTY_ORGANIZATION_CONFIRM2_NOW_PARTY_TITLE"*/);
    sub_2213A60(&StringLiteral_10568/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_DECIDE"*/);
    sub_2213A60(&StringLiteral_10544/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/);
    byte_596BFA7 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)basePartyItem,
      (System_String_o *)partyItem,
      (int32_t)callback,
      (int32_t)method,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    memberObjectList = this->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_22;
    v17 = 0;
    while ( (int)v17 < SLODWORD(memberObjectList->max_length) )
    {
      if ( partyItem )
      {
        Member = (PartyOrganizationConfirmDeck2Menu_o *)PartyListViewItem__GetMember(partyItem, v17, 0);
        gameObject = (UnityEngine_GameObject_o *)PartyOrganizationConfirmDeck2Menu__IsHideRarity(
                                                   Member,
                                                   (PartyOrganizationListViewItem_o *)Member,
                                                   v19);
        v21 = this->fields.memberObjectList;
        if ( v21 )
        {
          if ( (unsigned int)v17 >= LODWORD(v21->max_length) )
LABEL_110:
            sub_2213CE4(gameObject);
          v22 = v21->m_Items[v17];
          if ( v22 )
          {
            PartyOrganizationConfirmItemDraw__SetItem(
              v22,
              (PartyOrganizationListViewItem_o *)Member,
              2,
              0,
              (unsigned __int8)gameObject & 1,
              0,
              0,
              v20);
            memberObjectList = this->fields.memberObjectList;
            ++v17;
            if ( memberObjectList )
              continue;
          }
        }
      }
      goto LABEL_22;
    }
    baseObjectList = this->fields.baseObjectList;
    if ( !baseObjectList )
      goto LABEL_22;
    v24 = 0;
    while ( (int)v24 < SLODWORD(baseObjectList->max_length) )
    {
      if ( basePartyItem )
      {
        v25 = (PartyOrganizationConfirmDeck2Menu_o *)PartyListViewItem__GetMember(basePartyItem, v24, 0);
        gameObject = (UnityEngine_GameObject_o *)PartyOrganizationConfirmDeck2Menu__IsHideRarity(
                                                   v25,
                                                   (PartyOrganizationListViewItem_o *)v25,
                                                   v26);
        v28 = this->fields.baseObjectList;
        if ( v28 )
        {
          if ( (unsigned int)v24 >= LODWORD(v28->max_length) )
            goto LABEL_110;
          v29 = v28->m_Items[v24];
          if ( v29 )
          {
            PartyOrganizationConfirmItemDraw__SetItem(
              v29,
              (PartyOrganizationListViewItem_o *)v25,
              2,
              0,
              (unsigned __int8)gameObject & 1,
              0,
              0,
              v27);
            baseObjectList = this->fields.baseObjectList;
            ++v24;
            if ( baseObjectList )
              continue;
          }
        }
      }
      goto LABEL_22;
    }
    if ( (unsigned int)kind <= 8 )
    {
      if ( ((1 << kind) & 0x37) != 0 )
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( !gameObject )
          goto LABEL_22;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_22;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_22;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_22;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_22;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_22;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( !gameObject )
          goto LABEL_22;
        ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
          gameObject,
          0,
          1,
          gameObject->klass[1]._1.implementedInterfaces);
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_22;
        ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
          gameObject,
          0,
          1,
          gameObject->klass[1]._1.implementedInterfaces);
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_22;
      }
      else
      {
        if ( ((1 << kind) & 0x1C0) == 0 )
          goto LABEL_46;
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( !gameObject )
          goto LABEL_22;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_22;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_22;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_22;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_22;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_22;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_22;
        ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
          gameObject,
          0,
          1,
          gameObject->klass[1]._1.implementedInterfaces);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_22;
      }
      v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      AndroidBackKeyManager__AddBackBtn(v30, 0);
    }
LABEL_46:
    memberTitleLabel = this->fields.memberTitleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10525/*"PARTY_ORGANIZATION_CONFIRM2_NOW_PARTY_TITLE"*/, 0);
    if ( !memberTitleLabel )
      goto LABEL_22;
    UILabel__set_text(memberTitleLabel, (System_String_o *)gameObject, 0);
    baseTitleLabel = this->fields.baseTitleLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10520/*"PARTY_ORGANIZATION_CONFIRM2_BASE_PARTY_TITLE"*/, 0);
    if ( !baseTitleLabel )
      goto LABEL_22;
    UILabel__set_text(baseTitleLabel, (System_String_o *)gameObject, 0);
    if ( kind <= 4 )
    {
      if ( kind > 1 )
      {
        if ( kind == 2 )
        {
          titleLabel = this->fields.titleLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33, v34);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10589/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/, 0);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
            messageLabel = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10588/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/, 0);
            if ( messageLabel )
            {
              UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
              decideLabel = this->fields.decideLabel;
              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_10587/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/,
                                                         0);
              if ( decideLabel )
              {
                UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
                v38 = &StringLiteral_10586/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/;
                goto LABEL_100;
              }
            }
          }
          goto LABEL_22;
        }
        if ( kind == 4 )
        {
          v41 = this->fields.titleLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33, v34);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10581/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_TITLE"*/, 0);
          if ( v41 )
          {
            UILabel__set_text(v41, (System_String_o *)gameObject, 0);
            v42 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10580/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MESSAGE"*/, 0);
            if ( v42 )
            {
              UILabel__set_text(v42, (System_String_o *)gameObject, 0);
              v43 = this->fields.decideLabel;
              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_10568/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_DECIDE"*/,
                                                         0);
              if ( v43 )
              {
                UILabel__set_text(v43, (System_String_o *)gameObject, 0);
                v38 = &StringLiteral_10567/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_CANCEL"*/;
                goto LABEL_100;
              }
            }
          }
LABEL_22:
          sub_2213CDC(gameObject, v14);
        }
      }
      else
      {
        if ( !kind )
        {
          v46 = this->fields.titleLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33, v34);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10524/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_TITLE"*/, 0);
          if ( v46 )
          {
            UILabel__set_text(v46, (System_String_o *)gameObject, 0);
            v47 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10523/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/, 0);
            if ( v47 )
            {
              UILabel__set_text(v47, (System_String_o *)gameObject, 0);
              v48 = this->fields.decideLabel;
              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_10522/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/,
                                                         0);
              if ( v48 )
              {
                UILabel__set_text(v48, (System_String_o *)gameObject, 0);
                v38 = &StringLiteral_10521/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/;
                goto LABEL_100;
              }
            }
          }
          goto LABEL_22;
        }
        if ( kind == 1 )
        {
          v35 = this->fields.titleLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33, v34);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10545/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/, 0);
          if ( v35 )
          {
            UILabel__set_text(v35, (System_String_o *)gameObject, 0);
            v36 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10544/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/, 0);
            if ( v36 )
            {
              UILabel__set_text(v36, (System_String_o *)gameObject, 0);
              v37 = this->fields.decideLabel;
              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_10543/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/,
                                                         0);
              if ( v37 )
              {
                UILabel__set_text(v37, (System_String_o *)gameObject, 0);
                v38 = &StringLiteral_10542/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/;
LABEL_100:
                cancelLabel = this->fields.cancelLabel;
LABEL_107:
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v38, 0);
                if ( !cancelLabel )
                  goto LABEL_22;
                UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
                goto LABEL_109;
              }
            }
          }
          goto LABEL_22;
        }
      }
LABEL_109:
      v58 = System_Action_TypeInfo;
      this->fields.state = 1;
      v59 = (System_Action_o *)sub_2213CCC(v58);
      System_Action___ctor(v59, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeck2Menu_EndOpen__, 0);
      BaseDialog__Open((BaseDialog_o *)this, v59, 0, 0, 0);
      return;
    }
    if ( kind > 6 )
    {
      if ( kind == 7 )
      {
        v56 = this->fields.titleLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33, v34);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10622/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/, 0);
        if ( !v56 )
          goto LABEL_22;
        UILabel__set_text(v56, (System_String_o *)gameObject, 0);
        v57 = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10621/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/, 0);
        if ( !v57 )
          goto LABEL_22;
        UILabel__set_text(v57, (System_String_o *)gameObject, 0);
        v38 = &StringLiteral_10620/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/;
      }
      else
      {
        if ( kind != 8 )
          goto LABEL_109;
        v44 = this->fields.titleLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33, v34);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10595/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/, 0);
        if ( !v44 )
          goto LABEL_22;
        UILabel__set_text(v44, (System_String_o *)gameObject, 0);
        v45 = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10594/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/, 0);
        if ( !v45 )
          goto LABEL_22;
        UILabel__set_text(v45, (System_String_o *)gameObject, 0);
        v38 = &StringLiteral_10593/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/;
      }
    }
    else
    {
      if ( kind == 5 )
      {
        v49 = this->fields.titleLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33, v34);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10579/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/, 0);
        if ( v49 )
        {
          UILabel__set_text(v49, (System_String_o *)gameObject, 0);
          v50 = this->fields.messageLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10578/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/, 0);
          if ( v50 )
          {
            UILabel__set_text(v50, (System_String_o *)gameObject, 0);
            v51 = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10574/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/, 0);
            if ( v51 )
            {
              UILabel__set_text(v51, (System_String_o *)gameObject, 0);
              v38 = &StringLiteral_10573/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/;
              goto LABEL_100;
            }
          }
        }
        goto LABEL_22;
      }
      v39 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33, v34);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10577/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/, 0);
      if ( !v39 )
        goto LABEL_22;
      UILabel__set_text(v39, (System_String_o *)gameObject, 0);
      v40 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10576/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/, 0);
      if ( !v40 )
        goto LABEL_22;
      UILabel__set_text(v40, (System_String_o *)gameObject, 0);
      v38 = &StringLiteral_10575/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/;
    }
    cancelLabel = this->fields.closeLabel;
    goto LABEL_107;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyOrganizationConfirmDeck2Menu_o *v13; // x0
  PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596BFA4 & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo);
    byte_596BFA4 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyOrganizationConfirmDeck2Menu_o *)sub_221405C(
                                                 v8,
                                                 PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo,
                                                 v9,
                                                 v10);
  PartyOrganizationConfirmDeck2Menu__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyOrganizationConfirmDeck2Menu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596BFA5 & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo);
    byte_596BFA5 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyOrganizationConfirmDeck2Menu_o *)sub_221405C(
                                                 v8,
                                                 PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo,
                                                 v9,
                                                 v10);
  PartyOrganizationConfirmDeck2Menu__Init(v13, v14);
}


void PartyOrganizationConfirmDeck2Menu_CallbackFunc___ctor(
        PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2004480;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2004438;
}


System_IAsyncResult_o *PartyOrganizationConfirmDeck2Menu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void PartyOrganizationConfirmDeck2Menu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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