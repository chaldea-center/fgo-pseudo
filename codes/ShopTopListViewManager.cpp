void ShopTopListViewManager___cctor(const MethodInfo *method)
{
  struct ShopTopItemInfo_array *v1; // x19
  ShopTopItemInfo_o *v2; // x20
  const MethodInfo *v3; // x6
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  ShopTopItemInfo_o *v8; // x20
  const MethodInfo *v9; // x6
  const MethodInfo *v10; // x3
  ShopTopItemInfo_o *v11; // x20
  const MethodInfo *v12; // x6
  const MethodInfo *v13; // x3
  ShopTopItemInfo_o *v14; // x20
  const MethodInfo *v15; // x6
  const MethodInfo *v16; // x3
  ShopTopItemInfo_o *v17; // x20
  const MethodInfo *v18; // x6
  const MethodInfo *v19; // x3
  ShopTopItemInfo_o *v20; // x20
  const MethodInfo *v21; // x6
  const MethodInfo *v22; // x3
  ShopTopItemInfo_o *v23; // x20
  const MethodInfo *v24; // x6
  const MethodInfo *v25; // x3
  ShopTopItemInfo_o *v26; // x20
  const MethodInfo *v27; // x6
  const MethodInfo *v28; // x3
  ShopTopItemInfo_o *v29; // x20
  const MethodInfo *v30; // x6
  const MethodInfo *v31; // x3
  ShopTopItemInfo_o *v32; // x20
  const MethodInfo *v33; // x6
  const MethodInfo *v34; // x3
  ShopTopItemInfo_o *v35; // x20
  const MethodInfo *v36; // x6
  const MethodInfo *v37; // x3
  ShopTopItemInfo_o *v38; // x20
  const MethodInfo *v39; // x6
  const MethodInfo *v40; // x3
  ShopTopItemInfo_o *v41; // x20
  const MethodInfo *v42; // x6
  const MethodInfo *v43; // x3
  ShopTopItemInfo_o *v44; // x20
  const MethodInfo *v45; // x6
  const MethodInfo *v46; // x3
  ShopTopItemInfo_o *v47; // x20
  const MethodInfo *v48; // x6
  const MethodInfo *v49; // x3
  ShopTopItemInfo_o *v50; // x20
  const MethodInfo *v51; // x6
  const MethodInfo *v52; // x3
  ShopTopItemInfo_o *v53; // x20
  const MethodInfo *v54; // x6
  const MethodInfo *v55; // x3
  ShopTopItemInfo_o *v56; // x20
  const MethodInfo *v57; // x6
  const MethodInfo *v58; // x3
  ShopTopItemInfo_o *v59; // x20
  const MethodInfo *v60; // x6
  const MethodInfo *v61; // x3
  ShopTopItemInfo_o *v62; // x20
  const MethodInfo *v63; // x6
  const MethodInfo *v64; // x3
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  __int64 v67; // x0

  if ( (byte_4C2365B & 1) == 0 )
  {
    sub_1C2D490(&ShopTopItemInfo___TypeInfo);
    sub_1C2D490(&ShopTopItemInfo_TypeInfo);
    sub_1C2D490(&ShopTopListViewManager_TypeInfo);
    sub_1C2D490(&StringLiteral_12085/*"SHOP_BUY_STONE_FRAGMENTS"*/);
    sub_1C2D490(&StringLiteral_21418/*"mask00"*/);
    sub_1C2D490(&StringLiteral_12051/*"SHOP_BUY_ANONYMOUS"*/);
    sub_1C2D490(&StringLiteral_12080/*"SHOP_BUY_REVIVAL_ITEM"*/);
    sub_1C2D490(&StringLiteral_20545/*"img_shop_15"*/);
    sub_1C2D490(&StringLiteral_12177/*"SHOP_START_UP_SUMMON"*/);
    sub_1C2D490(&StringLiteral_20541/*"img_shop_11"*/);
    sub_1C2D490(&StringLiteral_12175/*"SHOP_SHOP18"*/);
    sub_1C2D490(&StringLiteral_12168/*"SHOP_SELL_SERVANT"*/);
    sub_1C2D490(&StringLiteral_20551/*"img_shop_22"*/);
    sub_1C2D490(&StringLiteral_12068/*"SHOP_BUY_GRAIL_FRAGMENTS"*/);
    sub_1C2D490(&StringLiteral_12078/*"SHOP_BUY_RARE_PRI"*/);
    sub_1C2D490(&StringLiteral_12101/*"SHOP_EVENT_SVT_EQUIP"*/);
    sub_1C2D490(&StringLiteral_20552/*"img_shop_23"*/);
    sub_1C2D490(&StringLiteral_12053/*"SHOP_BUY_BANK_ITEM"*/);
    sub_1C2D490(&StringLiteral_12178/*"SHOP_TRADE_AP"*/);
    sub_1C2D490(&StringLiteral_20543/*"img_shop_13"*/);
    sub_1C2D490(&StringLiteral_20557/*"img_shop_9"*/);
    sub_1C2D490(&StringLiteral_12073/*"SHOP_BUY_MANA_ITEM"*/);
    sub_1C2D490(&StringLiteral_12091/*"SHOP_BUY_SVT_COSTUME"*/);
    sub_1C2D490(&StringLiteral_20540/*"img_shop_10"*/);
    sub_1C2D490(&StringLiteral_20546/*"img_shop_16"*/);
    sub_1C2D490(&StringLiteral_20547/*"img_shop_17"*/);
    sub_1C2D490(&StringLiteral_20549/*"img_shop_20"*/);
    sub_1C2D490(&StringLiteral_20556/*"img_shop_8"*/);
    sub_1C2D490(&StringLiteral_12096/*"SHOP_COIN_ROOM"*/);
    sub_1C2D490(&StringLiteral_20554/*"img_shop_4"*/);
    sub_1C2D490(&StringLiteral_20550/*"img_shop_21"*/);
    sub_1C2D490(&StringLiteral_20548/*"img_shop_18"*/);
    sub_1C2D490(&StringLiteral_12082/*"SHOP_BUY_SERVANT_STORAGE"*/);
    sub_1C2D490(&StringLiteral_12065/*"SHOP_BUY_EVENT_ITEM"*/);
    sub_1C2D490(&StringLiteral_20553/*"img_shop_3"*/);
    sub_1C2D490(&StringLiteral_12084/*"SHOP_BUY_SPECIAL_ITEM"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_20544/*"img_shop_14"*/);
    sub_1C2D490(&StringLiteral_20539/*"img_shop_1"*/);
    sub_1C2D490(&StringLiteral_12077/*"SHOP_BUY_PURE_PRI"*/);
    sub_1C2D490(&StringLiteral_12081/*"SHOP_BUY_SERVANT_EQUIP_STORAGE"*/);
    sub_1C2D490(&StringLiteral_20542/*"img_shop_12"*/);
    byte_4C2365B = 1;
  }
  v1 = (struct ShopTopItemInfo_array *)sub_1C2D538(ShopTopItemInfo___TypeInfo, 20);
  v2 = (ShopTopItemInfo_o *)sub_1C2D6DC(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v2,
    5,
    (System_String_o *)StringLiteral_12065/*"SHOP_BUY_EVENT_ITEM"*/,
    (System_String_o *)StringLiteral_20556/*"img_shop_8"*/,
    7,
    1,
    v3);
  if ( !v1 )
    sub_1C2D6EC(v4, v5);
  if ( v2 )
  {
    v4 = sub_1C2D5CC(v2, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( !LODWORD(v1->max_length) )
    goto LABEL_65;
  v1->m_Items[0] = v2;
  sub_1C2D434((CGThumbnailListItem_o *)v1->m_Items, (int32_t)v2, v6, v7);
  v8 = (ShopTopItemInfo_o *)sub_1C2D6DC(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v8,
    9,
    (System_String_o *)StringLiteral_12177/*"SHOP_START_UP_SUMMON"*/,
    (System_String_o *)StringLiteral_20547/*"img_shop_17"*/,
    16,
    12,
    v9);
  if ( v8 )
  {
    v4 = sub_1C2D5CC(v8, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 1 )
    goto LABEL_65;
  v1->m_Items[1] = v8;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[1], (int32_t)v8, v6, v10);
  v11 = (ShopTopItemInfo_o *)sub_1C2D6DC(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v11,
    8,
    (System_String_o *)StringLiteral_12168/*"SHOP_SELL_SERVANT"*/,
    (System_String_o *)StringLiteral_20554/*"img_shop_4"*/,
    9,
    0,
    v12);
  if ( v11 )
  {
    v4 = sub_1C2D5CC(v11, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 2 )
    goto LABEL_65;
  v1->m_Items[2] = v11;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[2], (int32_t)v11, v6, v13);
  v14 = (ShopTopItemInfo_o *)sub_1C2D6DC(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v14,
    3,
    (System_String_o *)StringLiteral_12073/*"SHOP_BUY_MANA_ITEM"*/,
    (System_String_o *)StringLiteral_20553/*"img_shop_3"*/,
    2,
    2,
    v15);
  if ( v14 )
  {
    v4 = sub_1C2D5CC(v14, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 3 )
    goto LABEL_65;
  v1->m_Items[3] = v14;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[3], (int32_t)v14, v6, v16);
  v17 = (ShopTopItemInfo_o *)sub_1C2D6DC(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v17,
    19,
    (System_String_o *)StringLiteral_12077/*"SHOP_BUY_PURE_PRI"*/,
    (System_String_o *)StringLiteral_20548/*"img_shop_18"*/,
    18,
    13,
    v18);
  if ( v17 )
  {
    v4 = sub_1C2D5CC(v17, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 4 )
    goto LABEL_65;
  v1->m_Items[4] = v17;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[4], (int32_t)v17, v6, v19);
  v20 = (ShopTopItemInfo_o *)sub_1C2D6DC(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v20,
    14,
    (System_String_o *)StringLiteral_12078/*"SHOP_BUY_RARE_PRI"*/,
    (System_String_o *)StringLiteral_20541/*"img_shop_11"*/,
    3,
    3,
    v21);
  if ( v20 )
  {
    v4 = sub_1C2D5CC(v20, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 5 )
    goto LABEL_65;
  v1->m_Items[5] = v20;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[5], (int32_t)v20, v6, v22);
  v23 = (ShopTopItemInfo_o *)sub_1C2D6DC(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v23,
    21,
    (System_String_o *)StringLiteral_12080/*"SHOP_BUY_REVIVAL_ITEM"*/,
    (System_String_o *)StringLiteral_20550/*"img_shop_21"*/,
    20,
    15,
    v24);
  if ( v23 )
  {
    v4 = sub_1C2D5CC(v23, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 6 )
    goto LABEL_65;
  v1->m_Items[6] = v23;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[6], (int32_t)v23, v6, v25);
  v26 = (ShopTopItemInfo_o *)sub_1C2D6DC(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v26,
    20,
    (System_String_o *)StringLiteral_12178/*"SHOP_TRADE_AP"*/,
    (System_String_o *)StringLiteral_20549/*"img_shop_20"*/,
    19,
    14,
    v27);
  if ( v26 )
  {
    v4 = sub_1C2D5CC(v26, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 7 )
    goto LABEL_65;
  v1->m_Items[7] = v26;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[7], (int32_t)v26, v6, v28);
  v29 = (ShopTopItemInfo_o *)sub_1C2D6DC(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v29,
    17,
    (System_String_o *)StringLiteral_12091/*"SHOP_BUY_SVT_COSTUME"*/,
    (System_String_o *)StringLiteral_20546/*"img_shop_16"*/,
    15,
    11,
    v30);
  if ( v29 )
  {
    v4 = sub_1C2D5CC(v29, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 8 )
    goto LABEL_65;
  v1->m_Items[8] = v29;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[8], (int32_t)v29, v6, v31);
  v32 = (ShopTopItemInfo_o *)sub_1C2D6DC(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v32,
    22,
    (System_String_o *)StringLiteral_12101/*"SHOP_EVENT_SVT_EQUIP"*/,
    (System_String_o *)StringLiteral_20551/*"img_shop_22"*/,
    21,
    16,
    v33);
  if ( v32 )
  {
    v4 = sub_1C2D5CC(v32, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 9 )
    goto LABEL_65;
  v1->m_Items[9] = v32;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[9], (int32_t)v32, v6, v34);
  v35 = (ShopTopItemInfo_o *)sub_1C2D6DC(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v35,
    6,
    (System_String_o *)StringLiteral_12082/*"SHOP_BUY_SERVANT_STORAGE"*/,
    (System_String_o *)StringLiteral_20542/*"img_shop_12"*/,
    11,
    0,
    v36);
  if ( v35 )
  {
    v4 = sub_1C2D5CC(v35, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 0xA )
    goto LABEL_65;
  v1->m_Items[10] = v35;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[10], (int32_t)v35, v6, v37);
  v38 = (ShopTopItemInfo_o *)sub_1C2D6DC(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v38,
    7,
    (System_String_o *)StringLiteral_12081/*"SHOP_BUY_SERVANT_EQUIP_STORAGE"*/,
    (System_String_o *)StringLiteral_20543/*"img_shop_13"*/,
    12,
    0,
    v39);
  if ( v38 )
  {
    v4 = sub_1C2D5CC(v38, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 0xB )
    goto LABEL_65;
  v1->m_Items[11] = v38;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[11], (int32_t)v38, v6, v40);
  v41 = (ShopTopItemInfo_o *)sub_1C2D6DC(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v41,
    12,
    (System_String_o *)StringLiteral_12085/*"SHOP_BUY_STONE_FRAGMENTS"*/,
    (System_String_o *)StringLiteral_20557/*"img_shop_9"*/,
    4,
    0,
    v42);
  if ( v41 )
  {
    v4 = sub_1C2D5CC(v41, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 0xC )
    goto LABEL_65;
  v1->m_Items[12] = v41;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[12], (int32_t)v41, v6, v43);
  v44 = (ShopTopItemInfo_o *)sub_1C2D6DC(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v44,
    1,
    (System_String_o *)StringLiteral_12053/*"SHOP_BUY_BANK_ITEM"*/,
    (System_String_o *)StringLiteral_20539/*"img_shop_1"*/,
    10,
    0,
    v45);
  if ( v44 )
  {
    v4 = sub_1C2D5CC(v44, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 0xD )
    goto LABEL_65;
  v1->m_Items[13] = v44;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[13], (int32_t)v44, v6, v46);
  v47 = (ShopTopItemInfo_o *)sub_1C2D6DC(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v47,
    16,
    (System_String_o *)StringLiteral_12068/*"SHOP_BUY_GRAIL_FRAGMENTS"*/,
    (System_String_o *)StringLiteral_20545/*"img_shop_15"*/,
    14,
    0,
    v48);
  if ( v47 )
  {
    v4 = sub_1C2D5CC(v47, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 0xE )
    goto LABEL_65;
  v1->m_Items[14] = v47;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[14], (int32_t)v47, v6, v49);
  v50 = (ShopTopItemInfo_o *)sub_1C2D6DC(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v50,
    18,
    (System_String_o *)StringLiteral_12096/*"SHOP_COIN_ROOM"*/,
    (System_String_o *)StringLiteral_20547/*"img_shop_17"*/,
    17,
    0,
    v51);
  if ( v50 )
  {
    v4 = sub_1C2D5CC(v50, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 0xF )
    goto LABEL_65;
  v1->m_Items[15] = v50;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[15], (int32_t)v50, v6, v52);
  v53 = (ShopTopItemInfo_o *)sub_1C2D6DC(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v53,
    23,
    (System_String_o *)StringLiteral_12175/*"SHOP_SHOP18"*/,
    (System_String_o *)StringLiteral_20552/*"img_shop_23"*/,
    22,
    0,
    v54);
  if ( v53 )
  {
    v4 = sub_1C2D5CC(v53, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 0x10 )
    goto LABEL_65;
  v1->m_Items[16] = v53;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[16], (int32_t)v53, v6, v55);
  v56 = (ShopTopItemInfo_o *)sub_1C2D6DC(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v56,
    15,
    (System_String_o *)StringLiteral_12084/*"SHOP_BUY_SPECIAL_ITEM"*/,
    (System_String_o *)StringLiteral_20544/*"img_shop_14"*/,
    5,
    0,
    v57);
  if ( v56 )
  {
    v4 = sub_1C2D5CC(v56, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 0x11 )
    goto LABEL_65;
  v1->m_Items[17] = v56;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[17], (int32_t)v56, v6, v58);
  v59 = (ShopTopItemInfo_o *)sub_1C2D6DC(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(
    v59,
    13,
    (System_String_o *)StringLiteral_12051/*"SHOP_BUY_ANONYMOUS"*/,
    (System_String_o *)StringLiteral_20540/*"img_shop_10"*/,
    6,
    0,
    v60);
  if ( v59 )
  {
    v4 = sub_1C2D5CC(v59, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_66;
  }
  if ( LODWORD(v1->max_length) <= 0x12 )
    goto LABEL_65;
  v1->m_Items[18] = v59;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[18], (int32_t)v59, v6, v61);
  v62 = (ShopTopItemInfo_o *)sub_1C2D6DC(ShopTopItemInfo_TypeInfo);
  ShopTopItemInfo___ctor(v62, 24, (System_String_o *)StringLiteral_1/*""*/, (System_String_o *)StringLiteral_21418/*"mask00"*/, 0, 0, v63);
  if ( v62 )
  {
    v4 = sub_1C2D5CC(v62, v1->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_66:
      v67 = sub_1C2D710();
      sub_1C2D5B8(v67, 0);
    }
  }
  if ( LODWORD(v1->max_length) <= 0x13 )
LABEL_65:
    sub_1C2D6F4(v4, v5, v6);
  v1->m_Items[19] = v62;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[19], (int32_t)v62, v6, v64);
  ShopTopListViewManager_TypeInfo->static_fields->shopTopItemInfos = v1;
  sub_1C2D434((CGThumbnailListItem_o *)ShopTopListViewManager_TypeInfo->static_fields, (int32_t)v1, v65, v66);
}


void ShopTopListViewManager___ctor(ShopTopListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ShopTopListViewManager__CreateList(
        ShopTopListViewManager_o *this,
        int32_t kind,
        float overrideScrollBarValue,
        const MethodInfo *method)
{
  int64_t Value; // x0
  __int64 v6; // x8
  System_Collections_Generic_List_long__o *v7; // x20
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  ShopNoticeTween_o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x29
  int v14; // w8
  unsigned int v15; // w21
  ShopTopItemInfo_o *v16; // x22
  int32_t Kind_k__BackingField; // w8
  BalanceConfig_c *v18; // x0
  int32_t ClassBoardReleaseQuestId; // w23
  int32_t ShopType_k__BackingField; // w23
  ShopListNotice_o *v21; // x23
  struct System_Int64_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  int32_t v25; // w8
  char v26; // w26
  System_Collections_Generic_List_object__o *itemList; // x24
  int32_t v28; // w27
  ShopNoticeTween_o *v29; // x28
  ShopTopListViewItem_o *v30; // x25
  const MethodInfo *v31; // x6
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  struct ShopNoticeRemainTime_o **p_shopNoticeRemainTime; // x21
  ShopNoticeRemainTime_o *v39; // x22
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  UnityEngine_Object_o *scrollBar; // x20
  bool v43; // w0
  struct ShopNoticeTween_o **p_shopNoticeTween; // [xsp+8h] [xbp-78h]

  if ( (byte_4C2364E & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CoinRoomUtility_TypeInfo);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ShopNoticeRemainTime_TypeInfo);
    sub_1C2D490(&ShopNoticeTween_TypeInfo);
    sub_1C2D490(&ShopRootConstants_TypeInfo);
    sub_1C2D490(&ShopTopListViewItem_TypeInfo);
    sub_1C2D490(&ShopTopListViewManager_TypeInfo);
    sub_1C2D490(&StringLiteral_12029/*"SHOP04_SHOP_STATE"*/);
    byte_4C2364E = 1;
  }
  Value = (int64_t)ShopTopListViewManager_TypeInfo;
  if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
    Value = (int64_t)ShopTopListViewManager_TypeInfo;
  }
  v6 = **(_QWORD **)(Value + 184);
  if ( !v6 )
    goto LABEL_65;
  ListViewManager__CreateList((ListViewManager_o *)this, *(_DWORD *)(v6 + 24), 0);
  v7 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  p_shopNoticeTween = &this->fields.shopNoticeTween;
  if ( !this->fields.shopNoticeTween )
  {
    v10 = (ShopNoticeTween_o *)sub_1C2D6DC(ShopNoticeTween_TypeInfo);
    ShopNoticeTween___ctor(v10, (UnityEngine_MonoBehaviour_o *)this, 0);
    this->fields.shopNoticeTween = v10;
    sub_1C2D434((CGThumbnailListItem_o *)p_shopNoticeTween, (int32_t)v10, v11, v12);
  }
  Value = (int64_t)ShopTopListViewManager_TypeInfo;
  if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
    Value = (int64_t)ShopTopListViewManager_TypeInfo;
  }
  v13 = **(_QWORD **)(Value + 184);
  if ( !v13 )
    goto LABEL_65;
  v14 = *(_DWORD *)(v13 + 24);
  if ( v14 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v14 )
        sub_1C2D6F4(Value, *(_QWORD *)&kind, v8);
      v16 = *(ShopTopItemInfo_o **)(v13 + 8LL * (int)v15 + 32);
      if ( !v16 )
        goto LABEL_65;
      Kind_k__BackingField = v16->fields._Kind_k__BackingField;
      if ( Kind_k__BackingField == 17 )
      {
        Value = ConstantMaster__getValue((System_String_o *)StringLiteral_12029/*"SHOP04_SHOP_STATE"*/, 0);
        if ( (_DWORD)Value == -1 )
          goto LABEL_54;
        Kind_k__BackingField = v16->fields._Kind_k__BackingField;
      }
      if ( Kind_k__BackingField != 9 )
        goto LABEL_24;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Value = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Value )
        goto LABEL_65;
      Value = ShopMaster__IsEnableEventShop_42635572((ShopMaster_o *)Value, 0);
      if ( (Value & 1) != 0 )
        break;
