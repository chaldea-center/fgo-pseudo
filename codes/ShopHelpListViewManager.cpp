void __fastcall ShopHelpListViewManager___ctor(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  __int64 v7; // x20
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x20
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  struct ShopHelpItemInfo_array *v23; // x20
  ShopHelpItemInfo_o *v24; // x21
  const MethodInfo *v25; // x5
  int32_t v26; // w2
  int32_t v27; // w3
  ShopHelpItemInfo_o *v28; // x21
  const MethodInfo *v29; // x5
  int32_t v30; // w2
  int32_t v31; // w3
  ShopHelpItemInfo_o *v32; // x21
  const MethodInfo *v33; // x5
  int32_t v34; // w2
  int32_t v35; // w3
  ShopHelpItemInfo_o *v36; // x21
  const MethodInfo *v37; // x5
  int32_t v38; // w2
  int32_t v39; // w3
  ShopHelpItemInfo_o *v40; // x21
  const MethodInfo *v41; // x5
  int32_t v42; // w2
  int32_t v43; // w3
  ShopHelpItemInfo_o *v44; // x21
  const MethodInfo *v45; // x5
  int32_t v46; // w2
  int32_t v47; // w3
  ShopHelpItemInfo_o *v48; // x21
  const MethodInfo *v49; // x5
  int32_t v50; // w2
  int32_t v51; // w3
  ShopHelpItemInfo_o *v52; // x21
  const MethodInfo *v53; // x5
  int32_t v54; // w2
  int32_t v55; // w3
  ShopHelpItemInfo_o *v56; // x21
  const MethodInfo *v57; // x5
  int32_t v58; // w2
  int32_t v59; // w3
  ShopHelpItemInfo_o *v60; // x21
  const MethodInfo *v61; // x5
  int32_t v62; // w2
  int32_t v63; // w3
  ShopHelpItemInfo_o *v64; // x21
  const MethodInfo *v65; // x5
  int32_t v66; // w2
  int32_t v67; // w3
  ShopHelpItemInfo_o *v68; // x21
  const MethodInfo *v69; // x5
  int32_t v70; // w2
  int32_t v71; // w3
  ShopHelpItemInfo_o *v72; // x21
  const MethodInfo *v73; // x5
  int32_t v74; // w2
  int32_t v75; // w3
  ShopHelpItemInfo_o *v76; // x21
  const MethodInfo *v77; // x5
  int32_t v78; // w2
  int32_t v79; // w3
  ShopHelpItemInfo_o *v80; // x21
  const MethodInfo *v81; // x5
  int32_t v82; // w2
  int32_t v83; // w3
  ShopHelpItemInfo_o *v84; // x21
  const MethodInfo *v85; // x5
  int32_t v86; // w2
  int32_t v87; // w3
  ShopHelpItemInfo_o *v88; // x21
  const MethodInfo *v89; // x5
  int32_t v90; // w2
  int32_t v91; // w3
  ShopHelpItemInfo_o *v92; // x21
  const MethodInfo *v93; // x5
  int32_t v94; // w2
  int32_t v95; // w3
  ShopHelpItemInfo_o *v96; // x21
  const MethodInfo *v97; // x5
  int32_t v98; // w2
  int32_t v99; // w3
  ShopHelpItemInfo_o *v100; // x21
  const MethodInfo *v101; // x5
  int32_t v102; // w2
  int32_t v103; // w3
  int32_t v104; // w2
  int32_t v105; // w3
  System_Array_o *v106; // x0
  struct ShopHelpItemInfo_ItemKind_array *v107; // x20
  int32_t v108; // w2
  int32_t v109; // w3
  __int64 v110; // x0
  System_RuntimeFieldHandle_o v111; // 0:w1.4

  if ( (byte_4A577C2 & 1) == 0 )
  {
    sub_1B885B0(&ShopHelpItemInfo_ItemKind___TypeInfo);
    sub_1B885B0(&ShopHelpItemInfo___TypeInfo);
    sub_1B885B0(&ShopHelpItemInfo_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&Field__PrivateImplementationDetails__E10CB21B9898DC890A2C12C77D0F3080A4687EE5D6F1EF7922CCF6259D7BB335);
    sub_1B885B0(&StringLiteral_12049/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_12058/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_14597/*"Tutorial/tutorial_alpha"*/);
    sub_1B885B0(&StringLiteral_20450/*"img_shop_15"*/);
    sub_1B885B0(&StringLiteral_20459/*"img_shop_7"*/);
    sub_1B885B0(&StringLiteral_20446/*"img_shop_11"*/);
    sub_1B885B0(&StringLiteral_12043/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_12048/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_12050/*"SHOP_HELP_SHOP04_SHOP_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_20456/*"img_shop_22"*/);
    sub_1B885B0(&StringLiteral_12054/*"SHOP_HELP_START_UP_SUMMON"*/);
    sub_1B885B0(&StringLiteral_24100/*"tutorial_0006"*/);
    sub_1B885B0(&StringLiteral_12040/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_12046/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_12042/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_12051/*"SHOP_HELP_SHOP13_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_20448/*"img_shop_13"*/);
    sub_1B885B0(&StringLiteral_20461/*"img_shop_9"*/);
    sub_1B885B0(&StringLiteral_12056/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_12057/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_20445/*"img_shop_10"*/);
    sub_1B885B0(&StringLiteral_12045/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_20451/*"img_shop_16"*/);
    sub_1B885B0(&StringLiteral_20452/*"img_shop_17"*/);
    sub_1B885B0(&StringLiteral_20454/*"img_shop_20"*/);
    sub_1B885B0(&StringLiteral_20460/*"img_shop_8"*/);
    sub_1B885B0(&StringLiteral_20458/*"img_shop_4"*/);
    sub_1B885B0(&StringLiteral_12041/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_20455/*"img_shop_21"*/);
    sub_1B885B0(&StringLiteral_20453/*"img_shop_18"*/);
    sub_1B885B0(&StringLiteral_12053/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_12044/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_20457/*"img_shop_3"*/);
    sub_1B885B0(&StringLiteral_20443/*"img_shop_0"*/);
    sub_1B885B0(&StringLiteral_14596/*"Tutorial/tutorial_0006"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_20449/*"img_shop_14"*/);
    sub_1B885B0(&StringLiteral_12055/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_20444/*"img_shop_1"*/);
    sub_1B885B0(&StringLiteral_24101/*"tutorial_alpha"*/);
    sub_1B885B0(&StringLiteral_12047/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_20447/*"img_shop_12"*/);
    sub_1B885B0(&StringLiteral_12052/*"SHOP_HELP_SHOP15_EXPLANATION"*/);
    byte_4A577C2 = 1;
  }
  v3 = sub_1B88658(string___TypeInfo, 2LL);
  if ( !v3 )
    goto LABEL_73;
  v7 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_71;
  v8 = StringLiteral_14596/*"Tutorial/tutorial_0006"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_14596/*"Tutorial/tutorial_0006"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), v8, v5, v6);
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_71;
  v11 = StringLiteral_14597/*"Tutorial/tutorial_alpha"*/;
  *(_QWORD *)(v7 + 40) = StringLiteral_14597/*"Tutorial/tutorial_alpha"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), v11, v9, v10);
  this->fields.helpBasePaths = (struct System_String_array *)v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.helpBasePaths, v7, v12, v13);
  v3 = sub_1B88658(string___TypeInfo, 2LL);
  if ( !v3 )
    goto LABEL_73;
  v16 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_71;
  v17 = StringLiteral_24100/*"tutorial_0006"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_24100/*"tutorial_0006"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), v17, v14, v15);
  if ( *(_DWORD *)(v16 + 24) <= 1u )
    goto LABEL_71;
  v20 = StringLiteral_24101/*"tutorial_alpha"*/;
  *(_QWORD *)(v16 + 40) = StringLiteral_24101/*"tutorial_alpha"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 40), v20, v18, v19);
  this->fields.helpBaseNames = (struct System_String_array *)v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.helpBaseNames, v16, v21, v22);
  v23 = (struct ShopHelpItemInfo_array *)sub_1B88658(ShopHelpItemInfo___TypeInfo, 20LL);
  v24 = (ShopHelpItemInfo_o *)sub_1B887FC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v24,
    1,
    (System_String_o *)StringLiteral_12043/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20460/*"img_shop_8"*/,
    2,
    v25);
  if ( !v23 )
