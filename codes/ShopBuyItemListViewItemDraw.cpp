void __fastcall ShopBuyItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49F8A85 & 1) == 0 )
  {
    sub_1B640C8(&ShopBuyItemListViewItemDraw_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_20255/*"img_list_bg04"*/, v4);
    byte_49F8A85 = 1;
  }
  ShopBuyItemListViewItemDraw_TypeInfo->static_fields->BASE_IMG_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_20255/*"img_list_bg04"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ShopBuyItemListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_20255/*"img_list_bg04"*/,
    v2,
    v3);
}


void __fastcall ShopBuyItemListViewItemDraw___ctor(ShopBuyItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ShopBuyItemListViewItemDraw__Awake(ShopBuyItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  struct UISprite_o *v7; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct UISprite_o *v11; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_49F8A6E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8A6E = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL);
  if ( !v4 )
  {
    v7 = this->fields.baseSprite;
    if ( !v7
      || (mAtlas = v7->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v5, v6),
          (v11 = this->fields.baseSprite) == 0LL) )
    {
      sub_1B64324(v4);
    }
    mSpriteName = v11->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseSpriteName, (int32_t)mSpriteName, v9, v10);
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
  __int64 v5; // x1
  __int64 v6; // x8
  SetItemMaster_o *v7; // x20
  unsigned __int64 v8; // x21
  int m_CancellationTokenSource; // w8
  int v10; // w9
  __int64 v11; // x10

  if ( (byte_49F8A82 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SetItemMaster___, ids);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49F8A82 = 1;
  }
  if ( !ids )
    goto LABEL_20;
  if ( !*(_QWORD *)&ids->max_length )
    return 0;
  this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_1B64324(this);
  this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SetItemMaster___);
  v6 = *(_QWORD *)&ids->max_length;
  if ( (int)v6 < 1 )
    return 0;
  v7 = (SetItemMaster_o *)this;
  v8 = 0LL;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)v6 )
LABEL_21:
      sub_1B6432C(this, v5);
    if ( !v7 )
      goto LABEL_20;
    this = (ShopBuyItemListViewItemDraw_o *)SetItemMaster__GetList(v7, ids->m_Items[v8 + 1], 0LL);
    if ( !this )
      goto LABEL_20;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource >= 1 )
      break;
LABEL_17:
    LODWORD(v6) = ids->max_length;
    if ( (__int64)++v8 >= (int)v6 )
      return 0;
  }
  v10 = 0;
  while ( 1 )
  {
    if ( m_CancellationTokenSource == v10 )
      goto LABEL_21;
    v11 = *((_QWORD *)&this->fields.rangeSprite + v10);
    if ( !v11 )
      goto LABEL_20;
    if ( *(_DWORD *)(v11 + 20) == 7 )
      return 1;
    if ( m_CancellationTokenSource == ++v10 )
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
  _DWORD *v8; // x21
  System_Int32_array *v9; // x19
  Il2CppObject *MasterData_object; // x21
  ShopEntity_o *v11; // x8
  int64_t v12; // x20
  __int64 v13; // x1
  int32_t v14; // w8
  UserItemMaster_o *v15; // x21
  unsigned int ItemCount; // w0
  ShopEntity_o *Shop_k__BackingField; // x8
  unsigned __int64 v18; // x22
  __int64 v19; // x24
  int64_t v20; // x23
  unsigned int v21; // w0

  if ( (byte_49F8A83 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, item);
    sub_1B640C8(&int___TypeInfo, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49F8A83 = 1;
  }
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !item || (v8 = (_DWORD *)SelfUserGame, (SelfUserGame = (__int64)item->fields._Shop_k__BackingField) == 0) )
LABEL_28:
    sub_1B64324(SelfUserGame);
  switch ( *(_DWORD *)(SelfUserGame + 68) )
  {
    case 1:
      SelfUserGame = sub_1B64170(int___TypeInfo, 1LL);
      if ( !v8 )
        goto LABEL_28;
      v9 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_28;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_48;
      v14 = v8[44];
      goto LABEL_46;
    case 2:
      SelfUserGame = sub_1B64170(int___TypeInfo, 1LL);
      if ( !v8 )
        goto LABEL_28;
      v9 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_28;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_48;
      v14 = v8[24];
      goto LABEL_46;
    case 4:
      SelfUserGame = sub_1B64170(int___TypeInfo, 1LL);
      if ( !v8 )
        goto LABEL_28;
      v9 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_28;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_48;
      v14 = v8[46];
      goto LABEL_46;
    case 6:
    case 0xB:
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_28;
      SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)SelfUserGame,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !item->fields._Shop_k__BackingField )
        goto LABEL_28;
      v15 = (UserItemMaster_o *)SelfUserGame;
      ItemCount = ShopEntity__GetItemCount(item->fields._Shop_k__BackingField, 0LL);
      SelfUserGame = sub_1B64170(int___TypeInfo, ItemCount);
      Shop_k__BackingField = item->fields._Shop_k__BackingField;
      if ( !Shop_k__BackingField )
        goto LABEL_28;
      v9 = (System_Int32_array *)SelfUserGame;
      v18 = 0LL;
      v19 = SelfUserGame + 32;
      break;
    case 8:
    case 9:
    case 0xC:
      v9 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_28;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      SelfUserGame = NetworkManager__get_UserId(0LL);
      v11 = item->fields._Shop_k__BackingField;
      if ( !v11 )
        goto LABEL_28;
      v12 = SelfUserGame;
      SelfUserGame = ShopEntity__GetItemIDs(v11, 0, 0LL);
      if ( !MasterData_object )
        goto LABEL_28;
      SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)MasterData_object,
                                v12,
                                SelfUserGame,
                                0LL);
      if ( !SelfUserGame || !v9 )
        goto LABEL_28;
      if ( !v9->max_length )
        goto LABEL_48;
      v14 = *(_DWORD *)(SelfUserGame + 28);
      goto LABEL_46;
    case 0xA:
      SelfUserGame = sub_1B64170(int___TypeInfo, 1LL);
      if ( !v8 )
        goto LABEL_28;
      v9 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_28;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_48;
      v14 = v8[47];
LABEL_46:
      v9->m_Items[1] = v14;
      return v9;
    default:
      v21 = ShopEntity__GetItemCount((ShopEntity_o *)SelfUserGame, 0LL);
      return (System_Int32_array *)sub_1B64170(int___TypeInfo, v21);
  }
  while ( (__int64)v18 < ShopEntity__GetItemCount(Shop_k__BackingField, 0LL) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    SelfUserGame = NetworkManager__get_UserId(0LL);
    if ( item->fields._Shop_k__BackingField )
    {
      v20 = SelfUserGame;
      SelfUserGame = ShopEntity__GetItemIDs(item->fields._Shop_k__BackingField, v18, 0LL);
      if ( v15 )
      {
        SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(v15, v20, SelfUserGame, 0LL);
        if ( SelfUserGame )
        {
          if ( v9 )
          {
            if ( v18 >= v9->max_length )
LABEL_48:
              sub_1B6432C(SelfUserGame, v13);
            *(_DWORD *)(v19 + 4 * v18) = *(_DWORD *)(SelfUserGame + 28);
            Shop_k__BackingField = item->fields._Shop_k__BackingField;
            ++v18;
            if ( Shop_k__BackingField )
              continue;
          }
        }
      }
    }
    goto LABEL_28;
  }
  return v9;
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
  if ( (byte_49F8A75 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20504/*"img_txt_shop"*/, item);
    sub_1B640C8(&StringLiteral_20490/*"img_txt_quest"*/, v6);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1B640C8(&StringLiteral_20424/*"img_txt_bgm"*/, v7);
    byte_49F8A75 = 1;
  }
  if ( !item || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0LL )
    sub_1B64324(this);
  v9 = 0;
  v10 = &StringLiteral_20490/*"img_txt_quest"*/;
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
      v10 = &StringLiteral_20504/*"img_txt_shop"*/;
      goto LABEL_9;
    case 0xF:
      v10 = &StringLiteral_20424/*"img_txt_bgm"*/;
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
  UnityEngine_Object_o *baseSprite; // x20
  UIWidget_o *v10; // x19
  UnityEngine_Color_o **v11; // x0

  if ( (byte_49F8A7B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isInPreparation);
    sub_1B640C8(&UICommonButtonColor_TypeInfo, v7);
    byte_49F8A7B = 1;
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
      v10 = (UIWidget_o *)this->fields.baseSprite;
      v11 = (UnityEngine_Color_o **)UICommonButtonColor_TypeInfo;
      if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
        v11 = (UnityEngine_Color_o **)UICommonButtonColor_TypeInfo;
      }
      if ( v10 )
      {
        UIWidget__set_color(v10, *v11[23], 0LL);
        return;
      }
