void ShopHelpListViewManager___ctor(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x20
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x20
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct ShopHelpItemInfo_array *v23; // x20
  ShopHelpItemInfo_o *v24; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  il2cpp_array_size_t *p_max_length; // x23
  ShopHelpItemInfo_o *v28; // x21
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  ShopHelpItemInfo_o *v31; // x21
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  ShopHelpItemInfo_o *v34; // x21
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  ShopHelpItemInfo_o *v37; // x21
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  ShopHelpItemInfo_o *v40; // x21
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  ShopHelpItemInfo_o *v43; // x21
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  ShopHelpItemInfo_o *v46; // x21
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  ShopHelpItemInfo_o *v49; // x21
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  ShopHelpItemInfo_o *v52; // x21
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  ShopHelpItemInfo_o *v55; // x21
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  ShopHelpItemInfo_o *v58; // x21
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  ShopHelpItemInfo_o *v61; // x21
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  ShopHelpItemInfo_o *v64; // x21
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  ShopHelpItemInfo_o *v67; // x21
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  ShopHelpItemInfo_o *v70; // x21
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  ShopHelpItemInfo_o *v73; // x21
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  ShopHelpItemInfo_o *v76; // x21
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  ShopHelpItemInfo_o *v79; // x21
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  ShopHelpItemInfo_o *v82; // x21
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  ShopHelpItemInfo_o *v85; // x21
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  System_Array_o *v90; // x0
  System_RuntimeFieldHandle_o v91; // x1
  struct ShopHelpItemInfo_ItemKind_array *v92; // x20
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  __int64 v95; // x0

  if ( (byte_4C52FD9 & 1) == 0 )
  {
    sub_1C3E564(&ShopHelpItemInfo_ItemKind___TypeInfo);
    sub_1C3E564(&ShopHelpItemInfo___TypeInfo);
    sub_1C3E564(&ShopHelpItemInfo_TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&Field__PrivateImplementationDetails__516CE5EF4CC7A81C9A872419689A9764E2EBEB4282A29E143CD06FEBDE26A4FC);
    sub_1C3E564(&StringLiteral_12122/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/);
    sub_1C3E564(&StringLiteral_12129/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/);
    sub_1C3E564(&StringLiteral_12118/*"SHOP_HELP_PURE_PRI_EXPLANATION"*/);
    sub_1C3E564(&StringLiteral_14626/*"Tutorial/tutorial_alpha"*/);
    sub_1C3E564(&StringLiteral_20578/*"img_shop_15"*/);
    sub_1C3E564(&StringLiteral_20588/*"img_shop_7"*/);
    sub_1C3E564(&StringLiteral_20574/*"img_shop_11"*/);
    sub_1C3E564(&StringLiteral_12128/*"SHOP_HELP_SVT_COSTUME_EXPLANATION"*/);
    sub_1C3E564(&StringLiteral_12114/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/);
    sub_1C3E564(&StringLiteral_12121/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/);
    sub_1C3E564(&StringLiteral_20584/*"img_shop_22"*/);
    sub_1C3E564(&StringLiteral_12124/*"SHOP_HELP_START_UP_SUMMON"*/);
    sub_1C3E564(&StringLiteral_24257/*"tutorial_0006"*/);
    sub_1C3E564(&StringLiteral_12110/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/);
    sub_1C3E564(&StringLiteral_12117/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/);
    sub_1C3E564(&StringLiteral_12113/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/);
    sub_1C3E564(&StringLiteral_12120/*"SHOP_HELP_REVIVAL_ITEM_EXPLANATION"*/);
    sub_1C3E564(&StringLiteral_20585/*"img_shop_23"*/);
    sub_1C3E564(&StringLiteral_20576/*"img_shop_13"*/);
    sub_1C3E564(&StringLiteral_20590/*"img_shop_9"*/);
    sub_1C3E564(&StringLiteral_12126/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/);
    sub_1C3E564(&StringLiteral_12127/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/);
    sub_1C3E564(&StringLiteral_20573/*"img_shop_10"*/);
    sub_1C3E564(&StringLiteral_12116/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/);
    sub_1C3E564(&StringLiteral_20579/*"img_shop_16"*/);
    sub_1C3E564(&StringLiteral_20580/*"img_shop_17"*/);
    sub_1C3E564(&StringLiteral_20582/*"img_shop_20"*/);
    sub_1C3E564(&StringLiteral_20589/*"img_shop_8"*/);
    sub_1C3E564(&StringLiteral_20587/*"img_shop_4"*/);
    sub_1C3E564(&StringLiteral_12112/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/);
    sub_1C3E564(&StringLiteral_20583/*"img_shop_21"*/);
    sub_1C3E564(&StringLiteral_20581/*"img_shop_18"*/);
    sub_1C3E564(&StringLiteral_12123/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/);
    sub_1C3E564(&StringLiteral_12115/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/);
    sub_1C3E564(&StringLiteral_20586/*"img_shop_3"*/);
    sub_1C3E564(&StringLiteral_20571/*"img_shop_0"*/);
    sub_1C3E564(&StringLiteral_14625/*"Tutorial/tutorial_0006"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_20577/*"img_shop_14"*/);
    sub_1C3E564(&StringLiteral_12125/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/);
    sub_1C3E564(&StringLiteral_20572/*"img_shop_1"*/);
    sub_1C3E564(&StringLiteral_24258/*"tutorial_alpha"*/);
    sub_1C3E564(&StringLiteral_12119/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/);
    sub_1C3E564(&StringLiteral_20575/*"img_shop_12"*/);
    sub_1C3E564(&StringLiteral_12111/*"SHOP_HELP_CLASS_BOARD_RESET_EXPLANATION"*/);
    byte_4C52FD9 = 1;
  }
  v3 = sub_1C3E60C(string___TypeInfo, 2);
  if ( !v3 )
    goto LABEL_76;
  v7 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_74;
  v8 = StringLiteral_14625/*"Tutorial/tutorial_0006"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_14625/*"Tutorial/tutorial_0006"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), v8, v5, v6);
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_74;
  v11 = StringLiteral_14626/*"Tutorial/tutorial_alpha"*/;
  *(_QWORD *)(v7 + 40) = StringLiteral_14626/*"Tutorial/tutorial_alpha"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 40), v11, v9, v10);
  this->fields.helpBasePaths = (struct System_String_array *)v7;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.helpBasePaths, v7, v12, v13);
  v3 = sub_1C3E60C(string___TypeInfo, 2);
  if ( !v3 )
    goto LABEL_76;
  v16 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_74;
  v17 = StringLiteral_24257/*"tutorial_0006"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_24257/*"tutorial_0006"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), v17, v14, v15);
  if ( *(_DWORD *)(v16 + 24) <= 1u )
    goto LABEL_74;
  v20 = StringLiteral_24258/*"tutorial_alpha"*/;
  *(_QWORD *)(v16 + 40) = StringLiteral_24258/*"tutorial_alpha"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v16 + 40), v20, v18, v19);
  this->fields.helpBaseNames = (struct System_String_array *)v16;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.helpBaseNames, v16, v21, v22);
  v23 = (struct ShopHelpItemInfo_array *)sub_1C3E60C(ShopHelpItemInfo___TypeInfo, 21);
  v24 = (ShopHelpItemInfo_o *)sub_1C3E7B0(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v24, 1, (System_String_o *)StringLiteral_12114/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20589/*"img_shop_8"*/, 2, 0);
  if ( !v23 )
