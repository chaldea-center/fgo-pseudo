void __fastcall PartyOrganizationConfirmDeckMenu___ctor(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  BalanceConfig_c *v8; // x0
  struct PartyOrganizationConfirmItemDraw_array *v9; // x0
  __int64 v10; // x1

  if ( (byte_4B11F0E & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&BaseDialog_TypeInfo, v4, v5);
    sub_1BCA7E0(&PartyOrganizationConfirmItemDraw___TypeInfo, v6, v7);
    byte_4B11F0E = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (struct PartyOrganizationConfirmItemDraw_array *)sub_1BCA888(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v8->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v9;
  sub_1BCA784(&this->fields.memberObjectList, v9);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v10);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmDeckMenu__Callback(
        PartyOrganizationConfirmDeckMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmDeckMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct PartyOrganizationConfirmDeckMenu_CallbackFunc_o *v4; // x20
  struct PartyOrganizationConfirmDeckMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationConfirmDeckMenu__Close(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmDeckMenu__Close_32563248(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmDeckMenu__Close_32563248(
        PartyOrganizationConfirmDeckMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B11F0A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_PartyOrganizationConfirmDeckMenu_EndClose__, v5, v6);
    byte_4B11F0A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeckMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall PartyOrganizationConfirmDeckMenu__EndClose(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationConfirmDeckMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
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
  __int64 v2; // x2
  UILabel_o *titleLabel; // x0

  if ( (byte_4B11F08 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B11F08 = 1;
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
    sub_1BCAA3C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmDeckMenu__OnClickCancel(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B11F0C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationConfirmDeckMenu_OnClickCancel__, method, v2);
    byte_4B11F0C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_PartyOrganizationConfirmDeckMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeckMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationConfirmDeckMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    PartyOrganizationConfirmDeckMenu__Callback(this, 0, v6);
  }
}


void __fastcall PartyOrganizationConfirmDeckMenu__OnClickClose(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B11F0D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationConfirmDeckMenu_OnClickClose__, method, v2);
    byte_4B11F0D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_PartyOrganizationConfirmDeckMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeckMenu_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationConfirmDeckMenu_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    PartyOrganizationConfirmDeckMenu__Callback(this, 0, v6);
  }
}


void __fastcall PartyOrganizationConfirmDeckMenu__OnClickDecide(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B11F0B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationConfirmDeckMenu_OnClickDecide__, method, v2);
    byte_4B11F0B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_PartyOrganizationConfirmDeckMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeckMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationConfirmDeckMenu_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    PartyOrganizationConfirmDeckMenu__Callback(this, 1, v6);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x1
  __int64 v130; // x2
  __int64 v131; // x1
  __int64 v132; // x2
  __int64 v133; // x1
  __int64 v134; // x2
  __int64 v135; // x1
  __int64 v136; // x2
  __int64 v137; // x1
  __int64 v138; // x2
  __int64 v139; // x1
  __int64 v140; // x2
  __int64 v141; // x1
  __int64 v142; // x2
  __int64 v143; // x1
  __int64 v144; // x2
  __int64 v145; // x1
  __int64 v146; // x2
  __int64 v147; // x1
  __int64 v148; // x2
  __int64 v149; // x1
  __int64 v150; // x2
  __int64 v151; // x1
  __int64 v152; // x2
  __int64 v153; // x1
  __int64 v154; // x2
  __int64 v155; // x1
  __int64 v156; // x2
  __int64 v157; // x1
  __int64 v158; // x2
  __int64 v159; // x1
  __int64 v160; // x2
  __int64 v161; // x1
  __int64 v162; // x2
  __int64 v163; // x1
  __int64 v164; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v166; // x1
  __int64 v167; // x1
  struct PartyOrganizationConfirmItemDraw_array *memberObjectList; // x8
  NpcServantFollowerMaster_o *v169; // x22
  __int64 v170; // x23
  const MethodInfo *v171; // x7
  UnityEngine_GameObject_c *klass; // x8
  PartyOrganizationListViewItem_o *v173; // x24
  int32_t data_high; // w25
  int32_t bits; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct PartyOrganizationConfirmItemDraw_array *v177; // x8
  PartyOrganizationConfirmItemDraw_o *v178; // x8
  UnityEngine_GameObject_o *v179; // x0
  __int64 v180; // x1
  __int64 v181; // x2
  __int64 v182; // x3
  UILabel_o *v183; // x20
  struct UILabel_o *v184; // x20
  System_String_o *v185; // x1
  UILabel_o *v186; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  __int64 *v191; // x8
  UILabel_o *v192; // x20
  UILabel_o *v193; // x20
  UILabel_o *v194; // x20
  UILabel_o *v195; // x20
  UILabel_o *v196; // x20
  UILabel_o *v197; // x20
  UILabel_o *v198; // x20
  UILabel_o *v199; // x20
  UILabel_o *v200; // x20
  UILabel_o *v201; // x20
  UILabel_o *v202; // x20
  UILabel_o *v203; // x20
  UILabel_o *v204; // x21
  UILabel_o *v205; // x21
  UILabel_o *nameLabel; // x21
  UILabel_o *v207; // x20
  UILabel_o *v208; // x20
  UILabel_o *v209; // x20
  UILabel_o *v210; // x20
  UILabel_o *v211; // x20
  UILabel_o *v212; // x20
  UILabel_o *v213; // x20
  UILabel_o *v214; // x20
  UILabel_o *v215; // x20
  UILabel_o *v216; // x20
  UILabel_o *v217; // x20
  UILabel_o *v218; // x20
  UILabel_o *v219; // x20
  UILabel_o *v220; // x20
  UILabel_o *v221; // x20
  UILabel_o *v222; // x20
  UILabel_o *v223; // x20
  UILabel_o *v224; // x20
  UILabel_o *v225; // x20
  UILabel_o *v226; // x20
  UILabel_o *v227; // x21
  UILabel_o *v228; // x21
  System_String_o *v229; // x22
  Il2CppObject *TotalCostRestrictionMessage; // x0
  UILabel_o *v231; // x21
  UILabel_o *v232; // x20
  UILabel_o *v233; // x21
  struct UILabel_o *v234; // x21
  System_String_o *v235; // x22
  Il2CppObject *ConfirmRestrictionMessage; // x0
  UILabel_o *v237; // x21
  System_Action_o *v238; // x20
  UILabel_o *v239; // x20
  UILabel_o *v240; // x20
  UILabel_o *v241; // x20
  UILabel_o *v242; // x20
  UILabel_o *v243; // x20
  UILabel_o *v244; // x20
  UILabel_o *v245; // x20
  UILabel_o *v246; // x20
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B11F09 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, partyItem);
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_PartyOrganizationConfirmDeckMenu_EndOpen__, v17, v18);
    sub_1BCA7E0(&StringLiteral_10338/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_MESSAGE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_10275/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_TITLE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_10318/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_MESSAGE"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_10372/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_TITLE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_10293/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_CLOSE"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_10320/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_10316/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_CANCEL"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_10292/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_10365/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_MESSAGE"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_10344/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_MESSAGE"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_10274/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_MESSAGE"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_10276/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_CANCEL"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_10364/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_CLOSE"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_10279/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_TITLE"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_10330/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_DECIDE"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_10348/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_TITLE"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_10324/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_10366/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_TITLE"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_10341/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_10325/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_10311/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_DECIDE"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_10332/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_TITLE"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_10286/*"PARTY_ORGANIZATION_CONFIRM_COST_OVERT_TITLE"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_10361/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_CLOSE"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_10333/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_10312/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_MESSAGE"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_10370/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_CLOSE"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_10367/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_10306/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_TITLE"*/, v75, v76);
    sub_1BCA7E0(&StringLiteral_10369/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/, v77, v78);
    sub_1BCA7E0(&StringLiteral_10343/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_CLOSE"*/, v79, v80);
    sub_1BCA7E0(&StringLiteral_10307/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_CLOSE"*/, v81, v82);
    sub_1BCA7E0(&StringLiteral_10334/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/, v83, v84);
    sub_1BCA7E0(&StringLiteral_10363/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_TITLE"*/, v85, v86);
    sub_1BCA7E0(&StringLiteral_10295/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_TITLE"*/, v87, v88);
    sub_1BCA7E0(&StringLiteral_10290/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/, v89, v90);
    sub_1BCA7E0(&StringLiteral_10308/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_MESSAGE"*/, v91, v92);
    sub_1BCA7E0(&StringLiteral_10273/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_CLOSE"*/, v93, v94);
    sub_1BCA7E0(&StringLiteral_10340/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/, v95, v96);
    sub_1BCA7E0(&StringLiteral_10362/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_MESSAGE"*/, v97, v98);
    sub_1BCA7E0(&StringLiteral_10287/*"PARTY_ORGANIZATION_CONFIRM_COST_OVER_CLOSE"*/, v99, v100);
    sub_1BCA7E0(&StringLiteral_10321/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/, v101, v102);
    sub_1BCA7E0(&StringLiteral_10368/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/, v103, v104);
    sub_1BCA7E0(&StringLiteral_10329/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_CANCEL"*/, v105, v106);
    sub_1BCA7E0(&StringLiteral_10335/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/, v107, v108);
    sub_1BCA7E0(&StringLiteral_10347/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_MESSAGE"*/, v109, v110);
    sub_1BCA7E0(&StringLiteral_10319/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_TITLE"*/, v111, v112);
    sub_1BCA7E0(&StringLiteral_10346/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_CLOSE"*/, v113, v114);
    sub_1BCA7E0(&StringLiteral_10313/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_TITLE"*/, v115, v116);
    sub_1BCA7E0(&StringLiteral_10294/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_MESSAGE"*/, v117, v118);
    sub_1BCA7E0(&StringLiteral_10331/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_MESSAGE"*/, v119, v120);
    sub_1BCA7E0(&StringLiteral_10345/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_TITLE"*/, v121, v122);
    sub_1BCA7E0(&StringLiteral_10277/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_DECIDE"*/, v123, v124);
    sub_1BCA7E0(&StringLiteral_10336/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/, v125, v126);
    sub_1BCA7E0(&StringLiteral_10302/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_CANCEL"*/, v127, v128);
    sub_1BCA7E0(&StringLiteral_10305/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_NAME"*/, v129, v130);
    sub_1BCA7E0(&StringLiteral_10317/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_DECIDE"*/, v131, v132);
    sub_1BCA7E0(&StringLiteral_10288/*"PARTY_ORGANIZATION_CONFIRM_COST_OVER_MESSAGE"*/, v133, v134);
    sub_1BCA7E0(&StringLiteral_10337/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_CLOSE"*/, v135, v136);
    sub_1BCA7E0(&StringLiteral_10303/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_DECIDE"*/, v137, v138);
    sub_1BCA7E0(&StringLiteral_10289/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/, v139, v140);
    sub_1BCA7E0(&StringLiteral_10309/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_TITLE"*/, v141, v142);
    sub_1BCA7E0(&StringLiteral_10323/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/, v143, v144);
    sub_1BCA7E0(&StringLiteral_10322/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/, v145, v146);
    sub_1BCA7E0(&StringLiteral_10310/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_CANCEL"*/, v147, v148);
    sub_1BCA7E0(&StringLiteral_10304/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_MESSAGE"*/, v149, v150);
    sub_1BCA7E0(&StringLiteral_10371/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_MESSAGE"*/, v151, v152);
    sub_1BCA7E0(&StringLiteral_10342/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/, v153, v154);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v155, v156);
    sub_1BCA7E0(&StringLiteral_10339/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_TITLE"*/, v157, v158);
    sub_1BCA7E0(&StringLiteral_10326/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/, v159, v160);
    sub_1BCA7E0(&StringLiteral_10278/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_MESSAGE"*/, v161, v162);
    sub_1BCA7E0(&StringLiteral_10291/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/, v163, v164);
    byte_4B11F09 = 1;
  }
  npcServantFollowerEntity = 0LL;
  if ( (this->fields.state | 4) != 4 )
    return;
  this->fields.callbackFunc = callback;
  sub_1BCA784(&this->fields.callbackFunc, callback);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v167);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  memberObjectList = this->fields.memberObjectList;
  if ( !memberObjectList )
    goto LABEL_24;
  v169 = (NpcServantFollowerMaster_o *)gameObject;
  v170 = 0LL;
  while ( (int)v170 < (signed int)memberObjectList->max_length )
  {
    if ( !partyItem )
      goto LABEL_24;
    gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__GetMember(partyItem, v170, 0LL);
    if ( !gameObject )
      goto LABEL_24;
    klass = gameObject[7].klass;
    v173 = (PartyOrganizationListViewItem_o *)gameObject;
    if ( !klass )
      goto LABEL_19;
    data_high = HIDWORD(klass->_1.byval_arg.data);
    bits = klass->_1.byval_arg.bits;
    SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)gameObject, v166);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        *(_QWORD *)&SvtId.fields.fakeValue);
    gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                               SvtId,
                                               0LL);
    if ( !v169 )
      goto LABEL_24;
    gameObject = (UnityEngine_GameObject_o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                               v169,
                                               &npcServantFollowerEntity,
                                               data_high,
                                               bits,
                                               (int32_t)gameObject,
                                               0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !npcServantFollowerEntity )
        goto LABEL_24;
      gameObject = (UnityEngine_GameObject_o *)NpcServantFollowerEntity__IsHideRarity(
                                                 npcServantFollowerEntity->fields.flag,
                                                 0LL);
    }
    else
    {
LABEL_19:
      gameObject = 0LL;
    }
    v177 = this->fields.memberObjectList;
    if ( v177 )
    {
      if ( (unsigned int)v170 >= v177->max_length )
        sub_1BCAA44(gameObject, v166);
      v178 = v177->m_Items[v170];
      if ( v178 )
      {
        PartyOrganizationConfirmItemDraw__SetItem(v178, v173, 2, 0, (unsigned __int8)gameObject & 1, 0, 0, v171);
        memberObjectList = this->fields.memberObjectList;
        ++v170;
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
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
    if ( !gameObject )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
    if ( !gameObject )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
    if ( !gameObject )
      goto LABEL_24;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
      gameObject,
      0LL,
      1LL,
      gameObject->klass[1]._1.interfaceOffsets);
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
LABEL_46:
                      v179 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                      AndroidBackKeyManager__AddBackBtn(v179, 0LL);
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
    sub_1BCAA3C(gameObject, v166);
  }
LABEL_47:
  gameObject = (UnityEngine_GameObject_o *)this->fields.nameLabel;
  if ( !gameObject )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  switch ( kind )
  {
    case 0:
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v180);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10279/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_24;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      messageLabel = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10278/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_MESSAGE"*/, 0LL);
      if ( !messageLabel )
        goto LABEL_24;
      UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
      decideLabel = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10277/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_DECIDE"*/, 0LL);
      if ( !decideLabel )
        goto LABEL_24;
      UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v191 = &StringLiteral_10276/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_CANCEL"*/;
      goto LABEL_168;
    case 1:
      v192 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v180);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10292/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/, 0LL);
      if ( !v192 )
        goto LABEL_24;
      UILabel__set_text(v192, (System_String_o *)gameObject, 0LL);
      v193 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10291/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/, 0LL);
      if ( !v193 )
        goto LABEL_24;
      UILabel__set_text(v193, (System_String_o *)gameObject, 0LL);
      v194 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10290/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/, 0LL);
      if ( !v194 )
        goto LABEL_24;
      UILabel__set_text(v194, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v191 = &StringLiteral_10289/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/;
      goto LABEL_168;
    case 2:
      v195 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v180);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10336/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/, 0LL);
      if ( !v195 )
        goto LABEL_24;
      UILabel__set_text(v195, (System_String_o *)gameObject, 0LL);
      v196 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10335/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/, 0LL);
      if ( !v196 )
        goto LABEL_24;
      UILabel__set_text(v196, (System_String_o *)gameObject, 0LL);
      v197 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10334/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/, 0LL);
      if ( !v197 )
        goto LABEL_24;
      UILabel__set_text(v197, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v191 = &StringLiteral_10333/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/;
      goto LABEL_168;
    case 3:
      v198 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v180);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10309/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_TITLE"*/, 0LL);
      if ( !v198 )
        goto LABEL_24;
      UILabel__set_text(v198, (System_String_o *)gameObject, 0LL);
      v199 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10308/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_MESSAGE"*/, 0LL);
      if ( !v199 )
        goto LABEL_24;
      UILabel__set_text(v199, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v191 = &StringLiteral_10307/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_CLOSE"*/;
      goto LABEL_168;
    case 4:
      v200 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v180);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10295/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_TITLE"*/, 0LL);
      if ( !v200 )
        goto LABEL_24;
      UILabel__set_text(v200, (System_String_o *)gameObject, 0LL);
      v201 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10294/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_MESSAGE"*/, 0LL);
      if ( !v201 )
        goto LABEL_24;
      UILabel__set_text(v201, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v191 = &StringLiteral_10293/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_CLOSE"*/;
      goto LABEL_168;
    case 5:
      v202 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v180);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10286/*"PARTY_ORGANIZATION_CONFIRM_COST_OVERT_TITLE"*/, 0LL);
      if ( !v202 )
        goto LABEL_24;
      UILabel__set_text(v202, (System_String_o *)gameObject, 0LL);
      v203 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10288/*"PARTY_ORGANIZATION_CONFIRM_COST_OVER_MESSAGE"*/, 0LL);
      if ( !v203 )
        goto LABEL_24;
      UILabel__set_text(v203, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v191 = &StringLiteral_10287/*"PARTY_ORGANIZATION_CONFIRM_COST_OVER_CLOSE"*/;
      goto LABEL_168;
    case 6:
      v204 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v180);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10306/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_TITLE"*/, 0LL);
      if ( !v204 )
        goto LABEL_24;
      UILabel__set_text(v204, (System_String_o *)gameObject, 0LL);
      v205 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10304/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_MESSAGE"*/, 0LL);
      if ( !v205 )
        goto LABEL_24;
      UILabel__set_text(v205, (System_String_o *)gameObject, 0LL);
      nameLabel = this->fields.nameLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10305/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_NAME"*/, 0LL);
      if ( !partyItem )
        goto LABEL_24;
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                 (System_String_o *)gameObject,
                                                 (Il2CppObject *)partyItem->fields.deckName,
                                                 0LL);
      if ( !nameLabel )
        goto LABEL_24;
      UILabel__set_text(nameLabel, (System_String_o *)gameObject, 0LL);
      v207 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10303/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_DECIDE"*/, 0LL);
      if ( !v207 )
        goto LABEL_24;
      UILabel__set_text(v207, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v191 = &StringLiteral_10302/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_CANCEL"*/;
      goto LABEL_168;
    case 7:
      v208 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v180);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10319/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_TITLE"*/, 0LL);
      if ( !v208 )
        goto LABEL_24;
      UILabel__set_text(v208, (System_String_o *)gameObject, 0LL);
      v209 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10318/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_MESSAGE"*/, 0LL);
      if ( !v209 )
        goto LABEL_24;
      UILabel__set_text(v209, (System_String_o *)gameObject, 0LL);
      v210 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10317/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_DECIDE"*/, 0LL);
      if ( !v210 )
        goto LABEL_24;
      UILabel__set_text(v210, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v191 = &StringLiteral_10316/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_CANCEL"*/;
      goto LABEL_168;
    case 8:
      v211 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v180);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10313/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_TITLE"*/, 0LL);
      if ( !v211 )
        goto LABEL_24;
      UILabel__set_text(v211, (System_String_o *)gameObject, 0LL);
      v212 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10312/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_MESSAGE"*/, 0LL);
      if ( !v212 )
        goto LABEL_24;
      UILabel__set_text(v212, (System_String_o *)gameObject, 0LL);
      v213 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10311/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_DECIDE"*/, 0LL);
      if ( !v213 )
        goto LABEL_24;
      UILabel__set_text(v213, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v191 = &StringLiteral_10310/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_CANCEL"*/;
      goto LABEL_168;
    case 9:
      v214 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v180);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10326/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/, 0LL);
      if ( !v214 )
        goto LABEL_24;
      UILabel__set_text(v214, (System_String_o *)gameObject, 0LL);
      v215 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10325/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/, 0LL);
      if ( !v215 )
        goto LABEL_24;
      UILabel__set_text(v215, (System_String_o *)gameObject, 0LL);
      v216 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10321/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/, 0LL);
      if ( !v216 )
        goto LABEL_24;
      UILabel__set_text(v216, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v191 = &StringLiteral_10320/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/;
      goto LABEL_168;
    case 10:
      v217 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v180);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10324/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/, 0LL);
      if ( !v217 )
        goto LABEL_24;
      UILabel__set_text(v217, (System_String_o *)gameObject, 0LL);
      v218 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10323/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/, 0LL);
      if ( !v218 )
        goto LABEL_24;
      UILabel__set_text(v218, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v191 = &StringLiteral_10322/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/;
      goto LABEL_168;
    case 11:
      v219 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v180);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10369/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/, 0LL);
      if ( !v219 )
        goto LABEL_24;
      UILabel__set_text(v219, (System_String_o *)gameObject, 0LL);
      v220 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10368/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/, 0LL);
      if ( !v220 )
        goto LABEL_24;
      UILabel__set_text(v220, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v191 = &StringLiteral_10367/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/;
      goto LABEL_168;
    case 12:
      v221 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v180);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10363/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_TITLE"*/, 0LL);
      if ( !v221 )
        goto LABEL_24;
      UILabel__set_text(v221, (System_String_o *)gameObject, 0LL);
      v222 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10362/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_MESSAGE"*/, 0LL);
      if ( !v222 )
        goto LABEL_24;
      UILabel__set_text(v222, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v191 = &StringLiteral_10361/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_CLOSE"*/;
      goto LABEL_168;
    case 13:
      v223 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v180);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10348/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_TITLE"*/, 0LL);
      if ( !v223 )
        goto LABEL_24;
      UILabel__set_text(v223, (System_String_o *)gameObject, 0LL);
      v224 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10347/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_MESSAGE"*/, 0LL);
      if ( !v224 )
        goto LABEL_24;
      UILabel__set_text(v224, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v191 = &StringLiteral_10346/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_CLOSE"*/;
      goto LABEL_168;
    case 14:
      v225 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v180);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10342/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/, 0LL);
      if ( !v225 )
        goto LABEL_24;
      UILabel__set_text(v225, (System_String_o *)gameObject, 0LL);
      v226 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10341/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/, 0LL);
      if ( !v226 )
        goto LABEL_24;
      UILabel__set_text(v226, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v191 = &StringLiteral_10340/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/;
      goto LABEL_168;
    case 15:
      v227 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v180);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10332/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_TITLE"*/, 0LL);
      if ( !v227 )
        goto LABEL_24;
      UILabel__set_text(v227, (System_String_o *)gameObject, 0LL);
      v228 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10331/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_MESSAGE"*/, 0LL);
      if ( !partyItem )
        goto LABEL_24;
      v229 = (System_String_o *)gameObject;
      gameObject = (UnityEngine_GameObject_o *)partyItem->fields.questRestrictionInfo;
      if ( !gameObject )
        goto LABEL_24;
      TotalCostRestrictionMessage = (Il2CppObject *)QuestRestrictionInfo__GetTotalCostRestrictionMessage(
                                                      (QuestRestrictionInfo_o *)gameObject,
                                                      0LL);
      goto LABEL_150;
    case 16:
      v231 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v180);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10332/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_TITLE"*/, 0LL);
      if ( !v231 )
        goto LABEL_24;
      UILabel__set_text(v231, (System_String_o *)gameObject, 0LL);
      v228 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10331/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_MESSAGE"*/, 0LL);
      if ( !partyItem )
        goto LABEL_24;
      v229 = (System_String_o *)gameObject;
      gameObject = (UnityEngine_GameObject_o *)partyItem->fields.questRestrictionInfo;
      if ( !gameObject )
        goto LABEL_24;
      TotalCostRestrictionMessage = (Il2CppObject *)QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                                      (QuestRestrictionInfo_o *)gameObject,
                                                      0,
                                                      0,
                                                      1,
                                                      0LL);
LABEL_150:
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(v229, TotalCostRestrictionMessage, 0LL);
      if ( !v228 )
        goto LABEL_24;
      UILabel__set_text(v228, (System_String_o *)gameObject, 0LL);
      v232 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10330/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_DECIDE"*/, 0LL);
      if ( !v232 )
        goto LABEL_24;
      UILabel__set_text(v232, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v191 = &StringLiteral_10329/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_CANCEL"*/;
      goto LABEL_168;
    case 17:
      v233 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v180);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10366/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_TITLE"*/, 0LL);
      if ( !v233 )
        goto LABEL_24;
      UILabel__set_text(v233, (System_String_o *)gameObject, 0LL);
      v234 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10365/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_MESSAGE"*/, 0LL);
      if ( !partyItem )
        goto LABEL_24;
      v235 = (System_String_o *)gameObject;
      gameObject = (UnityEngine_GameObject_o *)partyItem->fields.questRestrictionInfo;
      if ( !gameObject )
        goto LABEL_24;
      ConfirmRestrictionMessage = (Il2CppObject *)QuestRestrictionInfo__GetTotalCostRestrictionMessage(
                                                    (QuestRestrictionInfo_o *)gameObject,
                                                    0LL);
      goto LABEL_165;
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
      v183 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v180);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10366/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_TITLE"*/, 0LL);
      if ( !v183 )
        goto LABEL_24;
      UILabel__set_text(v183, (System_String_o *)gameObject, 0LL);
      v184 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10331/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_MESSAGE"*/, 0LL);
      if ( !v184 )
        goto LABEL_24;
      v185 = (System_String_o *)gameObject;
      v186 = v184;
      goto LABEL_167;
    case 23:
      v237 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v180);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10366/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_TITLE"*/, 0LL);
      if ( !v237 )
        goto LABEL_24;
      UILabel__set_text(v237, (System_String_o *)gameObject, 0LL);
      v234 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10365/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_MESSAGE"*/, 0LL);
      if ( !partyItem )
        goto LABEL_24;
      v235 = (System_String_o *)gameObject;
      gameObject = (UnityEngine_GameObject_o *)partyItem->fields.questRestrictionInfo;
      if ( !gameObject )
        goto LABEL_24;
      ConfirmRestrictionMessage = (Il2CppObject *)QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                                    (QuestRestrictionInfo_o *)gameObject,
                                                    0,
                                                    0,
                                                    1,
                                                    0LL);