LABEL_73:
    sub_1B8880C(v3, v4);
  if ( v24 )
  {
    v3 = sub_1B886EC(v24, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( !v23->max_length )
    goto LABEL_71;
  v23->m_Items[0] = v24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v23->m_Items, (int32_t)v24, v26, v27);
  v28 = (ShopHelpItemInfo_o *)sub_1B887FC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v28,
    16,
    (System_String_o *)StringLiteral_12054/*"SHOP_HELP_START_UP_SUMMON"*/,
    (System_String_o *)StringLiteral_20452/*"img_shop_17"*/,
    2,
    v29);
  if ( v28 )
  {
    v3 = sub_1B886EC(v28, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v23->max_length <= 1 )
    goto LABEL_71;
  v23->m_Items[1] = v28;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->m_Items[1], (int32_t)v28, v30, v31);
  v32 = (ShopHelpItemInfo_o *)sub_1B887FC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v32,
    2,
    (System_String_o *)StringLiteral_12048/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20458/*"img_shop_4"*/,
    2,
    v33);
  if ( v32 )
  {
    v3 = sub_1B886EC(v32, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v23->max_length <= 2 )
    goto LABEL_71;
  v23->m_Items[2] = v32;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->m_Items[2], (int32_t)v32, v34, v35);
  v36 = (ShopHelpItemInfo_o *)sub_1B887FC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v36,
    3,
    (System_String_o *)StringLiteral_12046/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20457/*"img_shop_3"*/,
    1,
    v37);
  if ( v36 )
  {
    v3 = sub_1B886EC(v36, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v23->max_length <= 3 )
    goto LABEL_71;
  v23->m_Items[3] = v36;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->m_Items[3], (int32_t)v36, v38, v39);
  v40 = (ShopHelpItemInfo_o *)sub_1B887FC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v40,
    4,
    (System_String_o *)StringLiteral_12047/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20446/*"img_shop_11"*/,
    2,
    v41);
  if ( v40 )
  {
    v3 = sub_1B886EC(v40, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v23->max_length <= 4 )
    goto LABEL_71;
  v23->m_Items[4] = v40;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->m_Items[4], (int32_t)v40, v42, v43);
  v44 = (ShopHelpItemInfo_o *)sub_1B887FC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v44,
    5,
    (System_String_o *)StringLiteral_12055/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20461/*"img_shop_9"*/,
    1,
    v45);
  if ( v44 )
  {
    v3 = sub_1B886EC(v44, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v23->max_length <= 5 )
    goto LABEL_71;
  v23->m_Items[5] = v44;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->m_Items[5], (int32_t)v44, v46, v47);
  v48 = (ShopHelpItemInfo_o *)sub_1B887FC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v48,
    6,
    (System_String_o *)StringLiteral_12056/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20444/*"img_shop_1"*/,
    1,
    v49);
  if ( v48 )
  {
    v3 = sub_1B886EC(v48, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v23->max_length <= 6 )
    goto LABEL_71;
  v23->m_Items[6] = v48;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->m_Items[6], (int32_t)v48, v50, v51);
  v52 = (ShopHelpItemInfo_o *)sub_1B887FC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v52,
    7,
    (System_String_o *)StringLiteral_12049/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20447/*"img_shop_12"*/,
    1,
    v53);
  if ( v52 )
  {
    v3 = sub_1B886EC(v52, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v23->max_length <= 7 )
    goto LABEL_71;
  v23->m_Items[7] = v52;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->m_Items[7], (int32_t)v52, v54, v55);
  v56 = (ShopHelpItemInfo_o *)sub_1B887FC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v56,
    8,
    (System_String_o *)StringLiteral_12042/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20448/*"img_shop_13"*/,
    1,
    v57);
  if ( v56 )
  {
    v3 = sub_1B886EC(v56, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v23->max_length <= 8 )
    goto LABEL_71;
  v23->m_Items[8] = v56;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->m_Items[8], (int32_t)v56, v58, v59);
  v60 = (ShopHelpItemInfo_o *)sub_1B887FC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v60,
    11,
    (System_String_o *)StringLiteral_12040/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20445/*"img_shop_10"*/,
    1,
    v61);
  if ( v60 )
  {
    v3 = sub_1B886EC(v60, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v23->max_length <= 9 )
    goto LABEL_71;
  v23->m_Items[9] = v60;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->m_Items[9], (int32_t)v60, v62, v63);
  v64 = (ShopHelpItemInfo_o *)sub_1B887FC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v64,
    13,
    (System_String_o *)StringLiteral_12053/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20449/*"img_shop_14"*/,
    2,
    v65);
  if ( v64 )
  {
    v3 = sub_1B886EC(v64, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v23->max_length <= 0xA )
    goto LABEL_71;
  v23->m_Items[10] = v64;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->m_Items[10], (int32_t)v64, v66, v67);
  v68 = (ShopHelpItemInfo_o *)sub_1B887FC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v68,
    12,
    (System_String_o *)StringLiteral_12057/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20459/*"img_shop_7"*/,
    1,
    v69);
  if ( v68 )
  {
    v3 = sub_1B886EC(v68, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v23->max_length <= 0xB )
    goto LABEL_71;
  v23->m_Items[11] = v68;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->m_Items[11], (int32_t)v68, v70, v71);
  v72 = (ShopHelpItemInfo_o *)sub_1B887FC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v72,
    14,
    (System_String_o *)StringLiteral_12045/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20450/*"img_shop_15"*/,
    1,
    v73);
  if ( v72 )
  {
    v3 = sub_1B886EC(v72, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v23->max_length <= 0xC )
    goto LABEL_71;
  v23->m_Items[12] = v72;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->m_Items[12], (int32_t)v72, v74, v75);
  v76 = (ShopHelpItemInfo_o *)sub_1B887FC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v76,
    15,
    (System_String_o *)StringLiteral_12050/*"SHOP_HELP_SHOP04_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20451/*"img_shop_16"*/,
    2,
    v77);
  if ( v76 )
  {
    v3 = sub_1B886EC(v76, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v23->max_length <= 0xD )
    goto LABEL_71;
  v23->m_Items[13] = v76;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->m_Items[13], (int32_t)v76, v78, v79);
  v80 = (ShopHelpItemInfo_o *)sub_1B887FC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v80,
    17,
    (System_String_o *)StringLiteral_12041/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20452/*"img_shop_17"*/,
    2,
    v81);
  if ( v80 )
  {
    v3 = sub_1B886EC(v80, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v23->max_length <= 0xE )
    goto LABEL_71;
  v23->m_Items[14] = v80;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->m_Items[14], (int32_t)v80, v82, v83);
  v84 = (ShopHelpItemInfo_o *)sub_1B887FC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v84,
    18,
    (System_String_o *)StringLiteral_12051/*"SHOP_HELP_SHOP13_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20453/*"img_shop_18"*/,
    1,
    v85);
  if ( v84 )
  {
    v3 = sub_1B886EC(v84, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v23->max_length <= 0xF )
    goto LABEL_71;
  v23->m_Items[15] = v84;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->m_Items[15], (int32_t)v84, v86, v87);
  v88 = (ShopHelpItemInfo_o *)sub_1B887FC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v88,
    19,
    (System_String_o *)StringLiteral_12058/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20454/*"img_shop_20"*/,
    2,
    v89);
  if ( v88 )
  {
    v3 = sub_1B886EC(v88, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v23->max_length <= 0x10 )
    goto LABEL_71;
  v23->m_Items[16] = v88;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->m_Items[16], (int32_t)v88, v90, v91);
  v92 = (ShopHelpItemInfo_o *)sub_1B887FC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v92,
    20,
    (System_String_o *)StringLiteral_12052/*"SHOP_HELP_SHOP15_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20455/*"img_shop_21"*/,
    2,
    v93);
  if ( v92 )
  {
    v3 = sub_1B886EC(v92, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v23->max_length <= 0x11 )
    goto LABEL_71;
  v23->m_Items[17] = v92;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->m_Items[17], (int32_t)v92, v94, v95);
  v96 = (ShopHelpItemInfo_o *)sub_1B887FC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v96,
    21,
    (System_String_o *)StringLiteral_12044/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20456/*"img_shop_22"*/,
    2,
    v97);
  if ( v96 )
  {
    v3 = sub_1B886EC(v96, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v23->max_length <= 0x12 )
    goto LABEL_71;
  v23->m_Items[18] = v96;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->m_Items[18], (int32_t)v96, v98, v99);
  v100 = (ShopHelpItemInfo_o *)sub_1B887FC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v100, 22, (System_String_o *)StringLiteral_1/*""*/, (System_String_o *)StringLiteral_20443/*"img_shop_0"*/, 1, v101);
  if ( v100 )
  {
    v3 = sub_1B886EC(v100, v23->obj.klass->_1.element_class);
    if ( !v3 )
    {
LABEL_72:
      v110 = sub_1B88830();
      sub_1B886D8(v110, 0LL);
    }
  }
  if ( v23->max_length <= 0x13 )