LABEL_18:
      sub_1B64324(v11);
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
    UICommonButton__SetColliderEnable((UICommonButton_o *)v11, dispMode == 3 || isInPreparation, 1, 0LL);
    v11 = (UnityEngine_Color_o **)this->fields.baseButton;
    if ( !v11 )
      goto LABEL_18;
    (*(void (__fastcall **)(UnityEngine_Color_o **, _QWORD, __int64, _QWORD))&(*v11)[33].fields.b)(
      v11,
      0LL,
      1LL,
      *(_QWORD *)&(*v11)[34].fields.r);
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
  struct ShopEntity_o *Shop_k__BackingField; // x0
  int32_t v11; // w0
  int bgImageId; // t1
  UISprite_o *v13; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x22
  struct ShopEntity_o *v16; // x8
  UISprite_o *v17; // x20
  System_String_o **onChange; // x8

  if ( (byte_49F8A76 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&ShopBuyItemListViewItemDraw_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_23179/*"shop_item_menu_"*/, v7);
    byte_49F8A76 = 1;
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
        v11 = (_DWORD)Shop_k__BackingField + 124;
        if ( bgImageId >= 1 )
        {
          v13 = this->fields.baseSprite;
          v14 = System_Int32__ToString(v11, 0LL);
          v15 = System_String__Concat_61375396((System_String_o *)StringLiteral_23179/*"shop_item_menu_"*/, v14, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          if ( AtlasManager__SetShopBanner_37546252(v13, v15, 0LL) )
            return;
        }
      }
      v9 = this->fields.baseSprite;
      if ( v9 )
      {
        UISprite__set_atlas(v9, this->fields.baseAtlas, 0LL);
        v16 = item->fields._Shop_k__BackingField;
        if ( v16 )
        {
          v17 = this->fields.baseSprite;
          if ( v16->fields.shopType == 9 )
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
          if ( v17 )
          {
            UISprite__set_spriteName(v17, *onChange, 0LL);
            return;
          }
        }
      }
    }
    sub_1B64324(v9);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetButtonActive(
        ShopBuyItemListViewItemDraw_o *this,
        UICommonButton_o *button,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49F8A72 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, button);
    byte_49F8A72 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)button, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !button || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)button, 0LL)) == 0LL )
      sub_1B64324(gameObject);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *iconSprite; // x19

  if ( (byte_49F8A7F & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, itemIcon);
    byte_49F8A7F = 1;
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
          sub_1B64324(IsAp);
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

  if ( (byte_49F8A81 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, isRarePriShopPurchased);
    sub_1B640C8(&StringLiteral_12004/*"SHOP_INDEFINITE_PERIOD"*/, v11);
    sub_1B640C8(&StringLiteral_13247/*"TIME_REST2_NONE"*/, v12);
    byte_49F8A81 = 1;
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
                                                       (System_String_o *)StringLiteral_12004/*"SHOP_INDEFINITE_PERIOD"*/,
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
  RestTime2 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13247/*"TIME_REST2_NONE"*/, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49F8A80 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, eventItemIcon);
    byte_49F8A80 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)eventItemIcon, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !eventItemIcon )
      sub_1B64324(v8);
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
  bool v7; // w20
  struct CommonConsumeEntity_array *CommonConsumeEntities_k__BackingField; // x22
  int max_length; // w8
  CommonConsumeEntity_o *v10; // x2
  ItemIconComponent_o *eventItemIcon; // x1
  __int64 v12; // x1
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
            v13);
          v21 = item->fields._EventItemEntities_k__BackingField;
          if ( v21 )
          {
            if ( v21->max_length <= 1 )
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
          this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 && item->fields._IsNotHavingShopItemReceived_k__BackingField )
            return;
        }
        v14 = item->fields._EventItemEntities_k__BackingField;
        if ( v14 )
        {
          if ( !v14->max_length )
            goto LABEL_38;
          eventItemIcon2 = v6->fields.eventItemIcon;
          v16 = v14->m_Items[0];
LABEL_28:
          v19 = v7;
          goto LABEL_29;
        }
      }
LABEL_37:
      sub_1B64324(this);
    }
LABEL_22:
    ShopBuyItemListViewItemDraw__SetEventItemIcon(this, v6->fields.eventItemIcon, 0LL, 0, v4);
    ShopBuyItemListViewItemDraw__SetEventItemIcon(v17, v6->fields.eventItemIcon1, 0LL, 0, v18);
    eventItemIcon2 = v6->fields.eventItemIcon2;
    v16 = 0LL;
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
    if ( CommonConsumeEntities_k__BackingField->max_length <= 1 )
LABEL_38:
      sub_1B6432C(this, v12);
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
  if ( (byte_49F8A7A & 1) == 0 )
  {
    this = (ShopBuyItemListViewItemDraw_o *)sub_1B640C8(&StringLiteral_9209/*"NONE"*/, item);
    byte_49F8A7A = 1;
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
                                                    (System_String_o *)StringLiteral_9209/*"NONE"*/,
                                                    0LL);
          goto LABEL_21;
        }
