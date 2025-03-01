void __fastcall ShopBuyItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1

  if ( (byte_4BF9B5C & 1) == 0 )
  {
    sub_1C2E12C(&ShopBuyItemListViewItemDraw_TypeInfo, v1);
    sub_1C2E12C(&StringLiteral_20711/*"img_list_bg04"*/, v8);
    byte_4BF9B5C = 1;
  }
  ShopBuyItemListViewItemDraw_TypeInfo->static_fields->BASE_IMG_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_20711/*"img_list_bg04"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)ShopBuyItemListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_20711/*"img_list_bg04"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct UISprite_o *v12; // x8
  struct UIAtlas_o *mAtlas; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct UISprite_o *v20; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4BF9B41 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BF9B41 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL);
  if ( !v4 )
  {
    v12 = this->fields.baseSprite;
    if ( !v12
      || (mAtlas = v12->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.baseAtlas, (int64_t)mAtlas, v6, v7, v8, v9, v10, v11),
          (v20 = this->fields.baseSprite) == 0LL) )
    {
      sub_1C2E388(v4, v5);
    }
    mSpriteName = v20->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.baseSpriteName,
      (int64_t)mSpriteName,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__ChangeNextAnotherItemIcon(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewManager_o *manager,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1
  struct System_Int32_array *possessionAnotherItemIds; // x8
  il2cpp_array_size_t max_length; // w10
  int v9; // w9
  UISprite_o *anotherPayItemImage; // x19
  int32_t v11; // w20

  if ( (byte_4BF9B43 & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, manager);
    byte_4BF9B43 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)this->fields.possessionAnotherItemIds,
                    0LL);
  if ( !IsNullOrEmpty )
  {
    possessionAnotherItemIds = this->fields.possessionAnotherItemIds;
    if ( !possessionAnotherItemIds || !manager )
      sub_1C2E388(IsNullOrEmpty, v6);
    max_length = possessionAnotherItemIds->max_length;
    v9 = manager->fields.alphaAnimCnt % (int)max_length;
    if ( v9 >= max_length )
      sub_1C2E390(IsNullOrEmpty, v6);
    anotherPayItemImage = this->fields.anotherPayItemImage;
    v11 = possessionAnotherItemIds->m_Items[v9 + 1];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(anotherPayItemImage, v11, 0LL);
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
  int m_CancellationTokenSource; // w8
  int v9; // w9
  __int64 v10; // x10

  if ( (byte_4BF9B57 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_SetItemMaster___, ids);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BF9B57 = 1;
  }
  if ( !ids )
    goto LABEL_20;
  if ( !*(_QWORD *)&ids->max_length )
    return 0;
  this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_1C2E388(this, ids);
  this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_SetItemMaster___);
  v5 = *(_QWORD *)&ids->max_length;
  if ( (int)v5 < 1 )
    return 0;
  v6 = (SetItemMaster_o *)this;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v5 )
LABEL_21:
      sub_1C2E390(this, ids);
    if ( !v6 )
      goto LABEL_20;
    this = (ShopBuyItemListViewItemDraw_o *)SetItemMaster__GetList(v6, ids->m_Items[v7 + 1], 0LL);
    if ( !this )
      goto LABEL_20;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource >= 1 )
      break;
LABEL_17:
    LODWORD(v5) = ids->max_length;
    if ( (__int64)++v7 >= (int)v5 )
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


System_Int32_array *__fastcall ShopBuyItemListViewItemDraw__GetUserItemCounts(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 SelfUserGame; // x0
  __int64 v8; // x1
  _DWORD *v9; // x21
  System_Int32_array *v10; // x19
  Il2CppObject *MasterData_object; // x21
  __int64 v12; // x9
  ShopEntity_o *v13; // x0
  int64_t v14; // x20
  int32_t v15; // w8
  UserItemMaster_o *v16; // x21
  unsigned int ItemCount; // w0
  ShopEntity_o *Shop_k__BackingField; // x8
  unsigned __int64 v19; // x22
  __int64 v20; // x25
  int64_t v21; // x24
  unsigned int v22; // w0

  if ( (byte_4BF9B58 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserItemMaster___, item);
    sub_1C2E12C(&int___TypeInfo, v4);
    sub_1C2E12C(&NetworkManager_TypeInfo, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BF9B58 = 1;
  }
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !item || (v9 = (_DWORD *)SelfUserGame, (SelfUserGame = (__int64)item->fields._Shop_k__BackingField) == 0) )
LABEL_36:
    sub_1C2E388(SelfUserGame, v8);
  switch ( *(_DWORD *)(SelfUserGame + 68) )
  {
    case 1:
      SelfUserGame = sub_1C2E1D4(int___TypeInfo, 1LL);
      if ( !v9 )
        goto LABEL_36;
      v10 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_36;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_56;
      v15 = v9[44];
      goto LABEL_54;
    case 2:
      SelfUserGame = sub_1C2E1D4(int___TypeInfo, 1LL);
      if ( !v9 )
        goto LABEL_36;
      v10 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_36;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_56;
      v15 = v9[24];
      goto LABEL_54;
    case 4:
      SelfUserGame = sub_1C2E1D4(int___TypeInfo, 1LL);
      if ( !v9 )
        goto LABEL_36;
      v10 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_36;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_56;
      v15 = v9[46];
      goto LABEL_54;
    case 6:
    case 0xB:
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_36;
      SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)SelfUserGame,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !item->fields._Shop_k__BackingField )
        goto LABEL_36;
      v16 = (UserItemMaster_o *)SelfUserGame;
      ItemCount = ShopEntity__GetItemCount(item->fields._Shop_k__BackingField, 0LL);
      SelfUserGame = sub_1C2E1D4(int___TypeInfo, ItemCount);
      Shop_k__BackingField = item->fields._Shop_k__BackingField;
      if ( !Shop_k__BackingField )
        goto LABEL_36;
      v10 = (System_Int32_array *)SelfUserGame;
      v19 = 0LL;
      v20 = SelfUserGame + 32;
      break;
    case 8:
    case 9:
    case 0xC:
      v10 = (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 1LL);
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_36;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BF81D5 )
      {
        sub_1C2E12C(&NetworkManager_TypeInfo, v8);
        byte_4BF81D5 = 1;
      }
      SelfUserGame = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        SelfUserGame = (__int64)NetworkManager_TypeInfo;
      }
      if ( !item->fields._Shop_k__BackingField )
        goto LABEL_36;
      v12 = *(_QWORD *)(SelfUserGame + 184);
      v13 = item->fields._Shop_k__BackingField;
      v14 = *(_QWORD *)(v12 + 64);
      SelfUserGame = ShopEntity__GetItemIDs(v13, 0, 0LL);
      if ( !MasterData_object )
        goto LABEL_36;
      SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)MasterData_object,
                                v14,
                                SelfUserGame,
                                0LL);
      if ( !SelfUserGame || !v10 )
        goto LABEL_36;
      if ( !v10->max_length )
        goto LABEL_56;
      v15 = *(_DWORD *)(SelfUserGame + 28);
      goto LABEL_54;
    case 0xA:
      SelfUserGame = sub_1C2E1D4(int___TypeInfo, 1LL);
      if ( !v9 )
        goto LABEL_36;
      v10 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_36;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_56;
      v15 = v9[47];
LABEL_54:
      v10->m_Items[1] = v15;
      return v10;
    default:
      v22 = ShopEntity__GetItemCount((ShopEntity_o *)SelfUserGame, 0LL);
      return (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, v22);
  }
  while ( (__int64)v19 < ShopEntity__GetItemCount(Shop_k__BackingField, 0LL) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BF81D5 )
    {
      sub_1C2E12C(&NetworkManager_TypeInfo, v8);
      byte_4BF81D5 = 1;
    }
    SelfUserGame = (__int64)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      SelfUserGame = (__int64)NetworkManager_TypeInfo;
    }
    if ( item->fields._Shop_k__BackingField )
    {
      v21 = *(_QWORD *)(*(_QWORD *)(SelfUserGame + 184) + 64LL);
      SelfUserGame = ShopEntity__GetItemIDs(item->fields._Shop_k__BackingField, v19, 0LL);
      if ( v16 )
      {
        SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(v16, v21, SelfUserGame, 0LL);
        if ( SelfUserGame )
        {
          if ( v10 )
          {
            if ( v19 >= v10->max_length )
LABEL_56:
              sub_1C2E390(SelfUserGame, v8);
            *(_DWORD *)(v20 + 4 * v19) = *(_DWORD *)(SelfUserGame + 28);
            Shop_k__BackingField = item->fields._Shop_k__BackingField;
            ++v19;
            if ( Shop_k__BackingField )
              continue;
          }
        }
      }
    }
    goto LABEL_36;
  }
  return v10;
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
  bool v9; // w2
  __int64 *v10; // x9

  v5 = this;
  if ( (byte_4BF9B4A & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_20969/*"img_txt_shop"*/, item);
    sub_1C2E12C(&StringLiteral_20954/*"img_txt_quest"*/, v6);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C2E12C(&StringLiteral_20888/*"img_txt_bgm"*/, v7);
    byte_4BF9B4A = 1;
  }
  if ( !item || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0LL )
    sub_1C2E388(this, item);
  v9 = 0;
  v10 = &StringLiteral_20954/*"img_txt_quest"*/;
  switch ( Shop_k__BackingField->fields.purchaseType )
  {
    case 5:
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItemDraw__GetIsSetItemEventShop(
                                                this,
                                                Shop_k__BackingField->fields.targetIds,
                                                0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_7;
      v9 = 0;
      break;
    case 6:
      goto LABEL_9;
    case 7:
    case 9:
LABEL_7:
      v10 = &StringLiteral_20969/*"img_txt_shop"*/;
      goto LABEL_9;
    case 0xF:
      v10 = &StringLiteral_20888/*"img_txt_bgm"*/;
LABEL_9:
      ShopBuyItemListViewItemDraw__SetSpriteName(this, v5->fields.bandSprite, (System_String_o *)*v10, v3);
      v9 = 1;
      break;
    default:
      break;
  }
  ShopBuyItemListViewItemDraw__SetSpriteActive(this, v5->fields.bandSprite, v9, v3);
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

  if ( (byte_4BF9B50 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, isInPreparation);
    sub_1C2E12C(&UICommonButtonColor_TypeInfo, v7);
    byte_4BF9B50 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      v11 = (UIWidget_o *)this->fields.baseSprite;
      v12 = (UnityEngine_Color_o **)UICommonButtonColor_TypeInfo;
      if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
        v12 = (UnityEngine_Color_o **)UICommonButtonColor_TypeInfo;
      }
      if ( v11 )
      {
        UIWidget__set_color(v11, *v12[23], 0LL);
        return;
      }
LABEL_18:
      sub_1C2E388(v12, v9);
    }
  }
  else
  {
    v12 = (UnityEngine_Color_o **)this->fields.baseButton;
    if ( !v12 )
      goto LABEL_18;
    (*(void (__fastcall **)(UnityEngine_Color_o **, bool, _QWORD))&(*v12)[24].fields.b)(
      v12,
      !isInPreparation,
      *(_QWORD *)&(*v12)[25].fields.r);
    v12 = (UnityEngine_Color_o **)this->fields.baseButton;
    if ( !v12 )
      goto LABEL_18;
    UICommonButton__SetColliderEnable((UICommonButton_o *)v12, dispMode == 3 || isInPreparation, 1, 0LL);
    v12 = (UnityEngine_Color_o **)this->fields.baseButton;
    if ( !v12 )
      goto LABEL_18;
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
  System_String_o **onChange; // x8

  if ( (byte_4BF9B4B & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, item);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    sub_1C2E12C(&ShopBuyItemListViewItemDraw_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_23723/*"shop_item_menu_"*/, v7);
    byte_4BF9B4B = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v16 = System_String__Concat_63235584((System_String_o *)StringLiteral_23723/*"shop_item_menu_"*/, v15, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          if ( AtlasManager__SetShopBanner_39175184(v14, v16, 0LL) )
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
            if ( !ShopBuyItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ShopBuyItemListViewItemDraw_TypeInfo);
              v9 = (UISprite_o *)ShopBuyItemListViewItemDraw_TypeInfo;
            }
            onChange = (System_String_o **)v9->fields.onChange;
          }
          else
          {
            onChange = &this->fields.baseSpriteName;
          }
          if ( v18 )
          {
            UISprite__set_spriteName(v18, *onChange, 0LL);
            return;
          }
        }
      }
    }
    sub_1C2E388(v9, v10);
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

  if ( (byte_4BF9B47 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, button);
    byte_4BF9B47 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)button, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !button || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)button, 0LL)) == 0LL )
      sub_1C2E388(gameObject, v7);
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

  if ( (byte_4BF9B54 & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, itemIcon);
    byte_4BF9B54 = 1;
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
          sub_1C2E388(IsAp, v11);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0LL);
        GameObjectExtensions__SetLocalPositionY(gameObject, -3.0, 0LL);
        iconSprite = itemIcon->fields.iconSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
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
  struct UILabel_o *restTimeLabel; // x22
  bool v14; // w21
  ShopBuyItemListViewItemDraw_o *RestTime2; // x0
  const MethodInfo *v16; // x3
  struct UILabel_o *v17; // x19
  UILabel_o *v18; // x1

  if ( (byte_4BF9B56 & 1) == 0 )
  {
    sub_1C2E12C(&LocalizationManager_TypeInfo, isRarePriShopPurchased);
    sub_1C2E12C(&StringLiteral_12294/*"SHOP_INDEFINITE_PERIOD"*/, v11);
    sub_1C2E12C(&StringLiteral_13577/*"TIME_REST2_NONE"*/, v12);
    byte_4BF9B56 = 1;
  }
  if ( activeTime > 0 )
  {
    restTimeLabel = this->fields.restTimeLabel;
    v14 = isRarePriShopPurchased || isIndefinitePeriodShowable;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( v14 )
      {
LABEL_6:
        RestTime2 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12294/*"SHOP_INDEFINITE_PERIOD"*/,
                                                       0LL);
LABEL_12:
        v18 = restTimeLabel;
        goto LABEL_13;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v14 )
        goto LABEL_6;
    }
    RestTime2 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__GetRestTime2(activeTime, enterTime, 0LL);
    goto LABEL_12;
  }
  v17 = this->fields.restTimeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime2 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13577/*"TIME_REST2_NONE"*/, 0LL);
  v18 = v17;
