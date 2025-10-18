void ShopTopListViewManager___cctor(const MethodInfo *method)
{
  struct ShopTopItemInfo_array *v1; // x19
  ShopTopItemInfo_o *v2; // x20
  const MethodInfo *v3; // x6
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  ShopTopItemInfo_o *v7; // x20
  const MethodInfo *v8; // x6
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  ShopTopItemInfo_o *v11; // x20
  const MethodInfo *v12; // x6
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  ShopTopItemInfo_o *v15; // x20
  const MethodInfo *v16; // x6
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  ShopTopItemInfo_o *v19; // x20
  const MethodInfo *v20; // x6
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  ShopTopItemInfo_o *v23; // x20
  const MethodInfo *v24; // x6
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  ShopTopItemInfo_o *v27; // x20
  const MethodInfo *v28; // x6
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  ShopTopItemInfo_o *v31; // x20
  const MethodInfo *v32; // x6
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  ShopTopItemInfo_o *v35; // x20
  const MethodInfo *v36; // x6
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  ShopTopItemInfo_o *v39; // x20
  const MethodInfo *v40; // x6
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  ShopTopItemInfo_o *v43; // x20
  const MethodInfo *v44; // x6
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  ShopTopItemInfo_o *v47; // x20
  const MethodInfo *v48; // x6
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  ShopTopItemInfo_o *v51; // x20
  const MethodInfo *v52; // x6
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  ShopTopItemInfo_o *v55; // x20
  const MethodInfo *v56; // x6
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  ShopTopItemInfo_o *v59; // x20
  const MethodInfo *v60; // x6
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  ShopTopItemInfo_o *v63; // x20
  const MethodInfo *v64; // x6
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  ShopTopItemInfo_o *v67; // x20
  const MethodInfo *v68; // x6
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  ShopTopItemInfo_o *v71; // x20
  const MethodInfo *v72; // x6
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  ShopTopItemInfo_o *v75; // x20
  const MethodInfo *v76; // x6
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  ShopTopItemInfo_o *v79; // x20
  const MethodInfo *v80; // x6
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  __int64 v85; // x0

  if ( (byte_4C3F3A4 & 1) == 0 )
  {
    sub_1C37058(&ShopTopItemInfo___TypeInfo);
    sub_1C37058(&ShopTopItemInfo_TypeInfo);
    sub_1C37058(&ShopTopListViewManager_TypeInfo);
    sub_1C37058(&StringLiteral_12089/*"SHOP_BUY_STONE_FRAGMENTS"*/);
    sub_1C37058(&StringLiteral_21434/*"mask00"*/);
    sub_1C37058(&StringLiteral_12054/*"SHOP_BUY_ANONYMOUS"*/);
    sub_1C37058(&StringLiteral_12100/*"SHOP_CLASS_BOARD_RESET"*/);
    sub_1C37058(&StringLiteral_12084/*"SHOP_BUY_REVIVAL_ITEM"*/);
    sub_1C37058(&StringLiteral_20560/*"img_shop_15"*/);
    sub_1C37058(&StringLiteral_12181/*"SHOP_START_UP_SUMMON"*/);
    sub_1C37058(&StringLiteral_20556/*"img_shop_11"*/);
    sub_1C37058(&StringLiteral_12173/*"SHOP_SELL_SERVANT"*/);
    sub_1C37058(&StringLiteral_20566/*"img_shop_22"*/);
    sub_1C37058(&StringLiteral_12071/*"SHOP_BUY_GRAIL_FRAGMENTS"*/);
    sub_1C37058(&StringLiteral_12082/*"SHOP_BUY_RARE_PRI"*/);
    sub_1C37058(&StringLiteral_12106/*"SHOP_EVENT_SVT_EQUIP"*/);
    sub_1C37058(&StringLiteral_20567/*"img_shop_23"*/);
    sub_1C37058(&StringLiteral_12056/*"SHOP_BUY_BANK_ITEM"*/);
    sub_1C37058(&StringLiteral_12182/*"SHOP_TRADE_AP"*/);
    sub_1C37058(&StringLiteral_20558/*"img_shop_13"*/);
    sub_1C37058(&StringLiteral_20572/*"img_shop_9"*/);
    sub_1C37058(&StringLiteral_12077/*"SHOP_BUY_MANA_ITEM"*/);
    sub_1C37058(&StringLiteral_12095/*"SHOP_BUY_SVT_COSTUME"*/);
    sub_1C37058(&StringLiteral_20555/*"img_shop_10"*/);
    sub_1C37058(&StringLiteral_20561/*"img_shop_16"*/);
    sub_1C37058(&StringLiteral_20562/*"img_shop_17"*/);
    sub_1C37058(&StringLiteral_20564/*"img_shop_20"*/);
    sub_1C37058(&StringLiteral_20571/*"img_shop_8"*/);
    sub_1C37058(&StringLiteral_12101/*"SHOP_COIN_ROOM"*/);
    sub_1C37058(&StringLiteral_20569/*"img_shop_4"*/);
    sub_1C37058(&StringLiteral_20565/*"img_shop_21"*/);
    sub_1C37058(&StringLiteral_20563/*"img_shop_18"*/);
    sub_1C37058(&StringLiteral_12086/*"SHOP_BUY_SERVANT_STORAGE"*/);
    sub_1C37058(&StringLiteral_12068/*"SHOP_BUY_EVENT_ITEM"*/);
    sub_1C37058(&StringLiteral_20568/*"img_shop_3"*/);
    sub_1C37058(&StringLiteral_12088/*"SHOP_BUY_SPECIAL_ITEM"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_20559/*"img_shop_14"*/);
    sub_1C37058(&StringLiteral_20554/*"img_shop_1"*/);
    sub_1C37058(&StringLiteral_12081/*"SHOP_BUY_PURE_PRI"*/);
    sub_1C37058(&StringLiteral_12085/*"SHOP_BUY_SERVANT_EQUIP_STORAGE"*/);
    sub_1C37058(&StringLiteral_20557/*"img_shop_12"*/);
    byte_4C3F3A4 = 1;
  }
  v1 = (struct ShopTopItemInfo_array *)sub_1C37100(ShopTopItemInfo___TypeInfo, 20);
  v2 = (ShopTopItemInfo_o *)sub_1C372A4(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v2,
    5,
    (System_String_o *)StringLiteral_12068/*"SHOP_BUY_EVENT_ITEM"*/,
    (System_String_o *)StringLiteral_20571/*"img_shop_8"*/,
    7,
    1,
    v3);
  if ( !v1 )
    sub_1C372B4(v4);
  if ( v2 )
  {
    v4 = sub_1C37194(v2, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( !LODWORD(v1->max_length) )
    goto LABEL_65;
  v1->m_Items[0] = v2;
  sub_1C36FFC((CGThumbnailListItem_o *)v1->m_Items, (int32_t)v2, v5, v6);
  v7 = (ShopTopItemInfo_o *)sub_1C372A4(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v7,
    9,
    (System_String_o *)StringLiteral_12181/*"SHOP_START_UP_SUMMON"*/,
    (System_String_o *)StringLiteral_20562/*"img_shop_17"*/,
    16,
    12,
    v8);
  if ( v7 )
  {
    v4 = sub_1C37194(v7, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 1 )
    goto LABEL_65;
  v1->m_Items[1] = v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&v1->m_Items[1], (int32_t)v7, v9, v10);
  v11 = (ShopTopItemInfo_o *)sub_1C372A4(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v11,
    8,
    (System_String_o *)StringLiteral_12173/*"SHOP_SELL_SERVANT"*/,
    (System_String_o *)StringLiteral_20569/*"img_shop_4"*/,
    9,
    0,
    v12);
  if ( v11 )
  {
    v4 = sub_1C37194(v11, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 2 )
    goto LABEL_65;
  v1->m_Items[2] = v11;
  sub_1C36FFC((CGThumbnailListItem_o *)&v1->m_Items[2], (int32_t)v11, v13, v14);
  v15 = (ShopTopItemInfo_o *)sub_1C372A4(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v15,
    3,
    (System_String_o *)StringLiteral_12077/*"SHOP_BUY_MANA_ITEM"*/,
    (System_String_o *)StringLiteral_20568/*"img_shop_3"*/,
    2,
    2,
    v16);
  if ( v15 )
  {
    v4 = sub_1C37194(v15, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 3 )
    goto LABEL_65;
  v1->m_Items[3] = v15;
  sub_1C36FFC((CGThumbnailListItem_o *)&v1->m_Items[3], (int32_t)v15, v17, v18);
  v19 = (ShopTopItemInfo_o *)sub_1C372A4(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v19,
    19,
    (System_String_o *)StringLiteral_12081/*"SHOP_BUY_PURE_PRI"*/,
    (System_String_o *)StringLiteral_20563/*"img_shop_18"*/,
    18,
    13,
    v20);
  if ( v19 )
  {
    v4 = sub_1C37194(v19, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 4 )
    goto LABEL_65;
  v1->m_Items[4] = v19;
  sub_1C36FFC((CGThumbnailListItem_o *)&v1->m_Items[4], (int32_t)v19, v21, v22);
  v23 = (ShopTopItemInfo_o *)sub_1C372A4(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v23,
    14,
    (System_String_o *)StringLiteral_12082/*"SHOP_BUY_RARE_PRI"*/,
    (System_String_o *)StringLiteral_20556/*"img_shop_11"*/,
    3,
    3,
    v24);
  if ( v23 )
  {
    v4 = sub_1C37194(v23, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 5 )
    goto LABEL_65;
  v1->m_Items[5] = v23;
  sub_1C36FFC((CGThumbnailListItem_o *)&v1->m_Items[5], (int32_t)v23, v25, v26);
  v27 = (ShopTopItemInfo_o *)sub_1C372A4(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v27,
    21,
    (System_String_o *)StringLiteral_12084/*"SHOP_BUY_REVIVAL_ITEM"*/,
    (System_String_o *)StringLiteral_20565/*"img_shop_21"*/,
    20,
    15,
    v28);
  if ( v27 )
  {
    v4 = sub_1C37194(v27, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 6 )
    goto LABEL_65;
  v1->m_Items[6] = v27;
  sub_1C36FFC((CGThumbnailListItem_o *)&v1->m_Items[6], (int32_t)v27, v29, v30);
  v31 = (ShopTopItemInfo_o *)sub_1C372A4(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v31,
    20,
    (System_String_o *)StringLiteral_12182/*"SHOP_TRADE_AP"*/,
    (System_String_o *)StringLiteral_20564/*"img_shop_20"*/,
    19,
    14,
    v32);
  if ( v31 )
  {
    v4 = sub_1C37194(v31, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 7 )
    goto LABEL_65;
  v1->m_Items[7] = v31;
  sub_1C36FFC((CGThumbnailListItem_o *)&v1->m_Items[7], (int32_t)v31, v33, v34);
  v35 = (ShopTopItemInfo_o *)sub_1C372A4(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v35,
    17,
    (System_String_o *)StringLiteral_12095/*"SHOP_BUY_SVT_COSTUME"*/,
    (System_String_o *)StringLiteral_20561/*"img_shop_16"*/,
    15,
    11,
    v36);
  if ( v35 )
  {
    v4 = sub_1C37194(v35, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 8 )
    goto LABEL_65;
  v1->m_Items[8] = v35;
  sub_1C36FFC((CGThumbnailListItem_o *)&v1->m_Items[8], (int32_t)v35, v37, v38);
  v39 = (ShopTopItemInfo_o *)sub_1C372A4(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v39,
    22,
    (System_String_o *)StringLiteral_12106/*"SHOP_EVENT_SVT_EQUIP"*/,
    (System_String_o *)StringLiteral_20566/*"img_shop_22"*/,
    21,
    16,
    v40);
  if ( v39 )
  {
    v4 = sub_1C37194(v39, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 9 )
    goto LABEL_65;
  v1->m_Items[9] = v39;
  sub_1C36FFC((CGThumbnailListItem_o *)&v1->m_Items[9], (int32_t)v39, v41, v42);
  v43 = (ShopTopItemInfo_o *)sub_1C372A4(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v43,
    6,
    (System_String_o *)StringLiteral_12086/*"SHOP_BUY_SERVANT_STORAGE"*/,
    (System_String_o *)StringLiteral_20557/*"img_shop_12"*/,
    11,
    0,
    v44);
  if ( v43 )
  {
    v4 = sub_1C37194(v43, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 0xA )
    goto LABEL_65;
  v1->m_Items[10] = v43;
  sub_1C36FFC((CGThumbnailListItem_o *)&v1->m_Items[10], (int32_t)v43, v45, v46);
  v47 = (ShopTopItemInfo_o *)sub_1C372A4(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v47,
    7,
    (System_String_o *)StringLiteral_12085/*"SHOP_BUY_SERVANT_EQUIP_STORAGE"*/,
    (System_String_o *)StringLiteral_20558/*"img_shop_13"*/,
    12,
    0,
    v48);
  if ( v47 )
  {
    v4 = sub_1C37194(v47, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 0xB )
    goto LABEL_65;
  v1->m_Items[11] = v47;
  sub_1C36FFC((CGThumbnailListItem_o *)&v1->m_Items[11], (int32_t)v47, v49, v50);
  v51 = (ShopTopItemInfo_o *)sub_1C372A4(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v51,
    12,
    (System_String_o *)StringLiteral_12089/*"SHOP_BUY_STONE_FRAGMENTS"*/,
    (System_String_o *)StringLiteral_20572/*"img_shop_9"*/,
    4,
    0,
    v52);
  if ( v51 )
  {
    v4 = sub_1C37194(v51, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 0xC )
    goto LABEL_65;
  v1->m_Items[12] = v51;
  sub_1C36FFC((CGThumbnailListItem_o *)&v1->m_Items[12], (int32_t)v51, v53, v54);
  v55 = (ShopTopItemInfo_o *)sub_1C372A4(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v55,
    1,
    (System_String_o *)StringLiteral_12056/*"SHOP_BUY_BANK_ITEM"*/,
    (System_String_o *)StringLiteral_20554/*"img_shop_1"*/,
    10,
    0,
    v56);
  if ( v55 )
  {
    v4 = sub_1C37194(v55, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 0xD )
    goto LABEL_65;
  v1->m_Items[13] = v55;
  sub_1C36FFC((CGThumbnailListItem_o *)&v1->m_Items[13], (int32_t)v55, v57, v58);
  v59 = (ShopTopItemInfo_o *)sub_1C372A4(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v59,
    16,
    (System_String_o *)StringLiteral_12071/*"SHOP_BUY_GRAIL_FRAGMENTS"*/,
    (System_String_o *)StringLiteral_20560/*"img_shop_15"*/,
    14,
    0,
    v60);
  if ( v59 )
  {
    v4 = sub_1C37194(v59, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 0xE )
    goto LABEL_65;
  v1->m_Items[14] = v59;
  sub_1C36FFC((CGThumbnailListItem_o *)&v1->m_Items[14], (int32_t)v59, v61, v62);
  v63 = (ShopTopItemInfo_o *)sub_1C372A4(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v63,
    18,
    (System_String_o *)StringLiteral_12101/*"SHOP_COIN_ROOM"*/,
    (System_String_o *)StringLiteral_20562/*"img_shop_17"*/,
    17,
    0,
    v64);
  if ( v63 )
  {
    v4 = sub_1C37194(v63, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 0xF )
    goto LABEL_65;
  v1->m_Items[15] = v63;
  sub_1C36FFC((CGThumbnailListItem_o *)&v1->m_Items[15], (int32_t)v63, v65, v66);
  v67 = (ShopTopItemInfo_o *)sub_1C372A4(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v67,
    23,
    (System_String_o *)StringLiteral_12100/*"SHOP_CLASS_BOARD_RESET"*/,
    (System_String_o *)StringLiteral_20567/*"img_shop_23"*/,
    22,
    0,
    v68);
  if ( v67 )
  {
    v4 = sub_1C37194(v67, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 0x10 )
    goto LABEL_65;
  v1->m_Items[16] = v67;
  sub_1C36FFC((CGThumbnailListItem_o *)&v1->m_Items[16], (int32_t)v67, v69, v70);
  v71 = (ShopTopItemInfo_o *)sub_1C372A4(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v71,
    15,
    (System_String_o *)StringLiteral_12088/*"SHOP_BUY_SPECIAL_ITEM"*/,
    (System_String_o *)StringLiteral_20559/*"img_shop_14"*/,
    5,
    0,
    v72);
  if ( v71 )
  {
    v4 = sub_1C37194(v71, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 0x11 )
    goto LABEL_65;
  v1->m_Items[17] = v71;
  sub_1C36FFC((CGThumbnailListItem_o *)&v1->m_Items[17], (int32_t)v71, v73, v74);
  v75 = (ShopTopItemInfo_o *)sub_1C372A4(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v75,
    13,
    (System_String_o *)StringLiteral_12054/*"SHOP_BUY_ANONYMOUS"*/,
    (System_String_o *)StringLiteral_20555/*"img_shop_10"*/,
    6,
    0,
    v76);
  if ( v75 )
  {
    v4 = sub_1C37194(v75, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 0x12 )
    goto LABEL_65;
  v1->m_Items[18] = v75;
  sub_1C36FFC((CGThumbnailListItem_o *)&v1->m_Items[18], (int32_t)v75, v77, v78);
  v79 = (ShopTopItemInfo_o *)sub_1C372A4(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(v79, 24, (System_String_o *)StringLiteral_1/*""*/, (System_String_o *)StringLiteral_21434/*"mask00"*/, 0, 0, v80);
  if ( v79 )
  {
    v4 = sub_1C37194(v79, v1->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_66:
      v85 = sub_1C372D8();
      sub_1C37180(v85, 0);
    }
  }
  if ( LODWORD(v1->max_length) <= 0x13 )
LABEL_65:
    sub_1C372BC(v4);
  v1->m_Items[19] = v79;
  sub_1C36FFC((CGThumbnailListItem_o *)&v1->m_Items[19], (int32_t)v79, v81, v82);
  ShopTopListViewManager_TypeInfo->static_fields->shopTopItemInfos = v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ShopTopListViewManager_TypeInfo->static_fields, (int32_t)v1, v83, v84);
}


void ShopTopListViewManager___ctor(ShopTopListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ShopTopListViewManager__CreateList(
        ShopTopListViewManager_o *this,
        int32_t kind,
        float overrideScrollBarValue,
        const MethodInfo *method)
{
  int64_t Value; // x0
  __int64 v7; // x8
  System_Collections_Generic_List_long__o *v8; // x20
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  ShopNoticeTween_o *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x29
  int v16; // w8
  unsigned int v17; // w21
  ShopTopItemInfo_o *v18; // x22
  int32_t Kind_k__BackingField; // w8
  BalanceConfig_c *v20; // x0
  int32_t ClassBoardReleaseQuestId; // w23
  int32_t ShopType_k__BackingField; // w23
  ShopListNotice_o *v23; // x23
  struct System_Int64_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  int32_t v27; // w8
  char v28; // w26
  System_Collections_Generic_List_object__o *itemList; // x24
  int32_t v30; // w27
  ShopNoticeTween_o *v31; // x28
  ShopTopListViewItem_o *v32; // x25
  const MethodInfo *v33; // x6
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  struct ShopNoticeRemainTime_o **p_shopNoticeRemainTime; // x21
  ShopNoticeRemainTime_o *v41; // x22
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  UnityEngine_Object_o *scrollBar; // x20
  bool v45; // w0
  struct ShopNoticeTween_o **p_shopNoticeTween; // [xsp+8h] [xbp-68h]

  if ( (byte_4C3F397 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&CoinRoomUtility_TypeInfo);
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ShopNoticeRemainTime_TypeInfo);
    sub_1C37058(&ShopNoticeTween_TypeInfo);
    sub_1C37058(&ShopRootConstants_TypeInfo);
    sub_1C37058(&ShopTopListViewItem_TypeInfo);
    sub_1C37058(&ShopTopListViewManager_TypeInfo);
    sub_1C37058(&StringLiteral_12036/*"SHOP04_SHOP_STATE"*/);
    byte_4C3F397 = 1;
  }
  Value = (int64_t)ShopTopListViewManager_TypeInfo;
  if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
    Value = (int64_t)ShopTopListViewManager_TypeInfo;
  }
  v7 = **(_QWORD **)(Value + 184);
  if ( !v7 )
    goto LABEL_64;
  ListViewManager__CreateList((ListViewManager_o *)this, *(_DWORD *)(v7 + 24), 0);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  p_shopNoticeTween = &this->fields.shopNoticeTween;
  if ( !this->fields.shopNoticeTween )
  {
    v12 = (ShopNoticeTween_o *)sub_1C372A4(ShopNoticeTween_TypeInfo);
    ShopNoticeTween___ctor(v12, (UnityEngine_MonoBehaviour_o *)this, 0);
    this->fields.shopNoticeTween = v12;
    sub_1C36FFC((CGThumbnailListItem_o *)p_shopNoticeTween, (int32_t)v12, v13, v14);
  }
  Value = (int64_t)ShopTopListViewManager_TypeInfo;
  if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
    Value = (int64_t)ShopTopListViewManager_TypeInfo;
  }
  v15 = **(_QWORD **)(Value + 184);
  if ( !v15 )
    goto LABEL_64;
  v16 = *(_DWORD *)(v15 + 24);
  if ( v16 >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= v16 )
        sub_1C372BC(Value);
      v18 = *(ShopTopItemInfo_o **)(v15 + 8LL * (int)v17 + 32);
      if ( !v18 )
        goto LABEL_64;
      Kind_k__BackingField = v18->fields._Kind_k__BackingField;
      if ( Kind_k__BackingField == 17 )
      {
        Value = ConstantMaster__getValue((System_String_o *)StringLiteral_12036/*"SHOP04_SHOP_STATE"*/, 0);
        if ( (_DWORD)Value == -1 )
          goto LABEL_53;
        Kind_k__BackingField = v18->fields._Kind_k__BackingField;
      }
      if ( Kind_k__BackingField != 9 )
        goto LABEL_24;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Value = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Value )
        goto LABEL_64;
      Value = ShopMaster__IsEnableEventShop_42870160((ShopMaster_o *)Value, 0);
      if ( (Value & 1) != 0 )
        break;
LABEL_53:
      v16 = *(_DWORD *)(v15 + 24);
      if ( (int)++v17 >= v16 )
        goto LABEL_54;
    }
    Kind_k__BackingField = v18->fields._Kind_k__BackingField;
LABEL_24:
    if ( Kind_k__BackingField == 23 )
    {
      v20 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v20 = BalanceConfig_TypeInfo;
      }
      ClassBoardReleaseQuestId = v20->static_fields->ClassBoardReleaseQuestId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Value = CondType__IsQuestClear_40324848(ClassBoardReleaseQuestId, -1, 0, 0);
      if ( (Value & 1) == 0 )
        goto LABEL_53;
    }
    ShopType_k__BackingField = v18->fields._ShopType_k__BackingField;
    if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
    Value = (int64_t)ShopTopListViewManager__GetShopListNotice(ShopType_k__BackingField, v9);
    v23 = (ShopListNotice_o *)Value;
    if ( Value )
    {
      Value = ShopListNotice__get_MostRecentTimeLimit((ShopListNotice_o *)Value, 0);
      if ( !v8 )
        goto LABEL_64;
      items = v8->fields._items;
      v25 = Method_System_Collections_Generic_List_long__Add__;
      ++v8->fields._version;
      if ( !items )
        goto LABEL_64;
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v8,
          Value,
          *(const MethodInfo_378B058 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v8->fields._size = size + 1;
        items->m_Items[size] = Value;
      }
    }
    v27 = v18->fields._Kind_k__BackingField;
    if ( v27 == 18 )
    {
      if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
      Value = CoinRoomUtility__IsTargetQuestClear(0);
    }
    else
    {
      if ( v27 != 17 )
      {
        v28 = 1;
LABEL_48:
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          goto LABEL_64;
        v30 = itemList->fields._size;
        v31 = *p_shopNoticeTween;
        v32 = (ShopTopListViewItem_o *)sub_1C372A4(ShopTopListViewItem_TypeInfo);
        ShopTopListViewItem___ctor(v32, v30, v18, v28 & 1, v23, v31, v33);
        v36 = itemList->fields._items;
        v37 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v36 )
          goto LABEL_64;
        v38 = itemList->fields._size;
        if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v32,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &v36->obj.klass + v38;
          itemList->fields._size = v38 + 1;
          v39[4] = (Il2CppClass *)v32;
          sub_1C36FFC((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v32, v34, v35);
        }
        goto LABEL_53;
      }
      if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      Value = ShopRootConstants__IsSvtCostumeShopOpen(0);
    }
    v28 = Value;
    goto LABEL_48;
  }
LABEL_54:
  Value = (int64_t)this->fields.shopNoticeRemainTime;
  p_shopNoticeRemainTime = &this->fields.shopNoticeRemainTime;
  if ( !Value )
  {
    v41 = (ShopNoticeRemainTime_o *)sub_1C372A4(ShopNoticeRemainTime_TypeInfo);
    ShopNoticeRemainTime___ctor(v41, (UnityEngine_MonoBehaviour_o *)this, 0);
    this->fields.shopNoticeRemainTime = v41;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.shopNoticeRemainTime, (int32_t)v41, v42, v43);
    Value = (int64_t)this->fields.shopNoticeRemainTime;
    if ( !Value )
      goto LABEL_64;
  }
  *(_QWORD *)(Value + 24) = v8;
  sub_1C36FFC((CGThumbnailListItem_o *)(Value + 24), (int32_t)v8, v10, v11);
  Value = (int64_t)*p_shopNoticeRemainTime;
  if ( !*p_shopNoticeRemainTime )
    goto LABEL_64;
  ShopNoticeRemainTime__Start((ShopNoticeRemainTime_o *)Value, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v45 = UnityEngine_Object__op_Inequality(scrollBar, 0, 0);
  if ( overrideScrollBarValue >= 0.0 && v45 )
  {
    Value = (int64_t)this->fields.scrollBar;
    if ( Value )
    {
      UIProgressBar__set_value((UIProgressBar_o *)Value, overrideScrollBarValue, 0);
      return;
    }
LABEL_64:
    sub_1C372B4(Value);
  }
}


void ShopTopListViewManager__DestroyList(ShopTopListViewManager_o *this, const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0

  scrollView = this->fields.scrollView;
  if ( !scrollView )
    sub_1C372B4(0);
  UIScrollView__ResetPosition(scrollView, 0);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


ShopListNotice_o *ShopTopListViewManager__GetShopListNotice(int32_t type, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  ShopMaster_o *v4; // x20
  ShopEntity_array *EnableEntitiyList; // x0
  ShopEntity_array *EnableEntitiyList_42856448; // x21
  ShopListNotice_o *v7; // x19

  if ( (byte_4C3F3A1 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C37058(&ShopListNotice_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3F3A1 = 1;
  }
  if ( !type )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  v4 = (ShopMaster_o *)Instance;
  EnableEntitiyList = ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, type, 0);
  if ( !EnableEntitiyList || (EnableEntitiyList_42856448 = EnableEntitiyList, !EnableEntitiyList->max_length) )
    EnableEntitiyList_42856448 = ShopMaster__GetEnableEntitiyList_42856448(v4, 0, type, 0x20000, 0);
  v7 = (ShopListNotice_o *)sub_1C372A4(ShopListNotice_TypeInfo);
  ShopListNotice___ctor(v7, EnableEntitiyList_42856448, 0);
  return v7;
}


ShopNotice_o *ShopTopListViewManager__GetShopNotice(const MethodInfo *method)
{
  ShopNotice_o *v1; // x19
  const MethodInfo *v2; // x1
  ShopListNotice_o *ShopListNotice; // x0
  __int64 v4; // x22
  int v5; // w8
  unsigned int v6; // w23
  __int64 v7; // x8
  int32_t v8; // w20

  if ( (byte_4C3F3A2 & 1) == 0 )
  {
    sub_1C37058(&ShopNotice_TypeInfo);
    sub_1C37058(&ShopTopListViewManager_TypeInfo);
    byte_4C3F3A2 = 1;
  }
  v1 = (ShopNotice_o *)sub_1C372A4(ShopNotice_TypeInfo);
  ShopNotice___ctor(v1, 0);
  ShopListNotice = (ShopListNotice_o *)ShopTopListViewManager_TypeInfo;
  if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
    ShopListNotice = (ShopListNotice_o *)ShopTopListViewManager_TypeInfo;
  }
  v4 = **(_QWORD **)&ShopListNotice[3].fields._IsShowNew_k__BackingField;
  if ( !v4 )
    goto LABEL_15;
  v5 = *(_DWORD *)(v4 + 24);
  if ( v5 >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= v5 )
        sub_1C372BC(ShopListNotice);
      v7 = *(_QWORD *)(v4 + 8LL * (int)v6 + 32);
      if ( !v7 )
        break;
      v8 = *(_DWORD *)(v7 + 44);
      if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
      ShopListNotice = ShopTopListViewManager__GetShopListNotice(v8, v2);
      if ( !v1 )
        break;
      ShopNotice__CompareShopListNotice(v1, ShopListNotice, 0);
      v5 = *(_DWORD *)(v4 + 24);
      if ( (int)++v6 >= v5 )
        return v1;
    }
LABEL_15:
    sub_1C372B4(ShopListNotice);
  }
  return v1;
}


void ShopTopListViewManager__InvalidateList(ShopTopListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  System_Collections_Generic_List_object__o *v4; // x19
  int32_t v5; // w20
  const MethodInfo *v6; // x1

  if ( (byte_4C3F39A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ShopTopListViewObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopTopListViewObject__get_Item__);
    byte_4C3F39A = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)ShopTopListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_9;
  v4 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v4,
                                                                  v5,
                                                                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ShopTopListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ShopTopListViewObject__SetupDisp((ShopTopListViewObject_o *)ObjectList, v6);
      if ( ++v5 >= v4->fields._size )
        return;
    }
LABEL_9:
    sub_1C372B4(ObjectList);
  }
}


void ShopTopListViewManager__LoadCoinRoomAsset(ShopTopListViewManager_o *this, const MethodInfo *method)
{
  CoinRoomUtility_c *v3; // x0
  System_String_o *ASSET_NAME; // x20
  AssetLoader_LoadEndDataHandler_o *v5; // x21

  if ( (byte_4C3F398 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&CoinRoomUtility_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_ShopTopListViewManager__LoadCoinRoomAsset_b__17_0__);
    byte_4C3F398 = 1;
  }
  if ( !this->fields.coinRoomAsset )
  {
    v3 = CoinRoomUtility_TypeInfo;
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
      v3 = CoinRoomUtility_TypeInfo;
    }
    ASSET_NAME = v3->static_fields->ASSET_NAME;
    v5 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v5,
      (Il2CppObject *)this,
      Method_ShopTopListViewManager__LoadCoinRoomAsset_b__17_0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(ASSET_NAME, v5, 1, 0);
  }
}


void ShopTopListViewManager__OnClickListView(
        ShopTopListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ShopTopListViewManager_o *v4; // x19
  __int64 naturalAligment; // x10
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UnityEngine_GameObject_o *dragParentObject; // x8
  ShopTopListViewManager_o *v9; // x20
  struct System_Action_ShopRootConstants_State__o *onClickListViewItem; // x21
  struct UnityEngine_GameObject_o *v11; // x8

  v4 = this;
  if ( (byte_4C3F3A0 & 1) == 0 )
  {
    this = (ShopTopListViewManager_o *)sub_1C37058(&ShopTopListViewObject_TypeInfo);
    byte_4C3F3A0 = 1;
  }
  if ( !obj )
    goto LABEL_13;
  naturalAligment = ShopTopListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ShopTopListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ShopTopListViewObject_TypeInfo )
  {
    goto LABEL_13;
  }
  this = (ShopTopListViewManager_o *)ShopTopListViewObject__GetItem(
                                       (ShopTopListViewObject_o *)obj,
                                       (const MethodInfo *)obj);
  if ( this )
  {
    dragParentObject = this->fields.dragParentObject;
    v9 = this;
    if ( !dragParentObject )
      goto LABEL_13;
    if ( LODWORD(dragParentObject->fields.m_CachedPtr) != 24 )
    {
      onClickListViewItem = v4->fields.onClickListViewItem;
      if ( onClickListViewItem )
      {
        v4->fields.onClickListViewItem = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.onClickListViewItem, 0, v6, v7);
        v11 = v9->fields.dragParentObject;
        if ( v11 )
        {
          ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onClickListViewItem->fields.invoke_impl)(
            onClickListViewItem->fields.method_code,
            LODWORD(v11[1].fields.m_CachedPtr),
            onClickListViewItem->fields.method);
          return;
        }
LABEL_13:
        sub_1C372B4(this);
      }
    }
  }
}


void ShopTopListViewManager__OnMoveEnd(ShopTopListViewManager_o *this, const MethodInfo *method)
{
  int32_t v3; // w8
  const MethodInfo *v4; // x2
  int32_t initMode; // w1
  UnityEngine_Object_o *scrollView; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *onMoveEnd; // x20

  if ( (byte_4C3F39F & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F39F = 1;
  }
  v3 = this->fields.callbackCount - 1;
  this->fields.callbackCount = v3;
  if ( !v3 )
  {
    ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0);
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
    if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
    {
      v9 = this->fields.scrollView;
      if ( !v9 )
        sub_1C372B4(0);
      ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v9->klass->vtable._8_UpdateScrollbars.methodPtr)(
        v9,
        1,
        v9->klass->vtable._8_UpdateScrollbars.method);
    }
    onMoveEnd = this->fields.onMoveEnd;
    if ( onMoveEnd )
    {
      this->fields.onMoveEnd = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.onMoveEnd, 0, v7, v8);
      ((void (__fastcall *)(intptr_t, intptr_t))onMoveEnd->fields.invoke_impl)(
        onMoveEnd->fields.method_code,
        onMoveEnd->fields.method);
    }
  }
}


void ShopTopListViewManager__ReleaseCoinRoomAsset(ShopTopListViewManager_o *this, const MethodInfo *method)
{
  AssetData_o *coinRoomAsset; // x19
  CGThumbnailListItem_o *p_coinRoomAsset; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3F399 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C3F399 = 1;
  }
  coinRoomAsset = this->fields.coinRoomAsset;
  if ( coinRoomAsset )
  {
    p_coinRoomAsset = (CGThumbnailListItem_o *)&this->fields.coinRoomAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40534712(coinRoomAsset, 0);
    p_coinRoomAsset->klass = 0;
    sub_1C36FFC(p_coinRoomAsset, 0, v5, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopTopListViewManager__RequestListObject(
        ShopTopListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ShopTopListViewObject__o *ObjectList; // x0
  const MethodInfo *v6; // x2
  System_Collections_Generic_List_object__o *v7; // x21
  float v8; // s8
  int32_t size; // w8
  int32_t v10; // w22
  int32_t v11; // w23
  Il2CppObject *Item; // x24
  System_Action_o *v13; // x25
  const MethodInfo *v14; // x3

  if ( (byte_4C3F39E & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopTopListViewObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopTopListViewObject__get_Item__);
    sub_1C37058(&Method_ShopTopListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C3F39E = 1;
  }
  if ( initMode == 1 )
  {
    ObjectList = ShopTopListViewManager__get_ObjectList(this, *(const MethodInfo **)&initMode);
    v7 = (System_Collections_Generic_List_object__o *)ObjectList;
    v8 = 0.0;
  }
  else
  {
    ObjectList = ShopTopListViewManager__get_ClippingObjectList(this, *(const MethodInfo **)&initMode);
    v8 = 0.1;
    v7 = (System_Collections_Generic_List_object__o *)ObjectList;
  }
  if ( !v7 )
    goto LABEL_18;
  size = v7->fields._size;
  if ( size )
  {
    if ( (unsigned int)(initMode - 1) >= 6 )
      v10 = 0;
    else
      v10 = initMode + 2;
    this->fields.callbackCount = size;
    if ( size >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v7,
                 v11,
                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ShopTopListViewObject__get_Item__);
        v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(v13, (Il2CppObject *)this, Method_ShopTopListViewManager_OnMoveEnd__, 0);
        if ( !Item )
          break;
        ShopTopListViewObject__Init((ShopTopListViewObject_o *)Item, v10, v13, v8, v14);
        if ( ++v11 >= v7->fields._size )
          goto LABEL_15;
      }
LABEL_18:
      sub_1C372B4(ObjectList);
    }
LABEL_15:
    ShopTopListViewManager__ResetShopListNoticeOnShopListViewItemDraw(this, initMode, v6);
  }
  else if ( initMode != 6 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      0.0,
      0);
  }
}


void ShopTopListViewManager__ResetShopListNoticeOnShopListViewItemDraw(
        ShopTopListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v5; // x20
  const MethodInfo *v6; // x1
  int64_t ClippingObjectList; // x0
  const MethodInfo *v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w21
  const MethodInfo *v12; // x1
  ShopTopListViewObject_o *v13; // x22
  const MethodInfo *v14; // x1
  __int64 v15; // x8
  const MethodInfo *v16; // x1
  __int64 v17; // x8
  int32_t v18; // w23
  int64_t v19; // x23
  struct System_Int64_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  const MethodInfo *v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x1

  if ( (byte_4C3F3A3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopTopListViewObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopTopListViewObject__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C37058(&ShopTopListViewManager_TypeInfo);
    byte_4C3F3A3 = 1;
  }
  if ( initMode == 5 )
  {
    v5 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v5,
      (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
    ClippingObjectList = (int64_t)ShopTopListViewManager__get_ClippingObjectList(this, v6);
    if ( !ClippingObjectList )
      goto LABEL_29;
    v11 = 0;
    while ( v11 < *(_DWORD *)(ClippingObjectList + 24) )
    {
      ClippingObjectList = (int64_t)ShopTopListViewManager__get_ClippingObjectList(this, v8);
      if ( !ClippingObjectList )
        goto LABEL_29;
      ClippingObjectList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)ClippingObjectList,
                                      v11,
                                      (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ShopTopListViewObject__get_Item__);
      if ( !ClippingObjectList )
        goto LABEL_29;
      v13 = (ShopTopListViewObject_o *)ClippingObjectList;
      ClippingObjectList = (int64_t)ShopTopListViewObject__GetItem((ShopTopListViewObject_o *)ClippingObjectList, v12);
      if ( !ClippingObjectList )
        goto LABEL_29;
      v15 = *(_QWORD *)(ClippingObjectList + 120);
      if ( !v15 )
        goto LABEL_29;
      if ( *(_DWORD *)(v15 + 44) )
      {
        ClippingObjectList = (int64_t)ShopTopListViewObject__GetItem(v13, v14);
        if ( !ClippingObjectList )
          goto LABEL_29;
        v17 = *(_QWORD *)(ClippingObjectList + 120);
        if ( !v17 )
          goto LABEL_29;
        v18 = *(_DWORD *)(v17 + 44);
        if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
        ClippingObjectList = (int64_t)ShopTopListViewManager__GetShopListNotice(v18, v16);
        if ( !ClippingObjectList )
          goto LABEL_29;
        v19 = ClippingObjectList;
        ClippingObjectList = ShopListNotice__get_MostRecentTimeLimit((ShopListNotice_o *)ClippingObjectList, 0);
        if ( !v5 )
          goto LABEL_29;
        items = v5->fields._items;
        v21 = Method_System_Collections_Generic_List_long__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v5->fields._size;
        v23 = (const MethodInfo *)ClippingObjectList;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v5,
            ClippingObjectList,
            *(const MethodInfo_378B058 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v5->fields._size = size + 1;
          items->m_Items[size] = ClippingObjectList;
        }
        ClippingObjectList = (int64_t)ShopTopListViewObject__GetItem(v13, v23);
        if ( !ClippingObjectList )
          goto LABEL_29;
        *(_QWORD *)(ClippingObjectList + 128) = v19;
        sub_1C36FFC((CGThumbnailListItem_o *)(ClippingObjectList + 128), v19, v24, v25);
        ShopTopListViewObject__ResetShopListNotice(v13, v26);
      }
      ++v11;
      ClippingObjectList = (int64_t)ShopTopListViewManager__get_ClippingObjectList(this, v14);
      if ( !ClippingObjectList )
        goto LABEL_29;
    }
    ClippingObjectList = (int64_t)this->fields.shopNoticeRemainTime;
    if ( !ClippingObjectList )
LABEL_29:
      sub_1C372B4(ClippingObjectList);
    *(_QWORD *)(ClippingObjectList + 24) = v5;
    sub_1C36FFC((CGThumbnailListItem_o *)(ClippingObjectList + 24), (int32_t)v5, v9, v10);
  }
}


void ShopTopListViewManager__SetDragMaskStart(
        ShopTopListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode <= 5 && ((1 << initMode) & 0x2C) != 0 )
    ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
}


void ShopTopListViewManager__SetMode(
        ShopTopListViewManager_o *this,
        int32_t initMode,
        System_Action_ShopRootConstants_State__o *onClickListViewItem,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.onClickListViewItem = onClickListViewItem;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.onClickListViewItem,
    (int32_t)onClickListViewItem,
    (int32_t)onClickListViewItem,
    method);
  ShopTopListViewManager__SetMode_35409860(this, initMode, v6);
}


void ShopTopListViewManager__SetMode_35409860(
        ShopTopListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  ShopNoticeTween_o *shopNoticeTween; // x0

  this->fields.initMode = initMode;
  ListViewManager__set_IsInput((ListViewManager_o *)this, initMode == 1, 0);
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
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
  if ( (unsigned int)initMode <= 5 && ((1 << initMode) & 0x2C) != 0 )
    goto LABEL_6;
LABEL_7:
  ShopTopListViewManager__RequestListObject(this, initMode, v5);
  if ( initMode != 1 )
  {
    shopNoticeTween = this->fields.shopNoticeTween;
    if ( shopNoticeTween )
      ShopNoticeTween__Start(shopNoticeTween, 0);
  }
}


void ShopTopListViewManager__SetMode_35410032(
        ShopTopListViewManager_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.onMoveEnd = onMoveEnd;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.onMoveEnd, (int32_t)onMoveEnd, (int32_t)onMoveEnd, method);
  ShopTopListViewManager__SetMode_35409860(this, initMode, v6);
}


void ShopTopListViewManager__SetObjectItem(
        ShopTopListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ShopTopListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4C3F39B & 1) == 0 )
  {
    this = (ShopTopListViewManager_o *)sub_1C37058(&ShopTopListViewObject_TypeInfo);
    byte_4C3F39B = 1;
  }
  if ( !obj
    || (naturalAligment = ShopTopListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ShopTopListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ShopTopListViewObject_TypeInfo )
  {
    sub_1C372B4(this);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ShopTopListViewObject__Init((ShopTopListViewObject_o *)obj, v7, 0, 0.0, method);
}


void ShopTopListViewManager__SetScrollBarActive(
        ShopTopListViewManager_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x21
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4C3F39C & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F39C = 1;
  }
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(scrollBar, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_1C372B4(gameObject);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0);
  }
}