LABEL_23:
        sub_1B64324(this);
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
  const MethodInfo *v37; // x1
  UILabel_o *messageTextLabel; // x24
  const MethodInfo *v39; // x5
  const MethodInfo *v40; // x3
  ShopEntity_o *Shop_k__BackingField; // x23
  UISprite_o *possessionSprite; // x24
  const MethodInfo *v43; // x1
  bool HaveIconShowable; // w0
  const MethodInfo *v45; // x3
  UnityEngine_Object_o *chocolateSprite; // x23
  _BOOL8 v47; // x0
  const MethodInfo *v48; // x3
  int64_t IsChocolateSvtEquip; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v51; // x1
  ShopBuyItemListViewItemDraw_o *v52; // x0
  const MethodInfo *v53; // x3
  UnityEngine_Object_o *soldOutImage; // x23
  bool v55; // w23
  const MethodInfo *v56; // x2
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
  __int64 v93; // x1
  struct UILabel_o *freeExchangeConditionNoticeLabel; // x8
  int mWidth; // w8
  struct UISprite_array *freeExchangeConditionNoticeBgSprites; // x21
  int v97; // w9
  int max_length; // w8
  unsigned int v99; // w22
  int32_t v100; // w19
  Il2CppClass **v101; // x8
  UISprite_o *v102; // x20
  const MethodInfo *v103; // [xsp+0h] [xbp-80h]
  const MethodInfo *v104; // [xsp+0h] [xbp-80h]
  bool isNotCommandCodeGet; // [xsp+14h] [xbp-6Ch] BYREF
  bool isNotCostumeGet; // [xsp+18h] [xbp-68h] BYREF
  bool isServantHaving; // [xsp+1Ch] [xbp-64h] BYREF
  bool isNotServantHaving; // [xsp+20h] [xbp-60h] BYREF
  bool isNotServantGet; // [xsp+24h] [xbp-5Ch] BYREF
  System_String_o *itemName; // [xsp+28h] [xbp-58h] BYREF
  System_String_o *message; // [xsp+38h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_49F8A6F & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserShopMaster___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9);
    sub_1B640C8(&LocalizationManager_TypeInfo, v10);
    sub_1B640C8(&NetworkManager_TypeInfo, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&ShopBuyItemUtility_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B640C8(&StringLiteral_11925/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/, v15);
    sub_1B640C8(&StringLiteral_19547/*"freeShopCondMessage"*/, v16);
    sub_1B640C8(&StringLiteral_12011/*"SHOP_PAID_EXCHANGE_CONDITIONS"*/, v17);
    sub_1B640C8(&StringLiteral_19546/*"freeShopCondId"*/, v18);
    sub_1B640C8(&StringLiteral_20570/*"info_base"*/, v19);
    sub_1B640C8(&StringLiteral_1/*""*/, v20);
    sub_1B640C8(&StringLiteral_11926/*"SHOP_ACHIEVEMENT_PAID_EXCHANGE_CONDITIONS"*/, v21);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1B640C8(&StringLiteral_11984/*"SHOP_FREE_EXCHANGE_CONDITIONS"*/, v22);
    byte_49F8A6F = 1;
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
  ShopBuyItemUtility__SetDefaultMessageLabel(messageTextLabel, v37);
  ShopBuyItemListViewItemDraw__SetNameAndMessageText(v6, item, v35, message, itemName, v39);
  ShopBuyItemListViewItemDraw__SetNumText(v6, item, v35, v40);
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  possessionSprite = v6->fields.possessionSprite;
  HaveIconShowable = ShopBuyItemListViewItem__get_IsHaveIconShowable(item, v43);
  ShopBuyItemUtility__SetShopHaveStatusIcon(Shop_k__BackingField, possessionSprite, HaveIconShowable, v45);
  chocolateSprite = (UnityEngine_Object_o *)v6->fields.chocolateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v47 = UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL);
  if ( v47 )
  {
    IsChocolateSvtEquip = (int64_t)v6->fields.chocolateSprite;
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsChocolateSvtEquip, 0LL);
    IsChocolateSvtEquip = ShopBuyItemListViewItem__get_IsChocolateSvtEquip(item, v51);
    if ( !gameObject )
      goto LABEL_100;
    UnityEngine_GameObject__SetActive(gameObject, IsChocolateSvtEquip & 1, 0LL);
  }
  ShopBuyItemListViewItemDraw__SetLabelText(
    (ShopBuyItemListViewItemDraw_o *)v47,
    v6->fields.textOnMask,
    (System_String_o *)StringLiteral_1/*""*/,
    v48);
  ShopBuyItemListViewItemDraw__SetLabelText(v52, v6->fields.prepareTextOnMask, (System_String_o *)StringLiteral_1/*""*/, v53);
  soldOutImage = (UnityEngine_Object_o *)v6->fields.soldOutImage;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(0LL, soldOutImage, 0LL) )
  {
    IsChocolateSvtEquip = (int64_t)v6->fields.soldOutImage;
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    IsChocolateSvtEquip = (int64_t)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)IsChocolateSvtEquip,
                                     0LL);
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0LL);
  }
  v55 = v27;
  ShopBuyItemListViewItemDraw__SetRestCountText(
    v6,
    item,
    v27,
    &isNotServantGet,
    &isNotServantHaving,
    &isServantHaving,
    &isNotCostumeGet,
    &isNotCommandCodeGet,
    v103);
  ShopBuyItemListViewItemDraw__SetMask(
    v6,
    item,
    v27,
    isNotServantGet,
    isNotServantHaving,
    isServantHaving,
    isNotCostumeGet,
    isNotCommandCodeGet,
    v104);
  v57 = item->fields._Shop_k__BackingField;
  textOnMask = v6->fields.textOnMask;
  if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
  ShopBuyItemUtility__SetAddTextOnMask(v57, textOnMask, v56);
  ShopBuyItemListViewItemDraw__SetInfoButton(v6, item, v55, v59);
  ShopBuyItemListViewItemDraw__SetBaseButton(v6, v55, mode, v60);
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
    IsChocolateSvtEquip = (int64_t)v6->fields.priceInfoFree;
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0LL);
    IsChocolateSvtEquip = (int64_t)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    v73 = v6->fields.priceInfo1;
    IsChocolateSvtEquip = ShopEntity__GetItemCount((ShopEntity_o *)IsChocolateSvtEquip, 0LL);
    if ( !v73 )
      goto LABEL_100;
    UnityEngine_GameObject__SetActive(v73, (int)IsChocolateSvtEquip < 2, 0LL);
    IsChocolateSvtEquip = (int64_t)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    priceInfo2 = v6->fields.priceInfo2;
    IsChocolateSvtEquip = ShopEntity__GetItemCount((ShopEntity_o *)IsChocolateSvtEquip, 0LL);
    if ( !priceInfo2 )
      goto LABEL_100;
    v75 = (int)IsChocolateSvtEquip > 1;
    IsChocolateSvtEquip = (int64_t)priceInfo2;
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
      IsChocolateSvtEquip = (int64_t)v6->fields.priceInfoFree;
      if ( !IsChocolateSvtEquip )
        goto LABEL_100;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 1, 0LL);
      IsChocolateSvtEquip = (int64_t)v6->fields.priceInfo1;
      if ( !IsChocolateSvtEquip )
        goto LABEL_100;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0LL);
      IsChocolateSvtEquip = (int64_t)v6->fields.priceInfo2;
      if ( !IsChocolateSvtEquip )
        goto LABEL_100;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0LL);
      ShopBuyItemListViewItemDraw__SetPriceIconText(v6, item, v27, v72);
      goto LABEL_42;
    }
    goto LABEL_35;
  }
  CommonConsumeEntities_k__BackingField = item->fields._CommonConsumeEntities_k__BackingField;
  if ( CommonConsumeEntities_k__BackingField )
  {
    IsChocolateSvtEquip = (int64_t)v6->fields.priceInfoFree;
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0LL);
    IsChocolateSvtEquip = (int64_t)v6->fields.priceInfo1;
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)IsChocolateSvtEquip,
      (signed int)CommonConsumeEntities_k__BackingField->max_length < 2,
      0LL);
    IsChocolateSvtEquip = (int64_t)v6->fields.priceInfo2;
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    v75 = (signed int)CommonConsumeEntities_k__BackingField->max_length > 1;
    goto LABEL_41;
  }
LABEL_42:
  IsChocolateSvtEquip = (int64_t)item->fields._Shop_k__BackingField;
  if ( !IsChocolateSvtEquip )
    goto LABEL_100;
  IsChocolateSvtEquip = ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)IsChocolateSvtEquip, 0, 0LL);
  v78 = 0;
  if ( (IsChocolateSvtEquip & 1) != 0 )
  {
    IsChocolateSvtEquip = (int64_t)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    IsChocolateSvtEquip = ShopEntity__IsSoldOut((ShopEntity_o *)IsChocolateSvtEquip, 0LL);
    v78 = (IsChocolateSvtEquip & 1) == 0;
  }
  v79 = item->fields._Shop_k__BackingField;
  if ( !v79 )
    goto LABEL_100;
  if ( v79->fields.purchaseType == 14 )
  {
    IsChocolateSvtEquip = ShopEntity__IsEligibleForFreeFeaturesTheCostumeRelease(
                            item->fields._Shop_k__BackingField,
                            0LL);
    v79 = item->fields._Shop_k__BackingField;
    if ( !v79 )
      goto LABEL_100;
    v80 = (IsChocolateSvtEquip & 1) == 0;
  }
  else
  {
    v80 = 0;
  }
  IsChocolateSvtEquip = (int64_t)v79->fields.script;
  if ( !IsChocolateSvtEquip )