LABEL_54:
      v14 = *(_DWORD *)(v13 + 24);
      if ( (int)++v15 >= v14 )
        goto LABEL_55;
    }
    Kind_k__BackingField = v16->fields._Kind_k__BackingField;
LABEL_24:
    if ( Kind_k__BackingField == 23 )
    {
      Value = ConstantMaster__IsFLAG20250516(0);
      if ( (Value & 1) == 0 )
        goto LABEL_54;
      v18 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v18 = BalanceConfig_TypeInfo;
      }
      ClassBoardReleaseQuestId = v18->static_fields->ClassBoardReleaseQuestId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Value = CondType__IsQuestClear_40102980(ClassBoardReleaseQuestId, -1, 0, 0);
      if ( (Value & 1) == 0 )
        goto LABEL_54;
    }
    ShopType_k__BackingField = v16->fields._ShopType_k__BackingField;
    if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
    Value = (int64_t)ShopTopListViewManager__GetShopListNotice(ShopType_k__BackingField, *(const MethodInfo **)&kind);
    v21 = (ShopListNotice_o *)Value;
    if ( Value )
    {
      Value = ShopListNotice__get_MostRecentTimeLimit((ShopListNotice_o *)Value, 0);
      if ( !v7 )
        goto LABEL_65;
      items = v7->fields._items;
      v23 = Method_System_Collections_Generic_List_long__Add__;
      ++v7->fields._version;
      if ( !items )
        goto LABEL_65;
      size = v7->fields._size;
      *(_QWORD *)&kind = Value;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v7,
          Value,
          *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v7->fields._size = size + 1;
        items->m_Items[size] = Value;
      }
    }
    v25 = v16->fields._Kind_k__BackingField;
    if ( v25 == 18 )
    {
      if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
      Value = CoinRoomUtility__IsTargetQuestClear(0);
    }
    else
    {
      if ( v25 != 17 )
      {
        v26 = 1;
LABEL_49:
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          goto LABEL_65;
        v28 = itemList->fields._size;
        v29 = *p_shopNoticeTween;
        v30 = (ShopTopListViewItem_o *)sub_1C2D6DC(ShopTopListViewItem_TypeInfo);
        ShopTopListViewItem___ctor(v30, v28, v16, v26 & 1, v21, v29, v31);
        v34 = itemList->fields._items;
        v35 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v34 )
          goto LABEL_65;
        v36 = itemList->fields._size;
        if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v30,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &v34->obj.klass + v36;
          itemList->fields._size = v36 + 1;
          v37[4] = (Il2CppClass *)v30;
          sub_1C2D434((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v30, v32, v33);
        }
        goto LABEL_54;
      }
      if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      Value = ShopRootConstants__IsSvtCostumeShopOpen(0);
    }
    v26 = Value;
    goto LABEL_49;
  }
