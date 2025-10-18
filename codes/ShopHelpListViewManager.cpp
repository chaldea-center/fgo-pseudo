void ShopHelpListViewManager___ctor(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 v6; // x20
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x20
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct ShopHelpItemInfo_array *v22; // x20
  ShopHelpItemInfo_o *v23; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  il2cpp_array_size_t *p_max_length; // x23
  ShopHelpItemInfo_o *v27; // x21
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  ShopHelpItemInfo_o *v30; // x21
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  ShopHelpItemInfo_o *v33; // x21
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  ShopHelpItemInfo_o *v36; // x21
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  ShopHelpItemInfo_o *v39; // x21
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  ShopHelpItemInfo_o *v42; // x21
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  ShopHelpItemInfo_o *v45; // x21
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  ShopHelpItemInfo_o *v48; // x21
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  ShopHelpItemInfo_o *v51; // x21
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  ShopHelpItemInfo_o *v54; // x21
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  ShopHelpItemInfo_o *v57; // x21
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  ShopHelpItemInfo_o *v60; // x21
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  ShopHelpItemInfo_o *v63; // x21
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  ShopHelpItemInfo_o *v66; // x21
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  ShopHelpItemInfo_o *v69; // x21
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  ShopHelpItemInfo_o *v72; // x21
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  ShopHelpItemInfo_o *v75; // x21
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  ShopHelpItemInfo_o *v78; // x21
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  ShopHelpItemInfo_o *v81; // x21
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  ShopHelpItemInfo_o *v84; // x21
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  System_Array_o *v89; // x0
  System_RuntimeFieldHandle_o v90; // x1
  struct ShopHelpItemInfo_ItemKind_array *v91; // x20
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  __int64 v94; // x0

  if ( (byte_4C3F247 & 1) == 0 )
  {
    sub_1C37058(&ShopHelpItemInfo_ItemKind___TypeInfo);
    sub_1C37058(&ShopHelpItemInfo___TypeInfo);
    sub_1C37058(&ShopHelpItemInfo_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&Field__PrivateImplementationDetails__516CE5EF4CC7A81C9A872419689A9764E2EBEB4282A29E143CD06FEBDE26A4FC);
    sub_1C37058(&StringLiteral_12120/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/);
    sub_1C37058(&StringLiteral_12127/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/);
    sub_1C37058(&StringLiteral_12116/*"SHOP_HELP_PURE_PRI_EXPLANATION"*/);
    sub_1C37058(&StringLiteral_14616/*"Tutorial/tutorial_alpha"*/);
    sub_1C37058(&StringLiteral_20560/*"img_shop_15"*/);
    sub_1C37058(&StringLiteral_20570/*"img_shop_7"*/);
    sub_1C37058(&StringLiteral_20556/*"img_shop_11"*/);
    sub_1C37058(&StringLiteral_12126/*"SHOP_HELP_SVT_COSTUME_EXPLANATION"*/);
    sub_1C37058(&StringLiteral_12112/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/);
    sub_1C37058(&StringLiteral_12119/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/);
    sub_1C37058(&StringLiteral_20566/*"img_shop_22"*/);
    sub_1C37058(&StringLiteral_12122/*"SHOP_HELP_START_UP_SUMMON"*/);
    sub_1C37058(&StringLiteral_24237/*"tutorial_0006"*/);
    sub_1C37058(&StringLiteral_12108/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/);
    sub_1C37058(&StringLiteral_12115/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/);
    sub_1C37058(&StringLiteral_12111/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/);
    sub_1C37058(&StringLiteral_12118/*"SHOP_HELP_REVIVAL_ITEM_EXPLANATION"*/);
    sub_1C37058(&StringLiteral_20567/*"img_shop_23"*/);
    sub_1C37058(&StringLiteral_20558/*"img_shop_13"*/);
    sub_1C37058(&StringLiteral_20572/*"img_shop_9"*/);
    sub_1C37058(&StringLiteral_12124/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/);
    sub_1C37058(&StringLiteral_12125/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/);
    sub_1C37058(&StringLiteral_20555/*"img_shop_10"*/);
    sub_1C37058(&StringLiteral_12114/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/);
    sub_1C37058(&StringLiteral_20561/*"img_shop_16"*/);
    sub_1C37058(&StringLiteral_20562/*"img_shop_17"*/);
    sub_1C37058(&StringLiteral_20564/*"img_shop_20"*/);
    sub_1C37058(&StringLiteral_20571/*"img_shop_8"*/);
    sub_1C37058(&StringLiteral_20569/*"img_shop_4"*/);
    sub_1C37058(&StringLiteral_12110/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/);
    sub_1C37058(&StringLiteral_20565/*"img_shop_21"*/);
    sub_1C37058(&StringLiteral_20563/*"img_shop_18"*/);
    sub_1C37058(&StringLiteral_12121/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/);
    sub_1C37058(&StringLiteral_12113/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/);
    sub_1C37058(&StringLiteral_20568/*"img_shop_3"*/);
    sub_1C37058(&StringLiteral_20553/*"img_shop_0"*/);
    sub_1C37058(&StringLiteral_14615/*"Tutorial/tutorial_0006"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_20559/*"img_shop_14"*/);
    sub_1C37058(&StringLiteral_12123/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/);
    sub_1C37058(&StringLiteral_20554/*"img_shop_1"*/);
    sub_1C37058(&StringLiteral_24238/*"tutorial_alpha"*/);
    sub_1C37058(&StringLiteral_12117/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/);
    sub_1C37058(&StringLiteral_20557/*"img_shop_12"*/);
    sub_1C37058(&StringLiteral_12109/*"SHOP_HELP_CLASS_BOARD_RESET_EXPLANATION"*/);
    byte_4C3F247 = 1;
  }
  v3 = sub_1C37100(string___TypeInfo, 2);
  if ( !v3 )
    goto LABEL_76;
  v6 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_74;
  v7 = StringLiteral_14615/*"Tutorial/tutorial_0006"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_14615/*"Tutorial/tutorial_0006"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), v7, v4, v5);
  if ( *(_DWORD *)(v6 + 24) <= 1u )
    goto LABEL_74;
  v10 = StringLiteral_14616/*"Tutorial/tutorial_alpha"*/;
  *(_QWORD *)(v6 + 40) = StringLiteral_14616/*"Tutorial/tutorial_alpha"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 40), v10, v8, v9);
  this->fields.helpBasePaths = (struct System_String_array *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.helpBasePaths, v6, v11, v12);
  v3 = sub_1C37100(string___TypeInfo, 2);
  if ( !v3 )
    goto LABEL_76;
  v15 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_74;
  v16 = StringLiteral_24237/*"tutorial_0006"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_24237/*"tutorial_0006"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), v16, v13, v14);
  if ( *(_DWORD *)(v15 + 24) <= 1u )
    goto LABEL_74;
  v19 = StringLiteral_24238/*"tutorial_alpha"*/;
  *(_QWORD *)(v15 + 40) = StringLiteral_24238/*"tutorial_alpha"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 40), v19, v17, v18);
  this->fields.helpBaseNames = (struct System_String_array *)v15;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.helpBaseNames, v15, v20, v21);
  v22 = (struct ShopHelpItemInfo_array *)sub_1C37100(ShopHelpItemInfo___TypeInfo, 21);
  v23 = (ShopHelpItemInfo_o *)sub_1C372A4(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v23, 1, (System_String_o *)StringLiteral_12112/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20571/*"img_shop_8"*/, 2, 0);
  if ( !v22 )
