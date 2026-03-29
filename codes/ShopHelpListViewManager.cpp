void ShopHelpListViewManager___ctor(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x20
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  __int64 v32; // x20
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w1
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct ShopHelpItemInfo_array *v47; // x20
  ShopHelpItemInfo_o *v48; // x21
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  il2cpp_array_size_t *p_max_length; // x23
  ShopHelpItemInfo_o *v56; // x21
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  ShopHelpItemInfo_o *v63; // x21
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  ShopHelpItemInfo_o *v70; // x21
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  ShopHelpItemInfo_o *v77; // x21
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  ShopHelpItemInfo_o *v84; // x21
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  ShopHelpItemInfo_o *v91; // x21
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  ShopHelpItemInfo_o *v98; // x21
  int32_t v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  ShopHelpItemInfo_o *v105; // x21
  int32_t v106; // w2
  int32_t v107; // w3
  System_String_o *v108; // x4
  int32_t v109; // w5
  int64_t v110; // x6
  System_String_o *v111; // x7
  ShopHelpItemInfo_o *v112; // x21
  int32_t v113; // w2
  int32_t v114; // w3
  System_String_o *v115; // x4
  int32_t v116; // w5
  int64_t v117; // x6
  System_String_o *v118; // x7
  ShopHelpItemInfo_o *v119; // x21
  int32_t v120; // w2
  int32_t v121; // w3
  System_String_o *v122; // x4
  int32_t v123; // w5
  int64_t v124; // x6
  System_String_o *v125; // x7
  ShopHelpItemInfo_o *v126; // x21
  int32_t v127; // w2
  int32_t v128; // w3
  System_String_o *v129; // x4
  int32_t v130; // w5
  int64_t v131; // x6
  System_String_o *v132; // x7
  ShopHelpItemInfo_o *v133; // x21
  int32_t v134; // w2
  int32_t v135; // w3
  System_String_o *v136; // x4
  int32_t v137; // w5
  int64_t v138; // x6
  System_String_o *v139; // x7
  ShopHelpItemInfo_o *v140; // x21
  int32_t v141; // w2
  int32_t v142; // w3
  System_String_o *v143; // x4
  int32_t v144; // w5
  int64_t v145; // x6
  System_String_o *v146; // x7
  ShopHelpItemInfo_o *v147; // x21
  int32_t v148; // w2
  int32_t v149; // w3
  System_String_o *v150; // x4
  int32_t v151; // w5
  int64_t v152; // x6
  System_String_o *v153; // x7
  ShopHelpItemInfo_o *v154; // x21
  int32_t v155; // w2
  int32_t v156; // w3
  System_String_o *v157; // x4
  int32_t v158; // w5
  int64_t v159; // x6
  System_String_o *v160; // x7
  ShopHelpItemInfo_o *v161; // x21
  int32_t v162; // w2
  int32_t v163; // w3
  System_String_o *v164; // x4
  int32_t v165; // w5
  int64_t v166; // x6
  System_String_o *v167; // x7
  ShopHelpItemInfo_o *v168; // x21
  int32_t v169; // w2
  int32_t v170; // w3
  System_String_o *v171; // x4
  int32_t v172; // w5
  int64_t v173; // x6
  System_String_o *v174; // x7
  ShopHelpItemInfo_o *v175; // x21
  int32_t v176; // w2
  int32_t v177; // w3
  System_String_o *v178; // x4
  int32_t v179; // w5
  int64_t v180; // x6
  System_String_o *v181; // x7
  ShopHelpItemInfo_o *v182; // x21
  int32_t v183; // w2
  int32_t v184; // w3
  System_String_o *v185; // x4
  int32_t v186; // w5
  int64_t v187; // x6
  System_String_o *v188; // x7
  ShopHelpItemInfo_o *v189; // x21
  int32_t v190; // w2
  int32_t v191; // w3
  System_String_o *v192; // x4
  int32_t v193; // w5
  int64_t v194; // x6
  System_String_o *v195; // x7
  int32_t v196; // w2
  int32_t v197; // w3
  System_String_o *v198; // x4
  int32_t v199; // w5
  int64_t v200; // x6
  System_String_o *v201; // x7
  System_Array_o *v202; // x20
  int32_t v203; // w2
  int32_t v204; // w3
  System_String_o *v205; // x4
  int32_t v206; // w5
  int64_t v207; // x6
  System_String_o *v208; // x7
  __int64 v209; // x0

  if ( (byte_4D2CB59 & 1) == 0 )
  {
    sub_1C93AD4(&ShopHelpItemInfo_ItemKind___TypeInfo);
    sub_1C93AD4(&ShopHelpItemInfo___TypeInfo);
    sub_1C93AD4(&ShopHelpItemInfo_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&Field__PrivateImplementationDetails__516CE5EF4CC7A81C9A872419689A9764E2EBEB4282A29E143CD06FEBDE26A4FC);
    sub_1C93AD4(&StringLiteral_12207/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/);
    sub_1C93AD4(&StringLiteral_12214/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/);
    sub_1C93AD4(&StringLiteral_12203/*"SHOP_HELP_PURE_PRI_EXPLANATION"*/);
    sub_1C93AD4(&StringLiteral_14714/*"Tutorial/tutorial_alpha"*/);
    sub_1C93AD4(&StringLiteral_20793/*"img_shop_15"*/);
    sub_1C93AD4(&StringLiteral_20803/*"img_shop_7"*/);
    sub_1C93AD4(&StringLiteral_20789/*"img_shop_11"*/);
    sub_1C93AD4(&StringLiteral_12213/*"SHOP_HELP_SVT_COSTUME_EXPLANATION"*/);
    sub_1C93AD4(&StringLiteral_12199/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/);
    sub_1C93AD4(&StringLiteral_12206/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/);
    sub_1C93AD4(&StringLiteral_20799/*"img_shop_22"*/);
    sub_1C93AD4(&StringLiteral_12209/*"SHOP_HELP_START_UP_SUMMON"*/);
    sub_1C93AD4(&StringLiteral_24544/*"tutorial_0006"*/);
    sub_1C93AD4(&StringLiteral_12195/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/);
    sub_1C93AD4(&StringLiteral_12202/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/);
    sub_1C93AD4(&StringLiteral_12198/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/);
    sub_1C93AD4(&StringLiteral_12205/*"SHOP_HELP_REVIVAL_ITEM_EXPLANATION"*/);
    sub_1C93AD4(&StringLiteral_20800/*"img_shop_23"*/);
    sub_1C93AD4(&StringLiteral_20791/*"img_shop_13"*/);
    sub_1C93AD4(&StringLiteral_20805/*"img_shop_9"*/);
    sub_1C93AD4(&StringLiteral_12211/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/);
    sub_1C93AD4(&StringLiteral_12212/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/);
    sub_1C93AD4(&StringLiteral_20788/*"img_shop_10"*/);
    sub_1C93AD4(&StringLiteral_12201/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/);
    sub_1C93AD4(&StringLiteral_20794/*"img_shop_16"*/);
    sub_1C93AD4(&StringLiteral_20795/*"img_shop_17"*/);
    sub_1C93AD4(&StringLiteral_20797/*"img_shop_20"*/);
    sub_1C93AD4(&StringLiteral_20804/*"img_shop_8"*/);
    sub_1C93AD4(&StringLiteral_20802/*"img_shop_4"*/);
    sub_1C93AD4(&StringLiteral_12197/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/);
    sub_1C93AD4(&StringLiteral_20798/*"img_shop_21"*/);
    sub_1C93AD4(&StringLiteral_20796/*"img_shop_18"*/);
    sub_1C93AD4(&StringLiteral_12208/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/);
    sub_1C93AD4(&StringLiteral_12200/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/);
    sub_1C93AD4(&StringLiteral_20801/*"img_shop_3"*/);
    sub_1C93AD4(&StringLiteral_20786/*"img_shop_0"*/);
    sub_1C93AD4(&StringLiteral_14713/*"Tutorial/tutorial_0006"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_20792/*"img_shop_14"*/);
    sub_1C93AD4(&StringLiteral_12210/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/);
    sub_1C93AD4(&StringLiteral_20787/*"img_shop_1"*/);
    sub_1C93AD4(&StringLiteral_24545/*"tutorial_alpha"*/);
    sub_1C93AD4(&StringLiteral_12204/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/);
    sub_1C93AD4(&StringLiteral_20790/*"img_shop_12"*/);
    sub_1C93AD4(&StringLiteral_12196/*"SHOP_HELP_CLASS_BOARD_RESET_EXPLANATION"*/);
    byte_4D2CB59 = 1;
  }
  v3 = sub_1C93B7C(string___TypeInfo, 2);
  if ( !v3 )
    goto LABEL_76;
  v11 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_74;
  v12 = StringLiteral_14713/*"Tutorial/tutorial_0006"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_14713/*"Tutorial/tutorial_0006"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), v12, v5, v6, v7, v8, v9, v10);
  if ( *(_DWORD *)(v11 + 24) <= 1u )
    goto LABEL_74;
  v19 = StringLiteral_14714/*"Tutorial/tutorial_alpha"*/;
  *(_QWORD *)(v11 + 40) = StringLiteral_14714/*"Tutorial/tutorial_alpha"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 40), v19, v13, v14, v15, v16, v17, v18);
  this->fields.helpBasePaths = (struct System_String_array *)v11;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.helpBasePaths, v11, v20, v21, v22, v23, v24, v25);
  v3 = sub_1C93B7C(string___TypeInfo, 2);
  if ( !v3 )
    goto LABEL_76;
  v32 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_74;
  v33 = StringLiteral_24544/*"tutorial_0006"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_24544/*"tutorial_0006"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), v33, v26, v27, v28, v29, v30, v31);
  if ( *(_DWORD *)(v32 + 24) <= 1u )
    goto LABEL_74;
  v40 = StringLiteral_24545/*"tutorial_alpha"*/;
  *(_QWORD *)(v32 + 40) = StringLiteral_24545/*"tutorial_alpha"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v32 + 40), v40, v34, v35, v36, v37, v38, v39);
  this->fields.helpBaseNames = (struct System_String_array *)v32;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.helpBaseNames, v32, v41, v42, v43, v44, v45, v46);
  v47 = (struct ShopHelpItemInfo_array *)sub_1C93B7C(ShopHelpItemInfo___TypeInfo, 21);
  v48 = (ShopHelpItemInfo_o *)sub_1C93D20(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v48, 1, (System_String_o *)StringLiteral_12199/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20804/*"img_shop_8"*/, 2, 0);
  if ( !v47 )
