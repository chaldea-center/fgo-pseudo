void __fastcall PartyOrganizationConfirmDeckMenu___ctor(
        PartyOrganizationConfirmDeckMenu_o *this,
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

  if ( (byte_418B699 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&BaseDialog_TypeInfo, v3);
    sub_B2C35C(&PartyOrganizationConfirmItemDraw___TypeInfo, v4);
    byte_418B699 = 1;
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
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmDeckMenu__Callback(
        PartyOrganizationConfirmDeckMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  PartyOrganizationConfirmDeckMenu_CallbackFunc_o *v9; // x19
  struct PartyOrganizationConfirmDeckMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PartyOrganizationConfirmDeckMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall PartyOrganizationConfirmDeckMenu__Close(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmDeckMenu__Close_32170724(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmDeckMenu__Close_32170724(
        PartyOrganizationConfirmDeckMenu_o *this,
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

  if ( (byte_418B695 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_PartyOrganizationConfirmDeckMenu_EndClose__, v10);
    byte_418B695 = 1;
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
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeckMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall PartyOrganizationConfirmDeckMenu__EndClose(
        PartyOrganizationConfirmDeckMenu_o *this,
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

  PartyOrganizationConfirmDeckMenu__Init(this, method);
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


void __fastcall PartyOrganizationConfirmDeckMenu__EndOpen(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PartyOrganizationConfirmDeckMenu__Init(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_418B693 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418B693 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.nameLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.cancelLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeLabel) == 0LL) )
  {
LABEL_10:
    sub_B2C434(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmDeckMenu__OnClickCancel(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_418B697 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B697 = 1;
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
    PartyOrganizationConfirmDeckMenu__Callback(this, 0, v3);
  }
}


void __fastcall PartyOrganizationConfirmDeckMenu__OnClickClose(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_418B698 & 1) == 0 )
  {
    sub_B2C35C(&Method_PartyOrganizationConfirmDeckMenu_OnClickClose__, method);
    byte_418B698 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmDeckMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeckMenu_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_PartyOrganizationConfirmDeckMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    PartyOrganizationConfirmDeckMenu__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationConfirmDeckMenu__OnClickDecide(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_418B696 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B696 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    PartyOrganizationConfirmDeckMenu__Callback(this, 1, v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmDeckMenu__Open(
        PartyOrganizationConfirmDeckMenu_o *this,
        int32_t kind,
        PartyListViewItem_o *partyItem,
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x1
  __int64 v71; // x1
  __int64 v72; // x1
  __int64 v73; // x1
  __int64 v74; // x1
  __int64 v75; // x1
  __int64 v76; // x1
  __int64 v77; // x1
  __int64 v78; // x1
  __int64 v79; // x1
  __int64 v80; // x1
  __int64 v81; // x1
  __int64 v82; // x1
  __int64 v83; // x1
  __int64 v84; // x1
  __int64 v85; // x1
  __int64 v86; // x1
  __int64 v87; // x1
  __int64 v88; // x1
  __int64 v89; // x1
  __int64 v90; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v92; // x1
  struct PartyOrganizationConfirmItemDraw_array *memberObjectList; // x8
  NpcServantFollowerMaster_o *v94; // x22
  __int64 v95; // x23
  const MethodInfo *v96; // x7
  __int64 v97; // x8
  PartyOrganizationListViewItem_o *v98; // x24
  int32_t v99; // w25
  int32_t v100; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct PartyOrganizationConfirmItemDraw_array *v102; // x8
  PartyOrganizationConfirmItemDraw_o *v103; // x8
  UnityEngine_GameObject_o *v104; // x22
  UILabel_o *v105; // x20
  struct UILabel_o *v106; // x20
  System_String_o *v107; // x1
  UILabel_o *v108; // x0
  UILabel_o *v109; // x20
  UILabel_o *v110; // x20
  UILabel_o *v111; // x20
  UILabel_o *cancelLabel; // x20
  __int64 *v113; // x8
  UILabel_o *v114; // x20
  UILabel_o *v115; // x20
  UILabel_o *v116; // x20
  UILabel_o *v117; // x20
  UILabel_o *v118; // x20
  UILabel_o *v119; // x20
  UILabel_o *v120; // x20
  UILabel_o *v121; // x20
  UILabel_o *v122; // x20
  UILabel_o *v123; // x20
  UILabel_o *v124; // x20
  UILabel_o *v125; // x21
  UILabel_o *v126; // x21
  System_String_o *v127; // x22
  Il2CppObject *TotalCostRestrictionMessage; // x0
  UILabel_o *v129; // x20
  UILabel_o *v130; // x20
  UILabel_o *v131; // x20
  UILabel_o *v132; // x20
  UILabel_o *v133; // x20
  UILabel_o *v134; // x20
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *v138; // x20
  UILabel_o *v139; // x20
  UILabel_o *v140; // x20
  UILabel_o *v141; // x20
  UILabel_o *v142; // x20
  UILabel_o *v143; // x20
  UILabel_o *v144; // x20
  UILabel_o *v145; // x21
  UILabel_o *v146; // x21
  UILabel_o *nameLabel; // x21
  UILabel_o *v148; // x20
  UILabel_o *v149; // x20
  UILabel_o *v150; // x20
  UILabel_o *v151; // x20
  UILabel_o *v152; // x20
  UILabel_o *v153; // x20
  UILabel_o *v154; // x20
  UILabel_o *v155; // x20
  UILabel_o *v156; // x20
  UILabel_o *v157; // x20
  UILabel_o *v158; // x20
  UILabel_o *v159; // x21
  UILabel_o *v160; // x20
  UILabel_o *v161; // x21
  struct UILabel_o *v162; // x21
  System_String_o *v163; // x22
  Il2CppObject *ConfirmRestrictionMessage; // x0
  UILabel_o *v165; // x21
  System_Action_o *v166; // x20
  UILabel_o *v167; // x20
  UILabel_o *v168; // x20
  __int64 v169; // x0
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418B694 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, v12);
    sub_B2C35C(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v13);
    sub_B2C35C(&DataManager_TypeInfo, v14);
    sub_B2C35C(&LocalizationManager_TypeInfo, v15);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B2C35C(&Method_PartyOrganizationConfirmDeckMenu_EndOpen__, v17);
    sub_B2C35C(&StringLiteral_10288/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_MESSAGE"*/, v18);
    sub_B2C35C(&StringLiteral_10225/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_TITLE"*/, v19);
    sub_B2C35C(&StringLiteral_10268/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_MESSAGE"*/, v20);
    sub_B2C35C(&StringLiteral_10322/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_TITLE"*/, v21);
    sub_B2C35C(&StringLiteral_10243/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_CLOSE"*/, v22);
    sub_B2C35C(&StringLiteral_10270/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/, v23);
    sub_B2C35C(&StringLiteral_10266/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_CANCEL"*/, v24);
    sub_B2C35C(&StringLiteral_10242/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/, v25);
    sub_B2C35C(&StringLiteral_10315/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_MESSAGE"*/, v26);
    sub_B2C35C(&StringLiteral_10294/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_MESSAGE"*/, v27);
    sub_B2C35C(&StringLiteral_10224/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_MESSAGE"*/, v28);
    sub_B2C35C(&StringLiteral_10226/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_CANCEL"*/, v29);
    sub_B2C35C(&StringLiteral_10314/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_CLOSE"*/, v30);
    sub_B2C35C(&StringLiteral_10229/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_TITLE"*/, v31);
    sub_B2C35C(&StringLiteral_10280/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_DECIDE"*/, v32);
    sub_B2C35C(&StringLiteral_10298/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_TITLE"*/, v33);
    sub_B2C35C(&StringLiteral_10274/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/, v34);
    sub_B2C35C(&StringLiteral_10316/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_TITLE"*/, v35);
    sub_B2C35C(&StringLiteral_10291/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/, v36);
    sub_B2C35C(&StringLiteral_10275/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/, v37);
    sub_B2C35C(&StringLiteral_10261/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_DECIDE"*/, v38);
    sub_B2C35C(&StringLiteral_10282/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_TITLE"*/, v39);
    sub_B2C35C(&StringLiteral_10236/*"PARTY_ORGANIZATION_CONFIRM_COST_OVERT_TITLE"*/, v40);
    sub_B2C35C(&StringLiteral_10311/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_CLOSE"*/, v41);
    sub_B2C35C(&StringLiteral_10283/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/, v42);
    sub_B2C35C(&StringLiteral_10262/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_MESSAGE"*/, v43);
    sub_B2C35C(&StringLiteral_10320/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_CLOSE"*/, v44);
    sub_B2C35C(&StringLiteral_10317/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/, v45);
    sub_B2C35C(&StringLiteral_10256/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_TITLE"*/, v46);
    sub_B2C35C(&StringLiteral_10319/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/, v47);
    sub_B2C35C(&StringLiteral_10293/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_CLOSE"*/, v48);
    sub_B2C35C(&StringLiteral_10257/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_CLOSE"*/, v49);
    sub_B2C35C(&StringLiteral_10284/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/, v50);
    sub_B2C35C(&StringLiteral_10313/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_TITLE"*/, v51);
    sub_B2C35C(&StringLiteral_10245/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_TITLE"*/, v52);
    sub_B2C35C(&StringLiteral_10240/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/, v53);
    sub_B2C35C(&StringLiteral_10258/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_MESSAGE"*/, v54);
    sub_B2C35C(&StringLiteral_10223/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_CLOSE"*/, v55);
    sub_B2C35C(&StringLiteral_10290/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/, v56);
    sub_B2C35C(&StringLiteral_10312/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_MESSAGE"*/, v57);
    sub_B2C35C(&StringLiteral_10237/*"PARTY_ORGANIZATION_CONFIRM_COST_OVER_CLOSE"*/, v58);
    sub_B2C35C(&StringLiteral_10271/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/, v59);
    sub_B2C35C(&StringLiteral_10318/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/, v60);
    sub_B2C35C(&StringLiteral_10279/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_CANCEL"*/, v61);
    sub_B2C35C(&StringLiteral_10285/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/, v62);
    sub_B2C35C(&StringLiteral_10297/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_MESSAGE"*/, v63);
    sub_B2C35C(&StringLiteral_10269/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_TITLE"*/, v64);
    sub_B2C35C(&StringLiteral_10296/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_CLOSE"*/, v65);
    sub_B2C35C(&StringLiteral_10263/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_TITLE"*/, v66);
    sub_B2C35C(&StringLiteral_10244/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_MESSAGE"*/, v67);
    sub_B2C35C(&StringLiteral_10281/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_MESSAGE"*/, v68);
    sub_B2C35C(&StringLiteral_10295/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_TITLE"*/, v69);
    sub_B2C35C(&StringLiteral_10227/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_DECIDE"*/, v70);
    sub_B2C35C(&StringLiteral_10286/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/, v71);
    sub_B2C35C(&StringLiteral_10252/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_CANCEL"*/, v72);
    sub_B2C35C(&StringLiteral_10255/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_NAME"*/, v73);
    sub_B2C35C(&StringLiteral_10267/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_DECIDE"*/, v74);
    sub_B2C35C(&StringLiteral_10238/*"PARTY_ORGANIZATION_CONFIRM_COST_OVER_MESSAGE"*/, v75);
    sub_B2C35C(&StringLiteral_10287/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_CLOSE"*/, v76);
    sub_B2C35C(&StringLiteral_10253/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_DECIDE"*/, v77);
    sub_B2C35C(&StringLiteral_10239/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/, v78);
    sub_B2C35C(&StringLiteral_10259/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_TITLE"*/, v79);
    sub_B2C35C(&StringLiteral_10273/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/, v80);
    sub_B2C35C(&StringLiteral_10272/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/, v81);
    sub_B2C35C(&StringLiteral_10260/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_CANCEL"*/, v82);
    sub_B2C35C(&StringLiteral_10254/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_MESSAGE"*/, v83);
    sub_B2C35C(&StringLiteral_10321/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_MESSAGE"*/, v84);
    sub_B2C35C(&StringLiteral_10292/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/, v85);
    sub_B2C35C(&StringLiteral_1/*""*/, v86);
    sub_B2C35C(&StringLiteral_10289/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_TITLE"*/, v87);
    sub_B2C35C(&StringLiteral_10276/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/, v88);
    sub_B2C35C(&StringLiteral_10228/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_MESSAGE"*/, v89);
    sub_B2C35C(&StringLiteral_10241/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/, v90);
    byte_418B694 = 1;
  }
  npcServantFollowerEntity = 0LL;
  if ( (this->fields.state | 4) != 4 )
    return;
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)partyItem,
    (System_String_array **)callback,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  memberObjectList = this->fields.memberObjectList;
  if ( !memberObjectList )
    goto LABEL_26;
  v94 = (NpcServantFollowerMaster_o *)gameObject;
  v95 = 0LL;
  while ( (int)v95 < (signed int)memberObjectList->max_length )
  {
    if ( !partyItem )
      goto LABEL_26;
    gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__GetMember(partyItem, v95, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    v97 = *(_QWORD *)&gameObject[6].fields.m_CachedPtr;
    v98 = (PartyOrganizationListViewItem_o *)gameObject;
    if ( !v97 )
      goto LABEL_21;
    v99 = *(_DWORD *)(v97 + 36);
    v100 = *(_DWORD *)(v97 + 40);
    SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)gameObject, v92);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                               SvtId,
                                               0LL);
    if ( !v94 )
      goto LABEL_26;
    gameObject = (UnityEngine_GameObject_o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                               v94,
                                               &npcServantFollowerEntity,
                                               v99,
                                               v100,
                                               (int32_t)gameObject,
                                               0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !npcServantFollowerEntity )
        goto LABEL_26;
      gameObject = (UnityEngine_GameObject_o *)NpcServantFollowerEntity__IsHideRarity(
                                                 npcServantFollowerEntity->fields.flag,
                                                 0LL);
    }
    else
    {
LABEL_21:
      gameObject = 0LL;
    }
    v102 = this->fields.memberObjectList;
    if ( v102 )
    {
      if ( (unsigned int)v95 >= v102->max_length )
      {
        v169 = sub_B2C460(gameObject);
        sub_B2C400(v169, 0LL);
      }
      v103 = v102->m_Items[v95];
      if ( v103 )
      {
        PartyOrganizationConfirmItemDraw__SetItem(v103, v98, 2, 0, (unsigned __int8)gameObject & 1, 0, 0, v96);
        memberObjectList = this->fields.memberObjectList;
        ++v95;
        if ( memberObjectList )
          continue;
      }
    }
    goto LABEL_26;
  }
  if ( (unsigned int)kind > 0x1B )
    goto LABEL_52;
  if ( ((1 << kind) & 0xFDE7C38) != 0 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !gameObject )
      goto LABEL_26;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
    if ( !gameObject )
      goto LABEL_26;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
    if ( !gameObject )
      goto LABEL_26;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
    if ( !gameObject )
      goto LABEL_26;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
      gameObject,
      0LL,
      1LL,
      gameObject->klass[1]._1.interfaceOffsets);
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
    if ( !gameObject )
      goto LABEL_26;
    goto LABEL_48;
  }
  if ( ((1 << kind) & 0x183C7) != 0 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( gameObject )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
            gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
            if ( gameObject )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
                if ( gameObject )
                {
                  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
                    gameObject,
                    0LL,
                    1LL,
                    gameObject->klass[1]._1.interfaceOffsets);
                  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                  if ( gameObject )
                  {
                    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
                      gameObject,
                      0LL,
                      1LL,
                      gameObject->klass[1]._1.interfaceOffsets);
                    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                    if ( gameObject )
                    {
LABEL_48:
                      v104 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                      if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
                      }
                      AndroidBackKeyManager__AddBackBtn(v104, 0LL);
                      goto LABEL_52;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_26:
    sub_B2C434(gameObject, v92);
  }
LABEL_52:
  gameObject = (UnityEngine_GameObject_o *)this->fields.nameLabel;
  if ( !gameObject )
    goto LABEL_26;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  switch ( kind )
  {
    case 0:
      titleLabel = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10229/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_26;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      messageLabel = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10228/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_MESSAGE"*/, 0LL);
      if ( !messageLabel )
        goto LABEL_26;
      UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
      decideLabel = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10227/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_DECIDE"*/, 0LL);
      if ( !decideLabel )
        goto LABEL_26;
      UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v113 = &StringLiteral_10226/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_CANCEL"*/;
      goto LABEL_211;
    case 1:
      v138 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10242/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/, 0LL);
      if ( !v138 )
        goto LABEL_26;
      UILabel__set_text(v138, (System_String_o *)gameObject, 0LL);
      v139 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10241/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/, 0LL);
      if ( !v139 )
        goto LABEL_26;
      UILabel__set_text(v139, (System_String_o *)gameObject, 0LL);
      v140 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10240/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/, 0LL);
      if ( !v140 )
        goto LABEL_26;
      UILabel__set_text(v140, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v113 = &StringLiteral_10239/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/;
      goto LABEL_211;
    case 2:
      v109 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10286/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/, 0LL);
      if ( !v109 )
        goto LABEL_26;
      UILabel__set_text(v109, (System_String_o *)gameObject, 0LL);
      v110 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10285/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/, 0LL);
      if ( !v110 )
        goto LABEL_26;
      UILabel__set_text(v110, (System_String_o *)gameObject, 0LL);
      v111 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10284/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/, 0LL);
      if ( !v111 )
        goto LABEL_26;
      UILabel__set_text(v111, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v113 = &StringLiteral_10283/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/;
      goto LABEL_211;
    case 3:
      v141 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10259/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_TITLE"*/, 0LL);
      if ( !v141 )
        goto LABEL_26;
      UILabel__set_text(v141, (System_String_o *)gameObject, 0LL);
      v142 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10258/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_MESSAGE"*/, 0LL);
      if ( !v142 )
        goto LABEL_26;
      UILabel__set_text(v142, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v113 = &StringLiteral_10257/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_CLOSE"*/;
      goto LABEL_211;
    case 4:
      v114 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10245/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_TITLE"*/, 0LL);
      if ( !v114 )
        goto LABEL_26;
      UILabel__set_text(v114, (System_String_o *)gameObject, 0LL);
      v115 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10244/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_MESSAGE"*/, 0LL);
      if ( !v115 )
        goto LABEL_26;
      UILabel__set_text(v115, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v113 = &StringLiteral_10243/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_CLOSE"*/;
      goto LABEL_211;
    case 5:
      v143 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10236/*"PARTY_ORGANIZATION_CONFIRM_COST_OVERT_TITLE"*/, 0LL);
      if ( !v143 )
        goto LABEL_26;
      UILabel__set_text(v143, (System_String_o *)gameObject, 0LL);
      v144 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10238/*"PARTY_ORGANIZATION_CONFIRM_COST_OVER_MESSAGE"*/, 0LL);
      if ( !v144 )
        goto LABEL_26;
      UILabel__set_text(v144, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v113 = &StringLiteral_10237/*"PARTY_ORGANIZATION_CONFIRM_COST_OVER_CLOSE"*/;
      goto LABEL_211;
    case 6:
      v145 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10256/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_TITLE"*/, 0LL);
      if ( !v145 )
        goto LABEL_26;
      UILabel__set_text(v145, (System_String_o *)gameObject, 0LL);
      v146 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10254/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_MESSAGE"*/, 0LL);
      if ( !v146 )
        goto LABEL_26;
      UILabel__set_text(v146, (System_String_o *)gameObject, 0LL);
      nameLabel = this->fields.nameLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10255/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_NAME"*/, 0LL);
      if ( !partyItem )
        goto LABEL_26;
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                 (System_String_o *)gameObject,
                                                 (Il2CppObject *)partyItem->fields.deckName,
                                                 0LL);
      if ( !nameLabel )
        goto LABEL_26;
      UILabel__set_text(nameLabel, (System_String_o *)gameObject, 0LL);
      v148 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10253/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_DECIDE"*/, 0LL);
      if ( !v148 )
        goto LABEL_26;
      UILabel__set_text(v148, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v113 = &StringLiteral_10252/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_CANCEL"*/;
      goto LABEL_211;
    case 7:
      v149 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10269/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_TITLE"*/, 0LL);
      if ( !v149 )
        goto LABEL_26;
      UILabel__set_text(v149, (System_String_o *)gameObject, 0LL);
      v150 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10268/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_MESSAGE"*/, 0LL);
      if ( !v150 )
        goto LABEL_26;
      UILabel__set_text(v150, (System_String_o *)gameObject, 0LL);
      v151 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10267/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_DECIDE"*/, 0LL);
      if ( !v151 )
        goto LABEL_26;
      UILabel__set_text(v151, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v113 = &StringLiteral_10266/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_CANCEL"*/;
      goto LABEL_211;
    case 8:
      v152 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10263/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_TITLE"*/, 0LL);
      if ( !v152 )
        goto LABEL_26;
      UILabel__set_text(v152, (System_String_o *)gameObject, 0LL);
      v153 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10262/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_MESSAGE"*/, 0LL);
      if ( !v153 )
        goto LABEL_26;
      UILabel__set_text(v153, (System_String_o *)gameObject, 0LL);
      v154 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10261/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_DECIDE"*/, 0LL);
      if ( !v154 )
        goto LABEL_26;
      UILabel__set_text(v154, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v113 = &StringLiteral_10260/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_CANCEL"*/;
      goto LABEL_211;
    case 9:
      v116 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10276/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/, 0LL);
      if ( !v116 )
        goto LABEL_26;
      UILabel__set_text(v116, (System_String_o *)gameObject, 0LL);
      v117 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10275/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/, 0LL);
      if ( !v117 )
        goto LABEL_26;
      UILabel__set_text(v117, (System_String_o *)gameObject, 0LL);
      v118 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10271/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/, 0LL);
      if ( !v118 )
        goto LABEL_26;
      UILabel__set_text(v118, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v113 = &StringLiteral_10270/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/;
      goto LABEL_211;
    case 10:
      v155 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10274/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/, 0LL);
      if ( !v155 )
        goto LABEL_26;
      UILabel__set_text(v155, (System_String_o *)gameObject, 0LL);
      v156 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10273/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/, 0LL);
      if ( !v156 )
        goto LABEL_26;
      UILabel__set_text(v156, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v113 = &StringLiteral_10272/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/;
      goto LABEL_211;
    case 11:
      v119 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10319/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/, 0LL);
      if ( !v119 )
        goto LABEL_26;
      UILabel__set_text(v119, (System_String_o *)gameObject, 0LL);
      v120 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10318/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/, 0LL);
      if ( !v120 )
        goto LABEL_26;
      UILabel__set_text(v120, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v113 = &StringLiteral_10317/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/;
      goto LABEL_211;
    case 12:
      v121 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10313/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_TITLE"*/, 0LL);
      if ( !v121 )
        goto LABEL_26;
      UILabel__set_text(v121, (System_String_o *)gameObject, 0LL);
      v122 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10312/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_MESSAGE"*/, 0LL);
      if ( !v122 )
        goto LABEL_26;
      UILabel__set_text(v122, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v113 = &StringLiteral_10311/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_CLOSE"*/;
      goto LABEL_211;
    case 13:
      v157 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10298/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_TITLE"*/, 0LL);
      if ( !v157 )
        goto LABEL_26;
      UILabel__set_text(v157, (System_String_o *)gameObject, 0LL);
      v158 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10297/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_MESSAGE"*/, 0LL);
      if ( !v158 )
        goto LABEL_26;
      UILabel__set_text(v158, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v113 = &StringLiteral_10296/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_CLOSE"*/;
      goto LABEL_211;
    case 14:
      v123 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10292/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/, 0LL);
      if ( !v123 )
        goto LABEL_26;
      UILabel__set_text(v123, (System_String_o *)gameObject, 0LL);
      v124 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10291/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/, 0LL);
      if ( !v124 )
        goto LABEL_26;
      UILabel__set_text(v124, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v113 = &StringLiteral_10290/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/;
      goto LABEL_211;
    case 15:
      v159 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10282/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_TITLE"*/, 0LL);
      if ( !v159 )
        goto LABEL_26;
      UILabel__set_text(v159, (System_String_o *)gameObject, 0LL);
      v126 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10281/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_MESSAGE"*/, 0LL);
      if ( !partyItem )
        goto LABEL_26;
      v127 = (System_String_o *)gameObject;
      gameObject = (UnityEngine_GameObject_o *)partyItem->fields.questRestrictionInfo;
      if ( !gameObject )
        goto LABEL_26;
      TotalCostRestrictionMessage = (Il2CppObject *)QuestRestrictionInfo__GetTotalCostRestrictionMessage(
                                                      (QuestRestrictionInfo_o *)gameObject,
                                                      0LL);
      goto LABEL_191;
    case 16:
      v125 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10282/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_TITLE"*/, 0LL);
      if ( !v125 )
        goto LABEL_26;
      UILabel__set_text(v125, (System_String_o *)gameObject, 0LL);
      v126 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10281/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_MESSAGE"*/, 0LL);
      if ( !partyItem )
        goto LABEL_26;
      v127 = (System_String_o *)gameObject;
      gameObject = (UnityEngine_GameObject_o *)partyItem->fields.questRestrictionInfo;
      if ( !gameObject )
        goto LABEL_26;
      TotalCostRestrictionMessage = (Il2CppObject *)QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                                      (QuestRestrictionInfo_o *)gameObject,
                                                      0,
                                                      0,
                                                      1,
                                                      0LL);
LABEL_191:
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(v127, TotalCostRestrictionMessage, 0LL);
      if ( !v126 )
        goto LABEL_26;
      UILabel__set_text(v126, (System_String_o *)gameObject, 0LL);
      v160 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10280/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_DECIDE"*/, 0LL);
      if ( !v160 )
        goto LABEL_26;
      UILabel__set_text(v160, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v113 = &StringLiteral_10279/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_CANCEL"*/;
      goto LABEL_211;
    case 17:
      v161 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10316/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_TITLE"*/, 0LL);
      if ( !v161 )
        goto LABEL_26;
      UILabel__set_text(v161, (System_String_o *)gameObject, 0LL);
      v162 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10315/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_MESSAGE"*/, 0LL);
      if ( !partyItem )
        goto LABEL_26;
      v163 = (System_String_o *)gameObject;
      gameObject = (UnityEngine_GameObject_o *)partyItem->fields.questRestrictionInfo;
      if ( !gameObject )
        goto LABEL_26;
      ConfirmRestrictionMessage = (Il2CppObject *)QuestRestrictionInfo__GetTotalCostRestrictionMessage(
                                                    (QuestRestrictionInfo_o *)gameObject,
                                                    0LL);
      goto LABEL_208;
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
      v105 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10316/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_TITLE"*/, 0LL);
      if ( !v105 )
        goto LABEL_26;
      UILabel__set_text(v105, (System_String_o *)gameObject, 0LL);
      v106 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10281/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_MESSAGE"*/, 0LL);
      if ( !v106 )
        goto LABEL_26;
      v107 = (System_String_o *)gameObject;
      v108 = v106;
      goto LABEL_210;
    case 23:
      v165 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10316/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_TITLE"*/, 0LL);
      if ( !v165 )
        goto LABEL_26;
      UILabel__set_text(v165, (System_String_o *)gameObject, 0LL);
      v162 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10315/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_MESSAGE"*/, 0LL);
      if ( !partyItem )
        goto LABEL_26;
      v163 = (System_String_o *)gameObject;
      gameObject = (UnityEngine_GameObject_o *)partyItem->fields.questRestrictionInfo;
      if ( !gameObject )
        goto LABEL_26;
      ConfirmRestrictionMessage = (Il2CppObject *)QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                                    (QuestRestrictionInfo_o *)gameObject,
                                                    0,
                                                    0,
                                                    1,
                                                    0LL);
LABEL_208:
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(v163, ConfirmRestrictionMessage, 0LL);
      if ( !v162 )
        goto LABEL_26;
      v107 = (System_String_o *)gameObject;
      v108 = v162;
LABEL_210:
      UILabel__set_text(v108, v107, 0LL);
      cancelLabel = this->fields.closeLabel;
      v113 = &StringLiteral_10314/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_CLOSE"*/;
LABEL_211:
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v113, 0LL);
      if ( !cancelLabel )
        goto LABEL_26;
      UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
LABEL_213:
      this->fields.state = 1;
      v166 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v166, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeckMenu_EndOpen__, 0LL);
      BaseDialog__Open((BaseDialog_o *)this, v166, 0, 0LL);
      break;
    case 24:
      v129 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10225/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_TITLE"*/, 0LL);
      if ( !v129 )
        goto LABEL_26;
      UILabel__set_text(v129, (System_String_o *)gameObject, 0LL);
      v130 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10224/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_MESSAGE"*/, 0LL);
      if ( !v130 )
        goto LABEL_26;
      UILabel__set_text(v130, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v113 = &StringLiteral_10223/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_CLOSE"*/;
      goto LABEL_211;
    case 25:
      v131 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10289/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_TITLE"*/, 0LL);
      if ( !v131 )
        goto LABEL_26;
      UILabel__set_text(v131, (System_String_o *)gameObject, 0LL);
      v132 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10288/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_MESSAGE"*/, 0LL);
      if ( !v132 )
        goto LABEL_26;
      UILabel__set_text(v132, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v113 = &StringLiteral_10287/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_CLOSE"*/;
      goto LABEL_211;
    case 26:
      v167 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10295/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_TITLE"*/, 0LL);
      if ( !v167 )
        goto LABEL_26;
      UILabel__set_text(v167, (System_String_o *)gameObject, 0LL);
      v168 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10294/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_MESSAGE"*/, 0LL);
      if ( !v168 )
        goto LABEL_26;
      UILabel__set_text(v168, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v113 = &StringLiteral_10293/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_CLOSE"*/;
      goto LABEL_211;
    case 27:
      v133 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10322/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_TITLE"*/, 0LL);
      if ( !v133 )
        goto LABEL_26;
      UILabel__set_text(v133, (System_String_o *)gameObject, 0LL);
      v134 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10321/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_MESSAGE"*/, 0LL);
      if ( !v134 )
        goto LABEL_26;
      UILabel__set_text(v134, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v113 = &StringLiteral_10320/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_CLOSE"*/;
      goto LABEL_211;
    default:
      goto LABEL_213;
  }
}


void __fastcall PartyOrganizationConfirmDeckMenu__add_callbackFunc(
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

  if ( (byte_418B691 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo, value);
    byte_418B691 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmDeckMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  PartyOrganizationConfirmDeckMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PartyOrganizationConfirmDeckMenu__remove_callbackFunc(
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

  if ( (byte_418B692 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo, value);
    byte_418B692 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmDeckMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  PartyOrganizationConfirmDeckMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *this,
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
System_IAsyncResult_o *__fastcall PartyOrganizationConfirmDeckMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_418528A & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_418528A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmDeckMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmDeckMenu_CallbackFunc__Invoke(
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  PartyOrganizationConfirmDeckMenu_CallbackFunc_o **v8; // x25
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
  PartyOrganizationConfirmDeckMenu_CallbackFunc_o *v20; // x8
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
  PartyOrganizationConfirmDeckMenu_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o **)(v4 + 32);
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