LABEL_100:
    sub_1B64324(IsChocolateSvtEquip);
  IsChocolateSvtEquip = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          (System_Collections_Generic_Dictionary_object__object__o *)IsChocolateSvtEquip,
                          (Il2CppObject *)StringLiteral_19546/*"freeShopCondId"*/,
                          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( (IsChocolateSvtEquip & 1) != 0 && (!v27 || !v78) )
  {
    IsChocolateSvtEquip = (int64_t)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    IsChocolateSvtEquip = ShopEntity__IsAfterTheFreeShopReleaseDate((ShopEntity_o *)IsChocolateSvtEquip, 0LL);
    v81 = (IsChocolateSvtEquip & 1) == 0;
  }
  else
  {
    v81 = 1;
  }
  if ( v81 || v80 )
  {
LABEL_56:
    IsChocolateSvtEquip = (int64_t)v6->fields.freeExchangeConditionNoticeRoot;
    if ( IsChocolateSvtEquip )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0LL);
      return;
    }
    goto LABEL_100;
  }
  v82 = item->fields._Shop_k__BackingField;
  if ( !v82 )
    goto LABEL_100;
  IsChocolateSvtEquip = (int64_t)v82->fields.script;
  if ( !IsChocolateSvtEquip )
    goto LABEL_100;
  IsChocolateSvtEquip = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                   (System_Collections_Generic_Dictionary_object__object__o *)IsChocolateSvtEquip,
                                   (Il2CppObject *)StringLiteral_19547/*"freeShopCondMessage"*/,
                                   (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !IsChocolateSvtEquip )
    goto LABEL_100;
  v83 = (Il2CppObject *)(*(__int64 (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)IsChocolateSvtEquip + 360LL))(
                          IsChocolateSvtEquip,
                          *(_QWORD *)(*(_QWORD *)IsChocolateSvtEquip + 368LL));
  IsChocolateSvtEquip = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsChocolateSvtEquip )
    goto LABEL_100;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)IsChocolateSvtEquip,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  IsChocolateSvtEquip = NetworkManager__get_UserId(0LL);
  v85 = item->fields._Shop_k__BackingField;
  if ( !v85 )
    goto LABEL_100;
  if ( !MasterData_object )
    goto LABEL_100;
  IsChocolateSvtEquip = (int64_t)UserShopMaster__GetEntityDefinitely(
                                   (UserShopMaster_o *)MasterData_object,
                                   IsChocolateSvtEquip,
                                   v85->fields.id,
                                   0LL);
  if ( !item->fields._Shop_k__BackingField )
    goto LABEL_100;
  v86 = (UserShopEntity_o *)IsChocolateSvtEquip;
  IsChocolateSvtEquip = ShopEntity__IsFulFilledFreeExchangeCondition(item->fields._Shop_k__BackingField, 0LL);
  if ( !v86 )
    goto LABEL_100;
  if ( v86->fields.num )
  {
    IsChocolateSvtEquip = (int64_t)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    if ( !ShopEntity__IsPaidExchange((ShopEntity_o *)IsChocolateSvtEquip, 0LL) )
      goto LABEL_56;
    LOBYTE(IsChocolateSvtEquip) = UserShopEntity__get_IsReturnRarePriShop(v86, 0LL);
    v87 = (System_String_o **)&StringLiteral_12011/*"SHOP_PAID_EXCHANGE_CONDITIONS"*/;
    v88 = (System_String_o **)&StringLiteral_11926/*"SHOP_ACHIEVEMENT_PAID_EXCHANGE_CONDITIONS"*/;
  }
  else
  {
    v87 = (System_String_o **)&StringLiteral_11984/*"SHOP_FREE_EXCHANGE_CONDITIONS"*/;
    v88 = (System_String_o **)&StringLiteral_11925/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/;
  }
  v90 = (IsChocolateSvtEquip & 1) == 0;
  IsChocolateSvtEquip = (int64_t)v6->fields.freeExchangeConditionNoticeRoot;
  if ( !v90 )
    v87 = v88;
  if ( !IsChocolateSvtEquip )
    goto LABEL_100;
  v91 = *v87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 1, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v92 = LocalizationManager__Get(v91, 0LL);
  IsChocolateSvtEquip = (int64_t)System_String__Format(v92, v83, 0LL);
  if ( !v6->fields.freeExchangeConditionNoticeLabel )
    goto LABEL_100;
  UILabel__set_text(v6->fields.freeExchangeConditionNoticeLabel, (System_String_o *)IsChocolateSvtEquip, 0LL);
  freeExchangeConditionNoticeLabel = v6->fields.freeExchangeConditionNoticeLabel;
  if ( !freeExchangeConditionNoticeLabel )
    goto LABEL_100;
  mWidth = freeExchangeConditionNoticeLabel->fields.mWidth;
  freeExchangeConditionNoticeBgSprites = v6->fields.freeExchangeConditionNoticeBgSprites;
  v97 = mWidth >= 512 ? 512 : mWidth;
  if ( !freeExchangeConditionNoticeBgSprites )
    goto LABEL_100;
  max_length = freeExchangeConditionNoticeBgSprites->max_length;
  if ( max_length >= 1 )
  {
    v99 = 0;
    v100 = v97 + 16;
    while ( 1 )
    {
      if ( v99 >= max_length )
        sub_1B6432C(IsChocolateSvtEquip, v93);
      v101 = &freeExchangeConditionNoticeBgSprites->obj.klass + (int)v99;
      v102 = (UISprite_o *)v101[4];
      if ( !v102 )
        break;
      UIWidget__set_width((UIWidget_o *)v101[4], v100, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      IsChocolateSvtEquip = AtlasManager__SetEventUI(v102, (System_String_o *)StringLiteral_20570/*"info_base"*/, 0LL);
      max_length = freeExchangeConditionNoticeBgSprites->max_length;
      if ( (int)++v99 >= max_length )
        return;
    }
    goto LABEL_100;
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
      sub_1B64324(itemIcon);
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

  if ( (byte_49F8A70 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, label);
    byte_49F8A70 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_1B64324(gameObject);
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

  if ( (byte_49F8A71 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, label);
    byte_49F8A71 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1B64324(v6);
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
  __int64 v34; // x1
  __int64 v35; // x1
  UILabel_o *v36; // x21
  const MethodInfo *v37; // x3
  UILabel_o *v38; // x1
  ShopBuyItemListViewItemDraw_o *v39; // x2
  ShopEntity_o *Shop_k__BackingField; // x0
  _BOOL4 v41; // w23
  UnityEngine_Object_o *anotherBuyable; // x21
  System_Int32_array *AnotherPayItemIds; // x0
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x3
  UnityEngine_Object_o *anotherPayItemImage; // x21
  UnityEngine_GameObject_o *v47; // x21
  UISprite_o *v48; // x21
  int32_t rangeSprite; // w22
  UISprite_o *maskSprite; // x1
  bool v51; // w2
  struct ShopEntity_o *v52; // x8
  struct ShopEntity_o *v53; // x8
  bool v54; // w20
  struct UISprite_o *v55; // x8
  struct ShopEntity_o *v56; // x8
  struct System_Int32_array *targetIds; // x8
  Il2CppObject *Entity; // x0
  struct ShopEntity_o *v59; // x8
  __int64 *v60; // x8
  ShopBuyItemListViewItemDraw_o *Empty; // x21
  UILabel_o *v62; // x21
  ShopBuyItemListViewItemDraw_o *v63; // x0
  const MethodInfo *v64; // x3
  struct ShopEntity_o *v65; // x8
  const MethodInfo *v66; // x2
  struct ShopEntity_o *v67; // x8
  ShopReleaseMaster_o *v68; // x21
  struct ShopEntity_o *v69; // x8
  UILabel_o *textOnMask; // x20
  struct ShopEntity_o *v71; // x8
  UILabel_o *v72; // x21
  UnityEngine_Object_o *prepareTextOnMask; // x21
  const MethodInfo *v74; // x1
  UILabel_o *v75; // x19
  ShopBuyItemListViewItemDraw_o *v76; // x0
  const MethodInfo *v77; // x3
  int32_t questId; // [xsp+Ch] [xbp-54h] BYREF

  v16 = this;
  if ( (byte_49F8A7C & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v18);
    sub_1B640C8(&Method_DataManager_GetMaster_ShopReleaseMaster___, v19);
    sub_1B640C8(&DataManager_TypeInfo, v20);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v22);
    sub_1B640C8(&LocalizationManager_TypeInfo, v23);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v24);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1B640C8(&string_TypeInfo, v26);
    sub_1B640C8(&StringLiteral_11977/*"SHOP_CANT_BUY"*/, v27);
    sub_1B640C8(&StringLiteral_12014/*"SHOP_QUEST_OPEN"*/, v28);
    sub_1B640C8(&StringLiteral_12012/*"SHOP_QUEST_ALREADY_CLEARED"*/, v29);
    sub_1B640C8(&StringLiteral_19546/*"freeShopCondId"*/, v30);
    sub_1B640C8(&StringLiteral_12010/*"SHOP_NOT_RELEASE_SET_ITEM"*/, v31);
    sub_1B640C8(&StringLiteral_11951/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, v32);
    sub_1B640C8(&StringLiteral_1/*""*/, v33);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1B640C8(&StringLiteral_11929/*"SHOP_ALREADY_GET"*/, v34);
    byte_49F8A7C = 1;
  }
  questId = 0;
  if ( !isInPreparation )
  {
    if ( !item )
      goto LABEL_139;
    Shop_k__BackingField = item->fields._Shop_k__BackingField;
    if ( Shop_k__BackingField
      && ShopEntity__IsSoldOut(Shop_k__BackingField, 0LL)
      && !item->fields._IsNotHavingShopItemReceived_k__BackingField )
    {
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_139;
      v41 = !ShopEntity__IsAnotherItemBuyable((ShopEntity_o *)this, 0LL);
    }
    else
    {
      v41 = 0;
    }
    anotherBuyable = (UnityEngine_Object_o *)v16->fields.anotherBuyable;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AnotherPayItemIds = (System_Int32_array *)UnityEngine_Object__op_Inequality(anotherBuyable, 0LL, 0LL);
    if ( ((unsigned __int8)AnotherPayItemIds & 1) != 0 )
    {
      anotherPayItemImage = (UnityEngine_Object_o *)v16->fields.anotherPayItemImage;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      AnotherPayItemIds = (System_Int32_array *)UnityEngine_Object__op_Inequality(anotherPayItemImage, 0LL, 0LL);
      if ( ((unsigned __int8)AnotherPayItemIds & 1) != 0 )
      {
        this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
        if ( !this )
          goto LABEL_139;
        v47 = v16->fields.anotherBuyable;
        this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsAnotherItemBuyable((ShopEntity_o *)this, 0LL);
        if ( !v47 )
          goto LABEL_139;
        UnityEngine_GameObject__SetActive(v47, (unsigned __int8)this & 1, 0LL);
        this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
        if ( !this )
          goto LABEL_139;
        AnotherPayItemIds = ShopEntity__GetAnotherPayItemIds((ShopEntity_o *)this, 0LL);
        if ( AnotherPayItemIds )
        {
          this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
          if ( !this )
            goto LABEL_139;
          v48 = v16->fields.anotherPayItemImage;
          this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetAnotherPayItemIds((ShopEntity_o *)this, 0LL);
          if ( !this )
            goto LABEL_139;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
LABEL_140:
            sub_1B6432C(this, v35);
          rangeSprite = (int32_t)this->fields.rangeSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AnotherPayItemIds = (System_Int32_array *)AtlasManager__SetItem(v48, rangeSprite, 0LL);
        }
      }
    }
    if ( v41 )
    {
      ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(v16, item, v44);
      maskSprite = v16->fields.maskSprite;
      v51 = 1;
LABEL_43:
      ShopBuyItemListViewItemDraw__SetSpriteActive(
        (ShopBuyItemListViewItemDraw_o *)AnotherPayItemIds,
        maskSprite,
        v51,
        v45);
      return;
    }
    v52 = item->fields._Shop_k__BackingField;
    if ( !v52 || v52->fields.purchaseType != 6 )
    {
      maskSprite = v16->fields.maskSprite;
      v51 = 0;
      goto LABEL_43;
    }
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_139;
    this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
    v53 = item->fields._Shop_k__BackingField;
    if ( !v53 )
      goto LABEL_139;
    if ( !this )
      goto LABEL_139;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isQuestNotClearSet(
                                              (ShopReleaseMaster_o *)this,
                                              v53->fields.id,
                                              &questId,
                                              0LL);
    if ( !item->fields._Shop_k__BackingField )
      goto LABEL_139;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !ShopEntity__isQuestNotClearItemClosed(item->fields._Shop_k__BackingField, 1, 0LL) )
      {
LABEL_41:
        v54 = 0;
LABEL_111:
        this = (ShopBuyItemListViewItemDraw_o *)v16->fields.maskSprite;
        if ( this )
        {
          this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v54, 0LL);
            return;
          }
        }
        goto LABEL_139;
      }
    }
    else if ( !ShopEntity__isExpireItemClosed(item->fields._Shop_k__BackingField, 0LL) )
    {
      goto LABEL_41;
    }
    textOnMask = v16->fields.textOnMask;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12014/*"SHOP_QUEST_OPEN"*/, 0LL);
    if ( !textOnMask )
      goto LABEL_139;
    UILabel__set_text(textOnMask, (System_String_o *)this, 0LL);
    v54 = 1;
    goto LABEL_111;
  }
  ShopBuyItemListViewItemDraw__SetSpriteActive(this, v16->fields.maskSprite, 1, (const MethodInfo *)isNotServantGet);
  if ( !item )
    goto LABEL_139;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_139;
  switch ( LODWORD(this->fields.baseSprite) )
  {
    case 4:
      v55 = this->fields.maskSprite;
      if ( !v55 )
        goto LABEL_139;
      if ( !LODWORD(v55->fields.m_CancellationTokenSource) )
        goto LABEL_140;
      if ( !LODWORD(v55->fields.leftAnchor) )
        goto LABEL_55;
      this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_139;
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
      v56 = item->fields._Shop_k__BackingField;
      if ( !v56 )
        goto LABEL_139;
      targetIds = v56->fields.targetIds;
      if ( !targetIds )
        goto LABEL_139;
      if ( !targetIds->max_length )
        goto LABEL_140;
      if ( !this )
        goto LABEL_139;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 targetIds->m_Items[1],
                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Entity
        && ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL)
        && item->fields._ShopKind_k__BackingField != 6 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v60 = &StringLiteral_11977/*"SHOP_CANT_BUY"*/;
        goto LABEL_128;
      }
