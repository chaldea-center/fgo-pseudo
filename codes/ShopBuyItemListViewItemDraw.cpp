void ShopBuyItemListViewItemDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct ShopBuyItemListViewItemDraw_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct ShopBuyItemListViewItemDraw_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C23500 & 1) == 0 )
  {
    sub_1C2D490(&ShopBuyItemListViewItemDraw_TypeInfo);
    sub_1C2D490(&StringLiteral_17448/*"btn_bg_32"*/);
    sub_1C2D490(&StringLiteral_20416/*"img_list_bg05"*/);
    sub_1C2D490(&StringLiteral_20415/*"img_list_bg04"*/);
    byte_4C23500 = 1;
  }
  ShopBuyItemListViewItemDraw_TypeInfo->static_fields->BASE_IMG_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_20415/*"img_list_bg04"*/;
  sub_1C2D434((CGThumbnailListItem_o *)ShopBuyItemListViewItemDraw_TypeInfo->static_fields, StringLiteral_20415/*"img_list_bg04"*/, v1, v2);
  v3 = StringLiteral_20416/*"img_list_bg05"*/;
  static_fields = ShopBuyItemListViewItemDraw_TypeInfo->static_fields;
  static_fields->Shop18BaseSpriteName = (struct System_String_o *)StringLiteral_20416/*"img_list_bg05"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->Shop18BaseSpriteName, v3, v5, v6);
  v7 = StringLiteral_17448/*"btn_bg_32"*/;
  v8 = ShopBuyItemListViewItemDraw_TypeInfo->static_fields;
  v8->ReturnItemButtonSpriteName = (struct System_String_o *)StringLiteral_17448/*"btn_bg_32"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->ReturnItemButtonSpriteName, v7, v9, v10);
}


void ShopBuyItemListViewItemDraw___ctor(ShopBuyItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ShopBuyItemListViewItemDraw__Awake(ShopBuyItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UISprite_o *v8; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UISprite_o *v12; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4C234E2 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C234E2 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(baseSprite, 0, 0);
  if ( !v4 )
  {
    v8 = this->fields.baseSprite;
    if ( !v8
      || (mAtlas = v8->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v6, v7),
          (v12 = this->fields.baseSprite) == 0) )
    {
      sub_1C2D6EC(v4, v5);
    }
    mSpriteName = v12->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseSpriteName, (int32_t)mSpriteName, v10, v11);
  }
}


void ShopBuyItemListViewItemDraw__ChangeNextAnotherItemIcon(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewManager_o *manager,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Int32_array *possessionAnotherItemIds; // x8
  unsigned int max_length; // w10
  int v10; // w9
  UISprite_o *anotherPayItemImage; // x19
  int32_t v12; // w20

  if ( (byte_4C234E4 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    byte_4C234E4 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)this->fields.possessionAnotherItemIds,
                    0);
  if ( !IsNullOrEmpty )
  {
    possessionAnotherItemIds = this->fields.possessionAnotherItemIds;
    if ( !possessionAnotherItemIds || !manager )
      sub_1C2D6EC(IsNullOrEmpty, v6);
    max_length = possessionAnotherItemIds->max_length;
    v10 = manager->fields.alphaAnimCnt % (int)max_length;
    if ( v10 >= max_length )
      sub_1C2D6F4(IsNullOrEmpty, v6, v7);
    anotherPayItemImage = this->fields.anotherPayItemImage;
    v12 = possessionAnotherItemIds->m_Items[v10];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(anotherPayItemImage, v12, 0);
  }
}


int32_t ShopBuyItemListViewItemDraw__GetDispMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) >= 3 )
    return 0;
  return initMode;
}


bool ShopBuyItemListViewItemDraw__GetIsSetItemEventShop(
        ShopBuyItemListViewItemDraw_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  __int64 v4; // x2
  il2cpp_array_size_t max_length; // x8
  SetItemMaster_o *v6; // x20
  unsigned __int64 v7; // x21
  int m_CancellationTokenSource; // w8
  int v9; // w9
  __int64 v10; // x10

  if ( (byte_4C234FA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_SetItemMaster___);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C234FA = 1;
  }
  if ( !ids )
    goto LABEL_20;
  if ( !ids->max_length )
    return 0;
  this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_1C2D6EC(this, ids);
  this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SetItemMaster___);
  max_length = ids->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v6 = (SetItemMaster_o *)this;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)max_length )
LABEL_21:
      sub_1C2D6F4(this, ids, v4);
    if ( !v6 )
      goto LABEL_20;
    this = (ShopBuyItemListViewItemDraw_o *)SetItemMaster__GetList(v6, ids->m_Items[v7], 0);
    if ( !this )
      goto LABEL_20;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource >= 1 )
      break;
LABEL_17:
    LODWORD(max_length) = ids->max_length;
    if ( (__int64)++v7 >= (int)max_length )
      return 0;
  }
  v9 = 0;
  while ( 1 )
  {
    if ( m_CancellationTokenSource == v9 )
      goto LABEL_21;
    v10 = *((_QWORD *)&this->fields.rangeSprite + v9);
    if ( !v10 )
      goto LABEL_20;
    if ( *(_DWORD *)(v10 + 20) == 7 )
      return 1;
    if ( m_CancellationTokenSource == ++v9 )
      goto LABEL_17;
  }
}


System_Int32_array *ShopBuyItemListViewItemDraw__GetUserItemCounts(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 SelfUserGame; // x0
  __int64 v5; // x1
  _DWORD *v6; // x21
  __int64 v7; // x19
  Il2CppObject *MasterData_object; // x21
  __int64 v9; // x9
  ShopEntity_o *v10; // x0
  int64_t v11; // x20
  __int64 v12; // x2
  int v13; // w8
  UserItemMaster_o *v14; // x21
  unsigned int ItemCount; // w0
  ShopEntity_o *Shop_k__BackingField; // x8
  unsigned __int64 v17; // x22
  __int64 v18; // x25
  int64_t v19; // x24
  unsigned int v20; // w0

  if ( (byte_4C234FB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C234FB = 1;
  }
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !item || (v6 = (_DWORD *)SelfUserGame, (SelfUserGame = (__int64)item->fields._Shop_k__BackingField) == 0) )
LABEL_36:
    sub_1C2D6EC(SelfUserGame, v5);
  switch ( *(_DWORD *)(SelfUserGame + 68) )
  {
    case 1:
      SelfUserGame = sub_1C2D538(int___TypeInfo, 1);
      if ( !v6 )
        goto LABEL_36;
      v7 = SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_36;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_52;
      v13 = v6[46];
      goto LABEL_50;
    case 4:
      SelfUserGame = sub_1C2D538(int___TypeInfo, 1);
      if ( !v6 )
        goto LABEL_36;
      v7 = SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_36;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_52;
      v13 = v6[48];
      goto LABEL_50;
    case 6:
    case 0xB:
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_36;
      SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)SelfUserGame,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !item->fields._Shop_k__BackingField )
        goto LABEL_36;
      v14 = (UserItemMaster_o *)SelfUserGame;
      ItemCount = ShopEntity__GetItemCount(item->fields._Shop_k__BackingField, 0);
      SelfUserGame = sub_1C2D538(int___TypeInfo, ItemCount);
      Shop_k__BackingField = item->fields._Shop_k__BackingField;
      if ( !Shop_k__BackingField )
        goto LABEL_36;
      v7 = SelfUserGame;
      v17 = 0;
      v18 = SelfUserGame + 32;
      break;
    case 8:
    case 9:
    case 0xC:
      v7 = sub_1C2D538(int___TypeInfo, 1);
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_36;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C211E1 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C211E1 = 1;
      }
      SelfUserGame = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        SelfUserGame = (__int64)NetworkManager_TypeInfo;
      }
      if ( !item->fields._Shop_k__BackingField )
        goto LABEL_36;
      v9 = *(_QWORD *)(SelfUserGame + 184);
      v10 = item->fields._Shop_k__BackingField;
      v11 = *(_QWORD *)(v9 + 64);
      SelfUserGame = ShopEntity__GetItemIDs(v10, 0, 0);
      if ( !MasterData_object )
        goto LABEL_36;
      SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)MasterData_object,
                                v11,
                                SelfUserGame,
                                0);
      if ( !SelfUserGame || !v7 )
        goto LABEL_36;
      if ( !*(_DWORD *)(v7 + 24) )
        goto LABEL_52;
      v13 = *(_DWORD *)(SelfUserGame + 28);
      goto LABEL_50;
    case 0xA:
      SelfUserGame = sub_1C2D538(int___TypeInfo, 1);
      if ( !v6 )
        goto LABEL_36;
      v7 = SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_36;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_52;
      v13 = v6[49];
LABEL_50:
      *(_DWORD *)(v7 + 32) = v13;
      return (System_Int32_array *)v7;
    default:
      v20 = ShopEntity__GetItemCount((ShopEntity_o *)SelfUserGame, 0);
      return (System_Int32_array *)sub_1C2D538(int___TypeInfo, v20);
  }
  while ( (__int64)v17 < ShopEntity__GetItemCount(Shop_k__BackingField, 0) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
    }
    SelfUserGame = (__int64)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      SelfUserGame = (__int64)NetworkManager_TypeInfo;
    }
    if ( item->fields._Shop_k__BackingField )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(SelfUserGame + 184) + 64LL);
      SelfUserGame = ShopEntity__GetItemIDs(item->fields._Shop_k__BackingField, v17, 0);
      if ( v14 )
      {
        SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(v14, v19, SelfUserGame, 0);
        if ( SelfUserGame )
        {
          if ( v7 )
          {
            if ( v17 >= *(unsigned int *)(v7 + 24) )
LABEL_52:
              sub_1C2D6F4(SelfUserGame, v5, v12);
            *(_DWORD *)(v18 + 4 * v17) = *(_DWORD *)(SelfUserGame + 28);
            Shop_k__BackingField = item->fields._Shop_k__BackingField;
            ++v17;
            if ( Shop_k__BackingField )
              continue;
          }
        }
      }
    }
    goto LABEL_36;
  }
  return (System_Int32_array *)v7;
}


System_Int64_array *ShopBuyItemListViewItemDraw__GetUserItemCountsLong(
        ShopBuyItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x19
  System_Int64_array *result; // x0
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_4C234FC & 1) == 0 )
  {
    sub_1C2D490(&long___TypeInfo);
    byte_4C234FC = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  result = (System_Int64_array *)sub_1C2D538(long___TypeInfo, 1);
  if ( !SelfUserGame || !result )
    sub_1C2D6EC(result, v4);
  if ( !LODWORD(result->max_length) )
    sub_1C2D6F4(result, v4, v5);
  result->m_Items[0] = SelfUserGame->fields.qp;
  return result;
}


void ShopBuyItemListViewItemDraw__SetBandSprite(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopBuyItemListViewItemDraw_o *v5; // x19
  struct ShopEntity_o *Shop_k__BackingField; // x8
  bool v7; // w2
  __int64 *v8; // x9

  v5 = this;
  if ( (byte_4C234EB & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20702/*"img_txt_shop"*/);
    sub_1C2D490(&StringLiteral_20686/*"img_txt_quest"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C2D490(&StringLiteral_20611/*"img_txt_bgm"*/);
    byte_4C234EB = 1;
  }
  if ( !item || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0 )
    sub_1C2D6EC(this, item);
  v7 = 0;
  v8 = &StringLiteral_20686/*"img_txt_quest"*/;
  switch ( Shop_k__BackingField->fields.purchaseType )
  {
    case 5:
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItemDraw__GetIsSetItemEventShop(
                                                this,
                                                Shop_k__BackingField->fields.targetIds,
                                                0);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_7;
      v7 = 0;
      break;
    case 6:
      goto LABEL_9;
    case 7:
    case 9:
LABEL_7:
      v8 = &StringLiteral_20702/*"img_txt_shop"*/;
      goto LABEL_9;
    case 0xF:
      v8 = &StringLiteral_20611/*"img_txt_bgm"*/;
LABEL_9:
      ShopBuyItemListViewItemDraw__SetSpriteName(this, v5->fields.bandSprite, (System_String_o *)*v8, v3);
      v7 = 1;
      break;
    default:
      break;
  }
  ShopBuyItemListViewItemDraw__SetSpriteActive(this, v5->fields.bandSprite, v7, v3);
}


void ShopBuyItemListViewItemDraw__SetBaseButton(
        ShopBuyItemListViewItemDraw_o *this,
        bool isInPreparation,
        int32_t dispMode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  UnityEngine_Object_o *baseSprite; // x20
  UIWidget_o *v10; // x19
  UnityEngine_Color_o **v11; // x0

  if ( (byte_4C234F2 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UICommonButtonColor_TypeInfo);
    byte_4C234F2 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(baseButton, 0, 0) )
  {
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
    {
      v10 = (UIWidget_o *)this->fields.baseSprite;
      v11 = (UnityEngine_Color_o **)UICommonButtonColor_TypeInfo;
      if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
        v11 = (UnityEngine_Color_o **)UICommonButtonColor_TypeInfo;
      }
      if ( v10 )
      {
        UIWidget__set_color(v10, *v11[23], 0);
        return;
      }
LABEL_18:
      sub_1C2D6EC(v11, v8);
    }
  }
  else
  {
    v11 = (UnityEngine_Color_o **)this->fields.baseButton;
    if ( !v11 )
      goto LABEL_18;
    (*(void (__fastcall **)(UnityEngine_Color_o **, bool, _QWORD))&(*v11)[24].fields.b)(
      v11,
      !isInPreparation,
      *(_QWORD *)&(*v11)[25].fields.r);
    v11 = (UnityEngine_Color_o **)this->fields.baseButton;
    if ( !v11 )
      goto LABEL_18;
    UICommonButton__SetColliderEnable((UICommonButton_o *)v11, dispMode == 3 || isInPreparation, 1, 0);
    v11 = (UnityEngine_Color_o **)this->fields.baseButton;
    if ( !v11 )
      goto LABEL_18;
    (*(void (__fastcall **)(UnityEngine_Color_o **, _QWORD, __int64, _QWORD))&(*v11)[33].fields.b)(
      v11,
      0,
      1,
      *(_QWORD *)&(*v11)[34].fields.r);
  }
}