void ShopTopListViewManager__SetScrollBarEnable(
        ShopTopListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( initMode == 5 || initMode == 2 )
    ShopTopListViewManager__SetScrollBarActive(this, 1, method);
}


void ShopTopListViewManager__SetScrollBarUnEnable(
        ShopTopListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode <= 6 && ((1 << initMode) & 0x6C) != 0 )
    ShopTopListViewManager__SetScrollBarActive(this, 0, method);
}


void ShopTopListViewManager__SetScrollViewUnPressed(
        ShopTopListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v6; // x0

  if ( (byte_4C3F39D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F39D = 1;
  }
  if ( initMode == 5 || initMode == 2 )
  {
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(scrollView, 0, 0) )
    {
      v6 = this->fields.scrollView;
      if ( !v6 )
        sub_1C372B4(0);
      UIScrollView__Press(v6, 0, 0);
    }
  }
}


void ShopTopListViewManager__StartShopNoticeTween(
        ShopTopListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  ShopNoticeTween_o *shopNoticeTween; // x0

  if ( initMode != 1 )
  {
    shopNoticeTween = this->fields.shopNoticeTween;
    if ( shopNoticeTween )
      ShopNoticeTween__Start(shopNoticeTween, 0);
  }
}


void ShopTopListViewManager___LoadCoinRoomAsset_b__17_0(
        ShopTopListViewManager_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.coinRoomAsset = assetData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.coinRoomAsset, (int32_t)assetData, (int32_t)method, v3);
}