LABEL_13:
  ShopBuyItemListViewItemDraw__SetLabelText(RestTime2, v18, (System_String_o *)RestTime2, v16);
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

  if ( (byte_4BF9B55 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, eventItemIcon);
    byte_4BF9B55 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)eventItemIcon, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !eventItemIcon )
      sub_1C2E388(v8, v9);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventItemIcon, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
    if ( itemEntity )
    {
      if ( isShowQuestion )
        ItemIconComponent__SetItemImage(eventItemIcon, 8007, 0LL);
      else
        ItemIconComponent__SetItem(eventItemIcon, itemEntity->fields.imageId, -1, 1, 0LL);
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
  bool v7; // w20
  struct CommonConsumeEntity_array *CommonConsumeEntities_k__BackingField; // x22
  int max_length; // w8
  CommonConsumeEntity_o *v10; // x2
  ItemIconComponent_o *eventItemIcon; // x1
  const MethodInfo *v12; // x4
  struct ItemEntity_array *v13; // x8
  ItemIconComponent_o *eventItemIcon2; // x1
  ItemEntity_o *v15; // x2
  ShopBuyItemListViewItemDraw_o *v16; // x0
  const MethodInfo *v17; // x4
  bool v18; // w3
  struct ItemEntity_array *EventItemEntities_k__BackingField; // x8
  struct ItemEntity_array *v20; // x8
  CommonConsumeEntity_o *v21; // x2

  v6 = this;
  if ( isInPreparation )
  {
    if ( !item )
      goto LABEL_37;
    this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
    if ( !this )
      goto LABEL_37;
    v7 = ShopEntity__checkFlag((ShopEntity_o *)this, 32, 0LL);
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
    || (CommonConsumeEntities_k__BackingField = item->fields._CommonConsumeEntities_k__BackingField) == 0LL )
  {
    if ( item->fields._EventItemEntities_k__BackingField )
    {
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetItemCount((ShopEntity_o *)this, 0LL);
      if ( (int)this >= 2 )
      {
        EventItemEntities_k__BackingField = item->fields._EventItemEntities_k__BackingField;
        if ( EventItemEntities_k__BackingField )
        {
          if ( !EventItemEntities_k__BackingField->max_length )
            goto LABEL_38;
          ShopBuyItemListViewItemDraw__SetEventItemIcon(
            this,
            v6->fields.eventItemIcon1,
            EventItemEntities_k__BackingField->m_Items[0],
            v7,
            v12);
          v20 = item->fields._EventItemEntities_k__BackingField;
          if ( v20 )
          {
            if ( v20->max_length <= 1 )
              goto LABEL_38;
            eventItemIcon2 = v6->fields.eventItemIcon2;
            v15 = v20->m_Items[1];
            goto LABEL_28;
          }
        }
      }
      else
      {
        this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
        if ( this )
        {
          this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 && item->fields._IsNotHavingShopItemReceived_k__BackingField )
            return;
        }
        v13 = item->fields._EventItemEntities_k__BackingField;
        if ( v13 )
        {
          if ( !v13->max_length )
            goto LABEL_38;
          eventItemIcon2 = v6->fields.eventItemIcon;
          v15 = v13->m_Items[0];
LABEL_28:
          v18 = v7;
          goto LABEL_29;
        }
      }
LABEL_37:
      sub_1C2E388(this, item);
    }
LABEL_22:
    ShopBuyItemListViewItemDraw__SetEventItemIcon(this, v6->fields.eventItemIcon, 0LL, 0, v4);
    ShopBuyItemListViewItemDraw__SetEventItemIcon(v16, v6->fields.eventItemIcon1, 0LL, 0, v17);
    eventItemIcon2 = v6->fields.eventItemIcon2;
    v15 = 0LL;
    v18 = 0;
LABEL_29:
    ShopBuyItemListViewItemDraw__SetEventItemIcon(this, eventItemIcon2, v15, v18, v12);
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
  v21 = CommonConsumeEntities_k__BackingField->m_Items[0];
  if ( v21 )
  {
    ShopBuyItemListViewItemDraw__SetCommonConsumeIcon(v6, v6->fields.eventItemIcon1, v21, v7, v4);
    if ( CommonConsumeEntities_k__BackingField->max_length <= 1 )
LABEL_38:
      sub_1C2E390(this, item);
  }
  v10 = CommonConsumeEntities_k__BackingField->m_Items[1];
  if ( v10 )
  {
    eventItemIcon = v6->fields.eventItemIcon2;
    goto LABEL_35;
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetInfoButton(
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
  if ( (byte_4BF9B4F & 1) == 0 )
  {
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C2E12C(&StringLiteral_9438/*"NONE"*/, item);
    byte_4BF9B4F = 1;
  }
  if ( !isInPreparation )
  {
    if ( !item )
      goto LABEL_23;
LABEL_9:
    this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
    if ( !this )
      goto LABEL_23;
    this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__checkFlag((ShopEntity_o *)this, 0x8000, 0LL);
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
                                                  0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = 0LL;
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
                                                    (System_String_o *)StringLiteral_9438/*"NONE"*/,
                                                    0LL);
          goto LABEL_21;
        }
LABEL_23:
        sub_1C2E388(this, item);
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
  if ( v7 && ShopEntity__IsSoldOut(v7, 0LL) )
    goto LABEL_9;
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
  UILabel_o *messageTextLabel; // x24
  const MethodInfo *v38; // x5
  const MethodInfo *v39; // x3
  ShopEntity_o *Shop_k__BackingField; // x23
  UISprite_o *possessionSprite; // x24
  const MethodInfo *v42; // x1
  bool HaveIconShowable; // w0
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x2
  UnityEngine_Object_o *chocolateSprite; // x23
  _BOOL8 v47; // x0
  __int64 v48; // x1
  const MethodInfo *v49; // x3
  UnityEngine_Component_o *IsChocolateSvtEquip; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v52; // x1
  ShopBuyItemListViewItemDraw_o *v53; // x0
  const MethodInfo *v54; // x3
  UnityEngine_Object_o *soldOutImage; // x23
  bool v56; // w23
  ShopEntity_o *v57; // x24
  UILabel_o *textOnMask; // x25
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x3
  _BOOL4 IsRarePriShopPurchased_k__BackingField; // w22
  const MethodInfo *v62; // x1
  bool IsIndefinitePeriodShowable; // w0
  const MethodInfo *v64; // x5
  struct ShopEntity_o *v65; // x8
  int64_t closedAt; // x3
  ShopBuyItemListViewItemDraw_o *v67; // x0
  const MethodInfo *v68; // x3
  UnityEngine_Object_o *priceInfo1; // x22
  struct ShopEntity_o *v70; // x8
  int32_t payType; // w8
  const MethodInfo *v72; // x3
  UnityEngine_GameObject_o *v73; // x22
  struct UnityEngine_GameObject_o *priceInfo2; // x22
  bool v75; // w1
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x3
  _BOOL4 v78; // w22
  struct ShopEntity_o *v79; // x8
  _BOOL4 v80; // w23
  _BOOL4 v81; // w8
  struct ShopEntity_o *v82; // x8
  Il2CppObject *v83; // x21
  Il2CppObject *MasterData_object; // x22
  struct ShopEntity_o *v85; // x8
  UserShopEntity_o *v86; // x22
  System_String_o **v87; // x8
  System_String_o **v88; // x9
  struct CommonConsumeEntity_array *CommonConsumeEntities_k__BackingField; // x22
  bool v90; // zf
  System_String_o *v91; // x20
  System_String_o *v92; // x0
  struct UILabel_o *freeExchangeConditionNoticeLabel; // x8
  int mWidth; // w8
  struct UISprite_array *freeExchangeConditionNoticeBgSprites; // x21
  int v96; // w9
  int max_length; // w8
  unsigned int v98; // w22
  int32_t v99; // w19
  Il2CppClass **v100; // x8
  UISprite_o *v101; // x20
  const MethodInfo *v102; // [xsp+0h] [xbp-80h]
  const MethodInfo *v103; // [xsp+0h] [xbp-80h]
  bool isNotCommandCodeGet; // [xsp+14h] [xbp-6Ch] BYREF
  bool isNotCostumeGet; // [xsp+18h] [xbp-68h] BYREF
  bool isServantHaving; // [xsp+1Ch] [xbp-64h] BYREF
  bool isNotServantHaving; // [xsp+20h] [xbp-60h] BYREF
  bool isNotServantGet; // [xsp+24h] [xbp-5Ch] BYREF
  System_String_o *itemName; // [xsp+28h] [xbp-58h] BYREF
  System_String_o *message; // [xsp+38h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_4BF9B44 & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, item);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserShopMaster___, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v10);
    sub_1C2E12C(&NetworkManager_TypeInfo, v11);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v12);
    sub_1C2E12C(&ShopBuyItemUtility_TypeInfo, v13);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1C2E12C(&StringLiteral_12206/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/, v15);
    sub_1C2E12C(&StringLiteral_19975/*"freeShopCondMessage"*/, v16);
    sub_1C2E12C(&StringLiteral_12301/*"SHOP_PAID_EXCHANGE_CONDITIONS"*/, v17);
    sub_1C2E12C(&StringLiteral_19974/*"freeShopCondId"*/, v18);
    sub_1C2E12C(&StringLiteral_21037/*"info_base"*/, v19);
    sub_1C2E12C(&StringLiteral_1/*""*/, v20);
    sub_1C2E12C(&StringLiteral_12207/*"SHOP_ACHIEVEMENT_PAID_EXCHANGE_CONDITIONS"*/, v21);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C2E12C(&StringLiteral_12274/*"SHOP_FREE_EXCHANGE_CONDITIONS"*/, v22);
    byte_4BF9B44 = 1;
  }
  message = 0LL;
  itemName = 0LL;
  isNotServantGet = 0;
  isNotServantHaving = 0;
  isServantHaving = 0;
  isNotCostumeGet = 0;
  isNotCommandCodeGet = 0;
  if ( !item )
  {
    ShopBuyItemListViewItemDraw__SetSpriteActive(this, v6->fields.rangeSprite, 0, method);
    ShopBuyItemListViewItemDraw__SetSpriteActive(v67, v6->fields.addRangeSprite, 0, v68);
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
  if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
  ShopBuyItemUtility__SetDefaultMessageLabel(messageTextLabel, 0LL);
  ShopBuyItemListViewItemDraw__SetNameAndMessageText(v6, item, v35, message, itemName, v38);
  ShopBuyItemListViewItemDraw__SetNumText(v6, item, v35, v39);
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  possessionSprite = v6->fields.possessionSprite;
  HaveIconShowable = ShopBuyItemListViewItem__get_IsHaveIconShowable(item, v42);
  ShopBuyItemUtility__SetShopHaveStatusIcon(Shop_k__BackingField, possessionSprite, HaveIconShowable, 0LL);
  ShopBuyItemListViewItemDraw__SetShopResetText(v6, item->fields._Shop_k__BackingField, v44);
  ShopBuyItemListViewItemDraw__SetPossessionInfo(v6, item, v45);
  chocolateSprite = (UnityEngine_Object_o *)v6->fields.chocolateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v47 = UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL);
  if ( v47 )
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.chocolateSprite;
    if ( !IsChocolateSvtEquip )
      goto LABEL_104;
    gameObject = UnityEngine_Component__get_gameObject(IsChocolateSvtEquip, 0LL);
    IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopBuyItemListViewItem__get_IsChocolateSvtEquip(item, v52);
    if ( !gameObject )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)IsChocolateSvtEquip & 1, 0LL);
  }
  ShopBuyItemListViewItemDraw__SetLabelText(
    (ShopBuyItemListViewItemDraw_o *)v47,
    v6->fields.textOnMask,
    (System_String_o *)StringLiteral_1/*""*/,
    v49);
  ShopBuyItemListViewItemDraw__SetLabelText(v53, v6->fields.prepareTextOnMask, (System_String_o *)StringLiteral_1/*""*/, v54);
  soldOutImage = (UnityEngine_Object_o *)v6->fields.soldOutImage;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(0LL, soldOutImage, 0LL) )
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.soldOutImage;
    if ( !IsChocolateSvtEquip )
      goto LABEL_104;
    IsChocolateSvtEquip = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(IsChocolateSvtEquip, 0LL);
    if ( !IsChocolateSvtEquip )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0LL);
  }
  v56 = v27;
  ShopBuyItemListViewItemDraw__SetRestCountText(
    v6,
    item,
    v27,
    &isNotServantGet,
    &isNotServantHaving,
    &isServantHaving,
    &isNotCostumeGet,
    &isNotCommandCodeGet,
    v102);
  ShopBuyItemListViewItemDraw__SetMask(
    v6,
    item,
    v27,
    isNotServantGet,
    isNotServantHaving,
    isServantHaving,
    isNotCostumeGet,
    isNotCommandCodeGet,
    v103);
  v57 = item->fields._Shop_k__BackingField;
  textOnMask = v6->fields.textOnMask;
  if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
  ShopBuyItemUtility__SetAddTextOnMask(v57, textOnMask, 0LL);
  ShopBuyItemListViewItemDraw__SetInfoButton(v6, item, v56, v59);
  ShopBuyItemListViewItemDraw__SetBaseButton(v6, v56, mode, v60);
  IsRarePriShopPurchased_k__BackingField = item->fields._IsRarePriShopPurchased_k__BackingField;
  IsIndefinitePeriodShowable = ShopBuyItemListViewItem__get_IsIndefinitePeriodShowable(item, v62);
  v65 = item->fields._Shop_k__BackingField;
  if ( v65 )
    closedAt = v65->fields.closedAt;
  else
    closedAt = 0LL;
  ShopBuyItemListViewItemDraw__SetEventEndTime(
    v6,
    IsRarePriShopPurchased_k__BackingField,
    IsIndefinitePeriodShowable,
    closedAt,
    item->fields._EnterTime_k__BackingField,
    v64);
  priceInfo1 = (UnityEngine_Object_o *)v6->fields.priceInfo1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(priceInfo1, 0LL, 0LL) )
    return;
  v70 = item->fields._Shop_k__BackingField;
  if ( !v70 )
  {
LABEL_35:
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfoFree;
    if ( !IsChocolateSvtEquip )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0LL);
    IsChocolateSvtEquip = (UnityEngine_Component_o *)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_104;
    v73 = v6->fields.priceInfo1;
    IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__GetItemCount((ShopEntity_o *)IsChocolateSvtEquip, 0LL);
    if ( !v73 )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive(v73, (int)IsChocolateSvtEquip < 2, 0LL);
    IsChocolateSvtEquip = (UnityEngine_Component_o *)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_104;
    priceInfo2 = v6->fields.priceInfo2;
    IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__GetItemCount((ShopEntity_o *)IsChocolateSvtEquip, 0LL);
    if ( !priceInfo2 )
      goto LABEL_104;
    v75 = (int)IsChocolateSvtEquip > 1;
    IsChocolateSvtEquip = (UnityEngine_Component_o *)priceInfo2;