void ShopBuyItemListViewItemDraw__SetBaseSprite(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v6; // x0
  __int64 v7; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x0
  UISprite_o *v9; // x19
  ShopBuyItemListViewItemDraw_c *v10; // x0
  System_String_o *Shop18BaseSpriteName; // x20
  System_String_o *baseSpriteName; // x1
  int32_t v13; // w0
  int bgImageId; // t1
  UISprite_o *v15; // x21
  System_String_o *v16; // x0
  System_String_o *v17; // x22
  struct ShopEntity_o *v18; // x8
  struct UISprite_o *v19; // x20
  struct System_String_o **onChange; // x8

  if ( (byte_4C234EC & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ShopBuyItemListViewItemDraw_TypeInfo);
    sub_1C2D490(&StringLiteral_23427/*"shop_item_menu_"*/);
    byte_4C234EC = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (UISprite_o *)UnityEngine_Object__op_Equality(baseSprite, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
    return;
  if ( !item )
    goto LABEL_32;
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
  {
    v6 = this->fields.baseSprite;
    if ( v6 )
    {
      UISprite__set_atlas(v6, this->fields.baseAtlas, 0);
      v6 = this->fields.baseSprite;
      if ( v6 )
      {
        baseSpriteName = this->fields.baseSpriteName;
LABEL_31:
        UISprite__set_spriteName(v6, baseSpriteName, 0);
        return;
      }
    }
LABEL_32:
    sub_1C2D6EC(v6, v7);
  }
  if ( Shop_k__BackingField->fields.shopType == 18 )
  {
    v9 = this->fields.baseSprite;
    v10 = ShopBuyItemListViewItemDraw_TypeInfo;
    if ( !ShopBuyItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemListViewItemDraw_TypeInfo);
      v10 = ShopBuyItemListViewItemDraw_TypeInfo;
    }
    Shop18BaseSpriteName = v10->static_fields->Shop18BaseSpriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetShopBanner_40386924(v9, Shop18BaseSpriteName, 0);
    return;
  }
  bgImageId = Shop_k__BackingField->fields.bgImageId;
  v13 = (_DWORD)Shop_k__BackingField + 124;
  if ( bgImageId < 1 )
    goto LABEL_22;
  v15 = this->fields.baseSprite;
  v16 = System_Int32__ToString(v13, 0);
  v17 = System_String__Concat_63457864((System_String_o *)StringLiteral_23427/*"shop_item_menu_"*/, v16, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetShopBanner_40386924(v15, v17, 0) )
  {
LABEL_22:
    v6 = this->fields.baseSprite;
    if ( v6 )
    {
      UISprite__set_atlas(v6, this->fields.baseAtlas, 0);
      v18 = item->fields._Shop_k__BackingField;
      if ( v18 )
      {
        v19 = this->fields.baseSprite;
        if ( v18->fields.shopType == 9 )
        {
          v6 = (UISprite_o *)ShopBuyItemListViewItemDraw_TypeInfo;
          if ( !ShopBuyItemListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ShopBuyItemListViewItemDraw_TypeInfo);
            v6 = (UISprite_o *)ShopBuyItemListViewItemDraw_TypeInfo;
          }
          onChange = (struct System_String_o **)v6->fields.onChange;
        }
        else
        {
          onChange = &this->fields.baseSpriteName;
        }
        if ( v19 )
        {
          baseSpriteName = *onChange;
          v6 = v19;
          goto LABEL_31;
        }
      }
    }
    goto LABEL_32;
  }
}


void ShopBuyItemListViewItemDraw__SetButtonActive(
        ShopBuyItemListViewItemDraw_o *this,
        UICommonButton_o *button,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4C234E8 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C234E8 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)button, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !button || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)button, 0)) == 0 )
      sub_1C2D6EC(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
  }
}


void ShopBuyItemListViewItemDraw__SetCommonConsumeIcon(
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

  if ( (byte_4C234F7 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    byte_4C234F7 = 1;
  }
  if ( commonConsumeEntity )
  {
    if ( CommonConsumeEntity__get_IsItem(commonConsumeEntity, 0) )
    {
      ItemEntity = CommonConsumeEntity__GetItemEntity(commonConsumeEntity, 0);
      ShopBuyItemListViewItemDraw__SetEventItemIcon(
        (ShopBuyItemListViewItemDraw_o *)ItemEntity,
        itemIcon,
        ItemEntity,
        isShowQuestion,
        v9);
    }
    else
    {
      IsAp = CommonConsumeEntity__get_IsAp(commonConsumeEntity, 0);
      if ( IsAp )
      {
        if ( !itemIcon )
          sub_1C2D6EC(IsAp, v11);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0);
        GameObjectExtensions__SetLocalPositionY(gameObject, -3.0, 0);
        iconSprite = itemIcon->fields.iconSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetItem(iconSprite, 47, 0);
      }
    }
  }
}


void ShopBuyItemListViewItemDraw__SetEventEndTime(
        ShopBuyItemListViewItemDraw_o *this,
        bool isRarePriShopPurchased,
        bool isIndefinitePeriodShowable,
        int64_t activeTime,
        int64_t enterTime,
        const MethodInfo *method)
{
  struct UILabel_o *restTimeLabel; // x22
  bool v12; // w21
  ShopBuyItemListViewItemDraw_o *RestTime2; // x0
  const MethodInfo *v14; // x3
  struct UILabel_o *v15; // x19
  UILabel_o *v16; // x1

  if ( (byte_4C234F9 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_12123/*"SHOP_INDEFINITE_PERIOD"*/);
    sub_1C2D490(&StringLiteral_13397/*"TIME_REST2_NONE"*/);
    byte_4C234F9 = 1;
  }
  if ( activeTime > 0 )
  {
    restTimeLabel = this->fields.restTimeLabel;
    v12 = isRarePriShopPurchased || isIndefinitePeriodShowable;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( v12 )
      {
LABEL_6:
        RestTime2 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12123/*"SHOP_INDEFINITE_PERIOD"*/, 0);
LABEL_12:
        v16 = restTimeLabel;
        goto LABEL_13;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v12 )
        goto LABEL_6;
    }
    RestTime2 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__GetRestTime2(activeTime, enterTime, 0);
    goto LABEL_12;
  }
  v15 = this->fields.restTimeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime2 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13397/*"TIME_REST2_NONE"*/, 0);
  v16 = v15;
LABEL_13:
  ShopBuyItemListViewItemDraw__SetLabelText(RestTime2, v16, (System_String_o *)RestTime2, v14);
}


void ShopBuyItemListViewItemDraw__SetEventItemIcon(
        ShopBuyItemListViewItemDraw_o *this,
        ItemIconComponent_o *eventItemIcon,
        ItemEntity_o *itemEntity,
        bool isShowQuestion,
        const MethodInfo *method)
{
  _BOOL8 v8; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C234F8 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C234F8 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)eventItemIcon, 0, 0);
  if ( !v8 )
  {
    if ( !eventItemIcon )
      sub_1C2D6EC(v8, v9);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventItemIcon, 0);
    GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0);
    if ( itemEntity )
    {
      if ( isShowQuestion )
        ItemIconComponent__SetItemImage(eventItemIcon, 8007, 0);
      else
        ItemIconComponent__SetItem(eventItemIcon, itemEntity->fields.imageId, -1, 1, 0);
    }
    else
    {
      ItemIconComponent__Clear(eventItemIcon, 0);
    }
  }
}


void ShopBuyItemListViewItemDraw__SetEventItemIconText(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  ShopBuyItemListViewItemDraw_o *v6; // x19
  bool v7; // w20
  struct CommonConsumeEntity_array *CommonConsumeEntities_k__BackingField; // x22
  int max_length; // w8
  CommonConsumeEntity_o *v10; // x2
  ItemIconComponent_o *eventItemIcon; // x1
  __int64 v12; // x2
  const MethodInfo *v13; // x4
  struct ItemEntity_array *v14; // x8
  ItemIconComponent_o *eventItemIcon2; // x1
  ItemEntity_o *v16; // x2
  ShopBuyItemListViewItemDraw_o *v17; // x0
  const MethodInfo *v18; // x4
  bool v19; // w3
  struct ItemEntity_array *EventItemEntities_k__BackingField; // x8
  struct ItemEntity_array *v21; // x8
  CommonConsumeEntity_o *v22; // x2

  v6 = this;
  if ( isInPreparation )
  {
    if ( !item )
      goto LABEL_37;
    this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
    if ( !this )
      goto LABEL_37;
    v7 = ShopEntity__checkFlag((ShopEntity_o *)this, 32, 0);
  }
  else
  {
    if ( !item )
      goto LABEL_37;
    v7 = 0;
  }
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
  {
    if ( item->fields._EventItemEntities_k__BackingField )
      goto LABEL_37;
    goto LABEL_22;
  }
  if ( HIDWORD(this->fields.bandSprite) != 14
    || (CommonConsumeEntities_k__BackingField = item->fields._CommonConsumeEntities_k__BackingField) == 0 )
  {
    if ( item->fields._EventItemEntities_k__BackingField )
    {
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetItemCount((ShopEntity_o *)this, 0);
      if ( (int)this >= 2 )
      {
        EventItemEntities_k__BackingField = item->fields._EventItemEntities_k__BackingField;
        if ( EventItemEntities_k__BackingField )
        {
          if ( !LODWORD(EventItemEntities_k__BackingField->max_length) )
            goto LABEL_38;
          ShopBuyItemListViewItemDraw__SetEventItemIcon(
            this,
            v6->fields.eventItemIcon1,
            EventItemEntities_k__BackingField->m_Items[0],
            v7,
            v13);
          v21 = item->fields._EventItemEntities_k__BackingField;
          if ( v21 )
          {
            if ( LODWORD(v21->max_length) <= 1 )
              goto LABEL_38;
            eventItemIcon2 = v6->fields.eventItemIcon2;
            v16 = v21->m_Items[1];
            goto LABEL_28;
          }
        }
      }
      else
      {
        this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
        if ( this )
        {
          this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, 0);
          if ( ((unsigned __int8)this & 1) != 0 && item->fields._IsNotHavingShopItemReceived_k__BackingField )
            return;
        }
        v14 = item->fields._EventItemEntities_k__BackingField;
        if ( v14 )
        {
          if ( !LODWORD(v14->max_length) )
            goto LABEL_38;
          eventItemIcon2 = v6->fields.eventItemIcon;
          v16 = v14->m_Items[0];
LABEL_28:
          v19 = v7;
          goto LABEL_29;
        }
      }
LABEL_37:
      sub_1C2D6EC(this, item);
    }
LABEL_22:
    ShopBuyItemListViewItemDraw__SetEventItemIcon(this, v6->fields.eventItemIcon, 0, 0, v4);
    ShopBuyItemListViewItemDraw__SetEventItemIcon(v17, v6->fields.eventItemIcon1, 0, 0, v18);
    eventItemIcon2 = v6->fields.eventItemIcon2;
    v16 = 0;
    v19 = 0;
LABEL_29:
    ShopBuyItemListViewItemDraw__SetEventItemIcon(this, eventItemIcon2, v16, v19, v13);
    return;
  }
  max_length = CommonConsumeEntities_k__BackingField->max_length;
  if ( max_length == 1 )
  {
    v10 = CommonConsumeEntities_k__BackingField->m_Items[0];
    if ( v10 )
    {
      eventItemIcon = v6->fields.eventItemIcon;
LABEL_35:
      ShopBuyItemListViewItemDraw__SetCommonConsumeIcon(v6, eventItemIcon, v10, v7, v4);
      return;
    }
    return;
  }
  if ( max_length < 2 )
    return;
  v22 = CommonConsumeEntities_k__BackingField->m_Items[0];
  if ( v22 )
  {
    ShopBuyItemListViewItemDraw__SetCommonConsumeIcon(v6, v6->fields.eventItemIcon1, v22, v7, v4);
    if ( LODWORD(CommonConsumeEntities_k__BackingField->max_length) <= 1 )
LABEL_38:
      sub_1C2D6F4(this, item, v12);
  }
  v10 = CommonConsumeEntities_k__BackingField->m_Items[1];
  if ( v10 )
  {
    eventItemIcon = v6->fields.eventItemIcon2;
    goto LABEL_35;
  }
}


void ShopBuyItemListViewItemDraw__SetInfoButton(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v6; // x20
  ShopEntity_o *v7; // x0
  const MethodInfo *v8; // x3
  UICommonButton_o *infoButton; // x20
  UICommonButton_o *v10; // x1
  bool v11; // w2
  struct ShopEntity_o *Shop_k__BackingField; // x8
  unsigned int v13; // w9
  struct ShopEntity_o *v14; // x8

  v6 = this;
  if ( (byte_4C234F1 & 1) == 0 )
  {
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C2D490(&StringLiteral_9269/*"NONE"*/);
    byte_4C234F1 = 1;
  }
  if ( !isInPreparation )
  {
    if ( !item )
      goto LABEL_23;
LABEL_9:
    this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
    if ( !this )
      goto LABEL_23;
    this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__checkFlag((ShopEntity_o *)this, 0x8000, 0);
    infoButton = v6->fields.infoButton;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v10 = infoButton;
      v11 = 0;
LABEL_22:
      ShopBuyItemListViewItemDraw__SetButtonActive(this, v10, v11, v8);
      return;
    }
    Shop_k__BackingField = item->fields._Shop_k__BackingField;
    if ( Shop_k__BackingField )
    {
      v13 = Shop_k__BackingField->fields.purchaseType - 1;
      if ( v13 >= 0x15 || ((0x140009u >> v13) & 1) == 0 )
      {
        this = (ShopBuyItemListViewItemDraw_o *)System_String__IsNullOrEmpty(
                                                  Shop_k__BackingField->fields.infoMessage,
                                                  0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = 0;
LABEL_21:
          v11 = (unsigned __int8)this & 1;
          v10 = infoButton;
          goto LABEL_22;
        }
        v14 = item->fields._Shop_k__BackingField;
        if ( v14 )
        {
          this = (ShopBuyItemListViewItemDraw_o *)System_String__op_Inequality(
                                                    v14->fields.infoMessage,
                                                    (System_String_o *)StringLiteral_9269/*"NONE"*/,
                                                    0);
          goto LABEL_21;
        }
LABEL_23:
        sub_1C2D6EC(this, item);
      }
    }
    else if ( !item->fields.itemEntity )
    {
      goto LABEL_23;
    }
    this = (ShopBuyItemListViewItemDraw_o *)(&dword_0 + 1);
    goto LABEL_21;
  }
  if ( !item )
    goto LABEL_23;
  v7 = item->fields._Shop_k__BackingField;
  if ( v7 && ShopEntity__IsSoldOut(v7, 0) )
    goto LABEL_9;
}