LABEL_55:
  Value = (int64_t)this->fields.shopNoticeRemainTime;
  p_shopNoticeRemainTime = &this->fields.shopNoticeRemainTime;
  if ( !Value )
  {
    v39 = (ShopNoticeRemainTime_o *)sub_1C2D6DC(ShopNoticeRemainTime_TypeInfo);
    ShopNoticeRemainTime___ctor(v39, (UnityEngine_MonoBehaviour_o *)this, 0);
    this->fields.shopNoticeRemainTime = v39;
    sub_1C2D434((CGThumbnailListItem_o *)p_shopNoticeRemainTime, (int32_t)v39, v40, v41);
    Value = (int64_t)this->fields.shopNoticeRemainTime;
    if ( !Value )
      goto LABEL_65;
  }
  *(_QWORD *)(Value + 24) = v7;
  sub_1C2D434((CGThumbnailListItem_o *)(Value + 24), (int32_t)v7, v8, v9);
  Value = (int64_t)*p_shopNoticeRemainTime;
  if ( !*p_shopNoticeRemainTime )
    goto LABEL_65;
  ShopNoticeRemainTime__Start((ShopNoticeRemainTime_o *)Value, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v43 = UnityEngine_Object__op_Inequality(scrollBar, 0, 0);
  if ( overrideScrollBarValue >= 0.0 && v43 )
  {
    Value = (int64_t)this->fields.scrollBar;
    if ( Value )
    {
      UIProgressBar__set_value((UIProgressBar_o *)Value, overrideScrollBarValue, 0);
      return;
    }
LABEL_65:
    sub_1C2D6EC(Value, *(_QWORD *)&kind);
  }
}


