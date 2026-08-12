void ShopHelpListViewManager___ctor(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x20
  int32_t v12; // w1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t v19; // w1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x20
  int32_t v33; // w1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct ShopHelpItemInfo_array *v47; // x20
  ShopHelpItemInfo_o *v48; // x21
  const MethodInfo *v49; // x5
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  __int64 v56; // x1
  ShopHelpItemInfo_o *v57; // x21
  const MethodInfo *v58; // x5
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  ShopHelpItemInfo_o *v65; // x21
  const MethodInfo *v66; // x5
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  ShopHelpItemInfo_o *v73; // x21
  const MethodInfo *v74; // x5
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  ShopHelpItemInfo_o *v81; // x21
  const MethodInfo *v82; // x5
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  ShopHelpItemInfo_o *v89; // x21
  const MethodInfo *v90; // x5
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  ShopHelpItemInfo_o *v97; // x21
  const MethodInfo *v98; // x5
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  ShopHelpItemInfo_o *v105; // x21
  const MethodInfo *v106; // x5
  System_String_o *v107; // x2
  System_String_o *v108; // x3
  int32_t v109; // w4
  int32_t v110; // w5
  bool v111; // w6
  bool v112; // w7
  ShopHelpItemInfo_o *v113; // x21
  const MethodInfo *v114; // x5
  System_String_o *v115; // x2
  System_String_o *v116; // x3
  int32_t v117; // w4
  int32_t v118; // w5
  bool v119; // w6
  bool v120; // w7
  ShopHelpItemInfo_o *v121; // x21
  const MethodInfo *v122; // x5
  System_String_o *v123; // x2
  System_String_o *v124; // x3
  int32_t v125; // w4
  int32_t v126; // w5
  bool v127; // w6
  bool v128; // w7
  ShopHelpItemInfo_o *v129; // x21
  const MethodInfo *v130; // x5
  System_String_o *v131; // x2
  System_String_o *v132; // x3
  int32_t v133; // w4
  int32_t v134; // w5
  bool v135; // w6
  bool v136; // w7
  ShopHelpItemInfo_o *v137; // x21
  const MethodInfo *v138; // x5
  System_String_o *v139; // x2
  System_String_o *v140; // x3
  int32_t v141; // w4
  int32_t v142; // w5
  bool v143; // w6
  bool v144; // w7
  ShopHelpItemInfo_o *v145; // x21
  const MethodInfo *v146; // x5
  System_String_o *v147; // x2
  System_String_o *v148; // x3
  int32_t v149; // w4
  int32_t v150; // w5
  bool v151; // w6
  bool v152; // w7
  ShopHelpItemInfo_o *v153; // x21
  const MethodInfo *v154; // x5
  System_String_o *v155; // x2
  System_String_o *v156; // x3
  int32_t v157; // w4
  int32_t v158; // w5
  bool v159; // w6
  bool v160; // w7
  ShopHelpItemInfo_o *v161; // x21
  const MethodInfo *v162; // x5
  System_String_o *v163; // x2
  System_String_o *v164; // x3
  int32_t v165; // w4
  int32_t v166; // w5
  bool v167; // w6
  bool v168; // w7
  ShopHelpItemInfo_o *v169; // x21
  const MethodInfo *v170; // x5
  System_String_o *v171; // x2
  System_String_o *v172; // x3
  int32_t v173; // w4
  int32_t v174; // w5
  bool v175; // w6
  bool v176; // w7
  ShopHelpItemInfo_o *v177; // x21
  const MethodInfo *v178; // x5
  System_String_o *v179; // x2
  System_String_o *v180; // x3
  int32_t v181; // w4
  int32_t v182; // w5
  bool v183; // w6
  bool v184; // w7
  ShopHelpItemInfo_o *v185; // x21
  const MethodInfo *v186; // x5
  System_String_o *v187; // x2
  System_String_o *v188; // x3
  int32_t v189; // w4
  int32_t v190; // w5
  bool v191; // w6
  bool v192; // w7
  ShopHelpItemInfo_o *v193; // x21
  const MethodInfo *v194; // x5
  System_String_o *v195; // x2
  System_String_o *v196; // x3
  int32_t v197; // w4
  int32_t v198; // w5
  bool v199; // w6
  bool v200; // w7
  ShopHelpItemInfo_o *v201; // x21
  const MethodInfo *v202; // x5
  System_String_o *v203; // x2
  System_String_o *v204; // x3
  int32_t v205; // w4
  int32_t v206; // w5
  bool v207; // w6
  bool v208; // w7
  ShopHelpItemInfo_o *v209; // x21
  const MethodInfo *v210; // x5
  System_String_o *v211; // x2
  System_String_o *v212; // x3
  int32_t v213; // w4
  int32_t v214; // w5
  bool v215; // w6
  bool v216; // w7
  System_String_o *v217; // x2
  System_String_o *v218; // x3
  int32_t v219; // w4
  int32_t v220; // w5
  bool v221; // w6
  bool v222; // w7
  System_Array_o *v223; // x20
  System_String_o *v224; // x2
  System_String_o *v225; // x3
  int32_t v226; // w4
  int32_t v227; // w5
  bool v228; // w6
  bool v229; // w7
  __int64 v230; // x0

  if ( (byte_596C868 & 1) == 0 )
  {
    sub_2213A60(&ShopHelpItemInfo_ItemKind___TypeInfo);
    sub_2213A60(&ShopHelpItemInfo___TypeInfo);
    sub_2213A60(&ShopHelpItemInfo_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__516CE5EF4CC7A81C9A872419689A9764E2EBEB4282A29E143CD06FEBDE26A4FC);
    sub_2213A60(&StringLiteral_12636/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_12643/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_12632/*"SHOP_HELP_PURE_PRI_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_15219/*"Tutorial/tutorial_alpha"*/);
    sub_2213A60(&StringLiteral_21554/*"img_shop_15"*/);
    sub_2213A60(&StringLiteral_21564/*"img_shop_7"*/);
    sub_2213A60(&StringLiteral_21550/*"img_shop_11"*/);
    sub_2213A60(&StringLiteral_12642/*"SHOP_HELP_SVT_COSTUME_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_12628/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_12635/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_21560/*"img_shop_22"*/);
    sub_2213A60(&StringLiteral_12638/*"SHOP_HELP_START_UP_SUMMON"*/);
    sub_2213A60(&StringLiteral_25548/*"tutorial_0006"*/);
    sub_2213A60(&StringLiteral_12624/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_12631/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_12627/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_12634/*"SHOP_HELP_REVIVAL_ITEM_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_21561/*"img_shop_23"*/);
    sub_2213A60(&StringLiteral_21552/*"img_shop_13"*/);
    sub_2213A60(&StringLiteral_21566/*"img_shop_9"*/);
    sub_2213A60(&StringLiteral_12640/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_12641/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_21549/*"img_shop_10"*/);
    sub_2213A60(&StringLiteral_12630/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_21555/*"img_shop_16"*/);
    sub_2213A60(&StringLiteral_21556/*"img_shop_17"*/);
    sub_2213A60(&StringLiteral_21558/*"img_shop_20"*/);
    sub_2213A60(&StringLiteral_21565/*"img_shop_8"*/);
    sub_2213A60(&StringLiteral_21563/*"img_shop_4"*/);
    sub_2213A60(&StringLiteral_12626/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_21559/*"img_shop_21"*/);
    sub_2213A60(&StringLiteral_21557/*"img_shop_18"*/);
    sub_2213A60(&StringLiteral_12637/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_12629/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_21562/*"img_shop_3"*/);
    sub_2213A60(&StringLiteral_21547/*"img_shop_0"*/);
    sub_2213A60(&StringLiteral_15218/*"Tutorial/tutorial_0006"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_21553/*"img_shop_14"*/);
    sub_2213A60(&StringLiteral_12639/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_21548/*"img_shop_1"*/);
    sub_2213A60(&StringLiteral_25549/*"tutorial_alpha"*/);
    sub_2213A60(&StringLiteral_12633/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_21551/*"img_shop_12"*/);
    sub_2213A60(&StringLiteral_12625/*"SHOP_HELP_CLASS_BOARD_RESET_EXPLANATION"*/);
    byte_596C868 = 1;
  }
  v3 = sub_2213B20(string___TypeInfo, 2);
  if ( !v3 )
    goto LABEL_76;
  v11 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_74;
  v12 = StringLiteral_15218/*"Tutorial/tutorial_0006"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_15218/*"Tutorial/tutorial_0006"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), v12, v5, v6, v7, v8, v9, v10);
  if ( (*(_DWORD *)(v11 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_74;
  v19 = StringLiteral_15219/*"Tutorial/tutorial_alpha"*/;
  *(_QWORD *)(v11 + 40) = StringLiteral_15219/*"Tutorial/tutorial_alpha"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 40), v19, v13, v14, v15, v16, v17, v18);
  this->fields.helpBasePaths = (struct System_String_array *)v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.helpBasePaths, v11, v20, v21, v22, v23, v24, v25);
  v3 = sub_2213B20(string___TypeInfo, 2);
  if ( !v3 )
    goto LABEL_76;
  v32 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_74;
  v33 = StringLiteral_25548/*"tutorial_0006"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_25548/*"tutorial_0006"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), v33, v26, v27, v28, v29, v30, v31);
  if ( (*(_DWORD *)(v32 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_74;
  v40 = StringLiteral_25549/*"tutorial_alpha"*/;
  *(_QWORD *)(v32 + 40) = StringLiteral_25549/*"tutorial_alpha"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 40), v40, v34, v35, v36, v37, v38, v39);
  this->fields.helpBaseNames = (struct System_String_array *)v32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.helpBaseNames, v32, v41, v42, v43, v44, v45, v46);
  v47 = (struct ShopHelpItemInfo_array *)sub_2213B20(ShopHelpItemInfo___TypeInfo, 21);
  v48 = (ShopHelpItemInfo_o *)sub_2213CCC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v48,
    1,
    (System_String_o *)StringLiteral_12628/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21565/*"img_shop_8"*/,
    2,
    v49);
  if ( !v47 )