System_Collections_Generic_List_ShopTopListViewObject__o *ShopTopListViewManager__get_ClippingObjectList(
        ShopTopListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v5; // w21
  Il2CppObject *Item; // x22
  const MethodInfo *v7; // x1
  Il2CppObject *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4C3F395 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopTopListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopTopListViewObject___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_ShopTopListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F395 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ShopTopListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ShopTopListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1C372B4(objectList);
  v5 = 0;
  while ( v5 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v5,
             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v5,
                                                                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v8 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ShopTopListViewObject__GetItem(
                                                                  (ShopTopListViewObject_o *)objectList,
                                                                  v7);
      if ( objectList )
      {
        if ( !LOBYTE(objectList[2].fields._items)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_43820548(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v3 )
            goto LABEL_21;
          items = v3->fields._items;
          v12 = Method_System_Collections_Generic_List_ShopTopListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v8,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v14[4] = (Il2CppClass *)v8;
            sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
          }
        }
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v5;
    if ( !objectList )
      goto LABEL_21;
  }
  return (System_Collections_Generic_List_ShopTopListViewObject__o *)v3;
}


System_Collections_Generic_List_ShopTopListViewObject__o *ShopTopListViewManager__get_ObjectList(
        ShopTopListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v5; // w21
  Il2CppObject *Item; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v12; // x1
  Il2CppClass **v13; // x0

  if ( (byte_4C3F394 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopTopListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopTopListViewObject___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_ShopTopListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F394 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ShopTopListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ShopTopListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1C372B4(objectList);
  v5 = 0;
  while ( v5 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v5,
             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v5,
                                                                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___);
      if ( !v3 )
        goto LABEL_17;
      items = v3->fields._items;
      v10 = Method_System_Collections_Generic_List_ShopTopListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v3->fields._size;
      v12 = objectList;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)objectList,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
      }
      else
      {
        v13 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v13[4] = (Il2CppClass *)v12;
        sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 4), (int32_t)v12, v7, v8);
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v5;
    if ( !objectList )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_ShopTopListViewObject__o *)v3;
}


AssetData_o *ShopTopListViewManager__get_coinRoomAssetData(ShopTopListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.coinRoomAsset;
}


float ShopTopListViewManager__get_currentScrollBarValue(ShopTopListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x20
  UIProgressBar_o *v5; // x0

  if ( (byte_4C3F396 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F396 = 1;
  }
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(scrollBar, 0, 0) )
    return -1.0;
  v5 = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !v5 )
    sub_1C372B4(0);
  return UIProgressBar__get_value(v5, 0);
}