void ShopTopListViewManager__DestroyList(ShopTopListViewManager_o *this, const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0

  scrollView = this->fields.scrollView;
  if ( !scrollView )
    sub_1C2D6EC(0, method);
  UIScrollView__ResetPosition(scrollView, 0);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


ShopListNotice_o *ShopTopListViewManager__GetShopListNotice(int32_t type, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  ShopMaster_o *v5; // x20
  ShopEntity_array *EnableEntitiyList; // x0
  ShopEntity_array *EnableEntitiyList_42621860; // x21
  ShopListNotice_o *v8; // x19

  if ( (byte_4C23658 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C2D490(&ShopListNotice_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23658 = 1;
  }
  if ( !type )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v4);
  }
  v5 = (ShopMaster_o *)Instance;
  EnableEntitiyList = ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Instance, 0, type, 0);
  if ( !EnableEntitiyList || (EnableEntitiyList_42621860 = EnableEntitiyList, !EnableEntitiyList->max_length) )
    EnableEntitiyList_42621860 = ShopMaster__GetEnableEntitiyList_42621860(v5, 0, type, 0x20000, 0);
  v8 = (ShopListNotice_o *)sub_1C2D6DC(ShopListNotice_TypeInfo);
  ShopListNotice___ctor(v8, EnableEntitiyList_42621860, 0);
  return v8;
}


