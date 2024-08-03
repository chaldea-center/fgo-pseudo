void __fastcall ShopHelpListViewManager___ctor(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
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
  __int64 v50; // x0
  __int64 v51; // x1
  int32_t v52; // w2
  int32_t v53; // w3
  __int64 v54; // x20
  int32_t v55; // w1
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w1
  int32_t v59; // w2
  int32_t v60; // w3
  int32_t v61; // w2
  int32_t v62; // w3
  __int64 v63; // x20
  int32_t v64; // w1
  int32_t v65; // w2
  int32_t v66; // w3
  int32_t v67; // w1
  int32_t v68; // w2
  int32_t v69; // w3
  struct ShopHelpItemInfo_array *v70; // x20
  __int64 v71; // x1
  __int64 v72; // x2
  ShopHelpItemInfo_o *v73; // x21
  const MethodInfo *v74; // x5
  int32_t v75; // w2
  int32_t v76; // w3
  __int64 v77; // x1
  __int64 v78; // x2
  ShopHelpItemInfo_o *v79; // x21
  const MethodInfo *v80; // x5
  int32_t v81; // w2
  int32_t v82; // w3
  __int64 v83; // x1
  __int64 v84; // x2
  ShopHelpItemInfo_o *v85; // x21
  const MethodInfo *v86; // x5
  int32_t v87; // w2
  int32_t v88; // w3
  __int64 v89; // x1
  __int64 v90; // x2
  ShopHelpItemInfo_o *v91; // x21
  const MethodInfo *v92; // x5
  int32_t v93; // w2
  int32_t v94; // w3
  __int64 v95; // x1
  __int64 v96; // x2
  ShopHelpItemInfo_o *v97; // x21
  const MethodInfo *v98; // x5
  int32_t v99; // w2
  int32_t v100; // w3
  __int64 v101; // x1
  __int64 v102; // x2
  ShopHelpItemInfo_o *v103; // x21
  const MethodInfo *v104; // x5
  int32_t v105; // w2
  int32_t v106; // w3
  __int64 v107; // x1
  __int64 v108; // x2
  ShopHelpItemInfo_o *v109; // x21
  const MethodInfo *v110; // x5
  int32_t v111; // w2
  int32_t v112; // w3
  __int64 v113; // x1
  __int64 v114; // x2
  ShopHelpItemInfo_o *v115; // x21
  const MethodInfo *v116; // x5
  int32_t v117; // w2
  int32_t v118; // w3
  __int64 v119; // x1
  __int64 v120; // x2
  ShopHelpItemInfo_o *v121; // x21
  const MethodInfo *v122; // x5
  int32_t v123; // w2
  int32_t v124; // w3
  __int64 v125; // x1
  __int64 v126; // x2
  ShopHelpItemInfo_o *v127; // x21
  const MethodInfo *v128; // x5
  int32_t v129; // w2
  int32_t v130; // w3
  __int64 v131; // x1
  __int64 v132; // x2
  ShopHelpItemInfo_o *v133; // x21
  const MethodInfo *v134; // x5
  int32_t v135; // w2
  int32_t v136; // w3
  __int64 v137; // x1
  __int64 v138; // x2
  ShopHelpItemInfo_o *v139; // x21
  const MethodInfo *v140; // x5
  int32_t v141; // w2
  int32_t v142; // w3
  __int64 v143; // x1
  __int64 v144; // x2
  ShopHelpItemInfo_o *v145; // x21
  const MethodInfo *v146; // x5
  int32_t v147; // w2
  int32_t v148; // w3
  __int64 v149; // x1
  __int64 v150; // x2
  ShopHelpItemInfo_o *v151; // x21
  const MethodInfo *v152; // x5
  int32_t v153; // w2
  int32_t v154; // w3
  __int64 v155; // x1
  __int64 v156; // x2
  ShopHelpItemInfo_o *v157; // x21
  const MethodInfo *v158; // x5
  int32_t v159; // w2
  int32_t v160; // w3
  __int64 v161; // x1
  __int64 v162; // x2
  ShopHelpItemInfo_o *v163; // x21
  const MethodInfo *v164; // x5
  int32_t v165; // w2
  int32_t v166; // w3
  __int64 v167; // x1
  __int64 v168; // x2
  ShopHelpItemInfo_o *v169; // x21
  const MethodInfo *v170; // x5
  int32_t v171; // w2
  int32_t v172; // w3
  __int64 v173; // x1
  __int64 v174; // x2
  ShopHelpItemInfo_o *v175; // x21
  const MethodInfo *v176; // x5
  int32_t v177; // w2
  int32_t v178; // w3
  __int64 v179; // x1
  __int64 v180; // x2
  ShopHelpItemInfo_o *v181; // x21
  const MethodInfo *v182; // x5
  int32_t v183; // w2
  int32_t v184; // w3
  __int64 v185; // x1
  __int64 v186; // x2
  ShopHelpItemInfo_o *v187; // x21
  const MethodInfo *v188; // x5
  int32_t v189; // w2
  int32_t v190; // w3
  int32_t v191; // w2
  int32_t v192; // w3
  System_Array_o *v193; // x0
  struct ShopHelpItemInfo_ItemKind_array *v194; // x20
  int32_t v195; // w2
  int32_t v196; // w3
  __int64 v197; // x0
  System_RuntimeFieldHandle_o v198; // 0:w1.4

  if ( (byte_49F8AF5 & 1) == 0 )
  {
    sub_1B640C8(&ShopHelpItemInfo_ItemKind___TypeInfo, method);
    sub_1B640C8(&ShopHelpItemInfo___TypeInfo, v3);
    sub_1B640C8(&ShopHelpItemInfo_TypeInfo, v4);
    sub_1B640C8(&string___TypeInfo, v5);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__E10CB21B9898DC890A2C12C77D0F3080A4687EE5D6F1EF7922CCF6259D7BB335,
      v6);
    sub_1B640C8(&StringLiteral_11994/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/, v7);
    sub_1B640C8(&StringLiteral_12003/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/, v8);
    sub_1B640C8(&StringLiteral_14526/*"Tutorial/tutorial_alpha"*/, v9);
    sub_1B640C8(&StringLiteral_20369/*"img_shop_15"*/, v10);
    sub_1B640C8(&StringLiteral_20378/*"img_shop_7"*/, v11);
    sub_1B640C8(&StringLiteral_20365/*"img_shop_11"*/, v12);
    sub_1B640C8(&StringLiteral_11988/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/, v13);
    sub_1B640C8(&StringLiteral_11993/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/, v14);
    sub_1B640C8(&StringLiteral_11995/*"SHOP_HELP_SHOP04_SHOP_EXPLANATION"*/, v15);
    sub_1B640C8(&StringLiteral_20375/*"img_shop_22"*/, v16);
    sub_1B640C8(&StringLiteral_11999/*"SHOP_HELP_START_UP_SUMMON"*/, v17);
    sub_1B640C8(&StringLiteral_24001/*"tutorial_0006"*/, v18);
    sub_1B640C8(&StringLiteral_11985/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/, v19);
    sub_1B640C8(&StringLiteral_11991/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/, v20);
    sub_1B640C8(&StringLiteral_11987/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/, v21);
    sub_1B640C8(&StringLiteral_11996/*"SHOP_HELP_SHOP13_EXPLANATION"*/, v22);
    sub_1B640C8(&StringLiteral_20367/*"img_shop_13"*/, v23);
    sub_1B640C8(&StringLiteral_20380/*"img_shop_9"*/, v24);
    sub_1B640C8(&StringLiteral_12001/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/, v25);
    sub_1B640C8(&StringLiteral_12002/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/, v26);
    sub_1B640C8(&StringLiteral_20364/*"img_shop_10"*/, v27);
    sub_1B640C8(&StringLiteral_11990/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/, v28);
    sub_1B640C8(&StringLiteral_20370/*"img_shop_16"*/, v29);
    sub_1B640C8(&StringLiteral_20371/*"img_shop_17"*/, v30);
    sub_1B640C8(&StringLiteral_20373/*"img_shop_20"*/, v31);
    sub_1B640C8(&StringLiteral_20379/*"img_shop_8"*/, v32);
    sub_1B640C8(&StringLiteral_20377/*"img_shop_4"*/, v33);
    sub_1B640C8(&StringLiteral_11986/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/, v34);
    sub_1B640C8(&StringLiteral_20374/*"img_shop_21"*/, v35);
    sub_1B640C8(&StringLiteral_20372/*"img_shop_18"*/, v36);
    sub_1B640C8(&StringLiteral_11998/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/, v37);
    sub_1B640C8(&StringLiteral_11989/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/, v38);
    sub_1B640C8(&StringLiteral_20376/*"img_shop_3"*/, v39);
    sub_1B640C8(&StringLiteral_20362/*"img_shop_0"*/, v40);
    sub_1B640C8(&StringLiteral_14525/*"Tutorial/tutorial_0006"*/, v41);
    sub_1B640C8(&StringLiteral_1/*""*/, v42);
    sub_1B640C8(&StringLiteral_20368/*"img_shop_14"*/, v43);
    sub_1B640C8(&StringLiteral_12000/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/, v44);
    sub_1B640C8(&StringLiteral_20363/*"img_shop_1"*/, v45);
    sub_1B640C8(&StringLiteral_24002/*"tutorial_alpha"*/, v46);
    sub_1B640C8(&StringLiteral_11992/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/, v47);
    sub_1B640C8(&StringLiteral_20366/*"img_shop_12"*/, v48);
    sub_1B640C8(&StringLiteral_11997/*"SHOP_HELP_SHOP15_EXPLANATION"*/, v49);
    byte_49F8AF5 = 1;
  }
  v50 = sub_1B64170(string___TypeInfo, 2LL);
  if ( !v50 )
    goto LABEL_73;
  v54 = v50;
  if ( !*(_DWORD *)(v50 + 24) )
    goto LABEL_71;
  v55 = StringLiteral_14525/*"Tutorial/tutorial_0006"*/;
  *(_QWORD *)(v50 + 32) = StringLiteral_14525/*"Tutorial/tutorial_0006"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v50 + 32), v55, v52, v53);
  if ( *(_DWORD *)(v54 + 24) <= 1u )
    goto LABEL_71;
  v58 = StringLiteral_14526/*"Tutorial/tutorial_alpha"*/;
  *(_QWORD *)(v54 + 40) = StringLiteral_14526/*"Tutorial/tutorial_alpha"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 40), v58, v56, v57);
  this->fields.helpBasePaths = (struct System_String_array *)v54;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.helpBasePaths, v54, v59, v60);
  v50 = sub_1B64170(string___TypeInfo, 2LL);
  if ( !v50 )
    goto LABEL_73;
  v63 = v50;
  if ( !*(_DWORD *)(v50 + 24) )
    goto LABEL_71;
  v64 = StringLiteral_24001/*"tutorial_0006"*/;
  *(_QWORD *)(v50 + 32) = StringLiteral_24001/*"tutorial_0006"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v50 + 32), v64, v61, v62);
  if ( *(_DWORD *)(v63 + 24) <= 1u )
    goto LABEL_71;
  v67 = StringLiteral_24002/*"tutorial_alpha"*/;
  *(_QWORD *)(v63 + 40) = StringLiteral_24002/*"tutorial_alpha"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v63 + 40), v67, v65, v66);
  this->fields.helpBaseNames = (struct System_String_array *)v63;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.helpBaseNames, v63, v68, v69);
  v70 = (struct ShopHelpItemInfo_array *)sub_1B64170(ShopHelpItemInfo___TypeInfo, 20LL);
  v73 = (ShopHelpItemInfo_o *)sub_1B64314(ShopHelpItemInfo_TypeInfo, v71, v72);
  ShopHelpItemInfo___ctor(
    v73,
    1,
    (System_String_o *)StringLiteral_11988/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20379/*"img_shop_8"*/,
    2,
    v74);
  if ( !v70 )
