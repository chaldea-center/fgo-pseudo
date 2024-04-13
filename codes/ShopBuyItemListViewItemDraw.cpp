void __fastcall ShopBuyItemListViewItemDraw___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42EE54A & 1) == 0 )
  {
    sub_B5D5C4(&ShopBuyItemListViewItemDraw_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_19754/*"img_list_bg04"*/, v8, v9, v10);
    byte_42EE54A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ShopBuyItemListViewItemDraw_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_19754/*"img_list_bg04"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19754/*"img_list_bg04"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall ShopBuyItemListViewItemDraw___ctor(ShopBuyItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ShopBuyItemListViewItemDraw__Awake(ShopBuyItemListViewItemDraw_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UISprite_o *v14; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UISprite_o *v22; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_42EE533 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE533 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL);
  if ( !v6 )
  {
    v14 = this->fields.baseSprite;
    if ( !v14
      || (mAtlas = v14->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.baseAtlas,
            (System_Int32_array **)mAtlas,
            v8,
            v9,
            v10,
            v11,
            v12,
            v13),
          (v22 = this->fields.baseSprite) == 0LL) )
    {
      sub_B5D69C(v6, v7);
    }
    mSpriteName = v22->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.baseSpriteName,
      (System_Int32_array **)mSpriteName,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
}


int32_t __fastcall ShopBuyItemListViewItemDraw__GetDispMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) >= 3 )
    return 0;
  return initMode;
}


bool __fastcall ShopBuyItemListViewItemDraw__GetIsSetItemEventShop(
        ShopBuyItemListViewItemDraw_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x8
  SetItemMaster_o *v9; // x20
  unsigned __int64 v10; // x21
  int rangeSprite; // w8
  unsigned int v12; // w9
  __int64 v13; // x10
  __int64 v15; // x0

  if ( (byte_42EE547 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SetItemMaster___, (_DWORD)ids, (_DWORD)method, v3);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B5D5C4(
                                              &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                              v5,
                                              v6,
                                              v7);
    byte_42EE547 = 1;
  }
  if ( !ids )
    goto LABEL_20;
  if ( !*(_QWORD *)&ids->max_length )
    return 0;
  this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_B5D69C(this, ids);
  this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SetItemMaster___);
  v8 = *(_QWORD *)&ids->max_length;
  if ( (int)v8 < 1 )
    return 0;
  v9 = (SetItemMaster_o *)this;
  v10 = 0LL;
  while ( 1 )
  {
    if ( v10 >= (unsigned int)v8 )
    {
LABEL_21:
      v15 = sub_B5D6C8(this);
      sub_B5D668(v15, 0LL);
    }
    if ( !v9 )
      goto LABEL_20;
    this = (ShopBuyItemListViewItemDraw_o *)SetItemMaster__GetList(v9, ids->m_Items[v10 + 1], 0LL);
    if ( !this )
      goto LABEL_20;
    rangeSprite = (int)this->fields.rangeSprite;
    if ( rangeSprite >= 1 )
      break;
LABEL_17:
    LODWORD(v8) = ids->max_length;
    if ( (__int64)++v10 >= (int)v8 )
      return 0;
  }
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= rangeSprite )
      goto LABEL_21;
    v13 = *((_QWORD *)&this->fields.addRangeSprite + (int)v12);
    if ( !v13 )
      goto LABEL_20;
    if ( *(_DWORD *)(v13 + 20) == 7 )
      return 1;
    if ( (int)++v12 >= rangeSprite )
      goto LABEL_17;
  }
}


System_Int32_array *__fastcall ShopBuyItemListViewItemDraw__GetUserItemCounts(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 SelfUserGame; // x0
  const MethodInfo *v15; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x8
  _DWORD *v17; // x21
  System_Int32_array *v18; // x19
  UserItemMaster_o *v19; // x21
  const MethodInfo *v20; // x2
  ShopEntity_o *v21; // x8
  int64_t v22; // x20
  int32_t v23; // w8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v25; // x1
  unsigned int ItemCount; // w0
  const MethodInfo *v27; // x1
  unsigned __int64 v28; // x22
  const MethodInfo *v29; // x2
  int64_t v30; // x23
  unsigned int v32; // w0
  __int64 v33; // x0

  if ( (byte_42EE548 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EE548 = 1;
  }
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !item || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0LL )
LABEL_48:
    sub_B5D69C(SelfUserGame, v15);
  v17 = (_DWORD *)SelfUserGame;
  switch ( Shop_k__BackingField->fields.payType )
  {
    case 1:
      SelfUserGame = sub_B5D5DC(int___TypeInfo, 1LL);
      if ( !v17 )
        goto LABEL_48;
      v18 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_48;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_49;
      v23 = v17[42];
      goto LABEL_45;
    case 2:
      SelfUserGame = sub_B5D5DC(int___TypeInfo, 1LL);
      if ( !v17 )
        goto LABEL_48;
      v18 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_48;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_49;
      v23 = v17[24];
      goto LABEL_45;
    case 4:
      SelfUserGame = sub_B5D5DC(int___TypeInfo, 1LL);
      if ( !v17 )
        goto LABEL_48;
      v18 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_48;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_49;
      v23 = v17[44];
      goto LABEL_45;
    case 6:
    case 0xB:
      SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_48;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)SelfUserGame,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
      ItemCount = ShopBuyItemListViewItem__get_ItemCount(item, v25);
      v18 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, ItemCount);
      if ( ShopBuyItemListViewItem__get_ItemCount(item, v27) < 1 )
        return v18;
      v28 = 0LL;
      break;
    case 8:
    case 9:
    case 0xC:
      v18 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
      SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_48;
      v19 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)SelfUserGame,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      SelfUserGame = NetworkManager__get_UserId(0LL);
      v21 = item->fields._Shop_k__BackingField;
      if ( !v21 )
        goto LABEL_48;
      v22 = SelfUserGame;
      SelfUserGame = ShopEntity__GetItemIDs(v21, 0, v20);
      if ( !v19 )
        goto LABEL_48;
      SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(v19, v22, SelfUserGame, 0LL);
      if ( !SelfUserGame || !v18 )
        goto LABEL_48;
      if ( !v18->max_length )
        goto LABEL_49;
      v23 = *(_DWORD *)(SelfUserGame + 28);
      goto LABEL_45;
    case 0xA:
      SelfUserGame = sub_B5D5DC(int___TypeInfo, 1LL);
      if ( !v17 )
        goto LABEL_48;
      v18 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_48;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_49;
      v23 = v17[45];
LABEL_45:
      v18->m_Items[1] = v23;
      return v18;
    default:
      v32 = ShopBuyItemListViewItem__get_ItemCount(item, v15);
      return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, v32);
  }
  do
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    SelfUserGame = NetworkManager__get_UserId(0LL);
    if ( !item->fields._Shop_k__BackingField )
      goto LABEL_48;
    v30 = SelfUserGame;
    SelfUserGame = ShopEntity__GetItemIDs(item->fields._Shop_k__BackingField, v28, v29);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_48;
    SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                              MasterData_WarQuestSelectionMaster,
                              v30,
                              SelfUserGame,
                              0LL);
    if ( !SelfUserGame || !v18 )
      goto LABEL_48;
    if ( v28 >= v18->max_length )
    {
LABEL_49:
      v33 = sub_B5D6C8(SelfUserGame);
      sub_B5D668(v33, 0LL);
    }
    v18->m_Items[++v28] = *(_DWORD *)(SelfUserGame + 28);
  }
  while ( (__int64)v28 < ShopBuyItemListViewItem__get_ItemCount(item, v15) );
  return v18;
}


void __fastcall ShopBuyItemListViewItemDraw__SetBandSprite(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopBuyItemListViewItemDraw_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct ShopEntity_o *Shop_k__BackingField; // x8
  UISprite_o *v13; // x1
  UISprite_o **p_bandSprite; // x19
  UISprite_o *v15; // t1
  __int64 *v16; // x8
  UISprite_o *v17; // x1
  bool v18; // w2
  UISprite_o *bandSprite; // t1
  UISprite_o *v20; // t1

  v5 = this;
  if ( (byte_42EE53A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19990/*"img_txt_shop"*/, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_19978/*"img_txt_quest"*/, v6, v7, v8);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_19912/*"img_txt_bgm"*/, v9, v10, v11);
    byte_42EE53A = 1;
  }
  if ( !item || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0LL )
    sub_B5D69C(this, item);
  switch ( Shop_k__BackingField->fields.purchaseType )
  {
    case 5:
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItemDraw__GetIsSetItemEventShop(
                                                this,
                                                Shop_k__BackingField->fields.targetIds,
                                                method);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_6;
      goto LABEL_8;
    case 6:
      bandSprite = v5->fields.bandSprite;
      p_bandSprite = &v5->fields.bandSprite;
      v13 = bandSprite;
      v16 = &StringLiteral_19978/*"img_txt_quest"*/;
      goto LABEL_11;
    case 7:
    case 9:
LABEL_6:
      v15 = v5->fields.bandSprite;
      p_bandSprite = &v5->fields.bandSprite;
      v13 = v15;
      v16 = &StringLiteral_19990/*"img_txt_shop"*/;
      goto LABEL_11;
    case 0xF:
      v20 = v5->fields.bandSprite;
      p_bandSprite = &v5->fields.bandSprite;
      v13 = v20;
      v16 = &StringLiteral_19912/*"img_txt_bgm"*/;
LABEL_11:
      ShopBuyItemListViewItemDraw__SetSpriteName(this, v13, (System_String_o *)*v16, v3);
      v17 = *p_bandSprite;
      v18 = 1;
      break;
    default:
LABEL_8:
      v17 = v5->fields.bandSprite;
      v18 = 0;
      break;
  }
  ShopBuyItemListViewItemDraw__SetSpriteActive(this, v17, v18, v3);
}