ShopNotice_o *ShopTopListViewManager__GetShopNotice(const MethodInfo *method)
{
  ShopNotice_o *v1; // x19
  const MethodInfo *v2; // x1
  __int64 v3; // x2
  ShopListNotice_o *ShopListNotice; // x0
  __int64 v5; // x22
  int v6; // w8
  unsigned int v7; // w23
  __int64 v8; // x8
  int32_t v9; // w20

  if ( (byte_4C23659 & 1) == 0 )
  {
    sub_1C2D490(&ShopNotice_TypeInfo);
    sub_1C2D490(&ShopTopListViewManager_TypeInfo);
    byte_4C23659 = 1;
  }
  v1 = (ShopNotice_o *)sub_1C2D6DC(ShopNotice_TypeInfo);
  ShopNotice___ctor(v1, 0);
  ShopListNotice = (ShopListNotice_o *)ShopTopListViewManager_TypeInfo;
  if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
    ShopListNotice = (ShopListNotice_o *)ShopTopListViewManager_TypeInfo;
  }
  v5 = **(_QWORD **)&ShopListNotice[3].fields._IsShowNew_k__BackingField;
  if ( !v5 )
    goto LABEL_15;
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= v6 )
        sub_1C2D6F4(ShopListNotice, v2, v3);
      v8 = *(_QWORD *)(v5 + 8LL * (int)v7 + 32);
      if ( !v8 )
        break;
      v9 = *(_DWORD *)(v8 + 44);
      if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
      ShopListNotice = ShopTopListViewManager__GetShopListNotice(v9, v2);
      if ( !v1 )
        break;
      ShopNotice__CompareShopListNotice(v1, ShopListNotice, 0);
      v6 = *(_DWORD *)(v5 + 24);
      if ( (int)++v7 >= v6 )
        return v1;
    }
