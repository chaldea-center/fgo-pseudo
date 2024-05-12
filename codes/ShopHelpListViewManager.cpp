void __fastcall ShopHelpListViewManager___ctor(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_String_array *v11; // x20
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct System_String_array *v32; // x20
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct ShopHelpItemInfo_array *v47; // x20
  ShopHelpItemInfo_o *v48; // x21
  const MethodInfo *v49; // x5
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  ShopHelpItemInfo_o *v56; // x21
  const MethodInfo *v57; // x5
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  ShopHelpItemInfo_o *v64; // x21
  const MethodInfo *v65; // x5
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  ShopHelpItemInfo_o *v72; // x21
  const MethodInfo *v73; // x5
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  ShopHelpItemInfo_o *v80; // x21
  const MethodInfo *v81; // x5
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  ShopHelpItemInfo_o *v88; // x21
  const MethodInfo *v89; // x5
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  ShopHelpItemInfo_o *v96; // x21
  const MethodInfo *v97; // x5
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  ShopHelpItemInfo_o *v104; // x21
  const MethodInfo *v105; // x5
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  ShopHelpItemInfo_o *v112; // x21
  const MethodInfo *v113; // x5
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  ShopHelpItemInfo_o *v120; // x21
  const MethodInfo *v121; // x5
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  ShopHelpItemInfo_o *v128; // x21
  const MethodInfo *v129; // x5
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  ShopHelpItemInfo_o *v136; // x21
  const MethodInfo *v137; // x5
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  ShopHelpItemInfo_o *v144; // x21
  const MethodInfo *v145; // x5
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  ShopHelpItemInfo_o *v152; // x21
  const MethodInfo *v153; // x5
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  ShopHelpItemInfo_o *v160; // x21
  const MethodInfo *v161; // x5
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  ShopHelpItemInfo_o *v168; // x21
  const MethodInfo *v169; // x5
  System_String_array **v170; // x2
  System_String_array **v171; // x3
  System_Boolean_array **v172; // x4
  System_Int32_array **v173; // x5
  System_Int32_array *v174; // x6
  System_Int32_array *v175; // x7
  ShopHelpItemInfo_o *v176; // x21
  const MethodInfo *v177; // x5
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  ShopHelpItemInfo_o *v184; // x21
  const MethodInfo *v185; // x5
  System_String_array **v186; // x2
  System_String_array **v187; // x3
  System_Boolean_array **v188; // x4
  System_Int32_array **v189; // x5
  System_Int32_array *v190; // x6
  System_Int32_array *v191; // x7
  ShopHelpItemInfo_o *v192; // x21
  const MethodInfo *v193; // x5
  System_String_array **v194; // x2
  System_String_array **v195; // x3
  System_Boolean_array **v196; // x4
  System_Int32_array **v197; // x5
  System_Int32_array *v198; // x6
  System_Int32_array *v199; // x7
  ShopHelpItemInfo_o *v200; // x21
  const MethodInfo *v201; // x5
  System_String_array **v202; // x2
  System_String_array **v203; // x3
  System_Boolean_array **v204; // x4
  System_Int32_array **v205; // x5
  System_Int32_array *v206; // x6
  System_Int32_array *v207; // x7
  System_String_array **v208; // x2
  System_String_array **v209; // x3
  System_Boolean_array **v210; // x4
  System_Int32_array **v211; // x5
  System_Int32_array *v212; // x6
  System_Int32_array *v213; // x7
  System_Array_o *v214; // x20
  System_String_array **v215; // x2
  System_String_array **v216; // x3
  System_Boolean_array **v217; // x4
  System_Int32_array **v218; // x5
  System_Int32_array *v219; // x6
  System_Int32_array *v220; // x7
  __int64 v221; // x0
  __int64 v222; // x0
  System_RuntimeFieldHandle_o v223; // 0:w1.4

  if ( (byte_438CF5E & 1) == 0 )
  {
    sub_B775C4(&ShopHelpItemInfo_ItemKind___TypeInfo);
    sub_B775C4(&ShopHelpItemInfo___TypeInfo);
    sub_B775C4(&ShopHelpItemInfo_TypeInfo);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&Field__PrivateImplementationDetails__E10CB21B9898DC890A2C12C77D0F3080A4687EE5D6F1EF7922CCF6259D7BB335);
    sub_B775C4(&StringLiteral_12386/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/);
    sub_B775C4(&StringLiteral_12395/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/);
    sub_B775C4(&StringLiteral_14828/*"Tutorial/tutorial_alpha"*/);
    sub_B775C4(&StringLiteral_20011/*"img_shop_15"*/);
    sub_B775C4(&StringLiteral_20020/*"img_shop_7"*/);
    sub_B775C4(&StringLiteral_20007/*"img_shop_11"*/);
    sub_B775C4(&StringLiteral_12380/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/);
    sub_B775C4(&StringLiteral_12385/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/);
    sub_B775C4(&StringLiteral_12387/*"SHOP_HELP_SHOP04_SHOP_EXPLANATION"*/);
    sub_B775C4(&StringLiteral_20017/*"img_shop_22"*/);
    sub_B775C4(&StringLiteral_12391/*"SHOP_HELP_START_UP_SUMMON"*/);
    sub_B775C4(&StringLiteral_23305/*"tutorial_0006"*/);
    sub_B775C4(&StringLiteral_12377/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/);
    sub_B775C4(&StringLiteral_12383/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/);
    sub_B775C4(&StringLiteral_12379/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/);
    sub_B775C4(&StringLiteral_12388/*"SHOP_HELP_SHOP13_EXPLANATION"*/);
    sub_B775C4(&StringLiteral_20009/*"img_shop_13"*/);
    sub_B775C4(&StringLiteral_20022/*"img_shop_9"*/);
    sub_B775C4(&StringLiteral_12393/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/);
    sub_B775C4(&StringLiteral_12394/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/);
    sub_B775C4(&StringLiteral_20006/*"img_shop_10"*/);
    sub_B775C4(&StringLiteral_12382/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/);
    sub_B775C4(&StringLiteral_20012/*"img_shop_16"*/);
    sub_B775C4(&StringLiteral_20013/*"img_shop_17"*/);
    sub_B775C4(&StringLiteral_20015/*"img_shop_20"*/);
    sub_B775C4(&StringLiteral_20021/*"img_shop_8"*/);
    sub_B775C4(&StringLiteral_20019/*"img_shop_4"*/);
    sub_B775C4(&StringLiteral_12378/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/);
    sub_B775C4(&StringLiteral_20016/*"img_shop_21"*/);
    sub_B775C4(&StringLiteral_20014/*"img_shop_18"*/);
    sub_B775C4(&StringLiteral_12390/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/);
    sub_B775C4(&StringLiteral_12381/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/);
    sub_B775C4(&StringLiteral_20018/*"img_shop_3"*/);
    sub_B775C4(&StringLiteral_20004/*"img_shop_0"*/);
    sub_B775C4(&StringLiteral_14827/*"Tutorial/tutorial_0006"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_20010/*"img_shop_14"*/);
    sub_B775C4(&StringLiteral_12392/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/);
    sub_B775C4(&StringLiteral_20005/*"img_shop_1"*/);
    sub_B775C4(&StringLiteral_23306/*"tutorial_alpha"*/);
    sub_B775C4(&StringLiteral_12384/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/);
    sub_B775C4(&StringLiteral_20008/*"img_shop_12"*/);
    sub_B775C4(&StringLiteral_12389/*"SHOP_HELP_SHOP15_EXPLANATION"*/);
    byte_438CF5E = 1;
  }
  v3 = sub_B775DC(string___TypeInfo, 2LL);
  if ( !v3 )
    goto LABEL_89;
  v11 = (struct System_String_array *)v3;
  v3 = StringLiteral_14827/*"Tutorial/tutorial_0006"*/;
  if ( StringLiteral_14827/*"Tutorial/tutorial_0006"*/ )
  {
    v3 = sub_B77684(StringLiteral_14827/*"Tutorial/tutorial_0006"*/, v11->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_88;
    v12 = (System_Int32_array **)StringLiteral_14827/*"Tutorial/tutorial_0006"*/;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v11->max_length )
    goto LABEL_87;
  v11->m_Items[0] = (System_String_o *)v12;
  sub_B77560((BattleServantConfConponent_o *)v11->m_Items, v12, v5, v6, v7, v8, v9, v10);
  v3 = StringLiteral_14828/*"Tutorial/tutorial_alpha"*/;
  if ( StringLiteral_14828/*"Tutorial/tutorial_alpha"*/ )
  {
    v3 = sub_B77684(StringLiteral_14828/*"Tutorial/tutorial_alpha"*/, v11->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_88;
    v19 = (System_Int32_array **)StringLiteral_14828/*"Tutorial/tutorial_alpha"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_87;
  v11->m_Items[1] = (System_String_o *)v19;
  sub_B77560((BattleServantConfConponent_o *)&v11->m_Items[1], v19, v13, v14, v15, v16, v17, v18);
  this->fields.helpBasePaths = v11;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.helpBasePaths,
    (System_Int32_array **)v11,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v3 = sub_B775DC(string___TypeInfo, 2LL);
  if ( !v3 )
    goto LABEL_89;
  v32 = (struct System_String_array *)v3;
  v3 = StringLiteral_23305/*"tutorial_0006"*/;
  if ( StringLiteral_23305/*"tutorial_0006"*/ )
  {
    v3 = sub_B77684(StringLiteral_23305/*"tutorial_0006"*/, v32->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_88;
    v33 = (System_Int32_array **)StringLiteral_23305/*"tutorial_0006"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( !v32->max_length )
    goto LABEL_87;
  v32->m_Items[0] = (System_String_o *)v33;
  sub_B77560((BattleServantConfConponent_o *)v32->m_Items, v33, v26, v27, v28, v29, v30, v31);
  v3 = StringLiteral_23306/*"tutorial_alpha"*/;
  if ( StringLiteral_23306/*"tutorial_alpha"*/ )
  {
    v3 = sub_B77684(StringLiteral_23306/*"tutorial_alpha"*/, v32->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_88;
    v40 = (System_Int32_array **)StringLiteral_23306/*"tutorial_alpha"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( v32->max_length <= 1 )
    goto LABEL_87;
  v32->m_Items[1] = (System_String_o *)v40;
  sub_B77560((BattleServantConfConponent_o *)&v32->m_Items[1], v40, v34, v35, v36, v37, v38, v39);
  this->fields.helpBaseNames = v32;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.helpBaseNames,
    (System_Int32_array **)v32,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = (struct ShopHelpItemInfo_array *)sub_B775DC(ShopHelpItemInfo___TypeInfo, 20LL);
  v48 = (ShopHelpItemInfo_o *)sub_B77694(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v48,
    1,
    (System_String_o *)StringLiteral_12380/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20021/*"img_shop_8"*/,
    2,
    v49);
  if ( !v47 )
LABEL_89:
    sub_B7769C(v3, v4);
  if ( v48 )
  {
    v3 = sub_B77684(v48, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_88;
  }
  if ( !v47->max_length )
    goto LABEL_87;
  v47->m_Items[0] = v48;
  sub_B77560((BattleServantConfConponent_o *)v47->m_Items, (System_Int32_array **)v48, v50, v51, v52, v53, v54, v55);
  v56 = (ShopHelpItemInfo_o *)sub_B77694(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v56,
    16,
    (System_String_o *)StringLiteral_12391/*"SHOP_HELP_START_UP_SUMMON"*/,
    (System_String_o *)StringLiteral_20013/*"img_shop_17"*/,
    2,
    v57);
  if ( v56 )
  {
    v3 = sub_B77684(v56, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_88;
  }
  if ( v47->max_length <= 1 )
    goto LABEL_87;
  v47->m_Items[1] = v56;
  sub_B77560((BattleServantConfConponent_o *)&v47->m_Items[1], (System_Int32_array **)v56, v58, v59, v60, v61, v62, v63);
  v64 = (ShopHelpItemInfo_o *)sub_B77694(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v64,
    2,
    (System_String_o *)StringLiteral_12385/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20019/*"img_shop_4"*/,
    2,
    v65);
  if ( v64 )
  {
    v3 = sub_B77684(v64, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_88;
  }
  if ( v47->max_length <= 2 )
    goto LABEL_87;
  v47->m_Items[2] = v64;
  sub_B77560((BattleServantConfConponent_o *)&v47->m_Items[2], (System_Int32_array **)v64, v66, v67, v68, v69, v70, v71);
  v72 = (ShopHelpItemInfo_o *)sub_B77694(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v72,
    3,
    (System_String_o *)StringLiteral_12383/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20018/*"img_shop_3"*/,
    1,
    v73);
  if ( v72 )
  {
    v3 = sub_B77684(v72, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_88;
  }
  if ( v47->max_length <= 3 )
    goto LABEL_87;
  v47->m_Items[3] = v72;
  sub_B77560((BattleServantConfConponent_o *)&v47->m_Items[3], (System_Int32_array **)v72, v74, v75, v76, v77, v78, v79);
  v80 = (ShopHelpItemInfo_o *)sub_B77694(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v80,
    4,
    (System_String_o *)StringLiteral_12384/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20007/*"img_shop_11"*/,
    2,
    v81);
  if ( v80 )
  {
    v3 = sub_B77684(v80, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_88;
  }
  if ( v47->max_length <= 4 )
    goto LABEL_87;
  v47->m_Items[4] = v80;
  sub_B77560((BattleServantConfConponent_o *)&v47->m_Items[4], (System_Int32_array **)v80, v82, v83, v84, v85, v86, v87);
  v88 = (ShopHelpItemInfo_o *)sub_B77694(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v88,
    5,
    (System_String_o *)StringLiteral_12392/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20022/*"img_shop_9"*/,
    1,
    v89);
  if ( v88 )
  {
    v3 = sub_B77684(v88, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_88;
  }
  if ( v47->max_length <= 5 )
    goto LABEL_87;
  v47->m_Items[5] = v88;
  sub_B77560((BattleServantConfConponent_o *)&v47->m_Items[5], (System_Int32_array **)v88, v90, v91, v92, v93, v94, v95);
  v96 = (ShopHelpItemInfo_o *)sub_B77694(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v96,
    6,
    (System_String_o *)StringLiteral_12393/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20005/*"img_shop_1"*/,
    1,
    v97);
  if ( v96 )
  {
    v3 = sub_B77684(v96, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_88;
  }
  if ( v47->max_length <= 6 )
    goto LABEL_87;
  v47->m_Items[6] = v96;
  sub_B77560(
    (BattleServantConfConponent_o *)&v47->m_Items[6],
    (System_Int32_array **)v96,
    v98,
    v99,
    v100,
    v101,
    v102,
    v103);
  v104 = (ShopHelpItemInfo_o *)sub_B77694(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v104,
    7,
    (System_String_o *)StringLiteral_12386/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20008/*"img_shop_12"*/,
    1,
    v105);
  if ( v104 )
  {
    v3 = sub_B77684(v104, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_88;
  }
  if ( v47->max_length <= 7 )
    goto LABEL_87;
  v47->m_Items[7] = v104;
  sub_B77560(
    (BattleServantConfConponent_o *)&v47->m_Items[7],
    (System_Int32_array **)v104,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
  v112 = (ShopHelpItemInfo_o *)sub_B77694(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v112,
    8,
    (System_String_o *)StringLiteral_12379/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20009/*"img_shop_13"*/,
    1,
    v113);
  if ( v112 )
  {
    v3 = sub_B77684(v112, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_88;
  }
  if ( v47->max_length <= 8 )
    goto LABEL_87;
  v47->m_Items[8] = v112;
  sub_B77560(
    (BattleServantConfConponent_o *)&v47->m_Items[8],
    (System_Int32_array **)v112,
    v114,
    v115,
    v116,
    v117,
    v118,
    v119);
  v120 = (ShopHelpItemInfo_o *)sub_B77694(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v120,
    11,
    (System_String_o *)StringLiteral_12377/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20006/*"img_shop_10"*/,
    1,
    v121);
  if ( v120 )
  {
    v3 = sub_B77684(v120, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_88;
  }
  if ( v47->max_length <= 9 )
    goto LABEL_87;
  v47->m_Items[9] = v120;
  sub_B77560(
    (BattleServantConfConponent_o *)&v47->m_Items[9],
    (System_Int32_array **)v120,
    v122,
    v123,
    v124,
    v125,
    v126,
    v127);
  v128 = (ShopHelpItemInfo_o *)sub_B77694(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v128,
    13,
    (System_String_o *)StringLiteral_12390/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20010/*"img_shop_14"*/,
    2,
    v129);
  if ( v128 )
  {
    v3 = sub_B77684(v128, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_88;
  }
  if ( v47->max_length <= 0xA )
    goto LABEL_87;
  v47->m_Items[10] = v128;
  sub_B77560(
    (BattleServantConfConponent_o *)&v47->m_Items[10],
    (System_Int32_array **)v128,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  v136 = (ShopHelpItemInfo_o *)sub_B77694(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v136,
    12,
    (System_String_o *)StringLiteral_12394/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20020/*"img_shop_7"*/,
    1,
    v137);
  if ( v136 )
  {
    v3 = sub_B77684(v136, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_88;
  }
  if ( v47->max_length <= 0xB )
    goto LABEL_87;
  v47->m_Items[11] = v136;
  sub_B77560(
    (BattleServantConfConponent_o *)&v47->m_Items[11],
    (System_Int32_array **)v136,
    v138,
    v139,
    v140,
    v141,
    v142,
    v143);
  v144 = (ShopHelpItemInfo_o *)sub_B77694(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v144,
    14,
    (System_String_o *)StringLiteral_12382/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20011/*"img_shop_15"*/,
    1,
    v145);
  if ( v144 )
  {
    v3 = sub_B77684(v144, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_88;
  }
  if ( v47->max_length <= 0xC )
    goto LABEL_87;
  v47->m_Items[12] = v144;
  sub_B77560(
    (BattleServantConfConponent_o *)&v47->m_Items[12],
    (System_Int32_array **)v144,
    v146,
    v147,
    v148,
    v149,
    v150,
    v151);
  v152 = (ShopHelpItemInfo_o *)sub_B77694(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v152,
    15,
    (System_String_o *)StringLiteral_12387/*"SHOP_HELP_SHOP04_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20012/*"img_shop_16"*/,
    2,
    v153);
  if ( v152 )
  {
    v3 = sub_B77684(v152, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_88;
  }
  if ( v47->max_length <= 0xD )
    goto LABEL_87;
  v47->m_Items[13] = v152;
  sub_B77560(
    (BattleServantConfConponent_o *)&v47->m_Items[13],
    (System_Int32_array **)v152,
    v154,
    v155,
    v156,
    v157,
    v158,
    v159);
  v160 = (ShopHelpItemInfo_o *)sub_B77694(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v160,
    17,
    (System_String_o *)StringLiteral_12378/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20013/*"img_shop_17"*/,
    2,
    v161);
  if ( v160 )
  {
    v3 = sub_B77684(v160, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_88;
  }
  if ( v47->max_length <= 0xE )
    goto LABEL_87;
  v47->m_Items[14] = v160;
  sub_B77560(
    (BattleServantConfConponent_o *)&v47->m_Items[14],
    (System_Int32_array **)v160,
    v162,
    v163,
    v164,
    v165,
    v166,
    v167);
  v168 = (ShopHelpItemInfo_o *)sub_B77694(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v168,
    18,
    (System_String_o *)StringLiteral_12388/*"SHOP_HELP_SHOP13_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20014/*"img_shop_18"*/,
    1,
    v169);
  if ( v168 )
  {
    v3 = sub_B77684(v168, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_88;
  }
  if ( v47->max_length <= 0xF )
    goto LABEL_87;
  v47->m_Items[15] = v168;
  sub_B77560(
    (BattleServantConfConponent_o *)&v47->m_Items[15],
    (System_Int32_array **)v168,
    v170,
    v171,
    v172,
    v173,
    v174,
    v175);
  v176 = (ShopHelpItemInfo_o *)sub_B77694(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v176,
    19,
    (System_String_o *)StringLiteral_12395/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20015/*"img_shop_20"*/,
    2,
    v177);
  if ( v176 )
  {
    v3 = sub_B77684(v176, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_88;
  }
  if ( v47->max_length <= 0x10 )
    goto LABEL_87;
  v47->m_Items[16] = v176;
  sub_B77560(
    (BattleServantConfConponent_o *)&v47->m_Items[16],
    (System_Int32_array **)v176,
    v178,
    v179,
    v180,
    v181,
    v182,
    v183);
  v184 = (ShopHelpItemInfo_o *)sub_B77694(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v184,
    20,
    (System_String_o *)StringLiteral_12389/*"SHOP_HELP_SHOP15_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20016/*"img_shop_21"*/,
    2,
    v185);
  if ( v184 )
  {
    v3 = sub_B77684(v184, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_88;
  }
  if ( v47->max_length <= 0x11 )
    goto LABEL_87;
  v47->m_Items[17] = v184;
  sub_B77560(
    (BattleServantConfConponent_o *)&v47->m_Items[17],
    (System_Int32_array **)v184,
    v186,
    v187,
    v188,
    v189,
    v190,
    v191);
  v192 = (ShopHelpItemInfo_o *)sub_B77694(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v192,
    21,
    (System_String_o *)StringLiteral_12381/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20017/*"img_shop_22"*/,
    2,
    v193);
  if ( v192 )
  {
    v3 = sub_B77684(v192, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_88;
  }
  if ( v47->max_length <= 0x12 )
    goto LABEL_87;
  v47->m_Items[18] = v192;
  sub_B77560(
    (BattleServantConfConponent_o *)&v47->m_Items[18],
    (System_Int32_array **)v192,
    v194,
    v195,
    v196,
    v197,
    v198,
    v199);
  v200 = (ShopHelpItemInfo_o *)sub_B77694(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v200, 22, (System_String_o *)StringLiteral_1/*""*/, (System_String_o *)StringLiteral_20004/*"img_shop_0"*/, 1, v201);
  if ( v200 )
  {
    v3 = sub_B77684(v200, v47->obj.klass->_1.element_class);
    if ( !v3 )
    {
LABEL_88:
      v222 = sub_B776BC(v3);
      sub_B77668(v222, 0LL);
    }
  }
  if ( v47->max_length <= 0x13 )
  {
LABEL_87:
    v221 = sub_B776C8(v3);
    sub_B77668(v221, 0LL);
  }
  v47->m_Items[19] = v200;
  sub_B77560(
    (BattleServantConfConponent_o *)&v47->m_Items[19],
    (System_Int32_array **)v200,
    v202,
    v203,
    v204,
    v205,
    v206,
    v207);
  this->fields.itemInfoList = v47;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.itemInfoList,
    (System_Int32_array **)v47,
    v208,
    v209,
    v210,
    v211,
    v212,
    v213);
  v214 = (System_Array_o *)sub_B775DC(ShopHelpItemInfo_ItemKind___TypeInfo, 18LL);
  v223.fields.value = Field__PrivateImplementationDetails__E10CB21B9898DC890A2C12C77D0F3080A4687EE5D6F1EF7922CCF6259D7BB335;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v214, v223, 0LL);
  this->fields.kinds = (struct ShopHelpItemInfo_ItemKind_array *)v214;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.kinds,
    (System_Int32_array **)v214,
    v215,
    v216,
    v217,
    v218,
    v219,
    v220);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ShopHelpListViewManager__CallOnFadeOut(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *onFadeOut; // x19
  BattleServantConfConponent_o *p_onFadeOut; // x0

  onFadeOut = this->fields.onFadeOut;
  if ( onFadeOut )
  {
    p_onFadeOut = (BattleServantConfConponent_o *)&this->fields.onFadeOut;
    p_onFadeOut->klass = 0LL;
    sub_B77560(p_onFadeOut, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(onFadeOut, 0LL);
  }
}


void __fastcall ShopHelpListViewManager__CloseHelpDialog(
        ShopHelpListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ShopHelpMenu_o *baseDialog; // x20
  System_Action_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_438CF5C & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ShopHelpListViewManager_CallOnFadeOut__);
    byte_438CF5C = 1;
  }
  this->fields.onFadeOut = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.onFadeOut,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  baseDialog = this->fields.baseDialog;
  v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ShopHelpListViewManager_CallOnFadeOut__, 0LL);
  if ( !baseDialog )
    sub_B7769C(v12, v13);
  ShopHelpMenu__Close(baseDialog, v11, v14);
}


void __fastcall ShopHelpListViewManager__CreateList(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1
  BaseDialog_o *baseDialog; // x0
  struct ShopHelpItemInfo_ItemKind_array *kinds; // x8
  struct ShopHelpItemInfo_ItemKind_array *v12; // x24
  __int64 v13; // x8
  unsigned __int64 v14; // x25
  int32_t v15; // w21
  ShopRootConstants_c *v16; // x0
  struct ShopHelpItemInfo_array *itemInfoList; // x11
  unsigned __int64 max_length; // x8
  unsigned __int64 v19; // x9
  ShopHelpItemInfo_o **m_Items; // x11
  ShopHelpItemInfo_o *v21; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x21
  int32_t size; // w22
  __int64 v24; // x23
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x0

  if ( (byte_438CF5B & 1) == 0 )
  {
    sub_B775C4(&CoinRoomUtility_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_ShopMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&ShopHelpListViewItem_TypeInfo);
    sub_B775C4(&ShopRootConstants_TypeInfo);
    byte_438CF5B = 1;
  }
  this->fields.onFadeOut = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.onFadeOut, 0LL, v2, v3, v4, v5, v6, v7);
  baseDialog = (BaseDialog_o *)this->fields.baseDialog;
  if ( !baseDialog )
    goto LABEL_40;
  BaseDialog__Open(baseDialog, 0LL, 0, 0LL);
  kinds = this->fields.kinds;
  if ( !kinds )
    goto LABEL_40;
  ListViewManager__CreateList((ListViewManager_o *)this, kinds->max_length, 0LL);
  v12 = this->fields.kinds;
  if ( !v12 )
    goto LABEL_40;
  v13 = *(_QWORD *)&v12->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v13 )
      {
LABEL_39:
        v31 = sub_B776C8(baseDialog);
        sub_B77668(v31, 0LL);
      }
      v15 = v12->m_Items[v14 + 1];
      switch ( v15 )
      {
        case 15:
          v16 = ShopRootConstants_TypeInfo;
          if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ShopRootConstants_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          }
          baseDialog = (BaseDialog_o *)ShopRootConstants__IsSvtCostumeShopOpen((const MethodInfo *)v16);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_37;
          goto LABEL_27;
        case 16:
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          baseDialog = (BaseDialog_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ShopMaster___);
          if ( !baseDialog )
            goto LABEL_40;
          baseDialog = (BaseDialog_o *)ShopMaster__IsEnableEventShop_28707960((ShopMaster_o *)baseDialog, v9);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_37;
LABEL_27:
          itemInfoList = this->fields.itemInfoList;
          if ( !itemInfoList )
            goto LABEL_40;
          max_length = itemInfoList->max_length;
          if ( (__int64)(max_length << 32) < 1 )
            goto LABEL_37;
          v19 = 0LL;
          m_Items = itemInfoList->m_Items;
          break;
        case 17:
          if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
          }
          baseDialog = (BaseDialog_o *)CoinRoomUtility__IsTargetQuestClear(0LL);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_37;
          goto LABEL_27;
        case 20:
          baseDialog = (BaseDialog_o *)ConstantMaster__IsFLAG20230402(0LL);
          if ( ((unsigned __int8)baseDialog & 1) != 0 )
            goto LABEL_27;
          goto LABEL_37;
        default:
          goto LABEL_27;
      }
      while ( 1 )
      {
        if ( v19 >= max_length )
          goto LABEL_39;
        v21 = m_Items[v19];
        if ( v21 )
        {
          if ( v21->fields._Kind_k__BackingField == v15 )
            break;
        }
        if ( (__int64)++v19 >= (int)max_length )
          goto LABEL_37;
      }
      itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      v24 = sub_B77694(ShopHelpListViewItem_TypeInfo);
      ListViewItem___ctor_24167012((ListViewItem_o *)v24, size, 0LL);
      *(_QWORD *)(v24 + 112) = v21;
      sub_B77560((BattleServantConfConponent_o *)(v24 + 112), (System_Int32_array **)v21, v25, v26, v27, v28, v29, v30);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
LABEL_37:
      LODWORD(v13) = v12->max_length;
      if ( (__int64)++v14 >= (int)v13 )
        goto LABEL_38;
    }
LABEL_40:
    sub_B7769C(baseDialog, v9);
  }
LABEL_38:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ShopHelpListViewManager__DestroyList(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


UnityEngine_Texture2D_o *__fastcall ShopHelpListViewManager__GetAssetStorageTexture2D(
        ShopHelpListViewManager_o *this,
        System_String_o *path,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  __int64 v7; // x1

  if ( (byte_438CF59 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_Texture2D____69465432);
    sub_B775C4(&AssetManager_TypeInfo);
    byte_438CF59 = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( !AssetStorage )
    sub_B7769C(0LL, v7);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                      AssetStorage,
                                      name,
                                      (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_Texture2D____69465432);
}


void __fastcall ShopHelpListViewManager__LoadBaseSprite(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  System_String_array *helpBasePaths; // x20
  System_Action_o *v4; // x21

  if ( (byte_438CF57 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__);
    byte_438CF57 = 1;
  }
  if ( !this->fields.initMode )
  {
    this->fields.initMode = 1;
    helpBasePaths = this->fields.helpBasePaths;
    v4 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage_24408996(helpBasePaths, v4, 1, 0LL);
  }
}


void __fastcall ShopHelpListViewManager__ReleaseAssetStorages(
        ShopHelpListViewManager_o *this,
        System_String_array *paths,
        const MethodInfo *method)
{
  __int64 v4; // x8
  unsigned __int64 v5; // x21
  System_String_o *v6; // x20
  __int64 v7; // x0

  if ( (byte_438CF5A & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_B775C4(&AssetManager_TypeInfo);
    byte_438CF5A = 1;
  }
  if ( !paths )
    sub_B7769C(this, paths);
  v4 = *(_QWORD *)&paths->max_length;
  if ( (int)v4 >= 1 )
  {
    v5 = 0LL;
    do
    {
      if ( v5 >= (unsigned int)v4 )
      {
        v7 = sub_B776C8(this);
        sub_B77668(v7, 0LL);
      }
      v6 = paths->m_Items[v5];
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAssetStorage(v6, 0LL);
      LODWORD(v4) = paths->max_length;
      ++v5;
    }
    while ( (__int64)v5 < (int)v4 );
  }
}


void __fastcall ShopHelpListViewManager__ReleaseBaseSprite(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ShopHelpListViewManager_o *v3; // x19
  __int64 v4; // x1
  UnityEngine_GameObject_o *BaseWindow; // x0

  v3 = this;
  if ( (byte_438CF58 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_B775C4(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_438CF58 = 1;
  }
  if ( v3->fields.initMode == 2 )
  {
    ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
    BaseWindow = v3->fields.BaseWindow;
    if ( !BaseWindow
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0LL)) == 0LL
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)BaseWindow,
                                                     (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL )
    {
      sub_B7769C(BaseWindow, v4);
    }
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, const char *))BaseWindow->klass[2]._1.gc_desc)(
      BaseWindow,
      0LL,
      BaseWindow->klass[2]._1.name);
  }
  v3->fields.initMode = 0;
}


void __fastcall ShopHelpListViewManager__SetObjectItem(
        ShopHelpListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x10

  if ( (byte_438CF5D & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_B775C4(&ShopHelpListViewObject_TypeInfo);
    byte_438CF5D = 1;
  }
  if ( !obj
    || (v5 = *(&ShopHelpListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (ShopHelpListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != ShopHelpListViewObject_TypeInfo )
  {
    sub_B7769C(this, obj);
  }
  ShopHelpListViewObject__Init((ShopHelpListViewObject_o *)obj, 2, (const MethodInfo *)item);
}


void __fastcall ShopHelpListViewManager___LoadBaseSprite_b__9_0(
        ShopHelpListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ShopHelpListViewManager_o *v3; // x19
  UnityEngine_Shader_o *v4; // x21
  UnityEngine_Material_o *v5; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *BaseWindow; // x0
  const MethodInfo *v8; // x3
  struct System_String_array *helpBasePaths; // x8
  struct System_String_array *helpBaseNames; // x9
  const MethodInfo *v11; // x3
  struct System_String_array *v12; // x8
  struct System_String_array *v13; // x9
  UnityEngine_Texture_o *AssetStorageTexture2D; // x0
  __int64 v15; // x0

  v3 = this;
  if ( (byte_438CF5F & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_B775C4(&UnityEngine_Material_TypeInfo);
    sub_B775C4(&StringLiteral_4671/*"Custom/SpriteWithMask"*/);
    this = (ShopHelpListViewManager_o *)sub_B775C4(&StringLiteral_16313/*"_MaskTex"*/);
    byte_438CF5F = 1;
  }
  if ( v3->fields.initMode == 1 )
  {
    v4 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4671/*"Custom/SpriteWithMask"*/, 0LL);
    v5 = (UnityEngine_Material_o *)sub_B77694(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v5, v4, 0LL);
    BaseWindow = v3->fields.BaseWindow;
    if ( BaseWindow )
    {
      BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0LL);
      if ( BaseWindow )
      {
        BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)BaseWindow,
                                                   (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UITexture___);
        if ( BaseWindow )
        {
          BaseWindow = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, UnityEngine_Material_o *, Il2CppMethodPointer))BaseWindow->klass[1].vtable._2_GetHashCode.method)(
                                                     BaseWindow,
                                                     v5,
                                                     BaseWindow->klass[1].vtable._3_ToString.methodPtr);
          helpBasePaths = v3->fields.helpBasePaths;
          if ( helpBasePaths )
          {
            if ( !helpBasePaths->max_length )
              goto LABEL_19;
            helpBaseNames = v3->fields.helpBaseNames;
            if ( helpBaseNames )
            {
              if ( !helpBaseNames->max_length )
                goto LABEL_19;
              BaseWindow = (UnityEngine_GameObject_o *)ShopHelpListViewManager__GetAssetStorageTexture2D(
                                                         (ShopHelpListViewManager_o *)BaseWindow,
                                                         helpBasePaths->m_Items[0],
                                                         helpBaseNames->m_Items[0],
                                                         v8);
              if ( v5 )
              {
                UnityEngine_Material__set_mainTexture(v5, (UnityEngine_Texture_o *)BaseWindow, 0LL);
                v12 = v3->fields.helpBasePaths;
                if ( v12 )
                {
                  if ( v12->max_length <= 1 )
                    goto LABEL_19;
                  v13 = v3->fields.helpBaseNames;
                  if ( v13 )
                  {
                    if ( v13->max_length > 1 )
                    {
                      AssetStorageTexture2D = (UnityEngine_Texture_o *)ShopHelpListViewManager__GetAssetStorageTexture2D(
                                                                         (ShopHelpListViewManager_o *)BaseWindow,
                                                                         v12->m_Items[1],
                                                                         v13->m_Items[1],
                                                                         v11);
                      UnityEngine_Material__SetTexture(
                        v5,
                        (System_String_o *)StringLiteral_16313/*"_MaskTex"*/,
                        AssetStorageTexture2D,
                        0LL);
                      v3->fields.initMode = 2;
                      return;
                    }
LABEL_19:
                    v15 = sub_B776C8(BaseWindow);
                    sub_B77668(v15, 0LL);
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_B7769C(BaseWindow, v6);
  }
  ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
}