LABEL_165:
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(v235, ConfirmRestrictionMessage, 0LL);
      if ( !v234 )
        goto LABEL_24;
      v185 = (System_String_o *)gameObject;
      v186 = v234;
LABEL_167:
      UILabel__set_text(v186, v185, 0LL);
      cancelLabel = this->fields.closeLabel;
      v191 = &StringLiteral_10364/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_CLOSE"*/;
LABEL_168:
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v191, 0LL);
      if ( !cancelLabel )
        goto LABEL_24;
      UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
LABEL_170:
      this->fields.state = 1;
      v238 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v180, v181, v182);
      System_Action___ctor(v238, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeckMenu_EndOpen__, 0LL);
      BaseDialog__Open((BaseDialog_o *)this, v238, 0, 0LL);
      break;
    case 24:
      v239 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v180);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10275/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_TITLE"*/, 0LL);
      if ( !v239 )
        goto LABEL_24;
      UILabel__set_text(v239, (System_String_o *)gameObject, 0LL);
      v240 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10274/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_MESSAGE"*/, 0LL);
      if ( !v240 )
        goto LABEL_24;
      UILabel__set_text(v240, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v191 = &StringLiteral_10273/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_CLOSE"*/;
      goto LABEL_168;
    case 25:
      v241 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v180);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10339/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_TITLE"*/, 0LL);
      if ( !v241 )
        goto LABEL_24;
      UILabel__set_text(v241, (System_String_o *)gameObject, 0LL);
      v242 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10338/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_MESSAGE"*/, 0LL);
      if ( !v242 )
        goto LABEL_24;
      UILabel__set_text(v242, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v191 = &StringLiteral_10337/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_CLOSE"*/;
      goto LABEL_168;
    case 26:
      v243 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v180);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10345/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_TITLE"*/, 0LL);
      if ( !v243 )
        goto LABEL_24;
      UILabel__set_text(v243, (System_String_o *)gameObject, 0LL);
      v244 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10344/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_MESSAGE"*/, 0LL);
      if ( !v244 )
        goto LABEL_24;
      UILabel__set_text(v244, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v191 = &StringLiteral_10343/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_CLOSE"*/;
      goto LABEL_168;
    case 27:
      v245 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v180);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10372/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_TITLE"*/, 0LL);
      if ( !v245 )
        goto LABEL_24;
      UILabel__set_text(v245, (System_String_o *)gameObject, 0LL);
      v246 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10371/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_MESSAGE"*/, 0LL);
      if ( !v246 )
        goto LABEL_24;
      UILabel__set_text(v246, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v191 = &StringLiteral_10370/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_CLOSE"*/;
      goto LABEL_168;
    default:
      goto LABEL_170;
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

  if ( (byte_4B11F06 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B11F06 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmDeckMenu_o *)sub_1BCACFC(v8);
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

  if ( (byte_4B11F07 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B11F07 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmDeckMenu_o *)sub_1BCACFC(v8);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A07298;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A07250;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PartyOrganizationConfirmDeckMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4B11F0F & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, callback);
    byte_4B11F0F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmDeckMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall PartyOrganizationConfirmDeckMenu_CallbackFunc__Invoke(
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}