void ShopBuyItemListViewItemDraw__SetItem(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v6; // x19
  ShopBuyItemListViewItemDraw_o *v7; // x0
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3
  _BOOL8 IsPreparation; // x0
  _BOOL4 v11; // w21
  const MethodInfo *v12; // x3
  ShopBuyItemListViewItemDraw_o *v13; // x0
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  ShopBuyItemListViewItemDraw_o *v16; // x0
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2
  bool v19; // w23
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1
  UILabel_o *messageTextLabel; // x24
  const MethodInfo *v23; // x5
  const MethodInfo *v24; // x3
  ShopEntity_o *Shop_k__BackingField; // x23
  UISprite_o *possessionSprite; // x24
  const MethodInfo *v27; // x1
  bool HaveIconShowable; // w0
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  UnityEngine_Object_o *chocolateSprite; // x23
  _BOOL8 v33; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x3
  UnityEngine_Component_o *IsChocolateSvtEquip; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v38; // x1
  ShopBuyItemListViewItemDraw_o *v39; // x0
  const MethodInfo *v40; // x3
  UnityEngine_Object_o *soldOutImage; // x23
  bool v42; // w23
  const MethodInfo *v43; // x2
  ShopEntity_o *v44; // x24
  UILabel_o *textOnMask; // x25
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x3
  _BOOL4 IsRarePriShopPurchased_k__BackingField; // w22
  const MethodInfo *v50; // x1
  bool IsIndefinitePeriodShowable; // w0
  const MethodInfo *v52; // x5
  struct ShopEntity_o *v53; // x8
  int64_t closedAt; // x3
  ShopBuyItemListViewItemDraw_o *v55; // x0
  const MethodInfo *v56; // x3
  UnityEngine_Object_o *priceInfo1; // x22
  struct ShopEntity_o *v58; // x8
  int32_t payType; // w8
  const MethodInfo *v60; // x3
  UnityEngine_GameObject_o *v61; // x22
  UnityEngine_Component_o *priceInfo2; // x22
  bool v63; // w1
  const MethodInfo *v64; // x3
  const MethodInfo *v65; // x3
  _BOOL4 v66; // w22
  struct ShopEntity_o *v67; // x8
  _BOOL4 v68; // w23
  _BOOL4 v69; // w8
  struct ShopEntity_o *v70; // x8
  Il2CppObject *v71; // x21
  Il2CppObject *MasterData_object; // x22
  struct ShopEntity_o *v73; // x8
  UserShopEntity_o *v74; // x22
  System_String_o **v75; // x8
  System_String_o **v76; // x9
  struct CommonConsumeEntity_array *CommonConsumeEntities_k__BackingField; // x22
  bool v78; // zf
  System_String_o *v79; // x20
  System_String_o *v80; // x0
  __int64 v81; // x2
  struct UILabel_o *freeExchangeConditionNoticeLabel; // x8
  int mWidth; // w8
  struct UISprite_array *freeExchangeConditionNoticeBgSprites; // x21
  int v85; // w9
  int max_length; // w8
  unsigned int v87; // w22
  int32_t v88; // w19
  Il2CppClass **v89; // x8
  UISprite_o *v90; // x20
  const MethodInfo *v91; // [xsp+0h] [xbp-80h]
  const MethodInfo *v92; // [xsp+0h] [xbp-80h]
  bool isNotCommandCodeGet; // [xsp+14h] [xbp-6Ch] BYREF
  bool isNotCostumeGet; // [xsp+18h] [xbp-68h] BYREF
  bool isServantHaving; // [xsp+1Ch] [xbp-64h] BYREF
  bool isNotServantHaving; // [xsp+20h] [xbp-60h] BYREF
  bool isNotServantGet; // [xsp+24h] [xbp-5Ch] BYREF
  System_String_o *itemName; // [xsp+28h] [xbp-58h] BYREF
  System_String_o *message; // [xsp+38h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_4C234E5 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ShopBuyItemUtility_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_12034/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/);
    sub_1C2D490(&StringLiteral_19648/*"freeShopCondMessage"*/);
    sub_1C2D490(&StringLiteral_12130/*"SHOP_PAID_EXCHANGE_CONDITIONS"*/);
    sub_1C2D490(&StringLiteral_19647/*"freeShopCondId"*/);
    sub_1C2D490(&StringLiteral_20772/*"info_base"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_12035/*"SHOP_ACHIEVEMENT_PAID_EXCHANGE_CONDITIONS"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C2D490(&StringLiteral_12102/*"SHOP_FREE_EXCHANGE_CONDITIONS"*/);
    byte_4C234E5 = 1;
  }
  message = 0;
  itemName = 0;
  isNotServantGet = 0;
  isNotServantHaving = 0;
  isServantHaving = 0;
  isNotCostumeGet = 0;
  isNotCommandCodeGet = 0;
  if ( !item )
  {
    ShopBuyItemListViewItemDraw__SetSpriteActive(this, v6->fields.rangeSprite, 0, method);
    ShopBuyItemListViewItemDraw__SetSpriteActive(v55, v6->fields.addRangeSprite, 0, v56);
    return;
  }
  ShopBuyItemListViewItemDraw__SetLabelActive(this, v6->fields.LineText, 0, method);
  ShopBuyItemListViewItemDraw__SetLabelActive(v7, v6->fields.LineText2digit, 0, v8);
  IsPreparation = ShopBuyItemListViewItem__GetIsPreparation(item, &message, &itemName, v9);
  v11 = IsPreparation;
  ShopBuyItemListViewItemDraw__SetSpriteActive(
    (ShopBuyItemListViewItemDraw_o *)IsPreparation,
    v6->fields.rangeSprite,
    mode == 0,
    v12);
  ShopBuyItemListViewItemDraw__SetSpriteActive(v13, v6->fields.addRangeSprite, item->fields.isTerminationSpace, v14);
  ShopBuyItemListViewItemDraw__SetBandSprite(v6, item, v15);
  ShopBuyItemListViewItemDraw__SetButtonActive(v16, v6->fields.infoButton, 0, v17);
  if ( !mode )
    return;
  ShopBuyItemListViewItemDraw__SetBaseSprite(v6, item, v18);
  v19 = v11;
  ShopBuyItemListViewItemDraw__SetItemIcon(v6, item, v11, v20);
  messageTextLabel = v6->fields.messageTextLabel;
  if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
  ShopBuyItemUtility__SetDefaultMessageLabel(messageTextLabel, v21);
  ShopBuyItemListViewItemDraw__SetNameAndMessageText(v6, item, v19, message, itemName, v23);
  ShopBuyItemListViewItemDraw__SetNumText(v6, item, v19, v24);
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  possessionSprite = v6->fields.possessionSprite;
  HaveIconShowable = ShopBuyItemListViewItem__get_IsHaveIconShowable(item, v27);
  ShopBuyItemUtility__SetShopHaveStatusIcon(Shop_k__BackingField, possessionSprite, HaveIconShowable, v29);
  ShopBuyItemListViewItemDraw__SetShopResetText(v6, item->fields._Shop_k__BackingField, v30);
  ShopBuyItemListViewItemDraw__SetPossessionInfo(v6, item, v31);
  chocolateSprite = (UnityEngine_Object_o *)v6->fields.chocolateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v33 = UnityEngine_Object__op_Inequality(chocolateSprite, 0, 0);
  if ( v33 )
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.chocolateSprite;
    if ( !IsChocolateSvtEquip )
      goto LABEL_104;
    gameObject = UnityEngine_Component__get_gameObject(IsChocolateSvtEquip, 0);
    IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopBuyItemListViewItem__get_IsChocolateSvtEquip(item, v38);
    if ( !gameObject )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)IsChocolateSvtEquip & 1, 0);
  }
  ShopBuyItemListViewItemDraw__SetLabelText(
    (ShopBuyItemListViewItemDraw_o *)v33,
    v6->fields.textOnMask,
    (System_String_o *)StringLiteral_1/*""*/,
    v35);
  ShopBuyItemListViewItemDraw__SetLabelText(v39, v6->fields.prepareTextOnMask, (System_String_o *)StringLiteral_1/*""*/, v40);
  soldOutImage = (UnityEngine_Object_o *)v6->fields.soldOutImage;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(0, soldOutImage, 0) )
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.soldOutImage;
    if ( !IsChocolateSvtEquip )
      goto LABEL_104;
    IsChocolateSvtEquip = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(IsChocolateSvtEquip, 0);
    if ( !IsChocolateSvtEquip )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0);
  }
  v42 = v11;
  ShopBuyItemListViewItemDraw__SetRestCountText(
    v6,
    item,
    v11,
    &isNotServantGet,
    &isNotServantHaving,
    &isServantHaving,
    &isNotCostumeGet,
    &isNotCommandCodeGet,
    v91);
  ShopBuyItemListViewItemDraw__SetMask(
    v6,
    item,
    v11,
    isNotServantGet,
    isNotServantHaving,
    isServantHaving,
    isNotCostumeGet,
    isNotCommandCodeGet,
    v92);
  v44 = item->fields._Shop_k__BackingField;
  textOnMask = v6->fields.textOnMask;
  if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
  ShopBuyItemUtility__SetAddTextOnMask(v44, textOnMask, v43);
  ShopBuyItemListViewItemDraw__SetInfoButton(v6, item, v42, v46);
  ShopBuyItemListViewItemDraw__SetBaseButton(v6, v42, mode, v47);
  ShopBuyItemListViewItemDraw__SetReturnButton(v6, item, v42, v48);
  IsRarePriShopPurchased_k__BackingField = item->fields._IsRarePriShopPurchased_k__BackingField;
  IsIndefinitePeriodShowable = ShopBuyItemListViewItem__get_IsIndefinitePeriodShowable(item, v50);
  v53 = item->fields._Shop_k__BackingField;
  if ( v53 )
    closedAt = v53->fields.closedAt;
  else
    closedAt = 0;
  ShopBuyItemListViewItemDraw__SetEventEndTime(
    v6,
    IsRarePriShopPurchased_k__BackingField,
    IsIndefinitePeriodShowable,
    closedAt,
    item->fields._EnterTime_k__BackingField,
    v52);
  priceInfo1 = (UnityEngine_Object_o *)v6->fields.priceInfo1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(priceInfo1, 0, 0) )
    return;
  v58 = item->fields._Shop_k__BackingField;
  if ( !v58 )
  {
LABEL_35:
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfoFree;
    if ( !IsChocolateSvtEquip )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0);
    IsChocolateSvtEquip = (UnityEngine_Component_o *)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_104;
    v61 = v6->fields.priceInfo1;
    IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__GetItemCount((ShopEntity_o *)IsChocolateSvtEquip, 0);
    if ( !v61 )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive(v61, (int)IsChocolateSvtEquip < 2, 0);
    IsChocolateSvtEquip = (UnityEngine_Component_o *)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_104;
    priceInfo2 = (UnityEngine_Component_o *)v6->fields.priceInfo2;
    IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__GetItemCount((ShopEntity_o *)IsChocolateSvtEquip, 0);
    if ( !priceInfo2 )
      goto LABEL_104;
    v63 = (int)IsChocolateSvtEquip > 1;
    IsChocolateSvtEquip = priceInfo2;
LABEL_41:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, v63, 0);
    ShopBuyItemListViewItemDraw__SetPriceIconText(v6, item, v11, v64);
    ShopBuyItemListViewItemDraw__SetEventItemIconText(v6, item, v11, v65);
    goto LABEL_42;
  }
  payType = v58->fields.payType;
  if ( payType != 14 )
  {
    if ( payType == 13 )
    {
      IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfoFree;
      if ( !IsChocolateSvtEquip )
        goto LABEL_104;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 1, 0);
      IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfo1;
      if ( !IsChocolateSvtEquip )
        goto LABEL_104;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0);
      IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfo2;
      if ( !IsChocolateSvtEquip )
        goto LABEL_104;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0);
      ShopBuyItemListViewItemDraw__SetPriceIconText(v6, item, v11, v60);
      goto LABEL_42;
    }
    goto LABEL_35;
  }
  CommonConsumeEntities_k__BackingField = item->fields._CommonConsumeEntities_k__BackingField;
  if ( CommonConsumeEntities_k__BackingField )
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfoFree;
    if ( !IsChocolateSvtEquip )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0);
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfo1;
    if ( !IsChocolateSvtEquip )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)IsChocolateSvtEquip,
      SLODWORD(CommonConsumeEntities_k__BackingField->max_length) < 2,
      0);
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfo2;
    if ( !IsChocolateSvtEquip )
      goto LABEL_104;
    v63 = SLODWORD(CommonConsumeEntities_k__BackingField->max_length) > 1;
    goto LABEL_41;
  }
LABEL_42:
  IsChocolateSvtEquip = (UnityEngine_Component_o *)item->fields._Shop_k__BackingField;
  if ( !IsChocolateSvtEquip )
    goto LABEL_104;
  IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__isQuestNotClearItemClosed(
                                                     (ShopEntity_o *)IsChocolateSvtEquip,
                                                     0,
                                                     0);
  v66 = 0;
  if ( ((unsigned __int8)IsChocolateSvtEquip & 1) != 0 )
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_104;
    IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__IsSoldOut((ShopEntity_o *)IsChocolateSvtEquip, 0);
    v66 = ((unsigned __int8)IsChocolateSvtEquip & 1) == 0;
  }
  v67 = item->fields._Shop_k__BackingField;
  if ( !v67 )
    goto LABEL_104;
  if ( v67->fields.purchaseType == 14 )
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__IsEligibleForFreeFeaturesTheCostumeRelease(
                                                       item->fields._Shop_k__BackingField,
                                                       0);
    v67 = item->fields._Shop_k__BackingField;
    if ( !v67 )
      goto LABEL_104;
    v68 = ((unsigned __int8)IsChocolateSvtEquip & 1) == 0;
  }
  else
  {
    v68 = 0;
  }
  IsChocolateSvtEquip = (UnityEngine_Component_o *)v67->fields.script;
  if ( !IsChocolateSvtEquip )
LABEL_104:
    sub_1C2D6EC(IsChocolateSvtEquip, v34);
  IsChocolateSvtEquip = (UnityEngine_Component_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                     (System_Collections_Generic_Dictionary_object__object__o *)IsChocolateSvtEquip,
                                                     (Il2CppObject *)StringLiteral_19647/*"freeShopCondId"*/,
                                                     (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( ((unsigned __int8)IsChocolateSvtEquip & 1) != 0 && (!v11 || !v66) )
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_104;
    IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__IsAfterTheFreeShopReleaseDate(
                                                       (ShopEntity_o *)IsChocolateSvtEquip,
                                                       0);
    v69 = ((unsigned __int8)IsChocolateSvtEquip & 1) == 0;
  }
  else
  {
    v69 = 1;
  }
  if ( v69 || v68 )
  {
LABEL_56:
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.freeExchangeConditionNoticeRoot;
    if ( IsChocolateSvtEquip )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0);
      return;
    }
    goto LABEL_104;
  }
  v70 = item->fields._Shop_k__BackingField;
  if ( !v70 )
    goto LABEL_104;
  IsChocolateSvtEquip = (UnityEngine_Component_o *)v70->fields.script;
  if ( !IsChocolateSvtEquip )
    goto LABEL_104;
  IsChocolateSvtEquip = (UnityEngine_Component_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                     (System_Collections_Generic_Dictionary_object__object__o *)IsChocolateSvtEquip,
                                                     (Il2CppObject *)StringLiteral_19648/*"freeShopCondMessage"*/,
                                                     (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !IsChocolateSvtEquip )
    goto LABEL_104;
  v71 = (Il2CppObject *)((__int64 (__fastcall *)(UnityEngine_Component_o *, const MethodInfo *))IsChocolateSvtEquip->klass->vtable._3_ToString.methodPtr)(
                          IsChocolateSvtEquip,
                          IsChocolateSvtEquip->klass->vtable._3_ToString.method);
  IsChocolateSvtEquip = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsChocolateSvtEquip )
    goto LABEL_104;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)IsChocolateSvtEquip,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  IsChocolateSvtEquip = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    IsChocolateSvtEquip = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
  }
  v73 = item->fields._Shop_k__BackingField;
  if ( !v73 )
    goto LABEL_104;
  if ( !MasterData_object )
    goto LABEL_104;
  IsChocolateSvtEquip = (UnityEngine_Component_o *)UserShopMaster__GetEntityDefinitely(
                                                     (UserShopMaster_o *)MasterData_object,
                                                     *(_QWORD *)(IsChocolateSvtEquip[7].fields.m_CachedPtr + 64),
                                                     v73->fields.id,
                                                     0);
  if ( !item->fields._Shop_k__BackingField )
    goto LABEL_104;
  v74 = (UserShopEntity_o *)IsChocolateSvtEquip;
  IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__IsFulFilledFreeExchangeCondition(
                                                     item->fields._Shop_k__BackingField,
                                                     0);
  if ( !v74 )
    goto LABEL_104;
  if ( v74->fields.num )
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_104;
    if ( !ShopEntity__IsPaidExchange((ShopEntity_o *)IsChocolateSvtEquip, 0) )
      goto LABEL_56;
    LOBYTE(IsChocolateSvtEquip) = UserShopEntity__get_IsReturnRarePriShop(v74, 0);
    v75 = (System_String_o **)&StringLiteral_12130/*"SHOP_PAID_EXCHANGE_CONDITIONS"*/;
    v76 = (System_String_o **)&StringLiteral_12035/*"SHOP_ACHIEVEMENT_PAID_EXCHANGE_CONDITIONS"*/;
  }
  else
  {
    v75 = (System_String_o **)&StringLiteral_12102/*"SHOP_FREE_EXCHANGE_CONDITIONS"*/;
    v76 = (System_String_o **)&StringLiteral_12034/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/;
  }
  v78 = ((unsigned __int8)IsChocolateSvtEquip & 1) == 0;
  IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.freeExchangeConditionNoticeRoot;
  if ( !v78 )
    v75 = v76;
  if ( !IsChocolateSvtEquip )
    goto LABEL_104;
  v79 = *v75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 1, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v80 = LocalizationManager__Get(v79, 0);
  IsChocolateSvtEquip = (UnityEngine_Component_o *)System_String__Format(v80, v71, 0);
  if ( !v6->fields.freeExchangeConditionNoticeLabel )
    goto LABEL_104;
  UILabel__set_text(v6->fields.freeExchangeConditionNoticeLabel, (System_String_o *)IsChocolateSvtEquip, 0);
  freeExchangeConditionNoticeLabel = v6->fields.freeExchangeConditionNoticeLabel;
  if ( !freeExchangeConditionNoticeLabel )
    goto LABEL_104;
  mWidth = freeExchangeConditionNoticeLabel->fields.mWidth;
  freeExchangeConditionNoticeBgSprites = v6->fields.freeExchangeConditionNoticeBgSprites;
  v85 = mWidth >= 512 ? 512 : mWidth;
  if ( !freeExchangeConditionNoticeBgSprites )
    goto LABEL_104;
  max_length = freeExchangeConditionNoticeBgSprites->max_length;
  if ( max_length >= 1 )
  {
    v87 = 0;
    v88 = v85 + 16;
    while ( 1 )
    {
      if ( v87 >= max_length )
        sub_1C2D6F4(IsChocolateSvtEquip, v34, v81);
      v89 = &freeExchangeConditionNoticeBgSprites->obj.klass + (int)v87;
      v90 = (UISprite_o *)v89[4];
      if ( !v90 )
        break;
      UIWidget__set_width((UIWidget_o *)v89[4], v88, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      IsChocolateSvtEquip = (UnityEngine_Component_o *)AtlasManager__SetEventUI(
                                                         v90,
                                                         (System_String_o *)StringLiteral_20772/*"info_base"*/,
                                                         0);
      max_length = freeExchangeConditionNoticeBgSprites->max_length;
      if ( (int)++v87 >= max_length )
        return;
    }
    goto LABEL_104;
  }
}


