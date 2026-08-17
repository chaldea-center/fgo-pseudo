void PartyOrganizationConfirmDeckMenu___ctor(PartyOrganizationConfirmDeckMenu_o *this, const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x2

  if ( (byte_596BFB6 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&PartyOrganizationConfirmItemDraw___TypeInfo);
    byte_596BFB6 = 1;
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
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v12, v13);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PartyOrganizationConfirmDeckMenu__Callback(
        PartyOrganizationConfirmDeckMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct PartyOrganizationConfirmDeckMenu_CallbackFunc_o *v9; // x20
  struct PartyOrganizationConfirmDeckMenu_CallbackFunc_o *callbackFunc; // t1

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


void PartyOrganizationConfirmDeckMenu__Close(PartyOrganizationConfirmDeckMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmDeckMenu__Close_40930328(this, 0, v2);
}


void PartyOrganizationConfirmDeckMenu__Close_40930328(
        PartyOrganizationConfirmDeckMenu_o *this,
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

  if ( (byte_596BFB2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationConfirmDeckMenu_EndClose__);
    byte_596BFB2 = 1;
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
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeckMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void PartyOrganizationConfirmDeckMenu__EndClose(PartyOrganizationConfirmDeckMenu_o *this, const MethodInfo *method)
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

  PartyOrganizationConfirmDeckMenu__Init(this, method);
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


void PartyOrganizationConfirmDeckMenu__EndOpen(PartyOrganizationConfirmDeckMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void PartyOrganizationConfirmDeckMenu__Init(PartyOrganizationConfirmDeckMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_596BFB0 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BFB0 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.nameLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.decideLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.cancelLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.closeLabel) == 0) )
  {
LABEL_10:
    sub_2213CDC(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PartyOrganizationConfirmDeckMenu__OnClickCancel(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596BFB4 & 1) == 0 )
  {
    sub_2213A60(&Method_PartyOrganizationConfirmDeckMenu_OnClickCancel__);
    byte_596BFB4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmDeckMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeckMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PartyOrganizationConfirmDeckMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    PartyOrganizationConfirmDeckMenu__Callback(this, 0, v5);
  }
}


void PartyOrganizationConfirmDeckMenu__OnClickClose(PartyOrganizationConfirmDeckMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596BFB5 & 1) == 0 )
  {
    sub_2213A60(&Method_PartyOrganizationConfirmDeckMenu_OnClickClose__);
    byte_596BFB5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmDeckMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeckMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PartyOrganizationConfirmDeckMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    PartyOrganizationConfirmDeckMenu__Callback(this, 0, v5);
  }
}


void PartyOrganizationConfirmDeckMenu__OnClickDecide(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596BFB3 & 1) == 0 )
  {
    sub_2213A60(&Method_PartyOrganizationConfirmDeckMenu_OnClickDecide__);
    byte_596BFB3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmDeckMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeckMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PartyOrganizationConfirmDeckMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    PartyOrganizationConfirmDeckMenu__Callback(this, 1, v5);
  }
}