void __fastcall ShopBuyItemListViewItemDraw__SetBaseButton(
        ShopBuyItemListViewItemDraw_o *this,
        bool isInPreparation,
        int32_t dispMode,
        const MethodInfo *method)
{
  char v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *baseButton; // x22
  __int64 v11; // x1
  UnityEngine_Object_o *baseSprite; // x20
  UIWidget_o *v13; // x19
  UnityEngine_Color_o **v14; // x0

  if ( (byte_42EE540 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isInPreparation, dispMode, method);
    sub_B5D5C4(&UICommonButtonColor_TypeInfo, v7, v8, v9);
    byte_42EE540 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      v13 = (UIWidget_o *)this->fields.baseSprite;
      v14 = (UnityEngine_Color_o **)UICommonButtonColor_TypeInfo;
      if ( (BYTE3(UICommonButtonColor_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UICommonButtonColor_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
        v14 = (UnityEngine_Color_o **)UICommonButtonColor_TypeInfo;
      }
      if ( v13 )
      {
        UIWidget__set_color(v13, *v14[23], 0LL);
        return;
      }
LABEL_21:
      sub_B5D69C(v14, v11);
    }
  }
  else
  {
    v14 = (UnityEngine_Color_o **)this->fields.baseButton;
    if ( !v14 )
      goto LABEL_21;
    (*(void (__fastcall **)(UnityEngine_Color_o **, bool, _QWORD))&(*v14)[24].fields.b)(
      v14,
      !isInPreparation,
      *(_QWORD *)&(*v14)[25].fields.r);
    v14 = (UnityEngine_Color_o **)this->fields.baseButton;
    if ( !v14 )
      goto LABEL_21;
    UICommonButton__SetColliderEnable((UICommonButton_o *)v14, dispMode == 3 || isInPreparation, 1, 0LL);
    v14 = (UnityEngine_Color_o **)this->fields.baseButton;
    if ( !v14 )
      goto LABEL_21;
    (*(void (__fastcall **)(UnityEngine_Color_o **, _QWORD, __int64, _QWORD))&(*v14)[33].fields.b)(
      v14,
      0LL,
      1LL,
      *(_QWORD *)&(*v14)[34].fields.r);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetBaseSprite(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v16; // x0
  __int64 v17; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x0
  int32_t v19; // w0
  int bgImageId; // t1
  UISprite_o *v21; // x21
  System_String_o *v22; // x0
  System_String_o *v23; // x22
  struct ShopEntity_o *v24; // x8
  UISprite_o *v25; // x20
  System_String_o **onPostFill; // x8

  if ( (byte_42EE53B & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ShopBuyItemListViewItemDraw_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_22413/*"shop_item_menu_"*/, v12, v13, v14);
    byte_42EE53B = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = (UISprite_o *)UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v16 & 1) == 0 )
  {
    if ( item )
    {
      Shop_k__BackingField = item->fields._Shop_k__BackingField;
      if ( Shop_k__BackingField )
      {
        bgImageId = Shop_k__BackingField->fields.bgImageId;
        v19 = (_DWORD)Shop_k__BackingField + 124;
        if ( bgImageId >= 1 )
        {
          v21 = this->fields.baseSprite;
          v22 = System_Int32__ToString(v19, 0LL);
          v23 = System_String__Concat_44577788((System_String_o *)StringLiteral_22413/*"shop_item_menu_"*/, v22, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          if ( AtlasManager__SetShopBanner_31192016(v21, v23, 0LL) )
            return;
        }
      }
      v16 = this->fields.baseSprite;
      if ( v16 )
      {
        UISprite__set_atlas(v16, this->fields.baseAtlas, 0LL);
        v24 = item->fields._Shop_k__BackingField;
        if ( v24 )
        {
          v25 = this->fields.baseSprite;
          if ( v24->fields.shopType == 9 )
          {
            v16 = (UISprite_o *)ShopBuyItemListViewItemDraw_TypeInfo;
            if ( (BYTE3(ShopBuyItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ShopBuyItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ShopBuyItemListViewItemDraw_TypeInfo);
              v16 = (UISprite_o *)ShopBuyItemListViewItemDraw_TypeInfo;
            }
            onPostFill = (System_String_o **)v16->fields.onPostFill;
            if ( !v25 )
              goto LABEL_25;
          }
          else
          {
            onPostFill = &this->fields.baseSpriteName;
            if ( !v25 )
              goto LABEL_25;
          }
          UISprite__set_spriteName(v25, *onPostFill, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_B5D69C(v16, v17);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetButtonActive(
        ShopBuyItemListViewItemDraw_o *this,
        UICommonButton_o *button,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_42EE537 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)button, isActive, method);
    byte_42EE537 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)button, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !button || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)button, 0LL)) == 0LL )
      sub_B5D69C(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewItemDraw__SetCommonConsumeIcon(
        ShopBuyItemListViewItemDraw_o *this,
        ItemIconComponent_o *itemIcon,
        CommonConsumeEntity_o *commonConsumeEntity,
        bool isShowQuestion,
        const MethodInfo *method)
{
  ItemEntity_o *ItemEntity; // x0
  const MethodInfo *v9; // x4
  _BOOL8 IsAp; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *iconSprite; // x19

  if ( (byte_42EE544 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)itemIcon, (_DWORD)commonConsumeEntity, isShowQuestion);
    byte_42EE544 = 1;
  }
  if ( commonConsumeEntity )
  {
    if ( CommonConsumeEntity__get_IsItem(commonConsumeEntity, 0LL) )
    {
      ItemEntity = CommonConsumeEntity__GetItemEntity(commonConsumeEntity, 0LL);
      ShopBuyItemListViewItemDraw__SetEventItemIcon(
        (ShopBuyItemListViewItemDraw_o *)ItemEntity,
        itemIcon,
        ItemEntity,
        isShowQuestion,
        v9);
    }
    else
    {
      IsAp = CommonConsumeEntity__get_IsAp(commonConsumeEntity, 0LL);
      if ( IsAp )
      {
        if ( !itemIcon )
          sub_B5D69C(IsAp, v11);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0LL);
        GameObjectExtensions__SetLocalPositionY(gameObject, -3.0, 0LL);
        iconSprite = itemIcon->fields.iconSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetItem(iconSprite, 47, 0LL);
      }
    }
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetEventEndTime(
        ShopBuyItemListViewItemDraw_o *this,
        bool isRarePriShopPurchased,
        bool isIndefinitePeriodShowable,
        int64_t activeTime,
        int64_t enterTime,
        const MethodInfo *method)
{
  char v11; // w1
  char v12; // w2
  __int64 v13; // x3
  char v14; // w1
  char v15; // w2
  __int64 v16; // x3
  struct UILabel_o *v17; // x21
  System_String_o *RestTime2; // x0
  const MethodInfo *v19; // x3
  struct UILabel_o *restTimeLabel; // x19
  UILabel_o *v21; // x1

  if ( (byte_42EE546 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, isRarePriShopPurchased, isIndefinitePeriodShowable, activeTime);
    sub_B5D5C4(&StringLiteral_12311/*"SHOP_INDEFINITE_PERIOD"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_13534/*"TIME_REST2_NONE"*/, v14, v15, v16);
    byte_42EE546 = 1;
  }
  if ( activeTime <= 0 )
  {
    restTimeLabel = this->fields.restTimeLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    RestTime2 = LocalizationManager__Get((System_String_o *)StringLiteral_13534/*"TIME_REST2_NONE"*/, 0LL);
    v21 = restTimeLabel;
  }
  else
  {
    v17 = this->fields.restTimeLabel;
    if ( isRarePriShopPurchased || isIndefinitePeriodShowable )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      RestTime2 = LocalizationManager__Get((System_String_o *)StringLiteral_12311/*"SHOP_INDEFINITE_PERIOD"*/, 0LL);
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      RestTime2 = LocalizationManager__GetRestTime2(activeTime, enterTime, 0LL);
    }
    v21 = v17;
  }
  ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)RestTime2, v21, RestTime2, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewItemDraw__SetEventItemIcon(
        ShopBuyItemListViewItemDraw_o *this,
        ItemIconComponent_o *eventItemIcon,
        ItemEntity_o *itemEntity,
        bool isShowQuestion,
        const MethodInfo *method)
{
  _BOOL8 v8; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_42EE545 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)eventItemIcon, (_DWORD)itemEntity, isShowQuestion);
    byte_42EE545 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)eventItemIcon, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !eventItemIcon )
      sub_B5D69C(v8, v9);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventItemIcon, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
    if ( itemEntity )
    {
      if ( isShowQuestion )
        ItemIconComponent__SetItemImage(eventItemIcon, 8007, 0LL);
      else
        ItemIconComponent__SetItem(eventItemIcon, itemEntity->fields.imageId, -1, 0LL);
    }
    else
    {
      ItemIconComponent__Clear(eventItemIcon, 0LL);
    }
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetEventItemIconText(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  ShopBuyItemListViewItemDraw_o *v6; // x19
  struct ShopEntity_o *Shop_k__BackingField; // x8
  int v8; // w20
  struct ShopEntity_o *v9; // x8
  struct CommonConsumeEntity_array *CommonConsumeEntities_k__BackingField; // x22
  int max_length; // w8
  CommonConsumeEntity_o *v12; // x2
  ItemIconComponent_o *eventItemIcon; // x1
  const MethodInfo *v14; // x4
  struct ItemEntity_array *v15; // x8
  ItemIconComponent_o *eventItemIcon2; // x1
  ItemEntity_o *v17; // x2
  ShopBuyItemListViewItemDraw_o *v18; // x0
  const MethodInfo *v19; // x4
  bool v20; // w3
  struct ItemEntity_array *EventItemEntities_k__BackingField; // x8
  struct ItemEntity_array *v22; // x8
  CommonConsumeEntity_o *v23; // x2
  __int64 v24; // x0

  v6 = this;
  if ( isInPreparation )
  {
    if ( !item )
      goto LABEL_36;
    Shop_k__BackingField = item->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_36;
    v8 = (LOBYTE(Shop_k__BackingField->fields.flag) >> 5) & 1;
  }
  else
  {
    if ( !item )
      goto LABEL_36;
    LOBYTE(v8) = 0;
  }
  v9 = item->fields._Shop_k__BackingField;
  if ( !v9
    || v9->fields.payType != 14
    || (CommonConsumeEntities_k__BackingField = item->fields._CommonConsumeEntities_k__BackingField) == 0LL )
  {
    if ( !item->fields._EventItemEntities_k__BackingField )
    {
      ShopBuyItemListViewItemDraw__SetEventItemIcon(this, this->fields.eventItemIcon, 0LL, 0, v4);
      ShopBuyItemListViewItemDraw__SetEventItemIcon(v18, v6->fields.eventItemIcon1, 0LL, 0, v19);
      eventItemIcon2 = v6->fields.eventItemIcon2;
      v17 = 0LL;
      v20 = 0;
LABEL_28:
      ShopBuyItemListViewItemDraw__SetEventItemIcon(this, eventItemIcon2, v17, v20, v14);
      return;
    }
    this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_ItemCount(item, (const MethodInfo *)item);
    if ( (int)this >= 2 )
    {
      EventItemEntities_k__BackingField = item->fields._EventItemEntities_k__BackingField;
      if ( EventItemEntities_k__BackingField )
      {
        if ( !EventItemEntities_k__BackingField->max_length )
          goto LABEL_37;
        ShopBuyItemListViewItemDraw__SetEventItemIcon(
          this,
          v6->fields.eventItemIcon1,
          EventItemEntities_k__BackingField->m_Items[0],
          v8,
          v14);
        v22 = item->fields._EventItemEntities_k__BackingField;
        if ( v22 )
        {
          if ( v22->max_length <= 1 )
            goto LABEL_37;
          eventItemIcon2 = v6->fields.eventItemIcon2;
          v17 = v22->m_Items[1];
          goto LABEL_27;
        }
      }
    }
    else
    {
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( this )
      {
        this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, (const MethodInfo *)item);
        if ( ((unsigned __int8)this & 1) != 0 && item->fields._IsNotHavingShopItemReceived_k__BackingField )
          return;
      }
      v15 = item->fields._EventItemEntities_k__BackingField;
      if ( v15 )
      {
        if ( !v15->max_length )
          goto LABEL_37;
        eventItemIcon2 = v6->fields.eventItemIcon;
        v17 = v15->m_Items[0];
LABEL_27:
        v20 = v8;
        goto LABEL_28;
      }
    }
LABEL_36:
    sub_B5D69C(this, item);
  }
  max_length = CommonConsumeEntities_k__BackingField->max_length;
  if ( max_length == 1 )
  {
    v12 = CommonConsumeEntities_k__BackingField->m_Items[0];
    if ( v12 )
    {
      eventItemIcon = this->fields.eventItemIcon;
LABEL_34:
      ShopBuyItemListViewItemDraw__SetCommonConsumeIcon(v6, eventItemIcon, v12, v8, v4);
      return;
    }
    return;
  }
  if ( max_length < 2 )
    return;
  v23 = CommonConsumeEntities_k__BackingField->m_Items[0];
  if ( v23 )
  {
    ShopBuyItemListViewItemDraw__SetCommonConsumeIcon(this, this->fields.eventItemIcon1, v23, v8, v4);
    if ( CommonConsumeEntities_k__BackingField->max_length <= 1 )
    {
LABEL_37:
      v24 = sub_B5D6C8(this);
      sub_B5D668(v24, 0LL);
    }
  }
  v12 = CommonConsumeEntities_k__BackingField->m_Items[1];
  if ( v12 )
  {
    eventItemIcon = v6->fields.eventItemIcon2;
    goto LABEL_34;
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetInfoButton(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v6; // x20
  ShopEntity_o *Shop_k__BackingField; // x0
  struct ShopEntity_o *v8; // x8
  UICommonButton_o *infoButton; // x20
  unsigned int v10; // w9
  UICommonButton_o *v11; // x1
  bool v12; // w2
  struct ShopEntity_o *v13; // x8

  v6 = this;
  if ( (byte_42EE53F & 1) == 0 )
  {
    this = (ShopBuyItemListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_9405/*"NONE"*/, (_DWORD)item, isInPreparation, method);
    byte_42EE53F = 1;
  }
  if ( !isInPreparation )
  {
    if ( !item )
      goto LABEL_21;
    goto LABEL_9;
  }
  if ( !item )
    goto LABEL_21;
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  if ( Shop_k__BackingField )
  {
    this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut(Shop_k__BackingField, (const MethodInfo *)item);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
LABEL_9:
      v8 = item->fields._Shop_k__BackingField;
      if ( v8 )
      {
        infoButton = v6->fields.infoButton;
        if ( (v8->fields.flag & 0x8000) != 0 )
        {
          v11 = infoButton;
          v12 = 0;
LABEL_20:
          ShopBuyItemListViewItemDraw__SetButtonActive(this, v11, v12, method);
          return;
        }
        v10 = v8->fields.purchaseType - 1;
        if ( v10 < 0x15 && ((0x140009u >> v10) & 1) != 0 )
        {
          this = (ShopBuyItemListViewItemDraw_o *)((unsigned int)&dword_0 + 1);
          goto LABEL_19;
        }
        this = (ShopBuyItemListViewItemDraw_o *)System_String__IsNullOrEmpty(v8->fields.infoMessage, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = 0LL;
LABEL_19:
          v12 = (unsigned __int8)this & 1;
          v11 = infoButton;
          goto LABEL_20;
        }
        v13 = item->fields._Shop_k__BackingField;
        if ( v13 )
        {
          this = (ShopBuyItemListViewItemDraw_o *)System_String__op_Inequality(
                                                    v13->fields.infoMessage,
                                                    (System_String_o *)StringLiteral_9405/*"NONE"*/,
                                                    0LL);
          goto LABEL_19;
        }
      }
LABEL_21:
      sub_B5D69C(this, item);
    }
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetItem(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  ShopBuyItemListViewItemDraw_o *v55; // x0
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x3
  _BOOL8 IsPreparation; // x0
  _BOOL4 v59; // w21
  const MethodInfo *v60; // x3
  ShopBuyItemListViewItemDraw_o *v61; // x0
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x2
  ShopBuyItemListViewItemDraw_o *v64; // x0
  const MethodInfo *v65; // x3
  const MethodInfo *v66; // x2
  bool v67; // w23
  const MethodInfo *v68; // x3
  const MethodInfo *v69; // x1
  UILabel_o *messageTextLabel; // x24
  const MethodInfo *v71; // x5
  const MethodInfo *v72; // x3
  const MethodInfo *v73; // x1
  const MethodInfo *v74; // x3
  int64_t Shop_k__BackingField; // x0
  UnityEngine_Object_o *chocolateSprite; // x23
  _BOOL8 v77; // x0
  const MethodInfo *v78; // x3
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v80; // x1
  ShopBuyItemListViewItemDraw_o *v81; // x0
  const MethodInfo *v82; // x3
  UnityEngine_Object_o *soldOutImage; // x23
  bool v84; // w23
  const MethodInfo *v85; // x2
  ShopEntity_o *v86; // x24
  UILabel_o *textOnMask; // x25
  const MethodInfo *v88; // x3
  const MethodInfo *v89; // x3
  const MethodInfo *v90; // x5
  struct ShopEntity_o *v91; // x8
  UnityEngine_Object_o *priceInfo1; // x22
  const MethodInfo *v93; // x2
  struct ShopEntity_o *v94; // x8
  int32_t payType; // w8
  const MethodInfo *v96; // x3
  ShopBuyItemListViewItemDraw_o *v97; // x0
  const MethodInfo *v98; // x3
  UnityEngine_GameObject_o *v99; // x22
  const MethodInfo *v100; // x1
  struct UnityEngine_GameObject_o *priceInfo2; // x22
  const MethodInfo *v102; // x1
  bool v103; // w1
  const MethodInfo *v104; // x3
  const MethodInfo *v105; // x3
  _BOOL4 v106; // w22
  struct ShopEntity_o *v107; // x8
  _BOOL4 v108; // w23
  _BOOL4 v109; // w8
  struct ShopEntity_o *v110; // x8
  Il2CppObject *v111; // x21
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x22
  struct ShopEntity_o *v113; // x8
  UserShopEntity_o *v114; // x22
  System_String_o **v115; // x8
  System_String_o **v116; // x9
  struct CommonConsumeEntity_array *CommonConsumeEntities_k__BackingField; // x22
  bool v118; // zf
  System_String_o *v119; // x20
  System_String_o *v120; // x0
  struct UILabel_o *freeExchangeConditionNoticeLabel; // x8
  int mWidth; // w8
  struct UISprite_array *freeExchangeConditionNoticeBgSprites; // x21
  int v124; // w9
  int max_length; // w8
  unsigned int v126; // w22
  int32_t v127; // w19
  Il2CppClass **v128; // x8
  UISprite_o *v129; // x20
  __int64 v130; // x0
  const MethodInfo *v131; // [xsp+0h] [xbp-70h]
  const MethodInfo *v132; // [xsp+0h] [xbp-70h]
  bool isNotCommandCodeGet; // [xsp+Ch] [xbp-64h] BYREF
  bool isNotCostumeGet; // [xsp+10h] [xbp-60h] BYREF
  bool isServantHaving; // [xsp+14h] [xbp-5Ch] BYREF
  bool isNotServantHaving; // [xsp+18h] [xbp-58h] BYREF
  bool isNotServantGet; // [xsp+1Ch] [xbp-54h] BYREF
  System_String_o *itemName; // [xsp+20h] [xbp-50h] BYREF
  System_String_o *message; // [xsp+28h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_42EE534 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v13, v14, v15);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&NetworkManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&ShopBuyItemUtility_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_12232/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_19126/*"freeShopCondMessage"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_12318/*"SHOP_PAID_EXCHANGE_CONDITIONS"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_19125/*"freeShopCondId"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_20054/*"info_base"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_1/*""*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_12233/*"SHOP_ACHIEVEMENT_PAID_EXCHANGE_CONDITIONS"*/, v49, v50, v51);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_12291/*"SHOP_FREE_EXCHANGE_CONDITIONS"*/, v52, v53, v54);
    byte_42EE534 = 1;
  }
  itemName = 0LL;
  message = 0LL;
  isNotServantGet = 0;
  isNotServantHaving = 0;
  isServantHaving = 0;
  isNotCostumeGet = 0;
  isNotCommandCodeGet = 0;
  if ( !item )
  {
    ShopBuyItemListViewItemDraw__SetSpriteActive(this, v6->fields.rangeSprite, 0, method);
    ShopBuyItemListViewItemDraw__SetSpriteActive(v97, v6->fields.addRangeSprite, 0, v98);
    return;
  }
  ShopBuyItemListViewItemDraw__SetLabelActive(this, v6->fields.LineText, 0, method);
  ShopBuyItemListViewItemDraw__SetLabelActive(v55, v6->fields.LineText2digit, 0, v56);
  IsPreparation = ShopBuyItemListViewItem__GetIsPreparation(item, &message, &itemName, v57);
  v59 = IsPreparation;
  ShopBuyItemListViewItemDraw__SetSpriteActive(
    (ShopBuyItemListViewItemDraw_o *)IsPreparation,
    v6->fields.rangeSprite,
    mode == 0,
    v60);
  ShopBuyItemListViewItemDraw__SetSpriteActive(v61, v6->fields.addRangeSprite, item->fields.isTerminationSpace, v62);
  ShopBuyItemListViewItemDraw__SetBandSprite(v6, item, v63);
  ShopBuyItemListViewItemDraw__SetButtonActive(v64, v6->fields.infoButton, 0, v65);
  if ( !mode )
    return;
  ShopBuyItemListViewItemDraw__SetBaseSprite(v6, item, v66);
  v67 = v59;
  ShopBuyItemListViewItemDraw__SetItemIcon(v6, item, v59, v68);
  messageTextLabel = v6->fields.messageTextLabel;
  if ( (BYTE3(ShopBuyItemUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
  }
  ShopBuyItemUtility__SetDefaultMessageLabel(messageTextLabel, v69);
  ShopBuyItemListViewItemDraw__SetNameAndMessageText(v6, item, v67, message, itemName, v71);
  ShopBuyItemListViewItemDraw__SetNumText(v6, item, v67, v72);
  Shop_k__BackingField = (int64_t)item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_105;
  ShopBuyItemUtility__SetShopHaveStatusIcon(
    (ShopEntity_o *)Shop_k__BackingField,
    v6->fields.possessionSprite,
    (*(_DWORD *)(Shop_k__BackingField + 44) & 0x4000) != 0,
    v74);
  chocolateSprite = (UnityEngine_Object_o *)v6->fields.chocolateSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v77 = UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL);
  if ( v77 )
  {
    Shop_k__BackingField = (int64_t)v6->fields.chocolateSprite;
    if ( !Shop_k__BackingField )
      goto LABEL_105;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Shop_k__BackingField, 0LL);
    Shop_k__BackingField = ShopBuyItemListViewItem__get_IsChocolateSvtEquip(item, v80);
    if ( !gameObject )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(gameObject, Shop_k__BackingField & 1, 0LL);
  }
  ShopBuyItemListViewItemDraw__SetLabelText(
    (ShopBuyItemListViewItemDraw_o *)v77,
    v6->fields.textOnMask,
    (System_String_o *)StringLiteral_1/*""*/,
    v78);
  ShopBuyItemListViewItemDraw__SetLabelText(v81, v6->fields.prepareTextOnMask, (System_String_o *)StringLiteral_1/*""*/, v82);
  soldOutImage = (UnityEngine_Object_o *)v6->fields.soldOutImage;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(0LL, soldOutImage, 0LL) )
  {
    Shop_k__BackingField = (int64_t)v6->fields.soldOutImage;
    if ( !Shop_k__BackingField )
      goto LABEL_105;
    Shop_k__BackingField = (int64_t)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)Shop_k__BackingField,
                                      0LL);
    if ( !Shop_k__BackingField )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Shop_k__BackingField, 0, 0LL);
  }
  v84 = v59;
  ShopBuyItemListViewItemDraw__SetRestCountText(
    v6,
    item,
    v59,
    &isNotServantGet,
    &isNotServantHaving,
    &isServantHaving,
    &isNotCostumeGet,
    &isNotCommandCodeGet,
    v131);
  ShopBuyItemListViewItemDraw__SetMask(
    v6,
    item,
    v59,
    isNotServantGet,
    isNotServantHaving,
    isServantHaving,
    isNotCostumeGet,
    isNotCommandCodeGet,
    v132);
  v86 = item->fields._Shop_k__BackingField;
  textOnMask = v6->fields.textOnMask;
  if ( (BYTE3(ShopBuyItemUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
  }
  ShopBuyItemUtility__SetAddTextOnMask(v86, textOnMask, v85);
  ShopBuyItemListViewItemDraw__SetInfoButton(v6, item, v84, v88);
  ShopBuyItemListViewItemDraw__SetBaseButton(v6, v84, mode, v89);
  v91 = item->fields._Shop_k__BackingField;
  if ( !v91 )
LABEL_105:
    sub_B5D69C(Shop_k__BackingField, v73);
  ShopBuyItemListViewItemDraw__SetEventEndTime(
    v6,
    item->fields._IsRarePriShopPurchased_k__BackingField,
    (v91->fields.flag & 0x40000) != 0,
    v91->fields.closedAt,
    item->fields._EnterTime_k__BackingField,
    v90);
  priceInfo1 = (UnityEngine_Object_o *)v6->fields.priceInfo1;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(priceInfo1, 0LL, 0LL) )
    return;
  v94 = item->fields._Shop_k__BackingField;
  if ( !v94 )
    goto LABEL_39;
  payType = v94->fields.payType;
  if ( payType == 14 )
  {
    CommonConsumeEntities_k__BackingField = item->fields._CommonConsumeEntities_k__BackingField;
    if ( !CommonConsumeEntities_k__BackingField )
      goto LABEL_44;
    Shop_k__BackingField = (int64_t)v6->fields.priceInfoFree;
    if ( !Shop_k__BackingField )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Shop_k__BackingField, 0, 0LL);
    Shop_k__BackingField = (int64_t)v6->fields.priceInfo1;
    if ( !Shop_k__BackingField )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)Shop_k__BackingField,
      (signed int)CommonConsumeEntities_k__BackingField->max_length < 2,
      0LL);
    Shop_k__BackingField = (int64_t)v6->fields.priceInfo2;
    if ( !Shop_k__BackingField )
      goto LABEL_105;
    v103 = (signed int)CommonConsumeEntities_k__BackingField->max_length > 1;
    goto LABEL_43;
  }
  if ( payType != 13 )
  {
LABEL_39:
    Shop_k__BackingField = (int64_t)v6->fields.priceInfoFree;
    if ( !Shop_k__BackingField )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Shop_k__BackingField, 0, 0LL);
    v99 = v6->fields.priceInfo1;
    Shop_k__BackingField = ShopBuyItemListViewItem__get_ItemCount(item, v100);
    if ( !v99 )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(v99, (int)Shop_k__BackingField < 2, 0LL);
    priceInfo2 = v6->fields.priceInfo2;
    Shop_k__BackingField = ShopBuyItemListViewItem__get_ItemCount(item, v102);
    if ( !priceInfo2 )
      goto LABEL_105;
    v103 = (int)Shop_k__BackingField > 1;
    Shop_k__BackingField = (int64_t)priceInfo2;
