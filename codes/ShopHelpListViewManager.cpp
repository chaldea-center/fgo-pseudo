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
  ShopHelpItemInfo_o *v71; // x21
  const MethodInfo *v72; // x5
  int32_t v73; // w2
  int32_t v74; // w3
  ShopHelpItemInfo_o *v75; // x21
  const MethodInfo *v76; // x5
  int32_t v77; // w2
  int32_t v78; // w3
  ShopHelpItemInfo_o *v79; // x21
  const MethodInfo *v80; // x5
  int32_t v81; // w2
  int32_t v82; // w3
  ShopHelpItemInfo_o *v83; // x21
  const MethodInfo *v84; // x5
  int32_t v85; // w2
  int32_t v86; // w3
  ShopHelpItemInfo_o *v87; // x21
  const MethodInfo *v88; // x5
  int32_t v89; // w2
  int32_t v90; // w3
  ShopHelpItemInfo_o *v91; // x21
  const MethodInfo *v92; // x5
  int32_t v93; // w2
  int32_t v94; // w3
  ShopHelpItemInfo_o *v95; // x21
  const MethodInfo *v96; // x5
  int32_t v97; // w2
  int32_t v98; // w3
  ShopHelpItemInfo_o *v99; // x21
  const MethodInfo *v100; // x5
  int32_t v101; // w2
  int32_t v102; // w3
  ShopHelpItemInfo_o *v103; // x21
  const MethodInfo *v104; // x5
  int32_t v105; // w2
  int32_t v106; // w3
  ShopHelpItemInfo_o *v107; // x21
  const MethodInfo *v108; // x5
  int32_t v109; // w2
  int32_t v110; // w3
  ShopHelpItemInfo_o *v111; // x21
  const MethodInfo *v112; // x5
  int32_t v113; // w2
  int32_t v114; // w3
  ShopHelpItemInfo_o *v115; // x21
  const MethodInfo *v116; // x5
  int32_t v117; // w2
  int32_t v118; // w3
  ShopHelpItemInfo_o *v119; // x21
  const MethodInfo *v120; // x5
  int32_t v121; // w2
  int32_t v122; // w3
  ShopHelpItemInfo_o *v123; // x21
  const MethodInfo *v124; // x5
  int32_t v125; // w2
  int32_t v126; // w3
  ShopHelpItemInfo_o *v127; // x21
  const MethodInfo *v128; // x5
  int32_t v129; // w2
  int32_t v130; // w3
  ShopHelpItemInfo_o *v131; // x21
  const MethodInfo *v132; // x5
  int32_t v133; // w2
  int32_t v134; // w3
  ShopHelpItemInfo_o *v135; // x21
  const MethodInfo *v136; // x5
  int32_t v137; // w2
  int32_t v138; // w3
  ShopHelpItemInfo_o *v139; // x21
  const MethodInfo *v140; // x5
  int32_t v141; // w2
  int32_t v142; // w3
  ShopHelpItemInfo_o *v143; // x21
  const MethodInfo *v144; // x5
  int32_t v145; // w2
  int32_t v146; // w3
  ShopHelpItemInfo_o *v147; // x21
  const MethodInfo *v148; // x5
  int32_t v149; // w2
  int32_t v150; // w3
  int32_t v151; // w2
  int32_t v152; // w3
  System_Array_o *v153; // x0
  struct ShopHelpItemInfo_ItemKind_array *v154; // x20
  int32_t v155; // w2
  int32_t v156; // w3
  __int64 v157; // x0
  System_RuntimeFieldHandle_o v158; // 0:w1.4

  if ( (byte_4A2A5B8 & 1) == 0 )
  {
    sub_1B761C0(&ShopHelpItemInfo_ItemKind___TypeInfo, method);
    sub_1B761C0(&ShopHelpItemInfo___TypeInfo, v3);
    sub_1B761C0(&ShopHelpItemInfo_TypeInfo, v4);
    sub_1B761C0(&string___TypeInfo, v5);
    sub_1B761C0(
      &Field__PrivateImplementationDetails__E10CB21B9898DC890A2C12C77D0F3080A4687EE5D6F1EF7922CCF6259D7BB335,
      v6);
    sub_1B761C0(&StringLiteral_12045/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/, v7);
    sub_1B761C0(&StringLiteral_12054/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/, v8);
    sub_1B761C0(&StringLiteral_14591/*"Tutorial/tutorial_alpha"*/, v9);
    sub_1B761C0(&StringLiteral_20443/*"img_shop_15"*/, v10);
    sub_1B761C0(&StringLiteral_20452/*"img_shop_7"*/, v11);
    sub_1B761C0(&StringLiteral_20439/*"img_shop_11"*/, v12);
    sub_1B761C0(&StringLiteral_12039/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/, v13);
    sub_1B761C0(&StringLiteral_12044/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/, v14);
    sub_1B761C0(&StringLiteral_12046/*"SHOP_HELP_SHOP04_SHOP_EXPLANATION"*/, v15);
    sub_1B761C0(&StringLiteral_20449/*"img_shop_22"*/, v16);
    sub_1B761C0(&StringLiteral_12050/*"SHOP_HELP_START_UP_SUMMON"*/, v17);
    sub_1B761C0(&StringLiteral_24087/*"tutorial_0006"*/, v18);
    sub_1B761C0(&StringLiteral_12036/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/, v19);
    sub_1B761C0(&StringLiteral_12042/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/, v20);
    sub_1B761C0(&StringLiteral_12038/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/, v21);
    sub_1B761C0(&StringLiteral_12047/*"SHOP_HELP_SHOP13_EXPLANATION"*/, v22);
    sub_1B761C0(&StringLiteral_20441/*"img_shop_13"*/, v23);
    sub_1B761C0(&StringLiteral_20454/*"img_shop_9"*/, v24);
    sub_1B761C0(&StringLiteral_12052/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/, v25);
    sub_1B761C0(&StringLiteral_12053/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/, v26);
    sub_1B761C0(&StringLiteral_20438/*"img_shop_10"*/, v27);
    sub_1B761C0(&StringLiteral_12041/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/, v28);
    sub_1B761C0(&StringLiteral_20444/*"img_shop_16"*/, v29);
    sub_1B761C0(&StringLiteral_20445/*"img_shop_17"*/, v30);
    sub_1B761C0(&StringLiteral_20447/*"img_shop_20"*/, v31);
    sub_1B761C0(&StringLiteral_20453/*"img_shop_8"*/, v32);
    sub_1B761C0(&StringLiteral_20451/*"img_shop_4"*/, v33);
    sub_1B761C0(&StringLiteral_12037/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/, v34);
    sub_1B761C0(&StringLiteral_20448/*"img_shop_21"*/, v35);
    sub_1B761C0(&StringLiteral_20446/*"img_shop_18"*/, v36);
    sub_1B761C0(&StringLiteral_12049/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/, v37);
    sub_1B761C0(&StringLiteral_12040/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/, v38);
    sub_1B761C0(&StringLiteral_20450/*"img_shop_3"*/, v39);
    sub_1B761C0(&StringLiteral_20436/*"img_shop_0"*/, v40);
    sub_1B761C0(&StringLiteral_14590/*"Tutorial/tutorial_0006"*/, v41);
    sub_1B761C0(&StringLiteral_1/*""*/, v42);
    sub_1B761C0(&StringLiteral_20442/*"img_shop_14"*/, v43);
    sub_1B761C0(&StringLiteral_12051/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/, v44);
    sub_1B761C0(&StringLiteral_20437/*"img_shop_1"*/, v45);
    sub_1B761C0(&StringLiteral_24088/*"tutorial_alpha"*/, v46);
    sub_1B761C0(&StringLiteral_12043/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/, v47);
    sub_1B761C0(&StringLiteral_20440/*"img_shop_12"*/, v48);
    sub_1B761C0(&StringLiteral_12048/*"SHOP_HELP_SHOP15_EXPLANATION"*/, v49);
    byte_4A2A5B8 = 1;
  }
  v50 = sub_1B76268(string___TypeInfo, 2LL);
  if ( !v50 )
    goto LABEL_73;
  v54 = v50;
  if ( !*(_DWORD *)(v50 + 24) )
    goto LABEL_71;
  v55 = StringLiteral_14590/*"Tutorial/tutorial_0006"*/;
  *(_QWORD *)(v50 + 32) = StringLiteral_14590/*"Tutorial/tutorial_0006"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v50 + 32), v55, v52, v53);
  if ( *(_DWORD *)(v54 + 24) <= 1u )
    goto LABEL_71;
  v58 = StringLiteral_14591/*"Tutorial/tutorial_alpha"*/;
  *(_QWORD *)(v54 + 40) = StringLiteral_14591/*"Tutorial/tutorial_alpha"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v54 + 40), v58, v56, v57);
  this->fields.helpBasePaths = (struct System_String_array *)v54;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.helpBasePaths, v54, v59, v60);
  v50 = sub_1B76268(string___TypeInfo, 2LL);
  if ( !v50 )
    goto LABEL_73;
  v63 = v50;
  if ( !*(_DWORD *)(v50 + 24) )
    goto LABEL_71;
  v64 = StringLiteral_24087/*"tutorial_0006"*/;
  *(_QWORD *)(v50 + 32) = StringLiteral_24087/*"tutorial_0006"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v50 + 32), v64, v61, v62);
  if ( *(_DWORD *)(v63 + 24) <= 1u )
    goto LABEL_71;
  v67 = StringLiteral_24088/*"tutorial_alpha"*/;
  *(_QWORD *)(v63 + 40) = StringLiteral_24088/*"tutorial_alpha"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v63 + 40), v67, v65, v66);
  this->fields.helpBaseNames = (struct System_String_array *)v63;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.helpBaseNames, v63, v68, v69);
  v70 = (struct ShopHelpItemInfo_array *)sub_1B76268(ShopHelpItemInfo___TypeInfo, 20LL);
  v71 = (ShopHelpItemInfo_o *)sub_1B7640C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v71,
    1,
    (System_String_o *)StringLiteral_12039/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20453/*"img_shop_8"*/,
    2,
    v72);
  if ( !v70 )
