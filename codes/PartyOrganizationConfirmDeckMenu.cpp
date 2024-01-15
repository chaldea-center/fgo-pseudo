void __fastcall PartyOrganizationConfirmDeckMenu___ctor(
        PartyOrganizationConfirmDeckMenu_o *this,
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

  if ( (byte_40FDC36 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&BaseDialog_TypeInfo, v4);
    sub_B16FFC(&PartyOrganizationConfirmItemDraw___TypeInfo, v5);
    byte_40FDC36 = 1;
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PartyOrganizationConfirmDeckMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall PartyOrganizationConfirmDeckMenu__Close(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmDeckMenu__Close_32269764(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmDeckMenu__Close_32269764(
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FDC32 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_PartyOrganizationConfirmDeckMenu_EndClose__, v10);
    byte_40FDC32 = 1;
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
  System_Action___ctor(v15, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeckMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  UILabel_o *messageLabel; // x0
  UILabel_o *nameLabel; // x0
  UILabel_o *decideLabel; // x0
  UILabel_o *cancelLabel; // x0
  UILabel_o *closeLabel; // x0

  if ( (byte_40FDC30 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FDC30 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_10;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel
    || (UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (decideLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(decideLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (cancelLabel = this->fields.cancelLabel) == 0LL)
    || (UILabel__set_text(cancelLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (closeLabel = this->fields.closeLabel) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  UILabel__set_text(closeLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmDeckMenu__OnClickCancel(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FDC34 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FDC34 = 1;
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

  if ( (byte_40FDC35 & 1) == 0 )
  {
    sub_B16FFC(&Method_PartyOrganizationConfirmDeckMenu_OnClickClose__, method);
    byte_40FDC35 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmDeckMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeckMenu_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_PartyOrganizationConfirmDeckMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    PartyOrganizationConfirmDeckMenu__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationConfirmDeckMenu__OnClickDecide(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FDC33 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FDC33 = 1;
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  struct PartyOrganizationConfirmItemDraw_array *memberObjectList; // x8
  NpcServantFollowerMaster_o *v94; // x22
  __int64 v95; // x23
  PartyOrganizationListViewItem_o *Member; // x0
  const MethodInfo *v97; // x1
  __int64 v98; // x2
  const MethodInfo *v99; // x7
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  PartyOrganizationListViewItem_o *v101; // x24
  int32_t questId; // w25
  int32_t questPhase; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v105; // w0
  _BOOL8 IsHideRarity; // x0
  struct PartyOrganizationConfirmItemDraw_array *v107; // x8
  PartyOrganizationConfirmItemDraw_o *v108; // x8
  UnityEngine_Component_o *decideButton; // x0
  UnityEngine_GameObject_o *v110; // x0
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *v112; // x0
  UnityEngine_Component_o *closeButton; // x0
  UnityEngine_GameObject_o *v114; // x0
  struct UICommonButton_o *v115; // x0
  UnityEngine_Component_o *v116; // x0
  UnityEngine_Component_o *v117; // x0
  UnityEngine_GameObject_o *v118; // x0
  UnityEngine_Component_o *v119; // x0
  UnityEngine_GameObject_o *v120; // x0
  UnityEngine_Component_o *v121; // x0
  UnityEngine_GameObject_o *v122; // x0
  struct UICommonButton_o *v123; // x0
  struct UICommonButton_o *v124; // x0
  UnityEngine_GameObject_o *v125; // x22
  UILabel_o *nameLabel; // x0
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x3
  __int64 v130; // x4
  UILabel_o *v131; // x20
  System_String_o *v132; // x0
  struct UILabel_o *v133; // x20
  System_String_o *v134; // x0
  System_String_o *v135; // x1
  UILabel_o *v136; // x0
  UILabel_o *v137; // x20
  System_String_o *v138; // x0
  UILabel_o *v139; // x20
  System_String_o *v140; // x0
  UILabel_o *v141; // x20
  System_String_o *v142; // x0
  UILabel_o *cancelLabel; // x20
  __int64 *v144; // x8
  UILabel_o *v145; // x20
  System_String_o *v146; // x0
  UILabel_o *v147; // x20
  System_String_o *v148; // x0
  UILabel_o *v149; // x20
  System_String_o *v150; // x0
  UILabel_o *v151; // x20
  System_String_o *v152; // x0
  UILabel_o *v153; // x20
  System_String_o *v154; // x0
  UILabel_o *v155; // x20
  System_String_o *v156; // x0
  UILabel_o *v157; // x20
  System_String_o *v158; // x0
  UILabel_o *v159; // x20
  System_String_o *v160; // x0
  UILabel_o *v161; // x20
  System_String_o *v162; // x0
  UILabel_o *v163; // x20
  System_String_o *v164; // x0
  UILabel_o *v165; // x20
  System_String_o *v166; // x0
  UILabel_o *v167; // x21
  System_String_o *v168; // x0
  UILabel_o *v169; // x21
  System_String_o *v170; // x0
  System_String_o *v171; // x22
  QuestRestrictionInfo_o *v172; // x0
  Il2CppObject *TotalCostRestrictionMessage; // x0
  UILabel_o *v174; // x20
  System_String_o *v175; // x0
  UILabel_o *v176; // x20
  System_String_o *v177; // x0
  UILabel_o *v178; // x20
  System_String_o *v179; // x0
  UILabel_o *v180; // x20
  System_String_o *v181; // x0
  UILabel_o *v182; // x20
  System_String_o *v183; // x0
  UILabel_o *v184; // x20
  System_String_o *v185; // x0
  UILabel_o *titleLabel; // x20
  System_String_o *v187; // x0
  UILabel_o *messageLabel; // x20
  System_String_o *v189; // x0
  UILabel_o *decideLabel; // x20
  System_String_o *v191; // x0
  UILabel_o *v192; // x20
  System_String_o *v193; // x0
  UILabel_o *v194; // x20
  System_String_o *v195; // x0
  UILabel_o *v196; // x20
  System_String_o *v197; // x0
  UILabel_o *v198; // x20
  System_String_o *v199; // x0
  UILabel_o *v200; // x20
  System_String_o *v201; // x0
  UILabel_o *v202; // x20
  System_String_o *v203; // x0
  UILabel_o *v204; // x20
  System_String_o *v205; // x0
  UILabel_o *v206; // x21
  System_String_o *v207; // x0
  UILabel_o *v208; // x21
  System_String_o *v209; // x0
  UILabel_o *v210; // x21
  System_String_o *v211; // x0
  System_String_o *v212; // x0
  UILabel_o *v213; // x20
  System_String_o *v214; // x0
  UILabel_o *v215; // x20
  System_String_o *v216; // x0
  UILabel_o *v217; // x20
  System_String_o *v218; // x0
  UILabel_o *v219; // x20
  System_String_o *v220; // x0
  UILabel_o *v221; // x20
  System_String_o *v222; // x0
  UILabel_o *v223; // x20
  System_String_o *v224; // x0
  UILabel_o *v225; // x20
  System_String_o *v226; // x0
  UILabel_o *v227; // x20
  System_String_o *v228; // x0
  UILabel_o *v229; // x20
  System_String_o *v230; // x0
  UILabel_o *v231; // x20
  System_String_o *v232; // x0
  UILabel_o *v233; // x20
  System_String_o *v234; // x0
  UILabel_o *v235; // x21
  System_String_o *v236; // x0
  System_String_o *v237; // x0
  QuestRestrictionInfo_o *v238; // x0
  System_String_o *v239; // x0
  UILabel_o *v240; // x20
  System_String_o *v241; // x0
  UILabel_o *v242; // x21
  System_String_o *v243; // x0
  struct UILabel_o *v244; // x21
  System_String_o *v245; // x0
  System_String_o *v246; // x22
  QuestRestrictionInfo_o *v247; // x0
  Il2CppObject *ConfirmRestrictionMessage; // x0
  UILabel_o *v249; // x21
  System_String_o *v250; // x0
  System_String_o *v251; // x0
  QuestRestrictionInfo_o *v252; // x0
  System_String_o *v253; // x0
  System_String_o *v254; // x0
  System_Action_o *v255; // x20
  UILabel_o *v256; // x20
  System_String_o *v257; // x0
  UILabel_o *v258; // x20
  System_String_o *v259; // x0
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FDC31 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, v12);
    sub_B16FFC(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v13);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B16FFC(&Method_PartyOrganizationConfirmDeckMenu_EndOpen__, v17);
    sub_B16FFC(&StringLiteral_10255/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_MESSAGE"*/, v18);
    sub_B16FFC(&StringLiteral_10192/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_TITLE"*/, v19);
    sub_B16FFC(&StringLiteral_10235/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_MESSAGE"*/, v20);
    sub_B16FFC(&StringLiteral_10289/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_TITLE"*/, v21);
    sub_B16FFC(&StringLiteral_10210/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_CLOSE"*/, v22);
    sub_B16FFC(&StringLiteral_10237/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/, v23);
    sub_B16FFC(&StringLiteral_10233/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_CANCEL"*/, v24);
    sub_B16FFC(&StringLiteral_10209/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/, v25);
    sub_B16FFC(&StringLiteral_10282/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_MESSAGE"*/, v26);
    sub_B16FFC(&StringLiteral_10261/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_MESSAGE"*/, v27);
    sub_B16FFC(&StringLiteral_10191/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_MESSAGE"*/, v28);
    sub_B16FFC(&StringLiteral_10193/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_CANCEL"*/, v29);
    sub_B16FFC(&StringLiteral_10281/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_CLOSE"*/, v30);
    sub_B16FFC(&StringLiteral_10196/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_TITLE"*/, v31);
    sub_B16FFC(&StringLiteral_10247/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_DECIDE"*/, v32);
    sub_B16FFC(&StringLiteral_10265/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_TITLE"*/, v33);
    sub_B16FFC(&StringLiteral_10241/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/, v34);
    sub_B16FFC(&StringLiteral_10283/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_TITLE"*/, v35);
    sub_B16FFC(&StringLiteral_10258/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/, v36);
    sub_B16FFC(&StringLiteral_10242/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/, v37);
    sub_B16FFC(&StringLiteral_10228/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_DECIDE"*/, v38);
    sub_B16FFC(&StringLiteral_10249/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_TITLE"*/, v39);
    sub_B16FFC(&StringLiteral_10203/*"PARTY_ORGANIZATION_CONFIRM_COST_OVERT_TITLE"*/, v40);
    sub_B16FFC(&StringLiteral_10278/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_CLOSE"*/, v41);
    sub_B16FFC(&StringLiteral_10250/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/, v42);
    sub_B16FFC(&StringLiteral_10229/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_MESSAGE"*/, v43);
    sub_B16FFC(&StringLiteral_10287/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_CLOSE"*/, v44);
    sub_B16FFC(&StringLiteral_10284/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/, v45);
    sub_B16FFC(&StringLiteral_10223/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_TITLE"*/, v46);
    sub_B16FFC(&StringLiteral_10286/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/, v47);
    sub_B16FFC(&StringLiteral_10260/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_CLOSE"*/, v48);
    sub_B16FFC(&StringLiteral_10224/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_CLOSE"*/, v49);
    sub_B16FFC(&StringLiteral_10251/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/, v50);
    sub_B16FFC(&StringLiteral_10280/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_TITLE"*/, v51);
    sub_B16FFC(&StringLiteral_10212/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_TITLE"*/, v52);
    sub_B16FFC(&StringLiteral_10207/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/, v53);
    sub_B16FFC(&StringLiteral_10225/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_MESSAGE"*/, v54);
    sub_B16FFC(&StringLiteral_10190/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_CLOSE"*/, v55);
    sub_B16FFC(&StringLiteral_10257/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/, v56);
    sub_B16FFC(&StringLiteral_10279/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_MESSAGE"*/, v57);
    sub_B16FFC(&StringLiteral_10204/*"PARTY_ORGANIZATION_CONFIRM_COST_OVER_CLOSE"*/, v58);
    sub_B16FFC(&StringLiteral_10238/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/, v59);
    sub_B16FFC(&StringLiteral_10285/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/, v60);
    sub_B16FFC(&StringLiteral_10246/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_CANCEL"*/, v61);
    sub_B16FFC(&StringLiteral_10252/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/, v62);
    sub_B16FFC(&StringLiteral_10264/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_MESSAGE"*/, v63);
    sub_B16FFC(&StringLiteral_10236/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_TITLE"*/, v64);
    sub_B16FFC(&StringLiteral_10263/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_CLOSE"*/, v65);
    sub_B16FFC(&StringLiteral_10230/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_TITLE"*/, v66);
    sub_B16FFC(&StringLiteral_10211/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_MESSAGE"*/, v67);
    sub_B16FFC(&StringLiteral_10248/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_MESSAGE"*/, v68);
    sub_B16FFC(&StringLiteral_10262/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_TITLE"*/, v69);
    sub_B16FFC(&StringLiteral_10194/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_DECIDE"*/, v70);
    sub_B16FFC(&StringLiteral_10253/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/, v71);
    sub_B16FFC(&StringLiteral_10219/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_CANCEL"*/, v72);
    sub_B16FFC(&StringLiteral_10222/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_NAME"*/, v73);
    sub_B16FFC(&StringLiteral_10234/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_DECIDE"*/, v74);
    sub_B16FFC(&StringLiteral_10205/*"PARTY_ORGANIZATION_CONFIRM_COST_OVER_MESSAGE"*/, v75);
    sub_B16FFC(&StringLiteral_10254/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_CLOSE"*/, v76);
    sub_B16FFC(&StringLiteral_10220/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_DECIDE"*/, v77);
    sub_B16FFC(&StringLiteral_10206/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/, v78);
    sub_B16FFC(&StringLiteral_10226/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_TITLE"*/, v79);
    sub_B16FFC(&StringLiteral_10240/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/, v80);
    sub_B16FFC(&StringLiteral_10239/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/, v81);
    sub_B16FFC(&StringLiteral_10227/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_CANCEL"*/, v82);
    sub_B16FFC(&StringLiteral_10221/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_MESSAGE"*/, v83);
    sub_B16FFC(&StringLiteral_10288/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_MESSAGE"*/, v84);
    sub_B16FFC(&StringLiteral_10259/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/, v85);
    sub_B16FFC(&StringLiteral_1/*""*/, v86);
    sub_B16FFC(&StringLiteral_10256/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_TITLE"*/, v87);
    sub_B16FFC(&StringLiteral_10243/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/, v88);
    sub_B16FFC(&StringLiteral_10195/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_MESSAGE"*/, v89);
    sub_B16FFC(&StringLiteral_10208/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/, v90);
    byte_40FDC31 = 1;
  }
  npcServantFollowerEntity = 0LL;
  if ( (this->fields.state | 4) != 4 )
    return;
  this->fields.callbackFunc = callback;
  sub_B16F98(
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
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  memberObjectList = this->fields.memberObjectList;
  if ( !memberObjectList )
    goto LABEL_26;
  v94 = (NpcServantFollowerMaster_o *)Master_WarQuestSelectionMaster;
  v95 = 0LL;
  while ( (int)v95 < (signed int)memberObjectList->max_length )
  {
    if ( !partyItem )
      goto LABEL_26;
    Member = PartyListViewItem__GetMember(partyItem, v95, 0LL);
    if ( !Member )
      goto LABEL_26;
    questRestrictionInfo = Member->fields.questRestrictionInfo;
    v101 = Member;
    if ( !questRestrictionInfo )
      goto LABEL_21;
    questId = questRestrictionInfo->fields.questId;
    questPhase = questRestrictionInfo->fields.questPhase;
    SvtId = PartyOrganizationListViewItem__get_SvtId(Member, v97);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(SvtId, 0LL);
    if ( !v94 )
      goto LABEL_26;
    if ( NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
           v94,
           &npcServantFollowerEntity,
           questId,
           questPhase,
           v105,
           0LL) )
    {
      if ( !npcServantFollowerEntity )
        goto LABEL_26;
      IsHideRarity = NpcServantFollowerEntity__IsHideRarity(npcServantFollowerEntity->fields.flag, 0LL);
    }
    else
    {
LABEL_21:
      IsHideRarity = 0LL;
    }
    v107 = this->fields.memberObjectList;
    if ( v107 )
    {
      if ( (unsigned int)v95 >= v107->max_length )
      {
        sub_B17100(IsHideRarity, v97, v98);
        sub_B170A0();
      }
      v108 = v107->m_Items[v95];
      if ( v108 )
      {
        PartyOrganizationConfirmItemDraw__SetItem(v108, v101, 2, 0, IsHideRarity, 0, 0, v99);
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
    decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
    if ( !decideButton )
      goto LABEL_26;
    v110 = UnityEngine_Component__get_gameObject(decideButton, 0LL);
    if ( !v110 )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(v110, 0, 0LL);
    cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
    if ( !cancelButton )
      goto LABEL_26;
    v112 = UnityEngine_Component__get_gameObject(cancelButton, 0LL);
    if ( !v112 )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(v112, 0, 0LL);
    closeButton = (UnityEngine_Component_o *)this->fields.closeButton;
    if ( !closeButton )
      goto LABEL_26;
    v114 = UnityEngine_Component__get_gameObject(closeButton, 0LL);
    if ( !v114 )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(v114, 1, 0LL);
    v115 = this->fields.closeButton;
    if ( !v115 )
      goto LABEL_26;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v115->klass->vtable._14_SetState.method)(
      v115,
      0LL,
      1LL,
      v115->klass->vtable._15_OnPress.methodPtr);
    v116 = (UnityEngine_Component_o *)this->fields.closeButton;
    if ( !v116 )
      goto LABEL_26;
    goto LABEL_48;
  }
  if ( ((1 << kind) & 0x183C7) != 0 )
  {
    v117 = (UnityEngine_Component_o *)this->fields.decideButton;
    if ( v117 )
    {
      v118 = UnityEngine_Component__get_gameObject(v117, 0LL);
      if ( v118 )
      {
        UnityEngine_GameObject__SetActive(v118, 1, 0LL);
        v119 = (UnityEngine_Component_o *)this->fields.cancelButton;
        if ( v119 )
        {
          v120 = UnityEngine_Component__get_gameObject(v119, 0LL);
          if ( v120 )
          {
            UnityEngine_GameObject__SetActive(v120, 1, 0LL);
            v121 = (UnityEngine_Component_o *)this->fields.closeButton;
            if ( v121 )
            {
              v122 = UnityEngine_Component__get_gameObject(v121, 0LL);
              if ( v122 )
              {
                UnityEngine_GameObject__SetActive(v122, 0, 0LL);
                v123 = this->fields.decideButton;
                if ( v123 )
                {
                  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v123->klass->vtable._14_SetState.method)(
                    v123,
                    0LL,
                    1LL,
                    v123->klass->vtable._15_OnPress.methodPtr);
                  v124 = this->fields.cancelButton;
                  if ( v124 )
                  {
                    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v124->klass->vtable._14_SetState.method)(
                      v124,
                      0LL,
                      1LL,
                      v124->klass->vtable._15_OnPress.methodPtr);
                    v116 = (UnityEngine_Component_o *)this->fields.cancelButton;
                    if ( v116 )
                    {
LABEL_48:
                      v125 = UnityEngine_Component__get_gameObject(v116, 0LL);
                      if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
                      }
                      AndroidBackKeyManager__AddBackBtn(v125, 0LL);
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
    sub_B170D4();
  }
LABEL_52:
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_26;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  switch ( kind )
  {
    case 0:
      titleLabel = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v187 = LocalizationManager__Get((System_String_o *)StringLiteral_10196/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_26;
      UILabel__set_text(titleLabel, v187, 0LL);
      messageLabel = this->fields.messageLabel;
      v189 = LocalizationManager__Get((System_String_o *)StringLiteral_10195/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_MESSAGE"*/, 0LL);
      if ( !messageLabel )
        goto LABEL_26;
      UILabel__set_text(messageLabel, v189, 0LL);
      decideLabel = this->fields.decideLabel;
      v191 = LocalizationManager__Get((System_String_o *)StringLiteral_10194/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_DECIDE"*/, 0LL);
      if ( !decideLabel )
        goto LABEL_26;
      UILabel__set_text(decideLabel, v191, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v144 = &StringLiteral_10193/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_CANCEL"*/;
      goto LABEL_211;
    case 1:
      v192 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v193 = LocalizationManager__Get((System_String_o *)StringLiteral_10209/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/, 0LL);
      if ( !v192 )
        goto LABEL_26;
      UILabel__set_text(v192, v193, 0LL);
      v194 = this->fields.messageLabel;
      v195 = LocalizationManager__Get((System_String_o *)StringLiteral_10208/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/, 0LL);
      if ( !v194 )
        goto LABEL_26;
      UILabel__set_text(v194, v195, 0LL);
      v196 = this->fields.decideLabel;
      v197 = LocalizationManager__Get((System_String_o *)StringLiteral_10207/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/, 0LL);
      if ( !v196 )
        goto LABEL_26;
      UILabel__set_text(v196, v197, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v144 = &StringLiteral_10206/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/;
      goto LABEL_211;
    case 2:
      v137 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v138 = LocalizationManager__Get((System_String_o *)StringLiteral_10253/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/, 0LL);
      if ( !v137 )
        goto LABEL_26;
      UILabel__set_text(v137, v138, 0LL);
      v139 = this->fields.messageLabel;
      v140 = LocalizationManager__Get((System_String_o *)StringLiteral_10252/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/, 0LL);
      if ( !v139 )
        goto LABEL_26;
      UILabel__set_text(v139, v140, 0LL);
      v141 = this->fields.decideLabel;
      v142 = LocalizationManager__Get((System_String_o *)StringLiteral_10251/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/, 0LL);
      if ( !v141 )
        goto LABEL_26;
      UILabel__set_text(v141, v142, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v144 = &StringLiteral_10250/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/;
      goto LABEL_211;
    case 3:
      v198 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v199 = LocalizationManager__Get((System_String_o *)StringLiteral_10226/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_TITLE"*/, 0LL);
      if ( !v198 )
        goto LABEL_26;
      UILabel__set_text(v198, v199, 0LL);
      v200 = this->fields.messageLabel;
      v201 = LocalizationManager__Get((System_String_o *)StringLiteral_10225/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_MESSAGE"*/, 0LL);
      if ( !v200 )
        goto LABEL_26;
      UILabel__set_text(v200, v201, 0LL);
      cancelLabel = this->fields.closeLabel;
      v144 = &StringLiteral_10224/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_CLOSE"*/;
      goto LABEL_211;
    case 4:
      v145 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v146 = LocalizationManager__Get((System_String_o *)StringLiteral_10212/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_TITLE"*/, 0LL);
      if ( !v145 )
        goto LABEL_26;
      UILabel__set_text(v145, v146, 0LL);
      v147 = this->fields.messageLabel;
      v148 = LocalizationManager__Get((System_String_o *)StringLiteral_10211/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_MESSAGE"*/, 0LL);
      if ( !v147 )
        goto LABEL_26;
      UILabel__set_text(v147, v148, 0LL);
      cancelLabel = this->fields.closeLabel;
      v144 = &StringLiteral_10210/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_CLOSE"*/;
      goto LABEL_211;
    case 5:
      v202 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v203 = LocalizationManager__Get((System_String_o *)StringLiteral_10203/*"PARTY_ORGANIZATION_CONFIRM_COST_OVERT_TITLE"*/, 0LL);
      if ( !v202 )
        goto LABEL_26;
      UILabel__set_text(v202, v203, 0LL);
      v204 = this->fields.messageLabel;
      v205 = LocalizationManager__Get((System_String_o *)StringLiteral_10205/*"PARTY_ORGANIZATION_CONFIRM_COST_OVER_MESSAGE"*/, 0LL);
      if ( !v204 )
        goto LABEL_26;
      UILabel__set_text(v204, v205, 0LL);
      cancelLabel = this->fields.closeLabel;
      v144 = &StringLiteral_10204/*"PARTY_ORGANIZATION_CONFIRM_COST_OVER_CLOSE"*/;
      goto LABEL_211;
    case 6:
      v206 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v207 = LocalizationManager__Get((System_String_o *)StringLiteral_10223/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_TITLE"*/, 0LL);
      if ( !v206 )
        goto LABEL_26;
      UILabel__set_text(v206, v207, 0LL);
      v208 = this->fields.messageLabel;
      v209 = LocalizationManager__Get((System_String_o *)StringLiteral_10221/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_MESSAGE"*/, 0LL);
      if ( !v208 )
        goto LABEL_26;
      UILabel__set_text(v208, v209, 0LL);
      v210 = this->fields.nameLabel;
      v211 = LocalizationManager__Get((System_String_o *)StringLiteral_10222/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_NAME"*/, 0LL);
      if ( !partyItem )
        goto LABEL_26;
      v212 = System_String__Format(v211, (Il2CppObject *)partyItem->fields.deckName, 0LL);
      if ( !v210 )
        goto LABEL_26;
      UILabel__set_text(v210, v212, 0LL);
      v213 = this->fields.decideLabel;
      v214 = LocalizationManager__Get((System_String_o *)StringLiteral_10220/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_DECIDE"*/, 0LL);
      if ( !v213 )
        goto LABEL_26;
      UILabel__set_text(v213, v214, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v144 = &StringLiteral_10219/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_CANCEL"*/;
      goto LABEL_211;
    case 7:
      v215 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v216 = LocalizationManager__Get((System_String_o *)StringLiteral_10236/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_TITLE"*/, 0LL);
      if ( !v215 )
        goto LABEL_26;
      UILabel__set_text(v215, v216, 0LL);
      v217 = this->fields.messageLabel;
      v218 = LocalizationManager__Get((System_String_o *)StringLiteral_10235/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_MESSAGE"*/, 0LL);
      if ( !v217 )
        goto LABEL_26;
      UILabel__set_text(v217, v218, 0LL);
      v219 = this->fields.decideLabel;
      v220 = LocalizationManager__Get((System_String_o *)StringLiteral_10234/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_DECIDE"*/, 0LL);
      if ( !v219 )
        goto LABEL_26;
      UILabel__set_text(v219, v220, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v144 = &StringLiteral_10233/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_CANCEL"*/;
      goto LABEL_211;
    case 8:
      v221 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v222 = LocalizationManager__Get((System_String_o *)StringLiteral_10230/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_TITLE"*/, 0LL);
      if ( !v221 )
        goto LABEL_26;
      UILabel__set_text(v221, v222, 0LL);
      v223 = this->fields.messageLabel;
      v224 = LocalizationManager__Get((System_String_o *)StringLiteral_10229/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_MESSAGE"*/, 0LL);
      if ( !v223 )
        goto LABEL_26;
      UILabel__set_text(v223, v224, 0LL);
      v225 = this->fields.decideLabel;
      v226 = LocalizationManager__Get((System_String_o *)StringLiteral_10228/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_DECIDE"*/, 0LL);
      if ( !v225 )
        goto LABEL_26;
      UILabel__set_text(v225, v226, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v144 = &StringLiteral_10227/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_CANCEL"*/;
      goto LABEL_211;
    case 9:
      v149 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v150 = LocalizationManager__Get((System_String_o *)StringLiteral_10243/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/, 0LL);
      if ( !v149 )
        goto LABEL_26;
      UILabel__set_text(v149, v150, 0LL);
      v151 = this->fields.messageLabel;
      v152 = LocalizationManager__Get((System_String_o *)StringLiteral_10242/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/, 0LL);
      if ( !v151 )
        goto LABEL_26;
      UILabel__set_text(v151, v152, 0LL);
      v153 = this->fields.decideLabel;
      v154 = LocalizationManager__Get((System_String_o *)StringLiteral_10238/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/, 0LL);
      if ( !v153 )
        goto LABEL_26;
      UILabel__set_text(v153, v154, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v144 = &StringLiteral_10237/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/;
      goto LABEL_211;
    case 10:
      v227 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v228 = LocalizationManager__Get((System_String_o *)StringLiteral_10241/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/, 0LL);
      if ( !v227 )
        goto LABEL_26;
      UILabel__set_text(v227, v228, 0LL);
      v229 = this->fields.messageLabel;
      v230 = LocalizationManager__Get((System_String_o *)StringLiteral_10240/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/, 0LL);
      if ( !v229 )
        goto LABEL_26;
      UILabel__set_text(v229, v230, 0LL);
      cancelLabel = this->fields.closeLabel;
      v144 = &StringLiteral_10239/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/;
      goto LABEL_211;
    case 11:
      v155 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v156 = LocalizationManager__Get((System_String_o *)StringLiteral_10286/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/, 0LL);
      if ( !v155 )
        goto LABEL_26;
      UILabel__set_text(v155, v156, 0LL);
      v157 = this->fields.messageLabel;
      v158 = LocalizationManager__Get((System_String_o *)StringLiteral_10285/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/, 0LL);
      if ( !v157 )
        goto LABEL_26;
      UILabel__set_text(v157, v158, 0LL);
      cancelLabel = this->fields.closeLabel;
      v144 = &StringLiteral_10284/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/;
      goto LABEL_211;
    case 12:
      v159 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v160 = LocalizationManager__Get((System_String_o *)StringLiteral_10280/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_TITLE"*/, 0LL);
      if ( !v159 )
        goto LABEL_26;
      UILabel__set_text(v159, v160, 0LL);
      v161 = this->fields.messageLabel;
      v162 = LocalizationManager__Get((System_String_o *)StringLiteral_10279/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_MESSAGE"*/, 0LL);
      if ( !v161 )
        goto LABEL_26;
      UILabel__set_text(v161, v162, 0LL);
      cancelLabel = this->fields.closeLabel;
      v144 = &StringLiteral_10278/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_CLOSE"*/;
      goto LABEL_211;
    case 13:
      v231 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v232 = LocalizationManager__Get((System_String_o *)StringLiteral_10265/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_TITLE"*/, 0LL);
      if ( !v231 )
        goto LABEL_26;
      UILabel__set_text(v231, v232, 0LL);
      v233 = this->fields.messageLabel;
      v234 = LocalizationManager__Get((System_String_o *)StringLiteral_10264/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_MESSAGE"*/, 0LL);
      if ( !v233 )
        goto LABEL_26;
      UILabel__set_text(v233, v234, 0LL);
      cancelLabel = this->fields.closeLabel;
      v144 = &StringLiteral_10263/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_CLOSE"*/;
      goto LABEL_211;
    case 14:
      v163 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v164 = LocalizationManager__Get((System_String_o *)StringLiteral_10259/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/, 0LL);
      if ( !v163 )
        goto LABEL_26;
      UILabel__set_text(v163, v164, 0LL);
      v165 = this->fields.messageLabel;
      v166 = LocalizationManager__Get((System_String_o *)StringLiteral_10258/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/, 0LL);
      if ( !v165 )
        goto LABEL_26;
      UILabel__set_text(v165, v166, 0LL);
      cancelLabel = this->fields.closeLabel;
      v144 = &StringLiteral_10257/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/;
      goto LABEL_211;
    case 15:
      v235 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v236 = LocalizationManager__Get((System_String_o *)StringLiteral_10249/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_TITLE"*/, 0LL);
      if ( !v235 )
        goto LABEL_26;
      UILabel__set_text(v235, v236, 0LL);
      v169 = this->fields.messageLabel;
      v237 = LocalizationManager__Get((System_String_o *)StringLiteral_10248/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_MESSAGE"*/, 0LL);
      if ( !partyItem )
        goto LABEL_26;
      v171 = v237;
      v238 = partyItem->fields.questRestrictionInfo;
      if ( !v238 )
        goto LABEL_26;
      TotalCostRestrictionMessage = (Il2CppObject *)QuestRestrictionInfo__GetTotalCostRestrictionMessage(v238, 0LL);
      goto LABEL_191;
    case 16:
      v167 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v168 = LocalizationManager__Get((System_String_o *)StringLiteral_10249/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_TITLE"*/, 0LL);
      if ( !v167 )
        goto LABEL_26;
      UILabel__set_text(v167, v168, 0LL);
      v169 = this->fields.messageLabel;
      v170 = LocalizationManager__Get((System_String_o *)StringLiteral_10248/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_MESSAGE"*/, 0LL);
      if ( !partyItem )
        goto LABEL_26;
      v171 = v170;
      v172 = partyItem->fields.questRestrictionInfo;
      if ( !v172 )
        goto LABEL_26;
      TotalCostRestrictionMessage = (Il2CppObject *)QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                                      v172,
                                                      0,
                                                      0,
                                                      1,
                                                      0LL);
LABEL_191:
      v239 = System_String__Format(v171, TotalCostRestrictionMessage, 0LL);
      if ( !v169 )
        goto LABEL_26;
      UILabel__set_text(v169, v239, 0LL);
      v240 = this->fields.decideLabel;
      v241 = LocalizationManager__Get((System_String_o *)StringLiteral_10247/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_DECIDE"*/, 0LL);
      if ( !v240 )
        goto LABEL_26;
      UILabel__set_text(v240, v241, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v144 = &StringLiteral_10246/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_CANCEL"*/;
      goto LABEL_211;
    case 17:
      v242 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v243 = LocalizationManager__Get((System_String_o *)StringLiteral_10283/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_TITLE"*/, 0LL);
      if ( !v242 )
        goto LABEL_26;
      UILabel__set_text(v242, v243, 0LL);
      v244 = this->fields.messageLabel;
      v245 = LocalizationManager__Get((System_String_o *)StringLiteral_10282/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_MESSAGE"*/, 0LL);
      if ( !partyItem )
        goto LABEL_26;
      v246 = v245;
      v247 = partyItem->fields.questRestrictionInfo;
      if ( !v247 )
        goto LABEL_26;
      ConfirmRestrictionMessage = (Il2CppObject *)QuestRestrictionInfo__GetTotalCostRestrictionMessage(v247, 0LL);
      goto LABEL_208;
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
      v131 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v132 = LocalizationManager__Get((System_String_o *)StringLiteral_10283/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_TITLE"*/, 0LL);
      if ( !v131 )
        goto LABEL_26;
      UILabel__set_text(v131, v132, 0LL);
      v133 = this->fields.messageLabel;
      v134 = LocalizationManager__Get((System_String_o *)StringLiteral_10248/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_MESSAGE"*/, 0LL);
      if ( !v133 )
        goto LABEL_26;
      v135 = v134;
      v136 = v133;
      goto LABEL_210;
    case 23:
      v249 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v250 = LocalizationManager__Get((System_String_o *)StringLiteral_10283/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_TITLE"*/, 0LL);
      if ( !v249 )
        goto LABEL_26;
      UILabel__set_text(v249, v250, 0LL);
      v244 = this->fields.messageLabel;
      v251 = LocalizationManager__Get((System_String_o *)StringLiteral_10282/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_MESSAGE"*/, 0LL);
      if ( !partyItem )
        goto LABEL_26;
      v246 = v251;
      v252 = partyItem->fields.questRestrictionInfo;
      if ( !v252 )
        goto LABEL_26;
      ConfirmRestrictionMessage = (Il2CppObject *)QuestRestrictionInfo__GetConfirmRestrictionMessage(v252, 0, 0, 1, 0LL);
LABEL_208:
      v253 = System_String__Format(v246, ConfirmRestrictionMessage, 0LL);
      if ( !v244 )
        goto LABEL_26;
      v135 = v253;
      v136 = v244;
LABEL_210:
      UILabel__set_text(v136, v135, 0LL);
      cancelLabel = this->fields.closeLabel;
      v144 = &StringLiteral_10281/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_CLOSE"*/;
LABEL_211:
      v254 = LocalizationManager__Get((System_String_o *)*v144, 0LL);
      if ( !cancelLabel )
        goto LABEL_26;
      UILabel__set_text(cancelLabel, v254, 0LL);
LABEL_213:
      this->fields.state = 1;
      v255 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v127, v128, v129, v130);
      System_Action___ctor(v255, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeckMenu_EndOpen__, 0LL);
      BaseDialog__Open((BaseDialog_o *)this, v255, 0, 0LL);
      break;
    case 24:
      v174 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v175 = LocalizationManager__Get((System_String_o *)StringLiteral_10192/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_TITLE"*/, 0LL);
      if ( !v174 )
        goto LABEL_26;
      UILabel__set_text(v174, v175, 0LL);
      v176 = this->fields.messageLabel;
      v177 = LocalizationManager__Get((System_String_o *)StringLiteral_10191/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_MESSAGE"*/, 0LL);
      if ( !v176 )
        goto LABEL_26;
      UILabel__set_text(v176, v177, 0LL);
      cancelLabel = this->fields.closeLabel;
      v144 = &StringLiteral_10190/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_CLOSE"*/;
      goto LABEL_211;
    case 25:
      v178 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v179 = LocalizationManager__Get((System_String_o *)StringLiteral_10256/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_TITLE"*/, 0LL);
      if ( !v178 )
        goto LABEL_26;
      UILabel__set_text(v178, v179, 0LL);
      v180 = this->fields.messageLabel;
      v181 = LocalizationManager__Get((System_String_o *)StringLiteral_10255/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_MESSAGE"*/, 0LL);
      if ( !v180 )
        goto LABEL_26;
      UILabel__set_text(v180, v181, 0LL);
      cancelLabel = this->fields.closeLabel;
      v144 = &StringLiteral_10254/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_CLOSE"*/;
      goto LABEL_211;
    case 26:
      v256 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v257 = LocalizationManager__Get((System_String_o *)StringLiteral_10262/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_TITLE"*/, 0LL);
      if ( !v256 )
        goto LABEL_26;
      UILabel__set_text(v256, v257, 0LL);
      v258 = this->fields.messageLabel;
      v259 = LocalizationManager__Get((System_String_o *)StringLiteral_10261/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_MESSAGE"*/, 0LL);
      if ( !v258 )
        goto LABEL_26;
      UILabel__set_text(v258, v259, 0LL);
      cancelLabel = this->fields.closeLabel;
      v144 = &StringLiteral_10260/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_CLOSE"*/;
      goto LABEL_211;
    case 27:
      v182 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v183 = LocalizationManager__Get((System_String_o *)StringLiteral_10289/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_TITLE"*/, 0LL);
      if ( !v182 )
        goto LABEL_26;
      UILabel__set_text(v182, v183, 0LL);
      v184 = this->fields.messageLabel;
      v185 = LocalizationManager__Get((System_String_o *)StringLiteral_10288/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_MESSAGE"*/, 0LL);
      if ( !v184 )
        goto LABEL_26;
      UILabel__set_text(v184, v185, 0LL);
      cancelLabel = this->fields.closeLabel;
      v144 = &StringLiteral_10287/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_CLOSE"*/;
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

  if ( (byte_40FDC2E & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo, value);
    byte_40FDC2E = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
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

  if ( (byte_40FDC2F & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo, value);
    byte_40FDC2F = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  PartyOrganizationConfirmDeckMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *this,
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
  if ( (byte_40F8374 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F8374 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmDeckMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmDeckMenu_CallbackFunc__Invoke(
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  PartyOrganizationConfirmDeckMenu_CallbackFunc_o **v7; // x25
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
  PartyOrganizationConfirmDeckMenu_CallbackFunc_o *v18; // x8
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
  PartyOrganizationConfirmDeckMenu_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o **)(v3 + 32);
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