void ShopBuyItemListViewItemDraw__SetItemIcon(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        const MethodInfo *method)
{
  void *itemIcon; // x0
  int32_t v8; // w21
  __int64 v9; // x2
  struct ShopEntity_o *Shop_k__BackingField; // x8
  struct System_Int32_array *targetIds; // x9
  struct ItemIconComponent_o *v12; // x9
  UISprite_o *iconSprite; // x19
  int32_t v14; // w20
  ItemIconComponent_o *v15; // x19
  int32_t imageId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C234ED & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_AssistMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C234ED = 1;
  }
  imageId = 0;
  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    goto LABEL_30;
  ItemIconComponent__Clear((ItemIconComponent_o *)itemIcon, 0);
  if ( isInPreparation )
  {
    if ( !item )
      goto LABEL_30;
    itemIcon = item->fields._Shop_k__BackingField;
    if ( !itemIcon )
      goto LABEL_30;
    if ( ShopEntity__checkFlag((ShopEntity_o *)itemIcon, 2, 0) )
    {
      itemIcon = this->fields.itemIcon;
      if ( itemIcon )
      {
        ItemIconComponent__SetItemImage((ItemIconComponent_o *)itemIcon, 8007, 0);
        return;
      }
LABEL_30:
      sub_1C2D6EC(itemIcon, item);
    }
  }
  else if ( !item )
  {
    goto LABEL_30;
  }
  itemIcon = item->fields._Shop_k__BackingField;
  if ( !itemIcon )
    goto LABEL_30;
  if ( ShopEntity__CheckEquipItem((ShopEntity_o *)itemIcon, &imageId, 0) )
  {
    itemIcon = this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_30;
    ItemIconComponent__SetEquipItemImage((ItemIconComponent_o *)itemIcon, imageId, 0);
  }
  else
  {
    itemIcon = item->fields._Shop_k__BackingField;
    if ( !itemIcon )
      goto LABEL_30;
    v8 = *((_DWORD *)itemIcon + 12);
    if ( v8 == 24 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      itemIcon = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_AssistMaster___);
      Shop_k__BackingField = item->fields._Shop_k__BackingField;
      if ( !Shop_k__BackingField )
        goto LABEL_30;
      targetIds = Shop_k__BackingField->fields.targetIds;
      if ( !targetIds )
        goto LABEL_30;
      if ( !LODWORD(targetIds->max_length) )
        sub_1C2D6F4(itemIcon, item, v9);
      if ( !itemIcon )
        goto LABEL_30;
      itemIcon = AssistMaster__GetNextPartsEntity(
                   (AssistMaster_o *)itemIcon,
                   targetIds->m_Items[0],
                   Shop_k__BackingField->fields.id,
                   0);
      v12 = this->fields.itemIcon;
      if ( !v12 || !itemIcon )
        goto LABEL_30;
      iconSprite = v12->fields.iconSprite;
      v14 = *((_DWORD *)itemIcon + 10);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetSkillIcon(iconSprite, v14, 0);
    }
    else
    {
      v15 = this->fields.itemIcon;
      itemIcon = (void *)ShopEntity__get_TargetId((ShopEntity_o *)itemIcon, 0);
      if ( !v15 )
        goto LABEL_30;
      ItemIconComponent__SetPurchase(v15, v8, (int32_t)itemIcon, imageId, 0);
    }
  }
}


void ShopBuyItemListViewItemDraw__SetLabelActive(
        ShopBuyItemListViewItemDraw_o *this,
        UILabel_o *label,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4C234E6 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C234E6 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0)) == 0 )
      sub_1C2D6EC(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
  }
}


void ShopBuyItemListViewItemDraw__SetLabelText(
        ShopBuyItemListViewItemDraw_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C234E7 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C234E7 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( !v6 )
  {
    if ( !label )
      sub_1C2D6EC(v6, v7);
    WrapControlText__textAdjust(label, text, label->fields.mFontSize, 0, 0);
  }
}


void ShopBuyItemListViewItemDraw__SetListViewObject(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewObject_o *listViewObj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.listViewObject = listViewObj;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.listViewObject, (int32_t)listViewObj, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemListViewItemDraw__SetMask(
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
  ShopBuyItemListViewItem_o *v15; // x20
  ShopBuyItemListViewItemDraw_o *v16; // x19
  const MethodInfo *v17; // x2
  int baseSprite; // w8
  const MethodInfo *v19; // x2
  ShopEntity_o *Shop_k__BackingField; // x0
  _BOOL4 v21; // w23
  UnityEngine_Object_o *anotherBuyable; // x21
  const MethodInfo *v23; // x3
  UnityEngine_Object_o *anotherPayItemImage; // x21
  UnityEngine_GameObject_o *v25; // x22
  struct ShopBuyItemListViewObject_o *listViewObject; // x9
  struct System_Int32_array *possessionAnotherItemIds; // x8
  __int64 naturalAligment; // x10
  unsigned int max_length; // w10
  int v30; // w9
  UISprite_o *v31; // x21
  int32_t v32; // w22
  UISprite_o *maskSprite; // x1
  bool v34; // w2
  struct ShopEntity_o *v35; // x8
  struct ShopEntity_o *v36; // x8
  bool v37; // w20
  UILabel_o *v38; // x21
  __int64 *v39; // x8
  struct ShopEntity_o *v40; // x8
  ShopReleaseMaster_o *v41; // x21
  const MethodInfo *v42; // x3
  struct ShopEntity_o *v43; // x8
  struct UISprite_o *v44; // x8
  struct ShopEntity_o *v45; // x8
  struct System_Int32_array *targetIds; // x8
  Il2CppObject *Entity; // x0
  struct ShopEntity_o *v48; // x8
  __int64 *v49; // x8
  ShopBuyItemListViewItemDraw_o *Empty; // x21
  UILabel_o *v51; // x1
  ShopBuyItemListViewItemDraw_o *v52; // x2
  UILabel_o *v53; // x21
  ShopBuyItemListViewItemDraw_o *v54; // x0
  const MethodInfo *v55; // x3
  struct ShopEntity_o *v56; // x8
  struct ShopEntity_o *v57; // x8
  ShopReleaseMaster_o *v58; // x21
  struct ShopEntity_o *v59; // x8
  bool v60; // w0
  struct UILabel_o *v61; // x23
  ShopBuyItemListViewItemDraw_o *v62; // x22
  int v63; // w25
  ShopBuyItemListViewItemDraw_o *v64; // x24
  UILabel_o *textOnMask; // x20
  struct ShopEntity_o *v66; // x8
  UnityEngine_Object_o *prepareTextOnMask; // x21
  const MethodInfo *v68; // x1
  UILabel_o *v69; // x19
  ShopBuyItemListViewItemDraw_o *v70; // x0
  const MethodInfo *v71; // x3
  struct ShopEntity_o *v72; // x8
  UILabel_o *v73; // x21
  ShopEntity_o *v74; // x0
  UILabel_o *v75; // x1
  const MethodInfo *v76; // x2
  System_Int32_array *v77; // [xsp+0h] [xbp-60h] BYREF
  int32_t questId; // [xsp+Ch] [xbp-54h] BYREF

  v15 = item;
  v16 = this;
  if ( (byte_4C234F4 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ShopReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ShopBuyItemListViewManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&StringLiteral_12092/*"SHOP_CANT_BUY"*/);
    sub_1C2D490(&StringLiteral_12030/*"SHOP18_CANT_BUY_MSG_1"*/);
    sub_1C2D490(&StringLiteral_12031/*"SHOP18_CANT_BUY_MSG_2"*/);
    sub_1C2D490(&StringLiteral_12133/*"SHOP_QUEST_OPEN"*/);
    sub_1C2D490(&StringLiteral_12131/*"SHOP_QUEST_ALREADY_CLEARED"*/);
    sub_1C2D490(&StringLiteral_19647/*"freeShopCondId"*/);
    sub_1C2D490(&StringLiteral_5682/*"EVENT_REWARD_PARTS_GET_LIMIT"*/);
    sub_1C2D490(&StringLiteral_12129/*"SHOP_NOT_RELEASE_SET_ITEM"*/);
    sub_1C2D490(&StringLiteral_12064/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C2D490(&StringLiteral_12038/*"SHOP_ALREADY_GET"*/);
    byte_4C234F4 = 1;
  }
  questId = 0;
  v77 = 0;
  if ( !isInPreparation )
  {
    if ( !v15 )
      goto LABEL_170;
    Shop_k__BackingField = v15->fields._Shop_k__BackingField;
    if ( Shop_k__BackingField
      && ShopEntity__IsSoldOut(Shop_k__BackingField, 0)
      && !v15->fields._IsNotHavingShopItemReceived_k__BackingField )
    {
      this = (ShopBuyItemListViewItemDraw_o *)v15->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_170;
      v21 = !ShopEntity__IsAnotherItemBuyable((ShopEntity_o *)this, &v77, 0);
    }
    else
    {
      v21 = 0;
    }
    anotherBuyable = (UnityEngine_Object_o *)v16->fields.anotherBuyable;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(anotherBuyable, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      anotherPayItemImage = (UnityEngine_Object_o *)v16->fields.anotherPayItemImage;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(anotherPayItemImage, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (ShopBuyItemListViewItemDraw_o *)v15->fields._Shop_k__BackingField;
        if ( !this )
          goto LABEL_170;
        v25 = v16->fields.anotherBuyable;
        this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsAnotherItemBuyable(
                                                  (ShopEntity_o *)this,
                                                  &v16->fields.possessionAnotherItemIds,
                                                  0);
        if ( !v25 )
          goto LABEL_170;
        UnityEngine_GameObject__SetActive(v25, (unsigned __int8)this & 1, 0);
        this = (ShopBuyItemListViewItemDraw_o *)BasicHelper__IsNullOrEmpty(
                                                  (System_Collections_ICollection_o *)v16->fields.possessionAnotherItemIds,
                                                  0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          listViewObject = v16->fields.listViewObject;
          if ( !listViewObject )
            goto LABEL_170;
          possessionAnotherItemIds = v16->fields.possessionAnotherItemIds;
          if ( !possessionAnotherItemIds )
            goto LABEL_170;
          this = (ShopBuyItemListViewItemDraw_o *)listViewObject->fields.manager;
          if ( !this )
            goto LABEL_170;
          item = (ShopBuyItemListViewItem_o *)ShopBuyItemListViewManager_TypeInfo;
          naturalAligment = ShopBuyItemListViewManager_TypeInfo->_2.naturalAligment;
          if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
            || (ShopBuyItemListViewManager_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != ShopBuyItemListViewManager_TypeInfo )
          {
            sub_1C2D9AC(this);
            ShopBuyItemUtility__SetAddTextOnMask(v74, v75, v76);
            return;
          }
          max_length = possessionAnotherItemIds->max_length;
          v30 = SLODWORD(this[1].fields.maskSprite) % (int)max_length;
          if ( v30 >= max_length )
LABEL_171:
            sub_1C2D6F4(this, item, v17);
          v31 = v16->fields.anotherPayItemImage;
          v32 = possessionAnotherItemIds->m_Items[v30];
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          this = (ShopBuyItemListViewItemDraw_o *)AtlasManager__SetItem(v31, v32, 0);
        }
      }
    }
    if ( v21 )
    {
      ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(v16, v15, v17);
      maskSprite = v16->fields.maskSprite;
      v34 = 1;
LABEL_46:
      ShopBuyItemListViewItemDraw__SetSpriteActive(this, maskSprite, v34, v23);
      return;
    }
    v35 = v15->fields._Shop_k__BackingField;
    if ( !v35 || v35->fields.purchaseType != 6 )
    {
      maskSprite = v16->fields.maskSprite;
      v34 = 0;
      goto LABEL_46;
    }
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_170;
    this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
    v36 = v15->fields._Shop_k__BackingField;
    if ( !v36 )
      goto LABEL_170;
    if ( !this )
      goto LABEL_170;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isQuestNotClearSet(
                                              (ShopReleaseMaster_o *)this,
                                              v36->fields.id,
                                              &questId,
                                              0);
    if ( !v15->fields._Shop_k__BackingField )
      goto LABEL_170;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !ShopEntity__isQuestNotClearItemClosed(v15->fields._Shop_k__BackingField, 1, 0) )
      {
LABEL_44:
        v37 = 0;
LABEL_131:
        this = (ShopBuyItemListViewItemDraw_o *)v16->fields.maskSprite;
        if ( this )
        {
          this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v37, 0);
            return;
          }
        }
        goto LABEL_170;
      }
    }
    else if ( !ShopEntity__isExpireItemClosed(v15->fields._Shop_k__BackingField, 0) )
    {
      goto LABEL_44;
    }
    textOnMask = v16->fields.textOnMask;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12133/*"SHOP_QUEST_OPEN"*/, 0);
    if ( !textOnMask )
      goto LABEL_170;
    UILabel__set_text(textOnMask, (System_String_o *)this, 0);
    v37 = 1;
    goto LABEL_131;
  }
  ShopBuyItemListViewItemDraw__SetSpriteActive(this, v16->fields.maskSprite, 1, (const MethodInfo *)isNotServantGet);
  if ( !v15 )
    goto LABEL_170;
  this = (ShopBuyItemListViewItemDraw_o *)v15->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_170;
  baseSprite = (int)this->fields.baseSprite;
  switch ( baseSprite )
  {
    case 2:
      if ( !ShopEntity__IsSoldOut((ShopEntity_o *)this, 0) )
        goto LABEL_65;
      this = (ShopBuyItemListViewItemDraw_o *)v15->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_170;
      if ( ShopEntity__GetFreeShopCondId((ShopEntity_o *)this, 0) < 1 )
        goto LABEL_65;
      goto LABEL_117;
    case 3:
    case 8:
    case 10:
    case 11:
    case 12:
    case 13:
      goto LABEL_53;
    case 4:
      v44 = this->fields.maskSprite;
      if ( !v44 )
        goto LABEL_170;
      if ( !LODWORD(v44->fields.m_CancellationTokenSource) )
        goto LABEL_171;
      if ( !LODWORD(v44->fields.leftAnchor) )
        goto LABEL_82;
      this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_170;
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
      v45 = v15->fields._Shop_k__BackingField;
      if ( !v45 )
        goto LABEL_170;
      targetIds = v45->fields.targetIds;
      if ( !targetIds )
        goto LABEL_170;
      if ( !LODWORD(targetIds->max_length) )
        goto LABEL_171;
      if ( !this )
        goto LABEL_170;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 targetIds->m_Items[0],
                 (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Entity
        && ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0)
        && v15->fields._ShopKind_k__BackingField != 6 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v49 = &StringLiteral_12092/*"SHOP_CANT_BUY"*/;
        goto LABEL_168;
      }
