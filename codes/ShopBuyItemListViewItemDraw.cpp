void __fastcall ShopBuyItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_418D48A & 1) == 0 )
  {
    sub_B2C35C(&ShopBuyItemListViewItemDraw_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_19507/*"img_list_bg04"*/, v8);
    byte_418D48A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ShopBuyItemListViewItemDraw_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_19507/*"img_list_bg04"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19507/*"img_list_bg04"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall ShopBuyItemListViewItemDraw___ctor(ShopBuyItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ShopBuyItemListViewItemDraw__Awake(ShopBuyItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct UISprite_o *v12; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct UISprite_o *v20; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_418D473 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418D473 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL);
  if ( !v4 )
  {
    v12 = this->fields.baseSprite;
    if ( !v12
      || (mAtlas = v12->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.baseAtlas,
            (System_Int32_array **)mAtlas,
            v6,
            v7,
            v8,
            v9,
            v10,
            v11),
          (v20 = this->fields.baseSprite) == 0LL) )
    {
      sub_B2C434(v4, v5);
    }
    mSpriteName = v20->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.baseSpriteName,
      (System_Int32_array **)mSpriteName,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
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
  __int64 v4; // x1
  __int64 v5; // x8
  SetItemMaster_o *v6; // x20
  unsigned __int64 v7; // x21
  int rangeSprite; // w8
  unsigned int v9; // w9
  __int64 v10; // x10
  __int64 v12; // x0

  if ( (byte_418D487 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SetItemMaster___, ids);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418D487 = 1;
  }
  if ( !ids )
    goto LABEL_20;
  if ( !*(_QWORD *)&ids->max_length )
    return 0;
  this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_B2C434(this, ids);
  this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SetItemMaster___);
  v5 = *(_QWORD *)&ids->max_length;
  if ( (int)v5 < 1 )
    return 0;
  v6 = (SetItemMaster_o *)this;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v5 )
    {
LABEL_21:
      v12 = sub_B2C460(this);
      sub_B2C400(v12, 0LL);
    }
    if ( !v6 )
      goto LABEL_20;
    this = (ShopBuyItemListViewItemDraw_o *)SetItemMaster__GetList(v6, ids->m_Items[v7 + 1], 0LL);
    if ( !this )
      goto LABEL_20;
    rangeSprite = (int)this->fields.rangeSprite;
    if ( rangeSprite >= 1 )
      break;
LABEL_17:
    LODWORD(v5) = ids->max_length;
    if ( (__int64)++v7 >= (int)v5 )
      return 0;
  }
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= rangeSprite )
      goto LABEL_21;
    v10 = *((_QWORD *)&this->fields.addRangeSprite + (int)v9);
    if ( !v10 )
      goto LABEL_20;
    if ( *(_DWORD *)(v10 + 20) == 7 )
      return 1;
    if ( (int)++v9 >= rangeSprite )
      goto LABEL_17;
  }
}


System_Int32_array *__fastcall ShopBuyItemListViewItemDraw__GetUserItemCounts(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 SelfUserGame; // x0
  const MethodInfo *v8; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x8
  _DWORD *v10; // x21
  System_Int32_array *v11; // x19
  UserItemMaster_o *v12; // x21
  const MethodInfo *v13; // x2
  ShopEntity_o *v14; // x8
  int64_t v15; // x20
  int32_t v16; // w8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v18; // x1
  unsigned int ItemCount; // w0
  const MethodInfo *v20; // x1
  unsigned __int64 v21; // x22
  const MethodInfo *v22; // x2
  int64_t v23; // x23
  unsigned int v25; // w0
  __int64 v26; // x0

  if ( (byte_418D488 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, item);
    sub_B2C35C(&int___TypeInfo, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418D488 = 1;
  }
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !item || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0LL )
LABEL_48:
    sub_B2C434(SelfUserGame, v8);
  v10 = (_DWORD *)SelfUserGame;
  switch ( Shop_k__BackingField->fields.payType )
  {
    case 1:
      SelfUserGame = sub_B2C374(int___TypeInfo, 1LL);
      if ( !v10 )
        goto LABEL_48;
      v11 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_48;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_49;
      v16 = v10[42];
      goto LABEL_45;
    case 2:
      SelfUserGame = sub_B2C374(int___TypeInfo, 1LL);
      if ( !v10 )
        goto LABEL_48;
      v11 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_48;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_49;
      v16 = v10[24];
      goto LABEL_45;
    case 4:
      SelfUserGame = sub_B2C374(int___TypeInfo, 1LL);
      if ( !v10 )
        goto LABEL_48;
      v11 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_48;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_49;
      v16 = v10[44];
      goto LABEL_45;
    case 6:
    case 0xB:
      SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_48;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)SelfUserGame,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
      ItemCount = ShopBuyItemListViewItem__get_ItemCount(item, v18);
      v11 = (System_Int32_array *)sub_B2C374(int___TypeInfo, ItemCount);
      if ( ShopBuyItemListViewItem__get_ItemCount(item, v20) < 1 )
        return v11;
      v21 = 0LL;
      break;
    case 8:
    case 9:
    case 0xC:
      v11 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
      SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_48;
      v12 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)SelfUserGame,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      SelfUserGame = NetworkManager__get_UserId(0LL);
      v14 = item->fields._Shop_k__BackingField;
      if ( !v14 )
        goto LABEL_48;
      v15 = SelfUserGame;
      SelfUserGame = ShopEntity__GetItemIDs(v14, 0, v13);
      if ( !v12 )
        goto LABEL_48;
      SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(v12, v15, SelfUserGame, 0LL);
      if ( !SelfUserGame || !v11 )
        goto LABEL_48;
      if ( !v11->max_length )
        goto LABEL_49;
      v16 = *(_DWORD *)(SelfUserGame + 28);
      goto LABEL_45;
    case 0xA:
      SelfUserGame = sub_B2C374(int___TypeInfo, 1LL);
      if ( !v10 )
        goto LABEL_48;
      v11 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_48;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_49;
      v16 = v10[45];
LABEL_45:
      v11->m_Items[1] = v16;
      return v11;
    default:
      v25 = ShopBuyItemListViewItem__get_ItemCount(item, v8);
      return (System_Int32_array *)sub_B2C374(int___TypeInfo, v25);
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
    v23 = SelfUserGame;
    SelfUserGame = ShopEntity__GetItemIDs(item->fields._Shop_k__BackingField, v21, v22);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_48;
    SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                              MasterData_WarQuestSelectionMaster,
                              v23,
                              SelfUserGame,
                              0LL);
    if ( !SelfUserGame || !v11 )
      goto LABEL_48;
    if ( v21 >= v11->max_length )
    {
LABEL_49:
      v26 = sub_B2C460(SelfUserGame);
      sub_B2C400(v26, 0LL);
    }
    v11->m_Items[++v21] = *(_DWORD *)(SelfUserGame + 28);
  }
  while ( (__int64)v21 < ShopBuyItemListViewItem__get_ItemCount(item, v8) );
  return v11;
}


void __fastcall ShopBuyItemListViewItemDraw__SetBandSprite(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopBuyItemListViewItemDraw_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x8
  UISprite_o *v9; // x1
  UISprite_o **p_bandSprite; // x19
  UISprite_o *v11; // t1
  __int64 *v12; // x8
  UISprite_o *v13; // x1
  bool v14; // w2
  UISprite_o *bandSprite; // t1
  UISprite_o *v16; // t1

  v5 = this;
  if ( (byte_418D47A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19741/*"img_txt_shop"*/, item);
    sub_B2C35C(&StringLiteral_19729/*"img_txt_quest"*/, v6);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B2C35C(&StringLiteral_19663/*"img_txt_bgm"*/, v7);
    byte_418D47A = 1;
  }
  if ( !item || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0LL )
    sub_B2C434(this, item);
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
      v9 = bandSprite;
      v12 = &StringLiteral_19729/*"img_txt_quest"*/;
      goto LABEL_11;
    case 7:
    case 9:
LABEL_6:
      v11 = v5->fields.bandSprite;
      p_bandSprite = &v5->fields.bandSprite;
      v9 = v11;
      v12 = &StringLiteral_19741/*"img_txt_shop"*/;
      goto LABEL_11;
    case 0xF:
      v16 = v5->fields.bandSprite;
      p_bandSprite = &v5->fields.bandSprite;
      v9 = v16;
      v12 = &StringLiteral_19663/*"img_txt_bgm"*/;
LABEL_11:
      ShopBuyItemListViewItemDraw__SetSpriteName(this, v9, (System_String_o *)*v12, v3);
      v13 = *p_bandSprite;
      v14 = 1;
      break;
    default:
LABEL_8:
      v13 = v5->fields.bandSprite;
      v14 = 0;
      break;
  }
  ShopBuyItemListViewItemDraw__SetSpriteActive(this, v13, v14, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewItemDraw__SetBaseButton(
        ShopBuyItemListViewItemDraw_o *this,
        bool isInPreparation,
        int32_t dispMode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *baseButton; // x22
  __int64 v9; // x1
  UnityEngine_Object_o *baseSprite; // x20
  UIWidget_o *v11; // x19
  UnityEngine_Color_o **v12; // x0

  if ( (byte_418D480 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isInPreparation);
    sub_B2C35C(&UICommonButtonColor_TypeInfo, v7);
    byte_418D480 = 1;
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
      v11 = (UIWidget_o *)this->fields.baseSprite;
      v12 = (UnityEngine_Color_o **)UICommonButtonColor_TypeInfo;
      if ( (BYTE3(UICommonButtonColor_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UICommonButtonColor_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
        v12 = (UnityEngine_Color_o **)UICommonButtonColor_TypeInfo;
      }
      if ( v11 )
      {
        UIWidget__set_color(v11, *v12[23], 0LL);
        return;
      }
LABEL_21:
      sub_B2C434(v12, v9);
    }
  }
  else
  {
    v12 = (UnityEngine_Color_o **)this->fields.baseButton;
    if ( !v12 )
      goto LABEL_21;
    (*(void (__fastcall **)(UnityEngine_Color_o **, bool, _QWORD))&(*v12)[24].fields.b)(
      v12,
      !isInPreparation,
      *(_QWORD *)&(*v12)[25].fields.r);
    v12 = (UnityEngine_Color_o **)this->fields.baseButton;
    if ( !v12 )
      goto LABEL_21;
    UICommonButton__SetColliderEnable((UICommonButton_o *)v12, dispMode == 3 || isInPreparation, 1, 0LL);
    v12 = (UnityEngine_Color_o **)this->fields.baseButton;
    if ( !v12 )
      goto LABEL_21;
    (*(void (__fastcall **)(UnityEngine_Color_o **, _QWORD, __int64, _QWORD))&(*v12)[33].fields.b)(
      v12,
      0LL,
      1LL,
      *(_QWORD *)&(*v12)[34].fields.r);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetBaseSprite(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v9; // x0
  __int64 v10; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x0
  int32_t v12; // w0
  int bgImageId; // t1
  UISprite_o *v14; // x21
  System_String_o *v15; // x0
  System_String_o *v16; // x22
  struct ShopEntity_o *v17; // x8
  UISprite_o *v18; // x20
  System_String_o **onPostFill; // x8

  if ( (byte_418D47B & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&ShopBuyItemListViewItemDraw_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_22111/*"shop_item_menu_"*/, v7);
    byte_418D47B = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UISprite_o *)UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) == 0 )
  {
    if ( item )
    {
      Shop_k__BackingField = item->fields._Shop_k__BackingField;
      if ( Shop_k__BackingField )
      {
        bgImageId = Shop_k__BackingField->fields.bgImageId;
        v12 = (_DWORD)Shop_k__BackingField + 124;
        if ( bgImageId >= 1 )
        {
          v14 = this->fields.baseSprite;
          v15 = System_Int32__ToString(v12, 0LL);
          v16 = System_String__Concat_44305532((System_String_o *)StringLiteral_22111/*"shop_item_menu_"*/, v15, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          if ( AtlasManager__SetShopBanner_28452940(v14, v16, 0LL) )
            return;
        }
      }
      v9 = this->fields.baseSprite;
      if ( v9 )
      {
        UISprite__set_atlas(v9, this->fields.baseAtlas, 0LL);
        v17 = item->fields._Shop_k__BackingField;
        if ( v17 )
        {
          v18 = this->fields.baseSprite;
          if ( v17->fields.shopType == 9 )
          {
            v9 = (UISprite_o *)ShopBuyItemListViewItemDraw_TypeInfo;
            if ( (BYTE3(ShopBuyItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ShopBuyItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ShopBuyItemListViewItemDraw_TypeInfo);
              v9 = (UISprite_o *)ShopBuyItemListViewItemDraw_TypeInfo;
            }
            onPostFill = (System_String_o **)v9->fields.onPostFill;
            if ( !v18 )
              goto LABEL_25;
          }
          else
          {
            onPostFill = &this->fields.baseSpriteName;
            if ( !v18 )
              goto LABEL_25;
          }
          UISprite__set_spriteName(v18, *onPostFill, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_B2C434(v9, v10);
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

  if ( (byte_418D477 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, button);
    byte_418D477 = 1;
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
      sub_B2C434(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


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

  if ( (byte_418D484 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, itemIcon);
    byte_418D484 = 1;
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
          sub_B2C434(IsAp, v11);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewItemDraw__SetEventEndTime(
        ShopBuyItemListViewItemDraw_o *this,
        bool isRarePriShopPurchased,
        bool isIndefinitePeriodShowable,
        int64_t activeTime,
        int64_t enterTime,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  struct UILabel_o *v13; // x21
  System_String_o *RestTime2; // x0
  const MethodInfo *v15; // x3
  struct UILabel_o *restTimeLabel; // x19
  UILabel_o *v17; // x1

  if ( (byte_418D486 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, isRarePriShopPurchased);
    sub_B2C35C(&StringLiteral_12164/*"SHOP_INDEFINITE_PERIOD"*/, v11);
    sub_B2C35C(&StringLiteral_13378/*"TIME_REST2_NONE"*/, v12);
    byte_418D486 = 1;
  }
  if ( activeTime <= 0 )
  {
    restTimeLabel = this->fields.restTimeLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    RestTime2 = LocalizationManager__Get((System_String_o *)StringLiteral_13378/*"TIME_REST2_NONE"*/, 0LL);
    v17 = restTimeLabel;
  }
  else
  {
    v13 = this->fields.restTimeLabel;
    if ( isRarePriShopPurchased || isIndefinitePeriodShowable )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      RestTime2 = LocalizationManager__Get((System_String_o *)StringLiteral_12164/*"SHOP_INDEFINITE_PERIOD"*/, 0LL);
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
    v17 = v13;
  }
  ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)RestTime2, v17, RestTime2, v15);
}


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

  if ( (byte_418D485 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, eventItemIcon);
    byte_418D485 = 1;
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
      sub_B2C434(v8, v9);
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
    sub_B2C434(this, item);
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
      v24 = sub_B2C460(this);
      sub_B2C400(v24, 0LL);
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
  if ( (byte_418D47F & 1) == 0 )
  {
    this = (ShopBuyItemListViewItemDraw_o *)sub_B2C35C(&StringLiteral_9310/*"NONE"*/, item);
    byte_418D47F = 1;
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
                                                    (System_String_o *)StringLiteral_9310/*"NONE"*/,
                                                    0LL);
          goto LABEL_19;
        }
      }
LABEL_21:
      sub_B2C434(this, item);
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
  ShopBuyItemListViewItemDraw_o *v23; // x0
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  _BOOL8 IsPreparation; // x0
  _BOOL4 v27; // w21
  const MethodInfo *v28; // x3
  ShopBuyItemListViewItemDraw_o *v29; // x0
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x2
  ShopBuyItemListViewItemDraw_o *v32; // x0
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x2
  bool v35; // w23
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x1
  UILabel_o *messageTextLabel; // x24
  const MethodInfo *v39; // x5
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x3
  int64_t Shop_k__BackingField; // x0
  UnityEngine_Object_o *chocolateSprite; // x23
  _BOOL8 v45; // x0
  const MethodInfo *v46; // x3
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v48; // x1
  ShopBuyItemListViewItemDraw_o *v49; // x0
  const MethodInfo *v50; // x3
  UnityEngine_Object_o *soldOutImage; // x23
  bool v52; // w23
  const MethodInfo *v53; // x2
  ShopEntity_o *v54; // x24
  UILabel_o *textOnMask; // x25
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x5
  struct ShopEntity_o *v59; // x8
  UnityEngine_Object_o *priceInfo1; // x22
  const MethodInfo *v61; // x2
  struct ShopEntity_o *v62; // x8
  int32_t payType; // w8
  const MethodInfo *v64; // x3
  ShopBuyItemListViewItemDraw_o *v65; // x0
  const MethodInfo *v66; // x3
  UnityEngine_GameObject_o *v67; // x22
  const MethodInfo *v68; // x1
  struct UnityEngine_GameObject_o *priceInfo2; // x22
  const MethodInfo *v70; // x1
  bool v71; // w1
  const MethodInfo *v72; // x3
  const MethodInfo *v73; // x3
  _BOOL4 v74; // w22
  struct ShopEntity_o *v75; // x8
  _BOOL4 v76; // w23
  _BOOL4 v77; // w8
  struct ShopEntity_o *v78; // x8
  Il2CppObject *v79; // x21
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x22
  struct ShopEntity_o *v81; // x8
  UserShopEntity_o *v82; // x22
  System_String_o **v83; // x8
  System_String_o **v84; // x9
  struct CommonConsumeEntity_array *CommonConsumeEntities_k__BackingField; // x22
  bool v86; // zf
  System_String_o *v87; // x20
  System_String_o *v88; // x0
  struct UILabel_o *freeExchangeConditionNoticeLabel; // x8
  int mWidth; // w8
  struct UISprite_array *freeExchangeConditionNoticeBgSprites; // x21
  int v92; // w9
  int max_length; // w8
  unsigned int v94; // w22
  int32_t v95; // w19
  Il2CppClass **v96; // x8
  UISprite_o *v97; // x20
  __int64 v98; // x0
  const MethodInfo *v99; // [xsp+0h] [xbp-70h]
  const MethodInfo *v100; // [xsp+0h] [xbp-70h]
  bool isNotCommandCodeGet; // [xsp+Ch] [xbp-64h] BYREF
  bool isNotCostumeGet; // [xsp+10h] [xbp-60h] BYREF
  bool isServantHaving; // [xsp+14h] [xbp-5Ch] BYREF
  bool isNotServantHaving; // [xsp+18h] [xbp-58h] BYREF
  bool isNotServantGet; // [xsp+1Ch] [xbp-54h] BYREF
  System_String_o *itemName; // [xsp+20h] [xbp-50h] BYREF
  System_String_o *message; // [xsp+28h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_418D474 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserShopMaster___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&NetworkManager_TypeInfo, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&ShopBuyItemUtility_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&StringLiteral_12085/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/, v15);
    sub_B2C35C(&StringLiteral_18888/*"freeShopCondMessage"*/, v16);
    sub_B2C35C(&StringLiteral_12171/*"SHOP_PAID_EXCHANGE_CONDITIONS"*/, v17);
    sub_B2C35C(&StringLiteral_18887/*"freeShopCondId"*/, v18);
    sub_B2C35C(&StringLiteral_19803/*"info_base"*/, v19);
    sub_B2C35C(&StringLiteral_1/*""*/, v20);
    sub_B2C35C(&StringLiteral_12086/*"SHOP_ACHIEVEMENT_PAID_EXCHANGE_CONDITIONS"*/, v21);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B2C35C(&StringLiteral_12144/*"SHOP_FREE_EXCHANGE_CONDITIONS"*/, v22);
    byte_418D474 = 1;
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
    ShopBuyItemListViewItemDraw__SetSpriteActive(v65, v6->fields.addRangeSprite, 0, v66);
    return;
  }
  ShopBuyItemListViewItemDraw__SetLabelActive(this, v6->fields.LineText, 0, method);
  ShopBuyItemListViewItemDraw__SetLabelActive(v23, v6->fields.LineText2digit, 0, v24);
  IsPreparation = ShopBuyItemListViewItem__GetIsPreparation(item, &message, &itemName, v25);
  v27 = IsPreparation;
  ShopBuyItemListViewItemDraw__SetSpriteActive(
    (ShopBuyItemListViewItemDraw_o *)IsPreparation,
    v6->fields.rangeSprite,
    mode == 0,
    v28);
  ShopBuyItemListViewItemDraw__SetSpriteActive(v29, v6->fields.addRangeSprite, item->fields.isTerminationSpace, v30);
  ShopBuyItemListViewItemDraw__SetBandSprite(v6, item, v31);
  ShopBuyItemListViewItemDraw__SetButtonActive(v32, v6->fields.infoButton, 0, v33);
  if ( !mode )
    return;
  ShopBuyItemListViewItemDraw__SetBaseSprite(v6, item, v34);
  v35 = v27;
  ShopBuyItemListViewItemDraw__SetItemIcon(v6, item, v27, v36);
  messageTextLabel = v6->fields.messageTextLabel;
  if ( (BYTE3(ShopBuyItemUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
  }
  ShopBuyItemUtility__SetDefaultMessageLabel(messageTextLabel, v37);
  ShopBuyItemListViewItemDraw__SetNameAndMessageText(v6, item, v35, message, itemName, v39);
  ShopBuyItemListViewItemDraw__SetNumText(v6, item, v35, v40);
  Shop_k__BackingField = (int64_t)item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_105;
  ShopBuyItemUtility__SetShopHaveStatusIcon(
    (ShopEntity_o *)Shop_k__BackingField,
    v6->fields.possessionSprite,
    (*(_DWORD *)(Shop_k__BackingField + 44) & 0x4000) != 0,
    v42);
  chocolateSprite = (UnityEngine_Object_o *)v6->fields.chocolateSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v45 = UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL);
  if ( v45 )
  {
    Shop_k__BackingField = (int64_t)v6->fields.chocolateSprite;
    if ( !Shop_k__BackingField )
      goto LABEL_105;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Shop_k__BackingField, 0LL);
    Shop_k__BackingField = ShopBuyItemListViewItem__get_IsChocolateSvtEquip(item, v48);
    if ( !gameObject )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(gameObject, Shop_k__BackingField & 1, 0LL);
  }
  ShopBuyItemListViewItemDraw__SetLabelText(
    (ShopBuyItemListViewItemDraw_o *)v45,
    v6->fields.textOnMask,
    (System_String_o *)StringLiteral_1/*""*/,
    v46);
  ShopBuyItemListViewItemDraw__SetLabelText(v49, v6->fields.prepareTextOnMask, (System_String_o *)StringLiteral_1/*""*/, v50);
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
  v52 = v27;
  ShopBuyItemListViewItemDraw__SetRestCountText(
    v6,
    item,
    v27,
    &isNotServantGet,
    &isNotServantHaving,
    &isServantHaving,
    &isNotCostumeGet,
    &isNotCommandCodeGet,
    v99);
  ShopBuyItemListViewItemDraw__SetMask(
    v6,
    item,
    v27,
    isNotServantGet,
    isNotServantHaving,
    isServantHaving,
    isNotCostumeGet,
    isNotCommandCodeGet,
    v100);
  v54 = item->fields._Shop_k__BackingField;
  textOnMask = v6->fields.textOnMask;
  if ( (BYTE3(ShopBuyItemUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
  }
  ShopBuyItemUtility__SetAddTextOnMask(v54, textOnMask, v53);
  ShopBuyItemListViewItemDraw__SetInfoButton(v6, item, v52, v56);
  ShopBuyItemListViewItemDraw__SetBaseButton(v6, v52, mode, v57);
  v59 = item->fields._Shop_k__BackingField;
  if ( !v59 )
LABEL_105:
    sub_B2C434(Shop_k__BackingField, v41);
  ShopBuyItemListViewItemDraw__SetEventEndTime(
    v6,
    item->fields._IsRarePriShopPurchased_k__BackingField,
    (v59->fields.flag & 0x40000) != 0,
    v59->fields.closedAt,
    item->fields._EnterTime_k__BackingField,
    v58);
  priceInfo1 = (UnityEngine_Object_o *)v6->fields.priceInfo1;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(priceInfo1, 0LL, 0LL) )
    return;
  v62 = item->fields._Shop_k__BackingField;
  if ( !v62 )
    goto LABEL_39;
  payType = v62->fields.payType;
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
    v71 = (signed int)CommonConsumeEntities_k__BackingField->max_length > 1;
    goto LABEL_43;
  }
  if ( payType != 13 )
  {
LABEL_39:
    Shop_k__BackingField = (int64_t)v6->fields.priceInfoFree;
    if ( !Shop_k__BackingField )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Shop_k__BackingField, 0, 0LL);
    v67 = v6->fields.priceInfo1;
    Shop_k__BackingField = ShopBuyItemListViewItem__get_ItemCount(item, v68);
    if ( !v67 )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(v67, (int)Shop_k__BackingField < 2, 0LL);
    priceInfo2 = v6->fields.priceInfo2;
    Shop_k__BackingField = ShopBuyItemListViewItem__get_ItemCount(item, v70);
    if ( !priceInfo2 )
      goto LABEL_105;
    v71 = (int)Shop_k__BackingField > 1;
    Shop_k__BackingField = (int64_t)priceInfo2;
LABEL_43:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Shop_k__BackingField, v71, 0LL);
    ShopBuyItemListViewItemDraw__SetPriceIconText(v6, item, v27, v72);
    ShopBuyItemListViewItemDraw__SetEventItemIconText(v6, item, v27, v73);
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
  ShopBuyItemListViewItemDraw__SetPriceIconText(v6, item, v27, v64);
LABEL_44:
  Shop_k__BackingField = (int64_t)item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_105;
  Shop_k__BackingField = ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)Shop_k__BackingField, 0, v61);
  v74 = 0;
  if ( (Shop_k__BackingField & 1) != 0 )
  {
    Shop_k__BackingField = (int64_t)item->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_105;
    Shop_k__BackingField = ShopEntity__IsSoldOut((ShopEntity_o *)Shop_k__BackingField, v41);
    v74 = (Shop_k__BackingField & 1) == 0;
  }
  v75 = item->fields._Shop_k__BackingField;
  if ( !v75 )
    goto LABEL_105;
  if ( v75->fields.purchaseType == 14 )
  {
    Shop_k__BackingField = ShopEntity__IsEligibleForFreeFeaturesTheCostumeRelease(
                             item->fields._Shop_k__BackingField,
                             v41);
    v75 = item->fields._Shop_k__BackingField;
    if ( !v75 )
      goto LABEL_105;
    v76 = (Shop_k__BackingField & 1) == 0;
  }
  else
  {
    v76 = 0;
  }
  Shop_k__BackingField = (int64_t)v75->fields.script;
  if ( !Shop_k__BackingField )
    goto LABEL_105;
  Shop_k__BackingField = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Shop_k__BackingField,
                           (System_Xml_XmlQualifiedName_o *)StringLiteral_18887/*"freeShopCondId"*/,
                           (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( (Shop_k__BackingField & 1) != 0 && (!v74 || !v27) )
  {
    Shop_k__BackingField = (int64_t)item->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_105;
    Shop_k__BackingField = ShopEntity__IsAfterTheFreeShopReleaseDate((ShopEntity_o *)Shop_k__BackingField, v41);
    v77 = (Shop_k__BackingField & 1) == 0;
  }
  else
  {
    v77 = 1;
  }
  if ( v77 || v76 )
    goto LABEL_58;
  v78 = item->fields._Shop_k__BackingField;
  if ( !v78 )
    goto LABEL_105;
  Shop_k__BackingField = (int64_t)v78->fields.script;
  if ( !Shop_k__BackingField )
    goto LABEL_105;
  Shop_k__BackingField = (int64_t)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                    (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Shop_k__BackingField,
                                    (System_Type_o *)StringLiteral_18888/*"freeShopCondMessage"*/,
                                    (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Shop_k__BackingField )
    goto LABEL_105;
  v79 = (Il2CppObject *)(*(__int64 (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Shop_k__BackingField + 360LL))(
                          Shop_k__BackingField,
                          *(_QWORD *)(*(_QWORD *)Shop_k__BackingField + 368LL));
  Shop_k__BackingField = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Shop_k__BackingField )
    goto LABEL_105;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Shop_k__BackingField,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Shop_k__BackingField = NetworkManager__get_UserId(0LL);
  v81 = item->fields._Shop_k__BackingField;
  if ( !v81 )
    goto LABEL_105;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_105;
  Shop_k__BackingField = (int64_t)UserShopMaster__GetEntityDefinitely(
                                    MasterData_WarQuestSelectionMaster,
                                    Shop_k__BackingField,
                                    v81->fields.id,
                                    0LL);
  if ( !item->fields._Shop_k__BackingField )
    goto LABEL_105;
  v82 = (UserShopEntity_o *)Shop_k__BackingField;
  Shop_k__BackingField = ShopEntity__IsFulFilledFreeExchangeCondition(item->fields._Shop_k__BackingField, v41);
  if ( !v82 )
    goto LABEL_105;
  if ( v82->fields.num )
  {
    Shop_k__BackingField = (int64_t)item->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_105;
    if ( !ShopEntity__IsPaidExchange((ShopEntity_o *)Shop_k__BackingField, v41) )
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
    LOBYTE(Shop_k__BackingField) = UserShopEntity__get_IsReturnRarePriShop(v82, 0LL);
    v83 = (System_String_o **)&StringLiteral_12171/*"SHOP_PAID_EXCHANGE_CONDITIONS"*/;
    v84 = (System_String_o **)&StringLiteral_12086/*"SHOP_ACHIEVEMENT_PAID_EXCHANGE_CONDITIONS"*/;
  }
  else
  {
    v83 = (System_String_o **)&StringLiteral_12144/*"SHOP_FREE_EXCHANGE_CONDITIONS"*/;
    v84 = (System_String_o **)&StringLiteral_12085/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/;
  }
  v86 = (Shop_k__BackingField & 1) == 0;
  Shop_k__BackingField = (int64_t)v6->fields.freeExchangeConditionNoticeRoot;
  if ( !v86 )
    v83 = v84;
  if ( !Shop_k__BackingField )
    goto LABEL_105;
  v87 = *v83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Shop_k__BackingField, 1, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v88 = LocalizationManager__Get(v87, 0LL);
  Shop_k__BackingField = (int64_t)System_String__Format(v88, v79, 0LL);
  if ( !v6->fields.freeExchangeConditionNoticeLabel )
    goto LABEL_105;
  UILabel__set_text(v6->fields.freeExchangeConditionNoticeLabel, (System_String_o *)Shop_k__BackingField, 0LL);
  freeExchangeConditionNoticeLabel = v6->fields.freeExchangeConditionNoticeLabel;
  if ( !freeExchangeConditionNoticeLabel )
    goto LABEL_105;
  mWidth = freeExchangeConditionNoticeLabel->fields.mWidth;
  freeExchangeConditionNoticeBgSprites = v6->fields.freeExchangeConditionNoticeBgSprites;
  v92 = mWidth >= 512 ? 512 : mWidth;
  if ( !freeExchangeConditionNoticeBgSprites )
    goto LABEL_105;
  max_length = freeExchangeConditionNoticeBgSprites->max_length;
  if ( max_length >= 1 )
  {
    v94 = 0;
    v95 = v92 + 16;
    while ( 1 )
    {
      if ( v94 >= max_length )
      {
        v98 = sub_B2C460(Shop_k__BackingField);
        sub_B2C400(v98, 0LL);
      }
      v96 = &freeExchangeConditionNoticeBgSprites->obj.klass + (int)v94;
      v97 = (UISprite_o *)v96[4];
      if ( !v97 )
        break;
      UIWidget__set_width((UIWidget_o *)v96[4], v95, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      Shop_k__BackingField = AtlasManager__SetEventUI(v97, (System_String_o *)StringLiteral_19803/*"info_base"*/, 0LL);
      max_length = freeExchangeConditionNoticeBgSprites->max_length;
      if ( (int)++v94 >= max_length )
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
      sub_B2C434(itemIcon, item);
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

  if ( (byte_418D475 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, label);
    byte_418D475 = 1;
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
      sub_B2C434(gameObject, v7);
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

  if ( (byte_418D476 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, label);
    byte_418D476 = 1;
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
      sub_B2C434(v6, v7);
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
  const MethodInfo *v34; // x2
  UILabel_o *v35; // x21
  __int64 *v36; // x8
  ShopEntity_o *Shop_k__BackingField; // x0
  _BOOL4 v38; // w23
  UnityEngine_Object_o *anotherBuyable; // x21
  System_Int32_array *AnotherPayItemIds; // x0
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x3
  UnityEngine_Object_o *anotherPayItemImage; // x21
  UnityEngine_GameObject_o *v44; // x21
  UISprite_o *v45; // x21
  int32_t addRangeSprite; // w22
  UISprite_o *maskSprite; // x1
  bool v48; // w2
  struct ShopEntity_o *v49; // x8
  struct ShopEntity_o *v50; // x8
  const MethodInfo *v51; // x2
  bool v52; // w20
  struct UISprite_o *bandSprite; // x8
  struct ShopEntity_o *v54; // x8
  struct System_Int32_array *targetIds; // x8
  ServantEntity_o *Entity; // x0
  struct ShopEntity_o *v57; // x8
  const MethodInfo *v58; // x3
  __int64 *v59; // x8
  const MethodInfo *v60; // x2
  struct ShopEntity_o *v61; // x8
  UILabel_o *v62; // x21
  System_String_o *v63; // x2
  struct ShopEntity_o *v64; // x8
  ShopReleaseMaster_o *v65; // x21
  struct ShopEntity_o *v66; // x8
  UILabel_o *v67; // x1
  UnityEngine_Object_o *prepareTextOnMask; // x21
  const MethodInfo *v69; // x1
  UILabel_o *v70; // x19
  System_String_o *v71; // x0
  const MethodInfo *v72; // x3
  UILabel_o *v73; // x21
  System_String_o *v74; // x0
  const MethodInfo *v75; // x3
  struct ShopEntity_o *v76; // x8
  UILabel_o *textOnMask; // x20
  __int64 v78; // x0
  int32_t questId; // [xsp+Ch] [xbp-44h] BYREF

  v16 = this;
  if ( (byte_418D481 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMaster_ShopReleaseMaster___, v19);
    sub_B2C35C(&DataManager_TypeInfo, v20);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v22);
    sub_B2C35C(&LocalizationManager_TypeInfo, v23);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v24);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B2C35C(&StringLiteral_12137/*"SHOP_CANT_BUY"*/, v26);
    sub_B2C35C(&StringLiteral_12174/*"SHOP_QUEST_OPEN"*/, v27);
    sub_B2C35C(&StringLiteral_12172/*"SHOP_QUEST_ALREADY_CLEARED"*/, v28);
    sub_B2C35C(&StringLiteral_18887/*"freeShopCondId"*/, v29);
    sub_B2C35C(&StringLiteral_12170/*"SHOP_NOT_RELEASE_SET_ITEM"*/, v30);
    sub_B2C35C(&StringLiteral_12111/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, v31);
    sub_B2C35C(&StringLiteral_1/*""*/, v32);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B2C35C(&StringLiteral_12089/*"SHOP_ALREADY_GET"*/, v33);
    byte_418D481 = 1;
  }
  questId = 0;
  if ( !isInPreparation )
  {
    if ( !item )
      goto LABEL_152;
    Shop_k__BackingField = item->fields._Shop_k__BackingField;
    if ( Shop_k__BackingField
      && ShopEntity__IsSoldOut(Shop_k__BackingField, (const MethodInfo *)item)
      && !item->fields._IsNotHavingShopItemReceived_k__BackingField )
    {
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_152;
      v38 = !ShopEntity__IsAnotherItemBuyable((ShopEntity_o *)this, (const MethodInfo *)item);
    }
    else
    {
      v38 = 0;
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
          goto LABEL_152;
        v44 = v16->fields.anotherBuyable;
        this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsAnotherItemBuyable(
                                                  (ShopEntity_o *)this,
                                                  (const MethodInfo *)item);
        if ( !v44 )
          goto LABEL_152;
        UnityEngine_GameObject__SetActive(v44, (unsigned __int8)this & 1, 0LL);
        this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
        if ( !this )
          goto LABEL_152;
        AnotherPayItemIds = ShopEntity__GetAnotherPayItemIds((ShopEntity_o *)this, (const MethodInfo *)item);
        if ( AnotherPayItemIds )
        {
          this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
          if ( !this )
            goto LABEL_152;
          v45 = v16->fields.anotherPayItemImage;
          this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetAnotherPayItemIds(
                                                    (ShopEntity_o *)this,
                                                    (const MethodInfo *)item);
          if ( !this )
            goto LABEL_152;
          if ( !LODWORD(this->fields.rangeSprite) )
          {
LABEL_153:
            v78 = sub_B2C460(this);
            sub_B2C400(v78, 0LL);
          }
          addRangeSprite = (int32_t)this->fields.addRangeSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AnotherPayItemIds = (System_Int32_array *)AtlasManager__SetItem(v45, addRangeSprite, 0LL);
        }
      }
    }
    if ( v38 )
    {
      ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(v16, item, v41);
      maskSprite = v16->fields.maskSprite;
      v48 = 1;
LABEL_47:
      ShopBuyItemListViewItemDraw__SetSpriteActive(
        (ShopBuyItemListViewItemDraw_o *)AnotherPayItemIds,
        maskSprite,
        v48,
        v42);
      return;
    }
    v49 = item->fields._Shop_k__BackingField;
    if ( !v49 || v49->fields.purchaseType != 6 )
    {
      maskSprite = v16->fields.maskSprite;
      v48 = 0;
      goto LABEL_47;
    }
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_152;
    this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
    v50 = item->fields._Shop_k__BackingField;
    if ( !v50 )
      goto LABEL_152;
    if ( !this )
      goto LABEL_152;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isQuestNotClearSet(
                                              (ShopReleaseMaster_o *)this,
                                              v50->fields.id,
                                              &questId,
                                              0LL);
    if ( !item->fields._Shop_k__BackingField )
      goto LABEL_152;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !ShopEntity__isQuestNotClearItemClosed(item->fields._Shop_k__BackingField, 1, v51) )
      {
LABEL_45:
        v52 = 0;
LABEL_139:
        this = (ShopBuyItemListViewItemDraw_o *)v16->fields.maskSprite;
        if ( this )
        {
          this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v52, 0LL);
            return;
          }
        }
        goto LABEL_152;
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
    this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12174/*"SHOP_QUEST_OPEN"*/, 0LL);
    if ( !textOnMask )
      goto LABEL_152;
    UILabel__set_text(textOnMask, (System_String_o *)this, 0LL);
    v52 = 1;
    goto LABEL_139;
  }
  ShopBuyItemListViewItemDraw__SetSpriteActive(this, v16->fields.maskSprite, 1, (const MethodInfo *)isNotServantGet);
  if ( !item )
    goto LABEL_152;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_152;
  switch ( LODWORD(this->fields.maskSprite) )
  {
    case 4:
      bandSprite = this->fields.bandSprite;
      if ( !bandSprite )
        goto LABEL_152;
      if ( !LODWORD(bandSprite->fields.leftAnchor) )
        goto LABEL_153;
      if ( !LODWORD(bandSprite->fields.rightAnchor) )
        goto LABEL_59;
      this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_152;
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
      v54 = item->fields._Shop_k__BackingField;
      if ( !v54 )
        goto LABEL_152;
      targetIds = v54->fields.targetIds;
      if ( !targetIds )
        goto LABEL_152;
      if ( !targetIds->max_length )
        goto LABEL_153;
      if ( !this )
        goto LABEL_152;
      Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                    targetIds->m_Items[1],
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Entity && ServantEntity__get_IsServant(Entity, 0LL) && item->fields._ShopKind_k__BackingField != 6 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v59 = &StringLiteral_12137/*"SHOP_CANT_BUY"*/;
        goto LABEL_150;
      }
LABEL_59:
      if ( isNotServantGet || isNotServantHaving || isServantHaving || isNotCostumeGet || isNotCommandCodeGet )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ShopReleaseMaster___);
        v57 = item->fields._Shop_k__BackingField;
        if ( v57 && this )
        {
          this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                    (ShopReleaseMaster_o *)this,
                                                    v57->fields.id,
                                                    40,
                                                    0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v63 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_151;
          }
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v59 = &StringLiteral_12089/*"SHOP_ALREADY_GET"*/;
LABEL_150:
          this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v59, 0LL);
          v63 = (System_String_o *)this;
LABEL_151:
          v67 = v16->fields.textOnMask;
LABEL_111:
          ShopBuyItemListViewItemDraw__SetLabelText(this, v67, v63, v58);
          goto LABEL_112;
        }
LABEL_152:
        sub_B2C434(this, item);
      }
LABEL_112:
      prepareTextOnMask = (UnityEngine_Object_o *)v16->fields.prepareTextOnMask;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(prepareTextOnMask, 0LL, 0LL)
        && ShopBuyItemListViewItem__IsPrepareTextOnMask(item, v69) )
      {
        v70 = v16->fields.prepareTextOnMask;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v71 = LocalizationManager__Get((System_String_o *)StringLiteral_12111/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, 0LL);
        ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v71, v70, v71, v72);
      }
      return;
    case 5:
      v35 = v16->fields.textOnMask;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v36 = &StringLiteral_12170/*"SHOP_NOT_RELEASE_SET_ITEM"*/;
      goto LABEL_110;
    case 6:
      if ( !ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)this, 0, v34) )
        goto LABEL_112;
      v73 = v16->fields.textOnMask;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v74 = LocalizationManager__Get((System_String_o *)StringLiteral_12172/*"SHOP_QUEST_ALREADY_CLEARED"*/, 0LL);
      ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v74, v73, v74, v75);
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_152;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, (const MethodInfo *)item);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_112;
      v76 = item->fields._Shop_k__BackingField;
      if ( !v76 )
        goto LABEL_152;
      this = (ShopBuyItemListViewItemDraw_o *)v76->fields.script;
      if ( !this )
        goto LABEL_152;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_18887/*"freeShopCondId"*/,
             (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
LABEL_130:
        ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(v16, item, v60);
      }
      goto LABEL_112;
    case 7:
    case 9:
      goto LABEL_7;
    case 0xE:
      if ( !isNotServantGet && !isNotServantHaving && !isServantHaving && !isNotCostumeGet && !isNotCommandCodeGet )
        goto LABEL_112;
      if ( ShopEntity__GetFreeShopCondId((ShopEntity_o *)this, (const MethodInfo *)item) < 1 )
        goto LABEL_82;
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_152;
      if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, (const MethodInfo *)item) )
        goto LABEL_130;
