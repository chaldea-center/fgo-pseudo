void ShopHelpListViewManager___ctor(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  __int64 v7; // x20
  int32_t v8; // w1
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  __int64 v14; // x20
  int32_t v15; // w1
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct ShopHelpItemInfo_array *v20; // x20
  ShopHelpItemInfo_o *v21; // x21
  const MethodInfo *v22; // x3
  il2cpp_array_size_t *p_max_length; // x23
  ShopHelpItemInfo_o *v24; // x21
  const MethodInfo *v25; // x3
  ShopHelpItemInfo_o *v26; // x21
  const MethodInfo *v27; // x3
  ShopHelpItemInfo_o *v28; // x21
  const MethodInfo *v29; // x3
  ShopHelpItemInfo_o *v30; // x21
  const MethodInfo *v31; // x3
  ShopHelpItemInfo_o *v32; // x21
  const MethodInfo *v33; // x3
  ShopHelpItemInfo_o *v34; // x21
  const MethodInfo *v35; // x3
  ShopHelpItemInfo_o *v36; // x21
  const MethodInfo *v37; // x3
  ShopHelpItemInfo_o *v38; // x21
  const MethodInfo *v39; // x3
  ShopHelpItemInfo_o *v40; // x21
  const MethodInfo *v41; // x3
  ShopHelpItemInfo_o *v42; // x21
  const MethodInfo *v43; // x3
  ShopHelpItemInfo_o *v44; // x21
  const MethodInfo *v45; // x3
  ShopHelpItemInfo_o *v46; // x21
  const MethodInfo *v47; // x3
  ShopHelpItemInfo_o *v48; // x21
  const MethodInfo *v49; // x3
  ShopHelpItemInfo_o *v50; // x21
  const MethodInfo *v51; // x3
  ShopHelpItemInfo_o *v52; // x21
  const MethodInfo *v53; // x3
  ShopHelpItemInfo_o *v54; // x21
  const MethodInfo *v55; // x3
  ShopHelpItemInfo_o *v56; // x21
  const MethodInfo *v57; // x3
  ShopHelpItemInfo_o *v58; // x21
  const MethodInfo *v59; // x3
  ShopHelpItemInfo_o *v60; // x21
  const MethodInfo *v61; // x3
  ShopHelpItemInfo_o *v62; // x21
  const MethodInfo *v63; // x3
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  System_Array_o *v66; // x0
  System_RuntimeFieldHandle_o v67; // x1
  struct ShopHelpItemInfo_ItemKind_array *v68; // x20
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  __int64 v71; // x0

  if ( (byte_4C2358D & 1) == 0 )
  {
    sub_1C2D490(&ShopHelpItemInfo_ItemKind___TypeInfo);
    sub_1C2D490(&ShopHelpItemInfo___TypeInfo);
    sub_1C2D490(&ShopHelpItemInfo_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&Field__PrivateImplementationDetails__516CE5EF4CC7A81C9A872419689A9764E2EBEB4282A29E143CD06FEBDE26A4FC);
    sub_1C2D490(&StringLiteral_12114/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/);
    sub_1C2D490(&StringLiteral_12122/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/);
    sub_1C2D490(&StringLiteral_12110/*"SHOP_HELP_PURE_PRI_EXPLANATION"*/);
    sub_1C2D490(&StringLiteral_14612/*"Tutorial/tutorial_alpha"*/);
    sub_1C2D490(&StringLiteral_20545/*"img_shop_15"*/);
    sub_1C2D490(&StringLiteral_20555/*"img_shop_7"*/);
    sub_1C2D490(&StringLiteral_20541/*"img_shop_11"*/);
    sub_1C2D490(&StringLiteral_12121/*"SHOP_HELP_SVT_COSTUME_EXPLANATION"*/);
    sub_1C2D490(&StringLiteral_12106/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/);
    sub_1C2D490(&StringLiteral_12113/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/);
    sub_1C2D490(&StringLiteral_20551/*"img_shop_22"*/);
    sub_1C2D490(&StringLiteral_12117/*"SHOP_HELP_START_UP_SUMMON"*/);
    sub_1C2D490(&StringLiteral_24215/*"tutorial_0006"*/);
    sub_1C2D490(&StringLiteral_12103/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/);
    sub_1C2D490(&StringLiteral_12109/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/);
    sub_1C2D490(&StringLiteral_12105/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/);
    sub_1C2D490(&StringLiteral_12112/*"SHOP_HELP_REVIVAL_ITEM_EXPLANATION"*/);
    sub_1C2D490(&StringLiteral_20552/*"img_shop_23"*/);
    sub_1C2D490(&StringLiteral_20543/*"img_shop_13"*/);
    sub_1C2D490(&StringLiteral_12115/*"SHOP_HELP_SHOP18_EXPLANATION"*/);
    sub_1C2D490(&StringLiteral_20557/*"img_shop_9"*/);
    sub_1C2D490(&StringLiteral_12119/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/);
    sub_1C2D490(&StringLiteral_12120/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/);
    sub_1C2D490(&StringLiteral_20540/*"img_shop_10"*/);
    sub_1C2D490(&StringLiteral_12108/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/);
    sub_1C2D490(&StringLiteral_20546/*"img_shop_16"*/);
    sub_1C2D490(&StringLiteral_20547/*"img_shop_17"*/);
    sub_1C2D490(&StringLiteral_20549/*"img_shop_20"*/);
    sub_1C2D490(&StringLiteral_20556/*"img_shop_8"*/);
    sub_1C2D490(&StringLiteral_20554/*"img_shop_4"*/);
    sub_1C2D490(&StringLiteral_12104/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/);
    sub_1C2D490(&StringLiteral_20550/*"img_shop_21"*/);
    sub_1C2D490(&StringLiteral_20548/*"img_shop_18"*/);
    sub_1C2D490(&StringLiteral_12116/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/);
    sub_1C2D490(&StringLiteral_12107/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/);
    sub_1C2D490(&StringLiteral_20553/*"img_shop_3"*/);
    sub_1C2D490(&StringLiteral_20538/*"img_shop_0"*/);
    sub_1C2D490(&StringLiteral_14611/*"Tutorial/tutorial_0006"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_20544/*"img_shop_14"*/);
    sub_1C2D490(&StringLiteral_12118/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/);
    sub_1C2D490(&StringLiteral_20539/*"img_shop_1"*/);
    sub_1C2D490(&StringLiteral_24216/*"tutorial_alpha"*/);
    sub_1C2D490(&StringLiteral_12111/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/);
    sub_1C2D490(&StringLiteral_20542/*"img_shop_12"*/);
    byte_4C2358D = 1;
  }
  v3 = sub_1C2D538(string___TypeInfo, 2);
  if ( !v3 )
    goto LABEL_76;
  v7 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_74;
  v8 = StringLiteral_14611/*"Tutorial/tutorial_0006"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_14611/*"Tutorial/tutorial_0006"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), v8, v5, v6);
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_74;
  v10 = StringLiteral_14612/*"Tutorial/tutorial_alpha"*/;
  *(_QWORD *)(v7 + 40) = StringLiteral_14612/*"Tutorial/tutorial_alpha"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 40), v10, v5, v9);
  this->fields.helpBasePaths = (struct System_String_array *)v7;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.helpBasePaths, v7, v11, v12);
  v3 = sub_1C2D538(string___TypeInfo, 2);
  if ( !v3 )
    goto LABEL_76;
  v14 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_74;
  v15 = StringLiteral_24215/*"tutorial_0006"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_24215/*"tutorial_0006"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), v15, v5, v13);
  if ( *(_DWORD *)(v14 + 24) <= 1u )
    goto LABEL_74;
  v17 = StringLiteral_24216/*"tutorial_alpha"*/;
  *(_QWORD *)(v14 + 40) = StringLiteral_24216/*"tutorial_alpha"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v14 + 40), v17, v5, v16);
  this->fields.helpBaseNames = (struct System_String_array *)v14;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.helpBaseNames, v14, v18, v19);
  v20 = (struct ShopHelpItemInfo_array *)sub_1C2D538(ShopHelpItemInfo___TypeInfo, 21);
  v21 = (ShopHelpItemInfo_o *)sub_1C2D6DC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v21, 1, (System_String_o *)StringLiteral_12106/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20556/*"img_shop_8"*/, 2, 0);
  if ( !v20 )