LABEL_71:
    sub_1B88814(v3, v4);
  v23->m_Items[19] = v100;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->m_Items[19], (int32_t)v100, v102, v103);
  this->fields.itemInfoList = v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemInfoList, (int32_t)v23, v104, v105);
  v106 = (System_Array_o *)sub_1B88658(ShopHelpItemInfo_ItemKind___TypeInfo, 18LL);
  v111.fields.value = Field__PrivateImplementationDetails__E10CB21B9898DC890A2C12C77D0F3080A4687EE5D6F1EF7922CCF6259D7BB335;
  v107 = (struct ShopHelpItemInfo_ItemKind_array *)v106;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v106, v111, 0LL);
  this->fields.kinds = v107;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.kinds, (int32_t)v107, v108, v109);
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
    sub_1B88554(p_onFadeOut, 0, v2, v3);
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
  ShopHelpMenu_o *baseDialog; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A577C0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ShopHelpListViewManager_CallOnFadeOut__);
    byte_4A577C0 = 1;
  }
  this->fields.onFadeOut = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onFadeOut, (int32_t)callback, (int32_t)method, v3);
  baseDialog = this->fields.baseDialog;
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopHelpListViewManager_CallOnFadeOut__, 0LL);
  if ( !baseDialog )
    sub_1B8880C(v8, v9);
  ShopHelpMenu__Close(baseDialog, v7, 0LL);
}