LABEL_41:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, v75, 0LL);
    ShopBuyItemListViewItemDraw__SetPriceIconText(v6, item, v27, v76);
    ShopBuyItemListViewItemDraw__SetEventItemIconText(v6, item, v27, v77);
    goto LABEL_42;
  }
  payType = v70->fields.payType;
  if ( payType != 14 )
  {
    if ( payType == 13 )
    {
      IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfoFree;
      if ( !IsChocolateSvtEquip )
        goto LABEL_104;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 1, 0LL);
      IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfo1;
      if ( !IsChocolateSvtEquip )
        goto LABEL_104;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0LL);
      IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfo2;
      if ( !IsChocolateSvtEquip )
        goto LABEL_104;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0LL);
      ShopBuyItemListViewItemDraw__SetPriceIconText(v6, item, v27, v72);
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0LL);
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfo1;
    if ( !IsChocolateSvtEquip )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)IsChocolateSvtEquip,
      (signed int)CommonConsumeEntities_k__BackingField->max_length < 2,
      0LL);
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfo2;
    if ( !IsChocolateSvtEquip )
      goto LABEL_104;
    v75 = (signed int)CommonConsumeEntities_k__BackingField->max_length > 1;
    goto LABEL_41;
  }
LABEL_42:
  IsChocolateSvtEquip = (UnityEngine_Component_o *)item->fields._Shop_k__BackingField;
  if ( !IsChocolateSvtEquip )
    goto LABEL_104;
  IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__isQuestNotClearItemClosed(
                                                     (ShopEntity_o *)IsChocolateSvtEquip,
                                                     0,
                                                     0LL);
  v78 = 0;
  if ( ((unsigned __int8)IsChocolateSvtEquip & 1) != 0 )
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_104;
    IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__IsSoldOut((ShopEntity_o *)IsChocolateSvtEquip, 0LL);
    v78 = ((unsigned __int8)IsChocolateSvtEquip & 1) == 0;
  }
  v79 = item->fields._Shop_k__BackingField;
  if ( !v79 )
    goto LABEL_104;
  if ( v79->fields.purchaseType == 14 )
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__IsEligibleForFreeFeaturesTheCostumeRelease(
                                                       item->fields._Shop_k__BackingField,
                                                       0LL);
    v79 = item->fields._Shop_k__BackingField;
    if ( !v79 )
      goto LABEL_104;
    v80 = ((unsigned __int8)IsChocolateSvtEquip & 1) == 0;
  }
  else
  {
    v80 = 0;
  }
  IsChocolateSvtEquip = (UnityEngine_Component_o *)v79->fields.script;
  if ( !IsChocolateSvtEquip )