LABEL_55:
      if ( isNotServantGet || isNotServantHaving || isServantHaving || isNotCostumeGet || isNotCommandCodeGet )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
        v59 = item->fields._Shop_k__BackingField;
        if ( v59 && this )
        {
          this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                    (ShopReleaseMaster_o *)this,
                                                    v59->fields.id,
                                                    40,
                                                    0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v39 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_1/*""*/;
            goto LABEL_129;
          }
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v60 = &StringLiteral_11929/*"SHOP_ALREADY_GET"*/;
LABEL_128:
          this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v60, 0LL);
          v39 = this;
LABEL_129:
          v38 = v16->fields.textOnMask;
LABEL_130:
          ShopBuyItemListViewItemDraw__SetLabelText(this, v38, (System_String_o *)v39, v37);
          goto LABEL_131;
        }
LABEL_139:
        sub_1B64324(this);
      }
LABEL_131:
      prepareTextOnMask = (UnityEngine_Object_o *)v16->fields.prepareTextOnMask;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(prepareTextOnMask, 0LL, 0LL)
        && ShopBuyItemListViewItem__IsPrepareTextOnMask(item, v74) )
      {
        v75 = v16->fields.prepareTextOnMask;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v76 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11951/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, 0LL);
        ShopBuyItemListViewItemDraw__SetLabelText(v76, v75, (System_String_o *)v76, v77);
      }
      return;
    case 5:
      Empty = (ShopBuyItemListViewItemDraw_o *)string_TypeInfo->static_fields->Empty;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12010/*"SHOP_NOT_RELEASE_SET_ITEM"*/, 0LL);
        Empty = this;
      }
      v38 = v16->fields.textOnMask;
      v39 = Empty;
      goto LABEL_130;
    case 6:
      if ( !ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)this, 0, 0LL) )
        goto LABEL_131;
      v62 = v16->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v63 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12012/*"SHOP_QUEST_ALREADY_CLEARED"*/, 0LL);
      ShopBuyItemListViewItemDraw__SetLabelText(v63, v62, (System_String_o *)v63, v64);
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_139;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_131;
      v65 = item->fields._Shop_k__BackingField;
      if ( !v65 )
        goto LABEL_139;
      this = (ShopBuyItemListViewItemDraw_o *)v65->fields.script;
      if ( !this )
        goto LABEL_139;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)this,
             (Il2CppObject *)StringLiteral_19546/*"freeShopCondId"*/,
             (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
LABEL_103:
        ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(v16, item, v66);
      }
      goto LABEL_131;
    case 7:
    case 9:
      goto LABEL_7;
    case 0xE:
      if ( !isNotServantGet && !isNotServantHaving && !isServantHaving && !isNotCostumeGet && !isNotCommandCodeGet )
        goto LABEL_131;
      if ( ShopEntity__GetFreeShopCondId((ShopEntity_o *)this, 0LL) < 1 )
        goto LABEL_114;
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_139;
      if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, 0LL) )
        goto LABEL_103;