LABEL_43:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Shop_k__BackingField, v103, 0LL);
    ShopBuyItemListViewItemDraw__SetPriceIconText(v6, item, v59, v104);
    ShopBuyItemListViewItemDraw__SetEventItemIconText(v6, item, v59, v105);
    goto LABEL_44;
  }
  Shop_k__BackingField = (int64_t)v6->fields.priceInfoFree;
  if ( !Shop_k__BackingField )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Shop_k__BackingField, 1, 0LL);
  Shop_k__BackingField = (int64_t)v6->fields.priceInfo1;
  if ( !Shop_k__BackingField )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Shop_k__BackingField, 0, 0LL);
  Shop_k__BackingField = (int64_t)v6->fields.priceInfo2;
  if ( !Shop_k__BackingField )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Shop_k__BackingField, 0, 0LL);
  ShopBuyItemListViewItemDraw__SetPriceIconText(v6, item, v59, v96);
LABEL_44:
  Shop_k__BackingField = (int64_t)item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_105;
  Shop_k__BackingField = ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)Shop_k__BackingField, 0, v93);
  v106 = 0;
  if ( (Shop_k__BackingField & 1) != 0 )
  {
    Shop_k__BackingField = (int64_t)item->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_105;
    Shop_k__BackingField = ShopEntity__IsSoldOut((ShopEntity_o *)Shop_k__BackingField, v73);
    v106 = (Shop_k__BackingField & 1) == 0;
  }
  v107 = item->fields._Shop_k__BackingField;
  if ( !v107 )
    goto LABEL_105;
  if ( v107->fields.purchaseType == 14 )
  {
    Shop_k__BackingField = ShopEntity__IsEligibleForFreeFeaturesTheCostumeRelease(
                             item->fields._Shop_k__BackingField,
                             v73);
    v107 = item->fields._Shop_k__BackingField;
    if ( !v107 )
      goto LABEL_105;
    v108 = (Shop_k__BackingField & 1) == 0;
  }
  else
  {
    v108 = 0;
  }
  Shop_k__BackingField = (int64_t)v107->fields.script;
  if ( !Shop_k__BackingField )
    goto LABEL_105;
  Shop_k__BackingField = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Shop_k__BackingField,
                           (System_Xml_XmlQualifiedName_o *)StringLiteral_19125/*"freeShopCondId"*/,
                           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( (Shop_k__BackingField & 1) != 0 && (!v106 || !v59) )
  {
    Shop_k__BackingField = (int64_t)item->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_105;
    Shop_k__BackingField = ShopEntity__IsAfterTheFreeShopReleaseDate((ShopEntity_o *)Shop_k__BackingField, v73);
    v109 = (Shop_k__BackingField & 1) == 0;
  }
  else
  {
    v109 = 1;
  }
  if ( v109 || v108 )
    goto LABEL_58;
  v110 = item->fields._Shop_k__BackingField;
  if ( !v110 )
    goto LABEL_105;
  Shop_k__BackingField = (int64_t)v110->fields.script;
  if ( !Shop_k__BackingField )
    goto LABEL_105;
  Shop_k__BackingField = (int64_t)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                    (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Shop_k__BackingField,
                                    (System_Type_o *)StringLiteral_19126/*"freeShopCondMessage"*/,
                                    (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Shop_k__BackingField )
    goto LABEL_105;
  v111 = (Il2CppObject *)(*(__int64 (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Shop_k__BackingField + 360LL))(
                           Shop_k__BackingField,
                           *(_QWORD *)(*(_QWORD *)Shop_k__BackingField + 368LL));
  Shop_k__BackingField = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Shop_k__BackingField )
    goto LABEL_105;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Shop_k__BackingField,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Shop_k__BackingField = NetworkManager__get_UserId(0LL);
  v113 = item->fields._Shop_k__BackingField;
  if ( !v113 )
    goto LABEL_105;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_105;
  Shop_k__BackingField = (int64_t)UserShopMaster__GetEntityDefinitely(
                                    MasterData_WarQuestSelectionMaster,
                                    Shop_k__BackingField,
                                    v113->fields.id,
                                    0LL);
  if ( !item->fields._Shop_k__BackingField )
    goto LABEL_105;
  v114 = (UserShopEntity_o *)Shop_k__BackingField;
  Shop_k__BackingField = ShopEntity__IsFulFilledFreeExchangeCondition(item->fields._Shop_k__BackingField, v73);
  if ( !v114 )
    goto LABEL_105;
  if ( v114->fields.num )
  {
    Shop_k__BackingField = (int64_t)item->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_105;
    if ( !ShopEntity__IsPaidExchange((ShopEntity_o *)Shop_k__BackingField, v73) )
    {
LABEL_58:
      Shop_k__BackingField = (int64_t)v6->fields.freeExchangeConditionNoticeRoot;
      if ( Shop_k__BackingField )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Shop_k__BackingField, 0, 0LL);
        return;
      }
      goto LABEL_105;
    }
    LOBYTE(Shop_k__BackingField) = UserShopEntity__get_IsReturnRarePriShop(v114, 0LL);
    v115 = (System_String_o **)&StringLiteral_12318/*"SHOP_PAID_EXCHANGE_CONDITIONS"*/;
    v116 = (System_String_o **)&StringLiteral_12233/*"SHOP_ACHIEVEMENT_PAID_EXCHANGE_CONDITIONS"*/;
  }
  else
  {
    v115 = (System_String_o **)&StringLiteral_12291/*"SHOP_FREE_EXCHANGE_CONDITIONS"*/;
    v116 = (System_String_o **)&StringLiteral_12232/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/;
  }
  v118 = (Shop_k__BackingField & 1) == 0;
  Shop_k__BackingField = (int64_t)v6->fields.freeExchangeConditionNoticeRoot;
  if ( !v118 )
    v115 = v116;
  if ( !Shop_k__BackingField )
    goto LABEL_105;
  v119 = *v115;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Shop_k__BackingField, 1, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v120 = LocalizationManager__Get(v119, 0LL);
  Shop_k__BackingField = (int64_t)System_String__Format(v120, v111, 0LL);
  if ( !v6->fields.freeExchangeConditionNoticeLabel )
    goto LABEL_105;
  UILabel__set_text(v6->fields.freeExchangeConditionNoticeLabel, (System_String_o *)Shop_k__BackingField, 0LL);
  freeExchangeConditionNoticeLabel = v6->fields.freeExchangeConditionNoticeLabel;
  if ( !freeExchangeConditionNoticeLabel )
    goto LABEL_105;
  mWidth = freeExchangeConditionNoticeLabel->fields.mWidth;
  freeExchangeConditionNoticeBgSprites = v6->fields.freeExchangeConditionNoticeBgSprites;
  v124 = mWidth >= 512 ? 512 : mWidth;
  if ( !freeExchangeConditionNoticeBgSprites )
    goto LABEL_105;
  max_length = freeExchangeConditionNoticeBgSprites->max_length;
  if ( max_length >= 1 )
  {
    v126 = 0;
    v127 = v124 + 16;
    while ( 1 )
    {
      if ( v126 >= max_length )
      {
        v130 = sub_B5D6C8(Shop_k__BackingField);
        sub_B5D668(v130, 0LL);
      }
      v128 = &freeExchangeConditionNoticeBgSprites->obj.klass + (int)v126;
      v129 = (UISprite_o *)v128[4];
      if ( !v129 )
        break;
      UIWidget__set_width((UIWidget_o *)v128[4], v127, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      Shop_k__BackingField = AtlasManager__SetEventUI(v129, (System_String_o *)StringLiteral_20054/*"info_base"*/, 0LL);
      max_length = freeExchangeConditionNoticeBgSprites->max_length;
      if ( (int)++v126 >= max_length )
        return;
    }
    goto LABEL_105;
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetItemIcon(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        const MethodInfo *method)
{
  void *itemIcon; // x0
  const MethodInfo *v8; // x2
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ItemIconComponent_o *v10; // x20
  int32_t v11; // w19
  int32_t v12; // w2
  int32_t imageId; // [xsp+Ch] [xbp-14h] BYREF

  imageId = 0;
  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    goto LABEL_17;
  ItemIconComponent__Clear((ItemIconComponent_o *)itemIcon, 0LL);
  if ( isInPreparation )
  {
    if ( !item )
      goto LABEL_17;
    Shop_k__BackingField = item->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_17;
    if ( (Shop_k__BackingField->fields.flag & 2) != 0 )
    {
      itemIcon = this->fields.itemIcon;
      if ( itemIcon )
      {
        ItemIconComponent__SetItemImage((ItemIconComponent_o *)itemIcon, 8007, 0LL);
        return;
      }
LABEL_17:
      sub_B5D69C(itemIcon, item);
    }
  }
  else if ( !item )
  {
    goto LABEL_17;
  }
  itemIcon = item->fields._Shop_k__BackingField;
  if ( !itemIcon )
    goto LABEL_17;
  itemIcon = (void *)ShopEntity__CheckEquipItem((ShopEntity_o *)itemIcon, &imageId, v8);
  v10 = this->fields.itemIcon;
  if ( ((unsigned __int8)itemIcon & 1) != 0 )
  {
    if ( !v10 )
      goto LABEL_17;
    ItemIconComponent__SetEquipItemImage(v10, imageId, 0LL);
  }
  else
  {
    itemIcon = item->fields._Shop_k__BackingField;
    if ( itemIcon )
    {
      v11 = *((_DWORD *)itemIcon + 12);
      itemIcon = (void *)ShopEntity__get_TargetId((ShopEntity_o *)itemIcon, (const MethodInfo *)item);
      v12 = (int)itemIcon;
      if ( !v10 )
        goto LABEL_17;
    }
    else
    {
      v12 = 0;
      v11 = item->fields.itemEntity != 0LL;
      if ( !v10 )
        goto LABEL_17;
    }
    ItemIconComponent__SetPurchase(v10, v11, v12, imageId, 0LL);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetLabelActive(
        ShopBuyItemListViewItemDraw_o *this,
        UILabel_o *label,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_42EE535 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)label, isActive, method);
    byte_42EE535 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_B5D69C(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetLabelText(
        ShopBuyItemListViewItemDraw_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_42EE536 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)label, (_DWORD)text, method);
    byte_42EE536 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_B5D69C(v6, v7);
    WrapControlText__textAdjust(label, text, label->fields.mFontSize, 0, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewItemDraw__SetMask(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        bool isNotServantGet,
        bool isNotServantHaving,
        bool isServantHaving,
        bool isNotCostumeGet,
        bool isNotCommandCodeGet,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v16; // x19
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  int v23; // w1
  char v24; // w2
  __int64 v25; // x3
  int v26; // w1
  char v27; // w2
  __int64 v28; // x3
  int v29; // w1
  char v30; // w2
  __int64 v31; // x3
  int v32; // w1
  char v33; // w2
  __int64 v34; // x3
  int v35; // w1
  char v36; // w2
  __int64 v37; // x3
  int v38; // w1
  char v39; // w2
  __int64 v40; // x3
  int v41; // w1
  char v42; // w2
  __int64 v43; // x3
  int v44; // w1
  char v45; // w2
  __int64 v46; // x3
  int v47; // w1
  char v48; // w2
  __int64 v49; // x3
  int v50; // w1
  char v51; // w2
  __int64 v52; // x3
  int v53; // w1
  char v54; // w2
  __int64 v55; // x3
  int v56; // w1
  char v57; // w2
  __int64 v58; // x3
  int v59; // w1
  char v60; // w2
  __int64 v61; // x3
  int v62; // w1
  char v63; // w2
  __int64 v64; // x3
  int v65; // w1
  char v66; // w2
  __int64 v67; // x3
  int v68; // w1
  char v69; // w2
  __int64 v70; // x3
  const MethodInfo *v71; // x2
  UILabel_o *v72; // x21
  const MethodInfo *v73; // x3
  UILabel_o *v74; // x1
  System_String_o *v75; // x2
  ShopEntity_o *Shop_k__BackingField; // x0
  _BOOL4 v77; // w23
  UnityEngine_Object_o *anotherBuyable; // x21
  System_Int32_array *AnotherPayItemIds; // x0
  const MethodInfo *v80; // x2
  const MethodInfo *v81; // x3
  UnityEngine_Object_o *anotherPayItemImage; // x21
  UnityEngine_GameObject_o *v83; // x21
  UISprite_o *v84; // x21
  int32_t addRangeSprite; // w22
  UISprite_o *maskSprite; // x1
  bool v87; // w2
  struct ShopEntity_o *v88; // x8
  struct ShopEntity_o *v89; // x8
  const MethodInfo *v90; // x2
  bool v91; // w20
  struct UISprite_o *bandSprite; // x8
  struct ShopEntity_o *v93; // x8
  struct System_Int32_array *targetIds; // x8
  ServantEntity_o *Entity; // x0
  struct ShopEntity_o *v96; // x8
  __int64 *v97; // x8
  const MethodInfo *v98; // x2
  struct ShopEntity_o *v99; // x8
  UILabel_o *v100; // x21
  struct ShopEntity_o *v101; // x8
  ShopReleaseMaster_o *v102; // x21
  struct ShopEntity_o *v103; // x8
  System_String_o *Empty; // x21
  UILabel_o *v105; // x21
  System_String_o *v106; // x0
  const MethodInfo *v107; // x3
  struct ShopEntity_o *v108; // x8
  UILabel_o *textOnMask; // x20
  UnityEngine_Object_o *prepareTextOnMask; // x21
  const MethodInfo *v111; // x1
  UILabel_o *v112; // x19
  System_String_o *v113; // x0
  const MethodInfo *v114; // x3
  __int64 v115; // x0
  int32_t questId; // [xsp+Ch] [xbp-44h] BYREF

  v16 = this;
  if ( (byte_42EE541 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, isInPreparation, isNotServantGet);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMaster_ShopReleaseMaster___, v23, v24, v25);
    sub_B5D5C4(&DataManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v32, v33, v34);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42, v43);
    sub_B5D5C4(&string_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_12284/*"SHOP_CANT_BUY"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_12321/*"SHOP_QUEST_OPEN"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_12319/*"SHOP_QUEST_ALREADY_CLEARED"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_19125/*"freeShopCondId"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_12317/*"SHOP_NOT_RELEASE_SET_ITEM"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_12258/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_1/*""*/, v65, v66, v67);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_12236/*"SHOP_ALREADY_GET"*/, v68, v69, v70);
    byte_42EE541 = 1;
  }
  questId = 0;
  if ( !isInPreparation )
  {
    if ( !item )
      goto LABEL_153;
    Shop_k__BackingField = item->fields._Shop_k__BackingField;
    if ( Shop_k__BackingField
      && ShopEntity__IsSoldOut(Shop_k__BackingField, (const MethodInfo *)item)
      && !item->fields._IsNotHavingShopItemReceived_k__BackingField )
    {
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_153;
      v77 = !ShopEntity__IsAnotherItemBuyable((ShopEntity_o *)this, (const MethodInfo *)item);
    }
    else
    {
      v77 = 0;
    }
    anotherBuyable = (UnityEngine_Object_o *)v16->fields.anotherBuyable;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    AnotherPayItemIds = (System_Int32_array *)UnityEngine_Object__op_Inequality(anotherBuyable, 0LL, 0LL);
    if ( ((unsigned __int8)AnotherPayItemIds & 1) != 0 )
    {
      anotherPayItemImage = (UnityEngine_Object_o *)v16->fields.anotherPayItemImage;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      AnotherPayItemIds = (System_Int32_array *)UnityEngine_Object__op_Inequality(anotherPayItemImage, 0LL, 0LL);
      if ( ((unsigned __int8)AnotherPayItemIds & 1) != 0 )
      {
        this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
        if ( !this )
          goto LABEL_153;
        v83 = v16->fields.anotherBuyable;
        this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsAnotherItemBuyable(
                                                  (ShopEntity_o *)this,
                                                  (const MethodInfo *)item);
        if ( !v83 )
          goto LABEL_153;
        UnityEngine_GameObject__SetActive(v83, (unsigned __int8)this & 1, 0LL);
        this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
        if ( !this )
          goto LABEL_153;
        AnotherPayItemIds = ShopEntity__GetAnotherPayItemIds((ShopEntity_o *)this, (const MethodInfo *)item);
        if ( AnotherPayItemIds )
        {
          this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
          if ( !this )
            goto LABEL_153;
          v84 = v16->fields.anotherPayItemImage;
          this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetAnotherPayItemIds(
                                                    (ShopEntity_o *)this,
                                                    (const MethodInfo *)item);
          if ( !this )
            goto LABEL_153;
          if ( !LODWORD(this->fields.rangeSprite) )
          {
LABEL_154:
            v115 = sub_B5D6C8(this);
            sub_B5D668(v115, 0LL);
          }
          addRangeSprite = (int32_t)this->fields.addRangeSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AnotherPayItemIds = (System_Int32_array *)AtlasManager__SetItem(v84, addRangeSprite, 0LL);
        }
      }
    }
    if ( v77 )
    {
      ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(v16, item, v80);
      maskSprite = v16->fields.maskSprite;
      v87 = 1;
LABEL_47:
      ShopBuyItemListViewItemDraw__SetSpriteActive(
        (ShopBuyItemListViewItemDraw_o *)AnotherPayItemIds,
        maskSprite,
        v87,
        v81);
      return;
    }
    v88 = item->fields._Shop_k__BackingField;
    if ( !v88 || v88->fields.purchaseType != 6 )
    {
      maskSprite = v16->fields.maskSprite;
      v87 = 0;
      goto LABEL_47;
    }
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_153;
    this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
    v89 = item->fields._Shop_k__BackingField;
    if ( !v89 )
      goto LABEL_153;
    if ( !this )
      goto LABEL_153;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isQuestNotClearSet(
                                              (ShopReleaseMaster_o *)this,
                                              v89->fields.id,
                                              &questId,
                                              0LL);
    if ( !item->fields._Shop_k__BackingField )
      goto LABEL_153;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !ShopEntity__isQuestNotClearItemClosed(item->fields._Shop_k__BackingField, 1, v90) )
      {
LABEL_45:
        v91 = 0;
LABEL_130:
        this = (ShopBuyItemListViewItemDraw_o *)v16->fields.maskSprite;
        if ( this )
        {
          this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v91, 0LL);
            return;
          }
        }
        goto LABEL_153;
      }
    }
    else if ( !ShopEntity__isExpireItemClosed(item->fields._Shop_k__BackingField, (const MethodInfo *)item) )
    {
      goto LABEL_45;
    }
    textOnMask = v16->fields.textOnMask;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12321/*"SHOP_QUEST_OPEN"*/, 0LL);
    if ( !textOnMask )
      goto LABEL_153;
    UILabel__set_text(textOnMask, (System_String_o *)this, 0LL);
    v91 = 1;
    goto LABEL_130;
  }
  ShopBuyItemListViewItemDraw__SetSpriteActive(this, v16->fields.maskSprite, 1, (const MethodInfo *)isNotServantGet);
  if ( !item )
    goto LABEL_153;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_153;
  switch ( LODWORD(this->fields.maskSprite) )
  {
    case 4:
      bandSprite = this->fields.bandSprite;
      if ( !bandSprite )
        goto LABEL_153;
      if ( !LODWORD(bandSprite->fields.leftAnchor) )
        goto LABEL_154;
      if ( !LODWORD(bandSprite->fields.rightAnchor) )
        goto LABEL_59;
      this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_153;
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      v93 = item->fields._Shop_k__BackingField;
      if ( !v93 )
        goto LABEL_153;
      targetIds = v93->fields.targetIds;
      if ( !targetIds )
        goto LABEL_153;
      if ( !targetIds->max_length )
        goto LABEL_154;
      if ( !this )
        goto LABEL_153;
      Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                    targetIds->m_Items[1],
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Entity && ServantEntity__get_IsServant(Entity, 0LL) && item->fields._ShopKind_k__BackingField != 6 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v97 = &StringLiteral_12284/*"SHOP_CANT_BUY"*/;
        goto LABEL_140;
      }