LABEL_104:
    sub_1C2E388(IsChocolateSvtEquip, v48);
  IsChocolateSvtEquip = (UnityEngine_Component_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                     (System_Collections_Generic_Dictionary_object__object__o *)IsChocolateSvtEquip,
                                                     (Il2CppObject *)StringLiteral_19974/*"freeShopCondId"*/,
                                                     (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( ((unsigned __int8)IsChocolateSvtEquip & 1) != 0 && (!v27 || !v78) )
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_104;
    IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__IsAfterTheFreeShopReleaseDate(
                                                       (ShopEntity_o *)IsChocolateSvtEquip,
                                                       0LL);
    v81 = ((unsigned __int8)IsChocolateSvtEquip & 1) == 0;
  }
  else
  {
    v81 = 1;
  }
  if ( v81 || v80 )
  {
LABEL_56:
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.freeExchangeConditionNoticeRoot;
    if ( IsChocolateSvtEquip )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0LL);
      return;
    }
    goto LABEL_104;
  }
  v82 = item->fields._Shop_k__BackingField;
  if ( !v82 )
    goto LABEL_104;
  IsChocolateSvtEquip = (UnityEngine_Component_o *)v82->fields.script;
  if ( !IsChocolateSvtEquip )
    goto LABEL_104;
  IsChocolateSvtEquip = (UnityEngine_Component_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                     (System_Collections_Generic_Dictionary_object__object__o *)IsChocolateSvtEquip,
                                                     (Il2CppObject *)StringLiteral_19975/*"freeShopCondMessage"*/,
                                                     (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !IsChocolateSvtEquip )
    goto LABEL_104;
  v83 = (Il2CppObject *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))IsChocolateSvtEquip->klass->vtable._3_ToString.method)(
                          IsChocolateSvtEquip,
                          IsChocolateSvtEquip->klass[1]._1.image);
  IsChocolateSvtEquip = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsChocolateSvtEquip )
    goto LABEL_104;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)IsChocolateSvtEquip,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BF81D5 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, v48);
    byte_4BF81D5 = 1;
  }
  IsChocolateSvtEquip = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    IsChocolateSvtEquip = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
  }
  v85 = item->fields._Shop_k__BackingField;
  if ( !v85 )
    goto LABEL_104;
  if ( !MasterData_object )
    goto LABEL_104;
  IsChocolateSvtEquip = (UnityEngine_Component_o *)UserShopMaster__GetEntityDefinitely(
                                                     (UserShopMaster_o *)MasterData_object,
                                                     *(_QWORD *)(*(_QWORD *)&IsChocolateSvtEquip[7].fields.m_CachedPtr
                                                               + 64LL),
                                                     v85->fields.id,
                                                     0LL);
  if ( !item->fields._Shop_k__BackingField )
    goto LABEL_104;
  v86 = (UserShopEntity_o *)IsChocolateSvtEquip;
  IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__IsFulFilledFreeExchangeCondition(
                                                     item->fields._Shop_k__BackingField,
                                                     0LL);
  if ( !v86 )
    goto LABEL_104;
  if ( v86->fields.num )
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_104;
    if ( !ShopEntity__IsPaidExchange((ShopEntity_o *)IsChocolateSvtEquip, 0LL) )
      goto LABEL_56;
    LOBYTE(IsChocolateSvtEquip) = UserShopEntity__get_IsReturnRarePriShop(v86, 0LL);
    v87 = (System_String_o **)&StringLiteral_12301/*"SHOP_PAID_EXCHANGE_CONDITIONS"*/;
    v88 = (System_String_o **)&StringLiteral_12207/*"SHOP_ACHIEVEMENT_PAID_EXCHANGE_CONDITIONS"*/;
  }
  else
  {
    v87 = (System_String_o **)&StringLiteral_12274/*"SHOP_FREE_EXCHANGE_CONDITIONS"*/;
    v88 = (System_String_o **)&StringLiteral_12206/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/;
  }
  v90 = ((unsigned __int8)IsChocolateSvtEquip & 1) == 0;
  IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.freeExchangeConditionNoticeRoot;
  if ( !v90 )
    v87 = v88;
  if ( !IsChocolateSvtEquip )
    goto LABEL_104;
  v91 = *v87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 1, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v92 = LocalizationManager__Get(v91, 0LL);
  IsChocolateSvtEquip = (UnityEngine_Component_o *)System_String__Format(v92, v83, 0LL);
  if ( !v6->fields.freeExchangeConditionNoticeLabel )
    goto LABEL_104;
  UILabel__set_text(v6->fields.freeExchangeConditionNoticeLabel, (System_String_o *)IsChocolateSvtEquip, 0LL);
  freeExchangeConditionNoticeLabel = v6->fields.freeExchangeConditionNoticeLabel;
  if ( !freeExchangeConditionNoticeLabel )
    goto LABEL_104;
  mWidth = freeExchangeConditionNoticeLabel->fields.mWidth;
  freeExchangeConditionNoticeBgSprites = v6->fields.freeExchangeConditionNoticeBgSprites;
  v96 = mWidth >= 512 ? 512 : mWidth;
  if ( !freeExchangeConditionNoticeBgSprites )
    goto LABEL_104;
  max_length = freeExchangeConditionNoticeBgSprites->max_length;
  if ( max_length >= 1 )
  {
    v98 = 0;
    v99 = v96 + 16;
    while ( 1 )
    {
      if ( v98 >= max_length )
        sub_1C2E390(IsChocolateSvtEquip, v48);
      v100 = &freeExchangeConditionNoticeBgSprites->obj.klass + (int)v98;
      v101 = (UISprite_o *)v100[4];
      if ( !v101 )
        break;
      UIWidget__set_width((UIWidget_o *)v100[4], v99, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      IsChocolateSvtEquip = (UnityEngine_Component_o *)AtlasManager__SetEventUI(
                                                         v101,
                                                         (System_String_o *)StringLiteral_21037/*"info_base"*/,
                                                         0LL);
      max_length = freeExchangeConditionNoticeBgSprites->max_length;
      if ( (int)++v98 >= max_length )
        return;
    }
    goto LABEL_104;
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetItemIcon(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        const MethodInfo *method)
{
  void *itemIcon; // x0
  ItemIconComponent_o *v8; // x20
  int32_t v9; // w19
  int32_t v10; // w2
  int32_t imageId; // [xsp+Ch] [xbp-24h] BYREF

  imageId = 0;
  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    goto LABEL_18;
  ItemIconComponent__Clear((ItemIconComponent_o *)itemIcon, 0LL);
  if ( isInPreparation )
  {
    if ( !item )
      goto LABEL_18;
    itemIcon = item->fields._Shop_k__BackingField;
    if ( !itemIcon )
      goto LABEL_18;
    if ( ShopEntity__checkFlag((ShopEntity_o *)itemIcon, 2, 0LL) )
    {
      itemIcon = this->fields.itemIcon;
      if ( itemIcon )
      {
        ItemIconComponent__SetItemImage((ItemIconComponent_o *)itemIcon, 8007, 0LL);
        return;
      }
LABEL_18:
      sub_1C2E388(itemIcon, item);
    }
  }
  else if ( !item )
  {
    goto LABEL_18;
  }
  itemIcon = item->fields._Shop_k__BackingField;
  if ( !itemIcon )
    goto LABEL_18;
  itemIcon = (void *)ShopEntity__CheckEquipItem((ShopEntity_o *)itemIcon, &imageId, 0LL);
  v8 = this->fields.itemIcon;
  if ( ((unsigned __int8)itemIcon & 1) != 0 )
  {
    if ( !v8 )
      goto LABEL_18;
    ItemIconComponent__SetEquipItemImage(v8, imageId, 0LL);
  }
  else
  {
    itemIcon = item->fields._Shop_k__BackingField;
    if ( itemIcon )
    {
      v9 = *((_DWORD *)itemIcon + 12);
      itemIcon = (void *)ShopEntity__get_TargetId((ShopEntity_o *)itemIcon, 0LL);
      v10 = (int)itemIcon;
      if ( !v8 )
        goto LABEL_18;
    }
    else
    {
      v10 = 0;
      v9 = item->fields.itemEntity != 0LL;
      if ( !v8 )
        goto LABEL_18;
    }
    ItemIconComponent__SetPurchase(v8, v9, v10, imageId, 0LL);
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

  if ( (byte_4BF9B45 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, label);
    byte_4BF9B45 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_1C2E388(gameObject, v7);
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

  if ( (byte_4BF9B46 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, label);
    byte_4BF9B46 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1C2E388(v6, v7);
    WrapControlText__textAdjust(label, text, label->fields.mFontSize, 0, 0LL);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetListViewObject(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewObject_o *listViewObj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.listViewObject = listViewObj;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.listViewObject,
    (int64_t)listViewObj,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  ShopBuyItemListViewItem_o *v15; // x20
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
  __int64 v34; // x1
  __int64 v35; // x1
  UILabel_o *v36; // x21
  const MethodInfo *v37; // x3
  UILabel_o *v38; // x1
  ShopBuyItemListViewItemDraw_o *v39; // x2
  ShopEntity_o *Shop_k__BackingField; // x0
  _BOOL4 v41; // w23
  UnityEngine_Object_o *anotherBuyable; // x21
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x3
  UnityEngine_Object_o *anotherPayItemImage; // x21
  UnityEngine_GameObject_o *v46; // x22
  struct ShopBuyItemListViewObject_o *listViewObject; // x9
  struct System_Int32_array *possessionAnotherItemIds; // x8
  __int64 methodPtr_low; // x10
  unsigned int max_length; // w10
  int v51; // w9
  UISprite_o *v52; // x21
  int32_t v53; // w22
  UISprite_o *maskSprite; // x1
  bool v55; // w2
  struct ShopEntity_o *v56; // x8
  struct ShopEntity_o *v57; // x8
  bool v58; // w20
  struct ShopEntity_o *v59; // x8
  ShopReleaseMaster_o *v60; // x21
  struct ShopEntity_o *v61; // x8
  struct UISprite_o *v62; // x8
  struct ShopEntity_o *v63; // x8
  struct System_Int32_array *targetIds; // x8
  Il2CppObject *Entity; // x0
  struct ShopEntity_o *v66; // x8
  __int64 *v67; // x8
  ShopBuyItemListViewItemDraw_o *Empty; // x21
  UILabel_o *v69; // x21
  ShopBuyItemListViewItemDraw_o *v70; // x0
  const MethodInfo *v71; // x3
  struct ShopEntity_o *v72; // x8
  const MethodInfo *v73; // x2
  UILabel_o *textOnMask; // x20
  struct ShopEntity_o *v75; // x8
  UILabel_o *v76; // x21
  UnityEngine_Object_o *prepareTextOnMask; // x21
  const MethodInfo *v78; // x1
  UILabel_o *v79; // x19
  ShopBuyItemListViewItemDraw_o *v80; // x0
  const MethodInfo *v81; // x3
  ShopBuyItemListViewItemDraw_o *v82; // x0
  ShopBuyItemListViewItem_o *v83; // x1
  bool v84; // w2
  const MethodInfo *v85; // x3
  System_Int32_array *v86; // [xsp+0h] [xbp-60h] BYREF
  int32_t questId; // [xsp+Ch] [xbp-54h] BYREF

  v15 = item;
  v16 = this;
  if ( (byte_4BF9B51 & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, item);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantMaster___, v17);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v18);
    sub_1C2E12C(&Method_DataManager_GetMaster_ShopReleaseMaster___, v19);
    sub_1C2E12C(&DataManager_TypeInfo, v20);
    sub_1C2E12C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v22);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v23);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v24);
    sub_1C2E12C(&ShopBuyItemListViewManager_TypeInfo, v25);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1C2E12C(&string_TypeInfo, v27);
    sub_1C2E12C(&StringLiteral_12264/*"SHOP_CANT_BUY"*/, v28);
    sub_1C2E12C(&StringLiteral_12304/*"SHOP_QUEST_OPEN"*/, v29);
    sub_1C2E12C(&StringLiteral_12302/*"SHOP_QUEST_ALREADY_CLEARED"*/, v30);
    sub_1C2E12C(&StringLiteral_19974/*"freeShopCondId"*/, v31);
    sub_1C2E12C(&StringLiteral_12300/*"SHOP_NOT_RELEASE_SET_ITEM"*/, v32);
    sub_1C2E12C(&StringLiteral_12236/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, v33);
    sub_1C2E12C(&StringLiteral_1/*""*/, v34);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C2E12C(&StringLiteral_12210/*"SHOP_ALREADY_GET"*/, v35);
    byte_4BF9B51 = 1;
  }
  questId = 0;
  v86 = 0LL;
  if ( !isInPreparation )
  {
    if ( !v15 )
      goto LABEL_141;
    Shop_k__BackingField = v15->fields._Shop_k__BackingField;
    if ( Shop_k__BackingField
      && ShopEntity__IsSoldOut(Shop_k__BackingField, 0LL)
      && !v15->fields._IsNotHavingShopItemReceived_k__BackingField )
    {
      this = (ShopBuyItemListViewItemDraw_o *)v15->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_141;
      v41 = !ShopEntity__IsAnotherItemBuyable((ShopEntity_o *)this, &v86, 0LL);
    }
    else
    {
      v41 = 0;
    }
    anotherBuyable = (UnityEngine_Object_o *)v16->fields.anotherBuyable;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(anotherBuyable, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      anotherPayItemImage = (UnityEngine_Object_o *)v16->fields.anotherPayItemImage;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(anotherPayItemImage, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (ShopBuyItemListViewItemDraw_o *)v15->fields._Shop_k__BackingField;
        if ( !this )
          goto LABEL_141;
        v46 = v16->fields.anotherBuyable;
        this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsAnotherItemBuyable(
                                                  (ShopEntity_o *)this,
                                                  &v16->fields.possessionAnotherItemIds,
                                                  0LL);
        if ( !v46 )
          goto LABEL_141;
        UnityEngine_GameObject__SetActive(v46, (unsigned __int8)this & 1, 0LL);
        this = (ShopBuyItemListViewItemDraw_o *)BasicHelper__IsNullOrEmpty(
                                                  (System_Collections_ICollection_o *)v16->fields.possessionAnotherItemIds,
                                                  0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          listViewObject = v16->fields.listViewObject;
          if ( !listViewObject )
            goto LABEL_141;
          possessionAnotherItemIds = v16->fields.possessionAnotherItemIds;
          if ( !possessionAnotherItemIds )
            goto LABEL_141;
          this = (ShopBuyItemListViewItemDraw_o *)listViewObject->fields.manager;
          if ( !this )
            goto LABEL_141;
          item = (ShopBuyItemListViewItem_o *)ShopBuyItemListViewManager_TypeInfo;
          methodPtr_low = LOBYTE(ShopBuyItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
            || (ShopBuyItemListViewManager_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopBuyItemListViewManager_TypeInfo )
          {
            sub_1C2E648(this);
            ShopBuyItemListViewItemDraw__SetInfoButton(v82, v83, v84, v85);
            return;
          }
          max_length = possessionAnotherItemIds->max_length;
          v51 = SLODWORD(this[1].fields.baseButton) % (int)max_length;
          if ( v51 >= max_length )
LABEL_142:
            sub_1C2E390(this, item);
          v52 = v16->fields.anotherPayItemImage;
          v53 = possessionAnotherItemIds->m_Items[v51 + 1];
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          this = (ShopBuyItemListViewItemDraw_o *)AtlasManager__SetItem(v52, v53, 0LL);
        }
      }
    }
    if ( v41 )
    {
      ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(v16, v15, v43);
      maskSprite = v16->fields.maskSprite;
      v55 = 1;
LABEL_45:
      ShopBuyItemListViewItemDraw__SetSpriteActive(this, maskSprite, v55, v44);
      return;
    }
    v56 = v15->fields._Shop_k__BackingField;
    if ( !v56 || v56->fields.purchaseType != 6 )
    {
      maskSprite = v16->fields.maskSprite;
      v55 = 0;
      goto LABEL_45;
    }
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_141;
    this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
    v57 = v15->fields._Shop_k__BackingField;
    if ( !v57 )
      goto LABEL_141;
    if ( !this )
      goto LABEL_141;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isQuestNotClearSet(
                                              (ShopReleaseMaster_o *)this,
                                              v57->fields.id,
                                              &questId,
                                              0LL);
    if ( !v15->fields._Shop_k__BackingField )
      goto LABEL_141;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !ShopEntity__isQuestNotClearItemClosed(v15->fields._Shop_k__BackingField, 1, 0LL) )
      {
LABEL_43:
        v58 = 0;
LABEL_113:
        this = (ShopBuyItemListViewItemDraw_o *)v16->fields.maskSprite;
        if ( this )
        {
          this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v58, 0LL);
            return;
          }
        }
        goto LABEL_141;
      }
    }
    else if ( !ShopEntity__isExpireItemClosed(v15->fields._Shop_k__BackingField, 0LL) )
    {
      goto LABEL_43;
    }
    textOnMask = v16->fields.textOnMask;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12304/*"SHOP_QUEST_OPEN"*/, 0LL);
    if ( !textOnMask )
      goto LABEL_141;
    UILabel__set_text(textOnMask, (System_String_o *)this, 0LL);
    v58 = 1;
    goto LABEL_113;
  }
  ShopBuyItemListViewItemDraw__SetSpriteActive(this, v16->fields.maskSprite, 1, (const MethodInfo *)isNotServantGet);
  if ( !v15 )
    goto LABEL_141;
  this = (ShopBuyItemListViewItemDraw_o *)v15->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_141;
  switch ( LODWORD(this->fields.baseSprite) )
  {
    case 2:
    case 7:
    case 9:
      goto LABEL_7;
    case 4:
      v62 = this->fields.maskSprite;
      if ( !v62 )
        goto LABEL_141;
      if ( !LODWORD(v62->fields.m_CancellationTokenSource) )
        goto LABEL_142;
      if ( !LODWORD(v62->fields.leftAnchor) )
        goto LABEL_70;
      this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_141;
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantMaster___);
      v63 = v15->fields._Shop_k__BackingField;
      if ( !v63 )
        goto LABEL_141;
      targetIds = v63->fields.targetIds;
      if ( !targetIds )
        goto LABEL_141;
      if ( !targetIds->max_length )
        goto LABEL_142;
      if ( !this )
        goto LABEL_141;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 targetIds->m_Items[1],
                 (const MethodInfo_327B180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Entity
        && ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL)
        && v15->fields._ShopKind_k__BackingField != 6 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v67 = &StringLiteral_12264/*"SHOP_CANT_BUY"*/;
        goto LABEL_130;
      }