LABEL_76:
    sub_1C2D6EC(v3, v4);
  if ( v21 )
  {
    v3 = sub_1C2D5CC(v21, v20->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  p_max_length = &v20->max_length;
  if ( !LODWORD(v20->max_length) )
    goto LABEL_74;
  v20->m_Items[0] = v21;
  sub_1C2D434((CGThumbnailListItem_o *)v20->m_Items, (int32_t)v21, v5, v22);
  v24 = (ShopHelpItemInfo_o *)sub_1C2D6DC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v24, 16, (System_String_o *)StringLiteral_12117/*"SHOP_HELP_START_UP_SUMMON"*/, (System_String_o *)StringLiteral_20547/*"img_shop_17"*/, 2, 0);
  if ( v24 )
  {
    v3 = sub_1C2D5CC(v24, v20->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 1u )
    goto LABEL_74;
  v20->m_Items[1] = v24;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[1], (int32_t)v24, v5, v25);
  v26 = (ShopHelpItemInfo_o *)sub_1C2D6DC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v26, 2, (System_String_o *)StringLiteral_12113/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/, (System_String_o *)StringLiteral_20554/*"img_shop_4"*/, 2, 0);
  if ( v26 )
  {
    v3 = sub_1C2D5CC(v26, v20->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 2u )
    goto LABEL_74;
  v20->m_Items[2] = v26;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[2], (int32_t)v26, v5, v27);
  v28 = (ShopHelpItemInfo_o *)sub_1C2D6DC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v28, 3, (System_String_o *)StringLiteral_12109/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20553/*"img_shop_3"*/, 1, 0);
  if ( v28 )
  {
    v3 = sub_1C2D5CC(v28, v20->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 3u )
    goto LABEL_74;
  v20->m_Items[3] = v28;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[3], (int32_t)v28, v5, v29);
  v30 = (ShopHelpItemInfo_o *)sub_1C2D6DC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v30, 4, (System_String_o *)StringLiteral_12111/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20541/*"img_shop_11"*/, 2, 0);
  if ( v30 )
  {
    v3 = sub_1C2D5CC(v30, v20->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 4u )
    goto LABEL_74;
  v20->m_Items[4] = v30;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[4], (int32_t)v30, v5, v31);
  v32 = (ShopHelpItemInfo_o *)sub_1C2D6DC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v32, 5, (System_String_o *)StringLiteral_12118/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20557/*"img_shop_9"*/, 1, 0);
  if ( v32 )
  {
    v3 = sub_1C2D5CC(v32, v20->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 5u )
    goto LABEL_74;
  v20->m_Items[5] = v32;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[5], (int32_t)v32, v5, v33);
  v34 = (ShopHelpItemInfo_o *)sub_1C2D6DC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v34, 6, (System_String_o *)StringLiteral_12119/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/, (System_String_o *)StringLiteral_20539/*"img_shop_1"*/, 1, 0);
  if ( v34 )
  {
    v3 = sub_1C2D5CC(v34, v20->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 6u )
    goto LABEL_74;
  v20->m_Items[6] = v34;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[6], (int32_t)v34, v5, v35);
  v36 = (ShopHelpItemInfo_o *)sub_1C2D6DC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v36, 7, (System_String_o *)StringLiteral_12114/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/, (System_String_o *)StringLiteral_20542/*"img_shop_12"*/, 1, 0);
  if ( v36 )
  {
    v3 = sub_1C2D5CC(v36, v20->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 7u )
    goto LABEL_74;
  v20->m_Items[7] = v36;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[7], (int32_t)v36, v5, v37);
  v38 = (ShopHelpItemInfo_o *)sub_1C2D6DC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v38, 8, (System_String_o *)StringLiteral_12105/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/, (System_String_o *)StringLiteral_20543/*"img_shop_13"*/, 1, 0);
  if ( v38 )
  {
    v3 = sub_1C2D5CC(v38, v20->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 8u )
    goto LABEL_74;
  v20->m_Items[8] = v38;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[8], (int32_t)v38, v5, v39);
  v40 = (ShopHelpItemInfo_o *)sub_1C2D6DC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v40, 11, (System_String_o *)StringLiteral_12103/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20540/*"img_shop_10"*/, 1, 0);
  if ( v40 )
  {
    v3 = sub_1C2D5CC(v40, v20->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 9u )
    goto LABEL_74;
  v20->m_Items[9] = v40;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[9], (int32_t)v40, v5, v41);
  v42 = (ShopHelpItemInfo_o *)sub_1C2D6DC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v42, 13, (System_String_o *)StringLiteral_12116/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20544/*"img_shop_14"*/, 2, 0);
  if ( v42 )
  {
    v3 = sub_1C2D5CC(v42, v20->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0xAu )
    goto LABEL_74;
  v20->m_Items[10] = v42;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[10], (int32_t)v42, v5, v43);
  v44 = (ShopHelpItemInfo_o *)sub_1C2D6DC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v44, 12, (System_String_o *)StringLiteral_12120/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20555/*"img_shop_7"*/, 1, 0);
  if ( v44 )
  {
    v3 = sub_1C2D5CC(v44, v20->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0xBu )
    goto LABEL_74;
  v20->m_Items[11] = v44;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[11], (int32_t)v44, v5, v45);
  v46 = (ShopHelpItemInfo_o *)sub_1C2D6DC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v46, 14, (System_String_o *)StringLiteral_12108/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20545/*"img_shop_15"*/, 1, 0);
  if ( v46 )
  {
    v3 = sub_1C2D5CC(v46, v20->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0xCu )
    goto LABEL_74;
  v20->m_Items[12] = v46;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[12], (int32_t)v46, v5, v47);
  v48 = (ShopHelpItemInfo_o *)sub_1C2D6DC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v48, 15, (System_String_o *)StringLiteral_12121/*"SHOP_HELP_SVT_COSTUME_EXPLANATION"*/, (System_String_o *)StringLiteral_20546/*"img_shop_16"*/, 2, 0);
  if ( v48 )
  {
    v3 = sub_1C2D5CC(v48, v20->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0xDu )
    goto LABEL_74;
  v20->m_Items[13] = v48;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[13], (int32_t)v48, v5, v49);
  v50 = (ShopHelpItemInfo_o *)sub_1C2D6DC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v50, 17, (System_String_o *)StringLiteral_12104/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/, (System_String_o *)StringLiteral_20547/*"img_shop_17"*/, 2, 0);
  if ( v50 )
  {
    v3 = sub_1C2D5CC(v50, v20->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0xEu )
    goto LABEL_74;
  v20->m_Items[14] = v50;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[14], (int32_t)v50, v5, v51);
  v52 = (ShopHelpItemInfo_o *)sub_1C2D6DC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v52, 18, (System_String_o *)StringLiteral_12110/*"SHOP_HELP_PURE_PRI_EXPLANATION"*/, (System_String_o *)StringLiteral_20548/*"img_shop_18"*/, 1, 0);
  if ( v52 )
  {
    v3 = sub_1C2D5CC(v52, v20->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0xFu )
    goto LABEL_74;
  v20->m_Items[15] = v52;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[15], (int32_t)v52, v5, v53);
  v54 = (ShopHelpItemInfo_o *)sub_1C2D6DC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v54, 19, (System_String_o *)StringLiteral_12122/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/, (System_String_o *)StringLiteral_20549/*"img_shop_20"*/, 2, 0);
  if ( v54 )
  {
    v3 = sub_1C2D5CC(v54, v20->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0x10u )
    goto LABEL_74;
  v20->m_Items[16] = v54;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[16], (int32_t)v54, v5, v55);
  v56 = (ShopHelpItemInfo_o *)sub_1C2D6DC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v56, 20, (System_String_o *)StringLiteral_12112/*"SHOP_HELP_REVIVAL_ITEM_EXPLANATION"*/, (System_String_o *)StringLiteral_20550/*"img_shop_21"*/, 2, 0);
  if ( v56 )
  {
    v3 = sub_1C2D5CC(v56, v20->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0x11u )
    goto LABEL_74;
  v20->m_Items[17] = v56;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[17], (int32_t)v56, v5, v57);
  v58 = (ShopHelpItemInfo_o *)sub_1C2D6DC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v58, 21, (System_String_o *)StringLiteral_12107/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/, (System_String_o *)StringLiteral_20551/*"img_shop_22"*/, 2, 0);
  if ( v58 )
  {
    v3 = sub_1C2D5CC(v58, v20->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0x12u )
    goto LABEL_74;
  v20->m_Items[18] = v58;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[18], (int32_t)v58, v5, v59);
  v60 = (ShopHelpItemInfo_o *)sub_1C2D6DC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v60, 22, (System_String_o *)StringLiteral_12115/*"SHOP_HELP_SHOP18_EXPLANATION"*/, (System_String_o *)StringLiteral_20552/*"img_shop_23"*/, 3, 0);
  if ( v60 )
  {
    v3 = sub_1C2D5CC(v60, v20->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0x13u )
    goto LABEL_74;
  v20->m_Items[19] = v60;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[19], (int32_t)v60, v5, v61);
  v62 = (ShopHelpItemInfo_o *)sub_1C2D6DC(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v62, 23, (System_String_o *)StringLiteral_1/*""*/, (System_String_o *)StringLiteral_20538/*"img_shop_0"*/, 1, 0);
  if ( v62 )
  {
    v3 = sub_1C2D5CC(v62, v20->obj.klass->_1.element_class);
    if ( !v3 )
    {
LABEL_75:
      v71 = sub_1C2D710();
      sub_1C2D5B8(v71, 0);
    }
  }
  if ( *(_DWORD *)p_max_length <= 0x14u )