LABEL_76:
    sub_1C93D2C(v3, v4);
  if ( v48 )
  {
    v3 = sub_1C93C10(v48, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  p_max_length = &v47->max_length;
  if ( !LODWORD(v47->max_length) )
    goto LABEL_74;
  v47->m_Items[0] = v48;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v47->m_Items, (int32_t)v48, v49, v50, v51, v52, v53, v54);
  v56 = (ShopHelpItemInfo_o *)sub_1C93D20(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v56, 16, (System_String_o *)StringLiteral_12209/*"SHOP_HELP_START_UP_SUMMON"*/, (System_String_o *)StringLiteral_20795/*"img_shop_17"*/, 2, 0);
  if ( v56 )
  {
    v3 = sub_1C93C10(v56, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 1u )
    goto LABEL_74;
  v47->m_Items[1] = v56;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v47->m_Items[1], (int32_t)v56, v57, v58, v59, v60, v61, v62);
  v63 = (ShopHelpItemInfo_o *)sub_1C93D20(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v63, 2, (System_String_o *)StringLiteral_12206/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/, (System_String_o *)StringLiteral_20802/*"img_shop_4"*/, 2, 0);
  if ( v63 )
  {
    v3 = sub_1C93C10(v63, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 2u )
    goto LABEL_74;
  v47->m_Items[2] = v63;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v47->m_Items[2], (int32_t)v63, v64, v65, v66, v67, v68, v69);
  v70 = (ShopHelpItemInfo_o *)sub_1C93D20(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v70, 3, (System_String_o *)StringLiteral_12202/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20801/*"img_shop_3"*/, 1, 0);
  if ( v70 )
  {
    v3 = sub_1C93C10(v70, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 3u )
    goto LABEL_74;
  v47->m_Items[3] = v70;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v47->m_Items[3], (int32_t)v70, v71, v72, v73, v74, v75, v76);
  v77 = (ShopHelpItemInfo_o *)sub_1C93D20(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v77, 4, (System_String_o *)StringLiteral_12204/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20789/*"img_shop_11"*/, 2, 0);
  if ( v77 )
  {
    v3 = sub_1C93C10(v77, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 4u )
    goto LABEL_74;
  v47->m_Items[4] = v77;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v47->m_Items[4], (int32_t)v77, v78, v79, v80, v81, v82, v83);
  v84 = (ShopHelpItemInfo_o *)sub_1C93D20(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v84, 5, (System_String_o *)StringLiteral_12210/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20805/*"img_shop_9"*/, 1, 0);
  if ( v84 )
  {
    v3 = sub_1C93C10(v84, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 5u )
    goto LABEL_74;
  v47->m_Items[5] = v84;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v47->m_Items[5], (int32_t)v84, v85, v86, v87, v88, v89, v90);
  v91 = (ShopHelpItemInfo_o *)sub_1C93D20(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v91, 6, (System_String_o *)StringLiteral_12211/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/, (System_String_o *)StringLiteral_20787/*"img_shop_1"*/, 1, 0);
  if ( v91 )
  {
    v3 = sub_1C93C10(v91, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 6u )
    goto LABEL_74;
  v47->m_Items[6] = v91;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v47->m_Items[6], (int32_t)v91, v92, v93, v94, v95, v96, v97);
  v98 = (ShopHelpItemInfo_o *)sub_1C93D20(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v98, 7, (System_String_o *)StringLiteral_12207/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/, (System_String_o *)StringLiteral_20790/*"img_shop_12"*/, 1, 0);
  if ( v98 )
  {
    v3 = sub_1C93C10(v98, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 7u )
    goto LABEL_74;
  v47->m_Items[7] = v98;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v47->m_Items[7], (int32_t)v98, v99, v100, v101, v102, v103, v104);
  v105 = (ShopHelpItemInfo_o *)sub_1C93D20(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v105, 8, (System_String_o *)StringLiteral_12198/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/, (System_String_o *)StringLiteral_20791/*"img_shop_13"*/, 1, 0);
  if ( v105 )
  {
    v3 = sub_1C93C10(v105, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 8u )
    goto LABEL_74;
  v47->m_Items[8] = v105;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v47->m_Items[8], (int32_t)v105, v106, v107, v108, v109, v110, v111);
  v112 = (ShopHelpItemInfo_o *)sub_1C93D20(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v112,
    11,
    (System_String_o *)StringLiteral_12195/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20788/*"img_shop_10"*/,
    1,
    0);
  if ( v112 )
  {
    v3 = sub_1C93C10(v112, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 9u )
    goto LABEL_74;
  v47->m_Items[9] = v112;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v47->m_Items[9], (int32_t)v112, v113, v114, v115, v116, v117, v118);
  v119 = (ShopHelpItemInfo_o *)sub_1C93D20(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v119,
    13,
    (System_String_o *)StringLiteral_12208/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20792/*"img_shop_14"*/,
    2,
    0);
  if ( v119 )
  {
    v3 = sub_1C93C10(v119, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0xAu )
    goto LABEL_74;
  v47->m_Items[10] = v119;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v47->m_Items[10], (int32_t)v119, v120, v121, v122, v123, v124, v125);
  v126 = (ShopHelpItemInfo_o *)sub_1C93D20(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v126,
    12,
    (System_String_o *)StringLiteral_12212/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20803/*"img_shop_7"*/,
    1,
    0);
  if ( v126 )
  {
    v3 = sub_1C93C10(v126, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0xBu )
    goto LABEL_74;
  v47->m_Items[11] = v126;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v47->m_Items[11], (int32_t)v126, v127, v128, v129, v130, v131, v132);
  v133 = (ShopHelpItemInfo_o *)sub_1C93D20(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v133,
    14,
    (System_String_o *)StringLiteral_12201/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20793/*"img_shop_15"*/,
    1,
    0);
  if ( v133 )
  {
    v3 = sub_1C93C10(v133, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0xCu )
    goto LABEL_74;
  v47->m_Items[12] = v133;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v47->m_Items[12], (int32_t)v133, v134, v135, v136, v137, v138, v139);
  v140 = (ShopHelpItemInfo_o *)sub_1C93D20(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v140,
    15,
    (System_String_o *)StringLiteral_12213/*"SHOP_HELP_SVT_COSTUME_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20794/*"img_shop_16"*/,
    2,
    0);
  if ( v140 )
  {
    v3 = sub_1C93C10(v140, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0xDu )
    goto LABEL_74;
  v47->m_Items[13] = v140;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v47->m_Items[13], (int32_t)v140, v141, v142, v143, v144, v145, v146);
  v147 = (ShopHelpItemInfo_o *)sub_1C93D20(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v147,
    17,
    (System_String_o *)StringLiteral_12197/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20795/*"img_shop_17"*/,
    2,
    0);
  if ( v147 )
  {
    v3 = sub_1C93C10(v147, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0xEu )
    goto LABEL_74;
  v47->m_Items[14] = v147;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v47->m_Items[14], (int32_t)v147, v148, v149, v150, v151, v152, v153);
  v154 = (ShopHelpItemInfo_o *)sub_1C93D20(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v154,
    18,
    (System_String_o *)StringLiteral_12203/*"SHOP_HELP_PURE_PRI_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20796/*"img_shop_18"*/,
    1,
    0);
  if ( v154 )
  {
    v3 = sub_1C93C10(v154, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0xFu )
    goto LABEL_74;
  v47->m_Items[15] = v154;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v47->m_Items[15], (int32_t)v154, v155, v156, v157, v158, v159, v160);
  v161 = (ShopHelpItemInfo_o *)sub_1C93D20(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v161,
    19,
    (System_String_o *)StringLiteral_12214/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20797/*"img_shop_20"*/,
    2,
    0);
  if ( v161 )
  {
    v3 = sub_1C93C10(v161, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0x10u )
    goto LABEL_74;
  v47->m_Items[16] = v161;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v47->m_Items[16], (int32_t)v161, v162, v163, v164, v165, v166, v167);
  v168 = (ShopHelpItemInfo_o *)sub_1C93D20(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v168,
    20,
    (System_String_o *)StringLiteral_12205/*"SHOP_HELP_REVIVAL_ITEM_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20798/*"img_shop_21"*/,
    2,
    0);
  if ( v168 )
  {
    v3 = sub_1C93C10(v168, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0x11u )
    goto LABEL_74;
  v47->m_Items[17] = v168;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v47->m_Items[17], (int32_t)v168, v169, v170, v171, v172, v173, v174);
  v175 = (ShopHelpItemInfo_o *)sub_1C93D20(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v175,
    21,
    (System_String_o *)StringLiteral_12200/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20799/*"img_shop_22"*/,
    2,
    0);
  if ( v175 )
  {
    v3 = sub_1C93C10(v175, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0x12u )
    goto LABEL_74;
  v47->m_Items[18] = v175;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v47->m_Items[18], (int32_t)v175, v176, v177, v178, v179, v180, v181);
  v182 = (ShopHelpItemInfo_o *)sub_1C93D20(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v182,
    22,
    (System_String_o *)StringLiteral_12196/*"SHOP_HELP_CLASS_BOARD_RESET_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20800/*"img_shop_23"*/,
    3,
    0);
  if ( v182 )
  {
    v3 = sub_1C93C10(v182, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0x13u )
    goto LABEL_74;
  v47->m_Items[19] = v182;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v47->m_Items[19], (int32_t)v182, v183, v184, v185, v186, v187, v188);
  v189 = (ShopHelpItemInfo_o *)sub_1C93D20(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v189, 23, (System_String_o *)StringLiteral_1/*""*/, (System_String_o *)StringLiteral_20786/*"img_shop_0"*/, 1, 0);
  if ( v189 )
  {
    v3 = sub_1C93C10(v189, v47->obj.klass->_1.element_class);
    if ( !v3 )
    {
LABEL_75:
      v209 = sub_1C93D50();
      sub_1C93BFC(v209, 0);
    }
  }
  if ( *(_DWORD *)p_max_length <= 0x14u )
LABEL_74:
    sub_1C93D34(v3);
  v47->m_Items[20] = v189;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v47->m_Items[20], (int32_t)v189, v190, v191, v192, v193, v194, v195);
  this->fields.itemInfoList = v47;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemInfoList,
    (int32_t)v47,
    v196,
    v197,
    v198,
    v199,
    v200,
    v201);
  v202 = (System_Array_o *)sub_1C93B7C(ShopHelpItemInfo_ItemKind___TypeInfo, 19);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
    v202,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__516CE5EF4CC7A81C9A872419689A9764E2EBEB4282A29E143CD06FEBDE26A4FC,
    0);
  this->fields.kinds = (struct ShopHelpItemInfo_ItemKind_array *)v202;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.kinds, (int32_t)v202, v203, v204, v205, v206, v207, v208);
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ShopHelpListViewManager__CallOnFadeOut(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_o *onFadeOut; // x19
  GrandQuestFolderBoardItem_o *p_onFadeOut; // x0

  onFadeOut = this->fields.onFadeOut;
  if ( onFadeOut )
  {
    p_onFadeOut = (GrandQuestFolderBoardItem_o *)&this->fields.onFadeOut;
    p_onFadeOut->klass = 0;
    sub_1C93A78(p_onFadeOut, 0, v2, v3, v4, v5, v6, v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ShopHelpMenu_o *baseDialog; // x20
  System_Action_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4D2CB57 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ShopHelpListViewManager_CallOnFadeOut__);
    byte_4D2CB57 = 1;
  }
  this->fields.onFadeOut = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.onFadeOut,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  baseDialog = this->fields.baseDialog;
  v11 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ShopHelpListViewManager_CallOnFadeOut__, 0);
  if ( !baseDialog )
    sub_1C93D2C(v12, v13);
  ShopHelpMenu__Close(baseDialog, v11, 0);
}