LABEL_76:
    sub_2213CDC(v3, v4);
  if ( v48 )
  {
    v3 = sub_2213BB4(v48, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( !LODWORD(v47->max_length) )
    goto LABEL_74;
  v47->m_Items[0] = v48;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v47->m_Items, (int32_t)v48, v50, v51, v52, v53, v54, v55);
  v57 = (ShopHelpItemInfo_o *)sub_2213CCC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v57,
    16,
    (System_String_o *)StringLiteral_12638/*"SHOP_HELP_START_UP_SUMMON"*/,
    (System_String_o *)StringLiteral_21556/*"img_shop_17"*/,
    2,
    v58);
  if ( v57 )
  {
    v3 = sub_2213BB4(v57, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( (v47->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_74;
  v47->m_Items[1] = v57;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->m_Items[1], (int32_t)v57, v59, v60, v61, v62, v63, v64);
  v65 = (ShopHelpItemInfo_o *)sub_2213CCC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v65,
    2,
    (System_String_o *)StringLiteral_12635/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21563/*"img_shop_4"*/,
    2,
    v66);
  if ( v65 )
  {
    v3 = sub_2213BB4(v65, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( LODWORD(v47->max_length) <= 2 )
    goto LABEL_74;
  v47->m_Items[2] = v65;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->m_Items[2], (int32_t)v65, v67, v68, v69, v70, v71, v72);
  v73 = (ShopHelpItemInfo_o *)sub_2213CCC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v73,
    3,
    (System_String_o *)StringLiteral_12631/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21562/*"img_shop_3"*/,
    1,
    v74);
  if ( v73 )
  {
    v3 = sub_2213BB4(v73, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( (v47->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_74;
  v47->m_Items[3] = v73;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->m_Items[3], (int32_t)v73, v75, v76, v77, v78, v79, v80);
  v81 = (ShopHelpItemInfo_o *)sub_2213CCC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v81,
    4,
    (System_String_o *)StringLiteral_12633/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21550/*"img_shop_11"*/,
    2,
    v82);
  if ( v81 )
  {
    v3 = sub_2213BB4(v81, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( LODWORD(v47->max_length) <= 4 )
    goto LABEL_74;
  v47->m_Items[4] = v81;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->m_Items[4], (int32_t)v81, v83, v84, v85, v86, v87, v88);
  v89 = (ShopHelpItemInfo_o *)sub_2213CCC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v89,
    5,
    (System_String_o *)StringLiteral_12639/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21566/*"img_shop_9"*/,
    1,
    v90);
  if ( v89 )
  {
    v3 = sub_2213BB4(v89, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( LODWORD(v47->max_length) <= 5 )
    goto LABEL_74;
  v47->m_Items[5] = v89;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->m_Items[5], (int32_t)v89, v91, v92, v93, v94, v95, v96);
  v97 = (ShopHelpItemInfo_o *)sub_2213CCC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v97,
    6,
    (System_String_o *)StringLiteral_12640/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21548/*"img_shop_1"*/,
    1,
    v98);
  if ( v97 )
  {
    v3 = sub_2213BB4(v97, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( LODWORD(v47->max_length) <= 6 )
    goto LABEL_74;
  v47->m_Items[6] = v97;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->m_Items[6], (int32_t)v97, v99, v100, v101, v102, v103, v104);
  v105 = (ShopHelpItemInfo_o *)sub_2213CCC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v105,
    7,
    (System_String_o *)StringLiteral_12636/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21551/*"img_shop_12"*/,
    1,
    v106);
  if ( v105 )
  {
    v3 = sub_2213BB4(v105, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( (v47->max_length & 0xFFFFFFF8) == 0 )
    goto LABEL_74;
  v47->m_Items[7] = v105;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->m_Items[7], (int32_t)v105, v107, v108, v109, v110, v111, v112);
  v113 = (ShopHelpItemInfo_o *)sub_2213CCC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v113,
    8,
    (System_String_o *)StringLiteral_12627/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21552/*"img_shop_13"*/,
    1,
    v114);
  if ( v113 )
  {
    v3 = sub_2213BB4(v113, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( LODWORD(v47->max_length) <= 8 )
    goto LABEL_74;
  v47->m_Items[8] = v113;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->m_Items[8], (int32_t)v113, v115, v116, v117, v118, v119, v120);
  v121 = (ShopHelpItemInfo_o *)sub_2213CCC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v121,
    11,
    (System_String_o *)StringLiteral_12624/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21549/*"img_shop_10"*/,
    1,
    v122);
  if ( v121 )
  {
    v3 = sub_2213BB4(v121, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( LODWORD(v47->max_length) <= 9 )
    goto LABEL_74;
  v47->m_Items[9] = v121;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->m_Items[9], (int32_t)v121, v123, v124, v125, v126, v127, v128);
  v129 = (ShopHelpItemInfo_o *)sub_2213CCC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v129,
    13,
    (System_String_o *)StringLiteral_12637/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21553/*"img_shop_14"*/,
    2,
    v130);
  if ( v129 )
  {
    v3 = sub_2213BB4(v129, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( LODWORD(v47->max_length) <= 0xA )
    goto LABEL_74;
  v47->m_Items[10] = v129;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->m_Items[10], (int32_t)v129, v131, v132, v133, v134, v135, v136);
  v137 = (ShopHelpItemInfo_o *)sub_2213CCC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v137,
    12,
    (System_String_o *)StringLiteral_12641/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21564/*"img_shop_7"*/,
    1,
    v138);
  if ( v137 )
  {
    v3 = sub_2213BB4(v137, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( LODWORD(v47->max_length) <= 0xB )
    goto LABEL_74;
  v47->m_Items[11] = v137;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->m_Items[11], (int32_t)v137, v139, v140, v141, v142, v143, v144);
  v145 = (ShopHelpItemInfo_o *)sub_2213CCC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v145,
    14,
    (System_String_o *)StringLiteral_12630/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21554/*"img_shop_15"*/,
    1,
    v146);
  if ( v145 )
  {
    v3 = sub_2213BB4(v145, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( LODWORD(v47->max_length) <= 0xC )
    goto LABEL_74;
  v47->m_Items[12] = v145;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->m_Items[12], (int32_t)v145, v147, v148, v149, v150, v151, v152);
  v153 = (ShopHelpItemInfo_o *)sub_2213CCC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v153,
    15,
    (System_String_o *)StringLiteral_12642/*"SHOP_HELP_SVT_COSTUME_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21555/*"img_shop_16"*/,
    2,
    v154);
  if ( v153 )
  {
    v3 = sub_2213BB4(v153, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( LODWORD(v47->max_length) <= 0xD )
    goto LABEL_74;
  v47->m_Items[13] = v153;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->m_Items[13], (int32_t)v153, v155, v156, v157, v158, v159, v160);
  v161 = (ShopHelpItemInfo_o *)sub_2213CCC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v161,
    17,
    (System_String_o *)StringLiteral_12626/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21556/*"img_shop_17"*/,
    2,
    v162);
  if ( v161 )
  {
    v3 = sub_2213BB4(v161, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( LODWORD(v47->max_length) <= 0xE )
    goto LABEL_74;
  v47->m_Items[14] = v161;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->m_Items[14], (int32_t)v161, v163, v164, v165, v166, v167, v168);
  v169 = (ShopHelpItemInfo_o *)sub_2213CCC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v169,
    18,
    (System_String_o *)StringLiteral_12632/*"SHOP_HELP_PURE_PRI_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21557/*"img_shop_18"*/,
    1,
    v170);
  if ( v169 )
  {
    v3 = sub_2213BB4(v169, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( (v47->max_length & 0xFFFFFFF0) == 0 )
    goto LABEL_74;
  v47->m_Items[15] = v169;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->m_Items[15], (int32_t)v169, v171, v172, v173, v174, v175, v176);
  v177 = (ShopHelpItemInfo_o *)sub_2213CCC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v177,
    19,
    (System_String_o *)StringLiteral_12643/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21558/*"img_shop_20"*/,
    2,
    v178);
  if ( v177 )
  {
    v3 = sub_2213BB4(v177, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( LODWORD(v47->max_length) <= 0x10 )
    goto LABEL_74;
  v47->m_Items[16] = v177;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->m_Items[16], (int32_t)v177, v179, v180, v181, v182, v183, v184);
  v185 = (ShopHelpItemInfo_o *)sub_2213CCC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v185,
    20,
    (System_String_o *)StringLiteral_12634/*"SHOP_HELP_REVIVAL_ITEM_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21559/*"img_shop_21"*/,
    2,
    v186);
  if ( v185 )
  {
    v3 = sub_2213BB4(v185, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( LODWORD(v47->max_length) <= 0x11 )
    goto LABEL_74;
  v47->m_Items[17] = v185;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->m_Items[17], (int32_t)v185, v187, v188, v189, v190, v191, v192);
  v193 = (ShopHelpItemInfo_o *)sub_2213CCC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v193,
    21,
    (System_String_o *)StringLiteral_12629/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21560/*"img_shop_22"*/,
    2,
    v194);
  if ( v193 )
  {
    v3 = sub_2213BB4(v193, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( LODWORD(v47->max_length) <= 0x12 )
    goto LABEL_74;
  v47->m_Items[18] = v193;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->m_Items[18], (int32_t)v193, v195, v196, v197, v198, v199, v200);
  v201 = (ShopHelpItemInfo_o *)sub_2213CCC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v201,
    22,
    (System_String_o *)StringLiteral_12625/*"SHOP_HELP_CLASS_BOARD_RESET_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21561/*"img_shop_23"*/,
    3,
    v202);
  if ( v201 )
  {
    v3 = sub_2213BB4(v201, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( LODWORD(v47->max_length) <= 0x13 )
    goto LABEL_74;
  v47->m_Items[19] = v201;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->m_Items[19], (int32_t)v201, v203, v204, v205, v206, v207, v208);
  v209 = (ShopHelpItemInfo_o *)sub_2213CCC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v209, 23, (System_String_o *)StringLiteral_1/*""*/, (System_String_o *)StringLiteral_21547/*"img_shop_0"*/, 1, v210);
  if ( v209 )
  {
    v3 = sub_2213BB4(v209, v47->obj.klass->_1.element_class);
    if ( !v3 )
    {
LABEL_75:
      v230 = sub_2213D00(v3, v56);
      sub_2213BA0(v230, 0);
    }
  }
  if ( LODWORD(v47->max_length) <= 0x14 )
LABEL_74:
    sub_2213CE4(v3);
  v47->m_Items[20] = v209;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->m_Items[20], (int32_t)v209, v211, v212, v213, v214, v215, v216);
  this->fields.itemInfoList = v47;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemInfoList,
    (int32_t)v47,
    v217,
    v218,
    v219,
    v220,
    v221,
    v222);
  v223 = (System_Array_o *)sub_2213B20(ShopHelpItemInfo_ItemKind___TypeInfo, 19);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v223,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__516CE5EF4CC7A81C9A872419689A9764E2EBEB4282A29E143CD06FEBDE26A4FC,
    0);
  this->fields.kinds = (struct ShopHelpItemInfo_ItemKind_array *)v223;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.kinds,
    (int32_t)v223,
    v224,
    v225,
    v226,
    v227,
    v228,
    v229);
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ShopHelpListViewManager__CallOnFadeOut(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_o *onFadeOut; // x19

  onFadeOut = this->fields.onFadeOut;
  if ( onFadeOut )
  {
    this->fields.onFadeOut = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onFadeOut, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))onFadeOut->fields.invoke_impl)(
      onFadeOut->fields.method_code,
      onFadeOut->fields.method);
  }
}