LABEL_82:
      if ( !isNotServantGet && !isNotServantHaving && !isServantHaving && !isNotCostumeGet && !isNotCommandCodeGet )
        goto LABEL_146;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ShopReleaseMaster___);
      v48 = v15->fields._Shop_k__BackingField;
      if ( v48 && this )
      {
        this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                  (ShopReleaseMaster_o *)this,
                                                  v48->fields.id,
                                                  40,
                                                  0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v52 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_1/*""*/;
LABEL_169:
          v51 = v16->fields.textOnMask;
          goto LABEL_145;
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v49 = &StringLiteral_12038/*"SHOP_ALREADY_GET"*/;
LABEL_168:
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v49, 0);
        v52 = this;
        goto LABEL_169;
      }
      goto LABEL_170;
    case 5:
      Empty = (ShopBuyItemListViewItemDraw_o *)string_TypeInfo->static_fields->Empty;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12129/*"SHOP_NOT_RELEASE_SET_ITEM"*/, 0);
        Empty = this;
      }
      v51 = v16->fields.textOnMask;
      v52 = Empty;
      goto LABEL_145;
    case 6:
      if ( !ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)this, 0, 0) )
        goto LABEL_146;
      v53 = v16->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v54 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12131/*"SHOP_QUEST_ALREADY_CLEARED"*/, 0);
      ShopBuyItemListViewItemDraw__SetLabelText(v54, v53, (System_String_o *)v54, v55);
      this = (ShopBuyItemListViewItemDraw_o *)v15->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_170;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_146;
      v56 = v15->fields._Shop_k__BackingField;
      if ( !v56 )
        goto LABEL_170;
      this = (ShopBuyItemListViewItemDraw_o *)v56->fields.script;
      if ( !this )
        goto LABEL_170;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)this,
             (Il2CppObject *)StringLiteral_19647/*"freeShopCondId"*/,
             (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
LABEL_117:
        ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(v16, v15, v19);
      }
      goto LABEL_146;
    case 7:
    case 9:
      goto LABEL_65;
    case 14:
      if ( !isNotServantGet && !isNotServantHaving && !isServantHaving && !isNotCostumeGet && !isNotCommandCodeGet )
        goto LABEL_146;
      if ( ShopEntity__GetFreeShopCondId((ShopEntity_o *)this, 0) < 1 )
        goto LABEL_154;
      this = (ShopBuyItemListViewItemDraw_o *)v15->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_170;
      if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, 0) )
        goto LABEL_117;
LABEL_154:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ShopReleaseMaster___);
      v72 = v15->fields._Shop_k__BackingField;
      if ( !v72 || !this )
        goto LABEL_170;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                (ShopReleaseMaster_o *)this,
                                                v72->fields.id,
                                                1,
                                                0);
      v73 = v16->fields.textOnMask;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12038/*"SHOP_ALREADY_GET"*/, 0);
        v52 = this;
      }
      else
      {
        v52 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_1/*""*/;
      }
      v51 = v73;
      goto LABEL_145;
    default:
      if ( baseSprite == 23 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ShopReleaseMaster___);
        v57 = v15->fields._Shop_k__BackingField;
        if ( !v57 )
          goto LABEL_170;
        v58 = (ShopReleaseMaster_o *)this;
        if ( !this )
          goto LABEL_170;
        this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                  (ShopReleaseMaster_o *)this,
                                                  v57->fields.id,
                                                  1,
                                                  0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v59 = v15->fields._Shop_k__BackingField;
          if ( !v59 )
            goto LABEL_170;
          v60 = ShopReleaseMaster__CondClearCheck(v58, v59->fields.id, 113, 0);
          v61 = v16->fields.textOnMask;
          if ( v60 )
          {
            v62 = 0;
            v63 = 0;
            v38 = 0;
            v64 = v16;
LABEL_137:
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            if ( v63 )
            {
              this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_12031/*"SHOP18_CANT_BUY_MSG_2"*/,
                                                        0);
              v66 = v15->fields._Shop_k__BackingField;
              if ( !v66 )
                goto LABEL_170;
              this = (ShopBuyItemListViewItemDraw_o *)System_String__Format(
                                                        (System_String_o *)this,
                                                        (Il2CppObject *)v66->fields.name,
                                                        0);
            }
            else
            {
              this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_12030/*"SHOP18_CANT_BUY_MSG_1"*/,
                                                        0);
              v62 = v64;
              v38 = v61;
            }
            if ( v62 )
              goto LABEL_144;
LABEL_170:
            sub_1C2D6EC(this, item);
          }
        }
        else
        {
          v61 = v16->fields.textOnMask;
        }
        v64 = 0;
        v63 = 1;
        v62 = v16;
        v38 = v61;
        v61 = 0;
        goto LABEL_137;
      }
      if ( baseSprite != 24 )
      {
LABEL_53:
        if ( !isNotServantGet && !isNotServantHaving && !isServantHaving && !isNotCostumeGet && !isNotCommandCodeGet )
          goto LABEL_146;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ShopReleaseMaster___);
        v40 = v15->fields._Shop_k__BackingField;
        if ( v40 )
        {
          v41 = (ShopReleaseMaster_o *)this;
          if ( this )
          {
            this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                      (ShopReleaseMaster_o *)this,
                                                      v40->fields.id,
                                                      1,
                                                      0);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_134;
            v43 = v15->fields._Shop_k__BackingField;
            if ( v43 )
            {
              this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(v41, v43->fields.id, 40, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
LABEL_65:
                v38 = v16->fields.textOnMask;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v39 = &StringLiteral_12038/*"SHOP_ALREADY_GET"*/;
LABEL_68:
                this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v39, 0);
LABEL_144:
                v51 = v38;
                v52 = this;
                goto LABEL_145;
              }
LABEL_134:
              v51 = v16->fields.textOnMask;
              v52 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_1/*""*/;
LABEL_145:
              ShopBuyItemListViewItemDraw__SetLabelText(this, v51, (System_String_o *)v52, v42);
              goto LABEL_146;
            }
          }
        }
        goto LABEL_170;
      }
      if ( !ShopEntity__IsSoldOut((ShopEntity_o *)this, 0) )
      {
        v38 = v16->fields.textOnMask;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v39 = &StringLiteral_5682/*"EVENT_REWARD_PARTS_GET_LIMIT"*/;
        goto LABEL_68;
      }
LABEL_146:
      prepareTextOnMask = (UnityEngine_Object_o *)v16->fields.prepareTextOnMask;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(prepareTextOnMask, 0, 0)
        && ShopBuyItemListViewItem__IsPrepareTextOnMask(v15, v68) )
      {
        v69 = v16->fields.prepareTextOnMask;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v70 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12064/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, 0);
        ShopBuyItemListViewItemDraw__SetLabelText(v70, v69, (System_String_o *)v70, v71);
      }
      return;
  }
}


void ShopBuyItemListViewItemDraw__SetNameAndMessageText(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        System_String_o *preparationMessage,
        System_String_o *preparationItemName,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v10; // x20
  UILabel_o *messageTextLabel; // x23
  System_String_o *v12; // x0
  ShopBuyItemListViewItemDraw_o *v13; // x0
  const MethodInfo *v14; // x3
  ShopBuyItemListViewItemDraw_o *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x3
  struct ShopEntity_o *Shop_k__BackingField; // x8
  UILabel_o *v19; // x21
  System_String_o *v20; // x22
  System_String_o *v21; // x0
  ShopBuyItemListViewItemDraw_o *v22; // x0
  const MethodInfo *v23; // x3
  bool v24; // w0
  const MethodInfo *v25; // x1
  UICrossNarrowLabel_o *v26; // x20
  System_String_o *v27; // x19
  LocalizationManager_c *v28; // x0
  UICrossNarrowLabel_o *v29; // x21
  System_String_o *v30; // x22
  UILabel_o *v31; // x20
  const MethodInfo *v32; // x1
  System_String_o *DetailText; // x0
  System_String_o *v34; // x0
  bool IsNullOrEmpty; // w0
  const MethodInfo *v36; // x1
  ShopBuyItemListViewItemDraw_o *nameTextLabel; // x20
  System_String_o *NameText; // x19
  System_String_o *v39; // x0
  System_String_o *value; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *message; // [xsp+8h] [xbp-48h] BYREF

  v10 = this;
  value = preparationItemName;
  message = preparationMessage;
  if ( (byte_4C234EE & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_15836/*"[000000]"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C2D490(&StringLiteral_25559/*"？"*/);
    byte_4C234EE = 1;
  }
  if ( isInPreparation )
  {
    messageTextLabel = v10->fields.messageTextLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__ReplaceCommonTag(preparationMessage, 0, 0);
    v13 = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_63457864(
                                             (System_String_o *)StringLiteral_15836/*"[000000]"*/,
                                             v12,
                                             0);
    ShopBuyItemListViewItemDraw__SetLabelText(v13, messageTextLabel, (System_String_o *)v13, v14);
    if ( item )
    {
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( this )
      {
        if ( ShopEntity__checkFlag((ShopEntity_o *)this, 4, 0) )
        {
          this = (ShopBuyItemListViewItemDraw_o *)v10->fields.nameTextLabel;
          if ( this )
          {
            v15 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_25559/*"？"*/;
LABEL_37:
            UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)this, (System_String_o *)v15, 0);
            return;
          }
        }
        else
        {
          IsNullOrEmpty = System_String__IsNullOrEmpty(preparationItemName, 0);
          nameTextLabel = (ShopBuyItemListViewItemDraw_o *)v10->fields.nameTextLabel;
          if ( IsNullOrEmpty )
          {
            NameText = ShopBuyItemListViewItem__get_NameText(item, v36);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v39 = NameText;
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v39 = preparationItemName;
          }
          this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v39, 0, 0);
          if ( nameTextLabel )
          {
            v15 = this;
            this = nameTextLabel;
            goto LABEL_37;
          }
        }
      }
    }
LABEL_42:
    sub_1C2D6EC(this, item);
  }
  if ( !item )
    goto LABEL_42;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_42;
  if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, 0) )
  {
    Shop_k__BackingField = item->fields._Shop_k__BackingField;
    if ( (!Shop_k__BackingField || Shop_k__BackingField->fields.purchaseType != 14)
      && ShopBuyItemListViewItem__TryGetClosedMessage(item, &message, &value, v17) )
    {
      v19 = v10->fields.messageTextLabel;
      v20 = message;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = LocalizationManager__ReplaceCommonTag(v20, 0, 0);
      v22 = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_63457864(
                                               (System_String_o *)StringLiteral_15836/*"[000000]"*/,
                                               v21,
                                               0);
      ShopBuyItemListViewItemDraw__SetLabelText(v22, v19, (System_String_o *)v22, v23);
      v24 = System_String__IsNullOrEmpty(value, 0);
      v26 = v10->fields.nameTextLabel;
      if ( v24 )
      {
        v27 = ShopBuyItemListViewItem__get_NameText(item, v25);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          v28 = LocalizationManager_TypeInfo;
LABEL_39:
          j_il2cpp_runtime_class_init_0(v28);
        }
      }
      else
      {
        v28 = LocalizationManager_TypeInfo;
        v27 = value;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          goto LABEL_39;
      }
      this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v27, 0, 0);
      if ( !v26 )
        goto LABEL_42;
      UICrossNarrowLabel__SetCrossNarrowText(v26, (System_String_o *)this, 0);
      return;
    }
  }
  v29 = v10->fields.nameTextLabel;
  v30 = ShopBuyItemListViewItem__get_NameText(item, v16);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v30, 0, 0);
  if ( !v29 )
    goto LABEL_42;
  UICrossNarrowLabel__SetCrossNarrowText(v29, (System_String_o *)this, 0);
  v31 = v10->fields.messageTextLabel;
  DetailText = ShopBuyItemListViewItem__get_DetailText(item, v32);
  v34 = LocalizationManager__ReplaceCommonTag(DetailText, 0, 0);
  this = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_63457864((System_String_o *)StringLiteral_15836/*"[000000]"*/, v34, 0);
  if ( !v31 )
    goto LABEL_42;
  UILabel__set_text(v31, (System_String_o *)this, 0);
}