LABEL_76:
    sub_1C3E7C0(v3, v4);
  if ( v24 )
  {
    v3 = sub_1C3E6A0(v24, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  p_max_length = &v23->max_length;
  if ( !LODWORD(v23->max_length) )
    goto LABEL_74;
  v23->m_Items[0] = v24;
  sub_1C3E508((CGThumbnailListItem_o *)v23->m_Items, (int32_t)v24, v25, v26);
  v28 = (ShopHelpItemInfo_o *)sub_1C3E7B0(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v28, 16, (System_String_o *)StringLiteral_12124/*"SHOP_HELP_START_UP_SUMMON"*/, (System_String_o *)StringLiteral_20580/*"img_shop_17"*/, 2, 0);
  if ( v28 )
  {
    v3 = sub_1C3E6A0(v28, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 1u )
    goto LABEL_74;
  v23->m_Items[1] = v28;
  sub_1C3E508((CGThumbnailListItem_o *)&v23->m_Items[1], (int32_t)v28, v29, v30);
  v31 = (ShopHelpItemInfo_o *)sub_1C3E7B0(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v31, 2, (System_String_o *)StringLiteral_12121/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/, (System_String_o *)StringLiteral_20587/*"img_shop_4"*/, 2, 0);
  if ( v31 )
  {
    v3 = sub_1C3E6A0(v31, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 2u )
    goto LABEL_74;
  v23->m_Items[2] = v31;
  sub_1C3E508((CGThumbnailListItem_o *)&v23->m_Items[2], (int32_t)v31, v32, v33);
  v34 = (ShopHelpItemInfo_o *)sub_1C3E7B0(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v34, 3, (System_String_o *)StringLiteral_12117/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20586/*"img_shop_3"*/, 1, 0);
  if ( v34 )
  {
    v3 = sub_1C3E6A0(v34, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 3u )
    goto LABEL_74;
  v23->m_Items[3] = v34;
  sub_1C3E508((CGThumbnailListItem_o *)&v23->m_Items[3], (int32_t)v34, v35, v36);
  v37 = (ShopHelpItemInfo_o *)sub_1C3E7B0(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v37, 4, (System_String_o *)StringLiteral_12119/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20574/*"img_shop_11"*/, 2, 0);
  if ( v37 )
  {
    v3 = sub_1C3E6A0(v37, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 4u )
    goto LABEL_74;
  v23->m_Items[4] = v37;
  sub_1C3E508((CGThumbnailListItem_o *)&v23->m_Items[4], (int32_t)v37, v38, v39);
  v40 = (ShopHelpItemInfo_o *)sub_1C3E7B0(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v40, 5, (System_String_o *)StringLiteral_12125/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20590/*"img_shop_9"*/, 1, 0);
  if ( v40 )
  {
    v3 = sub_1C3E6A0(v40, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 5u )
    goto LABEL_74;
  v23->m_Items[5] = v40;
  sub_1C3E508((CGThumbnailListItem_o *)&v23->m_Items[5], (int32_t)v40, v41, v42);
  v43 = (ShopHelpItemInfo_o *)sub_1C3E7B0(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v43, 6, (System_String_o *)StringLiteral_12126/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/, (System_String_o *)StringLiteral_20572/*"img_shop_1"*/, 1, 0);
  if ( v43 )
  {
    v3 = sub_1C3E6A0(v43, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 6u )
    goto LABEL_74;
  v23->m_Items[6] = v43;
  sub_1C3E508((CGThumbnailListItem_o *)&v23->m_Items[6], (int32_t)v43, v44, v45);
  v46 = (ShopHelpItemInfo_o *)sub_1C3E7B0(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v46, 7, (System_String_o *)StringLiteral_12122/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/, (System_String_o *)StringLiteral_20575/*"img_shop_12"*/, 1, 0);
  if ( v46 )
  {
    v3 = sub_1C3E6A0(v46, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 7u )
    goto LABEL_74;
  v23->m_Items[7] = v46;
  sub_1C3E508((CGThumbnailListItem_o *)&v23->m_Items[7], (int32_t)v46, v47, v48);
  v49 = (ShopHelpItemInfo_o *)sub_1C3E7B0(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v49, 8, (System_String_o *)StringLiteral_12113/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/, (System_String_o *)StringLiteral_20576/*"img_shop_13"*/, 1, 0);
  if ( v49 )
  {
    v3 = sub_1C3E6A0(v49, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 8u )
    goto LABEL_74;
  v23->m_Items[8] = v49;
  sub_1C3E508((CGThumbnailListItem_o *)&v23->m_Items[8], (int32_t)v49, v50, v51);
  v52 = (ShopHelpItemInfo_o *)sub_1C3E7B0(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v52, 11, (System_String_o *)StringLiteral_12110/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20573/*"img_shop_10"*/, 1, 0);
  if ( v52 )
  {
    v3 = sub_1C3E6A0(v52, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 9u )
    goto LABEL_74;
  v23->m_Items[9] = v52;
  sub_1C3E508((CGThumbnailListItem_o *)&v23->m_Items[9], (int32_t)v52, v53, v54);
  v55 = (ShopHelpItemInfo_o *)sub_1C3E7B0(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v55, 13, (System_String_o *)StringLiteral_12123/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20577/*"img_shop_14"*/, 2, 0);
  if ( v55 )
  {
    v3 = sub_1C3E6A0(v55, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0xAu )
    goto LABEL_74;
  v23->m_Items[10] = v55;
  sub_1C3E508((CGThumbnailListItem_o *)&v23->m_Items[10], (int32_t)v55, v56, v57);
  v58 = (ShopHelpItemInfo_o *)sub_1C3E7B0(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v58, 12, (System_String_o *)StringLiteral_12127/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20588/*"img_shop_7"*/, 1, 0);
  if ( v58 )
  {
    v3 = sub_1C3E6A0(v58, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0xBu )
    goto LABEL_74;
  v23->m_Items[11] = v58;
  sub_1C3E508((CGThumbnailListItem_o *)&v23->m_Items[11], (int32_t)v58, v59, v60);
  v61 = (ShopHelpItemInfo_o *)sub_1C3E7B0(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v61, 14, (System_String_o *)StringLiteral_12116/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/, (System_String_o *)StringLiteral_20578/*"img_shop_15"*/, 1, 0);
  if ( v61 )
  {
    v3 = sub_1C3E6A0(v61, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0xCu )
    goto LABEL_74;
  v23->m_Items[12] = v61;
  sub_1C3E508((CGThumbnailListItem_o *)&v23->m_Items[12], (int32_t)v61, v62, v63);
  v64 = (ShopHelpItemInfo_o *)sub_1C3E7B0(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v64, 15, (System_String_o *)StringLiteral_12128/*"SHOP_HELP_SVT_COSTUME_EXPLANATION"*/, (System_String_o *)StringLiteral_20579/*"img_shop_16"*/, 2, 0);
  if ( v64 )
  {
    v3 = sub_1C3E6A0(v64, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0xDu )
    goto LABEL_74;
  v23->m_Items[13] = v64;
  sub_1C3E508((CGThumbnailListItem_o *)&v23->m_Items[13], (int32_t)v64, v65, v66);
  v67 = (ShopHelpItemInfo_o *)sub_1C3E7B0(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v67, 17, (System_String_o *)StringLiteral_12112/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/, (System_String_o *)StringLiteral_20580/*"img_shop_17"*/, 2, 0);
  if ( v67 )
  {
    v3 = sub_1C3E6A0(v67, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0xEu )
    goto LABEL_74;
  v23->m_Items[14] = v67;
  sub_1C3E508((CGThumbnailListItem_o *)&v23->m_Items[14], (int32_t)v67, v68, v69);
  v70 = (ShopHelpItemInfo_o *)sub_1C3E7B0(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v70, 18, (System_String_o *)StringLiteral_12118/*"SHOP_HELP_PURE_PRI_EXPLANATION"*/, (System_String_o *)StringLiteral_20581/*"img_shop_18"*/, 1, 0);
  if ( v70 )
  {
    v3 = sub_1C3E6A0(v70, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0xFu )
    goto LABEL_74;
  v23->m_Items[15] = v70;
  sub_1C3E508((CGThumbnailListItem_o *)&v23->m_Items[15], (int32_t)v70, v71, v72);
  v73 = (ShopHelpItemInfo_o *)sub_1C3E7B0(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v73, 19, (System_String_o *)StringLiteral_12129/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/, (System_String_o *)StringLiteral_20582/*"img_shop_20"*/, 2, 0);
  if ( v73 )
  {
    v3 = sub_1C3E6A0(v73, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0x10u )
    goto LABEL_74;
  v23->m_Items[16] = v73;
  sub_1C3E508((CGThumbnailListItem_o *)&v23->m_Items[16], (int32_t)v73, v74, v75);
  v76 = (ShopHelpItemInfo_o *)sub_1C3E7B0(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v76, 20, (System_String_o *)StringLiteral_12120/*"SHOP_HELP_REVIVAL_ITEM_EXPLANATION"*/, (System_String_o *)StringLiteral_20583/*"img_shop_21"*/, 2, 0);
  if ( v76 )
  {
    v3 = sub_1C3E6A0(v76, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0x11u )
    goto LABEL_74;
  v23->m_Items[17] = v76;
  sub_1C3E508((CGThumbnailListItem_o *)&v23->m_Items[17], (int32_t)v76, v77, v78);
  v79 = (ShopHelpItemInfo_o *)sub_1C3E7B0(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v79, 21, (System_String_o *)StringLiteral_12115/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/, (System_String_o *)StringLiteral_20584/*"img_shop_22"*/, 2, 0);
  if ( v79 )
  {
    v3 = sub_1C3E6A0(v79, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0x12u )
    goto LABEL_74;
  v23->m_Items[18] = v79;
  sub_1C3E508((CGThumbnailListItem_o *)&v23->m_Items[18], (int32_t)v79, v80, v81);
  v82 = (ShopHelpItemInfo_o *)sub_1C3E7B0(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v82, 22, (System_String_o *)StringLiteral_12111/*"SHOP_HELP_CLASS_BOARD_RESET_EXPLANATION"*/, (System_String_o *)StringLiteral_20585/*"img_shop_23"*/, 3, 0);
  if ( v82 )
  {
    v3 = sub_1C3E6A0(v82, v23->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)p_max_length <= 0x13u )
    goto LABEL_74;
  v23->m_Items[19] = v82;
  sub_1C3E508((CGThumbnailListItem_o *)&v23->m_Items[19], (int32_t)v82, v83, v84);
  v85 = (ShopHelpItemInfo_o *)sub_1C3E7B0(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v85, 23, (System_String_o *)StringLiteral_1/*""*/, (System_String_o *)StringLiteral_20571/*"img_shop_0"*/, 1, 0);
  if ( v85 )
  {
    v3 = sub_1C3E6A0(v85, v23->obj.klass->_1.element_class);
    if ( !v3 )
    {
LABEL_75:
      v95 = sub_1C3E7E4();
      sub_1C3E68C(v95, 0);
    }
  }
  if ( *(_DWORD *)p_max_length <= 0x14u )
LABEL_74:
    sub_1C3E7C8(v3, v4);
  v23->m_Items[20] = v85;
  sub_1C3E508((CGThumbnailListItem_o *)&v23->m_Items[20], (int32_t)v85, v86, v87);
  this->fields.itemInfoList = v23;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.itemInfoList, (int32_t)v23, v88, v89);
  v90 = (System_Array_o *)sub_1C3E60C(ShopHelpItemInfo_ItemKind___TypeInfo, 19);
  v91.fields.value = Field__PrivateImplementationDetails__516CE5EF4CC7A81C9A872419689A9764E2EBEB4282A29E143CD06FEBDE26A4FC;
  v92 = (struct ShopHelpItemInfo_ItemKind_array *)v90;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v90, v91, 0);
  this->fields.kinds = v92;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.kinds, (int32_t)v92, v93, v94);
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
    sub_1C3E508(p_onFadeOut, 0, v2, v3);
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

  if ( (byte_4C52FD7 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ShopHelpListViewManager_CallOnFadeOut__);
    byte_4C52FD7 = 1;
  }
  this->fields.onFadeOut = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onFadeOut, (int32_t)callback, (int32_t)method, v3);
  baseDialog = this->fields.baseDialog;
  v7 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopHelpListViewManager_CallOnFadeOut__, 0);
  if ( !baseDialog )
    sub_1C3E7C0(v8, v9);
  ShopHelpMenu__Close(baseDialog, v7, 0);
}


void ShopHelpListViewManager__CreateList(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  ShopHelpMenu_o *baseDialog; // x0
  struct ShopHelpItemInfo_ItemKind_array *kinds; // x8
  struct ShopHelpItemInfo_ItemKind_array *v8; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x25
  int32_t v11; // w21
  ShopRootConstants_c *v12; // x0
  BalanceConfig_c *v13; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  struct ShopHelpItemInfo_array *itemInfoList; // x9
  __int64 v16; // x8
  ShopHelpItemInfo_o **m_Items; // x9
  ShopHelpItemInfo_o *v18; // x22
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t size; // w23
  ShopHelpListViewItem_o *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4C52FD6 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&CoinRoomUtility_TypeInfo);
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C3E564(&ShopHelpListViewItem_TypeInfo);
    sub_1C3E564(&ShopRootConstants_TypeInfo);
    byte_4C52FD6 = 1;
  }
  this->fields.onFadeOut = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onFadeOut, 0, v2, v3);
  baseDialog = this->fields.baseDialog;
  if ( !baseDialog )
    goto LABEL_43;
  ShopHelpMenu__Open(baseDialog, 0);
  kinds = this->fields.kinds;
  if ( !kinds )
    goto LABEL_43;
  ListViewManager__CreateList((ListViewManager_o *)this, kinds->max_length, 0);
  v8 = this->fields.kinds;
  if ( !v8 )
    goto LABEL_43;
  max_length = v8->max_length;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C3E7C8(baseDialog, v5);
      v11 = v8->m_Items[v10];
      switch ( v11 )
      {
        case 15:
          v12 = ShopRootConstants_TypeInfo;
          if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          baseDialog = (ShopHelpMenu_o *)ShopRootConstants__IsSvtCostumeShopOpen((const MethodInfo *)v12);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_40;
          goto LABEL_28;
        case 16:
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          baseDialog = (ShopHelpMenu_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ShopMaster___);
          if ( !baseDialog )
            goto LABEL_43;
          baseDialog = (ShopHelpMenu_o *)ShopMaster__IsEnableEventShop_42922176((ShopMaster_o *)baseDialog, 0);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_40;
LABEL_28:
          itemInfoList = this->fields.itemInfoList;
          if ( !itemInfoList )
            goto LABEL_43;
          if ( (int)itemInfoList->max_length < 1 )
            goto LABEL_40;
          v16 = (unsigned int)itemInfoList->max_length;
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
          v13 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v13 = BalanceConfig_TypeInfo;
          }
          ClassBoardReleaseQuestId = v13->static_fields->ClassBoardReleaseQuestId;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          baseDialog = (ShopHelpMenu_o *)CondType__IsQuestClear_40371188(ClassBoardReleaseQuestId, -1, 0, 0);
          if ( ((unsigned __int8)baseDialog & 1) != 0 )
            goto LABEL_28;
          goto LABEL_40;
        default:
          goto LABEL_28;
      }
      while ( 1 )
      {
        v18 = *m_Items;
        if ( *m_Items )
        {
          if ( v18->fields._Kind_k__BackingField == v11 )
            break;
        }
        --v16;
        ++m_Items;
        if ( !v16 )
          goto LABEL_40;
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      v21 = (ShopHelpListViewItem_o *)sub_1C3E7B0(ShopHelpListViewItem_TypeInfo);
      ShopHelpListViewItem___ctor(v21, size, v18, 0);
      items = itemList->fields._items;
      v25 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v26 = itemList->fields._size;
      if ( (unsigned int)v26 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v21,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + v26;
        itemList->fields._size = v26 + 1;
        v27[4] = (Il2CppClass *)v21;
        sub_1C3E508((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v21, v22, v23);
      }
LABEL_40:
      LODWORD(max_length) = v8->max_length;
      if ( (__int64)++v10 >= (int)max_length )
        goto LABEL_41;
    }
LABEL_43:
    sub_1C3E7C0(baseDialog, v5);
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

  if ( (byte_4C52FD4 & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_Texture2D____78185184);
    sub_1C3E564(&AssetManager_TypeInfo);
    byte_4C52FD4 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0);
  if ( !AssetStorage )
    sub_1C3E7C0(0, v7);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51228128(
                                      AssetStorage,
                                      name,
                                      (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_Texture2D____78185184);
}


void ShopHelpListViewManager__LoadBaseSprite(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  System_String_array *helpBasePaths; // x20
  System_Action_o *v4; // x21

  if ( (byte_4C52FD2 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__);
    byte_4C52FD2 = 1;
  }
  if ( !this->fields.initMode )
  {
    this->fields.initMode = 1;
    helpBasePaths = this->fields.helpBasePaths;
    v4 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_40587784(helpBasePaths, v4, 1, 0);
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

  if ( (byte_4C52FD5 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1C3E564(&AssetManager_TypeInfo);
    byte_4C52FD5 = 1;
  }
  if ( !paths )
    sub_1C3E7C0(this, paths);
  max_length = paths->max_length;
  if ( (int)max_length >= 1 )
  {
    v5 = 0;
    do
    {
      if ( v5 >= (unsigned int)max_length )
        sub_1C3E7C8(this, paths);
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
  if ( (byte_4C52FD3 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_4C52FD3 = 1;
  }
  if ( v3->fields.initMode == 2 )
  {
    ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
    BaseWindow = v3->fields.BaseWindow;
    if ( !BaseWindow
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0)) == 0
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)BaseWindow,
                                                     (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0 )
    {
      sub_1C3E7C0(BaseWindow, v4);
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

  if ( (byte_4C52FD8 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1C3E564(&ShopHelpListViewObject_TypeInfo);
    byte_4C52FD8 = 1;
  }
  if ( !obj
    || (naturalAligment = ShopHelpListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ShopHelpListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ShopHelpListViewObject_TypeInfo )
  {
    sub_1C3E7C0(this, obj);
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
  if ( (byte_4C52FDA & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C3E564(&UnityEngine_Material_TypeInfo);
    sub_1C3E564(&StringLiteral_4940/*"Custom/SpriteWithMask"*/);
    this = (ShopHelpListViewManager_o *)sub_1C3E564(&StringLiteral_16279/*"_MaskTex"*/);
    byte_4C52FDA = 1;
  }
  if ( v3->fields.initMode == 1 )
  {
    v4 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4940/*"Custom/SpriteWithMask"*/, 0);
    v5 = (UnityEngine_Material_o *)sub_1C3E7B0(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v5, v4, 0);
    BaseWindow = v3->fields.BaseWindow;
    if ( BaseWindow )
    {
      BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0);
      if ( BaseWindow )
      {
        BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)BaseWindow,
                                                   (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UITexture___);
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
                        (System_String_o *)StringLiteral_16279/*"_MaskTex"*/,
                        AssetStorageTexture2D,
                        0);
                      v3->fields.initMode = 2;
                      return;
                    }
LABEL_19:
                    sub_1C3E7C8(BaseWindow, v6);
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_1C3E7C0(BaseWindow, v6);
  }
  ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
}