LABEL_73:
    sub_1B7641C(v50, v51);
  if ( v71 )
  {
    v50 = sub_1B762FC(v71, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( !v70->max_length )
    goto LABEL_71;
  v70->m_Items[0] = v71;
  sub_1B76164((ServantStatusBattleListViewItem_o *)v70->m_Items, (int32_t)v71, v73, v74);
  v75 = (ShopHelpItemInfo_o *)sub_1B7640C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v75,
    16,
    (System_String_o *)StringLiteral_12050/*"SHOP_HELP_START_UP_SUMMON"*/,
    (System_String_o *)StringLiteral_20445/*"img_shop_17"*/,
    2,
    v76);
  if ( v75 )
  {
    v50 = sub_1B762FC(v75, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 1 )
    goto LABEL_71;
  v70->m_Items[1] = v75;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v70->m_Items[1], (int32_t)v75, v77, v78);
  v79 = (ShopHelpItemInfo_o *)sub_1B7640C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v79,
    2,
    (System_String_o *)StringLiteral_12044/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20451/*"img_shop_4"*/,
    2,
    v80);
  if ( v79 )
  {
    v50 = sub_1B762FC(v79, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 2 )
    goto LABEL_71;
  v70->m_Items[2] = v79;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v70->m_Items[2], (int32_t)v79, v81, v82);
  v83 = (ShopHelpItemInfo_o *)sub_1B7640C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v83,
    3,
    (System_String_o *)StringLiteral_12042/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20450/*"img_shop_3"*/,
    1,
    v84);
  if ( v83 )
  {
    v50 = sub_1B762FC(v83, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 3 )
    goto LABEL_71;
  v70->m_Items[3] = v83;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v70->m_Items[3], (int32_t)v83, v85, v86);
  v87 = (ShopHelpItemInfo_o *)sub_1B7640C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v87,
    4,
    (System_String_o *)StringLiteral_12043/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20439/*"img_shop_11"*/,
    2,
    v88);
  if ( v87 )
  {
    v50 = sub_1B762FC(v87, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 4 )
    goto LABEL_71;
  v70->m_Items[4] = v87;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v70->m_Items[4], (int32_t)v87, v89, v90);
  v91 = (ShopHelpItemInfo_o *)sub_1B7640C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v91,
    5,
    (System_String_o *)StringLiteral_12051/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20454/*"img_shop_9"*/,
    1,
    v92);
  if ( v91 )
  {
    v50 = sub_1B762FC(v91, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 5 )
    goto LABEL_71;
  v70->m_Items[5] = v91;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v70->m_Items[5], (int32_t)v91, v93, v94);
  v95 = (ShopHelpItemInfo_o *)sub_1B7640C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v95,
    6,
    (System_String_o *)StringLiteral_12052/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20437/*"img_shop_1"*/,
    1,
    v96);
  if ( v95 )
  {
    v50 = sub_1B762FC(v95, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 6 )
    goto LABEL_71;
  v70->m_Items[6] = v95;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v70->m_Items[6], (int32_t)v95, v97, v98);
  v99 = (ShopHelpItemInfo_o *)sub_1B7640C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v99,
    7,
    (System_String_o *)StringLiteral_12045/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20440/*"img_shop_12"*/,
    1,
    v100);
  if ( v99 )
  {
    v50 = sub_1B762FC(v99, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 7 )
    goto LABEL_71;
  v70->m_Items[7] = v99;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v70->m_Items[7], (int32_t)v99, v101, v102);
  v103 = (ShopHelpItemInfo_o *)sub_1B7640C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v103,
    8,
    (System_String_o *)StringLiteral_12038/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20441/*"img_shop_13"*/,
    1,
    v104);
  if ( v103 )
  {
    v50 = sub_1B762FC(v103, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 8 )
    goto LABEL_71;
  v70->m_Items[8] = v103;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v70->m_Items[8], (int32_t)v103, v105, v106);
  v107 = (ShopHelpItemInfo_o *)sub_1B7640C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v107,
    11,
    (System_String_o *)StringLiteral_12036/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20438/*"img_shop_10"*/,
    1,
    v108);
  if ( v107 )
  {
    v50 = sub_1B762FC(v107, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 9 )
    goto LABEL_71;
  v70->m_Items[9] = v107;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v70->m_Items[9], (int32_t)v107, v109, v110);
  v111 = (ShopHelpItemInfo_o *)sub_1B7640C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v111,
    13,
    (System_String_o *)StringLiteral_12049/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20442/*"img_shop_14"*/,
    2,
    v112);
  if ( v111 )
  {
    v50 = sub_1B762FC(v111, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0xA )
    goto LABEL_71;
  v70->m_Items[10] = v111;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v70->m_Items[10], (int32_t)v111, v113, v114);
  v115 = (ShopHelpItemInfo_o *)sub_1B7640C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v115,
    12,
    (System_String_o *)StringLiteral_12053/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20452/*"img_shop_7"*/,
    1,
    v116);
  if ( v115 )
  {
    v50 = sub_1B762FC(v115, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0xB )
    goto LABEL_71;
  v70->m_Items[11] = v115;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v70->m_Items[11], (int32_t)v115, v117, v118);
  v119 = (ShopHelpItemInfo_o *)sub_1B7640C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v119,
    14,
    (System_String_o *)StringLiteral_12041/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20443/*"img_shop_15"*/,
    1,
    v120);
  if ( v119 )
  {
    v50 = sub_1B762FC(v119, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0xC )
    goto LABEL_71;
  v70->m_Items[12] = v119;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v70->m_Items[12], (int32_t)v119, v121, v122);
  v123 = (ShopHelpItemInfo_o *)sub_1B7640C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v123,
    15,
    (System_String_o *)StringLiteral_12046/*"SHOP_HELP_SHOP04_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20444/*"img_shop_16"*/,
    2,
    v124);
  if ( v123 )
  {
    v50 = sub_1B762FC(v123, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0xD )
    goto LABEL_71;
  v70->m_Items[13] = v123;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v70->m_Items[13], (int32_t)v123, v125, v126);
  v127 = (ShopHelpItemInfo_o *)sub_1B7640C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v127,
    17,
    (System_String_o *)StringLiteral_12037/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20445/*"img_shop_17"*/,
    2,
    v128);
  if ( v127 )
  {
    v50 = sub_1B762FC(v127, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0xE )
    goto LABEL_71;
  v70->m_Items[14] = v127;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v70->m_Items[14], (int32_t)v127, v129, v130);
  v131 = (ShopHelpItemInfo_o *)sub_1B7640C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v131,
    18,
    (System_String_o *)StringLiteral_12047/*"SHOP_HELP_SHOP13_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20446/*"img_shop_18"*/,
    1,
    v132);
  if ( v131 )
  {
    v50 = sub_1B762FC(v131, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0xF )
    goto LABEL_71;
  v70->m_Items[15] = v131;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v70->m_Items[15], (int32_t)v131, v133, v134);
  v135 = (ShopHelpItemInfo_o *)sub_1B7640C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v135,
    19,
    (System_String_o *)StringLiteral_12054/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20447/*"img_shop_20"*/,
    2,
    v136);
  if ( v135 )
  {
    v50 = sub_1B762FC(v135, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0x10 )
    goto LABEL_71;
  v70->m_Items[16] = v135;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v70->m_Items[16], (int32_t)v135, v137, v138);
  v139 = (ShopHelpItemInfo_o *)sub_1B7640C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v139,
    20,
    (System_String_o *)StringLiteral_12048/*"SHOP_HELP_SHOP15_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20448/*"img_shop_21"*/,
    2,
    v140);
  if ( v139 )
  {
    v50 = sub_1B762FC(v139, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0x11 )
    goto LABEL_71;
  v70->m_Items[17] = v139;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v70->m_Items[17], (int32_t)v139, v141, v142);
  v143 = (ShopHelpItemInfo_o *)sub_1B7640C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v143,
    21,
    (System_String_o *)StringLiteral_12040/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20449/*"img_shop_22"*/,
    2,
    v144);
  if ( v143 )
  {
    v50 = sub_1B762FC(v143, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0x12 )
    goto LABEL_71;
  v70->m_Items[18] = v143;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v70->m_Items[18], (int32_t)v143, v145, v146);
  v147 = (ShopHelpItemInfo_o *)sub_1B7640C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v147, 22, (System_String_o *)StringLiteral_1/*""*/, (System_String_o *)StringLiteral_20436/*"img_shop_0"*/, 1, v148);
  if ( v147 )
  {
    v50 = sub_1B762FC(v147, v70->obj.klass->_1.element_class);
    if ( !v50 )
    {
LABEL_72:
      v157 = sub_1B76440();
      sub_1B762E8(v157, 0LL);
    }
  }
  if ( v70->max_length <= 0x13 )