LABEL_59:
      if ( isNotServantGet || isNotServantHaving || isServantHaving || isNotCostumeGet || isNotCommandCodeGet )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ShopReleaseMaster___);
        v96 = item->fields._Shop_k__BackingField;
        if ( v96 && this )
        {
          this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                    (ShopReleaseMaster_o *)this,
                                                    v96->fields.id,
                                                    40,
                                                    0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v75 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_141;
          }
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v97 = &StringLiteral_12236/*"SHOP_ALREADY_GET"*/;
LABEL_140:
          this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v97, 0LL);
          v75 = (System_String_o *)this;
LABEL_141:
          v74 = v16->fields.textOnMask;
LABEL_142:
          ShopBuyItemListViewItemDraw__SetLabelText(this, v74, v75, v73);
          goto LABEL_143;
        }
LABEL_153:
        sub_B5D69C(this, item);
      }
LABEL_143:
      prepareTextOnMask = (UnityEngine_Object_o *)v16->fields.prepareTextOnMask;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(prepareTextOnMask, 0LL, 0LL)
        && ShopBuyItemListViewItem__IsPrepareTextOnMask(item, v111) )
      {
        v112 = v16->fields.prepareTextOnMask;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v113 = LocalizationManager__Get((System_String_o *)StringLiteral_12258/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, 0LL);
        ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v113, v112, v113, v114);
      }
      return;
    case 5:
      Empty = string_TypeInfo->static_fields->Empty;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, (const MethodInfo *)item);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12317/*"SHOP_NOT_RELEASE_SET_ITEM"*/, 0LL);
        Empty = (System_String_o *)this;
      }
      v74 = v16->fields.textOnMask;
      v75 = Empty;
      goto LABEL_142;
    case 6:
      if ( !ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)this, 0, v71) )
        goto LABEL_143;
      v105 = v16->fields.textOnMask;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v106 = LocalizationManager__Get((System_String_o *)StringLiteral_12319/*"SHOP_QUEST_ALREADY_CLEARED"*/, 0LL);
      ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v106, v105, v106, v107);
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_153;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, (const MethodInfo *)item);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_143;
      v108 = item->fields._Shop_k__BackingField;
      if ( !v108 )
        goto LABEL_153;
      this = (ShopBuyItemListViewItemDraw_o *)v108->fields.script;
      if ( !this )
        goto LABEL_153;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_19125/*"freeShopCondId"*/,
             (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
LABEL_121:
        ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(v16, item, v98);
      }
      goto LABEL_143;
    case 7:
    case 9:
      goto LABEL_7;
    case 0xE:
      if ( !isNotServantGet && !isNotServantHaving && !isServantHaving && !isNotCostumeGet && !isNotCommandCodeGet )
        goto LABEL_143;
      if ( ShopEntity__GetFreeShopCondId((ShopEntity_o *)this, (const MethodInfo *)item) < 1 )
        goto LABEL_82;
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_153;
      if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, (const MethodInfo *)item) )
        goto LABEL_121;
