void PartyOrganizationConfirmDeckMenu___ctor(PartyOrganizationConfirmDeckMenu_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct PartyOrganizationConfirmItemDraw_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D2C305 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&BaseDialog_TypeInfo);
    sub_1C93AD4(&PartyOrganizationConfirmItemDraw___TypeInfo);
    byte_4D2C305 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct PartyOrganizationConfirmItemDraw_array *)sub_1C93B7C(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v4;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.memberObjectList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PartyOrganizationConfirmDeckMenu__Callback(
        PartyOrganizationConfirmDeckMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct PartyOrganizationConfirmDeckMenu_CallbackFunc_o *v9; // x20
  struct PartyOrganizationConfirmDeckMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C93A78(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void PartyOrganizationConfirmDeckMenu__Close(PartyOrganizationConfirmDeckMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmDeckMenu__Close_34799500(this, 0, v2);
}


void PartyOrganizationConfirmDeckMenu__Close_34799500(
        PartyOrganizationConfirmDeckMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4D2C301 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PartyOrganizationConfirmDeckMenu_EndClose__);
    byte_4D2C301 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeckMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void PartyOrganizationConfirmDeckMenu__EndClose(PartyOrganizationConfirmDeckMenu_o *this, const MethodInfo *method)
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

  PartyOrganizationConfirmDeckMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C93A78(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_4D2C2FF & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2C2FF = 1;
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
    sub_1C93D2C(titleLabel, method);
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

  if ( (byte_4D2C303 & 1) == 0 )
  {
    sub_1C93AD4(&Method_PartyOrganizationConfirmDeckMenu_OnClickCancel__);
    byte_4D2C303 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmDeckMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeckMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PartyOrganizationConfirmDeckMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    PartyOrganizationConfirmDeckMenu__Callback(this, 0, v5);
  }
}


void PartyOrganizationConfirmDeckMenu__OnClickClose(PartyOrganizationConfirmDeckMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D2C304 & 1) == 0 )
  {
    sub_1C93AD4(&Method_PartyOrganizationConfirmDeckMenu_OnClickClose__);
    byte_4D2C304 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmDeckMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeckMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PartyOrganizationConfirmDeckMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
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

  if ( (byte_4D2C302 & 1) == 0 )
  {
    sub_1C93AD4(&Method_PartyOrganizationConfirmDeckMenu_OnClickDecide__);
    byte_4D2C302 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmDeckMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeckMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PartyOrganizationConfirmDeckMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
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
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  struct PartyOrganizationConfirmItemDraw_array *memberObjectList; // x8
  NpcServantFollowerMaster_o *v15; // x22
  __int64 v16; // x23
  const MethodInfo *v17; // x7
  intptr_t m_CachedPtr; // x8
  PartyOrganizationListViewItem_o *v19; // x24
  int32_t v20; // w25
  int32_t v21; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  struct PartyOrganizationConfirmItemDraw_array *v23; // x8
  PartyOrganizationConfirmItemDraw_o *v24; // x8
  UnityEngine_GameObject_o *v25; // x0
  UILabel_o *v26; // x20
  struct UILabel_o *v27; // x20
  System_String_o *v28; // x1
  UILabel_o *v29; // x0
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
  UILabel_o *v47; // x21
  UILabel_o *v48; // x21
  UILabel_o *nameLabel; // x21
  UILabel_o *v50; // x20
  UILabel_o *v51; // x20
  UILabel_o *v52; // x20
  UILabel_o *v53; // x20
  UILabel_o *v54; // x20
  UILabel_o *v55; // x20
  UILabel_o *v56; // x20
  UILabel_o *v57; // x20
  UILabel_o *v58; // x20
  UILabel_o *v59; // x20
  UILabel_o *v60; // x20
  UILabel_o *v61; // x20
  UILabel_o *v62; // x20
  UILabel_o *v63; // x20
  UILabel_o *v64; // x20
  UILabel_o *v65; // x20
  UILabel_o *v66; // x20
  UILabel_o *v67; // x20
  UILabel_o *v68; // x20
  UILabel_o *v69; // x20
  UILabel_o *v70; // x21
  UILabel_o *v71; // x21
  System_String_o *v72; // x22
  Il2CppObject *TotalCostRestrictionMessage; // x0
  UILabel_o *v74; // x21
  UILabel_o *v75; // x20
  UILabel_o *v76; // x21
  struct UILabel_o *v77; // x21
  System_String_o *v78; // x22
  Il2CppObject *ConfirmRestrictionMessage; // x0
  UILabel_o *v80; // x21
  System_Action_o *v81; // x20
  UILabel_o *v82; // x20
  UILabel_o *v83; // x20
  UILabel_o *v84; // x20
  UILabel_o *v85; // x20
  UILabel_o *v86; // x20
  UILabel_o *v87; // x20
  UILabel_o *v88; // x20
  UILabel_o *v89; // x20
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D2C300 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_PartyOrganizationConfirmDeckMenu_EndOpen__);
    sub_1C93AD4(&StringLiteral_10242/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10179/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10222/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10276/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10197/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_10224/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_10220/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_10196/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10269/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10248/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10178/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10180/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_10268/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_10183/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10234/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_10252/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10228/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10270/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10245/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10229/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10215/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_10236/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10190/*"PARTY_ORGANIZATION_CONFIRM_COST_OVERT_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10265/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_10237/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_10216/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10274/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_10271/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_10210/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10273/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10247/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_10211/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_10238/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_10267/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10199/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10194/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_10212/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10177/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_10244/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_10266/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10191/*"PARTY_ORGANIZATION_CONFIRM_COST_OVER_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_10225/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_10272/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10233/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_10239/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10251/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10223/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10250/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_10217/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10198/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10235/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10249/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10181/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_10240/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10206/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_10209/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_NAME"*/);
    sub_1C93AD4(&StringLiteral_10221/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_10192/*"PARTY_ORGANIZATION_CONFIRM_COST_OVER_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10241/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_10207/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_10193/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_10213/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10227/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10226/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_10214/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_10208/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10275/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10246/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_10243/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10230/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10182/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10195/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/);
    byte_4D2C300 = 1;
  }
  npcServantFollowerEntity = 0;
  if ( (this->fields.state | 4) != 4 )
    return;
  this->fields.callbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)partyItem,
    (int32_t)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  memberObjectList = this->fields.memberObjectList;
  if ( !memberObjectList )
    goto LABEL_24;
  v15 = (NpcServantFollowerMaster_o *)gameObject;
  v16 = 0;
  while ( (int)v16 < SLODWORD(memberObjectList->max_length) )
  {
    if ( !partyItem )
      goto LABEL_24;
    gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__GetMember(partyItem, v16, 0);
    if ( !gameObject )
      goto LABEL_24;
    m_CachedPtr = gameObject[7].fields.m_CachedPtr;
    v19 = (PartyOrganizationListViewItem_o *)gameObject;
    if ( !m_CachedPtr )
      goto LABEL_19;
    v20 = *(_DWORD *)(m_CachedPtr + 36);
    v21 = *(_DWORD *)(m_CachedPtr + 40);
    SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)gameObject, 0);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                               SvtId,
                                               0);
    if ( !v15 )
      goto LABEL_24;
    gameObject = (UnityEngine_GameObject_o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                               v15,
                                               &npcServantFollowerEntity,
                                               v20,
                                               v21,
                                               (int32_t)gameObject,
                                               0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !npcServantFollowerEntity )
        goto LABEL_24;
      gameObject = (UnityEngine_GameObject_o *)NpcServantFollowerEntity__IsHideRarity(
                                                 npcServantFollowerEntity->fields.flag,
                                                 0);
    }
    else
    {
LABEL_19:
      gameObject = 0;
    }
    v23 = this->fields.memberObjectList;
    if ( v23 )
    {
      if ( (unsigned int)v16 >= LODWORD(v23->max_length) )
        sub_1C93D34(gameObject);
      v24 = v23->m_Items[v16];
      if ( v24 )
      {
        PartyOrganizationConfirmItemDraw__SetItem(v24, v19, 2, 0, (unsigned __int8)gameObject & 1, 0, 0, v17);
        memberObjectList = this->fields.memberObjectList;
        ++v16;
        if ( memberObjectList )
          continue;
      }
    }
    goto LABEL_24;
  }
  if ( (unsigned int)kind > 0x1B )
    goto LABEL_47;
  if ( ((1 << kind) & 0xFDE7C38) != 0 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !gameObject )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
    if ( !gameObject )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
    if ( !gameObject )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
    if ( !gameObject )
      goto LABEL_24;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
      gameObject,
      0,
      1,
      gameObject->klass[1]._1.implementedInterfaces);
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
    if ( !gameObject )
      goto LABEL_24;
    goto LABEL_46;
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
LABEL_46:
                      v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                      AndroidBackKeyManager__AddBackBtn(v25, 0);
                      goto LABEL_47;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_24:
    sub_1C93D2C(gameObject, v13);
  }
LABEL_47:
  gameObject = (UnityEngine_GameObject_o *)this->fields.nameLabel;
  if ( !gameObject )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  switch ( kind )
  {
    case 0:
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10183/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_TITLE"*/, 0);
      if ( !titleLabel )
        goto LABEL_24;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
      messageLabel = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10182/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_MESSAGE"*/, 0);
      if ( !messageLabel )
        goto LABEL_24;
      UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
      decideLabel = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10181/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_DECIDE"*/, 0);
      if ( !decideLabel )
        goto LABEL_24;
      UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
      cancelLabel = this->fields.cancelLabel;
      v34 = &StringLiteral_10180/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_CANCEL"*/;
      goto LABEL_168;
    case 1:
      v35 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10196/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/, 0);
      if ( !v35 )
        goto LABEL_24;
      UILabel__set_text(v35, (System_String_o *)gameObject, 0);
      v36 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10195/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/, 0);
      if ( !v36 )
        goto LABEL_24;
      UILabel__set_text(v36, (System_String_o *)gameObject, 0);
      v37 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10194/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/, 0);
      if ( !v37 )
        goto LABEL_24;
      UILabel__set_text(v37, (System_String_o *)gameObject, 0);
      cancelLabel = this->fields.cancelLabel;
      v34 = &StringLiteral_10193/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/;
      goto LABEL_168;
    case 2:
      v38 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10240/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/, 0);
      if ( !v38 )
        goto LABEL_24;
      UILabel__set_text(v38, (System_String_o *)gameObject, 0);
      v39 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10239/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/, 0);
      if ( !v39 )
        goto LABEL_24;
      UILabel__set_text(v39, (System_String_o *)gameObject, 0);
      v40 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10238/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/, 0);
      if ( !v40 )
        goto LABEL_24;
      UILabel__set_text(v40, (System_String_o *)gameObject, 0);
      cancelLabel = this->fields.cancelLabel;
      v34 = &StringLiteral_10237/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/;
      goto LABEL_168;
    case 3:
      v41 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10213/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_TITLE"*/, 0);
      if ( !v41 )
        goto LABEL_24;
      UILabel__set_text(v41, (System_String_o *)gameObject, 0);
      v42 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10212/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_MESSAGE"*/, 0);
      if ( !v42 )
        goto LABEL_24;
      UILabel__set_text(v42, (System_String_o *)gameObject, 0);
      cancelLabel = this->fields.closeLabel;
      v34 = &StringLiteral_10211/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_CLOSE"*/;
      goto LABEL_168;
    case 4:
      v43 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10199/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_TITLE"*/, 0);
      if ( !v43 )
        goto LABEL_24;
      UILabel__set_text(v43, (System_String_o *)gameObject, 0);
      v44 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10198/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_MESSAGE"*/, 0);
      if ( !v44 )
        goto LABEL_24;
      UILabel__set_text(v44, (System_String_o *)gameObject, 0);
      cancelLabel = this->fields.closeLabel;
      v34 = &StringLiteral_10197/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_CLOSE"*/;
      goto LABEL_168;
    case 5:
      v45 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10190/*"PARTY_ORGANIZATION_CONFIRM_COST_OVERT_TITLE"*/, 0);
      if ( !v45 )
        goto LABEL_24;
      UILabel__set_text(v45, (System_String_o *)gameObject, 0);
      v46 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10192/*"PARTY_ORGANIZATION_CONFIRM_COST_OVER_MESSAGE"*/, 0);
      if ( !v46 )
        goto LABEL_24;
      UILabel__set_text(v46, (System_String_o *)gameObject, 0);
      cancelLabel = this->fields.closeLabel;
      v34 = &StringLiteral_10191/*"PARTY_ORGANIZATION_CONFIRM_COST_OVER_CLOSE"*/;
      goto LABEL_168;
    case 6:
      v47 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10210/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_TITLE"*/, 0);
      if ( !v47 )
        goto LABEL_24;
      UILabel__set_text(v47, (System_String_o *)gameObject, 0);
      v48 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10208/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_MESSAGE"*/, 0);
      if ( !v48 )
        goto LABEL_24;
      UILabel__set_text(v48, (System_String_o *)gameObject, 0);
      nameLabel = this->fields.nameLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10209/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_NAME"*/, 0);
      if ( !partyItem )
        goto LABEL_24;
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                 (System_String_o *)gameObject,
                                                 (Il2CppObject *)partyItem->fields.deckName,
                                                 0);
      if ( !nameLabel )
        goto LABEL_24;
      UILabel__set_text(nameLabel, (System_String_o *)gameObject, 0);
      v50 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10207/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_DECIDE"*/, 0);
      if ( !v50 )
        goto LABEL_24;
      UILabel__set_text(v50, (System_String_o *)gameObject, 0);
      cancelLabel = this->fields.cancelLabel;
      v34 = &StringLiteral_10206/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_CANCEL"*/;
      goto LABEL_168;
    case 7:
      v51 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10223/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_TITLE"*/, 0);
      if ( !v51 )
        goto LABEL_24;
      UILabel__set_text(v51, (System_String_o *)gameObject, 0);
      v52 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10222/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_MESSAGE"*/, 0);
      if ( !v52 )
        goto LABEL_24;
      UILabel__set_text(v52, (System_String_o *)gameObject, 0);
      v53 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10221/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_DECIDE"*/, 0);
      if ( !v53 )
        goto LABEL_24;
      UILabel__set_text(v53, (System_String_o *)gameObject, 0);
      cancelLabel = this->fields.cancelLabel;
      v34 = &StringLiteral_10220/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_CANCEL"*/;
      goto LABEL_168;
    case 8:
      v54 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10217/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_TITLE"*/, 0);
      if ( !v54 )
        goto LABEL_24;
      UILabel__set_text(v54, (System_String_o *)gameObject, 0);
      v55 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10216/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_MESSAGE"*/, 0);
      if ( !v55 )
        goto LABEL_24;
      UILabel__set_text(v55, (System_String_o *)gameObject, 0);
      v56 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10215/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_DECIDE"*/, 0);
      if ( !v56 )
        goto LABEL_24;
      UILabel__set_text(v56, (System_String_o *)gameObject, 0);
      cancelLabel = this->fields.cancelLabel;
      v34 = &StringLiteral_10214/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_CANCEL"*/;
      goto LABEL_168;
    case 9:
      v57 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10230/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/, 0);
      if ( !v57 )
        goto LABEL_24;
      UILabel__set_text(v57, (System_String_o *)gameObject, 0);
      v58 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10229/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/, 0);
      if ( !v58 )
        goto LABEL_24;
      UILabel__set_text(v58, (System_String_o *)gameObject, 0);
      v59 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10225/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/, 0);
      if ( !v59 )
        goto LABEL_24;
      UILabel__set_text(v59, (System_String_o *)gameObject, 0);
      cancelLabel = this->fields.cancelLabel;
      v34 = &StringLiteral_10224/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/;
      goto LABEL_168;
    case 10:
      v60 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10228/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/, 0);
      if ( !v60 )
        goto LABEL_24;
      UILabel__set_text(v60, (System_String_o *)gameObject, 0);
      v61 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10227/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/, 0);
      if ( !v61 )
        goto LABEL_24;
      UILabel__set_text(v61, (System_String_o *)gameObject, 0);
      cancelLabel = this->fields.closeLabel;
      v34 = &StringLiteral_10226/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/;
      goto LABEL_168;
    case 11:
      v62 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10273/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/, 0);
      if ( !v62 )
        goto LABEL_24;
      UILabel__set_text(v62, (System_String_o *)gameObject, 0);
      v63 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10272/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/, 0);
      if ( !v63 )
        goto LABEL_24;
      UILabel__set_text(v63, (System_String_o *)gameObject, 0);
      cancelLabel = this->fields.closeLabel;
      v34 = &StringLiteral_10271/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/;
      goto LABEL_168;
    case 12:
      v64 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10267/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_TITLE"*/, 0);
      if ( !v64 )
        goto LABEL_24;
      UILabel__set_text(v64, (System_String_o *)gameObject, 0);
      v65 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10266/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_MESSAGE"*/, 0);
      if ( !v65 )
        goto LABEL_24;
      UILabel__set_text(v65, (System_String_o *)gameObject, 0);
      cancelLabel = this->fields.closeLabel;
      v34 = &StringLiteral_10265/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_CLOSE"*/;
      goto LABEL_168;
    case 13:
      v66 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10252/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_TITLE"*/, 0);
      if ( !v66 )
        goto LABEL_24;
      UILabel__set_text(v66, (System_String_o *)gameObject, 0);
      v67 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10251/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_MESSAGE"*/, 0);
      if ( !v67 )
        goto LABEL_24;
      UILabel__set_text(v67, (System_String_o *)gameObject, 0);
      cancelLabel = this->fields.closeLabel;
      v34 = &StringLiteral_10250/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_CLOSE"*/;
      goto LABEL_168;
    case 14:
      v68 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10246/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/, 0);
      if ( !v68 )
        goto LABEL_24;
      UILabel__set_text(v68, (System_String_o *)gameObject, 0);
      v69 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10245/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/, 0);
      if ( !v69 )
        goto LABEL_24;
      UILabel__set_text(v69, (System_String_o *)gameObject, 0);
      cancelLabel = this->fields.closeLabel;
      v34 = &StringLiteral_10244/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/;
      goto LABEL_168;
    case 15:
      v70 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10236/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_TITLE"*/, 0);
      if ( !v70 )
        goto LABEL_24;
      UILabel__set_text(v70, (System_String_o *)gameObject, 0);
      v71 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10235/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_MESSAGE"*/, 0);
      if ( !partyItem )
        goto LABEL_24;
      v72 = (System_String_o *)gameObject;
      gameObject = (UnityEngine_GameObject_o *)partyItem->fields.questRestrictionInfo;
      if ( !gameObject )
        goto LABEL_24;
      TotalCostRestrictionMessage = (Il2CppObject *)QuestRestrictionInfo__GetTotalCostRestrictionMessage(
                                                      (QuestRestrictionInfo_o *)gameObject,
                                                      0);
      goto LABEL_150;
    case 16:
      v74 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10236/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_TITLE"*/, 0);
      if ( !v74 )
        goto LABEL_24;
      UILabel__set_text(v74, (System_String_o *)gameObject, 0);
      v71 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10235/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_MESSAGE"*/, 0);
      if ( !partyItem )
        goto LABEL_24;
      v72 = (System_String_o *)gameObject;
      gameObject = (UnityEngine_GameObject_o *)partyItem->fields.questRestrictionInfo;
      if ( !gameObject )
        goto LABEL_24;
      TotalCostRestrictionMessage = (Il2CppObject *)QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                                      (QuestRestrictionInfo_o *)gameObject,
                                                      0,
                                                      0,
                                                      1,
                                                      0);