LABEL_82:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ShopReleaseMaster___);
      v61 = item->fields._Shop_k__BackingField;
      if ( !v61 || !this )
        goto LABEL_152;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                (ShopReleaseMaster_o *)this,
                                                v61->fields.id,
                                                1,
                                                0LL);
      v62 = v16->fields.textOnMask;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12089/*"SHOP_ALREADY_GET"*/, 0LL);
        v63 = (System_String_o *)this;
      }
      else
      {
        v63 = (System_String_o *)StringLiteral_1/*""*/;
      }
      v67 = v62;
      goto LABEL_111;
    default:
      if ( !isNotServantGet && !isNotServantHaving && !isServantHaving && !isNotCostumeGet && !isNotCommandCodeGet )
        goto LABEL_112;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ShopReleaseMaster___);
      v64 = item->fields._Shop_k__BackingField;
      if ( !v64 )
        goto LABEL_152;
      v65 = (ShopReleaseMaster_o *)this;
      if ( !this )
        goto LABEL_152;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                (ShopReleaseMaster_o *)this,
                                                v64->fields.id,
                                                1,
                                                0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_105;
      v66 = item->fields._Shop_k__BackingField;
      if ( !v66 )
        goto LABEL_152;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(v65, v66->fields.id, 40, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_7:
        v35 = v16->fields.textOnMask;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v36 = &StringLiteral_12089/*"SHOP_ALREADY_GET"*/;
LABEL_110:
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v36, 0LL);
        v67 = v35;
        v63 = (System_String_o *)this;
      }
      else
      {
LABEL_105:
        v67 = v16->fields.textOnMask;
        v63 = (System_String_o *)StringLiteral_1/*""*/;
      }
      goto LABEL_111;
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
  __int64 v11; // x1
  __int64 v12; // x1
  UILabel_o *messageTextLabel; // x23
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  const MethodInfo *v16; // x3
  struct ShopEntity_o *Shop_k__BackingField; // x8
  bool IsNullOrEmpty; // w0
  const MethodInfo *v19; // x1
  ShopBuyItemListViewItemDraw_o *nameTextLabel; // x20
  System_String_o *NameText; // x19
  System_String_o *v22; // x0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x3
  struct ShopEntity_o *v25; // x8
  UILabel_o *v26; // x21
  System_String_o *v27; // x22
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  const MethodInfo *v30; // x3
  bool v31; // w0
  const MethodInfo *v32; // x1
  UICrossNarrowLabel_o *v33; // x20
  System_String_o *v34; // x19
  LocalizationManager_c *v35; // x0
  UICrossNarrowLabel_o *v36; // x21
  System_String_o *v37; // x22
  UILabel_o *v38; // x20
  const MethodInfo *v39; // x1
  System_String_o *DetailText; // x0
  System_String_o *v41; // x0
  System_String_o *v42; // x1
  System_String_o *value; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *message; // [xsp+8h] [xbp-38h] BYREF

  v10 = this;
  value = preparationItemName;
  message = preparationMessage;
  if ( (byte_418D47C & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, item);
    sub_B2C35C(&StringLiteral_15661/*"[000000]"*/, v11);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B2C35C(&StringLiteral_23964/*"？"*/, v12);
    byte_418D47C = 1;
  }
  if ( isInPreparation )
  {
    messageTextLabel = v10->fields.messageTextLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__ReplaceCommonTag(preparationMessage, 0, 0LL);
    v15 = System_String__Concat_44305532((System_String_o *)StringLiteral_15661/*"[000000]"*/, v14, 0LL);
    ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v15, messageTextLabel, v15, v16);
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
            v42 = (System_String_o *)StringLiteral_23964/*"？"*/;