void ShopHelpListViewManager__CreateList(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v9; // x1
  ShopHelpMenu_o *baseDialog; // x0
  struct ShopHelpItemInfo_ItemKind_array *kinds; // x8
  struct ShopHelpItemInfo_ItemKind_array *v12; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v14; // x25
  int32_t v15; // w21
  ShopRootConstants_c *v16; // x0
  BalanceConfig_c *v17; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  struct ShopHelpItemInfo_array *itemInfoList; // x9
  __int64 v20; // x8
  ShopHelpItemInfo_o **m_Items; // x9
  ShopHelpItemInfo_o *v22; // x22
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t size; // w23
  ShopHelpListViewItem_o *v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0

  if ( (byte_4D2CB56 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&CoinRoomUtility_TypeInfo);
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&ShopHelpListViewItem_TypeInfo);
    sub_1C93AD4(&ShopRootConstants_TypeInfo);
    byte_4D2CB56 = 1;
  }
  this->fields.onFadeOut = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.onFadeOut, 0, v2, v3, v4, v5, v6, v7);
  baseDialog = this->fields.baseDialog;
  if ( !baseDialog )
    goto LABEL_43;
  ShopHelpMenu__Open(baseDialog, 0);
  kinds = this->fields.kinds;
  if ( !kinds )
    goto LABEL_43;
  ListViewManager__CreateList((ListViewManager_o *)this, kinds->max_length, 0);
  v12 = this->fields.kinds;
  if ( !v12 )
    goto LABEL_43;
  max_length = v12->max_length;
  if ( (int)max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1C93D34(baseDialog);
      v15 = v12->m_Items[v14];
      switch ( v15 )
      {
        case 15:
          v16 = ShopRootConstants_TypeInfo;
          if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          baseDialog = (ShopHelpMenu_o *)ShopRootConstants__IsSvtCostumeShopOpen((const MethodInfo *)v16);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_40;
          goto LABEL_28;
        case 16:
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          baseDialog = (ShopHelpMenu_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ShopMaster___);
          if ( !baseDialog )
            goto LABEL_43;
          baseDialog = (ShopHelpMenu_o *)ShopMaster__IsEnableEventShop_43574728((ShopMaster_o *)baseDialog, 0);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_40;
LABEL_28:
          itemInfoList = this->fields.itemInfoList;
          if ( !itemInfoList )
            goto LABEL_43;
          if ( (int)itemInfoList->max_length < 1 )
            goto LABEL_40;
          v20 = (unsigned int)itemInfoList->max_length;
          m_Items = itemInfoList->m_Items;
          break;
        case 17:
          if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
          baseDialog = (ShopHelpMenu_o *)CoinRoomUtility__IsTargetQuestClear(0);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_40;
          goto LABEL_28;
        case 22:
          v17 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v17 = BalanceConfig_TypeInfo;
          }
          ClassBoardReleaseQuestId = v17->static_fields->ClassBoardReleaseQuestId;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          baseDialog = (ShopHelpMenu_o *)CondType__IsQuestClear_41038904(ClassBoardReleaseQuestId, -1, 0, 0);
          if ( ((unsigned __int8)baseDialog & 1) != 0 )
            goto LABEL_28;
          goto LABEL_40;
        default:
          goto LABEL_28;
      }
      while ( 1 )
      {
        v22 = *m_Items;
        if ( *m_Items )
        {
          if ( v22->fields._Kind_k__BackingField == v15 )
            break;
        }
        --v20;
        ++m_Items;
        if ( !v20 )
          goto LABEL_40;
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      v25 = (ShopHelpListViewItem_o *)sub_1C93D20(ShopHelpListViewItem_TypeInfo);
      ShopHelpListViewItem___ctor(v25, size, v22, 0);
      items = itemList->fields._items;
      v33 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v34 = itemList->fields._size;
      if ( (unsigned int)v34 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v25,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + v34;
        itemList->fields._size = v34 + 1;
        v35[4] = (Il2CppClass *)v25;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)v25, v26, v27, v28, v29, v30, v31);
      }