LABEL_150:
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(v72, TotalCostRestrictionMessage, 0);
      if ( !v71 )
        goto LABEL_24;
      UILabel__set_text(v71, (System_String_o *)gameObject, 0);
      v75 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10234/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_DECIDE"*/, 0);
      if ( !v75 )
        goto LABEL_24;
      UILabel__set_text(v75, (System_String_o *)gameObject, 0);
      cancelLabel = this->fields.cancelLabel;
      v34 = &StringLiteral_10233/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_CANCEL"*/;
      goto LABEL_168;
    case 17:
      v76 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10270/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_TITLE"*/, 0);
      if ( !v76 )
        goto LABEL_24;
      UILabel__set_text(v76, (System_String_o *)gameObject, 0);
      v77 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10269/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_MESSAGE"*/, 0);
      if ( !partyItem )
        goto LABEL_24;
      v78 = (System_String_o *)gameObject;
      gameObject = (UnityEngine_GameObject_o *)partyItem->fields.questRestrictionInfo;
      if ( !gameObject )
        goto LABEL_24;
      ConfirmRestrictionMessage = (Il2CppObject *)QuestRestrictionInfo__GetTotalCostRestrictionMessage(
                                                    (QuestRestrictionInfo_o *)gameObject,
                                                    0);
      goto LABEL_165;
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
      v26 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10270/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_TITLE"*/, 0);
      if ( !v26 )
        goto LABEL_24;
      UILabel__set_text(v26, (System_String_o *)gameObject, 0);
      v27 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10235/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_MESSAGE"*/, 0);
      if ( !v27 )
        goto LABEL_24;
      v28 = (System_String_o *)gameObject;
      v29 = v27;
      goto LABEL_167;
    case 23:
      v80 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10270/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_TITLE"*/, 0);
      if ( !v80 )
        goto LABEL_24;
      UILabel__set_text(v80, (System_String_o *)gameObject, 0);
      v77 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10269/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_MESSAGE"*/, 0);
      if ( !partyItem )
        goto LABEL_24;
      v78 = (System_String_o *)gameObject;
      gameObject = (UnityEngine_GameObject_o *)partyItem->fields.questRestrictionInfo;
      if ( !gameObject )
        goto LABEL_24;
      ConfirmRestrictionMessage = (Il2CppObject *)QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                                    (QuestRestrictionInfo_o *)gameObject,
                                                    0,
                                                    0,
                                                    1,
                                                    0);