LABEL_70:
      if ( isNotServantGet || isNotServantHaving || isServantHaving || isNotCostumeGet || isNotCommandCodeGet )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ShopReleaseMaster___);
        v66 = v15->fields._Shop_k__BackingField;
        if ( v66 && this )
        {
          this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                    (ShopReleaseMaster_o *)this,
                                                    v66->fields.id,
                                                    40,
                                                    0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v39 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_1/*""*/;
            goto LABEL_131;
          }
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v67 = &StringLiteral_12210/*"SHOP_ALREADY_GET"*/;
LABEL_130:
          this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v67, 0LL);
          v39 = this;
LABEL_131:
          v38 = v16->fields.textOnMask;
LABEL_132:
          ShopBuyItemListViewItemDraw__SetLabelText(this, v38, (System_String_o *)v39, v37);
          goto LABEL_133;
        }
LABEL_141:
        sub_1C2E388(this, item);
      }
LABEL_133:
      prepareTextOnMask = (UnityEngine_Object_o *)v16->fields.prepareTextOnMask;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(prepareTextOnMask, 0LL, 0LL)
        && ShopBuyItemListViewItem__IsPrepareTextOnMask(v15, v78) )
      {
        v79 = v16->fields.prepareTextOnMask;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v80 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12236/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, 0LL);
        ShopBuyItemListViewItemDraw__SetLabelText(v80, v79, (System_String_o *)v80, v81);
      }
      return;
    case 5:
      Empty = (ShopBuyItemListViewItemDraw_o *)string_TypeInfo->static_fields->Empty;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12300/*"SHOP_NOT_RELEASE_SET_ITEM"*/, 0LL);
        Empty = this;
      }
      v38 = v16->fields.textOnMask;
      v39 = Empty;
      goto LABEL_132;
    case 6:
      if ( !ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)this, 0, 0LL) )
        goto LABEL_133;
      v69 = v16->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v70 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12302/*"SHOP_QUEST_ALREADY_CLEARED"*/, 0LL);
      ShopBuyItemListViewItemDraw__SetLabelText(v70, v69, (System_String_o *)v70, v71);
      this = (ShopBuyItemListViewItemDraw_o *)v15->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_141;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_133;
      v72 = v15->fields._Shop_k__BackingField;
      if ( !v72 )
        goto LABEL_141;
      this = (ShopBuyItemListViewItemDraw_o *)v72->fields.script;
      if ( !this )
        goto LABEL_141;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)this,
             (Il2CppObject *)StringLiteral_19974/*"freeShopCondId"*/,
             (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
LABEL_105:
        ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(v16, v15, v73);
      }
      goto LABEL_133;
    case 0xE:
      if ( !isNotServantGet && !isNotServantHaving && !isServantHaving && !isNotCostumeGet && !isNotCommandCodeGet )
        goto LABEL_133;
      if ( ShopEntity__GetFreeShopCondId((ShopEntity_o *)this, 0LL) < 1 )
        goto LABEL_116;
      this = (ShopBuyItemListViewItemDraw_o *)v15->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_141;
      if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, 0LL) )
        goto LABEL_105;
LABEL_116:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ShopReleaseMaster___);
      v75 = v15->fields._Shop_k__BackingField;
      if ( !v75 || !this )
        goto LABEL_141;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                (ShopReleaseMaster_o *)this,
                                                v75->fields.id,
                                                1,
                                                0LL);
      v76 = v16->fields.textOnMask;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12210/*"SHOP_ALREADY_GET"*/, 0LL);
        v39 = this;
      }
      else
      {
        v39 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_1/*""*/;
      }
      v38 = v76;
      goto LABEL_132;
    default:
      if ( !isNotServantGet && !isNotServantHaving && !isServantHaving && !isNotCostumeGet && !isNotCommandCodeGet )
        goto LABEL_133;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ShopReleaseMaster___);
      v59 = v15->fields._Shop_k__BackingField;
      if ( !v59 )
        goto LABEL_141;
      v60 = (ShopReleaseMaster_o *)this;
      if ( !this )
        goto LABEL_141;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                (ShopReleaseMaster_o *)this,
                                                v59->fields.id,
                                                1,
                                                0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_58;
      v61 = v15->fields._Shop_k__BackingField;
      if ( !v61 )
        goto LABEL_141;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(v60, v61->fields.id, 40, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_7:
        v36 = v16->fields.textOnMask;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12210/*"SHOP_ALREADY_GET"*/, 0LL);
        v38 = v36;
        v39 = this;
      }
      else
      {
LABEL_58:
        v38 = v16->fields.textOnMask;
        v39 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_1/*""*/;
      }
      goto LABEL_132;
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
  ShopBuyItemListViewItemDraw_o *v15; // x0
  const MethodInfo *v16; // x3
  ShopBuyItemListViewItemDraw_o *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x3
  struct ShopEntity_o *Shop_k__BackingField; // x8
  UILabel_o *v21; // x21
  System_String_o *v22; // x22
  System_String_o *v23; // x0
  ShopBuyItemListViewItemDraw_o *v24; // x0
  const MethodInfo *v25; // x3
  bool v26; // w0
  const MethodInfo *v27; // x1
  UICrossNarrowLabel_o *v28; // x20
  System_String_o *v29; // x19
  LocalizationManager_c *v30; // x0
  UICrossNarrowLabel_o *v31; // x21
  System_String_o *v32; // x22
  UILabel_o *v33; // x20
  const MethodInfo *v34; // x1
  System_String_o *DetailText; // x0
  System_String_o *v36; // x0
  bool IsNullOrEmpty; // w0
  const MethodInfo *v38; // x1
  ShopBuyItemListViewItemDraw_o *nameTextLabel; // x20
  System_String_o *NameText; // x19
  System_String_o *v41; // x0
  System_String_o *value; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *message; // [xsp+8h] [xbp-48h] BYREF

  v10 = this;
  value = preparationItemName;
  message = preparationMessage;
  if ( (byte_4BF9B4C & 1) == 0 )
  {
    sub_1C2E12C(&LocalizationManager_TypeInfo, item);
    sub_1C2E12C(&StringLiteral_16135/*"[000000]"*/, v11);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C2E12C(&StringLiteral_25943/*"？"*/, v12);
    byte_4BF9B4C = 1;
  }
  if ( isInPreparation )
  {
    messageTextLabel = v10->fields.messageTextLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__ReplaceCommonTag(preparationMessage, 0, 0LL);
    v15 = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_63235584(
                                             (System_String_o *)StringLiteral_16135/*"[000000]"*/,
                                             v14,
                                             0LL);
    ShopBuyItemListViewItemDraw__SetLabelText(v15, messageTextLabel, (System_String_o *)v15, v16);
    if ( item )
    {
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( this )
      {
        if ( ShopEntity__checkFlag((ShopEntity_o *)this, 4, 0LL) )
        {
          this = (ShopBuyItemListViewItemDraw_o *)v10->fields.nameTextLabel;
          if ( this )
          {
            v17 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_25943/*"？"*/;
LABEL_37:
            UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)this, (System_String_o *)v17, 0LL);
            return;
          }
        }
        else
        {
          IsNullOrEmpty = System_String__IsNullOrEmpty(preparationItemName, 0LL);
          nameTextLabel = (ShopBuyItemListViewItemDraw_o *)v10->fields.nameTextLabel;
          if ( IsNullOrEmpty )
          {
            NameText = ShopBuyItemListViewItem__get_NameText(item, v38);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v41 = NameText;
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v41 = preparationItemName;
          }
          this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v41, 0, 0LL);
          if ( nameTextLabel )
          {
            v17 = this;
            this = nameTextLabel;
            goto LABEL_37;
          }
        }
      }
    }