LABEL_74:
    sub_1C2D6F4(v3, v4, v5);
  v20->m_Items[20] = v62;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[20], (int32_t)v62, v5, v63);
  this->fields.itemInfoList = v20;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.itemInfoList, (int32_t)v20, v64, v65);
  v66 = (System_Array_o *)sub_1C2D538(ShopHelpItemInfo_ItemKind___TypeInfo, 19);
  v67.fields.value = Field__PrivateImplementationDetails__516CE5EF4CC7A81C9A872419689A9764E2EBEB4282A29E143CD06FEBDE26A4FC;
  v68 = (struct ShopHelpItemInfo_ItemKind_array *)v66;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64158640(v66, v67, 0);
  this->fields.kinds = v68;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.kinds, (int32_t)v68, v69, v70);
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ShopHelpListViewManager__CallOnFadeOut(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Action_o *onFadeOut; // x19
  CGThumbnailListItem_o *p_onFadeOut; // x0

  onFadeOut = this->fields.onFadeOut;
  if ( onFadeOut )
  {
    p_onFadeOut = (CGThumbnailListItem_o *)&this->fields.onFadeOut;
    p_onFadeOut->klass = 0;
    sub_1C2D434(p_onFadeOut, 0, v2, v3);
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
  const MethodInfo *v3; // x3
  ShopHelpMenu_o *baseDialog; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4C2358B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ShopHelpListViewManager_CallOnFadeOut__);
    byte_4C2358B = 1;
  }
  this->fields.onFadeOut = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onFadeOut, (int32_t)callback, (int32_t)method, v3);
  baseDialog = this->fields.baseDialog;
  v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopHelpListViewManager_CallOnFadeOut__, 0);
  if ( !baseDialog )
    sub_1C2D6EC(v8, v9);
  ShopHelpMenu__Close(baseDialog, v7, 0);
}