LABEL_76:
    sub_1C372B4(v3);
  if ( v23 )
  {
    v3 = sub_1C37194(v23, v22->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  p_max_length = &v22->max_length;
  if ( !LODWORD(v22->max_length) )
    goto LABEL_74;
  v22->m_Items[0] = v23;
  sub_1C36FFC((CGThumbnailListItem_o *)v22->m_Items, (int32_t)v23, v24, v25);
  v27 = (ShopHelpItemInfo_o *)sub_1C372A4(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v27, 16, (System_String_o *)StringLiteral_12122/*"SHOP_HELP_START_UP_SUMMON"*/, (System_String_o *)StringLiteral_20562/*"img_shop_17"*/, 2, 0);
  if ( v27 )
  {
    v3 = sub_1C37194(v27, v22->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 1u )
    goto LABEL_74;
  v22->m_Items[1] = v27;
  sub_1C36FFC((CGThumbnailListItem_o *)&v22->m_Items[1], (int32_t)v27, v28, v29);
  v30 = (ShopHelpItemInfo_o *)sub_1C372A4(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v30, 2, (System_String_o *)StringLiteral_12119/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/, (System_String_o *)StringLiteral_20569/*"img_shop_4"*/, 2, 0);
  if ( v30 )
  {
    v3 = sub_1C37194(v30, v22->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 2u )
    goto LABEL_74;
  v22->m_Items[2] = v30;
  sub_1C36FFC((CGThumbnailListItem_o *)&v22->m_Items[2], (int32_t)v30, v31, v32);
  v33 = (ShopHelpItemInfo_o *)sub_1C372A4(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v33, 3, (System_String_o *)StringLiteral_12115/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20568/*"img_shop_3"*/, 1, 0);
  if ( v33 )
  {
    v3 = sub_1C37194(v33, v22->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 3u )
    goto LABEL_74;
  v22->m_Items[3] = v33;
  sub_1C36FFC((CGThumbnailListItem_o *)&v22->m_Items[3], (int32_t)v33, v34, v35);
  v36 = (ShopHelpItemInfo_o *)sub_1C372A4(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v36, 4, (System_String_o *)StringLiteral_12117/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20556/*"img_shop_11"*/, 2, 0);
  if ( v36 )
  {
    v3 = sub_1C37194(v36, v22->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 4u )
    goto LABEL_74;
  v22->m_Items[4] = v36;
  sub_1C36FFC((CGThumbnailListItem_o *)&v22->m_Items[4], (int32_t)v36, v37, v38);
  v39 = (ShopHelpItemInfo_o *)sub_1C372A4(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v39, 5, (System_String_o *)StringLiteral_12123/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20572/*"img_shop_9"*/, 1, 0);
  if ( v39 )
  {
    v3 = sub_1C37194(v39, v22->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 5u )
    goto LABEL_74;
  v22->m_Items[5] = v39;
  sub_1C36FFC((CGThumbnailListItem_o *)&v22->m_Items[5], (int32_t)v39, v40, v41);
  v42 = (ShopHelpItemInfo_o *)sub_1C372A4(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v42, 6, (System_String_o *)StringLiteral_12124/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/, (System_String_o *)StringLiteral_20554/*"img_shop_1"*/, 1, 0);
  if ( v42 )
  {
    v3 = sub_1C37194(v42, v22->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 6u )
    goto LABEL_74;
  v22->m_Items[6] = v42;
  sub_1C36FFC((CGThumbnailListItem_o *)&v22->m_Items[6], (int32_t)v42, v43, v44);
  v45 = (ShopHelpItemInfo_o *)sub_1C372A4(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v45, 7, (System_String_o *)StringLiteral_12120/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/, (System_String_o *)StringLiteral_20557/*"img_shop_12"*/, 1, 0);
  if ( v45 )
  {
    v3 = sub_1C37194(v45, v22->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 7u )
    goto LABEL_74;
  v22->m_Items[7] = v45;
  sub_1C36FFC((CGThumbnailListItem_o *)&v22->m_Items[7], (int32_t)v45, v46, v47);
  v48 = (ShopHelpItemInfo_o *)sub_1C372A4(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v48, 8, (System_String_o *)StringLiteral_12111/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/, (System_String_o *)StringLiteral_20558/*"img_shop_13"*/, 1, 0);
  if ( v48 )
  {
    v3 = sub_1C37194(v48, v22->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 8u )
    goto LABEL_74;
  v22->m_Items[8] = v48;
  sub_1C36FFC((CGThumbnailListItem_o *)&v22->m_Items[8], (int32_t)v48, v49, v50);
  v51 = (ShopHelpItemInfo_o *)sub_1C372A4(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v51, 11, (System_String_o *)StringLiteral_12108/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20555/*"img_shop_10"*/, 1, 0);
  if ( v51 )
  {
    v3 = sub_1C37194(v51, v22->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 9u )
    goto LABEL_74;
  v22->m_Items[9] = v51;
  sub_1C36FFC((CGThumbnailListItem_o *)&v22->m_Items[9], (int32_t)v51, v52, v53);
  v54 = (ShopHelpItemInfo_o *)sub_1C372A4(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v54, 13, (System_String_o *)StringLiteral_12121/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20559/*"img_shop_14"*/, 2, 0);
  if ( v54 )
  {
    v3 = sub_1C37194(v54, v22->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0xAu )
    goto LABEL_74;
  v22->m_Items[10] = v54;
  sub_1C36FFC((CGThumbnailListItem_o *)&v22->m_Items[10], (int32_t)v54, v55, v56);
  v57 = (ShopHelpItemInfo_o *)sub_1C372A4(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v57, 12, (System_String_o *)StringLiteral_12125/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20570/*"img_shop_7"*/, 1, 0);
  if ( v57 )
  {
    v3 = sub_1C37194(v57, v22->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0xBu )
    goto LABEL_74;
  v22->m_Items[11] = v57;
  sub_1C36FFC((CGThumbnailListItem_o *)&v22->m_Items[11], (int32_t)v57, v58, v59);
  v60 = (ShopHelpItemInfo_o *)sub_1C372A4(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v60, 14, (System_String_o *)StringLiteral_12114/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20560/*"img_shop_15"*/, 1, 0);
  if ( v60 )
  {
    v3 = sub_1C37194(v60, v22->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0xCu )
    goto LABEL_74;
  v22->m_Items[12] = v60;
  sub_1C36FFC((CGThumbnailListItem_o *)&v22->m_Items[12], (int32_t)v60, v61, v62);
  v63 = (ShopHelpItemInfo_o *)sub_1C372A4(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v63, 15, (System_String_o *)StringLiteral_12126/*"SHOP_HELP_SVT_COSTUME_EXPLANATION"*/, (System_String_o *)StringLiteral_20561/*"img_shop_16"*/, 2, 0);
  if ( v63 )
  {
    v3 = sub_1C37194(v63, v22->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0xDu )
    goto LABEL_74;
  v22->m_Items[13] = v63;
  sub_1C36FFC((CGThumbnailListItem_o *)&v22->m_Items[13], (int32_t)v63, v64, v65);
  v66 = (ShopHelpItemInfo_o *)sub_1C372A4(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v66, 17, (System_String_o *)StringLiteral_12110/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/, (System_String_o *)StringLiteral_20562/*"img_shop_17"*/, 2, 0);
  if ( v66 )
  {
    v3 = sub_1C37194(v66, v22->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0xEu )
    goto LABEL_74;
  v22->m_Items[14] = v66;
  sub_1C36FFC((CGThumbnailListItem_o *)&v22->m_Items[14], (int32_t)v66, v67, v68);
  v69 = (ShopHelpItemInfo_o *)sub_1C372A4(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v69, 18, (System_String_o *)StringLiteral_12116/*"SHOP_HELP_PURE_PRI_EXPLANATION"*/, (System_String_o *)StringLiteral_20563/*"img_shop_18"*/, 1, 0);
  if ( v69 )
  {
    v3 = sub_1C37194(v69, v22->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0xFu )
    goto LABEL_74;
  v22->m_Items[15] = v69;
  sub_1C36FFC((CGThumbnailListItem_o *)&v22->m_Items[15], (int32_t)v69, v70, v71);
  v72 = (ShopHelpItemInfo_o *)sub_1C372A4(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v72, 19, (System_String_o *)StringLiteral_12127/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/, (System_String_o *)StringLiteral_20564/*"img_shop_20"*/, 2, 0);
  if ( v72 )
  {
    v3 = sub_1C37194(v72, v22->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0x10u )
    goto LABEL_74;
  v22->m_Items[16] = v72;
  sub_1C36FFC((CGThumbnailListItem_o *)&v22->m_Items[16], (int32_t)v72, v73, v74);
  v75 = (ShopHelpItemInfo_o *)sub_1C372A4(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v75, 20, (System_String_o *)StringLiteral_12118/*"SHOP_HELP_REVIVAL_ITEM_EXPLANATION"*/, (System_String_o *)StringLiteral_20565/*"img_shop_21"*/, 2, 0);
  if ( v75 )
  {
    v3 = sub_1C37194(v75, v22->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0x11u )
    goto LABEL_74;
  v22->m_Items[17] = v75;
  sub_1C36FFC((CGThumbnailListItem_o *)&v22->m_Items[17], (int32_t)v75, v76, v77);
  v78 = (ShopHelpItemInfo_o *)sub_1C372A4(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v78, 21, (System_String_o *)StringLiteral_12113/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/, (System_String_o *)StringLiteral_20566/*"img_shop_22"*/, 2, 0);
  if ( v78 )
  {
    v3 = sub_1C37194(v78, v22->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0x12u )
    goto LABEL_74;
  v22->m_Items[18] = v78;
  sub_1C36FFC((CGThumbnailListItem_o *)&v22->m_Items[18], (int32_t)v78, v79, v80);
  v81 = (ShopHelpItemInfo_o *)sub_1C372A4(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v81, 22, (System_String_o *)StringLiteral_12109/*"SHOP_HELP_CLASS_BOARD_RESET_EXPLANATION"*/, (System_String_o *)StringLiteral_20567/*"img_shop_23"*/, 3, 0);
  if ( v81 )
  {
    v3 = sub_1C37194(v81, v22->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0x13u )
    goto LABEL_74;
  v22->m_Items[19] = v81;
  sub_1C36FFC((CGThumbnailListItem_o *)&v22->m_Items[19], (int32_t)v81, v82, v83);
  v84 = (ShopHelpItemInfo_o *)sub_1C372A4(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v84, 23, (System_String_o *)StringLiteral_1/*""*/, (System_String_o *)StringLiteral_20553/*"img_shop_0"*/, 1, 0);
  if ( v84 )
  {
    v3 = sub_1C37194(v84, v22->obj.klass->_1.element_class);
    if ( !v3 )
    {
LABEL_75:
      v94 = sub_1C372D8();
      sub_1C37180(v94, 0);
    }
  }
  if ( *(_DWORD *)p_max_length <= 0x14u )
LABEL_74:
    sub_1C372BC(v3);
  v22->m_Items[20] = v84;
  sub_1C36FFC((CGThumbnailListItem_o *)&v22->m_Items[20], (int32_t)v84, v85, v86);
  this->fields.itemInfoList = v22;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.itemInfoList, (int32_t)v22, v87, v88);
  v89 = (System_Array_o *)sub_1C37100(ShopHelpItemInfo_ItemKind___TypeInfo, 19);
  v90.fields.value = Field__PrivateImplementationDetails__516CE5EF4CC7A81C9A872419689A9764E2EBEB4282A29E143CD06FEBDE26A4FC;
  v91 = (struct ShopHelpItemInfo_ItemKind_array *)v89;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v89, v90, 0);
  this->fields.kinds = v91;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.kinds, (int32_t)v91, v92, v93);
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
    sub_1C36FFC(p_onFadeOut, 0, v2, v3);
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

  if ( (byte_4C3F245 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ShopHelpListViewManager_CallOnFadeOut__);
    byte_4C3F245 = 1;
  }
  this->fields.onFadeOut = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.onFadeOut, (int32_t)callback, (int32_t)method, v3);
  baseDialog = this->fields.baseDialog;
  v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopHelpListViewManager_CallOnFadeOut__, 0);
  if ( !baseDialog )
    sub_1C372B4(v8);
  ShopHelpMenu__Close(baseDialog, v7, 0);
}


void ShopHelpListViewManager__CreateList(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  ShopHelpMenu_o *baseDialog; // x0
  struct ShopHelpItemInfo_ItemKind_array *kinds; // x8
  struct ShopHelpItemInfo_ItemKind_array *v7; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x25
  int32_t v10; // w21
  ShopRootConstants_c *v11; // x0
  BalanceConfig_c *v12; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  struct ShopHelpItemInfo_array *itemInfoList; // x9
  __int64 v15; // x8
  ShopHelpItemInfo_o **m_Items; // x9
  ShopHelpItemInfo_o *v17; // x22
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t size; // w23
  ShopHelpListViewItem_o *v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4C3F244 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&CoinRoomUtility_TypeInfo);
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&ShopHelpListViewItem_TypeInfo);
    sub_1C37058(&ShopRootConstants_TypeInfo);
    byte_4C3F244 = 1;
  }
  this->fields.onFadeOut = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.onFadeOut, 0, v2, v3);
  baseDialog = this->fields.baseDialog;
  if ( !baseDialog )
    goto LABEL_43;
  ShopHelpMenu__Open(baseDialog, 0);
  kinds = this->fields.kinds;
  if ( !kinds )
    goto LABEL_43;
  ListViewManager__CreateList((ListViewManager_o *)this, kinds->max_length, 0);
  v7 = this->fields.kinds;
  if ( !v7 )
    goto LABEL_43;
  max_length = v7->max_length;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1C372BC(baseDialog);
      v10 = v7->m_Items[v9];
      switch ( v10 )
      {
        case 15:
          v11 = ShopRootConstants_TypeInfo;
          if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          baseDialog = (ShopHelpMenu_o *)ShopRootConstants__IsSvtCostumeShopOpen((const MethodInfo *)v11);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_40;
          goto LABEL_28;
        case 16:
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          baseDialog = (ShopHelpMenu_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ShopMaster___);
          if ( !baseDialog )
            goto LABEL_43;
          baseDialog = (ShopHelpMenu_o *)ShopMaster__IsEnableEventShop_42870160((ShopMaster_o *)baseDialog, 0);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_40;
LABEL_28:
          itemInfoList = this->fields.itemInfoList;
          if ( !itemInfoList )
            goto LABEL_43;
          if ( (int)itemInfoList->max_length < 1 )
            goto LABEL_40;
          v15 = (unsigned int)itemInfoList->max_length;
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
          v12 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v12 = BalanceConfig_TypeInfo;
          }
          ClassBoardReleaseQuestId = v12->static_fields->ClassBoardReleaseQuestId;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          baseDialog = (ShopHelpMenu_o *)CondType__IsQuestClear_40324848(ClassBoardReleaseQuestId, -1, 0, 0);
          if ( ((unsigned __int8)baseDialog & 1) != 0 )
            goto LABEL_28;
          goto LABEL_40;
        default:
          goto LABEL_28;
      }
      while ( 1 )
      {
        v17 = *m_Items;
        if ( *m_Items )
        {
          if ( v17->fields._Kind_k__BackingField == v10 )
            break;
        }
        --v15;
        ++m_Items;
        if ( !v15 )
          goto LABEL_40;
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      v20 = (ShopHelpListViewItem_o *)sub_1C372A4(ShopHelpListViewItem_TypeInfo);
      ShopHelpListViewItem___ctor(v20, size, v17, 0);
      items = itemList->fields._items;
      v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v25 = itemList->fields._size;
      if ( (unsigned int)v25 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v20,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + v25;
        itemList->fields._size = v25 + 1;
        v26[4] = (Il2CppClass *)v20;
        sub_1C36FFC((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v20, v21, v22);
      }
LABEL_40:
      LODWORD(max_length) = v7->max_length;
      if ( (__int64)++v9 >= (int)max_length )
        goto LABEL_41;
    }
LABEL_43:
    sub_1C372B4(baseDialog);
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

  if ( (byte_4C3F242 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_Texture2D____78105200);
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C3F242 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0);
  if ( !AssetStorage )
    sub_1C372B4(0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51154888(
                                      AssetStorage,
                                      name,
                                      (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_Texture2D____78105200);
}


void ShopHelpListViewManager__LoadBaseSprite(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  System_String_array *helpBasePaths; // x20
  System_Action_o *v4; // x21

  if ( (byte_4C3F240 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__);
    byte_4C3F240 = 1;
  }
  if ( !this->fields.initMode )
  {
    this->fields.initMode = 1;
    helpBasePaths = this->fields.helpBasePaths;
    v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_40541524(helpBasePaths, v4, 1, 0);
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

  if ( (byte_4C3F243 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1C37058(&AssetManager_TypeInfo);
    byte_4C3F243 = 1;
  }
  if ( !paths )
    sub_1C372B4(this);
  max_length = paths->max_length;
  if ( (int)max_length >= 1 )
  {
    v5 = 0;
    do
    {
      if ( v5 >= (unsigned int)max_length )
        sub_1C372BC(this);
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
  UnityEngine_GameObject_o *BaseWindow; // x0

  v3 = this;
  if ( (byte_4C3F241 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1C37058(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_4C3F241 = 1;
  }
  if ( v3->fields.initMode == 2 )
  {
    ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
    BaseWindow = v3->fields.BaseWindow;
    if ( !BaseWindow
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0)) == 0
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)BaseWindow,
                                                     (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0 )
    {
      sub_1C372B4(BaseWindow);
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

  if ( (byte_4C3F246 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1C37058(&ShopHelpListViewObject_TypeInfo);
    byte_4C3F246 = 1;
  }
  if ( !obj
    || (naturalAligment = ShopHelpListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ShopHelpListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ShopHelpListViewObject_TypeInfo )
  {
    sub_1C372B4(this);
  }
  ShopHelpListViewObject__Init((ShopHelpListViewObject_o *)obj, 2, (const MethodInfo *)item);
}


void ShopHelpListViewManager___LoadBaseSprite_b__9_0(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ShopHelpListViewManager_o *v3; // x19
  UnityEngine_Shader_o *v4; // x21
  UnityEngine_Material_o *v5; // x20
  UnityEngine_GameObject_o *BaseWindow; // x0
  const MethodInfo *v7; // x3
  struct System_String_array *helpBasePaths; // x8
  struct System_String_array *helpBaseNames; // x9
  const MethodInfo *v10; // x3
  struct System_String_array *v11; // x8
  struct System_String_array *v12; // x9
  UnityEngine_Texture_o *AssetStorageTexture2D; // x0

  v3 = this;
  if ( (byte_4C3F248 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C37058(&UnityEngine_Material_TypeInfo);
    sub_1C37058(&StringLiteral_4940/*"Custom/SpriteWithMask"*/);
    this = (ShopHelpListViewManager_o *)sub_1C37058(&StringLiteral_16269/*"_MaskTex"*/);
    byte_4C3F248 = 1;
  }
  if ( v3->fields.initMode == 1 )
  {
    v4 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4940/*"Custom/SpriteWithMask"*/, 0);
    v5 = (UnityEngine_Material_o *)sub_1C372A4(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v5, v4, 0);
    BaseWindow = v3->fields.BaseWindow;
    if ( BaseWindow )
    {
      BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0);
      if ( BaseWindow )
      {
        BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)BaseWindow,
                                                   (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UITexture___);
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
                                                         v7);
              if ( v5 )
              {
                UnityEngine_Material__set_mainTexture(v5, (UnityEngine_Texture_o *)BaseWindow, 0);
                v11 = v3->fields.helpBasePaths;
                if ( v11 )
                {
                  if ( LODWORD(v11->max_length) <= 1 )
                    goto LABEL_19;
                  v12 = v3->fields.helpBaseNames;
                  if ( v12 )
                  {
                    if ( LODWORD(v12->max_length) > 1 )
                    {
                      AssetStorageTexture2D = (UnityEngine_Texture_o *)ShopHelpListViewManager__GetAssetStorageTexture2D(
                                                                         (ShopHelpListViewManager_o *)BaseWindow,
                                                                         v11->m_Items[1],
                                                                         v12->m_Items[1],
                                                                         v10);
                      UnityEngine_Material__SetTexture(
                        v5,
                        (System_String_o *)StringLiteral_16269/*"_MaskTex"*/,
                        AssetStorageTexture2D,
                        0);
                      v3->fields.initMode = 2;
                      return;
                    }
LABEL_19:
                    sub_1C372BC(BaseWindow);
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_1C372B4(BaseWindow);
  }
  ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
}