LABEL_42:
    sub_1C2E388(this, item);
  }
  if ( !item )
    goto LABEL_42;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_42;
  if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, 0LL) )
  {
    Shop_k__BackingField = item->fields._Shop_k__BackingField;
    if ( (!Shop_k__BackingField || Shop_k__BackingField->fields.purchaseType != 14)
      && ShopBuyItemListViewItem__TryGetClosedMessage(item, &message, &value, v19) )
    {
      v21 = v10->fields.messageTextLabel;
      v22 = message;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v23 = LocalizationManager__ReplaceCommonTag(v22, 0, 0LL);
      v24 = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_63235584(
                                               (System_String_o *)StringLiteral_16135/*"[000000]"*/,
                                               v23,
                                               0LL);
      ShopBuyItemListViewItemDraw__SetLabelText(v24, v21, (System_String_o *)v24, v25);
      v26 = System_String__IsNullOrEmpty(value, 0LL);
      v28 = v10->fields.nameTextLabel;
      if ( v26 )
      {
        v29 = ShopBuyItemListViewItem__get_NameText(item, v27);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          v30 = LocalizationManager_TypeInfo;
LABEL_39:
          j_il2cpp_runtime_class_init_0(v30);
        }
      }
      else
      {
        v30 = LocalizationManager_TypeInfo;
        v29 = value;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          goto LABEL_39;
      }
      this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v29, 0, 0LL);
      if ( !v28 )
        goto LABEL_42;
      UICrossNarrowLabel__SetCrossNarrowText(v28, (System_String_o *)this, 0LL);
      return;
    }
  }
  v31 = v10->fields.nameTextLabel;
  v32 = ShopBuyItemListViewItem__get_NameText(item, v18);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v32, 0, 0LL);
  if ( !v31 )
    goto LABEL_42;
  UICrossNarrowLabel__SetCrossNarrowText(v31, (System_String_o *)this, 0LL);
  v33 = v10->fields.messageTextLabel;
  DetailText = ShopBuyItemListViewItem__get_DetailText(item, v34);
  v36 = LocalizationManager__ReplaceCommonTag(DetailText, 0, 0LL);
  this = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_63235584(
                                            (System_String_o *)StringLiteral_16135/*"[000000]"*/,
                                            v36,
                                            0LL);
  if ( !v33 )
    goto LABEL_42;
  UILabel__set_text(v33, (System_String_o *)this, 0LL);
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
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x3
  UILabel_o *numTitleLabel; // x21
  ShopBuyItemListViewItemDraw_o *v13; // x0
  const MethodInfo *v14; // x3
  ShopBuyItemListViewItemDraw_o *v15; // x0
  const MethodInfo *v16; // x3
  UILabel_o *numTextLabel; // x21
  int32_t HoldCount; // w0
  ShopBuyItemListViewItemDraw_o *NumberFormat; // x0
  const MethodInfo *v20; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v22; // x21
  ShopBuyItemListViewItemDraw_o *v23; // x0
  const MethodInfo *v24; // x3

  v6 = this;
  if ( (byte_4BF9B4D & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_int__TypeInfo, item);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v7);
    sub_1C2E12C(&Method_ShopBuyItemListViewItemDraw__SetNumText_b__73_0__, v8);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C2E12C(&StringLiteral_12242/*"SHOP_BUY_ITEM_HOLD"*/, v9);
    byte_4BF9B4D = 1;
  }
  if ( isInPreparation )
  {
    if ( !item )
      goto LABEL_18;
    this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
    if ( !this )
      goto LABEL_18;
    v10 = ShopEntity__checkFlag((ShopEntity_o *)this, 2, 0LL);
    if ( v10 )
      goto LABEL_16;
  }
  else if ( !item )
  {
    goto LABEL_18;
  }
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_18;
  v10 = ShopEntity__checkHoldDisp((ShopEntity_o *)this, 0LL);
  if ( !v10 )
  {
LABEL_16:
    ShopBuyItemListViewItemDraw__SetLabelActive((ShopBuyItemListViewItemDraw_o *)v10, v6->fields.numTitleLabel, 0, v11);
    ShopBuyItemListViewItemDraw__SetLabelActive(v23, v6->fields.numTextLabel, 0, v24);
    return;
  }
  ShopBuyItemListViewItemDraw__SetLabelActive((ShopBuyItemListViewItemDraw_o *)v10, v6->fields.numTitleLabel, 1, v11);
  numTitleLabel = v6->fields.numTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12242/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
  ShopBuyItemListViewItemDraw__SetLabelText(v13, numTitleLabel, (System_String_o *)v13, v14);
  ShopBuyItemListViewItemDraw__SetLabelActive(v15, v6->fields.numTextLabel, 1, v16);
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
LABEL_18:
    sub_1C2E388(this, item);
  numTextLabel = v6->fields.numTextLabel;
  HoldCount = ShopEntity__getHoldCount((ShopEntity_o *)this, 0LL);
  NumberFormat = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__GetNumberFormat(HoldCount, 0LL);
  ShopBuyItemListViewItemDraw__SetLabelText(NumberFormat, numTextLabel, (System_String_o *)NumberFormat, v20);
  if ( item->fields._ShopKind_k__BackingField == 7 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
    v22 = (System_Action_int__o *)sub_1C2E378(System_Action_int__TypeInfo);
    System_Action_int____ctor(v22, (Il2CppObject *)v6, Method_ShopBuyItemListViewItemDraw__SetNumText_b__73_0__, 0LL);
    StoneCountRefreshComponent__AttachToGameObject(gameObject, v22, 1, 0LL);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetPossessionInfo(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *possessionGrid; // x21
  UnityEngine_Object_o *possessionNumLabel; // x21
  UnityEngine_Object_o *coinNumLabel; // x21
  UnityEngine_Object_o *coinIcon; // x21
  UnityEngine_Object_o *treasureDeviceLevelLabel; // x21
  UnityEngine_Object_o *summonedSprite; // x21
  UnityEngine_Object_o *possessionBGSprite; // x21
  ShopEntity_o *Master_object; // x0
  __int64 v18; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x8
  unsigned int purchaseType; // w8
  int32_t v21; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x21
  int32_t v23; // w2
  void *monitor; // x21
  Il2CppClass *klass; // x22
  UIGrid_o *v26; // x20
  UILabel_o *v27; // x22
  UILabel_o *v28; // x23
  UILabel_o *v29; // x24
  UISprite_o *v30; // x25
  UISprite_o *v31; // x26
  UISprite_o *v32; // x19
  bool IsPossessionInfoDisp; // w27
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4BF9B5B & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantMaster___, item);
    sub_1C2E12C(&DataManager_TypeInfo, v5);
    sub_1C2E12C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1C2E12C(&ShopBuyItemUtility_TypeInfo, v9);
    byte_4BF9B5B = 1;
  }
  entity = 0LL;
  possessionGrid = (UnityEngine_Object_o *)this->fields.possessionGrid;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(possessionGrid, 0LL, 0LL) )
  {
    possessionNumLabel = (UnityEngine_Object_o *)this->fields.possessionNumLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(possessionNumLabel, 0LL, 0LL) )
    {
      coinNumLabel = (UnityEngine_Object_o *)this->fields.coinNumLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(coinNumLabel, 0LL, 0LL) )
      {
        coinIcon = (UnityEngine_Object_o *)this->fields.coinIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(coinIcon, 0LL, 0LL) )
        {
          treasureDeviceLevelLabel = (UnityEngine_Object_o *)this->fields.treasureDeviceLevelLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(treasureDeviceLevelLabel, 0LL, 0LL) )
          {
            summonedSprite = (UnityEngine_Object_o *)this->fields.summonedSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Equality(summonedSprite, 0LL, 0LL) )
            {
              possessionBGSprite = (UnityEngine_Object_o *)this->fields.possessionBGSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              Master_object = (ShopEntity_o *)UnityEngine_Object__op_Equality(possessionBGSprite, 0LL, 0LL);
              if ( ((unsigned __int8)Master_object & 1) == 0 )
              {
                if ( !item )
                  goto LABEL_47;
                Shop_k__BackingField = item->fields._Shop_k__BackingField;
                if ( Shop_k__BackingField )
                {
                  purchaseType = Shop_k__BackingField->fields.purchaseType;
                  v21 = 0;
                  if ( purchaseType > 0x15 || ((1 << purchaseType) & 0x200110) == 0 )
                  {
LABEL_42:
                    Master_object = item->fields._Shop_k__BackingField;
                    if ( Master_object )
                    {
                      v26 = this->fields.possessionGrid;
                      v27 = this->fields.possessionNumLabel;
                      v28 = this->fields.coinNumLabel;
                      v29 = this->fields.treasureDeviceLevelLabel;
                      v30 = this->fields.summonedSprite;
                      v31 = this->fields.coinIcon;
                      v32 = this->fields.possessionBGSprite;
                      IsPossessionInfoDisp = ShopEntity__IsPossessionInfoDisp(Master_object, 0LL);
                      if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
                      ShopBuyItemUtility__SetPossessionInfo(
                        v21,
                        v26,
                        v27,
                        v28,
                        v31,
                        v29,
                        v30,
                        v32,
                        IsPossessionInfoDisp,
                        0LL);
                      return;
                    }
LABEL_47:
                    sub_1C2E388(Master_object, v18);
                  }
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  Master_object = (ShopEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantMaster___);
                  v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
                  if ( item->fields._Shop_k__BackingField )
                  {
                    Master_object = (ShopEntity_o *)ShopEntity__get_TargetId(item->fields._Shop_k__BackingField, 0LL);
                    v23 = (int)Master_object;
                  }
                  else
                  {
                    v23 = 0;
                  }
                  if ( !v22 )
                    goto LABEL_47;
                  if ( DataMasterBase_object__object__int___TryGetEntity(
                         v22,
                         &entity,
                         v23,
                         (const MethodInfo_327B1CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
                  {
                    Master_object = (ShopEntity_o *)entity;
                    if ( !entity )
                      goto LABEL_47;
                    Master_object = (ShopEntity_o *)ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL);
                    if ( ((unsigned __int8)Master_object & 1) != 0 )
                    {
                      if ( !entity )
                        goto LABEL_47;
                      klass = entity[1].klass;
                      monitor = entity[1].monitor;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      *(_QWORD *)&v35.fields.currentCryptoKey = klass;
                      *(_QWORD *)&v35.fields.fakeValue = monitor;
                      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v35, 0LL);
                      goto LABEL_42;
                    }
                  }
                }
                v21 = 0;
                goto LABEL_42;
              }
            }
          }
        }
      }
    }
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
  int bandSprite_high; // w8
  UILabel_o *priceLabelFree; // x19
  struct CommonConsumeEntity_array *CommonConsumeEntities_k__BackingField; // x24
  __int64 v12; // x8
  ShopBuyItemListViewItemDraw_o *priceIconLabel; // x19
  int32_t v14; // w20
  ShopBuyItemListViewItemDraw_o *ItemCount; // x0
  const MethodInfo *v16; // x2
  ShopEntity_o *v17; // x0
  int32_t v18; // w1
  int32_t v19; // w3
  int32_t v20; // w2
  System_Int32_array *UserItemCounts; // x0
  UIIconLabel_o *v22; // x22
  System_Int32_array *v23; // x21
  const MethodInfo *v24; // x1
  int32_t v25; // w23
  ShopBuyItemListViewItemDraw_o *priceIconLabel2; // x19
  const MethodInfo *v27; // x1
  ShopEntity_o *Shop_k__BackingField; // x8
  int32_t v29; // w20
  UIIconLabel_o *v30; // x22
  ShopBuyItemListViewItemDraw_o *PriceIcon; // x0
  const MethodInfo *v32; // x2
  int32_t v33; // w23
  int32_t sellQp; // w24
  UIIconLabel_o *priceIconLabel1; // x21
  int32_t v36; // w22
  int32_t rangeSprite; // w23
  int32_t v38; // w21
  struct ItemEntity_o *itemEntity; // x8
  const MethodInfo *v40; // x3
  ShopEntity_o *Price; // x0
  struct ItemEntity_o *v42; // x8
  ShopEntity_o *v43; // x0
  int32_t v44; // w20
  struct ItemEntity_o *v45; // x8
  double v46; // d0
  UILabel_o **p_LineText2digit; // x8

  v6 = this;
  if ( (byte_4BF9B53 & 1) == 0 )
  {
    sub_1C2E12C(&LocalizationManager_TypeInfo, item);
    sub_1C2E12C(&System_Math_TypeInfo, v7);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C2E12C(&StringLiteral_12271/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, v8);
    byte_4BF9B53 = 1;
  }
  if ( !item )
    goto LABEL_83;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_83;
  bandSprite_high = HIDWORD(this->fields.bandSprite);
  if ( bandSprite_high == 14 )
  {
    CommonConsumeEntities_k__BackingField = item->fields._CommonConsumeEntities_k__BackingField;
    if ( !CommonConsumeEntities_k__BackingField )
      return;
    v12 = *(_QWORD *)&CommonConsumeEntities_k__BackingField->max_length;
    if ( !v12 )
      return;
    if ( (_DWORD)v12 == 1 )
    {
      if ( !CommonConsumeEntities_k__BackingField->m_Items[0] )
        return;
      priceIconLabel = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
      if ( CommonConsumeEntities_k__BackingField->max_length )
      {
        v14 = (int)this;
        this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[0];
        if ( !this )
          goto LABEL_83;
        goto LABEL_54;
      }
    }
    else
    {
      if ( (int)v12 < 2 )
        return;
      if ( !CommonConsumeEntities_k__BackingField->m_Items[0] )
        goto LABEL_87;
      priceIconLabel1 = v6->fields.priceIconLabel1;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
      if ( CommonConsumeEntities_k__BackingField->max_length )
      {
        v36 = (int)this;
        this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[0];
        if ( !this )
          goto LABEL_83;
        rangeSprite = (int32_t)this->fields.rangeSprite;
        this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0LL);
        if ( !priceIconLabel1 )
          goto LABEL_83;
        UIIconLabel__SetPurchaseDecision(priceIconLabel1, v36, rangeSprite, (int32_t)this, 0LL);
        if ( CommonConsumeEntities_k__BackingField->max_length > 1 )
        {
LABEL_87:
          if ( !CommonConsumeEntities_k__BackingField->m_Items[1] )
            return;
          priceIconLabel = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel2;
          this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
          if ( CommonConsumeEntities_k__BackingField->max_length > 1 )
          {
            v14 = (int)this;
            this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[1];
            if ( !this )
              goto LABEL_83;
LABEL_54:
            v38 = (int32_t)this->fields.rangeSprite;
            this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntity__GetUserHasNum(
                                                      (CommonConsumeEntity_o *)this,
                                                      0LL);
            if ( !priceIconLabel )
              goto LABEL_83;
            v19 = (int)this;
            this = priceIconLabel;
            v18 = v14;
            v20 = v38;
            goto LABEL_56;
          }
        }
      }
    }
LABEL_84:
    sub_1C2E390(this, item);
  }
  if ( bandSprite_high == 13 )
  {
    priceLabelFree = v6->fields.priceLabelFree;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12271/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, 0LL);
    if ( priceLabelFree )
    {
      UILabel__set_text(priceLabelFree, (System_String_o *)this, 0LL);
      return;
    }