LABEL_43:
            UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)this, v42, 0LL);
            return;
          }
        }
        else
        {
          IsNullOrEmpty = System_String__IsNullOrEmpty(preparationItemName, 0LL);
          nameTextLabel = (ShopBuyItemListViewItemDraw_o *)v10->fields.nameTextLabel;
          if ( IsNullOrEmpty )
          {
            NameText = ShopBuyItemListViewItem__get_NameText(item, v19);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v22 = NameText;
          }
          else
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v22 = preparationItemName;
          }
          this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v22, 0, 0LL);
          if ( nameTextLabel )
          {
            v42 = (System_String_o *)this;
            this = nameTextLabel;
            goto LABEL_43;
          }
        }
      }
    }
LABEL_49:
    sub_B2C434(this, item);
  }
  if ( !item )
    goto LABEL_49;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_49;
  if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, (const MethodInfo *)item) )
  {
    v25 = item->fields._Shop_k__BackingField;
    if ( (!v25 || v25->fields.purchaseType != 14)
      && ShopBuyItemListViewItem__TryGetClosedMessage(item, &message, &value, v24) )
    {
      v26 = v10->fields.messageTextLabel;
      v27 = message;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v28 = LocalizationManager__ReplaceCommonTag(v27, 0, 0LL);
      v29 = System_String__Concat_44305532((System_String_o *)StringLiteral_15661/*"[000000]"*/, v28, 0LL);
      ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v29, v26, v29, v30);
      v31 = System_String__IsNullOrEmpty(value, 0LL);
      v33 = v10->fields.nameTextLabel;
      if ( v31 )
      {
        v34 = ShopBuyItemListViewItem__get_NameText(item, v32);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
          || LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          goto LABEL_47;
        }
        v35 = LocalizationManager_TypeInfo;
      }
      else
      {
        v35 = LocalizationManager_TypeInfo;
        v34 = value;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
          || LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          goto LABEL_47;
        }
      }
      j_il2cpp_runtime_class_init_0(v35);