LABEL_71:
    sub_1B76424(v50, v51);
  v70->m_Items[19] = v147;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v70->m_Items[19], (int32_t)v147, v149, v150);
  this->fields.itemInfoList = v70;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.itemInfoList, (int32_t)v70, v151, v152);
  v153 = (System_Array_o *)sub_1B76268(ShopHelpItemInfo_ItemKind___TypeInfo, 18LL);
  v158.fields.value = Field__PrivateImplementationDetails__E10CB21B9898DC890A2C12C77D0F3080A4687EE5D6F1EF7922CCF6259D7BB335;
  v154 = (struct ShopHelpItemInfo_ItemKind_array *)v153;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61443140(v153, v158, 0LL);
  this->fields.kinds = v154;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.kinds, (int32_t)v154, v155, v156);
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
    sub_1B76164(p_onFadeOut, 0, v2, v3);
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
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A2A5B6 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, callback);
    sub_1B761C0(&Method_ShopHelpListViewManager_CallOnFadeOut__, v6);
    byte_4A2A5B6 = 1;
  }
  this->fields.onFadeOut = callback;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.onFadeOut, (int32_t)callback, (int32_t)method, v3);
  baseDialog = this->fields.baseDialog;
  v8 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ShopHelpListViewManager_CallOnFadeOut__, 0LL);
  if ( !baseDialog )
    sub_1B7641C(v9, v10);
  ShopHelpMenu__Close(baseDialog, v8, 0LL);
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
  __int64 v11; // x1
  ShopHelpMenu_o *baseDialog; // x0
  struct ShopHelpItemInfo_ItemKind_array *kinds; // x8
  struct ShopHelpItemInfo_ItemKind_array *v14; // x24
  __int64 v15; // x8
  unsigned __int64 v16; // x25
  int32_t v17; // w20
  struct ShopHelpItemInfo_array *itemInfoList; // x9
  __int64 v19; // x8
  ShopHelpItemInfo_o **m_Items; // x9
  ShopHelpItemInfo_o *v21; // x22
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t size; // w23
  __int64 v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4A2A5B5 & 1) == 0 )
  {
    sub_1B761C0(&CoinRoomUtility_TypeInfo, method);
    sub_1B761C0(&Method_DataManager_GetMaster_ShopMaster___, v5);
    sub_1B761C0(&DataManager_TypeInfo, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_1B761C0(&ShopHelpListViewItem_TypeInfo, v9);
    sub_1B761C0(&ShopRootConstants_TypeInfo, v10);
    byte_4A2A5B5 = 1;
  }
  this->fields.onFadeOut = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.onFadeOut, 0, v2, v3);
  baseDialog = this->fields.baseDialog;
  if ( !baseDialog )
    goto LABEL_39;
  ShopHelpMenu__Open(baseDialog, 0LL);
  kinds = this->fields.kinds;
  if ( !kinds )
    goto LABEL_39;
  ListViewManager__CreateList((ListViewManager_o *)this, kinds->max_length, 0LL);
  v14 = this->fields.kinds;
  if ( !v14 )
    goto LABEL_39;
  v15 = *(_QWORD *)&v14->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v15 )
        sub_1B76424(baseDialog, v11);
      v17 = v14->m_Items[v16 + 1];
      switch ( v17 )
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
          baseDialog = (ShopHelpMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_ShopMaster___);
          if ( !baseDialog )
            goto LABEL_39;
          baseDialog = (ShopHelpMenu_o *)ShopMaster__IsEnableEventShop_39655572((ShopMaster_o *)baseDialog, 0LL);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_36;
