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
  const MethodInfo *v53; // x3
  __int64 v54; // x20
  int32_t v55; // w1
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  int32_t v58; // w1
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  __int64 v63; // x20
  int32_t v64; // w1
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  int32_t v67; // w1
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  struct ShopHelpItemInfo_array *v70; // x20
  ShopHelpItemInfo_o *v71; // x21
  const MethodInfo *v72; // x5
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  ShopHelpItemInfo_o *v75; // x21
  const MethodInfo *v76; // x5
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  ShopHelpItemInfo_o *v79; // x21
  const MethodInfo *v80; // x5
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  ShopHelpItemInfo_o *v83; // x21
  const MethodInfo *v84; // x5
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  ShopHelpItemInfo_o *v87; // x21
  const MethodInfo *v88; // x5
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  ShopHelpItemInfo_o *v91; // x21
  const MethodInfo *v92; // x5
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  ShopHelpItemInfo_o *v95; // x21
  const MethodInfo *v96; // x5
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  ShopHelpItemInfo_o *v99; // x21
  const MethodInfo *v100; // x5
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  ShopHelpItemInfo_o *v103; // x21
  const MethodInfo *v104; // x5
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  ShopHelpItemInfo_o *v107; // x21
  const MethodInfo *v108; // x5
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  ShopHelpItemInfo_o *v111; // x21
  const MethodInfo *v112; // x5
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  ShopHelpItemInfo_o *v115; // x21
  const MethodInfo *v116; // x5
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  ShopHelpItemInfo_o *v119; // x21
  const MethodInfo *v120; // x5
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  ShopHelpItemInfo_o *v123; // x21
  const MethodInfo *v124; // x5
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  ShopHelpItemInfo_o *v127; // x21
  const MethodInfo *v128; // x5
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  ShopHelpItemInfo_o *v131; // x21
  const MethodInfo *v132; // x5
  int32_t v133; // w2
  const MethodInfo *v134; // x3
  ShopHelpItemInfo_o *v135; // x21
  const MethodInfo *v136; // x5
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  ShopHelpItemInfo_o *v139; // x21
  const MethodInfo *v140; // x5
  int32_t v141; // w2
  const MethodInfo *v142; // x3
  ShopHelpItemInfo_o *v143; // x21
  const MethodInfo *v144; // x5
  int32_t v145; // w2
  const MethodInfo *v146; // x3
  ShopHelpItemInfo_o *v147; // x21
  const MethodInfo *v148; // x5
  int32_t v149; // w2
  const MethodInfo *v150; // x3
  int32_t v151; // w2
  const MethodInfo *v152; // x3
  System_Array_o *v153; // x0
  struct ShopHelpItemInfo_ItemKind_array *v154; // x20
  int32_t v155; // w2
  const MethodInfo *v156; // x3
  __int64 v157; // x0
  System_RuntimeFieldHandle_o v158; // 0:w1.4

  if ( (byte_4A4A80D & 1) == 0 )
  {
    sub_1B863B8(&ShopHelpItemInfo_ItemKind___TypeInfo, method);
    sub_1B863B8(&ShopHelpItemInfo___TypeInfo, v3);
    sub_1B863B8(&ShopHelpItemInfo_TypeInfo, v4);
    sub_1B863B8(&string___TypeInfo, v5);
    sub_1B863B8(
      &Field__PrivateImplementationDetails__E10CB21B9898DC890A2C12C77D0F3080A4687EE5D6F1EF7922CCF6259D7BB335,
      v6);
    sub_1B863B8(&StringLiteral_11910/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/, v7);
    sub_1B863B8(&StringLiteral_11917/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/, v8);
    sub_1B863B8(&StringLiteral_11906/*"SHOP_HELP_PURE_PRI_EXPLANATION"*/, v9);
    sub_1B863B8(&StringLiteral_14386/*"Tutorial/tutorial_alpha"*/, v10);
    sub_1B863B8(&StringLiteral_20258/*"img_shop_15"*/, v11);
    sub_1B863B8(&StringLiteral_20267/*"img_shop_7"*/, v12);
    sub_1B863B8(&StringLiteral_20254/*"img_shop_11"*/, v13);
    sub_1B863B8(&StringLiteral_11916/*"SHOP_HELP_SVT_COSTUME_EXPLANATION"*/, v14);
    sub_1B863B8(&StringLiteral_11902/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/, v15);
    sub_1B863B8(&StringLiteral_11909/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/, v16);
    sub_1B863B8(&StringLiteral_20264/*"img_shop_22"*/, v17);
    sub_1B863B8(&StringLiteral_11912/*"SHOP_HELP_START_UP_SUMMON"*/, v18);
    sub_1B863B8(&StringLiteral_23938/*"tutorial_0006"*/, v19);
    sub_1B863B8(&StringLiteral_11899/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/, v20);
    sub_1B863B8(&StringLiteral_11905/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/, v21);
    sub_1B863B8(&StringLiteral_11901/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/, v22);
    sub_1B863B8(&StringLiteral_11908/*"SHOP_HELP_REVIVAL_ITEM_EXPLANATION"*/, v23);
    sub_1B863B8(&StringLiteral_20256/*"img_shop_13"*/, v24);
    sub_1B863B8(&StringLiteral_20269/*"img_shop_9"*/, v25);
    sub_1B863B8(&StringLiteral_11914/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/, v26);
    sub_1B863B8(&StringLiteral_11915/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/, v27);
    sub_1B863B8(&StringLiteral_20253/*"img_shop_10"*/, v28);
    sub_1B863B8(&StringLiteral_11904/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/, v29);
    sub_1B863B8(&StringLiteral_20259/*"img_shop_16"*/, v30);
    sub_1B863B8(&StringLiteral_20260/*"img_shop_17"*/, v31);
    sub_1B863B8(&StringLiteral_20262/*"img_shop_20"*/, v32);
    sub_1B863B8(&StringLiteral_20268/*"img_shop_8"*/, v33);
    sub_1B863B8(&StringLiteral_20266/*"img_shop_4"*/, v34);
    sub_1B863B8(&StringLiteral_11900/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/, v35);
    sub_1B863B8(&StringLiteral_20263/*"img_shop_21"*/, v36);
    sub_1B863B8(&StringLiteral_20261/*"img_shop_18"*/, v37);
    sub_1B863B8(&StringLiteral_11911/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/, v38);
    sub_1B863B8(&StringLiteral_11903/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/, v39);
    sub_1B863B8(&StringLiteral_20265/*"img_shop_3"*/, v40);
    sub_1B863B8(&StringLiteral_20251/*"img_shop_0"*/, v41);
    sub_1B863B8(&StringLiteral_14385/*"Tutorial/tutorial_0006"*/, v42);
    sub_1B863B8(&StringLiteral_1/*""*/, v43);
    sub_1B863B8(&StringLiteral_20257/*"img_shop_14"*/, v44);
    sub_1B863B8(&StringLiteral_11913/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/, v45);
    sub_1B863B8(&StringLiteral_20252/*"img_shop_1"*/, v46);
    sub_1B863B8(&StringLiteral_23939/*"tutorial_alpha"*/, v47);
    sub_1B863B8(&StringLiteral_11907/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/, v48);
    sub_1B863B8(&StringLiteral_20255/*"img_shop_12"*/, v49);
    byte_4A4A80D = 1;
  }
  v50 = sub_1B86460(string___TypeInfo, 2LL);
  if ( !v50 )
    goto LABEL_73;
  v54 = v50;
  if ( !*(_DWORD *)(v50 + 24) )
    goto LABEL_71;
  v55 = StringLiteral_14385/*"Tutorial/tutorial_0006"*/;
  *(_QWORD *)(v50 + 32) = StringLiteral_14385/*"Tutorial/tutorial_0006"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v50 + 32), v55, v52, v53);
  if ( *(_DWORD *)(v54 + 24) <= 1u )
    goto LABEL_71;
  v58 = StringLiteral_14386/*"Tutorial/tutorial_alpha"*/;
  *(_QWORD *)(v54 + 40) = StringLiteral_14386/*"Tutorial/tutorial_alpha"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v54 + 40), v58, v56, v57);
  this->fields.helpBasePaths = (struct System_String_array *)v54;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.helpBasePaths, v54, v59, v60);
  v50 = sub_1B86460(string___TypeInfo, 2LL);
  if ( !v50 )
    goto LABEL_73;
  v63 = v50;
  if ( !*(_DWORD *)(v50 + 24) )
    goto LABEL_71;
  v64 = StringLiteral_23938/*"tutorial_0006"*/;
  *(_QWORD *)(v50 + 32) = StringLiteral_23938/*"tutorial_0006"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v50 + 32), v64, v61, v62);
  if ( *(_DWORD *)(v63 + 24) <= 1u )
    goto LABEL_71;
  v67 = StringLiteral_23939/*"tutorial_alpha"*/;
  *(_QWORD *)(v63 + 40) = StringLiteral_23939/*"tutorial_alpha"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v63 + 40), v67, v65, v66);
  this->fields.helpBaseNames = (struct System_String_array *)v63;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.helpBaseNames, v63, v68, v69);
  v70 = (struct ShopHelpItemInfo_array *)sub_1B86460(ShopHelpItemInfo___TypeInfo, 20LL);
  v71 = (ShopHelpItemInfo_o *)sub_1B86604(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v71,
    1,
    (System_String_o *)StringLiteral_11902/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20268/*"img_shop_8"*/,
    2,
    v72);
  if ( !v70 )