void ShopHelpListViewManager__CloseHelpDialog(
        ShopHelpListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ShopHelpMenu_o *baseDialog; // x20
  System_Action_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_596C866 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ShopHelpListViewManager_CallOnFadeOut__);
    byte_596C866 = 1;
  }
  this->fields.onFadeOut = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onFadeOut,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  baseDialog = this->fields.baseDialog;
  v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ShopHelpListViewManager_CallOnFadeOut__, 0);
  if ( !baseDialog )
    sub_2213CDC(v12, v13);
  ShopHelpMenu__Close(baseDialog, v11, 0);
}


void ShopHelpListViewManager__CreateList(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v9; // x1
  ShopHelpMenu_o *baseDialog; // x0
  struct ShopHelpItemInfo_ItemKind_array *kinds; // x8
  __int64 v12; // x2
  struct ShopHelpItemInfo_ItemKind_array *v13; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x25
  int v16; // w21
  BalanceConfig_c *v17; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  ShopRootConstants_c *v19; // x0
  struct ShopHelpItemInfo_array *itemInfoList; // x10
  il2cpp_array_size_t v21; // x9
  __int64 v22; // x8
  __int64 v23; // x9
  ShopHelpItemInfo_o **m_Items; // x10
  ShopHelpItemInfo_o *v25; // x22
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t size; // w23
  __int64 v28; // x21
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x0

  if ( (byte_596C865 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CoinRoomUtility_TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ShopMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&ShopHelpListViewItem_TypeInfo);
    sub_2213A60(&ShopRootConstants_TypeInfo);
    byte_596C865 = 1;
  }
  this->fields.onFadeOut = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onFadeOut, 0, v2, v3, v4, v5, v6, v7);
  baseDialog = this->fields.baseDialog;
  if ( !baseDialog
    || (ShopHelpMenu__Open(baseDialog, 0), (kinds = this->fields.kinds) == 0)
    || (ListViewManager__CreateList((ListViewManager_o *)this, kinds->max_length, 0), (v13 = this->fields.kinds) == 0) )
  {
LABEL_48:
    sub_2213CDC(baseDialog, v9);
  }
  max_length = v13->max_length;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