void __fastcall ShopHelpListViewManager__CreateList(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  ShopHelpMenu_o *baseDialog; // x0
  struct ShopHelpItemInfo_ItemKind_array *kinds; // x8
  struct ShopHelpItemInfo_ItemKind_array *v8; // x24
  __int64 v9; // x8
  unsigned __int64 v10; // x25
  int32_t v11; // w20
  struct ShopHelpItemInfo_array *itemInfoList; // x9
  __int64 v13; // x8
  ShopHelpItemInfo_o **m_Items; // x9
  ShopHelpItemInfo_o *v15; // x22
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t size; // w23
  __int64 v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4A577BF & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomUtility_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&ShopHelpListViewItem_TypeInfo);
    sub_1B885B0(&ShopRootConstants_TypeInfo);
    byte_4A577BF = 1;
  }
  this->fields.onFadeOut = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onFadeOut, 0, v2, v3);
  baseDialog = this->fields.baseDialog;
  if ( !baseDialog )
    goto LABEL_39;
  ShopHelpMenu__Open(baseDialog, 0LL);
  kinds = this->fields.kinds;
  if ( !kinds )
    goto LABEL_39;
  ListViewManager__CreateList((ListViewManager_o *)this, kinds->max_length, 0LL);
  v8 = this->fields.kinds;
  if ( !v8 )
    goto LABEL_39;
  v9 = *(_QWORD *)&v8->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v9 )
        sub_1B88814(baseDialog, v5);
      v11 = v8->m_Items[v10 + 1];
      switch ( v11 )
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
          baseDialog = (ShopHelpMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ShopMaster___);
          if ( !baseDialog )
            goto LABEL_39;
          baseDialog = (ShopHelpMenu_o *)ShopMaster__IsEnableEventShop_39926776((ShopMaster_o *)baseDialog, 0LL);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_36;