void ShopBuyItemListViewItemDraw__SetNumText(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v6; // x19
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x3
  UILabel_o *numTitleLabel; // x21
  ShopBuyItemListViewItemDraw_o *v10; // x0
  const MethodInfo *v11; // x3
  ShopBuyItemListViewItemDraw_o *v12; // x0
  const MethodInfo *v13; // x3
  UILabel_o *numTextLabel; // x21
  int32_t HoldCount; // w0
  ShopBuyItemListViewItemDraw_o *NumberFormat; // x0
  const MethodInfo *v17; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v19; // x21
  ShopBuyItemListViewItemDraw_o *v20; // x0
  const MethodInfo *v21; // x3

  v6 = this;
  if ( (byte_4C234EF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_int__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_ShopBuyItemListViewItemDraw__SetNumText_b__79_0__);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C2D490(&StringLiteral_12070/*"SHOP_BUY_ITEM_HOLD"*/);
    byte_4C234EF = 1;
  }
  if ( isInPreparation )
  {
    if ( !item )
      goto LABEL_18;
    this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
    if ( !this )
      goto LABEL_18;
    v7 = ShopEntity__checkFlag((ShopEntity_o *)this, 2, 0);
    if ( v7 )
      goto LABEL_16;
  }
  else if ( !item )
  {
    goto LABEL_18;
  }
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_18;
  v7 = ShopEntity__checkHoldDisp((ShopEntity_o *)this, 0);
  if ( !v7 )
  {
LABEL_16:
    ShopBuyItemListViewItemDraw__SetLabelActive((ShopBuyItemListViewItemDraw_o *)v7, v6->fields.numTitleLabel, 0, v8);
    ShopBuyItemListViewItemDraw__SetLabelActive(v20, v6->fields.numTextLabel, 0, v21);
    return;
  }
  ShopBuyItemListViewItemDraw__SetLabelActive((ShopBuyItemListViewItemDraw_o *)v7, v6->fields.numTitleLabel, 1, v8);
  numTitleLabel = v6->fields.numTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12070/*"SHOP_BUY_ITEM_HOLD"*/, 0);
  ShopBuyItemListViewItemDraw__SetLabelText(v10, numTitleLabel, (System_String_o *)v10, v11);
  ShopBuyItemListViewItemDraw__SetLabelActive(v12, v6->fields.numTextLabel, 1, v13);
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
LABEL_18:
    sub_1C2D6EC(this, item);
  numTextLabel = v6->fields.numTextLabel;
  HoldCount = ShopEntity__getHoldCount((ShopEntity_o *)this, 0);
  NumberFormat = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__GetNumberFormat(HoldCount, 0);
  ShopBuyItemListViewItemDraw__SetLabelText(NumberFormat, numTextLabel, (System_String_o *)NumberFormat, v17);
  if ( item->fields._ShopKind_k__BackingField == 7 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
    v19 = (System_Action_int__o *)sub_1C2D6DC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v19, (Il2CppObject *)v6, Method_ShopBuyItemListViewItemDraw__SetNumText_b__79_0__, 0);
    StoneCountRefreshComponent__AttachToGameObject(gameObject, v19, 1, 0);
  }
}


void ShopBuyItemListViewItemDraw__SetPossessionInfo(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *possessionGrid; // x21
  UnityEngine_Object_o *possessionNumLabel; // x21
  UnityEngine_Object_o *coinNumLabel; // x21
  UnityEngine_Object_o *coinIcon; // x21
  UnityEngine_Object_o *treasureDeviceLevelLabel; // x21
  UnityEngine_Object_o *summonedSprite; // x21
  UnityEngine_Object_o *possessionBGSprite; // x21
  ShopEntity_o *Master_object; // x0
  __int64 v13; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x8
  unsigned int purchaseType; // w8
  int32_t v16; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x21
  int32_t v18; // w2
  void *monitor; // x21
  Il2CppClass *klass; // x22
  UIGrid_o *v21; // x20
  UILabel_o *v22; // x22
  UILabel_o *v23; // x23
  UILabel_o *v24; // x24
  UISprite_o *v25; // x25
  UISprite_o *v26; // x26
  UISprite_o *v27; // x19
  bool IsPossessionInfoDisp; // w27
  const MethodInfo *v29; // [xsp+8h] [xbp-68h]
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4C234FF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&ShopBuyItemUtility_TypeInfo);
    byte_4C234FF = 1;
  }
  entity = 0;
  possessionGrid = (UnityEngine_Object_o *)this->fields.possessionGrid;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(possessionGrid, 0, 0) )
  {
    possessionNumLabel = (UnityEngine_Object_o *)this->fields.possessionNumLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(possessionNumLabel, 0, 0) )
    {
      coinNumLabel = (UnityEngine_Object_o *)this->fields.coinNumLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(coinNumLabel, 0, 0) )
      {
        coinIcon = (UnityEngine_Object_o *)this->fields.coinIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(coinIcon, 0, 0) )
        {
          treasureDeviceLevelLabel = (UnityEngine_Object_o *)this->fields.treasureDeviceLevelLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(treasureDeviceLevelLabel, 0, 0) )
          {
            summonedSprite = (UnityEngine_Object_o *)this->fields.summonedSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Equality(summonedSprite, 0, 0) )
            {
              possessionBGSprite = (UnityEngine_Object_o *)this->fields.possessionBGSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              Master_object = (ShopEntity_o *)UnityEngine_Object__op_Equality(possessionBGSprite, 0, 0);
              if ( ((unsigned __int8)Master_object & 1) == 0 )
              {
                if ( !item )
                  goto LABEL_47;
                Shop_k__BackingField = item->fields._Shop_k__BackingField;
                if ( Shop_k__BackingField )
                {
                  purchaseType = Shop_k__BackingField->fields.purchaseType;
                  v16 = 0;
                  if ( purchaseType > 0x15 || ((1 << purchaseType) & 0x200110) == 0 )
                  {
LABEL_42:
                    Master_object = item->fields._Shop_k__BackingField;
                    if ( Master_object )
                    {
                      v21 = this->fields.possessionGrid;
                      v22 = this->fields.possessionNumLabel;
                      v23 = this->fields.coinNumLabel;
                      v24 = this->fields.treasureDeviceLevelLabel;
                      v25 = this->fields.summonedSprite;
                      v26 = this->fields.coinIcon;
                      v27 = this->fields.possessionBGSprite;
                      IsPossessionInfoDisp = ShopEntity__IsPossessionInfoDisp(Master_object, 0);
                      if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
                      ShopBuyItemUtility__SetPossessionInfo(
                        v16,
                        v21,
                        v22,
                        v23,
                        v26,
                        v24,
                        v25,
                        v27,
                        IsPossessionInfoDisp,
                        v29);
                      return;
                    }
LABEL_47:
                    sub_1C2D6EC(Master_object, v13);
                  }
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  Master_object = (ShopEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
                  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
                  if ( item->fields._Shop_k__BackingField )
                  {
                    Master_object = (ShopEntity_o *)ShopEntity__get_TargetId(item->fields._Shop_k__BackingField, 0);
                    v18 = (int)Master_object;
                  }
                  else
                  {
                    v18 = 0;
                  }
                  if ( !v17 )
                    goto LABEL_47;
                  if ( DataMasterBase_object__object__int___TryGetEntity(
                         v17,
                         &entity,
                         v18,
                         (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
                  {
                    Master_object = (ShopEntity_o *)entity;
                    if ( !entity )
                      goto LABEL_47;
                    Master_object = (ShopEntity_o *)ServantEntity__get_IsServant((ServantEntity_o *)entity, 0);
                    if ( ((unsigned __int8)Master_object & 1) != 0 )
                    {
                      if ( !entity )
                        goto LABEL_47;
                      klass = entity[1].klass;
                      monitor = entity[1].monitor;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      *(_QWORD *)&v31.fields.currentCryptoKey = klass;
                      *(_QWORD *)&v31.fields.fakeValue = monitor;
                      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v31, 0);
                      goto LABEL_42;
                    }
                  }
                }
                v16 = 0;
                goto LABEL_42;
              }
            }
          }
        }
      }
    }
  }
}


void ShopBuyItemListViewItemDraw__SetPriceIconText(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v6; // x19
  int bandSprite_high; // w8
  UILabel_o *priceLabelFree; // x19
  struct CommonConsumeEntity_array *CommonConsumeEntities_k__BackingField; // x24
  il2cpp_array_size_t max_length; // x8
  ShopBuyItemListViewItemDraw_o *priceIconLabel; // x19
  __int64 v12; // x2
  int32_t v13; // w20
  ShopEntity_o *v14; // x0
  int32_t v15; // w1
  int32_t v16; // w3
  int32_t v17; // w2
  ShopBuyItemListViewItemDraw_o *PriceIcon; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  System_Int64_array *UserItemCountsLong; // x0
  UIIconLabel_o *v22; // x22
  System_Int64_array *v23; // x21
  const MethodInfo *v24; // x1
  int32_t v25; // w23
  UIIconLabel_o *priceIconLabel2; // x19
  const MethodInfo *v27; // x1
  ShopEntity_o *Shop_k__BackingField; // x8
  int32_t v29; // w20
  const MethodInfo *v30; // x1
  UIIconLabel_o *v31; // x22
  ShopBuyItemListViewItemDraw_o *Price; // x0
  const MethodInfo *v33; // x1
  int32_t v34; // w23
  int32_t sellQp; // w24
  UIIconLabel_o *priceIconLabel1; // x21
  int32_t v37; // w22
  int32_t rangeSprite; // w23
  int32_t v39; // w21
  System_Int32_array *UserItemCounts; // x0
  UIIconLabel_o *v41; // x22
  System_Int32_array *v42; // x21
  const MethodInfo *v43; // x1
  int32_t v44; // w23
  ShopBuyItemListViewItemDraw_o *v45; // x19
  const MethodInfo *v46; // x1
  ShopEntity_o *v47; // x8
  int32_t v48; // w20
  struct ItemEntity_o *itemEntity; // x8
  UIIconLabel_o *v50; // x22
  ShopBuyItemListViewItemDraw_o *v51; // x0
  const MethodInfo *v52; // x2
  int32_t v53; // w23
  int32_t v54; // w24
  struct ItemEntity_o *v55; // x8
  const MethodInfo *v56; // x3
  ShopEntity_o *v57; // x0
  struct ItemEntity_o *v58; // x8
  ShopEntity_o *v59; // x0
  int32_t v60; // w20
  struct ItemEntity_o *v61; // x8
  double v62; // d0
  UILabel_o **p_LineText2digit; // x8

  v6 = this;
  if ( (byte_4C234F6 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&System_Math_TypeInfo);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C2D490(&StringLiteral_12099/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/);
    byte_4C234F6 = 1;
  }
  if ( !item )
    goto LABEL_105;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_105;
  bandSprite_high = HIDWORD(this->fields.bandSprite);
  if ( bandSprite_high == 14 )
  {
    CommonConsumeEntities_k__BackingField = item->fields._CommonConsumeEntities_k__BackingField;
    if ( !CommonConsumeEntities_k__BackingField )
      return;
    max_length = CommonConsumeEntities_k__BackingField->max_length;
    if ( !max_length )
      return;
    if ( (_DWORD)max_length == 1 )
    {
      if ( !CommonConsumeEntities_k__BackingField->m_Items[0] )
        return;
      priceIconLabel = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
      if ( !LODWORD(CommonConsumeEntities_k__BackingField->max_length) )
        goto LABEL_106;
      v13 = (int)this;
      this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[0];
      if ( !this )
        goto LABEL_105;
    }
    else
    {
      if ( (int)max_length < 2 )
        return;
      if ( CommonConsumeEntities_k__BackingField->m_Items[0] )
      {
        priceIconLabel1 = v6->fields.priceIconLabel1;
        this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
        if ( !LODWORD(CommonConsumeEntities_k__BackingField->max_length) )
          goto LABEL_106;
        v37 = (int)this;
        this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[0];
        if ( !this )
          goto LABEL_105;
        rangeSprite = (int32_t)this->fields.rangeSprite;
        this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0);
        if ( !priceIconLabel1 )
          goto LABEL_105;
        UIIconLabel__SetPurchaseDecision(priceIconLabel1, v37, rangeSprite, (int32_t)this, 0);
        if ( LODWORD(CommonConsumeEntities_k__BackingField->max_length) <= 1 )
          goto LABEL_106;
      }
      if ( !CommonConsumeEntities_k__BackingField->m_Items[1] )
        return;
      priceIconLabel = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel2;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
      if ( LODWORD(CommonConsumeEntities_k__BackingField->max_length) <= 1 )
        goto LABEL_106;
      v13 = (int)this;
      this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[1];
      if ( !this )
        goto LABEL_105;
    }
    v39 = (int32_t)this->fields.rangeSprite;
    this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0);
    if ( !priceIconLabel )
      goto LABEL_105;
    v16 = (int)this;
    this = priceIconLabel;
    v15 = v13;
    v17 = v39;
    goto LABEL_68;
  }
  if ( bandSprite_high == 13 )
  {
    priceLabelFree = v6->fields.priceLabelFree;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12099/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, 0);
    if ( priceLabelFree )
    {
      UILabel__set_text(priceLabelFree, (System_String_o *)this, 0);
      return;
    }
LABEL_105:
    sub_1C2D6EC(this, item);
  }
  if ( ShopEntity__GetItemCount((ShopEntity_o *)this, 0) >= 2 )
  {
    if ( isInPreparation )
    {
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_105;
      if ( ShopEntity__checkFlag((ShopEntity_o *)this, 64, 0) )
      {
        this = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel1;
        if ( !this )
          goto LABEL_105;
        UIIconLabel__SetEventQuestion((UIIconLabel_o *)this, 0);
        this = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel2;
        if ( !this )
          goto LABEL_105;
        goto LABEL_34;
      }
    }
    PriceIcon = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
    if ( (_DWORD)PriceIcon == 24
      || (PriceIcon = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v19),
          (_DWORD)PriceIcon == 14) )
    {
      UserItemCountsLong = ShopBuyItemListViewItemDraw__GetUserItemCountsLong(PriceIcon, v19);
      v22 = v6->fields.priceIconLabel1;
      v23 = UserItemCountsLong;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v24);
      if ( !item->fields._Shop_k__BackingField )
        goto LABEL_105;
      v25 = (int)this;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrices(item->fields._Shop_k__BackingField, 0, 0);
      if ( !v23 )
        goto LABEL_105;
      if ( LODWORD(v23->max_length) )
      {
        if ( !v22 )
          goto LABEL_105;
        UIIconLabel__SetPurchaseDecisionLong(v22, v25, (int32_t)this, v23->m_Items[0], 0);
        priceIconLabel2 = v6->fields.priceIconLabel2;
        this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v27);
        Shop_k__BackingField = item->fields._Shop_k__BackingField;
        if ( !Shop_k__BackingField )
          goto LABEL_105;
        v29 = (int)this;
        this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrices(Shop_k__BackingField, 1, 0);
        if ( LODWORD(v23->max_length) > 1 )
        {
          if ( !priceIconLabel2 )
            goto LABEL_105;
          UIIconLabel__SetPurchaseDecisionLong(priceIconLabel2, v29, (int32_t)this, v23->m_Items[1], 0);
          return;
        }
      }
    }
    else
    {
      UserItemCounts = ShopBuyItemListViewItemDraw__GetUserItemCounts(PriceIcon, item, v20);
      v41 = v6->fields.priceIconLabel1;
      v42 = UserItemCounts;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v43);
      if ( !item->fields._Shop_k__BackingField )
        goto LABEL_105;
      v44 = (int)this;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrices(item->fields._Shop_k__BackingField, 0, 0);
      if ( !v42 )
        goto LABEL_105;
      if ( LODWORD(v42->max_length) )
      {
        if ( !v41 )
          goto LABEL_105;
        UIIconLabel__SetPurchaseDecision(v41, v44, (int32_t)this, v42->m_Items[0], 0);
        v45 = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel2;
        this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v46);
        v47 = item->fields._Shop_k__BackingField;
        if ( !v47 )
          goto LABEL_105;
        v48 = (int)this;
        this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrices(v47, 1, 0);
        if ( LODWORD(v42->max_length) > 1 )
        {
          if ( !v45 )
            goto LABEL_105;
          v16 = v42->m_Items[1];
          v17 = (int)this;
          this = v45;
          v15 = v48;
          goto LABEL_68;
        }
      }
    }
    goto LABEL_106;
  }
  v14 = item->fields._Shop_k__BackingField;
  if ( v14 && ShopEntity__IsSoldOut(v14, 0) && item->fields._IsNotHavingShopItemReceived_k__BackingField )
  {
    this = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel;
    if ( !this )
      goto LABEL_105;
    v15 = 56;
    v16 = -1;
    v17 = 0;
LABEL_68:
    UIIconLabel__SetPurchaseDecision((UIIconLabel_o *)this, v15, v17, v16, 0);
    return;
  }
  if ( isInPreparation )
  {
    this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
    if ( !this )
      goto LABEL_105;
    if ( ShopEntity__checkFlag((ShopEntity_o *)this, 64, 0) )
    {
      this = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel;
      if ( !this )
        goto LABEL_105;
LABEL_34:
      UIIconLabel__SetEventQuestion((UIIconLabel_o *)this, 0);
      return;
    }
  }
  if ( ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item) == 24
    || ShopBuyItemListViewItem__get_PriceIcon(item, v30) == 14 )
  {
    v31 = v6->fields.priceIconLabel;
    Price = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v30);
    v34 = (int)Price;
    if ( item->fields._Shop_k__BackingField )
    {
      Price = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrice(item->fields._Shop_k__BackingField, 0);
      sellQp = (int)Price;
    }
    else
    {
      itemEntity = item->fields.itemEntity;
      if ( itemEntity )
        sellQp = itemEntity->fields.sellQp;
      else
        sellQp = 0;
    }
    this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItemDraw__GetUserItemCountsLong(Price, v33);
    if ( !this )
      goto LABEL_105;
    if ( LODWORD(this->fields.m_CancellationTokenSource) )
    {
      if ( !v31 )
        goto LABEL_105;
      UIIconLabel__SetPurchaseDecisionLong(v31, v34, sellQp, (int64_t)this->fields.rangeSprite, 0);
      goto LABEL_85;
    }