LABEL_47:
        sub_2213CE4(baseDialog);
      v16 = v13->m_Items[i];
      if ( v16 > 16 )
      {
        if ( v16 == 17 )
        {
          if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v9, v12);
          baseDialog = (ShopHelpMenu_o *)CoinRoomUtility__IsTargetQuestClear(0);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_45;
        }
        else if ( v16 == 22 )
        {
          v17 = BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v12);
            v17 = BalanceConfig_TypeInfo;
          }
          ClassBoardReleaseQuestId = v17->static_fields->ClassBoardReleaseQuestId;
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9, v12);
          baseDialog = (ShopHelpMenu_o *)CondType__IsQuestClear_47284152(ClassBoardReleaseQuestId, -1, 0, 0);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_45;
        }
      }
      else if ( v16 == 15 )
      {
        v19 = ShopRootConstants_TypeInfo;
        if ( !*(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v9, v12);
        baseDialog = (ShopHelpMenu_o *)ShopRootConstants__IsSvtCostumeShopOpen((const MethodInfo *)v19);
        if ( ((unsigned __int8)baseDialog & 1) == 0 )
          goto LABEL_45;
      }
      else if ( v16 == 16 )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v12);
        baseDialog = (ShopHelpMenu_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopMaster___);
        if ( !baseDialog )
          goto LABEL_48;
        baseDialog = (ShopHelpMenu_o *)ShopMaster__IsEnableEventShop_49892788((ShopMaster_o *)baseDialog, 0);
        if ( ((unsigned __int8)baseDialog & 1) == 0 )
          goto LABEL_45;
      }
      itemInfoList = this->fields.itemInfoList;
      if ( !itemInfoList )
        goto LABEL_48;
      v21 = itemInfoList->max_length;
      if ( (int)v21 >= 1 )
      {
        v22 = (unsigned int)v21 & ~((int)v21 >> 31);
        v23 = (unsigned int)itemInfoList->max_length;
        m_Items = itemInfoList->m_Items;
        while ( 1 )
        {
          if ( !v23 )
            goto LABEL_47;
          v25 = *m_Items;
          if ( *m_Items )
          {
            if ( v25->fields._Kind_k__BackingField == v16 )
              break;
          }
          --v22;
          ++m_Items;
          --v23;
          if ( !v22 )
            goto LABEL_45;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          goto LABEL_48;
        size = itemList->fields._size;
        v28 = sub_2213CCC(ShopHelpListViewItem_TypeInfo);
        ListViewItem___ctor_50819428((ListViewItem_o *)v28, size, 0);
        *(_QWORD *)(v28 + 120) = v25;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 120), (int32_t)v25, v29, v30, v31, v32, v33, v34);
        items = itemList->fields._items;
        v42 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          goto LABEL_48;
        v43 = itemList->fields._size;
        if ( (unsigned int)v43 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v28,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v44 = &items->obj.klass + v43;
          itemList->fields._size = v43 + 1;
          v44[4] = (Il2CppClass *)v28;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v44 + 4), v28, v35, v36, v37, v38, v39, v40);
        }
      }