LABEL_114:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
      v71 = item->fields._Shop_k__BackingField;
      if ( !v71 || !this )
        goto LABEL_139;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                (ShopReleaseMaster_o *)this,
                                                v71->fields.id,
                                                1,
                                                0LL);
      v72 = v16->fields.textOnMask;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11929/*"SHOP_ALREADY_GET"*/, 0LL);
        v39 = this;
      }
      else
      {
        v39 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_1/*""*/;
      }
      v38 = v72;
      goto LABEL_130;
    default:
      if ( !isNotServantGet && !isNotServantHaving && !isServantHaving && !isNotCostumeGet && !isNotCommandCodeGet )
        goto LABEL_131;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
      v67 = item->fields._Shop_k__BackingField;
      if ( !v67 )
        goto LABEL_139;
      v68 = (ShopReleaseMaster_o *)this;
      if ( !this )
        goto LABEL_139;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                (ShopReleaseMaster_o *)this,
                                                v67->fields.id,
                                                1,
                                                0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_94;
      v69 = item->fields._Shop_k__BackingField;
      if ( !v69 )
        goto LABEL_139;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(v68, v69->fields.id, 40, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_7:
        v36 = v16->fields.textOnMask;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11929/*"SHOP_ALREADY_GET"*/, 0LL);
        v38 = v36;
        v39 = this;
      }
      else
      {
LABEL_94:
        v38 = v16->fields.textOnMask;
        v39 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_1/*""*/;
      }
      goto LABEL_130;
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
  if ( (byte_49F8A77 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, item);
    sub_1B640C8(&StringLiteral_15780/*"[000000]"*/, v11);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1B640C8(&StringLiteral_25364/*"？"*/, v12);
    byte_49F8A77 = 1;
  }
  if ( isInPreparation )
  {
    messageTextLabel = v10->fields.messageTextLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__ReplaceCommonTag(preparationMessage, 0, 0LL);
    v15 = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_61375396(
                                             (System_String_o *)StringLiteral_15780/*"[000000]"*/,
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
            v17 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_25364/*"？"*/;
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
    sub_1B64324(this);
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
      v24 = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_61375396(
                                               (System_String_o *)StringLiteral_15780/*"[000000]"*/,
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
  this = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_61375396(
                                            (System_String_o *)StringLiteral_15780/*"[000000]"*/,
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
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_int__o *v24; // x21
  ShopBuyItemListViewItemDraw_o *v25; // x0
  const MethodInfo *v26; // x3

  v6 = this;
  if ( (byte_49F8A78 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__TypeInfo, item);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&Method_ShopBuyItemListViewItemDraw__SetNumText_b__59_0__, v8);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1B640C8(&StringLiteral_11957/*"SHOP_BUY_ITEM_HOLD"*/, v9);
    byte_49F8A78 = 1;
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
    ShopBuyItemListViewItemDraw__SetLabelActive(v25, v6->fields.numTextLabel, 0, v26);
    return;
  }
  ShopBuyItemListViewItemDraw__SetLabelActive((ShopBuyItemListViewItemDraw_o *)v10, v6->fields.numTitleLabel, 1, v11);
  numTitleLabel = v6->fields.numTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11957/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
  ShopBuyItemListViewItemDraw__SetLabelText(v13, numTitleLabel, (System_String_o *)v13, v14);
  ShopBuyItemListViewItemDraw__SetLabelActive(v15, v6->fields.numTextLabel, 1, v16);
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
LABEL_18:
    sub_1B64324(this);
  numTextLabel = v6->fields.numTextLabel;
  HoldCount = ShopEntity__getHoldCount((ShopEntity_o *)this, 0LL);
  NumberFormat = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__GetNumberFormat(HoldCount, 0LL);
  ShopBuyItemListViewItemDraw__SetLabelText(NumberFormat, numTextLabel, (System_String_o *)NumberFormat, v20);
  if ( item->fields._ShopKind_k__BackingField == 7 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
    v24 = (System_Action_int__o *)sub_1B64314(System_Action_int__TypeInfo, v22, v23);
    System_Action_int____ctor(v24, (Il2CppObject *)v6, Method_ShopBuyItemListViewItemDraw__SetNumText_b__59_0__, 0LL);
    StoneCountRefreshComponent__AttachToGameObject(gameObject, v24, 1, 0LL);
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
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  ShopEntity_o *v18; // x0
  int32_t v19; // w1
  int32_t v20; // w3
  int32_t v21; // w2
  System_Int32_array *UserItemCounts; // x0
  UIIconLabel_o *v23; // x22
  System_Int32_array *v24; // x21
  const MethodInfo *v25; // x1
  int32_t v26; // w23
  ShopBuyItemListViewItemDraw_o *priceIconLabel2; // x19
  const MethodInfo *v28; // x1
  ShopEntity_o *Shop_k__BackingField; // x8
  int32_t v30; // w20
  UIIconLabel_o *v31; // x22
  ShopBuyItemListViewItemDraw_o *PriceIcon; // x0
  const MethodInfo *v33; // x2
  int32_t v34; // w23
  int32_t sellQp; // w24
  UIIconLabel_o *priceIconLabel1; // x21
  int32_t v37; // w22
  int32_t rangeSprite; // w23
  int32_t v39; // w21
  struct ItemEntity_o *itemEntity; // x8
  const MethodInfo *v41; // x3
  ShopEntity_o *Price; // x0
  struct ItemEntity_o *v43; // x8
  ShopEntity_o *v44; // x0
  int32_t v45; // w20
  struct ItemEntity_o *v46; // x8
  double v47; // d0
  UILabel_o **p_LineText2digit; // x8

  v6 = this;
  if ( (byte_49F8A7E & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, item);
    sub_1B640C8(&System_Math_TypeInfo, v7);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1B640C8(&StringLiteral_11981/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, v8);
    byte_49F8A7E = 1;
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
        v37 = (int)this;
        this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[0];
        if ( !this )
          goto LABEL_83;
        rangeSprite = (int32_t)this->fields.rangeSprite;
        this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0LL);
        if ( !priceIconLabel1 )
          goto LABEL_83;
        UIIconLabel__SetPurchaseDecision(priceIconLabel1, v37, rangeSprite, (int32_t)this, 0LL);
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
            v39 = (int32_t)this->fields.rangeSprite;
            this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntity__GetUserHasNum(
                                                      (CommonConsumeEntity_o *)this,
                                                      0LL);
            if ( !priceIconLabel )
              goto LABEL_83;
            v20 = (int)this;
            this = priceIconLabel;
            v19 = v14;
            v21 = v39;
            goto LABEL_56;
          }
        }
      }
    }