LABEL_73:
    sub_1B86614(v50, v51);
  if ( v71 )
  {
    v50 = sub_1B864F4(v71, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( !v70->max_length )
    goto LABEL_71;
  v70->m_Items[0] = v71;
  sub_1B8635C((CGThumbnailListItem_o *)v70->m_Items, (int32_t)v71, v73, v74);
  v75 = (ShopHelpItemInfo_o *)sub_1B86604(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v75,
    16,
    (System_String_o *)StringLiteral_11912/*"SHOP_HELP_START_UP_SUMMON"*/,
    (System_String_o *)StringLiteral_20260/*"img_shop_17"*/,
    2,
    v76);
  if ( v75 )
  {
    v50 = sub_1B864F4(v75, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 1 )
    goto LABEL_71;
  v70->m_Items[1] = v75;
  sub_1B8635C((CGThumbnailListItem_o *)&v70->m_Items[1], (int32_t)v75, v77, v78);
  v79 = (ShopHelpItemInfo_o *)sub_1B86604(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v79,
    2,
    (System_String_o *)StringLiteral_11909/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20266/*"img_shop_4"*/,
    2,
    v80);
  if ( v79 )
  {
    v50 = sub_1B864F4(v79, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 2 )
    goto LABEL_71;
  v70->m_Items[2] = v79;
  sub_1B8635C((CGThumbnailListItem_o *)&v70->m_Items[2], (int32_t)v79, v81, v82);
  v83 = (ShopHelpItemInfo_o *)sub_1B86604(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v83,
    3,
    (System_String_o *)StringLiteral_11905/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20265/*"img_shop_3"*/,
    1,
    v84);
  if ( v83 )
  {
    v50 = sub_1B864F4(v83, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 3 )
    goto LABEL_71;
  v70->m_Items[3] = v83;
  sub_1B8635C((CGThumbnailListItem_o *)&v70->m_Items[3], (int32_t)v83, v85, v86);
  v87 = (ShopHelpItemInfo_o *)sub_1B86604(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v87,
    4,
    (System_String_o *)StringLiteral_11907/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20254/*"img_shop_11"*/,
    2,
    v88);
  if ( v87 )
  {
    v50 = sub_1B864F4(v87, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 4 )
    goto LABEL_71;
  v70->m_Items[4] = v87;
  sub_1B8635C((CGThumbnailListItem_o *)&v70->m_Items[4], (int32_t)v87, v89, v90);
  v91 = (ShopHelpItemInfo_o *)sub_1B86604(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v91,
    5,
    (System_String_o *)StringLiteral_11913/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20269/*"img_shop_9"*/,
    1,
    v92);
  if ( v91 )
  {
    v50 = sub_1B864F4(v91, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 5 )
    goto LABEL_71;
  v70->m_Items[5] = v91;
  sub_1B8635C((CGThumbnailListItem_o *)&v70->m_Items[5], (int32_t)v91, v93, v94);
  v95 = (ShopHelpItemInfo_o *)sub_1B86604(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v95,
    6,
    (System_String_o *)StringLiteral_11914/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20252/*"img_shop_1"*/,
    1,
    v96);
  if ( v95 )
  {
    v50 = sub_1B864F4(v95, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 6 )
    goto LABEL_71;
  v70->m_Items[6] = v95;
  sub_1B8635C((CGThumbnailListItem_o *)&v70->m_Items[6], (int32_t)v95, v97, v98);
  v99 = (ShopHelpItemInfo_o *)sub_1B86604(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v99,
    7,
    (System_String_o *)StringLiteral_11910/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20255/*"img_shop_12"*/,
    1,
    v100);
  if ( v99 )
  {
    v50 = sub_1B864F4(v99, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 7 )
    goto LABEL_71;
  v70->m_Items[7] = v99;
  sub_1B8635C((CGThumbnailListItem_o *)&v70->m_Items[7], (int32_t)v99, v101, v102);
  v103 = (ShopHelpItemInfo_o *)sub_1B86604(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v103,
    8,
    (System_String_o *)StringLiteral_11901/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20256/*"img_shop_13"*/,
    1,
    v104);
  if ( v103 )
  {
    v50 = sub_1B864F4(v103, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 8 )
    goto LABEL_71;
  v70->m_Items[8] = v103;
  sub_1B8635C((CGThumbnailListItem_o *)&v70->m_Items[8], (int32_t)v103, v105, v106);
  v107 = (ShopHelpItemInfo_o *)sub_1B86604(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v107,
    11,
    (System_String_o *)StringLiteral_11899/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20253/*"img_shop_10"*/,
    1,
    v108);
  if ( v107 )
  {
    v50 = sub_1B864F4(v107, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 9 )
    goto LABEL_71;
  v70->m_Items[9] = v107;
  sub_1B8635C((CGThumbnailListItem_o *)&v70->m_Items[9], (int32_t)v107, v109, v110);
  v111 = (ShopHelpItemInfo_o *)sub_1B86604(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v111,
    13,
    (System_String_o *)StringLiteral_11911/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20257/*"img_shop_14"*/,
    2,
    v112);
  if ( v111 )
  {
    v50 = sub_1B864F4(v111, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0xA )
    goto LABEL_71;
  v70->m_Items[10] = v111;
  sub_1B8635C((CGThumbnailListItem_o *)&v70->m_Items[10], (int32_t)v111, v113, v114);
  v115 = (ShopHelpItemInfo_o *)sub_1B86604(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v115,
    12,
    (System_String_o *)StringLiteral_11915/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20267/*"img_shop_7"*/,
    1,
    v116);
  if ( v115 )
  {
    v50 = sub_1B864F4(v115, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0xB )
    goto LABEL_71;
  v70->m_Items[11] = v115;
  sub_1B8635C((CGThumbnailListItem_o *)&v70->m_Items[11], (int32_t)v115, v117, v118);
  v119 = (ShopHelpItemInfo_o *)sub_1B86604(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v119,
    14,
    (System_String_o *)StringLiteral_11904/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20258/*"img_shop_15"*/,
    1,
    v120);
  if ( v119 )
  {
    v50 = sub_1B864F4(v119, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0xC )
    goto LABEL_71;
  v70->m_Items[12] = v119;
  sub_1B8635C((CGThumbnailListItem_o *)&v70->m_Items[12], (int32_t)v119, v121, v122);
  v123 = (ShopHelpItemInfo_o *)sub_1B86604(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v123,
    15,
    (System_String_o *)StringLiteral_11916/*"SHOP_HELP_SVT_COSTUME_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20259/*"img_shop_16"*/,
    2,
    v124);
  if ( v123 )
  {
    v50 = sub_1B864F4(v123, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0xD )
    goto LABEL_71;
  v70->m_Items[13] = v123;
  sub_1B8635C((CGThumbnailListItem_o *)&v70->m_Items[13], (int32_t)v123, v125, v126);
  v127 = (ShopHelpItemInfo_o *)sub_1B86604(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v127,
    17,
    (System_String_o *)StringLiteral_11900/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20260/*"img_shop_17"*/,
    2,
    v128);
  if ( v127 )
  {
    v50 = sub_1B864F4(v127, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0xE )
    goto LABEL_71;
  v70->m_Items[14] = v127;
  sub_1B8635C((CGThumbnailListItem_o *)&v70->m_Items[14], (int32_t)v127, v129, v130);
  v131 = (ShopHelpItemInfo_o *)sub_1B86604(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v131,
    18,
    (System_String_o *)StringLiteral_11906/*"SHOP_HELP_PURE_PRI_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20261/*"img_shop_18"*/,
    1,
    v132);
  if ( v131 )
  {
    v50 = sub_1B864F4(v131, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0xF )
    goto LABEL_71;
  v70->m_Items[15] = v131;
  sub_1B8635C((CGThumbnailListItem_o *)&v70->m_Items[15], (int32_t)v131, v133, v134);
  v135 = (ShopHelpItemInfo_o *)sub_1B86604(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v135,
    19,
    (System_String_o *)StringLiteral_11917/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20262/*"img_shop_20"*/,
    2,
    v136);
  if ( v135 )
  {
    v50 = sub_1B864F4(v135, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0x10 )
    goto LABEL_71;
  v70->m_Items[16] = v135;
  sub_1B8635C((CGThumbnailListItem_o *)&v70->m_Items[16], (int32_t)v135, v137, v138);
  v139 = (ShopHelpItemInfo_o *)sub_1B86604(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v139,
    20,
    (System_String_o *)StringLiteral_11908/*"SHOP_HELP_REVIVAL_ITEM_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20263/*"img_shop_21"*/,
    2,
    v140);
  if ( v139 )
  {
    v50 = sub_1B864F4(v139, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0x11 )
    goto LABEL_71;
  v70->m_Items[17] = v139;
  sub_1B8635C((CGThumbnailListItem_o *)&v70->m_Items[17], (int32_t)v139, v141, v142);
  v143 = (ShopHelpItemInfo_o *)sub_1B86604(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v143,
    21,
    (System_String_o *)StringLiteral_11903/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20264/*"img_shop_22"*/,
    2,
    v144);
  if ( v143 )
  {
    v50 = sub_1B864F4(v143, v70->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v70->max_length <= 0x12 )
    goto LABEL_71;
  v70->m_Items[18] = v143;
  sub_1B8635C((CGThumbnailListItem_o *)&v70->m_Items[18], (int32_t)v143, v145, v146);
  v147 = (ShopHelpItemInfo_o *)sub_1B86604(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v147, 22, (System_String_o *)StringLiteral_1/*""*/, (System_String_o *)StringLiteral_20251/*"img_shop_0"*/, 1, v148);
  if ( v147 )
  {
    v50 = sub_1B864F4(v147, v70->obj.klass->_1.element_class);
    if ( !v50 )
    {
LABEL_72:
      v157 = sub_1B86638();
      sub_1B864E0(v157, 0LL);
    }
  }
  if ( v70->max_length <= 0x13 )
LABEL_71:
    sub_1B8661C(v50, v51);
  v70->m_Items[19] = v147;
  sub_1B8635C((CGThumbnailListItem_o *)&v70->m_Items[19], (int32_t)v147, v149, v150);
  this->fields.itemInfoList = v70;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.itemInfoList, (int32_t)v70, v151, v152);
  v153 = (System_Array_o *)sub_1B86460(ShopHelpItemInfo_ItemKind___TypeInfo, 18LL);
  v158.fields.value = Field__PrivateImplementationDetails__E10CB21B9898DC890A2C12C77D0F3080A4687EE5D6F1EF7922CCF6259D7BB335;
  v154 = (struct ShopHelpItemInfo_ItemKind_array *)v153;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62345492(v153, v158, 0LL);
  this->fields.kinds = v154;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.kinds, (int32_t)v154, v155, v156);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ShopHelpListViewManager__CallOnFadeOut(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Action_o *onFadeOut; // x19
  CGThumbnailListItem_o *p_onFadeOut; // x0

  onFadeOut = this->fields.onFadeOut;
  if ( onFadeOut )
  {
    p_onFadeOut = (CGThumbnailListItem_o *)&this->fields.onFadeOut;
    p_onFadeOut->klass = 0LL;
    sub_1B8635C(p_onFadeOut, 0, v2, v3);
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
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  ShopHelpMenu_o *baseDialog; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A4A80B & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, callback);
    sub_1B863B8(&Method_ShopHelpListViewManager_CallOnFadeOut__, v6);
    byte_4A4A80B = 1;
  }
  this->fields.onFadeOut = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.onFadeOut, (int32_t)callback, (int32_t)method, v3);
  baseDialog = this->fields.baseDialog;
  v8 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ShopHelpListViewManager_CallOnFadeOut__, 0LL);
  if ( !baseDialog )
    sub_1B86614(v9, v10);
  ShopHelpMenu__Close(baseDialog, v8, 0LL);
}


void __fastcall ShopHelpListViewManager__CreateList(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
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
  unsigned __int64 i; // x25
  int32_t v17; // w20
  struct ShopHelpItemInfo_array *itemInfoList; // x9
  __int64 v19; // x8
  ShopHelpItemInfo_o **m_Items; // x9
  ShopHelpItemInfo_o *v21; // x22
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t size; // w23
  __int64 v24; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4A4A80A & 1) == 0 )
  {
    sub_1B863B8(&CoinRoomUtility_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMaster_ShopMaster___, v5);
    sub_1B863B8(&DataManager_TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_1B863B8(&ShopHelpListViewItem_TypeInfo, v9);
    sub_1B863B8(&ShopRootConstants_TypeInfo, v10);
    byte_4A4A80A = 1;
  }
  this->fields.onFadeOut = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.onFadeOut, 0, v2, v3);
  baseDialog = this->fields.baseDialog;
  if ( !baseDialog
    || (ShopHelpMenu__Open(baseDialog, 0LL), (kinds = this->fields.kinds) == 0LL)
    || (ListViewManager__CreateList((ListViewManager_o *)this, kinds->max_length, 0LL), (v14 = this->fields.kinds) == 0LL) )
  {
LABEL_39:
    sub_1B86614(baseDialog, v11);
  }
  v15 = *(_QWORD *)&v14->max_length;
  if ( (int)v15 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v15; ++i )
    {
      if ( i >= (unsigned int)v15 )
        sub_1B8661C(baseDialog, v11);
      v17 = v14->m_Items[i + 1];
      switch ( v17 )
      {
        case 17:
          if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
          baseDialog = (ShopHelpMenu_o *)CoinRoomUtility__IsTargetQuestClear(0LL);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_36;
          break;
        case 16:
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          baseDialog = (ShopHelpMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ShopMaster___);
          if ( !baseDialog )
            goto LABEL_39;
          baseDialog = (ShopHelpMenu_o *)ShopMaster__IsEnableEventShop_40952200((ShopMaster_o *)baseDialog, 0LL);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_36;
          break;
        case 15:
          if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          baseDialog = (ShopHelpMenu_o *)ShopRootConstants__IsSvtCostumeShopOpen(0LL);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_36;
          break;
      }
      itemInfoList = this->fields.itemInfoList;
      if ( !itemInfoList )
        goto LABEL_39;
      if ( (int)*(_QWORD *)&itemInfoList->max_length >= 1 )
      {
        v19 = (unsigned int)*(_QWORD *)&itemInfoList->max_length;
        m_Items = itemInfoList->m_Items;
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
          goto LABEL_39;
        size = itemList->fields._size;
        v24 = sub_1B86604(ShopHelpListViewItem_TypeInfo);
        ListViewItem___ctor_41775716((ListViewItem_o *)v24, size, 0LL);
        *(_QWORD *)(v24 + 112) = v21;
        sub_1B8635C((CGThumbnailListItem_o *)(v24 + 112), (int32_t)v21, v25, v26);
        items = itemList->fields._items;
        v30 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          goto LABEL_39;
        v31 = itemList->fields._size;
        if ( (unsigned int)v31 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v24,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + v31;
          itemList->fields._size = v31 + 1;
          v32[4] = (Il2CppClass *)v24;
          sub_1B8635C((CGThumbnailListItem_o *)(v32 + 4), v24, v27, v28);
        }
      }
LABEL_36:
      LODWORD(v15) = v14->max_length;
    }
  }
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

  if ( (byte_4A4A808 & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_Texture2D____76085320, path);
    sub_1B863B8(&AssetManager_TypeInfo, v6);
    byte_4A4A808 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( !AssetStorage )
    sub_1B86614(0LL, v8);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__49610244(
                                      AssetStorage,
                                      name,
                                      (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_Texture2D____76085320);
}


void __fastcall ShopHelpListViewManager__LoadBaseSprite(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_array *helpBasePaths; // x20
  System_Action_o *v6; // x21

  if ( (byte_4A4A806 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&AssetManager_TypeInfo, v3);
    sub_1B863B8(&Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__, v4);
    byte_4A4A806 = 1;
  }
  if ( !this->fields.initMode )
  {
    this->fields.initMode = 1;
    helpBasePaths = this->fields.helpBasePaths;
    v6 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_38751600(helpBasePaths, v6, 1, 0LL);
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

  if ( (byte_4A4A809 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1B863B8(&AssetManager_TypeInfo, paths);
    byte_4A4A809 = 1;
  }
  if ( !paths )
    sub_1B86614(this, paths);
  v4 = *(_QWORD *)&paths->max_length;
  if ( (int)v4 >= 1 )
  {
    v5 = 0LL;
    do
    {
      if ( v5 >= (unsigned int)v4 )
        sub_1B8661C(this, paths);
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
  if ( (byte_4A4A807 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1B863B8(&Method_UnityEngine_Component_GetComponent_UITexture___, method);
    byte_4A4A807 = 1;
  }
  if ( v3->fields.initMode == 2 )
  {
    ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
    BaseWindow = v3->fields.BaseWindow;
    if ( !BaseWindow
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0LL)) == 0LL
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)BaseWindow,
                                                     (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL )
    {
      sub_1B86614(BaseWindow, v4);
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

  if ( (byte_4A4A80C & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1B863B8(&ShopHelpListViewObject_TypeInfo, obj);
    byte_4A4A80C = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ShopHelpListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ShopHelpListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopHelpListViewObject_TypeInfo )
  {
    sub_1B86614(this, obj);
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
  if ( (byte_4A4A80E & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_UITexture___, method);
    sub_1B863B8(&UnityEngine_Material_TypeInfo, v4);
    sub_1B863B8(&StringLiteral_4910/*"Custom/SpriteWithMask"*/, v5);
    this = (ShopHelpListViewManager_o *)sub_1B863B8(&StringLiteral_16032/*"_MaskTex"*/, v6);
    byte_4A4A80E = 1;
  }
  if ( v3->fields.initMode == 1 )
  {
    v7 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4910/*"Custom/SpriteWithMask"*/, 0LL);
    v8 = (UnityEngine_Material_o *)sub_1B86604(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v8, v7, 0LL);
    BaseWindow = v3->fields.BaseWindow;
    if ( BaseWindow )
    {
      BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0LL);
      if ( BaseWindow )
      {
        BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)BaseWindow,
                                                   (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UITexture___);
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
                        (System_String_o *)StringLiteral_16032/*"_MaskTex"*/,
                        AssetStorageTexture2D,
                        0LL);
                      v3->fields.initMode = 2;
                      return;
                    }
LABEL_19:
                    sub_1B8661C(BaseWindow, v9);
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_1B86614(BaseWindow, v9);
  }
  ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
}