LABEL_82:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ShopReleaseMaster___);
      v99 = item->fields._Shop_k__BackingField;
      if ( !v99 || !this )
        goto LABEL_153;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                (ShopReleaseMaster_o *)this,
                                                v99->fields.id,
                                                1,
                                                0LL);
      v100 = v16->fields.textOnMask;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12236/*"SHOP_ALREADY_GET"*/, 0LL);
        v75 = (System_String_o *)this;
      }
      else
      {
        v75 = (System_String_o *)StringLiteral_1/*""*/;
      }
      v74 = v100;
      goto LABEL_142;
    default:
      if ( !isNotServantGet && !isNotServantHaving && !isServantHaving && !isNotCostumeGet && !isNotCommandCodeGet )
        goto LABEL_143;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ShopReleaseMaster___);
      v101 = item->fields._Shop_k__BackingField;
      if ( !v101 )
        goto LABEL_153;
      v102 = (ShopReleaseMaster_o *)this;
      if ( !this )
        goto LABEL_153;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                (ShopReleaseMaster_o *)this,
                                                v101->fields.id,
                                                1,
                                                0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_105;
      v103 = item->fields._Shop_k__BackingField;
      if ( !v103 )
        goto LABEL_153;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(v102, v103->fields.id, 40, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_7:
        v72 = v16->fields.textOnMask;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12236/*"SHOP_ALREADY_GET"*/, 0LL);
        v74 = v72;
        v75 = (System_String_o *)this;
      }
      else
      {
LABEL_105:
        v74 = v16->fields.textOnMask;
        v75 = (System_String_o *)StringLiteral_1/*""*/;
      }
      goto LABEL_142;
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetNameAndMessageText(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        System_String_o *preparationMessage,
        System_String_o *preparationItemName,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v10; // x20
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  UILabel_o *messageTextLabel; // x23
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  const MethodInfo *v20; // x3
  struct ShopEntity_o *Shop_k__BackingField; // x8
  bool IsNullOrEmpty; // w0
  const MethodInfo *v23; // x1
  ShopBuyItemListViewItemDraw_o *nameTextLabel; // x20
  System_String_o *NameText; // x19
  System_String_o *v26; // x0
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x3
  struct ShopEntity_o *v29; // x8
  UILabel_o *v30; // x21
  System_String_o *v31; // x22
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  const MethodInfo *v34; // x3
  bool v35; // w0
  const MethodInfo *v36; // x1
  UICrossNarrowLabel_o *v37; // x20
  System_String_o *v38; // x19
  LocalizationManager_c *v39; // x0
  UICrossNarrowLabel_o *v40; // x21
  System_String_o *v41; // x22
  UILabel_o *v42; // x20
  const MethodInfo *v43; // x1
  System_String_o *DetailText; // x0
  System_String_o *v45; // x0
  System_String_o *v46; // x1
  System_String_o *value; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *message; // [xsp+8h] [xbp-38h] BYREF

  v10 = this;
  value = preparationItemName;
  message = preparationMessage;
  if ( (byte_42EE53C & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, isInPreparation, preparationMessage);
    sub_B5D5C4(&StringLiteral_15851/*"[000000]"*/, v11, v12, v13);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_24287/*"？"*/, v14, v15, v16);
    byte_42EE53C = 1;
  }
  if ( isInPreparation )
  {
    messageTextLabel = v10->fields.messageTextLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = LocalizationManager__ReplaceCommonTag(preparationMessage, 0, 0LL);
    v19 = System_String__Concat_44577788((System_String_o *)StringLiteral_15851/*"[000000]"*/, v18, 0LL);
    ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v19, messageTextLabel, v19, v20);
    if ( item )
    {
      Shop_k__BackingField = item->fields._Shop_k__BackingField;
      if ( Shop_k__BackingField )
      {
        if ( (Shop_k__BackingField->fields.flag & 4) != 0 )
        {
          this = (ShopBuyItemListViewItemDraw_o *)v10->fields.nameTextLabel;
          if ( this )
          {
            v46 = (System_String_o *)StringLiteral_24287/*"？"*/;
LABEL_43:
            UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)this, v46, 0LL);
            return;
          }
        }
        else
        {
          IsNullOrEmpty = System_String__IsNullOrEmpty(preparationItemName, 0LL);
          nameTextLabel = (ShopBuyItemListViewItemDraw_o *)v10->fields.nameTextLabel;
          if ( IsNullOrEmpty )
          {
            NameText = ShopBuyItemListViewItem__get_NameText(item, v23);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v26 = NameText;
          }
          else
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v26 = preparationItemName;
          }
          this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v26, 0, 0LL);
          if ( nameTextLabel )
          {
            v46 = (System_String_o *)this;
            this = nameTextLabel;
            goto LABEL_43;
          }
        }
      }
    }