void ShopHelpListViewManager__CreateList(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  ShopHelpMenu_o *baseDialog; // x0
  struct ShopHelpItemInfo_ItemKind_array *kinds; // x8
  __int64 v8; // x2
  struct ShopHelpItemInfo_ItemKind_array *v9; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v11; // x25
  int32_t v12; // w21
  ShopRootConstants_c *v13; // x0
  BalanceConfig_c *v14; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  struct ShopHelpItemInfo_array *itemInfoList; // x9
  __int64 v17; // x8
  ShopHelpItemInfo_o **m_Items; // x9
  ShopHelpItemInfo_o *v19; // x22
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t size; // w19
  ShopHelpListViewItem_o *v22; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  ShopHelpListViewManager_o *v29; // [xsp+8h] [xbp-68h]

  if ( (byte_4C2358A & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CoinRoomUtility_TypeInfo);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&ShopHelpListViewItem_TypeInfo);
    sub_1C2D490(&ShopRootConstants_TypeInfo);
    byte_4C2358A = 1;
  }
  this->fields.onFadeOut = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onFadeOut, 0, v2, v3);
  baseDialog = this->fields.baseDialog;
  if ( !baseDialog )
    goto LABEL_45;
  ShopHelpMenu__Open(baseDialog, 0);
  kinds = this->fields.kinds;
  if ( !kinds )
    goto LABEL_45;
  ListViewManager__CreateList((ListViewManager_o *)this, kinds->max_length, 0);
  v9 = this->fields.kinds;
  if ( !v9 )
    goto LABEL_45;
  max_length = v9->max_length;
  if ( (int)max_length >= 1 )
  {
    v11 = 0;
    v29 = this;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1C2D6F4(baseDialog, v5, v8);
      v12 = v9->m_Items[v11];
      switch ( v12 )
      {
        case 15:
          v13 = ShopRootConstants_TypeInfo;
          if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          baseDialog = (ShopHelpMenu_o *)ShopRootConstants__IsSvtCostumeShopOpen((const MethodInfo *)v13);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_42;
          goto LABEL_29;
        case 16:
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          baseDialog = (ShopHelpMenu_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ShopMaster___);
          if ( !baseDialog )
            goto LABEL_45;
          baseDialog = (ShopHelpMenu_o *)ShopMaster__IsEnableEventShop_42635572((ShopMaster_o *)baseDialog, 0);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_42;
LABEL_29:
          itemInfoList = this->fields.itemInfoList;
          if ( !itemInfoList )
            goto LABEL_45;
          if ( (int)itemInfoList->max_length < 1 )
            goto LABEL_42;
          v17 = (unsigned int)itemInfoList->max_length;
          m_Items = itemInfoList->m_Items;
          break;
        case 17:
          if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
          baseDialog = (ShopHelpMenu_o *)CoinRoomUtility__IsTargetQuestClear(0);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_42;
          goto LABEL_29;
        case 22:
          baseDialog = (ShopHelpMenu_o *)ConstantMaster__IsFLAG20250516(0);
          if ( ((unsigned __int8)baseDialog & 1) != 0 )
          {
            v14 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v14 = BalanceConfig_TypeInfo;
            }
            ClassBoardReleaseQuestId = v14->static_fields->ClassBoardReleaseQuestId;
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            baseDialog = (ShopHelpMenu_o *)CondType__IsQuestClear_40102980(ClassBoardReleaseQuestId, -1, 0, 0);
            if ( ((unsigned __int8)baseDialog & 1) != 0 )
              goto LABEL_29;
          }
          goto LABEL_42;
        default:
          goto LABEL_29;
      }
      while ( 1 )
      {
        v19 = *m_Items;
        if ( *m_Items )
        {
          if ( v19->fields._Kind_k__BackingField == v12 )
            break;
        }
        --v17;
        ++m_Items;
        if ( !v17 )
          goto LABEL_42;
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      v22 = (ShopHelpListViewItem_o *)sub_1C2D6DC(ShopHelpListViewItem_TypeInfo);
      ShopHelpListViewItem___ctor(v22, size, v19, 0);
      items = itemList->fields._items;
      v26 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v27 = itemList->fields._size;
      if ( (unsigned int)v27 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v22,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + v27;
        itemList->fields._size = v27 + 1;
        v28[4] = (Il2CppClass *)v22;
        sub_1C2D434((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v22, v23, v24);
      }
      this = v29;
LABEL_42:
      LODWORD(max_length) = v9->max_length;
      if ( (__int64)++v11 >= (int)max_length )
        goto LABEL_43;
    }
LABEL_45:
    sub_1C2D6EC(baseDialog, v5);
  }