LABEL_24:
          itemInfoList = this->fields.itemInfoList;
          if ( !itemInfoList )
            goto LABEL_39;
          if ( (int)*(_QWORD *)&itemInfoList->max_length < 1 )
            goto LABEL_36;
          v13 = (unsigned int)*(_QWORD *)&itemInfoList->max_length;
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
        v15 = *m_Items;
        if ( *m_Items )
        {
          if ( v15->fields._Kind_k__BackingField == v11 )
            break;
        }
        --v13;
        ++m_Items;
        if ( !v13 )
          goto LABEL_36;
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      v18 = sub_1B887FC(ShopHelpListViewItem_TypeInfo);
      ListViewItem___ctor_40706472((ListViewItem_o *)v18, size, 0LL);
      *(_QWORD *)(v18 + 112) = v15;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 112), (int32_t)v15, v19, v20);
      items = itemList->fields._items;
      v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v25 = itemList->fields._size;
      if ( (unsigned int)v25 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v18,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + v25;
        itemList->fields._size = v25 + 1;
        v26[4] = (Il2CppClass *)v18;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 4), v18, v21, v22);
      }
LABEL_36:
      LODWORD(v9) = v8->max_length;
      if ( (__int64)++v10 >= (int)v9 )
        goto LABEL_37;
    }