LABEL_73:
    sub_1B64324(v50);
  if ( v73 )
  {
    v50 = sub_1B64204(v73, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( !v70->max_length )
    goto LABEL_71;
  v70->m_Items[0] = v73;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v70->m_Items, (int32_t)v73, v75, v76);
  v79 = (ShopHelpItemInfo_o *)sub_1B64314(ShopHelpItemInfo_TypeInfo, v77, v78);
  ShopHelpItemInfo___ctor(
    v79,
    16,
    (System_String_o *)StringLiteral_11999/*"SHOP_HELP_START_UP_SUMMON"*/,
    (System_String_o *)StringLiteral_20371/*"img_shop_17"*/,
    2,
    v80);
  if ( v79 )
  {
    v50 = sub_1B64204(v79, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 1 )
    goto LABEL_71;
  v70->m_Items[1] = v79;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v70->m_Items[1], (int32_t)v79, v81, v82);
  v85 = (ShopHelpItemInfo_o *)sub_1B64314(ShopHelpItemInfo_TypeInfo, v83, v84);
  ShopHelpItemInfo___ctor(
    v85,
    2,
    (System_String_o *)StringLiteral_11993/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20377/*"img_shop_4"*/,
    2,
    v86);
  if ( v85 )
  {
    v50 = sub_1B64204(v85, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 2 )
    goto LABEL_71;
  v70->m_Items[2] = v85;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v70->m_Items[2], (int32_t)v85, v87, v88);
  v91 = (ShopHelpItemInfo_o *)sub_1B64314(ShopHelpItemInfo_TypeInfo, v89, v90);
  ShopHelpItemInfo___ctor(
    v91,
    3,
    (System_String_o *)StringLiteral_11991/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20376/*"img_shop_3"*/,
    1,
    v92);
  if ( v91 )
  {
    v50 = sub_1B64204(v91, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 3 )
    goto LABEL_71;
  v70->m_Items[3] = v91;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v70->m_Items[3], (int32_t)v91, v93, v94);
  v97 = (ShopHelpItemInfo_o *)sub_1B64314(ShopHelpItemInfo_TypeInfo, v95, v96);
  ShopHelpItemInfo___ctor(
    v97,
    4,
    (System_String_o *)StringLiteral_11992/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20365/*"img_shop_11"*/,
    2,
    v98);
  if ( v97 )
  {
    v50 = sub_1B64204(v97, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 4 )
    goto LABEL_71;
  v70->m_Items[4] = v97;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v70->m_Items[4], (int32_t)v97, v99, v100);
  v103 = (ShopHelpItemInfo_o *)sub_1B64314(ShopHelpItemInfo_TypeInfo, v101, v102);
  ShopHelpItemInfo___ctor(
    v103,
    5,
    (System_String_o *)StringLiteral_12000/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20380/*"img_shop_9"*/,
    1,
    v104);
  if ( v103 )
  {
    v50 = sub_1B64204(v103, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 5 )
    goto LABEL_71;
  v70->m_Items[5] = v103;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v70->m_Items[5], (int32_t)v103, v105, v106);
  v109 = (ShopHelpItemInfo_o *)sub_1B64314(ShopHelpItemInfo_TypeInfo, v107, v108);
  ShopHelpItemInfo___ctor(
    v109,
    6,
    (System_String_o *)StringLiteral_12001/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20363/*"img_shop_1"*/,
    1,
    v110);
  if ( v109 )
  {
    v50 = sub_1B64204(v109, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 6 )
    goto LABEL_71;
  v70->m_Items[6] = v109;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v70->m_Items[6], (int32_t)v109, v111, v112);
  v115 = (ShopHelpItemInfo_o *)sub_1B64314(ShopHelpItemInfo_TypeInfo, v113, v114);
  ShopHelpItemInfo___ctor(
    v115,
    7,
    (System_String_o *)StringLiteral_11994/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20366/*"img_shop_12"*/,
    1,
    v116);
  if ( v115 )
  {
    v50 = sub_1B64204(v115, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 7 )
    goto LABEL_71;
  v70->m_Items[7] = v115;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v70->m_Items[7], (int32_t)v115, v117, v118);
  v121 = (ShopHelpItemInfo_o *)sub_1B64314(ShopHelpItemInfo_TypeInfo, v119, v120);
  ShopHelpItemInfo___ctor(
    v121,
    8,
    (System_String_o *)StringLiteral_11987/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20367/*"img_shop_13"*/,
    1,
    v122);
  if ( v121 )
  {
    v50 = sub_1B64204(v121, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 8 )
    goto LABEL_71;
  v70->m_Items[8] = v121;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v70->m_Items[8], (int32_t)v121, v123, v124);
  v127 = (ShopHelpItemInfo_o *)sub_1B64314(ShopHelpItemInfo_TypeInfo, v125, v126);
  ShopHelpItemInfo___ctor(
    v127,
    11,
    (System_String_o *)StringLiteral_11985/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20364/*"img_shop_10"*/,
    1,
    v128);
  if ( v127 )
  {
    v50 = sub_1B64204(v127, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 9 )
    goto LABEL_71;
  v70->m_Items[9] = v127;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v70->m_Items[9], (int32_t)v127, v129, v130);
  v133 = (ShopHelpItemInfo_o *)sub_1B64314(ShopHelpItemInfo_TypeInfo, v131, v132);
  ShopHelpItemInfo___ctor(
    v133,
    13,
    (System_String_o *)StringLiteral_11998/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20368/*"img_shop_14"*/,
    2,
    v134);
  if ( v133 )
  {
    v50 = sub_1B64204(v133, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0xA )
    goto LABEL_71;
  v70->m_Items[10] = v133;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v70->m_Items[10], (int32_t)v133, v135, v136);
  v139 = (ShopHelpItemInfo_o *)sub_1B64314(ShopHelpItemInfo_TypeInfo, v137, v138);
  ShopHelpItemInfo___ctor(
    v139,
    12,
    (System_String_o *)StringLiteral_12002/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20378/*"img_shop_7"*/,
    1,
    v140);
  if ( v139 )
  {
    v50 = sub_1B64204(v139, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0xB )
    goto LABEL_71;
  v70->m_Items[11] = v139;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v70->m_Items[11], (int32_t)v139, v141, v142);
  v145 = (ShopHelpItemInfo_o *)sub_1B64314(ShopHelpItemInfo_TypeInfo, v143, v144);
  ShopHelpItemInfo___ctor(
    v145,
    14,
    (System_String_o *)StringLiteral_11990/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20369/*"img_shop_15"*/,
    1,
    v146);
  if ( v145 )
  {
    v50 = sub_1B64204(v145, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0xC )
    goto LABEL_71;
  v70->m_Items[12] = v145;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v70->m_Items[12], (int32_t)v145, v147, v148);
  v151 = (ShopHelpItemInfo_o *)sub_1B64314(ShopHelpItemInfo_TypeInfo, v149, v150);
  ShopHelpItemInfo___ctor(
    v151,
    15,
    (System_String_o *)StringLiteral_11995/*"SHOP_HELP_SHOP04_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20370/*"img_shop_16"*/,
    2,
    v152);
  if ( v151 )
  {
    v50 = sub_1B64204(v151, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0xD )
    goto LABEL_71;
  v70->m_Items[13] = v151;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v70->m_Items[13], (int32_t)v151, v153, v154);
  v157 = (ShopHelpItemInfo_o *)sub_1B64314(ShopHelpItemInfo_TypeInfo, v155, v156);
  ShopHelpItemInfo___ctor(
    v157,
    17,
    (System_String_o *)StringLiteral_11986/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20371/*"img_shop_17"*/,
    2,
    v158);
  if ( v157 )
  {
    v50 = sub_1B64204(v157, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0xE )
    goto LABEL_71;
  v70->m_Items[14] = v157;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v70->m_Items[14], (int32_t)v157, v159, v160);
  v163 = (ShopHelpItemInfo_o *)sub_1B64314(ShopHelpItemInfo_TypeInfo, v161, v162);
  ShopHelpItemInfo___ctor(
    v163,
    18,
    (System_String_o *)StringLiteral_11996/*"SHOP_HELP_SHOP13_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20372/*"img_shop_18"*/,
    1,
    v164);
  if ( v163 )
  {
    v50 = sub_1B64204(v163, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0xF )
    goto LABEL_71;
  v70->m_Items[15] = v163;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v70->m_Items[15], (int32_t)v163, v165, v166);
  v169 = (ShopHelpItemInfo_o *)sub_1B64314(ShopHelpItemInfo_TypeInfo, v167, v168);
  ShopHelpItemInfo___ctor(
    v169,
    19,
    (System_String_o *)StringLiteral_12003/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20373/*"img_shop_20"*/,
    2,
    v170);
  if ( v169 )
  {
    v50 = sub_1B64204(v169, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0x10 )
    goto LABEL_71;
  v70->m_Items[16] = v169;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v70->m_Items[16], (int32_t)v169, v171, v172);
  v175 = (ShopHelpItemInfo_o *)sub_1B64314(ShopHelpItemInfo_TypeInfo, v173, v174);
  ShopHelpItemInfo___ctor(
    v175,
    20,
    (System_String_o *)StringLiteral_11997/*"SHOP_HELP_SHOP15_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20374/*"img_shop_21"*/,
    2,
    v176);
  if ( v175 )
  {
    v50 = sub_1B64204(v175, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0x11 )
    goto LABEL_71;
  v70->m_Items[17] = v175;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v70->m_Items[17], (int32_t)v175, v177, v178);
  v181 = (ShopHelpItemInfo_o *)sub_1B64314(ShopHelpItemInfo_TypeInfo, v179, v180);
  ShopHelpItemInfo___ctor(
    v181,
    21,
    (System_String_o *)StringLiteral_11989/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20375/*"img_shop_22"*/,
    2,
    v182);
  if ( v181 )
  {
    v50 = sub_1B64204(v181, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0x12 )
    goto LABEL_71;
  v70->m_Items[18] = v181;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v70->m_Items[18], (int32_t)v181, v183, v184);
  v187 = (ShopHelpItemInfo_o *)sub_1B64314(ShopHelpItemInfo_TypeInfo, v185, v186);
  ShopHelpItemInfo___ctor(v187, 22, (System_String_o *)StringLiteral_1/*""*/, (System_String_o *)StringLiteral_20362/*"img_shop_0"*/, 1, v188);
  if ( v187 )
  {
    v50 = sub_1B64204(v187, v70->obj.klass->_1.element_class);
    if ( !v50 )
    {
LABEL_72:
      v197 = sub_1B64348();
      sub_1B641F0(v197, 0LL);
    }
  }
  if ( v70->max_length <= 0x13 )
LABEL_71:
    sub_1B6432C(v50, v51);
  v70->m_Items[19] = v187;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v70->m_Items[19], (int32_t)v187, v189, v190);
  this->fields.itemInfoList = v70;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.itemInfoList, (int32_t)v70, v191, v192);
  v193 = (System_Array_o *)sub_1B64170(ShopHelpItemInfo_ItemKind___TypeInfo, 18LL);
  v198.fields.value = Field__PrivateImplementationDetails__E10CB21B9898DC890A2C12C77D0F3080A4687EE5D6F1EF7922CCF6259D7BB335;
  v194 = (struct ShopHelpItemInfo_ItemKind_array *)v193;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v193, v198, 0LL);
  this->fields.kinds = v194;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.kinds, (int32_t)v194, v195, v196);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ShopHelpListViewManager__CallOnFadeOut(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_Action_o *onFadeOut; // x19
  ServantStatusBattleListViewItem_o *p_onFadeOut; // x0

  onFadeOut = this->fields.onFadeOut;
  if ( onFadeOut )
  {
    p_onFadeOut = (ServantStatusBattleListViewItem_o *)&this->fields.onFadeOut;
    p_onFadeOut->klass = 0LL;
    sub_1B6406C(p_onFadeOut, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onFadeOut->fields.m_target)(
      onFadeOut->fields.original_method_info,
      *(_QWORD *)&onFadeOut->fields.extra_arg);
  }
}