LABEL_84:
    sub_1B6432C(this, item);
  }
  if ( bandSprite_high == 13 )
  {
    priceLabelFree = v6->fields.priceLabelFree;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11981/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, 0LL);
    if ( priceLabelFree )
    {
      UILabel__set_text(priceLabelFree, (System_String_o *)this, 0LL);
      return;
    }
LABEL_83:
    sub_1B64324(this);
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
    UserItemCounts = ShopBuyItemListViewItemDraw__GetUserItemCounts(ItemCount, item, v17);
    v23 = v6->fields.priceIconLabel1;
    v24 = UserItemCounts;
    this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v25);
    if ( !item->fields._Shop_k__BackingField )
      goto LABEL_83;
    v26 = (int)this;
    this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrices(item->fields._Shop_k__BackingField, 0, 0LL);
    if ( !v24 )
      goto LABEL_83;
    if ( v24->max_length )
    {
      if ( !v23 )
        goto LABEL_83;
      UIIconLabel__SetPurchaseDecision(v23, v26, (int32_t)this, v24->m_Items[1], 0LL);
      priceIconLabel2 = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel2;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v28);
      Shop_k__BackingField = item->fields._Shop_k__BackingField;
      if ( !Shop_k__BackingField )
        goto LABEL_83;
      v30 = (int)this;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrices(Shop_k__BackingField, 1, 0LL);
      if ( v24->max_length > 1 )
      {
        if ( !priceIconLabel2 )
          goto LABEL_83;
        v20 = v24->m_Items[2];
        v21 = (int)this;
        this = priceIconLabel2;
        v19 = v30;
        goto LABEL_56;
      }
    }
    goto LABEL_84;
  }
  v18 = item->fields._Shop_k__BackingField;
  if ( v18 && ShopEntity__IsSoldOut(v18, 0LL) && item->fields._IsNotHavingShopItemReceived_k__BackingField )
  {
    this = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel;
    if ( !this )
      goto LABEL_83;
    v19 = 56;
    v20 = -1;
    v21 = 0;
LABEL_56:
    UIIconLabel__SetPurchaseDecision((UIIconLabel_o *)this, v19, v21, v20, 0LL);
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
  v31 = v6->fields.priceIconLabel;
  PriceIcon = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v16);
  v34 = (int)PriceIcon;
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
  this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItemDraw__GetUserItemCounts(PriceIcon, item, v33);
  if ( !this )
    goto LABEL_83;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_84;
  if ( !v31 )
    goto LABEL_83;
  UIIconLabel__SetPurchaseDecision(v31, v34, sellQp, (int32_t)this->fields.rangeSprite, 0LL);
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
      v43 = item->fields.itemEntity;
      if ( !v43 )
        goto LABEL_80;
      Price = (ShopEntity_o *)(unsigned int)v43->fields.sellQp;
      if ( !(_DWORD)Price )
        goto LABEL_80;
    }
    v44 = item->fields._Shop_k__BackingField;
    if ( v44 )
    {
      v45 = ShopEntity__GetPrice(v44, 0LL);
    }
    else
    {
      v46 = item->fields.itemEntity;
      if ( v46 )
        v45 = v46->fields.sellQp;
      else
        v45 = 0;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v47 = log10((double)v45);
    if ( v47 == INFINITY || (int)v47 )
    {
      p_LineText2digit = &v6->fields.LineText2digit;
      goto LABEL_82;
    }
LABEL_80:
    p_LineText2digit = &v6->fields.LineText;
LABEL_82:
    ShopBuyItemListViewItemDraw__SetLabelActive((ShopBuyItemListViewItemDraw_o *)Price, *p_LineText2digit, 1, v41);
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
  __int64 v15; // x1
  struct ShopEntity_o *v16; // x8
  struct System_Int32_array *targetIds; // x8
  struct ShopEntity_o *v18; // x8
  ShopBuyItemListViewItemDraw_o *v19; // x0
  const MethodInfo *v20; // x3
  bool IsPaidExchange; // w20
  System_String_o **v22; // x8
  ShopBuyItemListViewItemDraw_o *v23; // x0
  const MethodInfo *v24; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_49F8A7D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, item);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B640C8(&StringLiteral_12013/*"SHOP_QUEST_FREE_EXCHANGE_CLEARED"*/, v9);
    sub_1B640C8(&StringLiteral_12015/*"SHOP_QUEST_PAID_EXCHANGE_CLEARED"*/, v10);
    sub_1B640C8(&StringLiteral_19546/*"freeShopCondId"*/, v11);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1B640C8(&StringLiteral_11929/*"SHOP_ALREADY_GET"*/, v12);
    byte_49F8A7D = 1;
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
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
      v16 = item->fields._Shop_k__BackingField;
      if ( v16 )
      {
        targetIds = v16->fields.targetIds;
        if ( targetIds )
        {
          if ( !targetIds->max_length )
            sub_1B6432C(this, v15);
          if ( this )
          {
            this = (ShopBuyItemListViewItemDraw_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                      &entity,
                                                      targetIds->m_Items[1],
                                                      (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v18 = item->fields._Shop_k__BackingField;
              if ( !v18 )
                goto LABEL_33;
              if ( v18->fields.purchaseType == 4 )
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
                  v19 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11929/*"SHOP_ALREADY_GET"*/,
                                                           0LL);
                  ShopBuyItemListViewItemDraw__SetLabelText(v19, v4->fields.textOnMask, (System_String_o *)v19, v20);
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
                        (Il2CppObject *)StringLiteral_19546/*"freeShopCondId"*/,
                        (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                    v22 = (System_String_o **)&StringLiteral_12015/*"SHOP_QUEST_PAID_EXCHANGE_CLEARED"*/;
                    if ( !IsPaidExchange )
                      v22 = (System_String_o **)&StringLiteral_12013/*"SHOP_QUEST_FREE_EXCHANGE_CLEARED"*/;
                    v23 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get(*v22, 0LL);
                    ShopBuyItemListViewItemDraw__SetLabelText(v23, v4->fields.textOnMask, (System_String_o *)v23, v24);
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
    sub_1B64324(this);
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
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x2
  struct ShopEntity_o *Shop_k__BackingField; // x0
  Il2CppObject *MasterData_object; // x21
  struct ShopEntity_o *v30; // x8
  struct ShopEntity_o *v31; // x8
  int32_t limitNum; // w9
  UILabel_o *restCountLabel; // x19
  System_String_o *v34; // x20
  int32_t v35; // w0
  struct ShopEntity_o *v36; // x8
  int32_t purchaseType; // w20
  __int64 *v38; // x8
  struct ShopEntity_o *v39; // x8
  ShopReleaseMaster_o *v40; // x26
  struct ShopEntity_o *v41; // x8
  struct ShopEntity_o *v42; // x8
  struct ShopEntity_o *v43; // x8
  bool v44; // w8
  int v45; // w21
  ShopBuyItemListViewItemDraw_o *v46; // x0
  const MethodInfo *v47; // x3
  Il2CppObject *NumberFormat; // x0
  struct ShopEntity_o *v49; // x8
  struct ShopEntity_o *v50; // x8

  v16 = this;
  if ( (byte_49F8A79 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopReleaseMaster___, item);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserShopMaster___, v17);
    sub_1B640C8(&LocalizationManager_TypeInfo, v18);
    sub_1B640C8(&NetworkManager_TypeInfo, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B640C8(&StringLiteral_11961/*"SHOP_BUY_PREPARATION"*/, v21);
    sub_1B640C8(&StringLiteral_8272/*"LOTTERY_REST_NUM"*/, v22);
    sub_1B640C8(&StringLiteral_14730/*"UNIT_REST_NONE"*/, v23);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1B640C8(&StringLiteral_3884/*"COUNT_INFO"*/, v24);
    byte_49F8A79 = 1;
  }
  *isNotServantGet = 0;
  *isNotServantHaving = 0;
  *isServantHaving = 0;
  *isNotCostumeGet = 0;
  *isNotCommandCodeGet = 0;
  if ( !isInPreparation )
  {
    if ( !item )
      goto LABEL_75;
LABEL_11:
    Shop_k__BackingField = item->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_29;
    if ( Shop_k__BackingField->fields.limitNum > 0 )
    {
      this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_75;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ShopBuyItemListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
      v30 = item->fields._Shop_k__BackingField;
      if ( !v30 || !MasterData_object )
        goto LABEL_75;
      this = (ShopBuyItemListViewItemDraw_o *)UserShopMaster__GetEntityDefinitely(
                                                (UserShopMaster_o *)MasterData_object,
                                                (int64_t)this,
                                                v30->fields.baseShopId,
                                                0LL);
      v31 = item->fields._Shop_k__BackingField;
      if ( v31 )
      {
        limitNum = v31->fields.limitNum;
        if ( !this )
          goto LABEL_75;
      }
      else
      {
        limitNum = 0;
        if ( !this )
          goto LABEL_75;
      }
      v45 = limitNum - HIDWORD(this->fields.m_CancellationTokenSource);
      if ( v45 >= 1 && (!v31 || !ShopEntity__IsSoldOut(item->fields._Shop_k__BackingField, 0LL)) )
      {
        restCountLabel = v16->fields.restCountLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3884/*"COUNT_INFO"*/, 0LL);
        goto LABEL_68;
      }
      if ( !item->fields._IsNotHavingShopItemReceived_k__BackingField )
        goto LABEL_9;
      restCountLabel = v16->fields.restCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
LABEL_49:
      v38 = &StringLiteral_14730/*"UNIT_REST_NONE"*/;
      goto LABEL_50;
    }
    if ( ShopEntity__IsSoldOut(Shop_k__BackingField, 0LL) )
      goto LABEL_9;
    v36 = item->fields._Shop_k__BackingField;
    if ( v36 )
      purchaseType = v36->fields.purchaseType;
    else
LABEL_29:
      purchaseType = item->fields.itemEntity != 0LL;
    restCountLabel = v16->fields.restCountLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( purchaseType == 16 )
    {
      v38 = &StringLiteral_8272/*"LOTTERY_REST_NUM"*/;
      goto LABEL_50;
    }
    goto LABEL_49;
  }
  if ( !item )
    goto LABEL_75;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_75;
  baseSprite = (unsigned int)this->fields.baseSprite;
  if ( baseSprite > 9 || ((1 << baseSprite) & 0x2E0) == 0 )
  {
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_75;
    this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
    v39 = item->fields._Shop_k__BackingField;
    if ( !v39 )
      goto LABEL_75;
    v40 = (ShopReleaseMaster_o *)this;
    if ( !this )
      goto LABEL_75;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(
                                              (ShopReleaseMaster_o *)this,
                                              v39->fields.id,
                                              38,
                                              0LL);
    *isNotServantGet = (unsigned __int8)this & 1;
    v41 = item->fields._Shop_k__BackingField;
    if ( !v41 )
      goto LABEL_75;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v40, v41->fields.id, 41, 0LL);
    *isNotServantHaving = (unsigned __int8)this & 1;
    v42 = item->fields._Shop_k__BackingField;
    if ( !v42 )
      goto LABEL_75;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v40, v42->fields.id, 40, 0LL);
    *isServantHaving = (unsigned __int8)this & 1;
    v43 = item->fields._Shop_k__BackingField;
    if ( !v43 )
      goto LABEL_75;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v40, v43->fields.id, 78, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v44 = 1;
    }
    else
    {
      v49 = item->fields._Shop_k__BackingField;
      if ( !v49 )
        goto LABEL_75;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v40, v49->fields.id, 79, 0LL);
      v44 = (unsigned __int8)this & 1;
    }
    *isNotCostumeGet = v44;
    v50 = item->fields._Shop_k__BackingField;
    if ( !v50 )
      goto LABEL_75;
    *isNotCommandCodeGet = ShopReleaseMaster__isExistCondType(v40, v50->fields.id, 108, 0LL);
    this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
    if ( !this )
      goto LABEL_75;
  }
  if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, 0LL) )
  {
LABEL_9:
    ShopBuyItemListViewItemDraw__ShowSoldOut(v16, item, v27);
    return;
  }
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
LABEL_75:
    sub_1B64324(this);
  switch ( LODWORD(this->fields.baseSprite) )
  {
    case 5:
    case 7:
    case 9:
      goto LABEL_23;
    case 6:
      if ( !ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)this, 0, 0LL) )
        goto LABEL_55;
