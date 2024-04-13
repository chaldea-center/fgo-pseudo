void __fastcall PartyOrganizationConfirmDeckMenu___ctor(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BalanceConfig_c *v11; // x0
  struct PartyOrganizationConfirmItemDraw_array *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42EB070 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BaseDialog_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&PartyOrganizationConfirmItemDraw___TypeInfo, v8, v9, v10);
    byte_42EB070 = 1;
  }
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  v12 = (struct PartyOrganizationConfirmItemDraw_array *)sub_B5D5DC(
                                                           PartyOrganizationConfirmItemDraw___TypeInfo,
                                                           (unsigned int)v11->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v12;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.memberObjectList,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PartyOrganizationConfirmDeckMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall PartyOrganizationConfirmDeckMenu__Close(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmDeckMenu__Close_29716264(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmDeckMenu__Close_29716264(
        PartyOrganizationConfirmDeckMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42EB06C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PartyOrganizationConfirmDeckMenu_EndClose__, v10, v11, v12);
    byte_42EB06C = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeckMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B5D560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *titleLabel; // x0

  if ( (byte_42EB06A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EB06A = 1;
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
    sub_B5D69C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmDeckMenu__OnClickCancel(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42EB06E & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB06E = 1;
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
    PartyOrganizationConfirmDeckMenu__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationConfirmDeckMenu__OnClickClose(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_42EB06F & 1) == 0 )
  {
    sub_B5D5C4(&Method_PartyOrganizationConfirmDeckMenu_OnClickClose__, (_DWORD)method, v2, v3);
    byte_42EB06F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_PartyOrganizationConfirmDeckMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmDeckMenu_OnClickClose__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_PartyOrganizationConfirmDeckMenu_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    PartyOrganizationConfirmDeckMenu__Callback(this, 0, v7);
  }
}


void __fastcall PartyOrganizationConfirmDeckMenu__OnClickDecide(
        PartyOrganizationConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42EB06D & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB06D = 1;
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
    PartyOrganizationConfirmDeckMenu__Callback(this, 1, v5);
  }
}


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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  int v102; // w1
  int v103; // w2
  __int64 v104; // x3
  int v105; // w1
  int v106; // w2
  __int64 v107; // x3
  int v108; // w1
  int v109; // w2
  __int64 v110; // x3
  int v111; // w1
  int v112; // w2
  __int64 v113; // x3
  int v114; // w1
  int v115; // w2
  __int64 v116; // x3
  int v117; // w1
  int v118; // w2
  __int64 v119; // x3
  int v120; // w1
  int v121; // w2
  __int64 v122; // x3
  int v123; // w1
  int v124; // w2
  __int64 v125; // x3
  int v126; // w1
  int v127; // w2
  __int64 v128; // x3
  int v129; // w1
  int v130; // w2
  __int64 v131; // x3
  int v132; // w1
  int v133; // w2
  __int64 v134; // x3
  int v135; // w1
  int v136; // w2
  __int64 v137; // x3
  int v138; // w1
  int v139; // w2
  __int64 v140; // x3
  int v141; // w1
  int v142; // w2
  __int64 v143; // x3
  int v144; // w1
  int v145; // w2
  __int64 v146; // x3
  int v147; // w1
  int v148; // w2
  __int64 v149; // x3
  int v150; // w1
  int v151; // w2
  __int64 v152; // x3
  int v153; // w1
  int v154; // w2
  __int64 v155; // x3
  int v156; // w1
  int v157; // w2
  __int64 v158; // x3
  int v159; // w1
  int v160; // w2
  __int64 v161; // x3
  int v162; // w1
  int v163; // w2
  __int64 v164; // x3
  int v165; // w1
  int v166; // w2
  __int64 v167; // x3
  int v168; // w1
  int v169; // w2
  __int64 v170; // x3
  int v171; // w1
  int v172; // w2
  __int64 v173; // x3
  int v174; // w1
  int v175; // w2
  __int64 v176; // x3
  int v177; // w1
  int v178; // w2
  __int64 v179; // x3
  int v180; // w1
  int v181; // w2
  __int64 v182; // x3
  int v183; // w1
  int v184; // w2
  __int64 v185; // x3
  int v186; // w1
  int v187; // w2
  __int64 v188; // x3
  int v189; // w1
  int v190; // w2
  __int64 v191; // x3
  int v192; // w1
  int v193; // w2
  __int64 v194; // x3
  int v195; // w1
  int v196; // w2
  __int64 v197; // x3
  int v198; // w1
  int v199; // w2
  __int64 v200; // x3
  int v201; // w1
  int v202; // w2
  __int64 v203; // x3
  int v204; // w1
  int v205; // w2
  __int64 v206; // x3
  int v207; // w1
  int v208; // w2
  __int64 v209; // x3
  int v210; // w1
  int v211; // w2
  __int64 v212; // x3
  int v213; // w1
  int v214; // w2
  __int64 v215; // x3
  int v216; // w1
  int v217; // w2
  __int64 v218; // x3
  int v219; // w1
  int v220; // w2
  __int64 v221; // x3
  int v222; // w1
  int v223; // w2
  __int64 v224; // x3
  int v225; // w1
  int v226; // w2
  __int64 v227; // x3
  int v228; // w1
  int v229; // w2
  __int64 v230; // x3
  int v231; // w1
  int v232; // w2
  __int64 v233; // x3
  int v234; // w1
  int v235; // w2
  __int64 v236; // x3
  int v237; // w1
  int v238; // w2
  __int64 v239; // x3
  int v240; // w1
  int v241; // w2
  __int64 v242; // x3
  int v243; // w1
  int v244; // w2
  __int64 v245; // x3
  int v246; // w1
  int v247; // w2
  __int64 v248; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v250; // x1
  struct PartyOrganizationConfirmItemDraw_array *memberObjectList; // x8
  NpcServantFollowerMaster_o *v252; // x22
  __int64 v253; // x23
  const MethodInfo *v254; // x7
  UnityEngine_GameObject_c *klass; // x8
  PartyOrganizationListViewItem_o *v256; // x24
  int32_t data_high; // w25
  int32_t bits; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct PartyOrganizationConfirmItemDraw_array *v260; // x8
  PartyOrganizationConfirmItemDraw_o *v261; // x8
  UnityEngine_GameObject_o *v262; // x22
  UILabel_o *v263; // x20
  struct UILabel_o *v264; // x20
  System_String_o *v265; // x1
  UILabel_o *v266; // x0
  UILabel_o *v267; // x20
  UILabel_o *v268; // x20
  UILabel_o *v269; // x20
  UILabel_o *cancelLabel; // x20
  __int64 *v271; // x8
  UILabel_o *v272; // x20
  UILabel_o *v273; // x20
  UILabel_o *v274; // x20
  UILabel_o *v275; // x20
  UILabel_o *v276; // x20
  UILabel_o *v277; // x20
  UILabel_o *v278; // x20
  UILabel_o *v279; // x20
  UILabel_o *v280; // x20
  UILabel_o *v281; // x20
  UILabel_o *v282; // x20
  UILabel_o *v283; // x21
  UILabel_o *v284; // x21
  System_String_o *v285; // x22
  Il2CppObject *TotalCostRestrictionMessage; // x0
  UILabel_o *v287; // x20
  UILabel_o *v288; // x20
  UILabel_o *v289; // x20
  UILabel_o *v290; // x20
  UILabel_o *v291; // x20
  UILabel_o *v292; // x20
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *v296; // x20
  UILabel_o *v297; // x20
  UILabel_o *v298; // x20
  UILabel_o *v299; // x20
  UILabel_o *v300; // x20
  UILabel_o *v301; // x20
  UILabel_o *v302; // x20
  UILabel_o *v303; // x21
  UILabel_o *v304; // x21
  UILabel_o *nameLabel; // x21
  UILabel_o *v306; // x20
  UILabel_o *v307; // x20
  UILabel_o *v308; // x20
  UILabel_o *v309; // x20
  UILabel_o *v310; // x20
  UILabel_o *v311; // x20
  UILabel_o *v312; // x20
  UILabel_o *v313; // x20
  UILabel_o *v314; // x20
  UILabel_o *v315; // x20
  UILabel_o *v316; // x20
  UILabel_o *v317; // x21
  UILabel_o *v318; // x20
  UILabel_o *v319; // x21
  struct UILabel_o *v320; // x21
  System_String_o *v321; // x22
  Il2CppObject *ConfirmRestrictionMessage; // x0
  UILabel_o *v323; // x21
  System_Action_o *v324; // x20
  UILabel_o *v325; // x20
  UILabel_o *v326; // x20
  __int64 v327; // x0
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42EB06B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, (_DWORD)partyItem, callback);
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v15, v16, v17);
    sub_B5D5C4(&DataManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_PartyOrganizationConfirmDeckMenu_EndOpen__, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_10394/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_MESSAGE"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_10331/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_TITLE"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_10374/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_MESSAGE"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_10428/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_TITLE"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_10349/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_CLOSE"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_10376/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_10372/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_CANCEL"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_10348/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_10421/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_MESSAGE"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_10400/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_MESSAGE"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_10330/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_MESSAGE"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_10332/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_CANCEL"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_10420/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_CLOSE"*/, v66, v67, v68);
    sub_B5D5C4(&StringLiteral_10335/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_TITLE"*/, v69, v70, v71);
    sub_B5D5C4(&StringLiteral_10386/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_DECIDE"*/, v72, v73, v74);
    sub_B5D5C4(&StringLiteral_10404/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_TITLE"*/, v75, v76, v77);
    sub_B5D5C4(&StringLiteral_10380/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/, v78, v79, v80);
    sub_B5D5C4(&StringLiteral_10422/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_TITLE"*/, v81, v82, v83);
    sub_B5D5C4(&StringLiteral_10397/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/, v84, v85, v86);
    sub_B5D5C4(&StringLiteral_10381/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/, v87, v88, v89);
    sub_B5D5C4(&StringLiteral_10367/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_DECIDE"*/, v90, v91, v92);
    sub_B5D5C4(&StringLiteral_10388/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_TITLE"*/, v93, v94, v95);
    sub_B5D5C4(&StringLiteral_10342/*"PARTY_ORGANIZATION_CONFIRM_COST_OVERT_TITLE"*/, v96, v97, v98);
    sub_B5D5C4(&StringLiteral_10417/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_CLOSE"*/, v99, v100, v101);
    sub_B5D5C4(&StringLiteral_10389/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/, v102, v103, v104);
    sub_B5D5C4(&StringLiteral_10368/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_MESSAGE"*/, v105, v106, v107);
    sub_B5D5C4(&StringLiteral_10426/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_CLOSE"*/, v108, v109, v110);
    sub_B5D5C4(&StringLiteral_10423/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/, v111, v112, v113);
    sub_B5D5C4(&StringLiteral_10362/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_TITLE"*/, v114, v115, v116);
    sub_B5D5C4(&StringLiteral_10425/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/, v117, v118, v119);
    sub_B5D5C4(&StringLiteral_10399/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_CLOSE"*/, v120, v121, v122);
    sub_B5D5C4(&StringLiteral_10363/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_CLOSE"*/, v123, v124, v125);
    sub_B5D5C4(&StringLiteral_10390/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/, v126, v127, v128);
    sub_B5D5C4(&StringLiteral_10419/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_TITLE"*/, v129, v130, v131);
    sub_B5D5C4(&StringLiteral_10351/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_TITLE"*/, v132, v133, v134);
    sub_B5D5C4(&StringLiteral_10346/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/, v135, v136, v137);
    sub_B5D5C4(&StringLiteral_10364/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_MESSAGE"*/, v138, v139, v140);
    sub_B5D5C4(&StringLiteral_10329/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_CLOSE"*/, v141, v142, v143);
    sub_B5D5C4(&StringLiteral_10396/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/, v144, v145, v146);
    sub_B5D5C4(&StringLiteral_10418/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_MESSAGE"*/, v147, v148, v149);
    sub_B5D5C4(&StringLiteral_10343/*"PARTY_ORGANIZATION_CONFIRM_COST_OVER_CLOSE"*/, v150, v151, v152);
    sub_B5D5C4(&StringLiteral_10377/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/, v153, v154, v155);
    sub_B5D5C4(&StringLiteral_10424/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/, v156, v157, v158);
    sub_B5D5C4(&StringLiteral_10385/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_CANCEL"*/, v159, v160, v161);
    sub_B5D5C4(&StringLiteral_10391/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/, v162, v163, v164);
    sub_B5D5C4(&StringLiteral_10403/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_MESSAGE"*/, v165, v166, v167);
    sub_B5D5C4(&StringLiteral_10375/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_TITLE"*/, v168, v169, v170);
    sub_B5D5C4(&StringLiteral_10402/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_CLOSE"*/, v171, v172, v173);
    sub_B5D5C4(&StringLiteral_10369/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_TITLE"*/, v174, v175, v176);
    sub_B5D5C4(&StringLiteral_10350/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_MESSAGE"*/, v177, v178, v179);
    sub_B5D5C4(&StringLiteral_10387/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_MESSAGE"*/, v180, v181, v182);
    sub_B5D5C4(&StringLiteral_10401/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_TITLE"*/, v183, v184, v185);
    sub_B5D5C4(&StringLiteral_10333/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_DECIDE"*/, v186, v187, v188);
    sub_B5D5C4(&StringLiteral_10392/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/, v189, v190, v191);
    sub_B5D5C4(&StringLiteral_10358/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_CANCEL"*/, v192, v193, v194);
    sub_B5D5C4(&StringLiteral_10361/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_NAME"*/, v195, v196, v197);
    sub_B5D5C4(&StringLiteral_10373/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_DECIDE"*/, v198, v199, v200);
    sub_B5D5C4(&StringLiteral_10344/*"PARTY_ORGANIZATION_CONFIRM_COST_OVER_MESSAGE"*/, v201, v202, v203);
    sub_B5D5C4(&StringLiteral_10393/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_CLOSE"*/, v204, v205, v206);
    sub_B5D5C4(&StringLiteral_10359/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_DECIDE"*/, v207, v208, v209);
    sub_B5D5C4(&StringLiteral_10345/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/, v210, v211, v212);
    sub_B5D5C4(&StringLiteral_10365/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_TITLE"*/, v213, v214, v215);
    sub_B5D5C4(&StringLiteral_10379/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/, v216, v217, v218);
    sub_B5D5C4(&StringLiteral_10378/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/, v219, v220, v221);
    sub_B5D5C4(&StringLiteral_10366/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_CANCEL"*/, v222, v223, v224);
    sub_B5D5C4(&StringLiteral_10360/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_MESSAGE"*/, v225, v226, v227);
    sub_B5D5C4(&StringLiteral_10427/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_MESSAGE"*/, v228, v229, v230);
    sub_B5D5C4(&StringLiteral_10398/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/, v231, v232, v233);
    sub_B5D5C4(&StringLiteral_1/*""*/, v234, v235, v236);
    sub_B5D5C4(&StringLiteral_10395/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_TITLE"*/, v237, v238, v239);
    sub_B5D5C4(&StringLiteral_10382/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/, v240, v241, v242);
    sub_B5D5C4(&StringLiteral_10334/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_MESSAGE"*/, v243, v244, v245);
    sub_B5D5C4(&StringLiteral_10347/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/, v246, v247, v248);
    byte_42EB06B = 1;
  }
  npcServantFollowerEntity = 0LL;
  if ( (this->fields.state | 4) != 4 )
    return;
  this->fields.callbackFunc = callback;
  sub_B5D560(
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
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  memberObjectList = this->fields.memberObjectList;
  if ( !memberObjectList )
    goto LABEL_26;
  v252 = (NpcServantFollowerMaster_o *)gameObject;
  v253 = 0LL;
  while ( (int)v253 < (signed int)memberObjectList->max_length )
  {
    if ( !partyItem )
      goto LABEL_26;
    gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__GetMember(partyItem, v253, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    klass = gameObject[7].klass;
    v256 = (PartyOrganizationListViewItem_o *)gameObject;
    if ( !klass )
      goto LABEL_21;
    data_high = HIDWORD(klass->_1.byval_arg.data);
    bits = klass->_1.byval_arg.bits;
    SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)gameObject, v250);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                               SvtId,
                                               0LL);
    if ( !v252 )
      goto LABEL_26;
    gameObject = (UnityEngine_GameObject_o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                               v252,
                                               &npcServantFollowerEntity,
                                               data_high,
                                               bits,
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
    v260 = this->fields.memberObjectList;
    if ( v260 )
    {
      if ( (unsigned int)v253 >= v260->max_length )
      {
        v327 = sub_B5D6C8(gameObject);
        sub_B5D668(v327, 0LL);
      }
      v261 = v260->m_Items[v253];
      if ( v261 )
      {
        PartyOrganizationConfirmItemDraw__SetItem(v261, v256, 2, 0, (unsigned __int8)gameObject & 1, 0, 0, v254);
        memberObjectList = this->fields.memberObjectList;
        ++v253;
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
                      v262 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                      if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
                      }
                      AndroidBackKeyManager__AddBackBtn(v262, 0LL);
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
    sub_B5D69C(gameObject, v250);
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
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10335/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_26;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      messageLabel = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10334/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_MESSAGE"*/, 0LL);
      if ( !messageLabel )
        goto LABEL_26;
      UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
      decideLabel = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10333/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_DECIDE"*/, 0LL);
      if ( !decideLabel )
        goto LABEL_26;
      UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v271 = &StringLiteral_10332/*"PARTY_ORGANIZATION_CONFIRM_CANCEL_CANCEL"*/;
      goto LABEL_211;
    case 1:
      v296 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10348/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_TITLE"*/, 0LL);
      if ( !v296 )
        goto LABEL_26;
      UILabel__set_text(v296, (System_String_o *)gameObject, 0LL);
      v297 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10347/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/, 0LL);
      if ( !v297 )
        goto LABEL_26;
      UILabel__set_text(v297, (System_String_o *)gameObject, 0LL);
      v298 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10346/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/, 0LL);
      if ( !v298 )
        goto LABEL_26;
      UILabel__set_text(v298, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v271 = &StringLiteral_10345/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_CANCEL"*/;
      goto LABEL_211;
    case 2:
      v267 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10392/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_TITLE"*/, 0LL);
      if ( !v267 )
        goto LABEL_26;
      UILabel__set_text(v267, (System_String_o *)gameObject, 0LL);
      v268 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10391/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_MESSAGE"*/, 0LL);
      if ( !v268 )
        goto LABEL_26;
      UILabel__set_text(v268, (System_String_o *)gameObject, 0LL);
      v269 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10390/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_DECIDE"*/, 0LL);
      if ( !v269 )
        goto LABEL_26;
      UILabel__set_text(v269, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v271 = &StringLiteral_10389/*"PARTY_ORGANIZATION_CONFIRM_SHORTAGE_DECK_MEMBER_CANCEL"*/;
      goto LABEL_211;
    case 3:
      v299 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10365/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_TITLE"*/, 0LL);
      if ( !v299 )
        goto LABEL_26;
      UILabel__set_text(v299, (System_String_o *)gameObject, 0LL);
      v300 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10364/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_MESSAGE"*/, 0LL);
      if ( !v300 )
        goto LABEL_26;
      UILabel__set_text(v300, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v271 = &StringLiteral_10363/*"PARTY_ORGANIZATION_CONFIRM_LEAVE_SERVANT_CLOSE"*/;
      goto LABEL_211;
    case 4:
      v272 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10351/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_TITLE"*/, 0LL);
      if ( !v272 )
        goto LABEL_26;
      UILabel__set_text(v272, (System_String_o *)gameObject, 0LL);
      v273 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10350/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_MESSAGE"*/, 0LL);
      if ( !v273 )
        goto LABEL_26;
      UILabel__set_text(v273, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v271 = &StringLiteral_10349/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_CLOSE"*/;
      goto LABEL_211;
    case 5:
      v301 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10342/*"PARTY_ORGANIZATION_CONFIRM_COST_OVERT_TITLE"*/, 0LL);
      if ( !v301 )
        goto LABEL_26;
      UILabel__set_text(v301, (System_String_o *)gameObject, 0LL);
      v302 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10344/*"PARTY_ORGANIZATION_CONFIRM_COST_OVER_MESSAGE"*/, 0LL);
      if ( !v302 )
        goto LABEL_26;
      UILabel__set_text(v302, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v271 = &StringLiteral_10343/*"PARTY_ORGANIZATION_CONFIRM_COST_OVER_CLOSE"*/;
      goto LABEL_211;
    case 6:
      v303 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10362/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_TITLE"*/, 0LL);
      if ( !v303 )
        goto LABEL_26;
      UILabel__set_text(v303, (System_String_o *)gameObject, 0LL);
      v304 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10360/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_MESSAGE"*/, 0LL);
      if ( !v304 )
        goto LABEL_26;
      UILabel__set_text(v304, (System_String_o *)gameObject, 0LL);
      nameLabel = this->fields.nameLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10361/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_NAME"*/, 0LL);
      if ( !partyItem )
        goto LABEL_26;
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                 (System_String_o *)gameObject,
                                                 (Il2CppObject *)partyItem->fields.deckName,
                                                 0LL);
      if ( !nameLabel )
        goto LABEL_26;
      UILabel__set_text(nameLabel, (System_String_o *)gameObject, 0LL);
      v306 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10359/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_DECIDE"*/, 0LL);
      if ( !v306 )
        goto LABEL_26;
      UILabel__set_text(v306, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v271 = &StringLiteral_10358/*"PARTY_ORGANIZATION_CONFIRM_INIT_ALL_CANCEL"*/;
      goto LABEL_211;
    case 7:
      v307 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10375/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_TITLE"*/, 0LL);
      if ( !v307 )
        goto LABEL_26;
      UILabel__set_text(v307, (System_String_o *)gameObject, 0LL);
      v308 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10374/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_MESSAGE"*/, 0LL);
      if ( !v308 )
        goto LABEL_26;
      UILabel__set_text(v308, (System_String_o *)gameObject, 0LL);
      v309 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10373/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_DECIDE"*/, 0LL);
      if ( !v309 )
        goto LABEL_26;
      UILabel__set_text(v309, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v271 = &StringLiteral_10372/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_CANCEL"*/;
      goto LABEL_211;
    case 8:
      v310 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10369/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_TITLE"*/, 0LL);
      if ( !v310 )
        goto LABEL_26;
      UILabel__set_text(v310, (System_String_o *)gameObject, 0LL);
      v311 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10368/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_MESSAGE"*/, 0LL);
      if ( !v311 )
        goto LABEL_26;
      UILabel__set_text(v311, (System_String_o *)gameObject, 0LL);
      v312 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10367/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_DECIDE"*/, 0LL);
      if ( !v312 )
        goto LABEL_26;
      UILabel__set_text(v312, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v271 = &StringLiteral_10366/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_ALL_CANCEL"*/;
      goto LABEL_211;
    case 9:
      v274 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10382/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_TITLE"*/, 0LL);
      if ( !v274 )
        goto LABEL_26;
      UILabel__set_text(v274, (System_String_o *)gameObject, 0LL);
      v275 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10381/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_MESSAGE"*/, 0LL);
      if ( !v275 )
        goto LABEL_26;
      UILabel__set_text(v275, (System_String_o *)gameObject, 0LL);
      v276 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10377/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_DECIDE"*/, 0LL);
      if ( !v276 )
        goto LABEL_26;
      UILabel__set_text(v276, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v271 = &StringLiteral_10376/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_CANCEL"*/;
      goto LABEL_211;
    case 10:
      v313 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10380/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_TITLE"*/, 0LL);
      if ( !v313 )
        goto LABEL_26;
      UILabel__set_text(v313, (System_String_o *)gameObject, 0LL);
      v314 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10379/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_MESSAGE"*/, 0LL);
      if ( !v314 )
        goto LABEL_26;
      UILabel__set_text(v314, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v271 = &StringLiteral_10378/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_MAIN_DECK_LEADER_CLOSE"*/;
      goto LABEL_211;
    case 11:
      v277 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10425/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_TITLE"*/, 0LL);
      if ( !v277 )
        goto LABEL_26;
      UILabel__set_text(v277, (System_String_o *)gameObject, 0LL);
      v278 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10424/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_MESSAGE"*/, 0LL);
      if ( !v278 )
        goto LABEL_26;
      UILabel__set_text(v278, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v271 = &StringLiteral_10423/*"PARTY_ORGANIZATION_CONFIRM_START_SHORTAGE_DECK_MEMBER_CLOSE"*/;
      goto LABEL_211;
    case 12:
      v279 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10419/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_TITLE"*/, 0LL);
      if ( !v279 )
        goto LABEL_26;
      UILabel__set_text(v279, (System_String_o *)gameObject, 0LL);
      v280 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10418/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_MESSAGE"*/, 0LL);
      if ( !v280 )
        goto LABEL_26;
      UILabel__set_text(v280, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v271 = &StringLiteral_10417/*"PARTY_ORGANIZATION_CONFIRM_START_LEAVE_SERVANT_CLOSE"*/;
      goto LABEL_211;
    case 13:
      v315 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10404/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_TITLE"*/, 0LL);
      if ( !v315 )
        goto LABEL_26;
      UILabel__set_text(v315, (System_String_o *)gameObject, 0LL);
      v316 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10403/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_MESSAGE"*/, 0LL);
      if ( !v316 )
        goto LABEL_26;
      UILabel__set_text(v316, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v271 = &StringLiteral_10402/*"PARTY_ORGANIZATION_CONFIRM_START_FATIGURE_SERVANT_CLOSE"*/;
      goto LABEL_211;
    case 14:
      v281 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10398/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_TITLE"*/, 0LL);
      if ( !v281 )
        goto LABEL_26;
      UILabel__set_text(v281, (System_String_o *)gameObject, 0LL);
      v282 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10397/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_MESSAGE"*/, 0LL);
      if ( !v282 )
        goto LABEL_26;
      UILabel__set_text(v282, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v271 = &StringLiteral_10396/*"PARTY_ORGANIZATION_CONFIRM_START_COST_OVER_CLOSE"*/;
      goto LABEL_211;
    case 15:
      v317 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10388/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_TITLE"*/, 0LL);
      if ( !v317 )
        goto LABEL_26;
      UILabel__set_text(v317, (System_String_o *)gameObject, 0LL);
      v284 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10387/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_MESSAGE"*/, 0LL);
      if ( !partyItem )
        goto LABEL_26;
      v285 = (System_String_o *)gameObject;
      gameObject = (UnityEngine_GameObject_o *)partyItem->fields.questRestrictionInfo;
      if ( !gameObject )
        goto LABEL_26;
      TotalCostRestrictionMessage = (Il2CppObject *)QuestRestrictionInfo__GetTotalCostRestrictionMessage(
                                                      (QuestRestrictionInfo_o *)gameObject,
                                                      0LL);
      goto LABEL_191;
    case 16:
      v283 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10388/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_TITLE"*/, 0LL);
      if ( !v283 )
        goto LABEL_26;
      UILabel__set_text(v283, (System_String_o *)gameObject, 0LL);
      v284 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10387/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_MESSAGE"*/, 0LL);
      if ( !partyItem )
        goto LABEL_26;
      v285 = (System_String_o *)gameObject;
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
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(v285, TotalCostRestrictionMessage, 0LL);
      if ( !v284 )
        goto LABEL_26;
      UILabel__set_text(v284, (System_String_o *)gameObject, 0LL);
      v318 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10386/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_DECIDE"*/, 0LL);
      if ( !v318 )
        goto LABEL_26;
      UILabel__set_text(v318, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      v271 = &StringLiteral_10385/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_CANCEL"*/;
      goto LABEL_211;
    case 17:
      v319 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10422/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_TITLE"*/, 0LL);
      if ( !v319 )
        goto LABEL_26;
      UILabel__set_text(v319, (System_String_o *)gameObject, 0LL);
      v320 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10421/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_MESSAGE"*/, 0LL);
      if ( !partyItem )
        goto LABEL_26;
      v321 = (System_String_o *)gameObject;
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
      v263 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10422/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_TITLE"*/, 0LL);
      if ( !v263 )
        goto LABEL_26;
      UILabel__set_text(v263, (System_String_o *)gameObject, 0LL);
      v264 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10387/*"PARTY_ORGANIZATION_CONFIRM_RESTRICTION_MESSAGE"*/, 0LL);
      if ( !v264 )
        goto LABEL_26;
      v265 = (System_String_o *)gameObject;
      v266 = v264;
      goto LABEL_210;
    case 23:
      v323 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10422/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_TITLE"*/, 0LL);
      if ( !v323 )
        goto LABEL_26;
      UILabel__set_text(v323, (System_String_o *)gameObject, 0LL);
      v320 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10421/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_MESSAGE"*/, 0LL);
      if ( !partyItem )
        goto LABEL_26;
      v321 = (System_String_o *)gameObject;
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
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(v321, ConfirmRestrictionMessage, 0LL);
      if ( !v320 )
        goto LABEL_26;
      v265 = (System_String_o *)gameObject;
      v266 = v320;
LABEL_210:
      UILabel__set_text(v266, v265, 0LL);
      cancelLabel = this->fields.closeLabel;
      v271 = &StringLiteral_10420/*"PARTY_ORGANIZATION_CONFIRM_START_RESTRICTION_CLOSE"*/;
LABEL_211:
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v271, 0LL);
      if ( !cancelLabel )
        goto LABEL_26;
      UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
LABEL_213:
      this->fields.state = 1;
      v324 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v324, (Il2CppObject *)this, Method_PartyOrganizationConfirmDeckMenu_EndOpen__, 0LL);
      BaseDialog__Open((BaseDialog_o *)this, v324, 0, 0LL);
      break;
    case 24:
      v287 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10331/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_TITLE"*/, 0LL);
      if ( !v287 )
        goto LABEL_26;
      UILabel__set_text(v287, (System_String_o *)gameObject, 0LL);
      v288 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10330/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_MESSAGE"*/, 0LL);
      if ( !v288 )
        goto LABEL_26;
      UILabel__set_text(v288, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v271 = &StringLiteral_10329/*"PARTY_ORGANIZATION_CONFIRM_ALLOUT_BATTLE_SERVANT_CLOSE"*/;
      goto LABEL_211;
    case 25:
      v289 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10395/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_TITLE"*/, 0LL);
      if ( !v289 )
        goto LABEL_26;
      UILabel__set_text(v289, (System_String_o *)gameObject, 0LL);
      v290 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10394/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_MESSAGE"*/, 0LL);
      if ( !v290 )
        goto LABEL_26;
      UILabel__set_text(v290, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v271 = &StringLiteral_10393/*"PARTY_ORGANIZATION_CONFIRM_START_ALLOUT_BATTLE_SERVANT_CLOSE"*/;
      goto LABEL_211;
    case 26:
      v325 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10401/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_TITLE"*/, 0LL);
      if ( !v325 )
        goto LABEL_26;
      UILabel__set_text(v325, (System_String_o *)gameObject, 0LL);
      v326 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10400/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_MESSAGE"*/, 0LL);
      if ( !v326 )
        goto LABEL_26;
      UILabel__set_text(v326, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v271 = &StringLiteral_10399/*"PARTY_ORGANIZATION_CONFIRM_START_DATA_LOST_SERVANT_CLOSE"*/;
      goto LABEL_211;
    case 27:
      v291 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10428/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_TITLE"*/, 0LL);
      if ( !v291 )
        goto LABEL_26;
      UILabel__set_text(v291, (System_String_o *)gameObject, 0LL);
      v292 = this->fields.messageLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10427/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_MESSAGE"*/, 0LL);
      if ( !v292 )
        goto LABEL_26;
      UILabel__set_text(v292, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.closeLabel;
      v271 = &StringLiteral_10426/*"PARTY_ORGANIZATION_CONFIRM_START_SINGLE_SUPPORT_CLOSE"*/;
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
  __int64 v3; // x3
  struct PartyOrganizationConfirmDeckMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct PartyOrganizationConfirmDeckMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PartyOrganizationConfirmDeckMenu_o *v12; // x0
  PartyOrganizationConfirmDeckMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EB068 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB068 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PartyOrganizationConfirmDeckMenu_CallbackFunc_c *)v9->klass != PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  PartyOrganizationConfirmDeckMenu__remove_callbackFunc(v12, v13, v14);
}


void __fastcall PartyOrganizationConfirmDeckMenu__remove_callbackFunc(
        PartyOrganizationConfirmDeckMenu_o *this,
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct PartyOrganizationConfirmDeckMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct PartyOrganizationConfirmDeckMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PartyOrganizationConfirmDeckMenu_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EB069 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB069 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PartyOrganizationConfirmDeckMenu_CallbackFunc_c *)v9->klass != PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  PartyOrganizationConfirmDeckMenu__Init(v12, v13);
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
  sub_B5D560(p_method);
}


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
  if ( (byte_42E5A7E & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5A7E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmDeckMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmDeckMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  PartyOrganizationConfirmDeckMenu_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  PartyOrganizationConfirmDeckMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, result, v21);
    goto LABEL_37;
  }
}