LABEL_15:
    sub_1C2D6EC(ShopListNotice, v2);
  }
  return v1;
}


void ShopTopListViewManager__InvalidateList(ShopTopListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *v5; // x19
  int32_t v6; // w20

  if ( (byte_4C23651 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopTopListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopTopListViewObject__get_Item__);
    byte_4C23651 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)ShopTopListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_9;
  v5 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v5,
                                                                  v6,
                                                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ShopTopListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ShopTopListViewObject__SetupDisp((ShopTopListViewObject_o *)ObjectList, v4);
      if ( ++v6 >= v5->fields._size )
        return;
    }
LABEL_9:
    sub_1C2D6EC(ObjectList, v4);
  }
}


void ShopTopListViewManager__LoadCoinRoomAsset(ShopTopListViewManager_o *this, const MethodInfo *method)
{
  CoinRoomUtility_c *v3; // x0
  System_String_o *ASSET_NAME; // x20
  AssetLoader_LoadEndDataHandler_o *v5; // x21

  if ( (byte_4C2364F & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&CoinRoomUtility_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_ShopTopListViewManager__LoadCoinRoomAsset_b__17_0__);
    byte_4C2364F = 1;
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
    v5 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
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
  if ( (byte_4C23657 & 1) == 0 )
  {
    this = (ShopTopListViewManager_o *)sub_1C2D490(&ShopTopListViewObject_TypeInfo);
    byte_4C23657 = 1;
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
        sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.onClickListViewItem, 0, v6, v7);
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
        sub_1C2D6EC(this, obj);
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
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *onMoveEnd; // x20

  if ( (byte_4C23656 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23656 = 1;
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
      v10 = this->fields.scrollView;
      if ( !v10 )
        sub_1C2D6EC(0, v7);
      ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
        v10,
        1,
        v10->klass->vtable._8_UpdateScrollbars.method);
    }
    onMoveEnd = this->fields.onMoveEnd;
    if ( onMoveEnd )
    {
      this->fields.onMoveEnd = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onMoveEnd, 0, v8, v9);
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

  if ( (byte_4C23650 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    byte_4C23650 = 1;
  }
  coinRoomAsset = this->fields.coinRoomAsset;
  if ( coinRoomAsset )
  {
    p_coinRoomAsset = (CGThumbnailListItem_o *)&this->fields.coinRoomAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40313100(coinRoomAsset, 0);
    p_coinRoomAsset->klass = 0;
    sub_1C2D434(p_coinRoomAsset, 0, v5, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopTopListViewManager__RequestListObject(
        ShopTopListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ShopTopListViewObject__o *ObjectList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_object__o *v8; // x21
  float v9; // s8
  int32_t size; // w8
  int32_t v11; // w22
  int32_t v12; // w23
  Il2CppObject *Item; // x24
  System_Action_o *v14; // x25
  const MethodInfo *v15; // x3

  if ( (byte_4C23655 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopTopListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopTopListViewObject__get_Item__);
    sub_1C2D490(&Method_ShopTopListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C23655 = 1;
  }
  if ( initMode == 1 )
  {
    ObjectList = ShopTopListViewManager__get_ObjectList(this, *(const MethodInfo **)&initMode);
    v8 = (System_Collections_Generic_List_object__o *)ObjectList;
    v9 = 0.0;
  }
  else
  {
    ObjectList = ShopTopListViewManager__get_ClippingObjectList(this, *(const MethodInfo **)&initMode);
    v9 = 0.1;
    v8 = (System_Collections_Generic_List_object__o *)ObjectList;
  }
  if ( !v8 )
    goto LABEL_18;
  size = v8->fields._size;
  if ( size )
  {
    if ( (unsigned int)(initMode - 1) >= 6 )
      v11 = 0;
    else
      v11 = initMode + 2;
    this->fields.callbackCount = size;
    if ( size >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v8,
                 v12,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ShopTopListViewObject__get_Item__);
        v14 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(v14, (Il2CppObject *)this, Method_ShopTopListViewManager_OnMoveEnd__, 0);
        if ( !Item )
          break;
        ShopTopListViewObject__Init((ShopTopListViewObject_o *)Item, v11, v14, v9, v15);
        if ( ++v12 >= v8->fields._size )
          goto LABEL_15;
      }
LABEL_18:
      sub_1C2D6EC(ObjectList, v6);
    }
LABEL_15:
    ShopTopListViewManager__ResetShopListNoticeOnShopListViewItemDraw(this, initMode, v7);
  }
  else if ( initMode != 6 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
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
  ShopTopListViewObject_o *v12; // x22
  __int64 v13; // x8
  __int64 v14; // x8
  int32_t v15; // w23
  int64_t v16; // x23
  struct System_Int64_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  const MethodInfo *v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x1

  if ( (byte_4C2365A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopTopListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopTopListViewObject__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&ShopTopListViewManager_TypeInfo);
    byte_4C2365A = 1;
  }
  if ( initMode == 5 )
  {
    v5 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v5,
      (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
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
                                      (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ShopTopListViewObject__get_Item__);
      if ( !ClippingObjectList )
        goto LABEL_29;
      v12 = (ShopTopListViewObject_o *)ClippingObjectList;
      ClippingObjectList = (int64_t)ShopTopListViewObject__GetItem((ShopTopListViewObject_o *)ClippingObjectList, v8);
      if ( !ClippingObjectList )
        goto LABEL_29;
      v13 = *(_QWORD *)(ClippingObjectList + 120);
      if ( !v13 )
        goto LABEL_29;
      if ( *(_DWORD *)(v13 + 44) )
      {
        ClippingObjectList = (int64_t)ShopTopListViewObject__GetItem(v12, v8);
        if ( !ClippingObjectList )
          goto LABEL_29;
        v14 = *(_QWORD *)(ClippingObjectList + 120);
        if ( !v14 )
          goto LABEL_29;
        v15 = *(_DWORD *)(v14 + 44);
        if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
        ClippingObjectList = (int64_t)ShopTopListViewManager__GetShopListNotice(v15, v8);
        if ( !ClippingObjectList )
          goto LABEL_29;
        v16 = ClippingObjectList;
        ClippingObjectList = ShopListNotice__get_MostRecentTimeLimit((ShopListNotice_o *)ClippingObjectList, 0);
        if ( !v5 )
          goto LABEL_29;
        items = v5->fields._items;
        v18 = Method_System_Collections_Generic_List_long__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v5->fields._size;
        v20 = (const MethodInfo *)ClippingObjectList;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v5,
            ClippingObjectList,
            *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v5->fields._size = size + 1;
          items->m_Items[size] = ClippingObjectList;
        }
        ClippingObjectList = (int64_t)ShopTopListViewObject__GetItem(v12, v20);
        if ( !ClippingObjectList )
          goto LABEL_29;
        *(_QWORD *)(ClippingObjectList + 128) = v16;
        sub_1C2D434((CGThumbnailListItem_o *)(ClippingObjectList + 128), v16, v21, v22);
        ShopTopListViewObject__ResetShopListNotice(v12, v23);
      }
      ++v11;
      ClippingObjectList = (int64_t)ShopTopListViewManager__get_ClippingObjectList(this, v8);
      if ( !ClippingObjectList )
        goto LABEL_29;
    }
    ClippingObjectList = (int64_t)this->fields.shopNoticeRemainTime;
    if ( !ClippingObjectList )
LABEL_29:
      sub_1C2D6EC(ClippingObjectList, v8);
    *(_QWORD *)(ClippingObjectList + 24) = v5;
    sub_1C2D434((CGThumbnailListItem_o *)(ClippingObjectList + 24), (int32_t)v5, v9, v10);
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
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.onClickListViewItem,
    (int32_t)onClickListViewItem,
    (int32_t)onClickListViewItem,
    method);
  ShopTopListViewManager__SetMode_35116020(this, initMode, v6);
}


void ShopTopListViewManager__SetMode_35116020(
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


void ShopTopListViewManager__SetMode_35116192(
        ShopTopListViewManager_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.onMoveEnd = onMoveEnd;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onMoveEnd, (int32_t)onMoveEnd, (int32_t)onMoveEnd, method);
  ShopTopListViewManager__SetMode_35116020(this, initMode, v6);
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
  if ( (byte_4C23652 & 1) == 0 )
  {
    this = (ShopTopListViewManager_o *)sub_1C2D490(&ShopTopListViewObject_TypeInfo);
    byte_4C23652 = 1;
  }
  if ( !obj
    || (naturalAligment = ShopTopListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ShopTopListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ShopTopListViewObject_TypeInfo )
  {
    sub_1C2D6EC(this, obj);
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
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4C23653 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23653 = 1;
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
      sub_1C2D6EC(gameObject, v6);
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
  __int64 v6; // x1
  UIScrollView_o *v7; // x0

  if ( (byte_4C23654 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23654 = 1;
  }
  if ( initMode == 5 || initMode == 2 )
  {
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(scrollView, 0, 0) )
    {
      v7 = this->fields.scrollView;
      if ( !v7 )
        sub_1C2D6EC(0, v6);
      UIScrollView__Press(v7, 0, 0);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.coinRoomAsset, (int32_t)assetData, (int32_t)method, v3);
}


System_Collections_Generic_List_ShopTopListViewObject__o *ShopTopListViewManager__get_ClippingObjectList(
        ShopTopListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v6; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4C2364C & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopTopListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopTopListViewObject___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_ShopTopListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2364C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ShopTopListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ShopTopListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1C2D6EC(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v8 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ShopTopListViewObject__GetItem(
                                                                  (ShopTopListViewObject_o *)objectList,
                                                                  v4);
      if ( objectList )
      {
        v4 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].fields._items)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_43582756(
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
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v14[4] = (Il2CppClass *)v8;
            sub_1C2D434((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
          }
        }
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v6;
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
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v6; // w21
  Il2CppObject *Item; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v13; // x1
  Il2CppClass **v14; // x0

  if ( (byte_4C2364B & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopTopListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopTopListViewObject___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_ShopTopListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2364B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ShopTopListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ShopTopListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1C2D6EC(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ShopTopListViewObject___);
      if ( !v3 )
        goto LABEL_17;
      items = v3->fields._items;
      v11 = Method_System_Collections_Generic_List_ShopTopListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v3->fields._size;
      v13 = objectList;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)objectList,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v13;
        sub_1C2D434((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v13, v8, v9);
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v6;
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
  __int64 v4; // x1
  UIProgressBar_o *v6; // x0

  if ( (byte_4C2364D & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2364D = 1;
  }
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(scrollBar, 0, 0) )
    return -1.0;
  v6 = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !v6 )
    sub_1C2D6EC(0, v4);
  return UIProgressBar__get_value(v6, 0);
}