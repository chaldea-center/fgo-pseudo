void __fastcall ShopTopListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
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
  struct ShopTopItemInfo_array *v41; // x19
  ShopTopItemInfo_o *v42; // x20
  const MethodInfo *v43; // x6
  __int64 v44; // x0
  __int64 v45; // x1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  ShopTopItemInfo_o *v48; // x20
  const MethodInfo *v49; // x6
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  ShopTopItemInfo_o *v52; // x20
  const MethodInfo *v53; // x6
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  ShopTopItemInfo_o *v56; // x20
  const MethodInfo *v57; // x6
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  ShopTopItemInfo_o *v60; // x20
  const MethodInfo *v61; // x6
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  ShopTopItemInfo_o *v64; // x20
  const MethodInfo *v65; // x6
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  ShopTopItemInfo_o *v68; // x20
  const MethodInfo *v69; // x6
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  ShopTopItemInfo_o *v72; // x20
  const MethodInfo *v73; // x6
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  ShopTopItemInfo_o *v76; // x20
  const MethodInfo *v77; // x6
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  ShopTopItemInfo_o *v80; // x20
  const MethodInfo *v81; // x6
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  ShopTopItemInfo_o *v84; // x20
  const MethodInfo *v85; // x6
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  ShopTopItemInfo_o *v88; // x20
  const MethodInfo *v89; // x6
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  ShopTopItemInfo_o *v92; // x20
  const MethodInfo *v93; // x6
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  ShopTopItemInfo_o *v96; // x20
  const MethodInfo *v97; // x6
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  ShopTopItemInfo_o *v100; // x20
  const MethodInfo *v101; // x6
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  ShopTopItemInfo_o *v104; // x20
  const MethodInfo *v105; // x6
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  ShopTopItemInfo_o *v108; // x20
  const MethodInfo *v109; // x6
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  ShopTopItemInfo_o *v112; // x20
  const MethodInfo *v113; // x6
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  ShopTopItemInfo_o *v116; // x20
  const MethodInfo *v117; // x6
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  __int64 v122; // x0

  if ( (byte_4A4A8D6 & 1) == 0 )
  {
    sub_1B863B8(&ShopTopItemInfo___TypeInfo, v1);
    sub_1B863B8(&ShopTopItemInfo_TypeInfo, v2);
    sub_1B863B8(&ShopTopListViewManager_TypeInfo, v3);
    sub_1B863B8(&StringLiteral_11881/*"SHOP_BUY_STONE_FRAGMENTS"*/, v4);
    sub_1B863B8(&StringLiteral_21112/*"mask00"*/, v5);
    sub_1B863B8(&StringLiteral_11847/*"SHOP_BUY_ANONYMOUS"*/, v6);
    sub_1B863B8(&StringLiteral_11876/*"SHOP_BUY_REVIVAL_ITEM"*/, v7);
    sub_1B863B8(&StringLiteral_20258/*"img_shop_15"*/, v8);
    sub_1B863B8(&StringLiteral_11971/*"SHOP_START_UP_SUMMON"*/, v9);
    sub_1B863B8(&StringLiteral_20254/*"img_shop_11"*/, v10);
    sub_1B863B8(&StringLiteral_11963/*"SHOP_SELL_SERVANT"*/, v11);
    sub_1B863B8(&StringLiteral_20264/*"img_shop_22"*/, v12);
    sub_1B863B8(&StringLiteral_11864/*"SHOP_BUY_GRAIL_FRAGMENTS"*/, v13);
    sub_1B863B8(&StringLiteral_11874/*"SHOP_BUY_RARE_PRI"*/, v14);
    sub_1B863B8(&StringLiteral_11897/*"SHOP_EVENT_SVT_EQUIP"*/, v15);
    sub_1B863B8(&StringLiteral_11849/*"SHOP_BUY_BANK_ITEM"*/, v16);
    sub_1B863B8(&StringLiteral_11972/*"SHOP_TRADE_AP"*/, v17);
    sub_1B863B8(&StringLiteral_20256/*"img_shop_13"*/, v18);
    sub_1B863B8(&StringLiteral_20269/*"img_shop_9"*/, v19);
    sub_1B863B8(&StringLiteral_11869/*"SHOP_BUY_MANA_ITEM"*/, v20);
    sub_1B863B8(&StringLiteral_11887/*"SHOP_BUY_SVT_COSTUME"*/, v21);
    sub_1B863B8(&StringLiteral_20253/*"img_shop_10"*/, v22);
    sub_1B863B8(&StringLiteral_20259/*"img_shop_16"*/, v23);
    sub_1B863B8(&StringLiteral_20260/*"img_shop_17"*/, v24);
    sub_1B863B8(&StringLiteral_20262/*"img_shop_20"*/, v25);
    sub_1B863B8(&StringLiteral_20268/*"img_shop_8"*/, v26);
    sub_1B863B8(&StringLiteral_11892/*"SHOP_COIN_ROOM"*/, v27);
    sub_1B863B8(&StringLiteral_20266/*"img_shop_4"*/, v28);
    sub_1B863B8(&StringLiteral_20263/*"img_shop_21"*/, v29);
    sub_1B863B8(&StringLiteral_20261/*"img_shop_18"*/, v30);
    sub_1B863B8(&StringLiteral_11878/*"SHOP_BUY_SERVANT_STORAGE"*/, v31);
    sub_1B863B8(&StringLiteral_11861/*"SHOP_BUY_EVENT_ITEM"*/, v32);
    sub_1B863B8(&StringLiteral_20265/*"img_shop_3"*/, v33);
    sub_1B863B8(&StringLiteral_11880/*"SHOP_BUY_SPECIAL_ITEM"*/, v34);
    sub_1B863B8(&StringLiteral_1/*""*/, v35);
    sub_1B863B8(&StringLiteral_20257/*"img_shop_14"*/, v36);
    sub_1B863B8(&StringLiteral_20252/*"img_shop_1"*/, v37);
    sub_1B863B8(&StringLiteral_11873/*"SHOP_BUY_PURE_PRI"*/, v38);
    sub_1B863B8(&StringLiteral_11877/*"SHOP_BUY_SERVANT_EQUIP_STORAGE"*/, v39);
    sub_1B863B8(&StringLiteral_20255/*"img_shop_12"*/, v40);
    byte_4A4A8D6 = 1;
  }
  v41 = (struct ShopTopItemInfo_array *)sub_1B86460(ShopTopItemInfo___TypeInfo, 19LL);
  v42 = (ShopTopItemInfo_o *)sub_1B86604(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v42,
    5,
    (System_String_o *)StringLiteral_11861/*"SHOP_BUY_EVENT_ITEM"*/,
    (System_String_o *)StringLiteral_20268/*"img_shop_8"*/,
    7,
    1,
    v43);
  if ( !v41 )
    sub_1B86614(v44, v45);
  if ( v42 )
  {
    v44 = sub_1B864F4(v42, v41->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_63;
  }
  if ( !v41->max_length )
    goto LABEL_62;
  v41->m_Items[0] = v42;
  sub_1B8635C((CGThumbnailListItem_o *)v41->m_Items, (int32_t)v42, v46, v47);
  v48 = (ShopTopItemInfo_o *)sub_1B86604(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v48,
    9,
    (System_String_o *)StringLiteral_11971/*"SHOP_START_UP_SUMMON"*/,
    (System_String_o *)StringLiteral_20260/*"img_shop_17"*/,
    16,
    12,
    v49);
  if ( v48 )
  {
    v44 = sub_1B864F4(v48, v41->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_63;
  }
  if ( v41->max_length <= 1 )
    goto LABEL_62;
  v41->m_Items[1] = v48;
  sub_1B8635C((CGThumbnailListItem_o *)&v41->m_Items[1], (int32_t)v48, v50, v51);
  v52 = (ShopTopItemInfo_o *)sub_1B86604(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v52,
    8,
    (System_String_o *)StringLiteral_11963/*"SHOP_SELL_SERVANT"*/,
    (System_String_o *)StringLiteral_20266/*"img_shop_4"*/,
    9,
    0,
    v53);
  if ( v52 )
  {
    v44 = sub_1B864F4(v52, v41->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_63;
  }
  if ( v41->max_length <= 2 )
    goto LABEL_62;
  v41->m_Items[2] = v52;
  sub_1B8635C((CGThumbnailListItem_o *)&v41->m_Items[2], (int32_t)v52, v54, v55);
  v56 = (ShopTopItemInfo_o *)sub_1B86604(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v56,
    3,
    (System_String_o *)StringLiteral_11869/*"SHOP_BUY_MANA_ITEM"*/,
    (System_String_o *)StringLiteral_20265/*"img_shop_3"*/,
    2,
    2,
    v57);
  if ( v56 )
  {
    v44 = sub_1B864F4(v56, v41->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_63;
  }
  if ( v41->max_length <= 3 )
    goto LABEL_62;
  v41->m_Items[3] = v56;
  sub_1B8635C((CGThumbnailListItem_o *)&v41->m_Items[3], (int32_t)v56, v58, v59);
  v60 = (ShopTopItemInfo_o *)sub_1B86604(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v60,
    19,
    (System_String_o *)StringLiteral_11873/*"SHOP_BUY_PURE_PRI"*/,
    (System_String_o *)StringLiteral_20261/*"img_shop_18"*/,
    18,
    13,
    v61);
  if ( v60 )
  {
    v44 = sub_1B864F4(v60, v41->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_63;
  }
  if ( v41->max_length <= 4 )
    goto LABEL_62;
  v41->m_Items[4] = v60;
  sub_1B8635C((CGThumbnailListItem_o *)&v41->m_Items[4], (int32_t)v60, v62, v63);
  v64 = (ShopTopItemInfo_o *)sub_1B86604(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v64,
    14,
    (System_String_o *)StringLiteral_11874/*"SHOP_BUY_RARE_PRI"*/,
    (System_String_o *)StringLiteral_20254/*"img_shop_11"*/,
    3,
    3,
    v65);
  if ( v64 )
  {
    v44 = sub_1B864F4(v64, v41->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_63;
  }
  if ( v41->max_length <= 5 )
    goto LABEL_62;
  v41->m_Items[5] = v64;
  sub_1B8635C((CGThumbnailListItem_o *)&v41->m_Items[5], (int32_t)v64, v66, v67);
  v68 = (ShopTopItemInfo_o *)sub_1B86604(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v68,
    22,
    (System_String_o *)StringLiteral_11876/*"SHOP_BUY_REVIVAL_ITEM"*/,
    (System_String_o *)StringLiteral_20263/*"img_shop_21"*/,
    20,
    15,
    v69);
  if ( v68 )
  {
    v44 = sub_1B864F4(v68, v41->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_63;
  }
  if ( v41->max_length <= 6 )
    goto LABEL_62;
  v41->m_Items[6] = v68;
  sub_1B8635C((CGThumbnailListItem_o *)&v41->m_Items[6], (int32_t)v68, v70, v71);
  v72 = (ShopTopItemInfo_o *)sub_1B86604(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v72,
    20,
    (System_String_o *)StringLiteral_11972/*"SHOP_TRADE_AP"*/,
    (System_String_o *)StringLiteral_20262/*"img_shop_20"*/,
    19,
    14,
    v73);
  if ( v72 )
  {
    v44 = sub_1B864F4(v72, v41->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_63;
  }
  if ( v41->max_length <= 7 )
    goto LABEL_62;
  v41->m_Items[7] = v72;
  sub_1B8635C((CGThumbnailListItem_o *)&v41->m_Items[7], (int32_t)v72, v74, v75);
  v76 = (ShopTopItemInfo_o *)sub_1B86604(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v76,
    17,
    (System_String_o *)StringLiteral_11887/*"SHOP_BUY_SVT_COSTUME"*/,
    (System_String_o *)StringLiteral_20259/*"img_shop_16"*/,
    15,
    11,
    v77);
  if ( v76 )
  {
    v44 = sub_1B864F4(v76, v41->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_63;
  }
  if ( v41->max_length <= 8 )
    goto LABEL_62;
  v41->m_Items[8] = v76;
  sub_1B8635C((CGThumbnailListItem_o *)&v41->m_Items[8], (int32_t)v76, v78, v79);
  v80 = (ShopTopItemInfo_o *)sub_1B86604(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v80,
    23,
    (System_String_o *)StringLiteral_11897/*"SHOP_EVENT_SVT_EQUIP"*/,
    (System_String_o *)StringLiteral_20264/*"img_shop_22"*/,
    21,
    16,
    v81);
  if ( v80 )
  {
    v44 = sub_1B864F4(v80, v41->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_63;
  }
  if ( v41->max_length <= 9 )
    goto LABEL_62;
  v41->m_Items[9] = v80;
  sub_1B8635C((CGThumbnailListItem_o *)&v41->m_Items[9], (int32_t)v80, v82, v83);
  v84 = (ShopTopItemInfo_o *)sub_1B86604(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v84,
    6,
    (System_String_o *)StringLiteral_11878/*"SHOP_BUY_SERVANT_STORAGE"*/,
    (System_String_o *)StringLiteral_20255/*"img_shop_12"*/,
    11,
    0,
    v85);
  if ( v84 )
  {
    v44 = sub_1B864F4(v84, v41->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_63;
  }
  if ( v41->max_length <= 0xA )
    goto LABEL_62;
  v41->m_Items[10] = v84;
  sub_1B8635C((CGThumbnailListItem_o *)&v41->m_Items[10], (int32_t)v84, v86, v87);
  v88 = (ShopTopItemInfo_o *)sub_1B86604(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v88,
    7,
    (System_String_o *)StringLiteral_11877/*"SHOP_BUY_SERVANT_EQUIP_STORAGE"*/,
    (System_String_o *)StringLiteral_20256/*"img_shop_13"*/,
    12,
    0,
    v89);
  if ( v88 )
  {
    v44 = sub_1B864F4(v88, v41->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_63;
  }
  if ( v41->max_length <= 0xB )
    goto LABEL_62;
  v41->m_Items[11] = v88;
  sub_1B8635C((CGThumbnailListItem_o *)&v41->m_Items[11], (int32_t)v88, v90, v91);
  v92 = (ShopTopItemInfo_o *)sub_1B86604(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v92,
    12,
    (System_String_o *)StringLiteral_11881/*"SHOP_BUY_STONE_FRAGMENTS"*/,
    (System_String_o *)StringLiteral_20269/*"img_shop_9"*/,
    4,
    0,
    v93);
  if ( v92 )
  {
    v44 = sub_1B864F4(v92, v41->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_63;
  }
  if ( v41->max_length <= 0xC )
    goto LABEL_62;
  v41->m_Items[12] = v92;
  sub_1B8635C((CGThumbnailListItem_o *)&v41->m_Items[12], (int32_t)v92, v94, v95);
  v96 = (ShopTopItemInfo_o *)sub_1B86604(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v96,
    1,
    (System_String_o *)StringLiteral_11849/*"SHOP_BUY_BANK_ITEM"*/,
    (System_String_o *)StringLiteral_20252/*"img_shop_1"*/,
    10,
    0,
    v97);
  if ( v96 )
  {
    v44 = sub_1B864F4(v96, v41->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_63;
  }
  if ( v41->max_length <= 0xD )
    goto LABEL_62;
  v41->m_Items[13] = v96;
  sub_1B8635C((CGThumbnailListItem_o *)&v41->m_Items[13], (int32_t)v96, v98, v99);
  v100 = (ShopTopItemInfo_o *)sub_1B86604(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v100,
    16,
    (System_String_o *)StringLiteral_11864/*"SHOP_BUY_GRAIL_FRAGMENTS"*/,
    (System_String_o *)StringLiteral_20258/*"img_shop_15"*/,
    14,
    0,
    v101);
  if ( v100 )
  {
    v44 = sub_1B864F4(v100, v41->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_63;
  }
  if ( v41->max_length <= 0xE )
    goto LABEL_62;
  v41->m_Items[14] = v100;
  sub_1B8635C((CGThumbnailListItem_o *)&v41->m_Items[14], (int32_t)v100, v102, v103);
  v104 = (ShopTopItemInfo_o *)sub_1B86604(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v104,
    18,
    (System_String_o *)StringLiteral_11892/*"SHOP_COIN_ROOM"*/,
    (System_String_o *)StringLiteral_20260/*"img_shop_17"*/,
    17,
    0,
    v105);
  if ( v104 )
  {
    v44 = sub_1B864F4(v104, v41->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_63;
  }
  if ( v41->max_length <= 0xF )
    goto LABEL_62;
  v41->m_Items[15] = v104;
  sub_1B8635C((CGThumbnailListItem_o *)&v41->m_Items[15], (int32_t)v104, v106, v107);
  v108 = (ShopTopItemInfo_o *)sub_1B86604(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v108,
    15,
    (System_String_o *)StringLiteral_11880/*"SHOP_BUY_SPECIAL_ITEM"*/,
    (System_String_o *)StringLiteral_20257/*"img_shop_14"*/,
    5,
    0,
    v109);
  if ( v108 )
  {
    v44 = sub_1B864F4(v108, v41->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_63;
  }
  if ( v41->max_length <= 0x10 )
    goto LABEL_62;
  v41->m_Items[16] = v108;
  sub_1B8635C((CGThumbnailListItem_o *)&v41->m_Items[16], (int32_t)v108, v110, v111);
  v112 = (ShopTopItemInfo_o *)sub_1B86604(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v112,
    13,
    (System_String_o *)StringLiteral_11847/*"SHOP_BUY_ANONYMOUS"*/,
    (System_String_o *)StringLiteral_20253/*"img_shop_10"*/,
    6,
    0,
    v113);
  if ( v112 )
  {
    v44 = sub_1B864F4(v112, v41->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_63;
  }
  if ( v41->max_length <= 0x11 )
    goto LABEL_62;
  v41->m_Items[17] = v112;
  sub_1B8635C((CGThumbnailListItem_o *)&v41->m_Items[17], (int32_t)v112, v114, v115);
  v116 = (ShopTopItemInfo_o *)sub_1B86604(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v116,
    21,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_21112/*"mask00"*/,
    0,
    0,
    v117);
  if ( v116 )
  {
    v44 = sub_1B864F4(v116, v41->obj.klass->_1.element_class);
    if ( !v44 )
    {
LABEL_63:
      v122 = sub_1B86638();
      sub_1B864E0(v122, 0LL);
    }
  }
  if ( v41->max_length <= 0x12 )
LABEL_62:
    sub_1B8661C(v44, v45);
  v41->m_Items[18] = v116;
  sub_1B8635C((CGThumbnailListItem_o *)&v41->m_Items[18], (int32_t)v116, v118, v119);
  ShopTopListViewManager_TypeInfo->static_fields->shopTopItemInfos = v41;
  sub_1B8635C((CGThumbnailListItem_o *)ShopTopListViewManager_TypeInfo->static_fields, (int32_t)v41, v120, v121);
}


void __fastcall ShopTopListViewManager___ctor(ShopTopListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopTopListViewManager__CreateList(
        ShopTopListViewManager_o *this,
        int32_t kind,
        float overrideScrollBarValue,
        const MethodInfo *method)
{
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
  int64_t Value; // x0
  __int64 v21; // x8
  System_Collections_Generic_List_long__o *v22; // x20
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  ShopNoticeTween_o *v25; // x22
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x29
  int v29; // w8
  unsigned int v30; // w21
  ShopTopItemInfo_o *v31; // x22
  int32_t Kind_k__BackingField; // w8
  int32_t ShopType_k__BackingField; // w23
  ShopListNotice_o *v34; // x23
  struct System_Int64_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  int32_t v38; // w8
  ShopRootConstants_c *v39; // x0
  char v40; // w26
  System_Collections_Generic_List_object__o *itemList; // x24
  int32_t v42; // w27
  ShopNoticeTween_o *v43; // x28
  ShopTopListViewItem_o *v44; // x25
  const MethodInfo *v45; // x6
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  struct ShopNoticeRemainTime_o **p_shopNoticeRemainTime; // x21
  ShopNoticeRemainTime_o *v53; // x22
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  UnityEngine_Object_o *scrollBar; // x20
  bool v57; // w0
  struct ShopNoticeTween_o **p_shopNoticeTween; // [xsp+8h] [xbp-68h]

  if ( (byte_4A4A8C9 & 1) == 0 )
  {
    sub_1B863B8(&CoinRoomUtility_TypeInfo, *(_QWORD *)&kind);
    sub_1B863B8(&Method_DataManager_GetMaster_ShopMaster___, v6);
    sub_1B863B8(&DataManager_TypeInfo, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_long__Add__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_long___ctor__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1B863B8(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B863B8(&ShopNoticeRemainTime_TypeInfo, v14);
    sub_1B863B8(&ShopNoticeTween_TypeInfo, v15);
    sub_1B863B8(&ShopRootConstants_TypeInfo, v16);
    sub_1B863B8(&ShopTopListViewItem_TypeInfo, v17);
    sub_1B863B8(&ShopTopListViewManager_TypeInfo, v18);
    sub_1B863B8(&StringLiteral_11829/*"SHOP04_SHOP_STATE"*/, v19);
    byte_4A4A8C9 = 1;
  }
  Value = (int64_t)ShopTopListViewManager_TypeInfo;
  if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
    Value = (int64_t)ShopTopListViewManager_TypeInfo;
  }
  v21 = **(_QWORD **)(Value + 184);
  if ( !v21 )
    goto LABEL_57;
  ListViewManager__CreateList((ListViewManager_o *)this, *(_DWORD *)(v21 + 24), 0LL);
  v22 = (System_Collections_Generic_List_long__o *)sub_1B86604(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v22,
    (const MethodInfo_35E4138 *)Method_System_Collections_Generic_List_long___ctor__);
  p_shopNoticeTween = &this->fields.shopNoticeTween;
  if ( !this->fields.shopNoticeTween )
  {
    v25 = (ShopNoticeTween_o *)sub_1B86604(ShopNoticeTween_TypeInfo);
    ShopNoticeTween___ctor(v25, (UnityEngine_MonoBehaviour_o *)this, 0LL);
    this->fields.shopNoticeTween = v25;
    sub_1B8635C((CGThumbnailListItem_o *)p_shopNoticeTween, (int32_t)v25, v26, v27);
  }
  Value = (int64_t)ShopTopListViewManager_TypeInfo;
  if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
    Value = (int64_t)ShopTopListViewManager_TypeInfo;
  }
  v28 = **(_QWORD **)(Value + 184);
  if ( !v28 )
    goto LABEL_57;
  v29 = *(_DWORD *)(v28 + 24);
  if ( v29 >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= v29 )
        sub_1B8661C(Value, *(_QWORD *)&kind);
      v31 = *(ShopTopItemInfo_o **)(v28 + 8LL * (int)v30 + 32);
      if ( !v31 )
        goto LABEL_57;
      Kind_k__BackingField = v31->fields._Kind_k__BackingField;
      if ( Kind_k__BackingField == 17 )
      {
        Value = ConstantMaster__getValue((System_String_o *)StringLiteral_11829/*"SHOP04_SHOP_STATE"*/, 0LL);
        if ( (_DWORD)Value == -1 )
          goto LABEL_46;
        Kind_k__BackingField = v31->fields._Kind_k__BackingField;
      }
      if ( Kind_k__BackingField != 9 )
        break;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Value = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Value )
        goto LABEL_57;
      Value = ShopMaster__IsEnableEventShop_40952200((ShopMaster_o *)Value, 0LL);
      if ( (Value & 1) != 0 )
        break;
LABEL_46:
      v29 = *(_DWORD *)(v28 + 24);
      if ( (int)++v30 >= v29 )
        goto LABEL_47;
    }
    ShopType_k__BackingField = v31->fields._ShopType_k__BackingField;
    if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
    Value = (int64_t)ShopTopListViewManager__GetShopListNotice(ShopType_k__BackingField, *(const MethodInfo **)&kind);
    v34 = (ShopListNotice_o *)Value;
    if ( Value )
    {
      Value = ShopListNotice__get_MostRecentTimeLimit((ShopListNotice_o *)Value, 0LL);
      if ( !v22 )
        goto LABEL_57;
      items = v22->fields._items;
      v36 = Method_System_Collections_Generic_List_long__Add__;
      ++v22->fields._version;
      if ( !items )
        goto LABEL_57;
      size = v22->fields._size;
      *(_QWORD *)&kind = Value;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v22,
          Value,
          *(const MethodInfo_35E498C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v22->fields._size = size + 1;
        items->m_Items[size] = Value;
      }
    }
    v38 = v31->fields._Kind_k__BackingField;
    if ( v38 == 18 )
    {
      if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
      Value = CoinRoomUtility__IsTargetQuestClear(0LL);
    }
    else
    {
      if ( v38 != 17 )
      {
        v40 = 1;
LABEL_41:
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          goto LABEL_57;
        v42 = itemList->fields._size;
        v43 = *p_shopNoticeTween;
        v44 = (ShopTopListViewItem_o *)sub_1B86604(ShopTopListViewItem_TypeInfo);
        ShopTopListViewItem___ctor(v44, v42, v31, v40 & 1, v34, v43, v45);
        v48 = itemList->fields._items;
        v49 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v48 )
          goto LABEL_57;
        v50 = itemList->fields._size;
        if ( (unsigned int)v50 >= v48->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v44,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = &v48->obj.klass + v50;
          itemList->fields._size = v50 + 1;
          v51[4] = (Il2CppClass *)v44;
          sub_1B8635C((CGThumbnailListItem_o *)(v51 + 4), (int32_t)v44, v46, v47);
        }
        goto LABEL_46;
      }
      v39 = ShopRootConstants_TypeInfo;
      if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      Value = ShopRootConstants__IsSvtCostumeShopOpen((const MethodInfo *)v39);
    }
    v40 = Value;
    goto LABEL_41;
  }
LABEL_47:
  Value = (int64_t)this->fields.shopNoticeRemainTime;
  p_shopNoticeRemainTime = &this->fields.shopNoticeRemainTime;
  if ( !Value )
  {
    v53 = (ShopNoticeRemainTime_o *)sub_1B86604(ShopNoticeRemainTime_TypeInfo);
    ShopNoticeRemainTime___ctor(v53, (UnityEngine_MonoBehaviour_o *)this, 0LL);
    this->fields.shopNoticeRemainTime = v53;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.shopNoticeRemainTime, (int32_t)v53, v54, v55);
    Value = (int64_t)this->fields.shopNoticeRemainTime;
    if ( !Value )
      goto LABEL_57;
  }
  *(_QWORD *)(Value + 24) = v22;
  sub_1B8635C((CGThumbnailListItem_o *)(Value + 24), (int32_t)v22, v23, v24);
  Value = (int64_t)*p_shopNoticeRemainTime;
  if ( !*p_shopNoticeRemainTime )
    goto LABEL_57;
  ShopNoticeRemainTime__Start((ShopNoticeRemainTime_o *)Value, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v57 = UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL);
  if ( overrideScrollBarValue >= 0.0 && v57 )
  {
    Value = (int64_t)this->fields.scrollBar;
    if ( Value )
    {
      UIProgressBar__set_value((UIProgressBar_o *)Value, overrideScrollBarValue, 0LL);
      return;
    }
LABEL_57:
    sub_1B86614(Value, *(_QWORD *)&kind);
  }
}


void __fastcall ShopTopListViewManager__DestroyList(ShopTopListViewManager_o *this, const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0

  scrollView = this->fields.scrollView;
  if ( !scrollView )
    sub_1B86614(0LL, method);
  UIScrollView__ResetPosition(scrollView, 0LL);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


ShopListNotice_o *__fastcall ShopTopListViewManager__GetShopListNotice(int32_t type, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  ShopMaster_o *v7; // x20
  ShopEntity_array *EnableEntitiyList; // x0
  ShopEntity_array *EnableEntitiyList_40938548; // x21
  ShopListNotice_o *v10; // x19

  if ( (byte_4A4A8D3 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_1B863B8(&ShopListNotice_TypeInfo, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A4A8D3 = 1;
  }
  if ( !type )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_1B86614(Instance, v6);
  }
  v7 = (ShopMaster_o *)Instance;
  EnableEntitiyList = ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, type, 0LL);
  if ( !EnableEntitiyList
    || (EnableEntitiyList_40938548 = EnableEntitiyList, !*(_QWORD *)&EnableEntitiyList->max_length) )
  {
    EnableEntitiyList_40938548 = ShopMaster__GetEnableEntitiyList_40938548(v7, 0, type, 0x20000, 0LL);
  }
  v10 = (ShopListNotice_o *)sub_1B86604(ShopListNotice_TypeInfo);
  ShopListNotice___ctor(v10, EnableEntitiyList_40938548, 0LL);
  return v10;
}


ShopNotice_o *__fastcall ShopTopListViewManager__GetShopNotice(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  ShopNotice_o *v3; // x19
  const MethodInfo *v4; // x1
  ShopListNotice_o *ShopListNotice; // x0
  __int64 v6; // x22
  int v7; // w8
  unsigned int v8; // w23
  __int64 v9; // x8
  int32_t v10; // w20

  if ( (byte_4A4A8D4 & 1) == 0 )
  {
    sub_1B863B8(&ShopNotice_TypeInfo, v1);
    sub_1B863B8(&ShopTopListViewManager_TypeInfo, v2);
    byte_4A4A8D4 = 1;
  }
  v3 = (ShopNotice_o *)sub_1B86604(ShopNotice_TypeInfo);
  ShopNotice___ctor(v3, 0LL);
  ShopListNotice = (ShopListNotice_o *)ShopTopListViewManager_TypeInfo;
  if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
    ShopListNotice = (ShopListNotice_o *)ShopTopListViewManager_TypeInfo;
  }
  v6 = **(_QWORD **)&ShopListNotice[3].fields._IsShowNew_k__BackingField;
  if ( !v6 )
    goto LABEL_15;
  v7 = *(_DWORD *)(v6 + 24);
  if ( v7 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= v7 )
        sub_1B8661C(ShopListNotice, v4);
      v9 = *(_QWORD *)(v6 + 8LL * (int)v8 + 32);
      if ( !v9 )
        break;
      v10 = *(_DWORD *)(v9 + 44);
      if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
      ShopListNotice = ShopTopListViewManager__GetShopListNotice(v10, v4);
      if ( !v3 )
        break;
      ShopNotice__CompareShopListNotice(v3, ShopListNotice, 0LL);
      v7 = *(_DWORD *)(v6 + 24);
      if ( (int)++v8 >= v7 )
        return v3;
    }
LABEL_15:
    sub_1B86614(ShopListNotice, v4);
  }
  return v3;
}


void __fastcall ShopTopListViewManager__InvalidateList(ShopTopListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_object__o *v6; // x19
  int32_t v7; // w20

  if ( (byte_4A4A8CC & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_ShopTopListViewObject__get_Count__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_ShopTopListViewObject__get_Item__, v3);
    byte_4A4A8CC = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)ShopTopListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_9;
  v6 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v6,
                                                                  v7,
                                                                  (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ShopTopListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ShopTopListViewObject__SetupDisp((ShopTopListViewObject_o *)ObjectList, v5);
      if ( ++v7 >= v6->fields._size )
        return;
    }
LABEL_9:
    sub_1B86614(ObjectList, v5);
  }
}


void __fastcall ShopTopListViewManager__LoadCoinRoomAsset(ShopTopListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CoinRoomUtility_c *v6; // x0
  System_String_o *ASSET_NAME; // x20
  AssetLoader_LoadEndDataHandler_o *v8; // x21

  if ( (byte_4A4A8CA & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, method);
    sub_1B863B8(&CoinRoomUtility_TypeInfo, v3);
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_1B863B8(&Method_ShopTopListViewManager__LoadCoinRoomAsset_b__17_0__, v5);
    byte_4A4A8CA = 1;
  }
  if ( !this->fields.coinRoomAsset )
  {
    v6 = CoinRoomUtility_TypeInfo;
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
      v6 = CoinRoomUtility_TypeInfo;
    }
    ASSET_NAME = v6->static_fields->ASSET_NAME;
    v8 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ShopTopListViewManager__LoadCoinRoomAsset_b__17_0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(ASSET_NAME, v8, 1, 0LL);
  }
}


void __fastcall ShopTopListViewManager__OnClickListView(
        ShopTopListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ShopTopListViewManager_o *v4; // x19
  __int64 methodPtr_low; // x10
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UnityEngine_Vector2_o clipRange; // x8
  ShopTopListViewManager_o *v9; // x20
  struct System_Action_ShopRootConstants_State__o *onClickListViewItem; // x21
  struct UnityEngine_Vector2_o v11; // x8

  v4 = this;
  if ( (byte_4A4A8D2 & 1) == 0 )
  {
    this = (ShopTopListViewManager_o *)sub_1B863B8(&ShopTopListViewObject_TypeInfo, obj);
    byte_4A4A8D2 = 1;
  }
  if ( !obj )
    goto LABEL_13;
  methodPtr_low = LOBYTE(ShopTopListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (ShopTopListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopTopListViewObject_TypeInfo )
  {
    goto LABEL_13;
  }
  this = (ShopTopListViewManager_o *)ShopTopListViewObject__GetItem(
                                       (ShopTopListViewObject_o *)obj,
                                       (const MethodInfo *)obj);
  if ( this )
  {
    clipRange = this->fields.clipRange;
    v9 = this;
    if ( !*(_QWORD *)&clipRange )
      goto LABEL_13;
    if ( *(_DWORD *)(*(_QWORD *)&clipRange + 16LL) != 21 )
    {
      onClickListViewItem = v4->fields.onClickListViewItem;
      if ( onClickListViewItem )
      {
        v4->fields.onClickListViewItem = 0LL;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.onClickListViewItem, 0, v6, v7);
        v11 = v9->fields.clipRange;
        if ( v11 )
        {
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onClickListViewItem->fields.m_target)(
            onClickListViewItem->fields.original_method_info,
            *(unsigned int *)(*(_QWORD *)&v11 + 40LL),
            *(_QWORD *)&onClickListViewItem->fields.extra_arg);
          return;
        }
LABEL_13:
        sub_1B86614(this, obj);
      }
    }
  }
}


void __fastcall ShopTopListViewManager__OnMoveEnd(ShopTopListViewManager_o *this, const MethodInfo *method)
{
  int32_t v3; // w8
  const MethodInfo *v4; // x2
  int32_t initMode; // w1
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *onMoveEnd; // x20

  if ( (byte_4A4A8D1 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4A8D1 = 1;
  }
  v3 = this->fields.callbackCount - 1;
  this->fields.callbackCount = v3;
  if ( !v3 )
  {
    ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
    initMode = this->fields.initMode;
    if ( initMode == 5 || initMode == 2 )
    {
      ShopTopListViewManager__SetScrollBarActive(this, 1, v4);
      initMode = this->fields.initMode;
    }
    ShopTopListViewManager__SetScrollViewUnPressed(this, initMode, v4);
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
    {
      v10 = this->fields.scrollView;
      if ( !v10 )
        sub_1B86614(0LL, v7);
      ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
        v10,
        1LL,
        v10->klass->vtable._9_SetDragAmount.methodPtr);
    }
    onMoveEnd = this->fields.onMoveEnd;
    if ( onMoveEnd )
    {
      this->fields.onMoveEnd = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.onMoveEnd, 0, v8, v9);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onMoveEnd->fields.m_target)(
        onMoveEnd->fields.original_method_info,
        *(_QWORD *)&onMoveEnd->fields.extra_arg);
    }
  }
}


void __fastcall ShopTopListViewManager__ReleaseCoinRoomAsset(ShopTopListViewManager_o *this, const MethodInfo *method)
{
  AssetData_o *coinRoomAsset; // x19
  CGThumbnailListItem_o *p_coinRoomAsset; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4A4A8CB & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, method);
    byte_4A4A8CB = 1;
  }
  coinRoomAsset = this->fields.coinRoomAsset;
  if ( coinRoomAsset )
  {
    p_coinRoomAsset = (CGThumbnailListItem_o *)&this->fields.coinRoomAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_38744968(coinRoomAsset, 0LL);
    p_coinRoomAsset->klass = 0LL;
    sub_1B8635C(p_coinRoomAsset, 0, v5, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopTopListViewManager__RequestListObject(
        ShopTopListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_ShopTopListViewObject__o *ObjectList; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_object__o *v12; // x21
  int v13; // s8
  int32_t size; // w8
  int32_t v15; // w22
  int32_t v16; // w23
  Il2CppObject *Item; // x24
  System_Action_o *v18; // x25
  const MethodInfo *v19; // x3

  if ( (byte_4A4A8D0 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&initMode);
    sub_1B863B8(&Method_System_Collections_Generic_List_ShopTopListViewObject__get_Count__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ShopTopListViewObject__get_Item__, v6);
    sub_1B863B8(&Method_ShopTopListViewManager_OnMoveEnd__, v7);
    sub_1B863B8(&StringLiteral_9791/*"OnMoveEnd"*/, v8);
    byte_4A4A8D0 = 1;
  }
  if ( initMode == 1 )
  {
    ObjectList = ShopTopListViewManager__get_ObjectList(this, *(const MethodInfo **)&initMode);
    v12 = (System_Collections_Generic_List_object__o *)ObjectList;
    v13 = 0;
  }
  else
  {
    ObjectList = ShopTopListViewManager__get_ClippingObjectList(this, *(const MethodInfo **)&initMode);
    v13 = 1036831949;
    v12 = (System_Collections_Generic_List_object__o *)ObjectList;
  }
  if ( !v12 )
    goto LABEL_18;
  size = v12->fields._size;
  if ( size )
  {
    if ( (unsigned int)(initMode - 1) >= 6 )
      v15 = 0;
    else
      v15 = initMode + 2;
    this->fields.callbackCount = size;
    if ( size >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v12,
                 v16,
                 (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ShopTopListViewObject__get_Item__);
        v18 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(v18, (Il2CppObject *)this, Method_ShopTopListViewManager_OnMoveEnd__, 0LL);
        if ( !Item )
          break;
        ShopTopListViewObject__Init((ShopTopListViewObject_o *)Item, v15, v18, *(float *)&v13, v19);
        if ( ++v16 >= v12->fields._size )
          goto LABEL_15;
      }
LABEL_18:
      sub_1B86614(ObjectList, v10);
    }
LABEL_15:
    ShopTopListViewManager__ResetShopListNoticeOnShopListViewItemDraw(this, initMode, v11);
  }
  else if ( initMode != 6 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9791/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopTopListViewManager__ResetShopListNoticeOnShopListViewItemDraw(
        ShopTopListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_long__o *v10; // x20
  const MethodInfo *v11; // x1
  int64_t ClippingObjectList; // x0
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w21
  ShopTopListViewObject_o *v17; // x22
  __int64 v18; // x8
  __int64 v19; // x8
  int32_t v20; // w23
  int64_t v21; // x23
  struct System_Int64_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  const MethodInfo *v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x1

  if ( (byte_4A4A8D5 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_long__Add__, *(_QWORD *)&initMode);
    sub_1B863B8(&Method_System_Collections_Generic_List_long___ctor__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ShopTopListViewObject__get_Count__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_ShopTopListViewObject__get_Item__, v7);
    sub_1B863B8(&System_Collections_Generic_List_long__TypeInfo, v8);
    sub_1B863B8(&ShopTopListViewManager_TypeInfo, v9);
    byte_4A4A8D5 = 1;
  }
  if ( initMode == 5 )
  {
    v10 = (System_Collections_Generic_List_long__o *)sub_1B86604(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v10,
      (const MethodInfo_35E4138 *)Method_System_Collections_Generic_List_long___ctor__);
    ClippingObjectList = (int64_t)ShopTopListViewManager__get_ClippingObjectList(this, v11);
    if ( !ClippingObjectList )
      goto LABEL_29;
    v16 = 0;
    while ( v16 < *(_DWORD *)(ClippingObjectList + 24) )
    {
      ClippingObjectList = (int64_t)ShopTopListViewManager__get_ClippingObjectList(this, v13);
      if ( !ClippingObjectList )
        goto LABEL_29;
      ClippingObjectList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)ClippingObjectList,
                                      v16,
                                      (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ShopTopListViewObject__get_Item__);
      if ( !ClippingObjectList )
        goto LABEL_29;
      v17 = (ShopTopListViewObject_o *)ClippingObjectList;
      ClippingObjectList = (int64_t)ShopTopListViewObject__GetItem((ShopTopListViewObject_o *)ClippingObjectList, v13);
      if ( !ClippingObjectList )
        goto LABEL_29;
      v18 = *(_QWORD *)(ClippingObjectList + 112);
      if ( !v18 )
        goto LABEL_29;
      if ( *(_DWORD *)(v18 + 44) )
      {
        ClippingObjectList = (int64_t)ShopTopListViewObject__GetItem(v17, v13);
        if ( !ClippingObjectList )
          goto LABEL_29;
        v19 = *(_QWORD *)(ClippingObjectList + 112);
        if ( !v19 )
          goto LABEL_29;
        v20 = *(_DWORD *)(v19 + 44);
        if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
        ClippingObjectList = (int64_t)ShopTopListViewManager__GetShopListNotice(v20, v13);
        if ( !ClippingObjectList )
          goto LABEL_29;
        v21 = ClippingObjectList;
        ClippingObjectList = ShopListNotice__get_MostRecentTimeLimit((ShopListNotice_o *)ClippingObjectList, 0LL);
        if ( !v10 )
          goto LABEL_29;
        items = v10->fields._items;
        v23 = Method_System_Collections_Generic_List_long__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v10->fields._size;
        v25 = (const MethodInfo *)ClippingObjectList;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v10,
            ClippingObjectList,
            *(const MethodInfo_35E498C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v10->fields._size = size + 1;
          items->m_Items[size] = ClippingObjectList;
        }
        ClippingObjectList = (int64_t)ShopTopListViewObject__GetItem(v17, v25);
        if ( !ClippingObjectList )
          goto LABEL_29;
        *(_QWORD *)(ClippingObjectList + 120) = v21;
        sub_1B8635C((CGThumbnailListItem_o *)(ClippingObjectList + 120), v21, v26, v27);
        ShopTopListViewObject__ResetShopListNotice(v17, v28);
      }
      ++v16;
      ClippingObjectList = (int64_t)ShopTopListViewManager__get_ClippingObjectList(this, v13);
      if ( !ClippingObjectList )
        goto LABEL_29;
    }
    ClippingObjectList = (int64_t)this->fields.shopNoticeRemainTime;
    if ( !ClippingObjectList )
LABEL_29:
      sub_1B86614(ClippingObjectList, v13);
    *(_QWORD *)(ClippingObjectList + 24) = v10;
    sub_1B8635C((CGThumbnailListItem_o *)(ClippingObjectList + 24), (int32_t)v10, v14, v15);
  }
}


void __fastcall ShopTopListViewManager__SetDragMaskStart(
        ShopTopListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode <= 5 && ((1 << initMode) & 0x2C) != 0 )
    ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
}


void __fastcall ShopTopListViewManager__SetMode(
        ShopTopListViewManager_o *this,
        int32_t initMode,
        System_Action_ShopRootConstants_State__o *onClickListViewItem,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.onClickListViewItem = onClickListViewItem;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.onClickListViewItem,
    (int32_t)onClickListViewItem,
    (int32_t)onClickListViewItem,
    method);
  ShopTopListViewManager__SetMode_33594376(this, initMode, v6);
}


void __fastcall ShopTopListViewManager__SetMode_33583208(
        ShopTopListViewManager_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.onMoveEnd = onMoveEnd;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.onMoveEnd, (int32_t)onMoveEnd, (int32_t)onMoveEnd, method);
  ShopTopListViewManager__SetMode_33594376(this, initMode, v6);
}


void __fastcall ShopTopListViewManager__SetMode_33594376(
        ShopTopListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  ShopNoticeTween_o *shopNoticeTween; // x0

  this->fields.initMode = initMode;
  ListViewManager__set_IsInput((ListViewManager_o *)this, initMode == 1, 0LL);
  if ( (unsigned int)(initMode - 2) >= 2 )
  {
    if ( initMode == 6 )
    {
LABEL_6:
      ShopTopListViewManager__SetScrollBarActive(this, 0, v5);
      goto LABEL_7;
    }
    if ( initMode != 5 )
      goto LABEL_7;
  }
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  if ( (unsigned int)initMode <= 5 && ((1 << initMode) & 0x2C) != 0 )
    goto LABEL_6;
LABEL_7:
  ShopTopListViewManager__RequestListObject(this, initMode, v5);
  if ( initMode != 1 )
  {
    shopNoticeTween = this->fields.shopNoticeTween;
    if ( shopNoticeTween )
      ShopNoticeTween__Start(shopNoticeTween, 0LL);
  }
}


void __fastcall ShopTopListViewManager__SetObjectItem(
        ShopTopListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ShopTopListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4A4A8CD & 1) == 0 )
  {
    this = (ShopTopListViewManager_o *)sub_1B863B8(&ShopTopListViewObject_TypeInfo, obj);
    byte_4A4A8CD = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ShopTopListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ShopTopListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopTopListViewObject_TypeInfo )
  {
    sub_1B86614(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ShopTopListViewObject__Init((ShopTopListViewObject_o *)obj, v7, 0LL, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopTopListViewManager__SetScrollBarActive(
        ShopTopListViewManager_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4A4A8CE & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, isActive);
    byte_4A4A8CE = 1;
  }
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(scrollBar, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1B86614(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0LL);
  }
}


void __fastcall ShopTopListViewManager__SetScrollBarEnable(
        ShopTopListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( initMode == 5 || initMode == 2 )
    ShopTopListViewManager__SetScrollBarActive(this, 1, method);
}


void __fastcall ShopTopListViewManager__SetScrollBarUnEnable(
        ShopTopListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode <= 6 && ((1 << initMode) & 0x6C) != 0 )
    ShopTopListViewManager__SetScrollBarActive(this, 0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopTopListViewManager__SetScrollViewUnPressed(
        ShopTopListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v6; // x1
  UIScrollView_o *v7; // x0

  if ( (byte_4A4A8CF & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&initMode);
    byte_4A4A8CF = 1;
  }
  if ( initMode == 5 || initMode == 2 )
  {
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
    {
      v7 = this->fields.scrollView;
      if ( !v7 )
        sub_1B86614(0LL, v6);
      UIScrollView__Press(v7, 0, 0LL);
    }
  }
}


void __fastcall ShopTopListViewManager__StartShopNoticeTween(
        ShopTopListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  ShopNoticeTween_o *shopNoticeTween; // x0

  if ( initMode != 1 )
  {
    shopNoticeTween = this->fields.shopNoticeTween;
    if ( shopNoticeTween )
      ShopNoticeTween__Start(shopNoticeTween, 0LL);
  }
}


void __fastcall ShopTopListViewManager___LoadCoinRoomAsset_b__17_0(
        ShopTopListViewManager_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.coinRoomAsset = assetData;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.coinRoomAsset, (int32_t)assetData, (int32_t)method, v3);
}


System_Collections_Generic_List_ShopTopListViewObject__o *__fastcall ShopTopListViewManager__get_ClippingObjectList(
        ShopTopListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  const MethodInfo *v10; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v12; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4A4A8C7 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_ShopTopListViewObject__Add__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_ShopTopListViewObject___ctor__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1B863B8(&System_Collections_Generic_List_ShopTopListViewObject__TypeInfo, v7);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v8);
    byte_4A4A8C7 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ShopTopListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ShopTopListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1B86614(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v12,
                                                                  (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v14 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ShopTopListViewObject__GetItem(
                                                                  (ShopTopListViewObject_o *)objectList,
                                                                  v10);
      if ( objectList )
      {
        v10 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_41791656(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v9 )
            goto LABEL_21;
          items = v9->fields._items;
          v18 = Method_System_Collections_Generic_List_ShopTopListViewObject__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v14,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v14;
            sub_1B8635C((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
          }
        }
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v12;
    if ( !objectList )
      goto LABEL_21;
  }
  return (System_Collections_Generic_List_ShopTopListViewObject__o *)v9;
}


System_Collections_Generic_List_ShopTopListViewObject__o *__fastcall ShopTopListViewManager__get_ObjectList(
        ShopTopListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v12; // w21
  Il2CppObject *Item; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v19; // x1
  Il2CppClass **v20; // x0

  if ( (byte_4A4A8C6 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_ShopTopListViewObject__Add__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_ShopTopListViewObject___ctor__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1B863B8(&System_Collections_Generic_List_ShopTopListViewObject__TypeInfo, v7);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v8);
    byte_4A4A8C6 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ShopTopListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ShopTopListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1B86614(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v12,
                                                                  (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___);
      if ( !v9 )
        goto LABEL_17;
      items = v9->fields._items;
      v17 = Method_System_Collections_Generic_List_ShopTopListViewObject__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v9->fields._size;
      v19 = objectList;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)objectList,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v19;
        sub_1B8635C((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v12;
    if ( !objectList )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_ShopTopListViewObject__o *)v9;
}


AssetData_o *__fastcall ShopTopListViewManager__get_coinRoomAssetData(
        ShopTopListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.coinRoomAsset;
}


float __fastcall ShopTopListViewManager__get_currentScrollBarValue(
        ShopTopListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v4; // x1
  UIProgressBar_o *v6; // x0

  if ( (byte_4A4A8C8 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4A8C8 = 1;
  }
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(scrollBar, 0LL, 0LL) )
    return -1.0;
  v6 = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !v6 )
    sub_1B86614(0LL, v4);
  return UIProgressBar__get_value(v6, 0LL);
}