LABEL_40:
      LODWORD(max_length) = v12->max_length;
      if ( (__int64)++v14 >= (int)max_length )
        goto LABEL_41;
    }
LABEL_43:
    sub_1C93D2C(baseDialog, v9);
  }
LABEL_41:
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

  if ( (byte_4D2CB54 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_Texture2D____79057928);
    sub_1C93AD4(&AssetManager_TypeInfo);
    byte_4D2CB54 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0);
  if ( !AssetStorage )
    sub_1C93D2C(0, v7);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51927708(
                                      AssetStorage,
                                      name,
                                      (const MethodInfo_3185A9C *)Method_AssetData_GetObject_Texture2D____79057928);
}


void ShopHelpListViewManager__LoadBaseSprite(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  System_String_array *helpBasePaths; // x20
  System_Action_o *v4; // x21

  if ( (byte_4D2CB52 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__);
    byte_4D2CB52 = 1;
  }
  if ( !this->fields.initMode )
  {
    this->fields.initMode = 1;
    helpBasePaths = this->fields.helpBasePaths;
    v4 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_41254760(helpBasePaths, v4, 1, 0);
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

  if ( (byte_4D2CB55 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1C93AD4(&AssetManager_TypeInfo);
    byte_4D2CB55 = 1;
  }
  if ( !paths )
    sub_1C93D2C(this, paths);
  max_length = paths->max_length;
  if ( (int)max_length >= 1 )
  {
    v5 = 0;
    do
    {
      if ( v5 >= (unsigned int)max_length )
        sub_1C93D34(this);
      v6 = paths->m_Items[v5];
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
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
  if ( (byte_4D2CB53 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_4D2CB53 = 1;
  }
  if ( v3->fields.initMode == 2 )
  {
    ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
    BaseWindow = v3->fields.BaseWindow;
    if ( !BaseWindow
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0)) == 0
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)BaseWindow,
                                                     (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0 )
    {
      sub_1C93D2C(BaseWindow, v4);
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

  if ( (byte_4D2CB58 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1C93AD4(&ShopHelpListViewObject_TypeInfo);
    byte_4D2CB58 = 1;
  }
  if ( !obj
    || (naturalAligment = ShopHelpListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ShopHelpListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ShopHelpListViewObject_TypeInfo )
  {
    sub_1C93D2C(this, obj);
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
  if ( (byte_4D2CB5A & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C93AD4(&UnityEngine_Material_TypeInfo);
    sub_1C93AD4(&StringLiteral_4960/*"Custom/SpriteWithMask"*/);
    this = (ShopHelpListViewManager_o *)sub_1C93AD4(&StringLiteral_16370/*"_MaskTex"*/);
    byte_4D2CB5A = 1;
  }
  if ( v3->fields.initMode == 1 )
  {
    v4 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4960/*"Custom/SpriteWithMask"*/, 0);
    v5 = (UnityEngine_Material_o *)sub_1C93D20(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v5, v4, 0);
    BaseWindow = v3->fields.BaseWindow;
    if ( BaseWindow )
    {
      BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0);
      if ( BaseWindow )
      {
        BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)BaseWindow,
                                                   (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UITexture___);
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
                  if ( LODWORD(v12->max_length) <= 1 )
                    goto LABEL_19;
                  v13 = v3->fields.helpBaseNames;
                  if ( v13 )
                  {
                    if ( LODWORD(v13->max_length) > 1 )
                    {
                      AssetStorageTexture2D = (UnityEngine_Texture_o *)ShopHelpListViewManager__GetAssetStorageTexture2D(
                                                                         (ShopHelpListViewManager_o *)BaseWindow,
                                                                         v12->m_Items[1],
                                                                         v13->m_Items[1],
                                                                         v11);
                      UnityEngine_Material__SetTexture(
                        v5,
                        (System_String_o *)StringLiteral_16370/*"_MaskTex"*/,
                        AssetStorageTexture2D,
                        0);
                      v3->fields.initMode = 2;
                      return;
                    }
LABEL_19:
                    sub_1C93D34(BaseWindow);
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_1C93D2C(BaseWindow, v6);
  }
  ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
}