LABEL_23:
      restCountLabel = v16->fields.restCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3884/*"COUNT_INFO"*/, 0LL);
      v35 = 0;
      goto LABEL_69;
    default:
      if ( *isNotServantGet || *isNotServantHaving || *isServantHaving || *isNotCostumeGet || *isNotCommandCodeGet )
      {
        restCountLabel = v16->fields.restCountLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3884/*"COUNT_INFO"*/, 0LL);
        v45 = *isServantHaving || *isNotServantHaving;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
LABEL_68:
        v35 = v45;
LABEL_69:
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v35, 0LL);
        v46 = (ShopBuyItemListViewItemDraw_o *)System_String__Format(v34, NumberFormat, 0LL);
        goto LABEL_70;
      }
LABEL_55:
      if ( ShopBuyItemListViewItem__IsPrepareTextOnMask(item, v26) )
        goto LABEL_11;
      restCountLabel = v16->fields.restCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v38 = &StringLiteral_11961/*"SHOP_BUY_PREPARATION"*/;
      break;
  }
LABEL_50:
  v46 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v38, 0LL);
LABEL_70:
  ShopBuyItemListViewItemDraw__SetLabelText(v46, restCountLabel, (System_String_o *)v46, v47);
}


void __fastcall ShopBuyItemListViewItemDraw__SetSpriteActive(
        ShopBuyItemListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49F8A73 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, sprite);
    byte_49F8A73 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_1B64324(gameObject);
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

  if ( (byte_49F8A74 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, sprite);
    byte_49F8A74 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !sprite )
      sub_1B64324(v6);
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
  if ( (byte_49F8A84 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, item);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_11968/*"SHOP_BUY_SOLD_OUT"*/, v6);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1B640C8(&StringLiteral_1/*""*/, v7);
    byte_49F8A84 = 1;
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
    sub_1B64324(this);
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11968/*"SHOP_BUY_SOLD_OUT"*/, 0LL);
  restCountLabel = v15;
  v14 = v11;
LABEL_20:
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

  if ( (byte_49F8A86 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_49F8A86 = 1;
  }
  numTextLabel = this->fields.numTextLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !numTextLabel )
    sub_1B64324(NumberFormat);
  UILabel__set_text(numTextLabel, NumberFormat, 0LL);
}