void __fastcall ShopHelpListViewManager__CloseHelpDialog(
        ShopHelpListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  ShopHelpMenu_o *baseDialog; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x21
  __int64 v11; // x0

  if ( (byte_49F8AF3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_ShopHelpListViewManager_CallOnFadeOut__, v6);
    byte_49F8AF3 = 1;
  }
  this->fields.onFadeOut = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onFadeOut, (int32_t)callback, (int32_t)method, v3);
  baseDialog = this->fields.baseDialog;
  v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ShopHelpListViewManager_CallOnFadeOut__, 0LL);
  if ( !baseDialog )
    sub_1B64324(v11);
  ShopHelpMenu__Close(baseDialog, v10, 0LL);
}


void __fastcall ShopHelpListViewManager__CreateList(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ShopHelpMenu_o *baseDialog; // x0
  struct ShopHelpItemInfo_ItemKind_array *kinds; // x8
  __int64 v13; // x1
  __int64 v14; // x2
  struct ShopHelpItemInfo_ItemKind_array *v15; // x24
  __int64 v16; // x8
  unsigned __int64 v17; // x25
  int32_t v18; // w20
  struct ShopHelpItemInfo_array *itemInfoList; // x9
  __int64 v20; // x8
  ShopHelpItemInfo_o **m_Items; // x9
  ShopHelpItemInfo_o *v22; // x22
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t size; // w23
  __int64 v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass **v33; // x0

  if ( (byte_49F8AF2 & 1) == 0 )
  {
    sub_1B640C8(&CoinRoomUtility_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_ShopMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_1B640C8(&ShopHelpListViewItem_TypeInfo, v9);
    sub_1B640C8(&ShopRootConstants_TypeInfo, v10);
    byte_49F8AF2 = 1;
  }
  this->fields.onFadeOut = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onFadeOut, 0, v2, v3);
  baseDialog = this->fields.baseDialog;
  if ( !baseDialog )
    goto LABEL_39;
  ShopHelpMenu__Open(baseDialog, 0LL);
  kinds = this->fields.kinds;
  if ( !kinds )
    goto LABEL_39;
  ListViewManager__CreateList((ListViewManager_o *)this, kinds->max_length, 0LL);
  v15 = this->fields.kinds;
  if ( !v15 )
    goto LABEL_39;
  v16 = *(_QWORD *)&v15->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v16 )
        sub_1B6432C(baseDialog, v13);
      v18 = v15->m_Items[v17 + 1];
      switch ( v18 )
      {
        case 15:
          if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          baseDialog = (ShopHelpMenu_o *)ShopRootConstants__IsSvtCostumeShopOpen(0LL);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_36;
          goto LABEL_24;
        case 16:
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          baseDialog = (ShopHelpMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ShopMaster___);
          if ( !baseDialog )
            goto LABEL_39;
          baseDialog = (ShopHelpMenu_o *)ShopMaster__IsEnableEventShop_39510116((ShopMaster_o *)baseDialog, 0LL);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_36;
LABEL_24:
          itemInfoList = this->fields.itemInfoList;
          if ( !itemInfoList )
            goto LABEL_39;
          if ( (int)*(_QWORD *)&itemInfoList->max_length < 1 )
            goto LABEL_36;
          v20 = (unsigned int)*(_QWORD *)&itemInfoList->max_length;
          m_Items = itemInfoList->m_Items;
          break;
        case 17:
          if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
          baseDialog = (ShopHelpMenu_o *)CoinRoomUtility__IsTargetQuestClear(0LL);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_36;
          goto LABEL_24;
        case 20:
          baseDialog = (ShopHelpMenu_o *)ConstantMaster__IsFLAG20230402(0LL);
          if ( ((unsigned __int8)baseDialog & 1) != 0 )
            goto LABEL_24;
          goto LABEL_36;
        default:
          goto LABEL_24;
      }
      while ( 1 )
      {
        v22 = *m_Items;
        if ( *m_Items )
        {
          if ( v22->fields._Kind_k__BackingField == v18 )
            break;
        }
        --v20;
        ++m_Items;
        if ( !v20 )
          goto LABEL_36;
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      v25 = sub_1B64314(ShopHelpListViewItem_TypeInfo, v13, v14);
      ListViewItem___ctor_40370988((ListViewItem_o *)v25, size, 0LL);
      *(_QWORD *)(v25 + 112) = v22;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 112), (int32_t)v22, v26, v27);
      items = itemList->fields._items;
      v31 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v32 = itemList->fields._size;
      if ( (unsigned int)v32 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v25,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + v32;
        itemList->fields._size = v32 + 1;
        v33[4] = (Il2CppClass *)v25;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 4), v25, v28, v29);
      }