LABEL_45:
      LODWORD(max_length) = v13->max_length;
    }
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void ShopHelpListViewManager__DestroyList(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


UnityEngine_Texture2D_o *ShopHelpListViewManager__GetAssetStorageTexture2D(
        ShopHelpListViewManager_o *this,
        System_String_o *path,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  __int64 v7; // x1

  if ( (byte_596C863 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596C863 = 1;
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, path, name);
  AssetStorage = AssetManager__getAssetStorage(path, 0);
  if ( !AssetStorage )
    sub_2213CDC(0, v7);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__58532980(
                                      AssetStorage,
                                      name,
                                      (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
}


void ShopHelpListViewManager__LoadBaseSprite(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  System_String_array *helpBasePaths; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x1
  __int64 v6; // x2

  if ( (byte_596C861 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__);
    byte_596C861 = 1;
  }
  if ( !this->fields.initMode )
  {
    helpBasePaths = this->fields.helpBasePaths;
    this->fields.initMode = 1;
    v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5, v6);
    AssetManager__loadAssetStorage_47503780(helpBasePaths, v4, 1, 0);
  }
}


void ShopHelpListViewManager__ReleaseAssetStorages(
        ShopHelpListViewManager_o *this,
        System_String_array *paths,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v5; // x21
  System_String_o *v6; // x20

  if ( (byte_596C864 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_2213A60(&AssetManager_TypeInfo);
    byte_596C864 = 1;
  }
  if ( !paths )
    sub_2213CDC(this, paths);
  max_length = paths->max_length;
  if ( (int)max_length >= 1 )
  {
    v5 = 0;
    do
    {
      if ( v5 >= (unsigned int)max_length )
        sub_2213CE4(this);
      v6 = paths->m_Items[v5];
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, paths, method);
      AssetManager__releaseAssetStorage(v6, 0);
      LODWORD(max_length) = paths->max_length;
      ++v5;
    }
    while ( (__int64)v5 < (int)max_length );
  }
}


void ShopHelpListViewManager__ReleaseBaseSprite(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ShopHelpListViewManager_o *v3; // x19
  __int64 v4; // x1
  UnityEngine_GameObject_o *BaseWindow; // x0

  v3 = this;
  if ( (byte_596C862 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_2213A60(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_596C862 = 1;
  }
  if ( v3->fields.initMode == 2 )
  {
    ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
    BaseWindow = v3->fields.BaseWindow;
    if ( !BaseWindow
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0)) == 0
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)BaseWindow,
                                                     (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0 )
    {
      sub_2213CDC(BaseWindow, v4);
    }
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))BaseWindow->klass[1].vtable._3_ToString.method)(
      BaseWindow,
      0,
      BaseWindow->klass[2]._1.image);
  }
  v3->fields.initMode = 0;
}