LABEL_106:
    sub_1C2D6F4(this, item, v12);
  }
  v50 = v6->fields.priceIconLabel;
  v51 = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v30);
  v53 = (int)v51;
  if ( item->fields._Shop_k__BackingField )
  {
    v51 = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrice(item->fields._Shop_k__BackingField, 0);
    v54 = (int)v51;
  }
  else
  {
    v55 = item->fields.itemEntity;
    if ( v55 )
      v54 = v55->fields.sellQp;
    else
      v54 = 0;
  }
  this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItemDraw__GetUserItemCounts(v51, item, v52);
  if ( !this )
    goto LABEL_105;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_106;
  if ( !v50 )
    goto LABEL_105;
  UIIconLabel__SetPurchaseDecision(v50, v53, v54, (int32_t)this->fields.rangeSprite, 0);
LABEL_85:
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_105;
  if ( ShopEntity__IsSetStrikethrough((ShopEntity_o *)this, isInPreparation, 0) )
  {
    v57 = item->fields._Shop_k__BackingField;
    if ( v57 )
    {
      v57 = (ShopEntity_o *)ShopEntity__GetPrice(v57, 0);
      if ( !(_DWORD)v57 )
        goto LABEL_102;
    }
    else
    {
      v58 = item->fields.itemEntity;
      if ( !v58 )
        goto LABEL_102;
      v57 = (ShopEntity_o *)(unsigned int)v58->fields.sellQp;
      if ( !(_DWORD)v57 )
        goto LABEL_102;
    }
    v59 = item->fields._Shop_k__BackingField;
    if ( v59 )
    {
      v60 = ShopEntity__GetPrice(v59, 0);
    }
    else
    {
      v61 = item->fields.itemEntity;
      if ( v61 )
        v60 = v61->fields.sellQp;
      else
        v60 = 0;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v62 = log10((double)v60);
    if ( v62 == INFINITY || (int)v62 )
    {
      p_LineText2digit = &v6->fields.LineText2digit;
      goto LABEL_104;
    }
LABEL_102:
    p_LineText2digit = &v6->fields.LineText;
LABEL_104:
    ShopBuyItemListViewItemDraw__SetLabelActive((ShopBuyItemListViewItemDraw_o *)v57, *p_LineText2digit, 1, v56);
  }
}


void ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v4; // x19
  struct ShopEntity_o *Shop_k__BackingField; // x8
  unsigned int shopType; // w9
  __int64 v7; // x2
  struct ShopEntity_o *v8; // x8
  struct System_Int32_array *targetIds; // x8
  ShopBuyItemListViewItemDraw_o *v10; // x0
  const MethodInfo *v11; // x3
  bool IsPaidExchange; // w20
  System_String_o **v13; // x8
  ShopBuyItemListViewItemDraw_o *v14; // x0
  const MethodInfo *v15; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4C234F5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_12132/*"SHOP_QUEST_FREE_EXCHANGE_CLEARED"*/);
    sub_1C2D490(&StringLiteral_12134/*"SHOP_QUEST_PAID_EXCHANGE_CLEARED"*/);
    sub_1C2D490(&StringLiteral_19647/*"freeShopCondId"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C2D490(&StringLiteral_12038/*"SHOP_ALREADY_GET"*/);
    byte_4C234F5 = 1;
  }
  entity = 0;
  if ( item )
  {
    Shop_k__BackingField = item->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_32;
    shopType = Shop_k__BackingField->fields.shopType;
    if ( shopType <= 0x10 && ((1 << shopType) & 0x1000C) != 0 )
    {
      if ( Shop_k__BackingField->fields.purchaseType == 4 )
      {
        this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_32;
        this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
        v8 = item->fields._Shop_k__BackingField;
        if ( !v8 )
          goto LABEL_32;
        targetIds = v8->fields.targetIds;
        if ( !targetIds )
          goto LABEL_32;
        if ( !LODWORD(targetIds->max_length) )
          sub_1C2D6F4(this, item, v7);
        if ( !this )
          goto LABEL_32;
        this = (ShopBuyItemListViewItemDraw_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  &entity,
                                                  targetIds->m_Items[0],
                                                  (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (ShopBuyItemListViewItemDraw_o *)entity;
          if ( !entity )
            goto LABEL_32;
          this = (ShopBuyItemListViewItemDraw_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v10 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12038/*"SHOP_ALREADY_GET"*/, 0);
            ShopBuyItemListViewItemDraw__SetLabelText(v10, v4->fields.textOnMask, (System_String_o *)v10, v11);
          }
        }
      }
      Shop_k__BackingField = item->fields._Shop_k__BackingField;
      if ( !Shop_k__BackingField )
        goto LABEL_32;
    }
    this = (ShopBuyItemListViewItemDraw_o *)Shop_k__BackingField->fields.script;
    if ( this )
    {
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)this,
              (Il2CppObject *)StringLiteral_19647/*"freeShopCondId"*/,
              (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        return;
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( this )
      {
        if ( !ShopEntity__IsAfterTheFreeShopReleaseDate((ShopEntity_o *)this, 0) )
          return;
        this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
        if ( this )
        {
          IsPaidExchange = ShopEntity__IsPaidExchange((ShopEntity_o *)this, 0);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v13 = (System_String_o **)&StringLiteral_12134/*"SHOP_QUEST_PAID_EXCHANGE_CLEARED"*/;
          if ( !IsPaidExchange )
            v13 = (System_String_o **)&StringLiteral_12132/*"SHOP_QUEST_FREE_EXCHANGE_CLEARED"*/;
          v14 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get(*v13, 0);
          ShopBuyItemListViewItemDraw__SetLabelText(v14, v4->fields.textOnMask, (System_String_o *)v14, v15);
          this = (ShopBuyItemListViewItemDraw_o *)v4->fields.freeExchangeConditionNoticeRoot;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, IsPaidExchange, 0);
            return;
          }
        }
      }
    }
LABEL_32:
    sub_1C2D6EC(this, item);
  }
}


void ShopBuyItemListViewItemDraw__SetRestCountText(
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
  unsigned int baseSprite; // w8
  const MethodInfo *v18; // x2
  struct ShopEntity_o *Shop_k__BackingField; // x0
  Il2CppObject *MasterData_object; // x21
  struct ShopEntity_o *v21; // x8
  struct ShopEntity_o *v22; // x8
  int32_t limitNum; // w9
  UILabel_o *restCountLabel; // x19
  System_String_o *v25; // x20
  int32_t v26; // w0
  struct ShopEntity_o *v27; // x8
  int32_t purchaseType; // w20
  __int64 *v29; // x8
  struct ShopEntity_o *v30; // x8
  ShopReleaseMaster_o *v31; // x26
  struct ShopEntity_o *v32; // x8
  struct ShopEntity_o *v33; // x8
  struct ShopEntity_o *v34; // x8
  bool v35; // w8
  int v36; // w21
  ShopBuyItemListViewItemDraw_o *v37; // x0
  const MethodInfo *v38; // x3
  Il2CppObject *NumberFormat; // x1
  System_String_o *v40; // x0
  struct ShopEntity_o *v41; // x8
  struct ShopEntity_o *v42; // x8
  int32_t nameTextLabel; // w20
  System_String_o *v44; // x21

  v16 = this;
  if ( (byte_4C234F0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_12074/*"SHOP_BUY_PREPARATION"*/);
    sub_1C2D490(&StringLiteral_8331/*"LOTTERY_REST_NUM"*/);
    sub_1C2D490(&StringLiteral_14813/*"UNIT_REST_NONE"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C2D490(&StringLiteral_3853/*"COUNT_INFO"*/);
    byte_4C234F0 = 1;
  }
  *isNotServantGet = 0;
  *isNotServantHaving = 0;
  *isServantHaving = 0;
  *isNotCostumeGet = 0;
  *isNotCommandCodeGet = 0;
  if ( !isInPreparation )
  {
    if ( !item )
      goto LABEL_65;
LABEL_11:
    Shop_k__BackingField = item->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_33;
    if ( Shop_k__BackingField->fields.limitNum > 0 )
    {
      this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_65;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C211E1 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C211E1 = 1;
      }
      this = (ShopBuyItemListViewItemDraw_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ShopBuyItemListViewItemDraw_o *)NetworkManager_TypeInfo;
      }
      v21 = item->fields._Shop_k__BackingField;
      if ( !v21 || !MasterData_object )
        goto LABEL_65;
      this = (ShopBuyItemListViewItemDraw_o *)UserShopMaster__GetEntityDefinitely(
                                                (UserShopMaster_o *)MasterData_object,
                                                *(_QWORD *)&this->fields.priceLabelFree->fields.updateAnchors,
                                                v21->fields.baseShopId,
                                                0);
      v22 = item->fields._Shop_k__BackingField;
      if ( v22 )
      {
        limitNum = v22->fields.limitNum;
        if ( !this )
          goto LABEL_65;
      }
      else
      {
        limitNum = 0;
        if ( !this )
          goto LABEL_65;
      }
      v36 = limitNum - HIDWORD(this->fields.m_CancellationTokenSource);
      if ( v36 >= 1 && (!v22 || !ShopEntity__IsSoldOut(item->fields._Shop_k__BackingField, 0)) )
      {
        restCountLabel = v16->fields.restCountLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3853/*"COUNT_INFO"*/, 0);
        v26 = v36;
LABEL_58:
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v26, 0);
        v40 = v25;
        goto LABEL_59;
      }
      if ( !item->fields._IsNotHavingShopItemReceived_k__BackingField )
        goto LABEL_9;
      restCountLabel = v16->fields.restCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
LABEL_53:
      v29 = &StringLiteral_14813/*"UNIT_REST_NONE"*/;
      goto LABEL_54;
    }
    if ( ShopEntity__IsSoldOut(Shop_k__BackingField, 0) )
      goto LABEL_9;
    v27 = item->fields._Shop_k__BackingField;
    if ( v27 )
      purchaseType = v27->fields.purchaseType;
    else
LABEL_33:
      purchaseType = item->fields.itemEntity != 0;
    restCountLabel = v16->fields.restCountLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( purchaseType == 16 )
    {
      v29 = &StringLiteral_8331/*"LOTTERY_REST_NUM"*/;
      goto LABEL_54;
    }
    goto LABEL_53;
  }
  if ( !item )
    goto LABEL_65;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_65;
  baseSprite = (unsigned int)this->fields.baseSprite;
  if ( baseSprite > 9 || ((1 << baseSprite) & 0x2E0) == 0 )
  {
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_65;
    this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
    v30 = item->fields._Shop_k__BackingField;
    if ( !v30 )
      goto LABEL_65;
    v31 = (ShopReleaseMaster_o *)this;
    if ( !this )
      goto LABEL_65;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(
                                              (ShopReleaseMaster_o *)this,
                                              v30->fields.id,
                                              38,
                                              0);
    *isNotServantGet = (unsigned __int8)this & 1;
    v32 = item->fields._Shop_k__BackingField;
    if ( !v32 )
      goto LABEL_65;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v31, v32->fields.id, 41, 0);
    *isNotServantHaving = (unsigned __int8)this & 1;
    v33 = item->fields._Shop_k__BackingField;
    if ( !v33 )
      goto LABEL_65;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v31, v33->fields.id, 40, 0);
    *isServantHaving = (unsigned __int8)this & 1;
    v34 = item->fields._Shop_k__BackingField;
    if ( !v34 )
      goto LABEL_65;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v31, v34->fields.id, 78, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v35 = 1;
    }
    else
    {
      v41 = item->fields._Shop_k__BackingField;
      if ( !v41 )
        goto LABEL_65;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v31, v41->fields.id, 79, 0);
      v35 = (unsigned __int8)this & 1;
    }
    *isNotCostumeGet = v35;
    v42 = item->fields._Shop_k__BackingField;
    if ( !v42 )
      goto LABEL_65;
    *isNotCommandCodeGet = ShopReleaseMaster__isExistCondType(v31, v42->fields.id, 108, 0);
    this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
    if ( !this )
      goto LABEL_65;
  }
  if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, 0) )
  {
LABEL_9:
    ShopBuyItemListViewItemDraw__ShowSoldOut(v16, item, v18);
    return;
  }
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
LABEL_65:
    sub_1C2D6EC(this, item);
  switch ( LODWORD(this->fields.baseSprite) )
  {
    case 2:
      goto LABEL_9;
    case 5:
    case 7:
    case 9:
      goto LABEL_27;
    case 6:
      if ( !ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)this, 0, 0) )
        goto LABEL_71;
LABEL_27:
      restCountLabel = v16->fields.restCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3853/*"COUNT_INFO"*/, 0);
      v26 = 0;
      goto LABEL_58;
    default:
      if ( *isNotServantGet || *isNotServantHaving )
        goto LABEL_68;
      if ( *isServantHaving )
        goto LABEL_69;
      if ( *isNotCostumeGet )
      {
        nameTextLabel = 0;
LABEL_76:
        restCountLabel = v16->fields.restCountLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v44 = LocalizationManager__Get((System_String_o *)StringLiteral_3853/*"COUNT_INFO"*/, 0);
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(nameTextLabel, 0);
        v40 = v44;
LABEL_59:
        v37 = (ShopBuyItemListViewItemDraw_o *)System_String__Format(v40, NumberFormat, 0);
        goto LABEL_60;
      }
      if ( *isNotCommandCodeGet )
      {
LABEL_68:
        if ( *isServantHaving )
LABEL_69:
          nameTextLabel = (int32_t)this->fields.nameTextLabel;
        else
          nameTextLabel = *isNotServantHaving;
        goto LABEL_76;
      }