LABEL_47:
      this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v34, 0, 0LL);
      if ( !v33 )
        goto LABEL_49;
      UICrossNarrowLabel__SetCrossNarrowText(v33, (System_String_o *)this, 0LL);
      return;
    }
  }
  v36 = v10->fields.nameTextLabel;
  v37 = ShopBuyItemListViewItem__get_NameText(item, v23);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v37, 0, 0LL);
  if ( !v36 )
    goto LABEL_49;
  UICrossNarrowLabel__SetCrossNarrowText(v36, (System_String_o *)this, 0LL);
  v38 = v10->fields.messageTextLabel;
  DetailText = ShopBuyItemListViewItem__get_DetailText(item, v39);
  v41 = LocalizationManager__ReplaceCommonTag(DetailText, 0, 0LL);
  this = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_44305532(
                                            (System_String_o *)StringLiteral_15661/*"[000000]"*/,
                                            v41,
                                            0LL);
  if ( !v38 )
    goto LABEL_49;
  UILabel__set_text(v38, (System_String_o *)this, 0LL);
}


void __fastcall ShopBuyItemListViewItemDraw__SetNumText(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x8
  UILabel_o *numTitleLabel; // x21
  System_String_o *v13; // x0
  const MethodInfo *v14; // x3
  ShopBuyItemListViewItemDraw_o *v15; // x0
  const MethodInfo *v16; // x3
  UILabel_o *numTextLabel; // x21
  int32_t HoldCount; // w0
  System_String_o *NumberFormat; // x0
  const MethodInfo *v20; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v22; // x21
  ShopBuyItemListViewItemDraw_o *v23; // x0
  const MethodInfo *v24; // x3

  v6 = this;
  if ( (byte_418D47D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, item);
    sub_B2C35C(&System_Action_int__TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&Method_ShopBuyItemListViewItemDraw__SetNumText_b__59_0__, v9);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B2C35C(&StringLiteral_12117/*"SHOP_BUY_ITEM_HOLD"*/, v10);
    byte_418D47D = 1;
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
    ShopBuyItemListViewItemDraw__SetLabelActive(v23, v6->fields.numTextLabel, 0, v24);
    return;
  }
  ShopBuyItemListViewItemDraw__SetLabelActive(this, v6->fields.numTitleLabel, 1, method);
  numTitleLabel = v6->fields.numTitleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12117/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
  ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v13, numTitleLabel, v13, v14);
  ShopBuyItemListViewItemDraw__SetLabelActive(v15, v6->fields.numTextLabel, 1, v16);
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
LABEL_19:
    sub_B2C434(this, item);
  numTextLabel = v6->fields.numTextLabel;
  HoldCount = ShopEntity__getHoldCount((ShopEntity_o *)this, (const MethodInfo *)item);
  NumberFormat = LocalizationManager__GetNumberFormat(HoldCount, 0LL);
  ShopBuyItemListViewItemDraw__SetLabelText(
    (ShopBuyItemListViewItemDraw_o *)NumberFormat,
    numTextLabel,
    NumberFormat,
    v20);
  if ( item->fields._ShopKind_k__BackingField == 7 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
    v22 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v22,
      (Il2CppObject *)v6,
      Method_ShopBuyItemListViewItemDraw__SetNumText_b__59_0__,
      (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
    StoneCountRefreshComponent__AttachToGameObject(gameObject, v22, 1, 0LL);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetPriceIconText(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x8
  int32_t payType; // w8
  UILabel_o *priceLabelFree; // x19
  struct CommonConsumeEntity_array *CommonConsumeEntities_k__BackingField; // x24
  __int64 v13; // x8
  ShopBuyItemListViewItemDraw_o *priceIconLabel; // x19
  int32_t v15; // w20
  const MethodInfo *v16; // x2
  int32_t v17; // w1
  int32_t v18; // w3
  int32_t v19; // w2
  struct ShopEntity_o *v20; // x8
  System_Int32_array *UserItemCounts; // x0
  UIIconLabel_o *v22; // x22
  System_Int32_array *v23; // x21
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  int32_t v26; // w23
  ShopBuyItemListViewItemDraw_o *priceIconLabel2; // x19
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x2
  ShopEntity_o *v30; // x8
  int32_t v31; // w20
  struct ShopEntity_o *v32; // x8
  UIIconLabel_o *v33; // x22
  ShopBuyItemListViewItemDraw_o *PriceIcon; // x0
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x2
  int32_t v37; // w23
  int32_t sellQp; // w24
  UIIconLabel_o *priceIconLabel1; // x21
  int32_t v40; // w22
  int32_t addRangeSprite; // w23
  int32_t v42; // w21
  struct ItemEntity_o *itemEntity; // x8
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x3
  ShopEntity_o *Price; // x0
  struct ItemEntity_o *v48; // x8
  ShopEntity_o *v49; // x0
  int32_t v50; // w20
  struct ItemEntity_o *v51; // x8
  double v52; // d0
  UILabel_o **p_LineText2digit; // x8
  __int64 v54; // x0

  v6 = this;
  if ( (byte_418D483 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, item);
    sub_B2C35C(&System_Math_TypeInfo, v7);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B2C35C(&StringLiteral_12141/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, v8);
    byte_418D483 = 1;
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
    v13 = *(_QWORD *)&CommonConsumeEntities_k__BackingField->max_length;
    if ( !v13 )
      return;
    if ( (_DWORD)v13 == 1 )
    {
      if ( !CommonConsumeEntities_k__BackingField->m_Items[0] )
        return;
      priceIconLabel = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
      if ( !CommonConsumeEntities_k__BackingField->max_length )
        goto LABEL_87;
      v15 = (int)this;
      this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[0];
      if ( !this )
        goto LABEL_86;
    }
    else
    {
      if ( (int)v13 < 2 )
        return;
      if ( CommonConsumeEntities_k__BackingField->m_Items[0] )
      {
        priceIconLabel1 = v6->fields.priceIconLabel1;
        this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
        if ( !CommonConsumeEntities_k__BackingField->max_length )
          goto LABEL_87;
        v40 = (int)this;
        this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[0];
        if ( !this )
          goto LABEL_86;
        addRangeSprite = (int32_t)this->fields.addRangeSprite;
        this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0LL);
        if ( !priceIconLabel1 )
          goto LABEL_86;
        UIIconLabel__SetPurchaseDecision(priceIconLabel1, v40, addRangeSprite, (int32_t)this, 0LL);
        if ( CommonConsumeEntities_k__BackingField->max_length <= 1 )
          goto LABEL_87;
      }
      if ( !CommonConsumeEntities_k__BackingField->m_Items[1] )
        return;
      priceIconLabel = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel2;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
      if ( CommonConsumeEntities_k__BackingField->max_length <= 1 )
        goto LABEL_87;
      v15 = (int)this;
      this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[1];
      if ( !this )
        goto LABEL_86;
    }
    v42 = (int32_t)this->fields.addRangeSprite;
    this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0LL);
    if ( !priceIconLabel )
      goto LABEL_86;
    v18 = (int)this;
    this = priceIconLabel;
    v17 = v15;
    v19 = v42;
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
    this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12141/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, 0LL);
    if ( priceLabelFree )
    {
      UILabel__set_text(priceLabelFree, (System_String_o *)this, 0LL);
      return;
    }
LABEL_86:
    sub_B2C434(this, item);
  }
  this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_ItemCount(item, (const MethodInfo *)item);
  if ( (int)this >= 2 )
  {
    if ( isInPreparation )
    {
      v20 = item->fields._Shop_k__BackingField;
      if ( !v20 )
        goto LABEL_86;
      if ( (v20->fields.flag & 0x40) != 0 )
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
    UserItemCounts = ShopBuyItemListViewItemDraw__GetUserItemCounts(this, item, v16);
    v22 = v6->fields.priceIconLabel1;
    v23 = UserItemCounts;
    this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v24);
    if ( !item->fields._Shop_k__BackingField )
      goto LABEL_86;
    v26 = (int)this;
    this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrices(item->fields._Shop_k__BackingField, 0, v25);
    if ( !v23 )
      goto LABEL_86;
    if ( v23->max_length )
    {
      if ( !v22 )
        goto LABEL_86;
      UIIconLabel__SetPurchaseDecision(v22, v26, (int32_t)this, v23->m_Items[1], 0LL);
      priceIconLabel2 = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel2;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v28);
      v30 = item->fields._Shop_k__BackingField;
      if ( !v30 )
        goto LABEL_86;
      v31 = (int)this;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrices(v30, 1, v29);
      if ( v23->max_length > 1 )
      {
        if ( !priceIconLabel2 )
          goto LABEL_86;
        v18 = v23->m_Items[2];
        v19 = (int)this;
        this = priceIconLabel2;
        v17 = v31;
        goto LABEL_52;
      }
    }