LABEL_83:
    sub_1C2E388(this, item);
  }
  ItemCount = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetItemCount((ShopEntity_o *)this, 0LL);
  if ( (int)ItemCount >= 2 )
  {
    if ( isInPreparation )
    {
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_83;
      ItemCount = (ShopBuyItemListViewItemDraw_o *)ShopEntity__checkFlag((ShopEntity_o *)this, 64, 0LL);
      if ( ((unsigned __int8)ItemCount & 1) != 0 )
      {
        this = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel1;
        if ( !this )
          goto LABEL_83;
        UIIconLabel__SetEventQuestion((UIIconLabel_o *)this, 0LL);
        this = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel2;
        if ( !this )
          goto LABEL_83;
        goto LABEL_34;
      }
    }
    UserItemCounts = ShopBuyItemListViewItemDraw__GetUserItemCounts(ItemCount, item, v16);
    v22 = v6->fields.priceIconLabel1;
    v23 = UserItemCounts;
    this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v24);
    if ( !item->fields._Shop_k__BackingField )
      goto LABEL_83;
    v25 = (int)this;
    this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrices(item->fields._Shop_k__BackingField, 0, 0LL);
    if ( !v23 )
      goto LABEL_83;
    if ( v23->max_length )
    {
      if ( !v22 )
        goto LABEL_83;
      UIIconLabel__SetPurchaseDecision(v22, v25, (int32_t)this, v23->m_Items[1], 0LL);
      priceIconLabel2 = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel2;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v27);
      Shop_k__BackingField = item->fields._Shop_k__BackingField;
      if ( !Shop_k__BackingField )
        goto LABEL_83;
      v29 = (int)this;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrices(Shop_k__BackingField, 1, 0LL);
      if ( v23->max_length > 1 )
      {
        if ( !priceIconLabel2 )
          goto LABEL_83;
        v19 = v23->m_Items[2];
        v20 = (int)this;
        this = priceIconLabel2;
        v18 = v29;
        goto LABEL_56;
      }
    }
    goto LABEL_84;
  }
  v17 = item->fields._Shop_k__BackingField;
  if ( v17 && ShopEntity__IsSoldOut(v17, 0LL) && item->fields._IsNotHavingShopItemReceived_k__BackingField )
  {
    this = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel;
    if ( !this )
      goto LABEL_83;
    v18 = 56;
    v19 = -1;
    v20 = 0;
LABEL_56:
    UIIconLabel__SetPurchaseDecision((UIIconLabel_o *)this, v18, v20, v19, 0LL);
    return;
  }
  if ( isInPreparation )
  {
    this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
    if ( !this )
      goto LABEL_83;
    if ( ShopEntity__checkFlag((ShopEntity_o *)this, 64, 0LL) )
    {
      this = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel;
      if ( !this )
        goto LABEL_83;
LABEL_34:
      UIIconLabel__SetEventQuestion((UIIconLabel_o *)this, 0LL);
      return;
    }
  }
  v30 = v6->fields.priceIconLabel;
  PriceIcon = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
  v33 = (int)PriceIcon;
  if ( item->fields._Shop_k__BackingField )
  {
    PriceIcon = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrice(item->fields._Shop_k__BackingField, 0LL);
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
  this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItemDraw__GetUserItemCounts(PriceIcon, item, v32);
  if ( !this )
    goto LABEL_83;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_84;
  if ( !v30 )
    goto LABEL_83;
  UIIconLabel__SetPurchaseDecision(v30, v33, sellQp, (int32_t)this->fields.rangeSprite, 0LL);
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_83;
  if ( ShopEntity__IsSetStrikethrough((ShopEntity_o *)this, isInPreparation, 0LL) )
  {
    Price = item->fields._Shop_k__BackingField;
    if ( Price )
    {
      Price = (ShopEntity_o *)ShopEntity__GetPrice(Price, 0LL);
      if ( !(_DWORD)Price )
        goto LABEL_80;
    }
    else
    {
      v42 = item->fields.itemEntity;
      if ( !v42 )
        goto LABEL_80;
      Price = (ShopEntity_o *)(unsigned int)v42->fields.sellQp;
      if ( !(_DWORD)Price )
        goto LABEL_80;
    }
    v43 = item->fields._Shop_k__BackingField;
    if ( v43 )
    {
      v44 = ShopEntity__GetPrice(v43, 0LL);
    }
    else
    {
      v45 = item->fields.itemEntity;
      if ( v45 )
        v44 = v45->fields.sellQp;
      else
        v44 = 0;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v46 = log10((double)v44);
    if ( v46 == INFINITY || (int)v46 )
    {
      p_LineText2digit = &v6->fields.LineText2digit;
      goto LABEL_82;
    }
LABEL_80:
    p_LineText2digit = &v6->fields.LineText;
LABEL_82:
    ShopBuyItemListViewItemDraw__SetLabelActive((ShopBuyItemListViewItemDraw_o *)Price, *p_LineText2digit, 1, v40);
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
  ShopBuyItemListViewItemDraw_o *v18; // x0
  const MethodInfo *v19; // x3
  bool IsPaidExchange; // w20
  System_String_o **v21; // x8
  ShopBuyItemListViewItemDraw_o *v22; // x0
  const MethodInfo *v23; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4BF9B52 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantMaster___, item);
    sub_1C2E12C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v7);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1C2E12C(&StringLiteral_12303/*"SHOP_QUEST_FREE_EXCHANGE_CLEARED"*/, v9);
    sub_1C2E12C(&StringLiteral_12305/*"SHOP_QUEST_PAID_EXCHANGE_CLEARED"*/, v10);
    sub_1C2E12C(&StringLiteral_19974/*"freeShopCondId"*/, v11);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C2E12C(&StringLiteral_12210/*"SHOP_ALREADY_GET"*/, v12);
    byte_4BF9B52 = 1;
  }
  entity = 0LL;
  if ( item )
  {
    Shop_k__BackingField = item->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_33;
    shopType = Shop_k__BackingField->fields.shopType;
    if ( shopType > 0x10 || ((1 << shopType) & 0x1000C) == 0 )
      goto LABEL_21;
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantMaster___);
      v15 = item->fields._Shop_k__BackingField;
      if ( v15 )
      {
        targetIds = v15->fields.targetIds;
        if ( targetIds )
        {
          if ( !targetIds->max_length )
            sub_1C2E390(this, item);
          if ( this )
          {
            this = (ShopBuyItemListViewItemDraw_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                      &entity,
                                                      targetIds->m_Items[1],
                                                      (const MethodInfo_327B1CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v17 = item->fields._Shop_k__BackingField;
              if ( !v17 )
                goto LABEL_33;
              if ( v17->fields.purchaseType == 4 )
              {
                this = (ShopBuyItemListViewItemDraw_o *)entity;
                if ( !entity )
                  goto LABEL_33;
                this = (ShopBuyItemListViewItemDraw_o *)ServantEntity__get_IsServantEquip(
                                                          (ServantEntity_o *)entity,
                                                          0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v18 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_12210/*"SHOP_ALREADY_GET"*/,
                                                           0LL);
                  ShopBuyItemListViewItemDraw__SetLabelText(v18, v4->fields.textOnMask, (System_String_o *)v18, v19);
                }
              }
            }
            Shop_k__BackingField = item->fields._Shop_k__BackingField;
            if ( Shop_k__BackingField )
            {
LABEL_21:
              this = (ShopBuyItemListViewItemDraw_o *)Shop_k__BackingField->fields.script;
              if ( this )
              {
                if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                        (System_Collections_Generic_Dictionary_object__object__o *)this,
                        (Il2CppObject *)StringLiteral_19974/*"freeShopCondId"*/,
                        (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
                  return;
                this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
                if ( this )
                {
                  if ( !ShopEntity__IsAfterTheFreeShopReleaseDate((ShopEntity_o *)this, 0LL) )
                    return;
                  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
                  if ( this )
                  {
                    IsPaidExchange = ShopEntity__IsPaidExchange((ShopEntity_o *)this, 0LL);
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v21 = (System_String_o **)&StringLiteral_12305/*"SHOP_QUEST_PAID_EXCHANGE_CLEARED"*/;
                    if ( !IsPaidExchange )
                      v21 = (System_String_o **)&StringLiteral_12303/*"SHOP_QUEST_FREE_EXCHANGE_CLEARED"*/;
                    v22 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get(*v21, 0LL);
                    ShopBuyItemListViewItemDraw__SetLabelText(v22, v4->fields.textOnMask, (System_String_o *)v22, v23);
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
LABEL_33:
    sub_1C2E388(this, item);
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
  unsigned int baseSprite; // w8
  const MethodInfo *v26; // x2
  struct ShopEntity_o *Shop_k__BackingField; // x0
  Il2CppObject *MasterData_object; // x21
  struct ShopEntity_o *v29; // x8
  struct ShopEntity_o *v30; // x8
  int32_t limitNum; // w9
  UILabel_o *restCountLabel; // x19
  System_String_o *v33; // x20
  int32_t v34; // w0
  struct ShopEntity_o *v35; // x8
  int32_t purchaseType; // w20
  __int64 *v37; // x8
  struct ShopEntity_o *v38; // x8
  ShopReleaseMaster_o *v39; // x26
  struct ShopEntity_o *v40; // x8
  struct ShopEntity_o *v41; // x8
  struct ShopEntity_o *v42; // x8
  bool v43; // w8
  int v44; // w21
  ShopBuyItemListViewItemDraw_o *v45; // x0
  const MethodInfo *v46; // x3
  Il2CppObject *NumberFormat; // x1
  System_String_o *v48; // x0
  struct ShopEntity_o *v49; // x8
  struct ShopEntity_o *v50; // x8
  int32_t nameTextLabel; // w20
  System_String_o *v52; // x21

  v16 = this;
  if ( (byte_4BF9B4E & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_ShopReleaseMaster___, item);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserShopMaster___, v17);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v18);
    sub_1C2E12C(&NetworkManager_TypeInfo, v19);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1C2E12C(&StringLiteral_12246/*"SHOP_BUY_PREPARATION"*/, v21);
    sub_1C2E12C(&StringLiteral_8480/*"LOTTERY_REST_NUM"*/, v22);
    sub_1C2E12C(&StringLiteral_15072/*"UNIT_REST_NONE"*/, v23);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C2E12C(&StringLiteral_3953/*"COUNT_INFO"*/, v24);
    byte_4BF9B4E = 1;
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
      this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_65;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BF81D5 )
      {
        sub_1C2E12C(&NetworkManager_TypeInfo, item);
        byte_4BF81D5 = 1;
      }
      this = (ShopBuyItemListViewItemDraw_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ShopBuyItemListViewItemDraw_o *)NetworkManager_TypeInfo;
      }
      v29 = item->fields._Shop_k__BackingField;
      if ( !v29 || !MasterData_object )
        goto LABEL_65;
      this = (ShopBuyItemListViewItemDraw_o *)UserShopMaster__GetEntityDefinitely(
                                                (UserShopMaster_o *)MasterData_object,
                                                *(_QWORD *)&this->fields.priceLabelFree->fields.updateAnchors,
                                                v29->fields.baseShopId,
                                                0LL);
      v30 = item->fields._Shop_k__BackingField;
      if ( v30 )
      {
        limitNum = v30->fields.limitNum;
        if ( !this )
          goto LABEL_65;
      }
      else
      {
        limitNum = 0;
        if ( !this )
          goto LABEL_65;
      }
      v44 = limitNum - HIDWORD(this->fields.m_CancellationTokenSource);
      if ( v44 >= 1 && (!v30 || !ShopEntity__IsSoldOut(item->fields._Shop_k__BackingField, 0LL)) )
      {
        restCountLabel = v16->fields.restCountLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3953/*"COUNT_INFO"*/, 0LL);
        v34 = v44;
LABEL_58:
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v34, 0LL);
        v48 = v33;
        goto LABEL_59;
      }
      if ( !item->fields._IsNotHavingShopItemReceived_k__BackingField )
        goto LABEL_9;
      restCountLabel = v16->fields.restCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
LABEL_53:
      v37 = &StringLiteral_15072/*"UNIT_REST_NONE"*/;
      goto LABEL_54;
    }
    if ( ShopEntity__IsSoldOut(Shop_k__BackingField, 0LL) )
      goto LABEL_9;
    v35 = item->fields._Shop_k__BackingField;
    if ( v35 )
      purchaseType = v35->fields.purchaseType;
    else
LABEL_33:
      purchaseType = item->fields.itemEntity != 0LL;
    restCountLabel = v16->fields.restCountLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( purchaseType == 16 )
    {
      v37 = &StringLiteral_8480/*"LOTTERY_REST_NUM"*/;
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
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_65;
    this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
    v38 = item->fields._Shop_k__BackingField;
    if ( !v38 )
      goto LABEL_65;
    v39 = (ShopReleaseMaster_o *)this;
    if ( !this )
      goto LABEL_65;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(
                                              (ShopReleaseMaster_o *)this,
                                              v38->fields.id,
                                              38,
                                              0LL);
    *isNotServantGet = (unsigned __int8)this & 1;
    v40 = item->fields._Shop_k__BackingField;
    if ( !v40 )
      goto LABEL_65;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v39, v40->fields.id, 41, 0LL);
    *isNotServantHaving = (unsigned __int8)this & 1;
    v41 = item->fields._Shop_k__BackingField;
    if ( !v41 )
      goto LABEL_65;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v39, v41->fields.id, 40, 0LL);
    *isServantHaving = (unsigned __int8)this & 1;
    v42 = item->fields._Shop_k__BackingField;
    if ( !v42 )
      goto LABEL_65;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v39, v42->fields.id, 78, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v43 = 1;
    }
    else
    {
      v49 = item->fields._Shop_k__BackingField;
      if ( !v49 )
        goto LABEL_65;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v39, v49->fields.id, 79, 0LL);
      v43 = (unsigned __int8)this & 1;
    }
    *isNotCostumeGet = v43;
    v50 = item->fields._Shop_k__BackingField;
    if ( !v50 )
      goto LABEL_65;
    *isNotCommandCodeGet = ShopReleaseMaster__isExistCondType(v39, v50->fields.id, 108, 0LL);
    this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
    if ( !this )
      goto LABEL_65;
  }
  if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, 0LL) )
  {
LABEL_9:
    ShopBuyItemListViewItemDraw__ShowSoldOut(v16, item, v26);
    return;
  }
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
LABEL_65:
    sub_1C2E388(this, item);
  switch ( LODWORD(this->fields.baseSprite) )
  {
    case 2:
      goto LABEL_9;
    case 5:
    case 7:
    case 9:
      goto LABEL_27;
    case 6:
      if ( !ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)this, 0, 0LL) )
        goto LABEL_71;