LABEL_39:
    sub_1B8880C(baseDialog, v5);
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
  AssetData_o *AssetStorage; // x0
  __int64 v7; // x1

  if ( (byte_4A577BD & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D____76085376);
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A577BD = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( !AssetStorage )
    sub_1B8880C(0LL, v7);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__48635516(
                                      AssetStorage,
                                      name,
                                      (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
}


void __fastcall ShopHelpListViewManager__LoadBaseSprite(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  System_String_array *helpBasePaths; // x20
  System_Action_o *v4; // x21

  if ( (byte_4A577BB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__);
    byte_4A577BB = 1;
  }
  if ( !this->fields.initMode )
  {
    this->fields.initMode = 1;
    helpBasePaths = this->fields.helpBasePaths;
    v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_37797288(helpBasePaths, v4, 1, 0LL);
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

  if ( (byte_4A577BE & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A577BE = 1;
  }
  if ( !paths )
    sub_1B8880C(this, paths);
  v4 = *(_QWORD *)&paths->max_length;
  if ( (int)v4 >= 1 )
  {
    v5 = 0LL;
    do
    {
      if ( v5 >= (unsigned int)v4 )
        sub_1B88814(this, paths);
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
  if ( (byte_4A577BC & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_4A577BC = 1;
  }
  if ( v3->fields.initMode == 2 )
  {
    ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
    BaseWindow = v3->fields.BaseWindow;
    if ( !BaseWindow
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0LL)) == 0LL
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)BaseWindow,
                                                     (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL )
    {
      sub_1B8880C(BaseWindow, v4);
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

  if ( (byte_4A577C1 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1B885B0(&ShopHelpListViewObject_TypeInfo);
    byte_4A577C1 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ShopHelpListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ShopHelpListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopHelpListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
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

  v3 = this;
  if ( (byte_4A577C3 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&StringLiteral_4975/*"Custom/SpriteWithMask"*/);
    this = (ShopHelpListViewManager_o *)sub_1B885B0(&StringLiteral_16267/*"_MaskTex"*/);
    byte_4A577C3 = 1;
  }
  if ( v3->fields.initMode == 1 )
  {
    v4 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4975/*"Custom/SpriteWithMask"*/, 0LL);
    v5 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v5, v4, 0LL);
    BaseWindow = v3->fields.BaseWindow;
    if ( BaseWindow )
    {
      BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0LL);
      if ( BaseWindow )
      {
        BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)BaseWindow,
                                                   (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UITexture___);
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
                        (System_String_o *)StringLiteral_16267/*"_MaskTex"*/,
                        AssetStorageTexture2D,
                        0LL);
                      v3->fields.initMode = 2;
                      return;
                    }
LABEL_19:
                    sub_1B88814(BaseWindow, v6);
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_1B8880C(BaseWindow, v6);
  }
  ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
}