void ShopHelpListViewManager__SetObjectItem(
        ShopHelpListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_596C867 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_2213A60(&ShopHelpListViewObject_TypeInfo);
    byte_596C867 = 1;
  }
  if ( !obj
    || (naturalAligment = ShopHelpListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ShopHelpListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ShopHelpListViewObject_TypeInfo )
  {
    sub_2213CDC(this, obj);
  }
  ShopHelpListViewObject__Init((ShopHelpListViewObject_o *)obj, 2, (const MethodInfo *)item);
}


void ShopHelpListViewManager___LoadBaseSprite_b__9_0(ShopHelpListViewManager_o *this, const MethodInfo *method)
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

  v3 = this;
  if ( (byte_596C869 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&StringLiteral_5128/*"Custom/SpriteWithMask"*/);
    this = (ShopHelpListViewManager_o *)sub_2213A60(&StringLiteral_16919/*"_MaskTex"*/);
    byte_596C869 = 1;
  }
  if ( v3->fields.initMode == 1 )
  {
    v4 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5128/*"Custom/SpriteWithMask"*/, 0);
    v5 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v5, v4, 0);
    BaseWindow = v3->fields.BaseWindow;
    if ( BaseWindow )
    {
      BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0);
      if ( BaseWindow )
      {
        BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)BaseWindow,
                                                   (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UITexture___);
        if ( BaseWindow )
        {
          BaseWindow = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, UnityEngine_Material_o *, Il2CppMethodPointer))BaseWindow->klass[1].vtable._1_Finalize.method)(
                                                     BaseWindow,
                                                     v5,
                                                     BaseWindow->klass[1].vtable._2_GetHashCode.methodPtr);
          helpBasePaths = v3->fields.helpBasePaths;
          if ( helpBasePaths )
          {
            if ( !LODWORD(helpBasePaths->max_length) )
              goto LABEL_19;
            helpBaseNames = v3->fields.helpBaseNames;
            if ( helpBaseNames )
            {
              if ( !LODWORD(helpBaseNames->max_length) )
                goto LABEL_19;
              BaseWindow = (UnityEngine_GameObject_o *)ShopHelpListViewManager__GetAssetStorageTexture2D(
                                                         (ShopHelpListViewManager_o *)BaseWindow,
                                                         helpBasePaths->m_Items[0],
                                                         helpBaseNames->m_Items[0],
                                                         v8);
              if ( v5 )
              {
                UnityEngine_Material__set_mainTexture(v5, (UnityEngine_Texture_o *)BaseWindow, 0);
                v12 = v3->fields.helpBasePaths;
                if ( v12 )
                {
                  if ( (v12->max_length & 0xFFFFFFFE) == 0 )
                    goto LABEL_19;
                  v13 = v3->fields.helpBaseNames;
                  if ( v13 )
                  {
                    if ( (v13->max_length & 0xFFFFFFFE) != 0 )
                    {
                      AssetStorageTexture2D = (UnityEngine_Texture_o *)ShopHelpListViewManager__GetAssetStorageTexture2D(
                                                                         (ShopHelpListViewManager_o *)BaseWindow,
                                                                         v12->m_Items[1],
                                                                         v13->m_Items[1],
                                                                         v11);
                      UnityEngine_Material__SetTexture(
                        v5,
                        (System_String_o *)StringLiteral_16919/*"_MaskTex"*/,
                        AssetStorageTexture2D,
                        0);
                      v3->fields.initMode = 2;
                      return;
                    }
LABEL_19:
                    sub_2213CE4(BaseWindow);
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_2213CDC(BaseWindow, v6);
  }
  ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
}