LABEL_36:
      LODWORD(v16) = v15->max_length;
      if ( (__int64)++v17 >= (int)v16 )
        goto LABEL_37;
    }
LABEL_39:
    sub_1B64324(baseDialog);
  }
LABEL_37:
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
  __int64 v6; // x1
  AssetData_o *AssetStorage; // x0

  if ( (byte_49F8AF0 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_Texture2D____75705984, path);
    sub_1B640C8(&AssetManager_TypeInfo, v6);
    byte_49F8AF0 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( !AssetStorage )
    sub_1B64324(0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__48347676(
                                      AssetStorage,
                                      name,
                                      (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
}


void __fastcall ShopHelpListViewManager__LoadBaseSprite(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_array *helpBasePaths; // x20
  System_Action_o *v7; // x21

  if ( (byte_49F8AEE & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AssetManager_TypeInfo, v4);
    sub_1B640C8(&Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__, v5);
    byte_49F8AEE = 1;
  }
  if ( !this->fields.initMode )
  {
    this->fields.initMode = 1;
    helpBasePaths = this->fields.helpBasePaths;
    v7 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_37484096(helpBasePaths, v7, 1, 0LL);
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

  if ( (byte_49F8AF1 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1B640C8(&AssetManager_TypeInfo, paths);
    byte_49F8AF1 = 1;
  }
  if ( !paths )
    sub_1B64324(this);
  v4 = *(_QWORD *)&paths->max_length;
  if ( (int)v4 >= 1 )
  {
    v5 = 0LL;
    do
    {
      if ( v5 >= (unsigned int)v4 )
        sub_1B6432C(this, paths);
      v6 = paths->m_Items[v5];
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
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
  UnityEngine_GameObject_o *BaseWindow; // x0

  v3 = this;
  if ( (byte_49F8AEF & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UITexture___, method);
    byte_49F8AEF = 1;
  }
  if ( v3->fields.initMode == 2 )
  {
    ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
    BaseWindow = v3->fields.BaseWindow;
    if ( !BaseWindow
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0LL)) == 0LL
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)BaseWindow,
                                                     (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL )
    {
      sub_1B64324(BaseWindow);
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
  __int64 methodPtr_low; // x10

  if ( (byte_49F8AF4 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1B640C8(&ShopHelpListViewObject_TypeInfo, obj);
    byte_49F8AF4 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ShopHelpListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ShopHelpListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopHelpListViewObject_TypeInfo )
  {
    sub_1B64324(this);
  }
  ShopHelpListViewObject__Init((ShopHelpListViewObject_o *)obj, 2, (const MethodInfo *)item);
}


void __fastcall ShopHelpListViewManager___LoadBaseSprite_b__9_0(
        ShopHelpListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ShopHelpListViewManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Shader_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Material_o *v10; // x20
  UnityEngine_GameObject_o *BaseWindow; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  struct System_String_array *helpBasePaths; // x8
  struct System_String_array *helpBaseNames; // x9
  const MethodInfo *v16; // x3
  struct System_String_array *v17; // x8
  struct System_String_array *v18; // x9
  UnityEngine_Texture_o *AssetStorageTexture2D; // x0

  v3 = this;
  if ( (byte_49F8AF6 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UITexture___, method);
    sub_1B640C8(&UnityEngine_Material_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_4952/*"Custom/SpriteWithMask"*/, v5);
    this = (ShopHelpListViewManager_o *)sub_1B640C8(&StringLiteral_16198/*"_MaskTex"*/, v6);
    byte_49F8AF6 = 1;
  }
  if ( v3->fields.initMode == 1 )
  {
    v7 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4952/*"Custom/SpriteWithMask"*/, 0LL);
    v10 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v8, v9);
    UnityEngine_Material___ctor(v10, v7, 0LL);
    BaseWindow = v3->fields.BaseWindow;
    if ( BaseWindow )
    {
      BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0LL);
      if ( BaseWindow )
      {
        BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)BaseWindow,
                                                   (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UITexture___);
        if ( BaseWindow )
        {
          BaseWindow = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, UnityEngine_Material_o *, Il2CppMethodPointer))BaseWindow->klass[1].vtable._2_GetHashCode.method)(
                                                     BaseWindow,
                                                     v10,
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
                                                         v13);
              if ( v10 )
              {
                UnityEngine_Material__set_mainTexture(v10, (UnityEngine_Texture_o *)BaseWindow, 0LL);
                v17 = v3->fields.helpBasePaths;
                if ( v17 )
                {
                  if ( v17->max_length <= 1 )
                    goto LABEL_19;
                  v18 = v3->fields.helpBaseNames;
                  if ( v18 )
                  {
                    if ( v18->max_length > 1 )
                    {
                      AssetStorageTexture2D = (UnityEngine_Texture_o *)ShopHelpListViewManager__GetAssetStorageTexture2D(
                                                                         (ShopHelpListViewManager_o *)BaseWindow,
                                                                         v17->m_Items[1],
                                                                         v18->m_Items[1],
                                                                         v16);
                      UnityEngine_Material__SetTexture(
                        v10,
                        (System_String_o *)StringLiteral_16198/*"_MaskTex"*/,
                        AssetStorageTexture2D,
                        0LL);
                      v3->fields.initMode = 2;
                      return;
                    }
LABEL_19:
                    sub_1B6432C(BaseWindow, v12);
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_1B64324(BaseWindow);
  }
  ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
}