LABEL_24:
          itemInfoList = this->fields.itemInfoList;
          if ( !itemInfoList )
            goto LABEL_39;
          if ( (int)*(_QWORD *)&itemInfoList->max_length < 1 )
            goto LABEL_36;
          v19 = (unsigned int)*(_QWORD *)&itemInfoList->max_length;
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
        v21 = *m_Items;
        if ( *m_Items )
        {
          if ( v21->fields._Kind_k__BackingField == v17 )
            break;
        }
        --v19;
        ++m_Items;
        if ( !v19 )
          goto LABEL_36;
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      v24 = sub_1B7640C(ShopHelpListViewItem_TypeInfo);
      ListViewItem___ctor_40521064((ListViewItem_o *)v24, size, 0LL);
      *(_QWORD *)(v24 + 112) = v21;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v24 + 112), (int32_t)v21, v25, v26);
      items = itemList->fields._items;
      v30 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v31 = itemList->fields._size;
      if ( (unsigned int)v31 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v24,
          *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + v31;
        itemList->fields._size = v31 + 1;
        v32[4] = (Il2CppClass *)v24;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v32 + 4), v24, v27, v28);
      }
LABEL_36:
      LODWORD(v15) = v14->max_length;
      if ( (__int64)++v16 >= (int)v15 )
        goto LABEL_37;
    }