LABEL_49:
    sub_B5D69C(this, item);
  }
  if ( !item )
    goto LABEL_49;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_49;
  if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, (const MethodInfo *)item) )
  {
    v29 = item->fields._Shop_k__BackingField;
    if ( (!v29 || v29->fields.purchaseType != 14)
      && ShopBuyItemListViewItem__TryGetClosedMessage(item, &message, &value, v28) )
    {
      v30 = v10->fields.messageTextLabel;
      v31 = message;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v32 = LocalizationManager__ReplaceCommonTag(v31, 0, 0LL);
      v33 = System_String__Concat_44577788((System_String_o *)StringLiteral_15851/*"[000000]"*/, v32, 0LL);
      ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v33, v30, v33, v34);
      v35 = System_String__IsNullOrEmpty(value, 0LL);
      v37 = v10->fields.nameTextLabel;
      if ( v35 )
      {
        v38 = ShopBuyItemListViewItem__get_NameText(item, v36);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
          || LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          goto LABEL_47;
        }
        v39 = LocalizationManager_TypeInfo;
      }
      else
      {
        v39 = LocalizationManager_TypeInfo;
        v38 = value;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
          || LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          goto LABEL_47;
        }
      }
      j_il2cpp_runtime_class_init_0(v39);
LABEL_47:
      this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v38, 0, 0LL);
      if ( !v37 )
        goto LABEL_49;
      UICrossNarrowLabel__SetCrossNarrowText(v37, (System_String_o *)this, 0LL);
      return;
    }
  }
  v40 = v10->fields.nameTextLabel;
  v41 = ShopBuyItemListViewItem__get_NameText(item, v27);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v41, 0, 0LL);
  if ( !v40 )
    goto LABEL_49;
  UICrossNarrowLabel__SetCrossNarrowText(v40, (System_String_o *)this, 0LL);
  v42 = v10->fields.messageTextLabel;
  DetailText = ShopBuyItemListViewItem__get_DetailText(item, v43);
  v45 = LocalizationManager__ReplaceCommonTag(DetailText, 0, 0LL);
  this = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_44577788(
                                            (System_String_o *)StringLiteral_15851/*"[000000]"*/,
                                            v45,
                                            0LL);
  if ( !v42 )
    goto LABEL_49;
  UILabel__set_text(v42, (System_String_o *)this, 0LL);
}


void __fastcall ShopBuyItemListViewItemDraw__SetNumText(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v6; // x19
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  struct ShopEntity_o *Shop_k__BackingField; // x8
  UILabel_o *numTitleLabel; // x21
  System_String_o *v21; // x0
  const MethodInfo *v22; // x3
  ShopBuyItemListViewItemDraw_o *v23; // x0
  const MethodInfo *v24; // x3
  UILabel_o *numTextLabel; // x21
  int32_t HoldCount; // w0
  System_String_o *NumberFormat; // x0
  const MethodInfo *v28; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v30; // x21
  ShopBuyItemListViewItemDraw_o *v31; // x0
  const MethodInfo *v32; // x3

  v6 = this;
  if ( (byte_42EE53D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)item, isInPreparation, method);
    sub_B5D5C4(&System_Action_int__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_ShopBuyItemListViewItemDraw__SetNumText_b__59_0__, v13, v14, v15);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_12264/*"SHOP_BUY_ITEM_HOLD"*/, v16, v17, v18);
    byte_42EE53D = 1;
  }
  if ( isInPreparation )
  {
    if ( !item )
      goto LABEL_19;
    Shop_k__BackingField = item->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_19;
    if ( (Shop_k__BackingField->fields.flag & 2) != 0 )
      goto LABEL_17;
  }
  else if ( !item )
  {
    goto LABEL_19;
  }
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_19;
  this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__checkHoldDisp((ShopEntity_o *)this, (const MethodInfo *)item);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_17:
    ShopBuyItemListViewItemDraw__SetLabelActive(this, v6->fields.numTitleLabel, 0, method);
    ShopBuyItemListViewItemDraw__SetLabelActive(v31, v6->fields.numTextLabel, 0, v32);
    return;
  }
  ShopBuyItemListViewItemDraw__SetLabelActive(this, v6->fields.numTitleLabel, 1, method);
  numTitleLabel = v6->fields.numTitleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12264/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
  ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v21, numTitleLabel, v21, v22);
  ShopBuyItemListViewItemDraw__SetLabelActive(v23, v6->fields.numTextLabel, 1, v24);
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
LABEL_19:
    sub_B5D69C(this, item);
  numTextLabel = v6->fields.numTextLabel;
  HoldCount = ShopEntity__getHoldCount((ShopEntity_o *)this, (const MethodInfo *)item);
  NumberFormat = LocalizationManager__GetNumberFormat(HoldCount, 0LL);
  ShopBuyItemListViewItemDraw__SetLabelText(
    (ShopBuyItemListViewItemDraw_o *)NumberFormat,
    numTextLabel,
    NumberFormat,
    v28);
  if ( item->fields._ShopKind_k__BackingField == 7 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
    v30 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v30,
      (Il2CppObject *)v6,
      Method_ShopBuyItemListViewItemDraw__SetNumText_b__59_0__,
      (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
    StoneCountRefreshComponent__AttachToGameObject(gameObject, v30, 1, 0LL);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetPriceIconText(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v6; // x19
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  struct ShopEntity_o *Shop_k__BackingField; // x8
  int32_t payType; // w8
  UILabel_o *priceLabelFree; // x19
  struct CommonConsumeEntity_array *CommonConsumeEntities_k__BackingField; // x24
  __int64 v17; // x8
  ShopBuyItemListViewItemDraw_o *priceIconLabel; // x19
  int32_t v19; // w20
  const MethodInfo *v20; // x2
  int32_t v21; // w1
  int32_t v22; // w3
  int32_t v23; // w2
  struct ShopEntity_o *v24; // x8
  System_Int32_array *UserItemCounts; // x0
  UIIconLabel_o *v26; // x22
  System_Int32_array *v27; // x21
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x2
  int32_t v30; // w23
  ShopBuyItemListViewItemDraw_o *priceIconLabel2; // x19
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x2
  ShopEntity_o *v34; // x8
  int32_t v35; // w20
  struct ShopEntity_o *v36; // x8
  UIIconLabel_o *v37; // x22
  ShopBuyItemListViewItemDraw_o *PriceIcon; // x0
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x2
  int32_t v41; // w23
  int32_t sellQp; // w24
  UIIconLabel_o *priceIconLabel1; // x21
  int32_t v44; // w22
  int32_t addRangeSprite; // w23
  int32_t v46; // w21
  struct ItemEntity_o *itemEntity; // x8
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x3
  ShopEntity_o *Price; // x0
  struct ItemEntity_o *v52; // x8
  ShopEntity_o *v53; // x0
  int32_t v54; // w20
  struct ItemEntity_o *v55; // x8
  double v56; // d0
  UILabel_o **p_LineText2digit; // x8
  __int64 v58; // x0

  v6 = this;
  if ( (byte_42EE543 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, isInPreparation, method);
    sub_B5D5C4(&System_Math_TypeInfo, v7, v8, v9);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_12288/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, v10, v11, v12);
    byte_42EE543 = 1;
  }
  if ( !item )
    goto LABEL_86;
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_86;
  payType = Shop_k__BackingField->fields.payType;
  if ( payType == 14 )
  {
    CommonConsumeEntities_k__BackingField = item->fields._CommonConsumeEntities_k__BackingField;
    if ( !CommonConsumeEntities_k__BackingField )
      return;
    v17 = *(_QWORD *)&CommonConsumeEntities_k__BackingField->max_length;
    if ( !v17 )
      return;
    if ( (_DWORD)v17 == 1 )
    {
      if ( !CommonConsumeEntities_k__BackingField->m_Items[0] )
        return;
      priceIconLabel = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
      if ( !CommonConsumeEntities_k__BackingField->max_length )
        goto LABEL_87;
      v19 = (int)this;
      this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[0];
      if ( !this )
        goto LABEL_86;
    }
    else
    {
      if ( (int)v17 < 2 )
        return;
      if ( CommonConsumeEntities_k__BackingField->m_Items[0] )
      {
        priceIconLabel1 = v6->fields.priceIconLabel1;
        this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
        if ( !CommonConsumeEntities_k__BackingField->max_length )
          goto LABEL_87;
        v44 = (int)this;
        this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[0];
        if ( !this )
          goto LABEL_86;
        addRangeSprite = (int32_t)this->fields.addRangeSprite;
        this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0LL);
        if ( !priceIconLabel1 )
          goto LABEL_86;
        UIIconLabel__SetPurchaseDecision(priceIconLabel1, v44, addRangeSprite, (int32_t)this, 0LL);
        if ( CommonConsumeEntities_k__BackingField->max_length <= 1 )
          goto LABEL_87;
      }
      if ( !CommonConsumeEntities_k__BackingField->m_Items[1] )
        return;
      priceIconLabel = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel2;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
      if ( CommonConsumeEntities_k__BackingField->max_length <= 1 )
        goto LABEL_87;
      v19 = (int)this;
      this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[1];
      if ( !this )
        goto LABEL_86;
    }
    v46 = (int32_t)this->fields.addRangeSprite;
    this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0LL);
    if ( !priceIconLabel )
      goto LABEL_86;
    v22 = (int)this;
    this = priceIconLabel;
    v21 = v19;
    v23 = v46;
    goto LABEL_52;
  }
  if ( payType == 13 )
  {
    priceLabelFree = v6->fields.priceLabelFree;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12288/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, 0LL);
    if ( priceLabelFree )
    {
      UILabel__set_text(priceLabelFree, (System_String_o *)this, 0LL);
      return;
    }