LABEL_43:
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

  if ( (byte_4C23588 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_Texture2D____77994112);
    sub_1C2D490(&AssetManager_TypeInfo);
    byte_4C23588 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0);
  if ( !AssetStorage )
    sub_1C2D6EC(0, v7);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51051712(
                                      AssetStorage,
                                      name,
                                      (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112);
}


void ShopHelpListViewManager__LoadBaseSprite(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  System_String_array *helpBasePaths; // x20
  System_Action_o *v4; // x21

  if ( (byte_4C23586 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__);
    byte_4C23586 = 1;
  }
  if ( !this->fields.initMode )
  {
    this->fields.initMode = 1;
    helpBasePaths = this->fields.helpBasePaths;
    v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_40319912(helpBasePaths, v4, 1, 0);
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

  if ( (byte_4C23589 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1C2D490(&AssetManager_TypeInfo);
    byte_4C23589 = 1;
  }
  if ( !paths )
    sub_1C2D6EC(this, paths);
  max_length = paths->max_length;
  if ( (int)max_length >= 1 )
  {
    v5 = 0;
    do
    {
      if ( v5 >= (unsigned int)max_length )
        sub_1C2D6F4(this, paths, method);
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
  if ( (byte_4C23587 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_4C23587 = 1;
  }
  if ( v3->fields.initMode == 2 )
  {
    ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
    BaseWindow = v3->fields.BaseWindow;
    if ( !BaseWindow
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0)) == 0
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)BaseWindow,
                                                     (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0 )
    {
      sub_1C2D6EC(BaseWindow, v4);
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

  if ( (byte_4C2358C & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1C2D490(&ShopHelpListViewObject_TypeInfo);
    byte_4C2358C = 1;
  }
  if ( !obj
    || (naturalAligment = ShopHelpListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ShopHelpListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ShopHelpListViewObject_TypeInfo )
  {
    sub_1C2D6EC(this, obj);
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
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  struct System_String_array *helpBasePaths; // x8
  struct System_String_array *helpBaseNames; // x9
  const MethodInfo *v12; // x3
  struct System_String_array *v13; // x8
  struct System_String_array *v14; // x9
  UnityEngine_Texture_o *AssetStorageTexture2D; // x0

  v3 = this;
  if ( (byte_4C2358E & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C2D490(&UnityEngine_Material_TypeInfo);
    sub_1C2D490(&StringLiteral_4932/*"Custom/SpriteWithMask"*/);
    this = (ShopHelpListViewManager_o *)sub_1C2D490(&StringLiteral_16265/*"_MaskTex"*/);
    byte_4C2358E = 1;
  }
  if ( v3->fields.initMode == 1 )
  {
    v4 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4932/*"Custom/SpriteWithMask"*/, 0);
    v5 = (UnityEngine_Material_o *)sub_1C2D6DC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v5, v4, 0);
    BaseWindow = v3->fields.BaseWindow;
    if ( BaseWindow )
    {
      BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0);
      if ( BaseWindow )
      {
        BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)BaseWindow,
                                                   (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UITexture___);
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
                                                         v9);
              if ( v5 )
              {
                UnityEngine_Material__set_mainTexture(v5, (UnityEngine_Texture_o *)BaseWindow, 0);
                v13 = v3->fields.helpBasePaths;
                if ( v13 )
                {
                  if ( LODWORD(v13->max_length) <= 1 )
                    goto LABEL_19;
                  v14 = v3->fields.helpBaseNames;
                  if ( v14 )
                  {
                    if ( LODWORD(v14->max_length) > 1 )
                    {
                      AssetStorageTexture2D = (UnityEngine_Texture_o *)ShopHelpListViewManager__GetAssetStorageTexture2D(
                                                                         (ShopHelpListViewManager_o *)BaseWindow,
                                                                         v13->m_Items[1],
                                                                         v14->m_Items[1],
                                                                         v12);
                      UnityEngine_Material__SetTexture(
                        v5,
                        (System_String_o *)StringLiteral_16265/*"_MaskTex"*/,
                        AssetStorageTexture2D,
                        0);
                      v3->fields.initMode = 2;
                      return;
                    }
LABEL_19:
                    sub_1C2D6F4(BaseWindow, v6, v8);
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_1C2D6EC(BaseWindow, v6);
  }
  ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
}