LABEL_27:
      restCountLabel = v16->fields.restCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3953/*"COUNT_INFO"*/, 0LL);
      v34 = 0;
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
        v52 = LocalizationManager__Get((System_String_o *)StringLiteral_3953/*"COUNT_INFO"*/, 0LL);
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(nameTextLabel, 0LL);
        v48 = v52;
LABEL_59:
        v45 = (ShopBuyItemListViewItemDraw_o *)System_String__Format(v48, NumberFormat, 0LL);
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
      v37 = &StringLiteral_12246/*"SHOP_BUY_PREPARATION"*/;
      break;
  }
LABEL_54:
  v45 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v37, 0LL);
LABEL_60:
  ShopBuyItemListViewItemDraw__SetLabelText(v45, restCountLabel, (System_String_o *)v45, v46);
}


void __fastcall ShopBuyItemListViewItemDraw__SetShopResetText(
        ShopBuyItemListViewItemDraw_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
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
  UnityEngine_Object_o *shopResetNoticeLabel; // x21
  void *IsSoldOut; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  int32_t baseShopId; // w21
  Il2CppObject *Master_object; // x22
  _BOOL8 v21; // x0
  const MethodInfo *v22; // x3
  Il2CppObject *v23; // x22
  UserShopEntity_o *EntityDefinitely; // x21
  const MethodInfo *v25; // x3
  char v26; // w20
  bool v27; // w20
  int32_t resetLimitNum; // w8
  __int64 *v29; // x8
  System_String_o *v30; // x2
  System_Int32_array *v31; // [xsp+0h] [xbp-50h] BYREF
  ShopResetEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BF9B5A & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_ItemMaster___, shopEntity);
    sub_1C2E12C(&Method_DataManager_GetMaster_ShopResetMaster___, v5);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserShopMaster___, v6);
    sub_1C2E12C(&DataManager_TypeInfo, v7);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v8);
    sub_1C2E12C(&NetworkManager_TypeInfo, v9);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v10);
    sub_1C2E12C(&StringLiteral_12265/*"SHOP_CAN_NOT_RESET_NOTICE_MESSAGE"*/, v11);
    sub_1C2E12C(&StringLiteral_12267/*"SHOP_CAN_RESET_NOTICE_MESSAGE"*/, v12);
    sub_1C2E12C(&StringLiteral_12266/*"SHOP_CAN_NOT_RESET_SOLD_OUT_NOTICE_MESSAGE"*/, v13);
    sub_1C2E12C(&StringLiteral_1/*""*/, v14);
    byte_4BF9B5A = 1;
  }
  v31 = 0LL;
  entity = 0LL;
  shopResetNoticeLabel = (UnityEngine_Object_o *)this->fields.shopResetNoticeLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsSoldOut = (void *)UnityEngine_Object__op_Equality(shopResetNoticeLabel, 0LL, 0LL);
  if ( ((unsigned __int8)IsSoldOut & 1) == 0 )
  {
    if ( shopEntity )
    {
      baseShopId = shopEntity->fields.baseShopId;
      ShopBuyItemListViewItemDraw__SetLabelText(
        (ShopBuyItemListViewItemDraw_o *)IsSoldOut,
        this->fields.shopResetNoticeLabel,
        (System_String_o *)StringLiteral_1/*""*/,
        v18);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ShopResetMaster___);
      IsSoldOut = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ItemMaster___);
      if ( IsSoldOut )
      {
        if ( Master_object )
        {
          v21 = ShopResetMaster__TryGetEntity(
                  (ShopResetMaster_o *)Master_object,
                  &entity,
                  baseShopId,
                  *((_DWORD *)IsSoldOut + 25),
                  0LL);
          if ( !v21 )
          {
            v27 = 0;
LABEL_42:
            ShopBuyItemListViewItemDraw__SetLabelActive(
              (ShopBuyItemListViewItemDraw_o *)v21,
              this->fields.shopResetNoticeLabel,
              v27,
              v22);
            return;
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v23 = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserShopMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BF81D5 )
          {
            sub_1C2E12C(&NetworkManager_TypeInfo, v17);
            byte_4BF81D5 = 1;
          }
          IsSoldOut = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            IsSoldOut = NetworkManager_TypeInfo;
          }
          if ( v23 )
          {
            EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                                 (UserShopMaster_o *)v23,
                                 *(_QWORD *)(*((_QWORD *)IsSoldOut + 23) + 64LL),
                                 baseShopId,
                                 0LL);
            IsSoldOut = (void *)ShopEntity__IsSoldOut(shopEntity, 0LL);
            if ( ((unsigned __int8)IsSoldOut & 1) != 0
              && (IsSoldOut = (void *)ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0LL),
                  ((unsigned __int8)IsSoldOut & 1) == 0) )
            {
              IsSoldOut = (void *)ShopEntity__IsAnotherItemBuyable(shopEntity, &v31, 0LL);
              v26 = (unsigned __int8)IsSoldOut ^ 1;
            }
            else
            {
              v26 = 0;
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
                  if ( (v26 & 1) != 0 )
                    v29 = &StringLiteral_12266/*"SHOP_CAN_NOT_RESET_SOLD_OUT_NOTICE_MESSAGE"*/;
                  else
                    v29 = &StringLiteral_12265/*"SHOP_CAN_NOT_RESET_NOTICE_MESSAGE"*/;
                  goto LABEL_40;
                }
LABEL_30:
                if ( (v26 & 1) == 0 )
                {
                  v30 = (System_String_o *)StringLiteral_1/*""*/;
                  v27 = 0;
LABEL_41:
                  ShopBuyItemListViewItemDraw__SetLabelText(
                    (ShopBuyItemListViewItemDraw_o *)IsSoldOut,
                    this->fields.shopResetNoticeLabel,
                    v30,
                    v25);
                  goto LABEL_42;
                }
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v29 = &StringLiteral_12267/*"SHOP_CAN_RESET_NOTICE_MESSAGE"*/;
LABEL_40:
                IsSoldOut = LocalizationManager__Get((System_String_o *)*v29, 0LL);
                v30 = (System_String_o *)IsSoldOut;
                v27 = 1;
                goto LABEL_41;
              }
            }
          }
        }
      }
    }
    sub_1C2E388(IsSoldOut, v17);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetSpriteActive(
        ShopBuyItemListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4BF9B48 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, sprite);
    byte_4BF9B48 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_1C2E388(gameObject, v7);
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

  if ( (byte_4BF9B49 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, sprite);
    byte_4BF9B49 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !sprite )
      sub_1C2E388(v6, v7);
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
  bool v8; // w0
  UnityEngine_Object_o *soldOutImage; // x21
  bool v10; // w20
  System_String_o *v11; // x0
  const MethodInfo *v12; // x3
  UILabel_o *restCountLabel; // x1
  System_String_o *v14; // x2
  UILabel_o *v15; // x19

  v4 = this;
  if ( (byte_4BF9B59 & 1) == 0 )
  {
    sub_1C2E12C(&LocalizationManager_TypeInfo, item);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    sub_1C2E12C(&StringLiteral_12255/*"SHOP_BUY_SOLD_OUT"*/, v6);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C2E12C(&StringLiteral_1/*""*/, v7);
    byte_4BF9B59 = 1;
  }
  if ( !item )
    goto LABEL_21;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_21;
  v8 = ShopEntity__checkFlag((ShopEntity_o *)this, 0x8000, 0LL);
  soldOutImage = (UnityEngine_Object_o *)v4->fields.soldOutImage;
  v10 = v8;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = (System_String_o *)UnityEngine_Object__op_Inequality(0LL, soldOutImage, 0LL);
  if ( v10 )
  {
    if ( ((unsigned __int8)v11 & 1) == 0 )
    {
LABEL_12:
      restCountLabel = v4->fields.restCountLabel;
      v14 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_20;
    }
    this = (ShopBuyItemListViewItemDraw_o *)v4->fields.soldOutImage;
    if ( this )
    {
      this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        goto LABEL_12;
      }
    }
LABEL_21:
    sub_1C2E388(this, item);
  }
  if ( ((unsigned __int8)v11 & 1) != 0 )
  {
    this = (ShopBuyItemListViewItemDraw_o *)v4->fields.soldOutImage;
    if ( !this )
      goto LABEL_21;
    this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  v15 = v4->fields.restCountLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12255/*"SHOP_BUY_SOLD_OUT"*/, 0LL);
  restCountLabel = v15;
  v14 = v11;
LABEL_20:
  ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v11, restCountLabel, v14, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewItemDraw__UpdateListViewDraw(
        ShopBuyItemListViewItemDraw_o *this,
        int32_t mode,
        ShopBuyItemListViewManager_o *manager,
        const MethodInfo *method)
{
  UnityEngine_Object_o *anotherBuyableWidget; // x21
  struct UIWidget_o *v8; // x0
  __int64 v9; // x1
  struct System_Int32_array *possessionAnotherItemIds; // x8

  if ( (byte_4BF9B42 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    byte_4BF9B42 = 1;
  }
  if ( mode )
  {
    anotherBuyableWidget = (UnityEngine_Object_o *)this->fields.anotherBuyableWidget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = (struct UIWidget_o *)UnityEngine_Object__op_Inequality(anotherBuyableWidget, 0LL, 0LL);
    if ( ((unsigned __int8)v8 & 1) != 0 )
    {
      possessionAnotherItemIds = this->fields.possessionAnotherItemIds;
      if ( possessionAnotherItemIds )
      {
        if ( (int)possessionAnotherItemIds->max_length >= 2 )
        {
          if ( !manager || (v8 = this->fields.anotherBuyableWidget) == 0LL )
            sub_1C2E388(v8, v9);
          ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))v8->klass->vtable._8_set_alpha.method)(
            v8,
            v8->klass->vtable._9_CalculateFinalAlpha.methodPtr,
            manager->fields.alphaAnimNow);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewItemDraw___SetNumText_b__73_0(
        ShopBuyItemListViewItemDraw_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *numTextLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_4BF9B5D & 1) == 0 )
  {
    sub_1C2E12C(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_4BF9B5D = 1;
  }
  numTextLabel = this->fields.numTextLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !numTextLabel )
    sub_1C2E388(NumberFormat, v7);
  UILabel__set_text(numTextLabel, NumberFormat, 0LL);
}