LABEL_86:
    sub_B5D69C(this, item);
  }
  this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_ItemCount(item, (const MethodInfo *)item);
  if ( (int)this >= 2 )
  {
    if ( isInPreparation )
    {
      v24 = item->fields._Shop_k__BackingField;
      if ( !v24 )
        goto LABEL_86;
      if ( (v24->fields.flag & 0x40) != 0 )
      {
        this = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel1;
        if ( !this )
          goto LABEL_86;
        UIIconLabel__SetEventQuestion((UIIconLabel_o *)this, 0LL);
        this = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel2;
        if ( !this )
          goto LABEL_86;
        goto LABEL_59;
      }
    }
    UserItemCounts = ShopBuyItemListViewItemDraw__GetUserItemCounts(this, item, v20);
    v26 = v6->fields.priceIconLabel1;
    v27 = UserItemCounts;
    this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v28);
    if ( !item->fields._Shop_k__BackingField )
      goto LABEL_86;
    v30 = (int)this;
    this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrices(item->fields._Shop_k__BackingField, 0, v29);
    if ( !v27 )
      goto LABEL_86;
    if ( v27->max_length )
    {
      if ( !v26 )
        goto LABEL_86;
      UIIconLabel__SetPurchaseDecision(v26, v30, (int32_t)this, v27->m_Items[1], 0LL);
      priceIconLabel2 = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel2;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v32);
      v34 = item->fields._Shop_k__BackingField;
      if ( !v34 )
        goto LABEL_86;
      v35 = (int)this;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrices(v34, 1, v33);
      if ( v27->max_length > 1 )
      {
        if ( !priceIconLabel2 )
          goto LABEL_86;
        v22 = v27->m_Items[2];
        v23 = (int)this;
        this = priceIconLabel2;
        v21 = v35;
        goto LABEL_52;
      }
    }