LABEL_71:
      if ( ShopBuyItemListViewItem__IsPrepareTextOnMask(item, (const MethodInfo *)item) )
        goto LABEL_11;
      restCountLabel = v16->fields.restCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v29 = &StringLiteral_12074/*"SHOP_BUY_PREPARATION"*/;
      break;
  }
LABEL_54:
  v37 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v29, 0);
LABEL_60:
  ShopBuyItemListViewItemDraw__SetLabelText(v37, restCountLabel, (System_String_o *)v37, v38);
}


void ShopBuyItemListViewItemDraw__SetReturnButton(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        const MethodInfo *method)
{
  UnityEngine_Object_o *returnItemButton; // x22
  UnityEngine_Object_o *returnItemButtonSprite; // x22
  UnityEngine_Object_o *returnItemButtonLabel; // x22
  void *Shop_k__BackingField; // x0
  __int64 v11; // x1
  struct UICommonButton_o *v12; // x8
  UnityEngine_Object_o *returnItemButtonDragScroll; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppClass *klass; // x1
  UILabel_o *v17; // x20
  UISprite_o *v18; // x20
  ShopBuyItemListViewItemDraw_c *v19; // x0
  System_String_o *ReturnItemButtonSpriteName; // x21
  bool v21; // w1
  Il2CppObject *component; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C234F3 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_TryGetComponent_UIDragScrollView___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ShopBuyItemListViewItemDraw_TypeInfo);
    sub_1C2D490(&StringLiteral_11136/*"RETURN_ITEM_LIST_BUTTON_TEXT"*/);
    byte_4C234F3 = 1;
  }
  component = 0;
  returnItemButton = (UnityEngine_Object_o *)this->fields.returnItemButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(returnItemButton, 0, 0) )
  {
    returnItemButtonSprite = (UnityEngine_Object_o *)this->fields.returnItemButtonSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(returnItemButtonSprite, 0, 0) )
    {
      returnItemButtonLabel = (UnityEngine_Object_o *)this->fields.returnItemButtonLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Shop_k__BackingField = (void *)UnityEngine_Object__op_Equality(returnItemButtonLabel, 0, 0);
      if ( ((unsigned __int8)Shop_k__BackingField & 1) == 0 )
      {
        if ( !item )
          goto LABEL_43;
        Shop_k__BackingField = item->fields._Shop_k__BackingField;
        if ( !Shop_k__BackingField || *((_DWORD *)Shop_k__BackingField + 12) != 23 )
          goto LABEL_38;
        if ( isInPreparation )
        {
          v12 = this->fields.returnItemButton;
        }
        else
        {
          Shop_k__BackingField = (void *)ShopEntity__IsSoldOut((ShopEntity_o *)Shop_k__BackingField, 0);
          v12 = this->fields.returnItemButton;
          if ( ((unsigned __int8)Shop_k__BackingField & 1) == 0 )
          {
            v11 = 0;
            goto LABEL_20;
          }
        }
        v11 = 3;
LABEL_20:
        if ( !v12 )
          goto LABEL_43;
        ((void (__fastcall *)(struct UICommonButton_o *__return_ptr, struct UICommonButton_o *, __int64, __int64, const MethodInfo *))v12->klass->vtable._14_SetState.methodPtr)(
          v12,
          v12,
          v11,
          1,
          v12->klass->vtable._14_SetState.method);
        returnItemButtonDragScroll = (UnityEngine_Object_o *)this->fields.returnItemButtonDragScroll;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(returnItemButtonDragScroll, 0, 0) )
        {
          Shop_k__BackingField = this->fields.listViewObject;
          if ( !Shop_k__BackingField )
            goto LABEL_43;
          Shop_k__BackingField = (void *)UnityEngine_Component__TryGetComponent_object_(
                                           (UnityEngine_Component_o *)Shop_k__BackingField,
                                           &component,
                                           (const MethodInfo_30C621C *)Method_UnityEngine_Component_TryGetComponent_UIDragScrollView___);
          if ( ((unsigned __int8)Shop_k__BackingField & 1) != 0 )
          {
            if ( component )
            {
              Shop_k__BackingField = this->fields.returnItemButtonDragScroll;
              if ( Shop_k__BackingField )
              {
                klass = component[2].klass;
                *((_QWORD *)Shop_k__BackingField + 4) = klass;
                sub_1C2D434((CGThumbnailListItem_o *)((char *)Shop_k__BackingField + 32), (int32_t)klass, v14, v15);
                v17 = this->fields.returnItemButtonLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Shop_k__BackingField = LocalizationManager__Get((System_String_o *)StringLiteral_11136/*"RETURN_ITEM_LIST_BUTTON_TEXT"*/, 0);
                if ( v17 )
                {
                  UILabel__set_text(v17, (System_String_o *)Shop_k__BackingField, 0);
                  v18 = this->fields.returnItemButtonSprite;
                  v19 = ShopBuyItemListViewItemDraw_TypeInfo;
                  if ( !ShopBuyItemListViewItemDraw_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewItemDraw_TypeInfo);
                    v19 = ShopBuyItemListViewItemDraw_TypeInfo;
                  }
                  ReturnItemButtonSpriteName = v19->static_fields->ReturnItemButtonSpriteName;
                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                  AtlasManager__SetShopBanner_40386924(v18, ReturnItemButtonSpriteName, 0);
                  Shop_k__BackingField = this->fields.returnItemButton;
                  if ( Shop_k__BackingField )
                  {
                    Shop_k__BackingField = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)Shop_k__BackingField,
                                             0);
                    if ( Shop_k__BackingField )
                    {
                      v21 = 1;
LABEL_41:
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Shop_k__BackingField, v21, 0);
                      return;
                    }
                  }
                }
              }
            }
            goto LABEL_43;
          }
        }
LABEL_38:
        Shop_k__BackingField = this->fields.returnItemButton;
        if ( Shop_k__BackingField )
        {
          Shop_k__BackingField = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)Shop_k__BackingField,
                                   0);
          if ( Shop_k__BackingField )
          {
            v21 = 0;
            goto LABEL_41;
          }
        }
LABEL_43:
        sub_1C2D6EC(Shop_k__BackingField, v11);
      }
    }
  }
}


void ShopBuyItemListViewItemDraw__SetShopResetText(
        ShopBuyItemListViewItemDraw_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *shopResetNoticeLabel; // x21
  void *IsSoldOut; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  int32_t baseShopId; // w21
  Il2CppObject *Master_object; // x22
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x3
  Il2CppObject *v13; // x22
  UserShopEntity_o *EntityDefinitely; // x21
  const MethodInfo *v15; // x3
  char v16; // w20
  bool v17; // w20
  int32_t resetLimitNum; // w8
  __int64 *v19; // x8
  System_String_o *v20; // x2
  System_Int32_array *v21; // [xsp+0h] [xbp-50h] BYREF
  ShopResetEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C234FE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ShopResetMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserShopMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_12093/*"SHOP_CAN_NOT_RESET_NOTICE_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_12095/*"SHOP_CAN_RESET_NOTICE_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_12094/*"SHOP_CAN_NOT_RESET_SOLD_OUT_NOTICE_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C234FE = 1;
  }
  v21 = 0;
  entity = 0;
  shopResetNoticeLabel = (UnityEngine_Object_o *)this->fields.shopResetNoticeLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsSoldOut = (void *)UnityEngine_Object__op_Equality(shopResetNoticeLabel, 0, 0);
  if ( ((unsigned __int8)IsSoldOut & 1) == 0 )
  {
    if ( shopEntity )
    {
      baseShopId = shopEntity->fields.baseShopId;
      ShopBuyItemListViewItemDraw__SetLabelText(
        (ShopBuyItemListViewItemDraw_o *)IsSoldOut,
        this->fields.shopResetNoticeLabel,
        (System_String_o *)StringLiteral_1/*""*/,
        v8);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ShopResetMaster___);
      IsSoldOut = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ItemMaster___);
      if ( IsSoldOut )
      {
        if ( Master_object )
        {
          v11 = ShopResetMaster__TryGetEntity(
                  (ShopResetMaster_o *)Master_object,
                  &entity,
                  baseShopId,
                  *((_DWORD *)IsSoldOut + 25),
                  0);
          if ( !v11 )
          {
            v17 = 0;
LABEL_42:
            ShopBuyItemListViewItemDraw__SetLabelActive(
              (ShopBuyItemListViewItemDraw_o *)v11,
              this->fields.shopResetNoticeLabel,
              v17,
              v12);
            return;
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v13 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserShopMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C211E1 )
          {
            sub_1C2D490(&NetworkManager_TypeInfo);
            byte_4C211E1 = 1;
          }
          IsSoldOut = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            IsSoldOut = NetworkManager_TypeInfo;
          }
          if ( v13 )
          {
            EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                                 (UserShopMaster_o *)v13,
                                 *(_QWORD *)(*((_QWORD *)IsSoldOut + 23) + 64LL),
                                 baseShopId,
                                 0);
            IsSoldOut = (void *)ShopEntity__IsSoldOut(shopEntity, 0);
            if ( ((unsigned __int8)IsSoldOut & 1) != 0
              && (IsSoldOut = (void *)ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0),
                  ((unsigned __int8)IsSoldOut & 1) == 0) )
            {
              IsSoldOut = (void *)ShopEntity__IsAnotherItemBuyable(shopEntity, &v21, 0);
              v16 = (unsigned __int8)IsSoldOut ^ 1;
            }
            else
            {
              v16 = 0;
            }
            if ( entity )
            {
              resetLimitNum = entity->fields.resetLimitNum;
              if ( !resetLimitNum )
                goto LABEL_30;
              if ( EntityDefinitely )
              {
                if ( resetLimitNum <= EntityDefinitely->fields.resetNum )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  if ( (v16 & 1) != 0 )
                    v19 = &StringLiteral_12094/*"SHOP_CAN_NOT_RESET_SOLD_OUT_NOTICE_MESSAGE"*/;
                  else
                    v19 = &StringLiteral_12093/*"SHOP_CAN_NOT_RESET_NOTICE_MESSAGE"*/;
                  goto LABEL_40;
                }
LABEL_30:
                if ( (v16 & 1) == 0 )
                {
                  v20 = (System_String_o *)StringLiteral_1/*""*/;
                  v17 = 0;
LABEL_41:
                  ShopBuyItemListViewItemDraw__SetLabelText(
                    (ShopBuyItemListViewItemDraw_o *)IsSoldOut,
                    this->fields.shopResetNoticeLabel,
                    v20,
                    v15);
                  goto LABEL_42;
                }
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v19 = &StringLiteral_12095/*"SHOP_CAN_RESET_NOTICE_MESSAGE"*/;
LABEL_40:
                IsSoldOut = LocalizationManager__Get((System_String_o *)*v19, 0);
                v20 = (System_String_o *)IsSoldOut;
                v17 = 1;
                goto LABEL_41;
              }
            }
          }
        }
      }
    }
    sub_1C2D6EC(IsSoldOut, v7);
  }
}


void ShopBuyItemListViewItemDraw__SetSpriteActive(
        ShopBuyItemListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4C234E9 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C234E9 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0)) == 0 )
      sub_1C2D6EC(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
  }
}


void ShopBuyItemListViewItemDraw__SetSpriteName(
        ShopBuyItemListViewItemDraw_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C234EA & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C234EA = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( !v6 )
  {
    if ( !sprite )
      sub_1C2D6EC(v6, v7);
    UISprite__set_spriteName(sprite, spriteName, 0);
  }
}


void ShopBuyItemListViewItemDraw__ShowSoldOut(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v4; // x19
  bool v5; // w0
  UnityEngine_Object_o *soldOutImage; // x21
  bool v7; // w20
  System_String_o *v8; // x0
  const MethodInfo *v9; // x3
  UILabel_o *restCountLabel; // x1
  System_String_o *v11; // x2
  UILabel_o *v12; // x19

  v4 = this;
  if ( (byte_4C234FD & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_12083/*"SHOP_BUY_SOLD_OUT"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C234FD = 1;
  }
  if ( !item )
    goto LABEL_21;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_21;
  v5 = ShopEntity__checkFlag((ShopEntity_o *)this, 0x8000, 0);
  soldOutImage = (UnityEngine_Object_o *)v4->fields.soldOutImage;
  v7 = v5;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (System_String_o *)UnityEngine_Object__op_Inequality(0, soldOutImage, 0);
  if ( v7 )
  {
    if ( ((unsigned __int8)v8 & 1) == 0 )
    {
LABEL_12:
      restCountLabel = v4->fields.restCountLabel;
      v11 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_20;
    }
    this = (ShopBuyItemListViewItemDraw_o *)v4->fields.soldOutImage;
    if ( this )
    {
      this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        goto LABEL_12;
      }
    }
LABEL_21:
    sub_1C2D6EC(this, item);
  }
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    this = (ShopBuyItemListViewItemDraw_o *)v4->fields.soldOutImage;
    if ( !this )
      goto LABEL_21;
    this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  v12 = v4->fields.restCountLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12083/*"SHOP_BUY_SOLD_OUT"*/, 0);
  restCountLabel = v12;
  v11 = v8;
LABEL_20:
  ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v8, restCountLabel, v11, v9);
}


void ShopBuyItemListViewItemDraw__UpdateListViewDraw(
        ShopBuyItemListViewItemDraw_o *this,
        int32_t mode,
        ShopBuyItemListViewManager_o *manager,
        const MethodInfo *method)
{
  UnityEngine_Object_o *anotherBuyableWidget; // x21
  struct UIWidget_o *v8; // x0
  __int64 v9; // x1
  struct System_Int32_array *possessionAnotherItemIds; // x8

  if ( (byte_4C234E3 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C234E3 = 1;
  }
  if ( mode )
  {
    anotherBuyableWidget = (UnityEngine_Object_o *)this->fields.anotherBuyableWidget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = (struct UIWidget_o *)UnityEngine_Object__op_Inequality(anotherBuyableWidget, 0, 0);
    if ( ((unsigned __int8)v8 & 1) != 0 )
    {
      possessionAnotherItemIds = this->fields.possessionAnotherItemIds;
      if ( possessionAnotherItemIds )
      {
        if ( SLODWORD(possessionAnotherItemIds->max_length) >= 2 )
        {
          if ( !manager || (v8 = this->fields.anotherBuyableWidget) == 0 )
            sub_1C2D6EC(v8, v9);
          ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, float))v8->klass->vtable._8_set_alpha.methodPtr)(
            v8,
            v8->klass->vtable._8_set_alpha.method,
            manager->fields.alphaAnimNow);
        }
      }
    }
  }
}


void ShopBuyItemListViewItemDraw___SetNumText_b__79_0(
        ShopBuyItemListViewItemDraw_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *numTextLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_4C23501 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    byte_4C23501 = 1;
  }
  numTextLabel = this->fields.numTextLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0);
  if ( !numTextLabel )
    sub_1C2D6EC(NumberFormat, v7);
  UILabel__set_text(numTextLabel, NumberFormat, 0);
}