void PartyOrganizationConfirmDeckMenu__Open(
        PartyOrganizationConfirmDeckMenu_o *this,
        int32_t kind,
        PartyListViewItem_o *partyItem,
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  struct PartyOrganizationConfirmItemDraw_array *memberObjectList; // x8
  NpcServantFollowerMaster_o *v18; // x22
  int32_t v19; // w23
  const MethodInfo *v20; // x7
  intptr_t m_CachedPtr; // x8
  PartyOrganizationListViewItem_o *v22; // x24
  int32_t v23; // w25
  int32_t v24; // w26
  struct PartyOrganizationConfirmItemDraw_array *v25; // x8
  PartyOrganizationConfirmItemDraw_o *v26; // x8
  UnityEngine_GameObject_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  UILabel_o *v30; // x20
  struct UILabel_o *v31; // x20
  System_String_o *v32; // x1
  UILabel_o *v33; // x0
  UILabel_o *v34; // x20
  UILabel_o *v35; // x20
  __int64 *v36; // x8
  UILabel_o *v37; // x21
  UILabel_o *v38; // x21
  System_String_o *v39; // x22
  Il2CppObject *TotalCostRestrictionMessage; // x0
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
  UILabel_o *v55; // x20
  UILabel_o *v56; // x20
  UILabel_o *v57; // x20
  UILabel_o *v58; // x20
  UILabel_o *v59; // x21
  UILabel_o *v60; // x20
  UILabel_o *v61; // x20
  UILabel_o *v62; // x20
  UILabel_o *v63; // x20
  UILabel_o *v64; // x20
  UILabel_o *v65; // x20
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *v69; // x20
  UILabel_o *v70; // x20
  UILabel_o *v71; // x20
  UILabel_o *v72; // x21
  struct UILabel_o *v73; // x21
  System_String_o *v74; // x22
  Il2CppObject *ConfirmRestrictionMessage; // x0
  UILabel_o *v76; // x20
  UILabel_o *v77; // x20
  UILabel_o *v78; // x20
  UILabel_o *v79; // x20
  UILabel_o *v80; // x21
  UILabel_o *v81; // x21
  UILabel_o *nameLabel; // x21
  UILabel_o *v83; // x20
  UILabel_o *v84; // x20
  UILabel_o *v85; // x20
  UILabel_o *v86; // x20
  UILabel_o *v87; // x20
  UILabel_o *v88; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *v90; // x21
  System_Action_c *v91; // x0
  System_Action_o *v92; // x20
  UILabel_o *v93; // x20
  UILabel_o *v94; // x20
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596BFB1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationConfirmDeckMenu_EndOpen__);
    sub_2213A60(&StringLiteral_10591/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10528/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_TITLE"*/);
    sub_2213A60(&StringLiteral_10571/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10625/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_TITLE"*/);
    sub_2213A60(&StringLiteral_10546/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_CLOSE"*/);
    sub_2213A60(&StringLiteral_10573/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/);
    sub_2213A60(&StringLiteral_10569/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_CANCEL"*/);
    sub_2213A60(&StringLiteral_10545/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/);
    sub_2213A60(&StringLiteral_10618/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10597/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10527/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10529/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_CANCEL"*/);
    sub_2213A60(&StringLiteral_10617/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_CLOSE"*/);
    sub_2213A60(&StringLiteral_10532/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_TITLE"*/);
    sub_2213A60(&StringLiteral_10583/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_DECIDE"*/);
    sub_2213A60(&StringLiteral_10601/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_TITLE"*/);
    sub_2213A60(&StringLiteral_10577/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/);
    sub_2213A60(&StringLiteral_10619/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_TITLE"*/);
    sub_2213A60(&StringLiteral_10594/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10578/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10564/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_DECIDE"*/);
    sub_2213A60(&StringLiteral_10585/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_TITLE"*/);
    sub_2213A60(&StringLiteral_10539/*"PARTY_ORGANIZATION_CONFIRM_COST_OVERT_TITLE"*/);
    sub_2213A60(&StringLiteral_10614/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_CLOSE"*/);
    sub_2213A60(&StringLiteral_10586/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/);
    sub_2213A60(&StringLiteral_10565/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10623/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_CLOSE"*/);
    sub_2213A60(&StringLiteral_10620/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/);
    sub_2213A60(&StringLiteral_10559/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_TITLE"*/);
    sub_2213A60(&StringLiteral_10622/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/);
    sub_2213A60(&StringLiteral_10596/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_CLOSE"*/);
    sub_2213A60(&StringLiteral_10560/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_CLOSE"*/);
    sub_2213A60(&StringLiteral_10587/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/);
    sub_2213A60(&StringLiteral_10616/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_TITLE"*/);
    sub_2213A60(&StringLiteral_10548/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_TITLE"*/);
    sub_2213A60(&StringLiteral_10543/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/);
    sub_2213A60(&StringLiteral_10561/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10526/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_CLOSE"*/);
    sub_2213A60(&StringLiteral_10593/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/);
    sub_2213A60(&StringLiteral_10615/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10540/*"PARTY_ORGANIZATION_CONFIRM_COST_OVER_CLOSE"*/);
    sub_2213A60(&StringLiteral_10574/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/);
    sub_2213A60(&StringLiteral_10621/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10582/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_CANCEL"*/);
    sub_2213A60(&StringLiteral_10588/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10600/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10572/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_TITLE"*/);
    sub_2213A60(&StringLiteral_10599/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_CLOSE"*/);
    sub_2213A60(&StringLiteral_10566/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_TITLE"*/);
    sub_2213A60(&StringLiteral_10547/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10584/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10598/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_TITLE"*/);
    sub_2213A60(&StringLiteral_10530/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_DECIDE"*/);
    sub_2213A60(&StringLiteral_10589/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/);
    sub_2213A60(&StringLiteral_10555/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_CANCEL"*/);
    sub_2213A60(&StringLiteral_10558/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_NAME"*/);
    sub_2213A60(&StringLiteral_10570/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_DECIDE"*/);
    sub_2213A60(&StringLiteral_10541/*"PARTY_ORGANIZATION_CONFIRM_COST_OVER_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10590/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_CLOSE"*/);
    sub_2213A60(&StringLiteral_10556/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_DECIDE"*/);
    sub_2213A60(&StringLiteral_10542/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/);
    sub_2213A60(&StringLiteral_10562/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_TITLE"*/);
    sub_2213A60(&StringLiteral_10576/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10575/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/);
    sub_2213A60(&StringLiteral_10563/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_CANCEL"*/);
    sub_2213A60(&StringLiteral_10557/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10624/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10595/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_10592/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_TITLE"*/);
    sub_2213A60(&StringLiteral_10579/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/);
    sub_2213A60(&StringLiteral_10531/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10544/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/);
    byte_596BFB1 = 1;
  }
  state = this->fields.state;
  npcServantFollowerEntity = 0;
  if ( (state | 4) != 4 )
    return;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)partyItem,
    (System_String_o *)callback,
    (int32_t)method,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15, v16);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  memberObjectList = this->fields.memberObjectList;
  if ( !memberObjectList )
    goto LABEL_22;
  v18 = (NpcServantFollowerMaster_o *)gameObject;
  v19 = 0;
  while ( v19 < SLODWORD(memberObjectList->max_length) )
  {
    if ( partyItem )
    {
      gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__GetMember(partyItem, v19, 0);
      if ( gameObject )
      {
        m_CachedPtr = gameObject[7].fields.m_CachedPtr;
        v22 = (PartyOrganizationListViewItem_o *)gameObject;
        if ( !m_CachedPtr )
          goto LABEL_17;
        v23 = *(_DWORD *)(m_CachedPtr + 36);
        v24 = *(_DWORD *)(m_CachedPtr + 40);
        gameObject = (UnityEngine_GameObject_o *)PartyOrganizationListViewItem__get_ServantId(
                                                   (PartyOrganizationListViewItem_o *)gameObject,
                                                   0);
        if ( !v18 )
          goto LABEL_22;
        gameObject = (UnityEngine_GameObject_o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                                   v18,
                                                   &npcServantFollowerEntity,
                                                   v23,
                                                   v24,
                                                   (int32_t)gameObject,
                                                   0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !npcServantFollowerEntity )
            goto LABEL_22;
          gameObject = (UnityEngine_GameObject_o *)NpcServantFollowerEntity__IsHideRarity(
                                                     npcServantFollowerEntity->fields.flag,
                                                     0);
        }
        else
        {
LABEL_17:
          gameObject = 0;
        }
        v25 = this->fields.memberObjectList;
        if ( v25 )
        {
          if ( (unsigned int)v19 >= LODWORD(v25->max_length) )
            sub_2213CE4(gameObject);
          v26 = v25->m_Items[v19];
          if ( v26 )
          {
            PartyOrganizationConfirmItemDraw__SetItem(v26, v22, 2, 0, (unsigned __int8)gameObject & 1, 0, 0, v20);
            memberObjectList = this->fields.memberObjectList;
            ++v19;
            if ( memberObjectList )
              continue;
          }
        }
      }
    }
    goto LABEL_22;
  }
  if ( (unsigned int)kind > 0x1B )
    goto LABEL_45;
  if ( ((1 << kind) & 0xFDE7C38) != 0 )
  {
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
    goto LABEL_44;
  }
  if ( ((1 << kind) & 0x183C7) != 0 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( gameObject )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 1, 0);
            gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
            if ( gameObject )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive(gameObject, 0, 0);
                gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
                if ( gameObject )
                {
                  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
                    gameObject,
                    0,
                    1,
                    gameObject->klass[1]._1.implementedInterfaces);
                  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                  if ( gameObject )
                  {
                    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
                      gameObject,
                      0,
                      1,
                      gameObject->klass[1]._1.implementedInterfaces);
                    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                    if ( gameObject )
                    {
LABEL_44:
                      v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                      AndroidBackKeyManager__AddBackBtn(v27, 0);
                      goto LABEL_45;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_2213CDC(gameObject, v14);
  }
LABEL_45:
  gameObject = (UnityEngine_GameObject_o *)this->fields.nameLabel;
  if ( !gameObject )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  switch ( kind )
  {
    case 0:
      titleLabel = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10532/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_TITLE"*/, 0);
      if ( !titleLabel )
        goto LABEL_22;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
      messageLabel = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10531/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_MESSAGE"*/, 0);
      if ( !messageLabel )
        goto LABEL_22;
      UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
      decideLabel = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10530/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_DECIDE"*/, 0);
      if ( !decideLabel )
        goto LABEL_22;
      UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
      v36 = &StringLiteral_10529/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_CANCEL"*/;
      goto LABEL_172;
    case 1:
      v69 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10545/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/, 0);
      if ( !v69 )
        goto LABEL_22;
      UILabel__set_text(v69, (System_String_o *)gameObject, 0);
      v70 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10544/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/, 0);
      if ( !v70 )
        goto LABEL_22;
      UILabel__set_text(v70, (System_String_o *)gameObject, 0);
      v71 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10543/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/, 0);
      if ( !v71 )
        goto LABEL_22;
      UILabel__set_text(v71, (System_String_o *)gameObject, 0);
      v36 = &StringLiteral_10542/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/;
      goto LABEL_172;
    case 2:
      v56 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10589/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/, 0);
      if ( !v56 )
        goto LABEL_22;
      UILabel__set_text(v56, (System_String_o *)gameObject, 0);
      v57 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10588/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/, 0);
      if ( !v57 )
        goto LABEL_22;
      UILabel__set_text(v57, (System_String_o *)gameObject, 0);
      v58 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10587/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/, 0);
      if ( !v58 )
        goto LABEL_22;
      UILabel__set_text(v58, (System_String_o *)gameObject, 0);
      v36 = &StringLiteral_10586/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/;
      goto LABEL_172;
    case 3:
      v61 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10562/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_TITLE"*/, 0);
      if ( !v61 )
        goto LABEL_22;
      UILabel__set_text(v61, (System_String_o *)gameObject, 0);
      v62 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10561/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_MESSAGE"*/, 0);
      if ( !v62 )
        goto LABEL_22;
      UILabel__set_text(v62, (System_String_o *)gameObject, 0);
      v36 = &StringLiteral_10560/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_CLOSE"*/;
      goto LABEL_182;
    case 4:
      v45 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10548/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_TITLE"*/, 0);
      if ( !v45 )
        goto LABEL_22;
      UILabel__set_text(v45, (System_String_o *)gameObject, 0);
      v46 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10547/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_MESSAGE"*/, 0);
      if ( !v46 )
        goto LABEL_22;
      UILabel__set_text(v46, (System_String_o *)gameObject, 0);
      v36 = &StringLiteral_10546/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_CLOSE"*/;
      goto LABEL_182;
    case 5:
      v76 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10539/*"PARTY_ORGANIZATION_CONFIRM_COST_OVERT_TITLE"*/, 0);
      if ( !v76 )
        goto LABEL_22;
      UILabel__set_text(v76, (System_String_o *)gameObject, 0);
      v77 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10541/*"PARTY_ORGANIZATION_CONFIRM_COST_OVER_MESSAGE"*/, 0);
      if ( !v77 )
        goto LABEL_22;
      UILabel__set_text(v77, (System_String_o *)gameObject, 0);
      v36 = &StringLiteral_10540/*"PARTY_ORGANIZATION_CONFIRM_COST_OVER_CLOSE"*/;
      goto LABEL_182;
    case 6:
      v80 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10559/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_TITLE"*/, 0);
      if ( !v80 )
        goto LABEL_22;
      UILabel__set_text(v80, (System_String_o *)gameObject, 0);
      v81 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10557/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_MESSAGE"*/, 0);
      if ( !v81 )
        goto LABEL_22;
      UILabel__set_text(v81, (System_String_o *)gameObject, 0);
      nameLabel = this->fields.nameLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10558/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_NAME"*/, 0);
      if ( !partyItem )
        goto LABEL_22;
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                 (System_String_o *)gameObject,
                                                 (Il2CppObject *)partyItem->fields.deckName,
                                                 0);
      if ( !nameLabel )
        goto LABEL_22;
      UILabel__set_text(nameLabel, (System_String_o *)gameObject, 0);
      v83 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10556/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_DECIDE"*/, 0);
      if ( !v83 )
        goto LABEL_22;
      UILabel__set_text(v83, (System_String_o *)gameObject, 0);
      v36 = &StringLiteral_10555/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_CANCEL"*/;
      goto LABEL_172;
    case 7:
      v63 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10572/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_TITLE"*/, 0);
      if ( !v63 )
        goto LABEL_22;
      UILabel__set_text(v63, (System_String_o *)gameObject, 0);
      v64 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10571/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_MESSAGE"*/, 0);
      if ( !v64 )
        goto LABEL_22;
      UILabel__set_text(v64, (System_String_o *)gameObject, 0);
      v65 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10570/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_DECIDE"*/, 0);
      if ( !v65 )
        goto LABEL_22;
      UILabel__set_text(v65, (System_String_o *)gameObject, 0);
      v36 = &StringLiteral_10569/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_CANCEL"*/;
      goto LABEL_172;
    case 8:
      v86 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10566/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_TITLE"*/, 0);
      if ( !v86 )
        goto LABEL_22;
      UILabel__set_text(v86, (System_String_o *)gameObject, 0);
      v87 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10565/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_MESSAGE"*/, 0);
      if ( !v87 )
        goto LABEL_22;
      UILabel__set_text(v87, (System_String_o *)gameObject, 0);
      v88 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10564/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_DECIDE"*/, 0);
      if ( !v88 )
        goto LABEL_22;
      UILabel__set_text(v88, (System_String_o *)gameObject, 0);
      v36 = &StringLiteral_10563/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_CANCEL"*/;
      goto LABEL_172;
    case 9:
      v53 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10579/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/, 0);
      if ( !v53 )
        goto LABEL_22;
      UILabel__set_text(v53, (System_String_o *)gameObject, 0);
      v54 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10578/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/, 0);
      if ( !v54 )
        goto LABEL_22;
      UILabel__set_text(v54, (System_String_o *)gameObject, 0);
      v55 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10574/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/, 0);
      if ( !v55 )
        goto LABEL_22;
      UILabel__set_text(v55, (System_String_o *)gameObject, 0);
      v36 = &StringLiteral_10573/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/;
      goto LABEL_172;
    case 10:
      v84 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10577/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/, 0);
      if ( !v84 )
        goto LABEL_22;
      UILabel__set_text(v84, (System_String_o *)gameObject, 0);
      v85 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10576/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/, 0);
      if ( !v85 )
        goto LABEL_22;
      UILabel__set_text(v85, (System_String_o *)gameObject, 0);
      v36 = &StringLiteral_10575/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/;
      goto LABEL_182;
    case 11:
      v43 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10622/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/, 0);
      if ( !v43 )
        goto LABEL_22;
      UILabel__set_text(v43, (System_String_o *)gameObject, 0);
      v44 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10621/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/, 0);
      if ( !v44 )
        goto LABEL_22;
      UILabel__set_text(v44, (System_String_o *)gameObject, 0);
      v36 = &StringLiteral_10620/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/;
      goto LABEL_182;
    case 12:
      v51 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10616/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_TITLE"*/, 0);
      if ( !v51 )
        goto LABEL_22;
      UILabel__set_text(v51, (System_String_o *)gameObject, 0);
      v52 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10615/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_MESSAGE"*/, 0);
      if ( !v52 )
        goto LABEL_22;
      UILabel__set_text(v52, (System_String_o *)gameObject, 0);
      v36 = &StringLiteral_10614/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_CLOSE"*/;
      goto LABEL_182;
    case 13:
      v78 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10601/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_TITLE"*/, 0);
      if ( !v78 )
        goto LABEL_22;
      UILabel__set_text(v78, (System_String_o *)gameObject, 0);
      v79 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10600/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_MESSAGE"*/, 0);
      if ( !v79 )
        goto LABEL_22;
      UILabel__set_text(v79, (System_String_o *)gameObject, 0);
      v36 = &StringLiteral_10599/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_CLOSE"*/;
      goto LABEL_182;
    case 14:
      v41 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10595/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/, 0);
      if ( !v41 )
        goto LABEL_22;
      UILabel__set_text(v41, (System_String_o *)gameObject, 0);
      v42 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10594/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/, 0);
      if ( !v42 )
        goto LABEL_22;
      UILabel__set_text(v42, (System_String_o *)gameObject, 0);
      v36 = &StringLiteral_10593/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/;
      goto LABEL_182;
    case 15:
      v59 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10585/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_TITLE"*/, 0);
      if ( !v59 )
        goto LABEL_22;
      UILabel__set_text(v59, (System_String_o *)gameObject, 0);
      v38 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10584/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_MESSAGE"*/, 0);
      if ( !partyItem )
        goto LABEL_22;
      v39 = (System_String_o *)gameObject;
      gameObject = (UnityEngine_GameObject_o *)partyItem->fields.questRestrictionInfo;
      if ( !gameObject )
        goto LABEL_22;
      TotalCostRestrictionMessage = (Il2CppObject *)QuestRestrictionInfo__GetTotalCostRestrictionMessage(
                                                      (QuestRestrictionInfo_o *)gameObject,
                                                      0);
      goto LABEL_111;
    case 16:
      v37 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10585/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_TITLE"*/, 0);
      if ( !v37 )
        goto LABEL_22;
      UILabel__set_text(v37, (System_String_o *)gameObject, 0);
      v38 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10584/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_MESSAGE"*/, 0);
      if ( !partyItem )
        goto LABEL_22;
      v39 = (System_String_o *)gameObject;
      gameObject = (UnityEngine_GameObject_o *)partyItem->fields.questRestrictionInfo;
      if ( !gameObject )
        goto LABEL_22;
      TotalCostRestrictionMessage = (Il2CppObject *)QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                                      (QuestRestrictionInfo_o *)gameObject,
                                                      0,
                                                      0,
                                                      1,
                                                      0);
LABEL_111:
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(v39, TotalCostRestrictionMessage, 0);
      if ( !v38 )
        goto LABEL_22;
      UILabel__set_text(v38, (System_String_o *)gameObject, 0);
      v60 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10583/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_DECIDE"*/, 0);
      if ( !v60 )
        goto LABEL_22;
      UILabel__set_text(v60, (System_String_o *)gameObject, 0);
      v36 = &StringLiteral_10582/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_CANCEL"*/;
LABEL_172:
      cancelLabel = this->fields.cancelLabel;
      goto LABEL_183;
    case 17:
      v72 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10619/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_TITLE"*/, 0);
      if ( !v72 )
        goto LABEL_22;
      UILabel__set_text(v72, (System_String_o *)gameObject, 0);
      v73 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10618/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_MESSAGE"*/, 0);
      if ( !partyItem )
        goto LABEL_22;
      v74 = (System_String_o *)gameObject;
      gameObject = (UnityEngine_GameObject_o *)partyItem->fields.questRestrictionInfo;
      if ( !gameObject )
        goto LABEL_22;
      ConfirmRestrictionMessage = (Il2CppObject *)QuestRestrictionInfo__GetTotalCostRestrictionMessage(
                                                    (QuestRestrictionInfo_o *)gameObject,
                                                    0);
      goto LABEL_179;
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
      v30 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10619/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_TITLE"*/, 0);
      if ( !v30 )
        goto LABEL_22;
      UILabel__set_text(v30, (System_String_o *)gameObject, 0);
      v31 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10584/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_MESSAGE"*/, 0);
      if ( !v31 )
        goto LABEL_22;
      v32 = (System_String_o *)gameObject;
      v33 = v31;
      goto LABEL_181;
    case 23:
      v90 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10619/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_TITLE"*/, 0);
      if ( !v90 )
        goto LABEL_22;
      UILabel__set_text(v90, (System_String_o *)gameObject, 0);
      v73 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10618/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_MESSAGE"*/, 0);
      if ( !partyItem )
        goto LABEL_22;
      v74 = (System_String_o *)gameObject;
      gameObject = (UnityEngine_GameObject_o *)partyItem->fields.questRestrictionInfo;
      if ( !gameObject )
        goto LABEL_22;
      ConfirmRestrictionMessage = (Il2CppObject *)QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                                    (QuestRestrictionInfo_o *)gameObject,
                                                    0,
                                                    0,
                                                    1,
                                                    0);
LABEL_179:
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(v74, ConfirmRestrictionMessage, 0);
      if ( !v73 )
        goto LABEL_22;
      v32 = (System_String_o *)gameObject;
      v33 = v73;
LABEL_181:
      UILabel__set_text(v33, v32, 0);
      v36 = &StringLiteral_10617/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_CLOSE"*/;
LABEL_182:
      cancelLabel = this->fields.closeLabel;
LABEL_183:
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v36, 0);
      if ( !cancelLabel )
        goto LABEL_22;
      UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
LABEL_185:
      v91 = System_Action_TypeInfo;
      this->fields.state = 1;
      v92 = (System_Action_o *)sub_2213CCC(v91);
      System_Action___ctor(v92, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeckMenu_EndOpen__, 0);
      BaseDialog__Open((BaseDialog_o *)this, v92, 0, 0, 0);
      break;
    case 24:
      v49 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10528/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_TITLE"*/, 0);
      if ( !v49 )
        goto LABEL_22;
      UILabel__set_text(v49, (System_String_o *)gameObject, 0);
      v50 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10527/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_MESSAGE"*/, 0);
      if ( !v50 )
        goto LABEL_22;
      UILabel__set_text(v50, (System_String_o *)gameObject, 0);
      v36 = &StringLiteral_10526/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_CLOSE"*/;
      goto LABEL_182;
    case 25:
      v47 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10592/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_TITLE"*/, 0);
      if ( !v47 )
        goto LABEL_22;
      UILabel__set_text(v47, (System_String_o *)gameObject, 0);
      v48 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10591/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_MESSAGE"*/, 0);
      if ( !v48 )
        goto LABEL_22;
      UILabel__set_text(v48, (System_String_o *)gameObject, 0);
      v36 = &StringLiteral_10590/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_CLOSE"*/;
      goto LABEL_182;
    case 26:
      v93 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10598/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_TITLE"*/, 0);
      if ( !v93 )
        goto LABEL_22;
      UILabel__set_text(v93, (System_String_o *)gameObject, 0);
      v94 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10597/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_MESSAGE"*/, 0);
      if ( !v94 )
        goto LABEL_22;
      UILabel__set_text(v94, (System_String_o *)gameObject, 0);
      v36 = &StringLiteral_10596/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_CLOSE"*/;
      goto LABEL_182;
    case 27:
      v34 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10625/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_TITLE"*/, 0);
      if ( !v34 )
        goto LABEL_22;
      UILabel__set_text(v34, (System_String_o *)gameObject, 0);
      v35 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10624/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_MESSAGE"*/, 0);
      if ( !v35 )
        goto LABEL_22;
      UILabel__set_text(v35, (System_String_o *)gameObject, 0);
      v36 = &StringLiteral_10623/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_CLOSE"*/;
      goto LABEL_182;
    default:
      goto LABEL_185;
  }
}


void PartyOrganizationConfirmDeckMenu__add_callbackFunc(
        PartyOrganizationConfirmDeckMenu_o *this,
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmDeckMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationConfirmDeckMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyOrganizationConfirmDeckMenu_o *v13; // x0
  PartyOrganizationConfirmDeckMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596BFAE & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
    byte_596BFAE = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmDeckMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyOrganizationConfirmDeckMenu_o *)sub_221405C(
                                                v8,
                                                PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo,
                                                v9,
                                                v10);
  PartyOrganizationConfirmDeckMenu__remove_callbackFunc(v13, v14, v15);
}


void PartyOrganizationConfirmDeckMenu__remove_callbackFunc(
        PartyOrganizationConfirmDeckMenu_o *this,
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmDeckMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationConfirmDeckMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyOrganizationConfirmDeckMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596BFAF & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
    byte_596BFAF = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmDeckMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyOrganizationConfirmDeckMenu_o *)sub_221405C(
                                                v8,
                                                PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo,
                                                v9,
                                                v10);
  PartyOrganizationConfirmDeckMenu__Init(v13, v14);
}


void PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_20044E4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200449C;
}


System_IAsyncResult_o *PartyOrganizationConfirmDeckMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *this,
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


void PartyOrganizationConfirmDeckMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void PartyOrganizationConfirmDeckMenu_CallbackFunc__Invoke(
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}