LABEL_39:
    sub_1B7641C(baseDialog, v11);
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
  __int64 v8; // x1

  if ( (byte_4A2A5B3 & 1) == 0 )
  {
    sub_1B761C0(&Method_AssetData_GetObject_Texture2D____75903240, path);
    sub_1B761C0(&AssetManager_TypeInfo, v6);
    byte_4A2A5B3 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( !AssetStorage )
    sub_1B7641C(0LL, v8);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__48515452(
                                      AssetStorage,
                                      name,
                                      (const MethodInfo_2E4497C *)Method_AssetData_GetObject_Texture2D____75903240);
}


void __fastcall ShopHelpListViewManager__LoadBaseSprite(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_array *helpBasePaths; // x20
  System_Action_o *v6; // x21

  if ( (byte_4A2A5B1 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&AssetManager_TypeInfo, v3);
    sub_1B761C0(&Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__, v4);
    byte_4A2A5B1 = 1;
  }
  if ( !this->fields.initMode )
  {
    this->fields.initMode = 1;
    helpBasePaths = this->fields.helpBasePaths;
    v6 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_37618892(helpBasePaths, v6, 1, 0LL);
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

  if ( (byte_4A2A5B4 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1B761C0(&AssetManager_TypeInfo, paths);
    byte_4A2A5B4 = 1;
  }
  if ( !paths )
    sub_1B7641C(this, paths);
  v4 = *(_QWORD *)&paths->max_length;
  if ( (int)v4 >= 1 )
  {
    v5 = 0LL;
    do
    {
      if ( v5 >= (unsigned int)v4 )
        sub_1B76424(this, paths);
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
  __int64 v4; // x1
  UnityEngine_GameObject_o *BaseWindow; // x0

  v3 = this;
  if ( (byte_4A2A5B2 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1B761C0(&Method_UnityEngine_Component_GetComponent_UITexture___, method);
    byte_4A2A5B2 = 1;
  }
  if ( v3->fields.initMode == 2 )
  {
    ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
    BaseWindow = v3->fields.BaseWindow;
    if ( !BaseWindow
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0LL)) == 0LL
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)BaseWindow,
                                                     (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL )
    {
      sub_1B7641C(BaseWindow, v4);
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

  if ( (byte_4A2A5B7 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1B761C0(&ShopHelpListViewObject_TypeInfo, obj);
    byte_4A2A5B7 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ShopHelpListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ShopHelpListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopHelpListViewObject_TypeInfo )
  {
    sub_1B7641C(this, obj);
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
  UnityEngine_Material_o *v8; // x20
  __int64 v9; // x1
  UnityEngine_GameObject_o *BaseWindow; // x0
  const MethodInfo *v11; // x3
  struct System_String_array *helpBasePaths; // x8
  struct System_String_array *helpBaseNames; // x9
  const MethodInfo *v14; // x3
  struct System_String_array *v15; // x8
  struct System_String_array *v16; // x9
  UnityEngine_Texture_o *AssetStorageTexture2D; // x0

  v3 = this;
  if ( (byte_4A2A5B9 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_Component_GetComponent_UITexture___, method);
    sub_1B761C0(&UnityEngine_Material_TypeInfo, v4);
    sub_1B761C0(&StringLiteral_4974/*"Custom/SpriteWithMask"*/, v5);
    this = (ShopHelpListViewManager_o *)sub_1B761C0(&StringLiteral_16261/*"_MaskTex"*/, v6);
    byte_4A2A5B9 = 1;
  }
  if ( v3->fields.initMode == 1 )
  {
    v7 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4974/*"Custom/SpriteWithMask"*/, 0LL);
    v8 = (UnityEngine_Material_o *)sub_1B7640C(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v8, v7, 0LL);
    BaseWindow = v3->fields.BaseWindow;
    if ( BaseWindow )
    {
      BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0LL);
      if ( BaseWindow )
      {
        BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)BaseWindow,
                                                   (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_UITexture___);
        if ( BaseWindow )
        {
          BaseWindow = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, UnityEngine_Material_o *, Il2CppMethodPointer))BaseWindow->klass[1].vtable._2_GetHashCode.method)(
                                                     BaseWindow,
                                                     v8,
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
                                                         v11);
              if ( v8 )
              {
                UnityEngine_Material__set_mainTexture(v8, (UnityEngine_Texture_o *)BaseWindow, 0LL);
                v15 = v3->fields.helpBasePaths;
                if ( v15 )
                {
                  if ( v15->max_length <= 1 )
                    goto LABEL_19;
                  v16 = v3->fields.helpBaseNames;
                  if ( v16 )
                  {
                    if ( v16->max_length > 1 )
                    {
                      AssetStorageTexture2D = (UnityEngine_Texture_o *)ShopHelpListViewManager__GetAssetStorageTexture2D(
                                                                         (ShopHelpListViewManager_o *)BaseWindow,
                                                                         v15->m_Items[1],
                                                                         v16->m_Items[1],
                                                                         v14);
                      UnityEngine_Material__SetTexture(
                        v8,
                        (System_String_o *)StringLiteral_16261/*"_MaskTex"*/,
                        AssetStorageTexture2D,
                        0LL);
                      v3->fields.initMode = 2;
                      return;
                    }
LABEL_19:
                    sub_1B76424(BaseWindow, v9);
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_1B7641C(BaseWindow, v9);
  }
  ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
}