LABEL_87:
    v54 = sub_B2C460(this);
    sub_B2C400(v54, 0LL);
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
      v17 = 56;
      v18 = -1;
      v19 = 0;
LABEL_52:
      UIIconLabel__SetPurchaseDecision((UIIconLabel_o *)this, v17, v19, v18, 0LL);
      return;
    }
  }
  if ( isInPreparation )
  {
    v32 = item->fields._Shop_k__BackingField;
    if ( !v32 )
      goto LABEL_86;
    if ( (v32->fields.flag & 0x40) != 0 )
    {
      this = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel;
      if ( !this )
        goto LABEL_86;
LABEL_59:
      UIIconLabel__SetEventQuestion((UIIconLabel_o *)this, 0LL);
      return;
    }
  }
  v33 = v6->fields.priceIconLabel;
  PriceIcon = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
  v37 = (int)PriceIcon;
  if ( item->fields._Shop_k__BackingField )
  {
    PriceIcon = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrice(item->fields._Shop_k__BackingField, v35);
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
  this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItemDraw__GetUserItemCounts(PriceIcon, item, v36);
  if ( !this )
    goto LABEL_86;
  if ( !LODWORD(this->fields.rangeSprite) )
    goto LABEL_87;
  if ( !v33 )
    goto LABEL_86;
  UIIconLabel__SetPurchaseDecision(v33, v37, sellQp, (int32_t)this->fields.addRangeSprite, 0LL);
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_86;
  if ( ShopEntity__IsSetStrikethrough((ShopEntity_o *)this, isInPreparation, v44) )
  {
    Price = item->fields._Shop_k__BackingField;
    if ( Price )
    {
      Price = (ShopEntity_o *)ShopEntity__GetPrice(Price, v45);
      if ( !(_DWORD)Price )
        goto LABEL_84;
    }
    else
    {
      v48 = item->fields.itemEntity;
      if ( !v48 )
        goto LABEL_84;
      Price = (ShopEntity_o *)(unsigned int)v48->fields.sellQp;
      if ( !(_DWORD)Price )
        goto LABEL_84;
    }
    v49 = item->fields._Shop_k__BackingField;
    if ( v49 )
    {
      v50 = ShopEntity__GetPrice(v49, v45);
    }
    else
    {
      v51 = item->fields.itemEntity;
      if ( v51 )
        v50 = v51->fields.sellQp;
      else
        v50 = 0;
    }
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v52 = log10((double)v50);
    if ( v52 == INFINITY )
      v52 = -v52;
    if ( (int)v52 )
    {
      p_LineText2digit = &v6->fields.LineText2digit;
LABEL_85:
      ShopBuyItemListViewItemDraw__SetLabelActive((ShopBuyItemListViewItemDraw_o *)Price, *p_LineText2digit, 1, v46);
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
  ShopBuyItemListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x8
  unsigned int shopType; // w9
  struct ShopEntity_o *v15; // x8
  struct System_Int32_array *targetIds; // x8
  struct ShopEntity_o *v17; // x8
  System_String_o *v18; // x0
  const MethodInfo *v19; // x3
  bool IsPaidExchange; // w20
  __int64 *v21; // x8
  System_String_o *v22; // x0
  const MethodInfo *v23; // x3
  __int64 v24; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_418D482 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, item);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&StringLiteral_12173/*"SHOP_QUEST_FREE_EXCHANGE_CLEARED"*/, v9);
    sub_B2C35C(&StringLiteral_12175/*"SHOP_QUEST_PAID_EXCHANGE_CLEARED"*/, v10);
    sub_B2C35C(&StringLiteral_18887/*"freeShopCondId"*/, v11);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B2C35C(&StringLiteral_12089/*"SHOP_ALREADY_GET"*/, v12);
    byte_418D482 = 1;
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
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
      v15 = item->fields._Shop_k__BackingField;
      if ( v15 )
      {
        targetIds = v15->fields.targetIds;
        if ( targetIds )
        {
          if ( !targetIds->max_length )
          {
            v24 = sub_B2C460(this);
            sub_B2C400(v24, 0LL);
          }
          if ( this )
          {
            this = (ShopBuyItemListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                      (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                      &entity,
                                                      targetIds->m_Items[1],
                                                      (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v17 = item->fields._Shop_k__BackingField;
              if ( !v17 )
                goto LABEL_39;
              if ( v17->fields.purchaseType == 4 )
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
                  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_12089/*"SHOP_ALREADY_GET"*/, 0LL);
                  ShopBuyItemListViewItemDraw__SetLabelText(
                    (ShopBuyItemListViewItemDraw_o *)v18,
                    v4->fields.textOnMask,
                    v18,
                    v19);
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
                        (System_Xml_XmlQualifiedName_o *)StringLiteral_18887/*"freeShopCondId"*/,
                        (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                      v21 = &StringLiteral_12175/*"SHOP_QUEST_PAID_EXCHANGE_CLEARED"*/;
                    }
                    else
                    {
                      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v21 = &StringLiteral_12173/*"SHOP_QUEST_FREE_EXCHANGE_CLEARED"*/;
                    }
                    v22 = LocalizationManager__Get((System_String_o *)*v21, 0LL);
                    ShopBuyItemListViewItemDraw__SetLabelText(
                      (ShopBuyItemListViewItemDraw_o *)v22,
                      v4->fields.textOnMask,
                      v22,
                      v23);
                    this = (ShopBuyItemListViewItemDraw_o *)v4->fields.freeExchangeConditionNoticeRoot;
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
    sub_B2C434(this, item);
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  unsigned int maskSprite; // w8
  const MethodInfo *v26; // x2
  struct ShopEntity_o *Shop_k__BackingField; // x0
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x21
  struct ShopEntity_o *v29; // x8
  struct ShopEntity_o *v30; // x8
  int32_t limitNum; // w9
  UILabel_o *restCountLabel; // x19
  System_String_o *v33; // x20
  int32_t v34; // w0
  struct ShopEntity_o *v35; // x8
  int32_t purchaseType; // w8
  LocalizationManager_c *v37; // x0
  __int64 *v38; // x8
  struct ShopEntity_o *v39; // x8
  ShopReleaseMaster_o *v40; // x26
  struct ShopEntity_o *v41; // x8
  struct ShopEntity_o *v42; // x8
  struct ShopEntity_o *v43; // x8
  bool v44; // w8
  int v45; // w21
  System_String_o *v46; // x0
  const MethodInfo *v47; // x3
  Il2CppObject *NumberFormat; // x0
  struct ShopEntity_o *v49; // x8
  struct ShopEntity_o *v50; // x8

  v16 = this;
  if ( (byte_418D47E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopReleaseMaster___, item);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserShopMaster___, v17);
    sub_B2C35C(&LocalizationManager_TypeInfo, v18);
    sub_B2C35C(&NetworkManager_TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B2C35C(&StringLiteral_12121/*"SHOP_BUY_PREPARATION"*/, v21);
    sub_B2C35C(&StringLiteral_8450/*"LOTTERY_REST_NUM"*/, v22);
    sub_B2C35C(&StringLiteral_14716/*"UNIT_REST_NONE"*/, v23);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B2C35C(&StringLiteral_3410/*"COUNT_INFO"*/, v24);
    byte_418D47E = 1;
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
      this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_85;
      MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)this,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (ShopBuyItemListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
      v29 = item->fields._Shop_k__BackingField;
      if ( !v29 || !MasterData_WarQuestSelectionMaster )
        goto LABEL_85;
      this = (ShopBuyItemListViewItemDraw_o *)UserShopMaster__GetEntityDefinitely(
                                                MasterData_WarQuestSelectionMaster,
                                                (int64_t)this,
                                                v29->fields.baseShopId,
                                                0LL);
      v30 = item->fields._Shop_k__BackingField;
      if ( v30 )
      {
        limitNum = v30->fields.limitNum;
        if ( !this )
          goto LABEL_85;
      }
      else
      {
        limitNum = 0;
        if ( !this )
          goto LABEL_85;
      }
      v45 = limitNum - HIDWORD(this->fields.rangeSprite);
      if ( v45 >= 1 && (!v30 || !ShopEntity__IsSoldOut(item->fields._Shop_k__BackingField, (const MethodInfo *)item)) )
      {
        restCountLabel = v16->fields.restCountLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3410/*"COUNT_INFO"*/, 0LL);
        goto LABEL_78;
      }
      if ( !item->fields._IsNotHavingShopItemReceived_k__BackingField )
        goto LABEL_9;
      restCountLabel = v16->fields.restCountLabel;
      v37 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      {
LABEL_55:
        v38 = &StringLiteral_14716/*"UNIT_REST_NONE"*/;
        goto LABEL_56;
      }
LABEL_53:
      if ( !v37->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v37);
      goto LABEL_55;
    }
    if ( ShopEntity__IsSoldOut(Shop_k__BackingField, (const MethodInfo *)item) )
      goto LABEL_9;
    v35 = item->fields._Shop_k__BackingField;
    if ( v35 )
      purchaseType = v35->fields.purchaseType;
    else
LABEL_31:
      purchaseType = item->fields.itemEntity != 0LL;
    restCountLabel = v16->fields.restCountLabel;
    v37 = LocalizationManager_TypeInfo;
    if ( purchaseType == 16 )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v38 = &StringLiteral_8450/*"LOTTERY_REST_NUM"*/;
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
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_85;
    this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
    v39 = item->fields._Shop_k__BackingField;
    if ( !v39 )
      goto LABEL_85;
    v40 = (ShopReleaseMaster_o *)this;
    if ( !this )
      goto LABEL_85;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(
                                              (ShopReleaseMaster_o *)this,
                                              v39->fields.id,
                                              38,
                                              0LL);
    *isNotServantGet = (unsigned __int8)this & 1;
    v41 = item->fields._Shop_k__BackingField;
    if ( !v41 )
      goto LABEL_85;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v40, v41->fields.id, 41, 0LL);
    *isNotServantHaving = (unsigned __int8)this & 1;
    v42 = item->fields._Shop_k__BackingField;
    if ( !v42 )
      goto LABEL_85;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v40, v42->fields.id, 40, 0LL);
    *isServantHaving = (unsigned __int8)this & 1;
    v43 = item->fields._Shop_k__BackingField;
    if ( !v43 )
      goto LABEL_85;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v40, v43->fields.id, 78, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v44 = 1;
    }
    else
    {
      v49 = item->fields._Shop_k__BackingField;
      if ( !v49 )
        goto LABEL_85;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v40, v49->fields.id, 79, 0LL);
      v44 = (unsigned __int8)this & 1;
    }
    *isNotCostumeGet = v44;
    v50 = item->fields._Shop_k__BackingField;
    if ( !v50 )
      goto LABEL_85;
    *isNotCommandCodeGet = ShopReleaseMaster__isExistCondType(v40, v50->fields.id, 108, 0LL);
    this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
    if ( !this )
      goto LABEL_85;
  }
  if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, (const MethodInfo *)item) )
  {
LABEL_9:
    ShopBuyItemListViewItemDraw__ShowSoldOut(v16, item, v26);
    return;
  }
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
LABEL_85:
    sub_B2C434(this, item);
  switch ( LODWORD(this->fields.maskSprite) )
  {
    case 5:
    case 7:
    case 9:
      goto LABEL_24;
    case 6:
      if ( !ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)this, 0, v26) )
        goto LABEL_62;