LABEL_165:
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(v78, ConfirmRestrictionMessage, 0);
      if ( !v77 )
        goto LABEL_24;
      v28 = (System_String_o *)gameObject;
      v29 = v77;
LABEL_167:
      UILabel__set_text(v29, v28, 0);
      cancelLabel = this->fields.closeLabel;
      v34 = &StringLiteral_10268/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_CLOSE"*/;
LABEL_168:
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v34, 0);
      if ( !cancelLabel )
        goto LABEL_24;
      UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
LABEL_170:
      this->fields.state = 1;
      v81 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v81, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeckMenu_EndOpen__, 0);
      BaseDialog__Open((BaseDialog_o *)this, v81, 0, 0, 0);
      break;
    case 24:
      v82 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10179/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_TITLE"*/, 0);
      if ( !v82 )
        goto LABEL_24;
      UILabel__set_text(v82, (System_String_o *)gameObject, 0);
      v83 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10178/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_MESSAGE"*/, 0);
      if ( !v83 )
        goto LABEL_24;
      UILabel__set_text(v83, (System_String_o *)gameObject, 0);
      cancelLabel = this->fields.closeLabel;
      v34 = &StringLiteral_10177/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_CLOSE"*/;
      goto LABEL_168;
    case 25:
      v84 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10243/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_TITLE"*/, 0);
      if ( !v84 )
        goto LABEL_24;
      UILabel__set_text(v84, (System_String_o *)gameObject, 0);
      v85 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10242/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_MESSAGE"*/, 0);
      if ( !v85 )
        goto LABEL_24;
      UILabel__set_text(v85, (System_String_o *)gameObject, 0);
      cancelLabel = this->fields.closeLabel;
      v34 = &StringLiteral_10241/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_CLOSE"*/;
      goto LABEL_168;
    case 26:
      v86 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10249/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_TITLE"*/, 0);
      if ( !v86 )
        goto LABEL_24;
      UILabel__set_text(v86, (System_String_o *)gameObject, 0);
      v87 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10248/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_MESSAGE"*/, 0);
      if ( !v87 )
        goto LABEL_24;
      UILabel__set_text(v87, (System_String_o *)gameObject, 0);
      cancelLabel = this->fields.closeLabel;
      v34 = &StringLiteral_10247/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_CLOSE"*/;
      goto LABEL_168;
    case 27:
      v88 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10276/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_TITLE"*/, 0);
      if ( !v88 )
        goto LABEL_24;
      UILabel__set_text(v88, (System_String_o *)gameObject, 0);
      v89 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10275/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_MESSAGE"*/, 0);
      if ( !v89 )
        goto LABEL_24;
      UILabel__set_text(v89, (System_String_o *)gameObject, 0);
      cancelLabel = this->fields.closeLabel;
      v34 = &StringLiteral_10274/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_CLOSE"*/;
      goto LABEL_168;
    default:
      goto LABEL_170;
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
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationConfirmDeckMenu_o *v11; // x0
  PartyOrganizationConfirmDeckMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D2C2FD & 1) == 0 )
  {
    sub_1C93AD4(&PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
    byte_4D2C2FD = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmDeckMenu_o *)sub_1C940C8(v8);
  PartyOrganizationConfirmDeckMenu__remove_callbackFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationConfirmDeckMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D2C2FE & 1) == 0 )
  {
    sub_1C93AD4(&PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
    byte_4D2C2FE = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmDeckMenu_o *)sub_1C940C8(v8);
  PartyOrganizationConfirmDeckMenu__Init(v11, v12);
}


void PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *this,
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
  sub_1C93A78(
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
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC2DD0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC2D88;
}


System_IAsyncResult_o *PartyOrganizationConfirmDeckMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4D2C306 & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    byte_4D2C306 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return sub_1C93A88(this, v9, callback, object);
}


void PartyOrganizationConfirmDeckMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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