LABEL_87:
    v58 = sub_B5D6C8(this);
    sub_B5D668(v58, 0LL);
  }
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( this )
  {
    this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, (const MethodInfo *)item);
    if ( ((unsigned __int8)this & 1) != 0 && item->fields._IsNotHavingShopItemReceived_k__BackingField )
    {
      this = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel;
      if ( !this )
        goto LABEL_86;
      v21 = 56;
      v22 = -1;
      v23 = 0;
LABEL_52:
      UIIconLabel__SetPurchaseDecision((UIIconLabel_o *)this, v21, v23, v22, 0LL);
      return;
    }
  }
  if ( isInPreparation )
  {
    v36 = item->fields._Shop_k__BackingField;
    if ( !v36 )
      goto LABEL_86;
    if ( (v36->fields.flag & 0x40) != 0 )
    {
      this = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel;
      if ( !this )
        goto LABEL_86;
LABEL_59:
      UIIconLabel__SetEventQuestion((UIIconLabel_o *)this, 0LL);
      return;
    }
  }
  v37 = v6->fields.priceIconLabel;
  PriceIcon = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
  v41 = (int)PriceIcon;
  if ( item->fields._Shop_k__BackingField )
  {
    PriceIcon = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrice(item->fields._Shop_k__BackingField, v39);
    sellQp = (int)PriceIcon;
  }
  else
  {
    itemEntity = item->fields.itemEntity;
    if ( itemEntity )
      sellQp = itemEntity->fields.sellQp;
    else
      sellQp = 0;
  }
  this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItemDraw__GetUserItemCounts(PriceIcon, item, v40);
  if ( !this )
    goto LABEL_86;
  if ( !LODWORD(this->fields.rangeSprite) )
    goto LABEL_87;
  if ( !v37 )
    goto LABEL_86;
  UIIconLabel__SetPurchaseDecision(v37, v41, sellQp, (int32_t)this->fields.addRangeSprite, 0LL);
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_86;
  if ( ShopEntity__IsSetStrikethrough((ShopEntity_o *)this, isInPreparation, v48) )
  {
    Price = item->fields._Shop_k__BackingField;
    if ( Price )
    {
      Price = (ShopEntity_o *)ShopEntity__GetPrice(Price, v49);
      if ( !(_DWORD)Price )
        goto LABEL_84;
    }
    else
    {
      v52 = item->fields.itemEntity;
      if ( !v52 )
        goto LABEL_84;
      Price = (ShopEntity_o *)(unsigned int)v52->fields.sellQp;
      if ( !(_DWORD)Price )
        goto LABEL_84;
    }
    v53 = item->fields._Shop_k__BackingField;
    if ( v53 )
    {
      v54 = ShopEntity__GetPrice(v53, v49);
    }
    else
    {
      v55 = item->fields.itemEntity;
      if ( v55 )
        v54 = v55->fields.sellQp;
      else
        v54 = 0;
    }
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v56 = log10((double)v54);
    if ( v56 == INFINITY )
      v56 = -v56;
    if ( (int)v56 )
    {
      p_LineText2digit = &v6->fields.LineText2digit;
LABEL_85:
      ShopBuyItemListViewItemDraw__SetLabelActive((ShopBuyItemListViewItemDraw_o *)Price, *p_LineText2digit, 1, v50);
      return;
    }
LABEL_84:
    p_LineText2digit = &v6->fields.LineText;
    goto LABEL_85;
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ShopBuyItemListViewItemDraw_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  struct ShopEntity_o *Shop_k__BackingField; // x8
  unsigned int shopType; // w9
  struct ShopEntity_o *v32; // x8
  struct System_Int32_array *targetIds; // x8
  struct ShopEntity_o *v34; // x8
  System_String_o *v35; // x0
  const MethodInfo *v36; // x3
  bool IsPaidExchange; // w20
  __int64 *v38; // x8
  System_String_o *v39; // x0
  const MethodInfo *v40; // x3
  __int64 v41; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v5 = this;
  if ( (byte_42EE542 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v9, v10, v11);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_12320/*"SHOP_QUEST_FREE_EXCHANGE_CLEARED"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_12322/*"SHOP_QUEST_PAID_EXCHANGE_CLEARED"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_19125/*"freeShopCondId"*/, v24, v25, v26);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_12236/*"SHOP_ALREADY_GET"*/, v27, v28, v29);
    byte_42EE542 = 1;
  }
  entity = 0LL;
  if ( item )
  {
    Shop_k__BackingField = item->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_39;
    shopType = Shop_k__BackingField->fields.shopType;
    if ( shopType > 0x10 || ((1 << shopType) & 0x1000C) == 0 )
      goto LABEL_22;
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      v32 = item->fields._Shop_k__BackingField;
      if ( v32 )
      {
        targetIds = v32->fields.targetIds;
        if ( targetIds )
        {
          if ( !targetIds->max_length )
          {
            v41 = sub_B5D6C8(this);
            sub_B5D668(v41, 0LL);
          }
          if ( this )
          {
            this = (ShopBuyItemListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                      (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                      &entity,
                                                      targetIds->m_Items[1],
                                                      (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v34 = item->fields._Shop_k__BackingField;
              if ( !v34 )
                goto LABEL_39;
              if ( v34->fields.purchaseType == 4 )
              {
                this = (ShopBuyItemListViewItemDraw_o *)entity;
                if ( !entity )
                  goto LABEL_39;
                this = (ShopBuyItemListViewItemDraw_o *)ServantEntity__get_IsServantEquip(
                                                          (ServantEntity_o *)entity,
                                                          0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12236/*"SHOP_ALREADY_GET"*/, 0LL);
                  ShopBuyItemListViewItemDraw__SetLabelText(
                    (ShopBuyItemListViewItemDraw_o *)v35,
                    v5->fields.textOnMask,
                    v35,
                    v36);
                }
              }
            }
            Shop_k__BackingField = item->fields._Shop_k__BackingField;
            if ( Shop_k__BackingField )
            {
LABEL_22:
              this = (ShopBuyItemListViewItemDraw_o *)Shop_k__BackingField->fields.script;
              if ( this )
              {
                if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                        (System_Xml_XmlQualifiedName_o *)StringLiteral_19125/*"freeShopCondId"*/,
                        (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
                  return;
                this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
                if ( this )
                {
                  if ( !ShopEntity__IsAfterTheFreeShopReleaseDate((ShopEntity_o *)this, (const MethodInfo *)item) )
                    return;
                  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
                  if ( this )
                  {
                    IsPaidExchange = ShopEntity__IsPaidExchange((ShopEntity_o *)this, (const MethodInfo *)item);
                    if ( IsPaidExchange )
                    {
                      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v38 = &StringLiteral_12322/*"SHOP_QUEST_PAID_EXCHANGE_CLEARED"*/;
                    }
                    else
                    {
                      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v38 = &StringLiteral_12320/*"SHOP_QUEST_FREE_EXCHANGE_CLEARED"*/;
                    }
                    v39 = LocalizationManager__Get((System_String_o *)*v38, 0LL);
                    ShopBuyItemListViewItemDraw__SetLabelText(
                      (ShopBuyItemListViewItemDraw_o *)v39,
                      v5->fields.textOnMask,
                      v39,
                      v40);
                    this = (ShopBuyItemListViewItemDraw_o *)v5->fields.freeExchangeConditionNoticeRoot;
                    if ( this )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, IsPaidExchange, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_39:
    sub_B5D69C(this, item);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetRestCountText(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        bool *isNotServantGet,
        bool *isNotServantHaving,
        bool *isServantHaving,
        bool *isNotCostumeGet,
        bool *isNotCommandCodeGet,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v16; // x19
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  int v23; // w1
  char v24; // w2
  __int64 v25; // x3
  int v26; // w1
  char v27; // w2
  __int64 v28; // x3
  int v29; // w1
  char v30; // w2
  __int64 v31; // x3
  int v32; // w1
  char v33; // w2
  __int64 v34; // x3
  int v35; // w1
  char v36; // w2
  __int64 v37; // x3
  int v38; // w1
  char v39; // w2
  __int64 v40; // x3
  unsigned int maskSprite; // w8
  const MethodInfo *v42; // x2
  struct ShopEntity_o *Shop_k__BackingField; // x0
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x21
  struct ShopEntity_o *v45; // x8
  struct ShopEntity_o *v46; // x8
  int32_t limitNum; // w9
  UILabel_o *restCountLabel; // x19
  System_String_o *v49; // x20
  int32_t v50; // w0
  struct ShopEntity_o *v51; // x8
  int32_t purchaseType; // w8
  LocalizationManager_c *v53; // x0
  __int64 *v54; // x8
  struct ShopEntity_o *v55; // x8
  ShopReleaseMaster_o *v56; // x26
  struct ShopEntity_o *v57; // x8
  struct ShopEntity_o *v58; // x8
  struct ShopEntity_o *v59; // x8
  bool v60; // w8
  int v61; // w21
  System_String_o *v62; // x0
  const MethodInfo *v63; // x3
  Il2CppObject *NumberFormat; // x0
  struct ShopEntity_o *v65; // x8
  struct ShopEntity_o *v66; // x8

  v16 = this;
  if ( (byte_42EE53E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, (_DWORD)item, isInPreparation, isNotServantGet);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, v17, v18, v19);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&NetworkManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_12268/*"SHOP_BUY_PREPARATION"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_8535/*"LOTTERY_REST_NUM"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_14873/*"UNIT_REST_NONE"*/, v35, v36, v37);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_3476/*"COUNT_INFO"*/, v38, v39, v40);
    byte_42EE53E = 1;
  }
  *isNotServantGet = 0;
  *isNotServantHaving = 0;
  *isServantHaving = 0;
  *isNotCostumeGet = 0;
  *isNotCommandCodeGet = 0;
  if ( !isInPreparation )
  {
    if ( !item )
      goto LABEL_85;
LABEL_11:
    Shop_k__BackingField = item->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_31;
    if ( Shop_k__BackingField->fields.limitNum > 0 )
    {
      this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_85;
      MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)this,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (ShopBuyItemListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
      v45 = item->fields._Shop_k__BackingField;
      if ( !v45 || !MasterData_WarQuestSelectionMaster )
        goto LABEL_85;
      this = (ShopBuyItemListViewItemDraw_o *)UserShopMaster__GetEntityDefinitely(
                                                MasterData_WarQuestSelectionMaster,
                                                (int64_t)this,
                                                v45->fields.baseShopId,
                                                0LL);
      v46 = item->fields._Shop_k__BackingField;
      if ( v46 )
      {
        limitNum = v46->fields.limitNum;
        if ( !this )
          goto LABEL_85;
      }
      else
      {
        limitNum = 0;
        if ( !this )
          goto LABEL_85;
      }
      v61 = limitNum - HIDWORD(this->fields.rangeSprite);
      if ( v61 >= 1 && (!v46 || !ShopEntity__IsSoldOut(item->fields._Shop_k__BackingField, (const MethodInfo *)item)) )
      {
        restCountLabel = v16->fields.restCountLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v49 = LocalizationManager__Get((System_String_o *)StringLiteral_3476/*"COUNT_INFO"*/, 0LL);
        goto LABEL_78;
      }
      if ( !item->fields._IsNotHavingShopItemReceived_k__BackingField )
        goto LABEL_9;
      restCountLabel = v16->fields.restCountLabel;
      v53 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      {
LABEL_55:
        v54 = &StringLiteral_14873/*"UNIT_REST_NONE"*/;
        goto LABEL_56;
      }
LABEL_53:
      if ( !v53->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v53);
      goto LABEL_55;
    }
    if ( ShopEntity__IsSoldOut(Shop_k__BackingField, (const MethodInfo *)item) )
      goto LABEL_9;
    v51 = item->fields._Shop_k__BackingField;
    if ( v51 )
      purchaseType = v51->fields.purchaseType;
    else
LABEL_31:
      purchaseType = item->fields.itemEntity != 0LL;
    restCountLabel = v16->fields.restCountLabel;
    v53 = LocalizationManager_TypeInfo;
    if ( purchaseType == 16 )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v54 = &StringLiteral_8535/*"LOTTERY_REST_NUM"*/;
      goto LABEL_56;
    }
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
      goto LABEL_55;
    goto LABEL_53;
  }
  if ( !item )
    goto LABEL_85;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_85;
  maskSprite = (unsigned int)this->fields.maskSprite;
  if ( maskSprite > 9 || ((1 << maskSprite) & 0x2E0) == 0 )
  {
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_85;
    this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
    v55 = item->fields._Shop_k__BackingField;
    if ( !v55 )
      goto LABEL_85;
    v56 = (ShopReleaseMaster_o *)this;
    if ( !this )
      goto LABEL_85;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(
                                              (ShopReleaseMaster_o *)this,
                                              v55->fields.id,
                                              38,
                                              0LL);
    *isNotServantGet = (unsigned __int8)this & 1;
    v57 = item->fields._Shop_k__BackingField;
    if ( !v57 )
      goto LABEL_85;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v56, v57->fields.id, 41, 0LL);
    *isNotServantHaving = (unsigned __int8)this & 1;
    v58 = item->fields._Shop_k__BackingField;
    if ( !v58 )
      goto LABEL_85;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v56, v58->fields.id, 40, 0LL);
    *isServantHaving = (unsigned __int8)this & 1;
    v59 = item->fields._Shop_k__BackingField;
    if ( !v59 )
      goto LABEL_85;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v56, v59->fields.id, 78, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v60 = 1;
    }
    else
    {
      v65 = item->fields._Shop_k__BackingField;
      if ( !v65 )
        goto LABEL_85;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v56, v65->fields.id, 79, 0LL);
      v60 = (unsigned __int8)this & 1;
    }
    *isNotCostumeGet = v60;
    v66 = item->fields._Shop_k__BackingField;
    if ( !v66 )
      goto LABEL_85;
    *isNotCommandCodeGet = ShopReleaseMaster__isExistCondType(v56, v66->fields.id, 108, 0LL);
    this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
    if ( !this )
      goto LABEL_85;
  }
  if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, (const MethodInfo *)item) )
  {
LABEL_9:
    ShopBuyItemListViewItemDraw__ShowSoldOut(v16, item, v42);
    return;
  }
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
LABEL_85:
    sub_B5D69C(this, item);
  switch ( LODWORD(this->fields.maskSprite) )
  {
    case 5:
    case 7:
    case 9:
      goto LABEL_24;
    case 6:
      if ( !ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)this, 0, v42) )
        goto LABEL_62;
LABEL_24:
      restCountLabel = v16->fields.restCountLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v49 = LocalizationManager__Get((System_String_o *)StringLiteral_3476/*"COUNT_INFO"*/, 0LL);
      v50 = 0;
      goto LABEL_79;
    default:
      if ( *isNotServantGet || *isNotServantHaving || *isServantHaving || *isNotCostumeGet || *isNotCommandCodeGet )
      {
        restCountLabel = v16->fields.restCountLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v49 = LocalizationManager__Get((System_String_o *)StringLiteral_3476/*"COUNT_INFO"*/, 0LL);
        v61 = *isServantHaving || *isNotServantHaving;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
LABEL_78:
        v50 = v61;
LABEL_79:
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v50, 0LL);
        v62 = System_String__Format(v49, NumberFormat, 0LL);
        goto LABEL_80;
      }
LABEL_62:
      if ( ShopBuyItemListViewItem__IsPrepareTextOnMask(item, (const MethodInfo *)item) )
        goto LABEL_11;
      restCountLabel = v16->fields.restCountLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v54 = &StringLiteral_12268/*"SHOP_BUY_PREPARATION"*/;
      break;
  }
LABEL_56:
  v62 = LocalizationManager__Get((System_String_o *)*v54, 0LL);
LABEL_80:
  ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v62, restCountLabel, v62, v63);
}


void __fastcall ShopBuyItemListViewItemDraw__SetSpriteActive(
        ShopBuyItemListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_42EE538 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)sprite, isActive, method);
    byte_42EE538 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_B5D69C(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetSpriteName(
        ShopBuyItemListViewItemDraw_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_42EE539 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)sprite, (_DWORD)spriteName, method);
    byte_42EE539 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !sprite )
      sub_B5D69C(v6, v7);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__ShowSoldOut(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ShopBuyItemListViewItemDraw_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct ShopEntity_o *Shop_k__BackingField; // x8
  UnityEngine_Object_o *soldOutImage; // x20
  UILabel_o *v17; // x19
  System_String_o *v18; // x0
  const MethodInfo *v19; // x3
  UILabel_o *restCountLabel; // x1
  System_String_o *v21; // x2

  v5 = this;
  if ( (byte_42EE549 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_12275/*"SHOP_BUY_SOLD_OUT"*/, v9, v10, v11);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    byte_42EE549 = 1;
  }
  if ( !item )
    goto LABEL_26;
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_26;
  soldOutImage = (UnityEngine_Object_o *)v5->fields.soldOutImage;
  if ( (Shop_k__BackingField->fields.flag & 0x8000) != 0 )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v18 = (System_String_o *)UnityEngine_Object__op_Inequality(0LL, soldOutImage, 0LL);
    if ( ((unsigned __int8)v18 & 1) != 0 )
    {
      this = (ShopBuyItemListViewItemDraw_o *)v5->fields.soldOutImage;
      if ( !this )
        goto LABEL_26;
      this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
      if ( !this )
        goto LABEL_26;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    }
    restCountLabel = v5->fields.restCountLabel;
    v21 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_25;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(0LL, soldOutImage, 0LL) )
    goto LABEL_13;
  this = (ShopBuyItemListViewItemDraw_o *)v5->fields.soldOutImage;
  if ( !this
    || (this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL)) == 0LL )
  {
LABEL_26:
    sub_B5D69C(this, item);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
LABEL_13:
  v17 = v5->fields.restCountLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_12275/*"SHOP_BUY_SOLD_OUT"*/, 0LL);
  restCountLabel = v17;
  v21 = v18;
LABEL_25:
  ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v18, restCountLabel, v21, v19);
}


void __fastcall ShopBuyItemListViewItemDraw___SetNumText_b__59_0(
        ShopBuyItemListViewItemDraw_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UILabel_o *numTextLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v8; // x1

  if ( (byte_42EE54B & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, stoneCount, (_DWORD)method, v3);
    byte_42EE54B = 1;
  }
  numTextLabel = this->fields.numTextLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !numTextLabel )
    sub_B5D69C(NumberFormat, v8);
  UILabel__set_text(numTextLabel, NumberFormat, 0LL);
}