LABEL_24:
      restCountLabel = v16->fields.restCountLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3410/*"COUNT_INFO"*/, 0LL);
      v34 = 0;
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
        v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3410/*"COUNT_INFO"*/, 0LL);
        v45 = *isServantHaving || *isNotServantHaving;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
LABEL_78:
        v34 = v45;
LABEL_79:
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v34, 0LL);
        v46 = System_String__Format(v33, NumberFormat, 0LL);
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
      v38 = &StringLiteral_12121/*"SHOP_BUY_PREPARATION"*/;
      break;
  }
LABEL_56:
  v46 = LocalizationManager__Get((System_String_o *)*v38, 0LL);
LABEL_80:
  ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v46, restCountLabel, v46, v47);
}


void __fastcall ShopBuyItemListViewItemDraw__SetSpriteActive(
        ShopBuyItemListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_418D478 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, sprite);
    byte_418D478 = 1;
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
      sub_B2C434(gameObject, v7);
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

  if ( (byte_418D479 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, sprite);
    byte_418D479 = 1;
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
      sub_B2C434(v6, v7);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__ShowSoldOut(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x8
  UnityEngine_Object_o *soldOutImage; // x20
  UILabel_o *v10; // x19
  System_String_o *v11; // x0
  const MethodInfo *v12; // x3
  UILabel_o *restCountLabel; // x1
  System_String_o *v14; // x2

  v4 = this;
  if ( (byte_418D489 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, item);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_12128/*"SHOP_BUY_SOLD_OUT"*/, v6);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_418D489 = 1;
  }
  if ( !item )
    goto LABEL_26;
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_26;
  soldOutImage = (UnityEngine_Object_o *)v4->fields.soldOutImage;
  if ( (Shop_k__BackingField->fields.flag & 0x8000) != 0 )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = (System_String_o *)UnityEngine_Object__op_Inequality(0LL, soldOutImage, 0LL);
    if ( ((unsigned __int8)v11 & 1) != 0 )
    {
      this = (ShopBuyItemListViewItemDraw_o *)v4->fields.soldOutImage;
      if ( !this )
        goto LABEL_26;
      this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
      if ( !this )
        goto LABEL_26;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    }
    restCountLabel = v4->fields.restCountLabel;
    v14 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_25;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(0LL, soldOutImage, 0LL) )
    goto LABEL_13;
  this = (ShopBuyItemListViewItemDraw_o *)v4->fields.soldOutImage;
  if ( !this
    || (this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL)) == 0LL )
  {
LABEL_26:
    sub_B2C434(this, item);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
LABEL_13:
  v10 = v4->fields.restCountLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12128/*"SHOP_BUY_SOLD_OUT"*/, 0LL);
  restCountLabel = v10;
  v14 = v11;
LABEL_25:
  ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v11, restCountLabel, v14, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewItemDraw___SetNumText_b__59_0(
        ShopBuyItemListViewItemDraw_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *numTextLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_418D48B & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_418D48B = 1;
  }
  numTextLabel = this->fields.numTextLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !numTextLabel )
    sub_B2C434(NumberFormat, v7);
  UILabel__set_text(numTextLabel, NumberFormat, 0LL);
}