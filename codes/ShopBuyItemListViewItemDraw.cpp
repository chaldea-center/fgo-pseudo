void __fastcall ShopBuyItemListViewItemDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A57752 & 1) == 0 )
  {
    sub_1B885B0(&ShopBuyItemListViewItemDraw_TypeInfo);
    sub_1B885B0(&StringLiteral_20335/*"img_list_bg04"*/);
    byte_4A57752 = 1;
  }
  ShopBuyItemListViewItemDraw_TypeInfo->static_fields->BASE_IMG_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_20335/*"img_list_bg04"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ShopBuyItemListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_20335/*"img_list_bg04"*/,
    v1,
    v2);
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
  int32_t v6; // w2
  int32_t v7; // w3
  struct UISprite_o *v8; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct UISprite_o *v12; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4A5773B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5773B = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL);
  if ( !v4 )
  {
    v8 = this->fields.baseSprite;
    if ( !v8
      || (mAtlas = v8->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v6, v7),
          (v12 = this->fields.baseSprite) == 0LL) )
    {
      sub_1B8880C(v4, v5);
    }
    mSpriteName = v12->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseSpriteName, (int32_t)mSpriteName, v10, v11);
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
  __int64 v4; // x8
  SetItemMaster_o *v5; // x20
  unsigned __int64 v6; // x21
  int m_CancellationTokenSource; // w8
  int v8; // w9
  __int64 v9; // x10

  if ( (byte_4A5774F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SetItemMaster___);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5774F = 1;
  }
  if ( !ids )
    goto LABEL_20;
  if ( !*(_QWORD *)&ids->max_length )
    return 0;
  this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_1B8880C(this, ids);
  this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SetItemMaster___);
  v4 = *(_QWORD *)&ids->max_length;
  if ( (int)v4 < 1 )
    return 0;
  v5 = (SetItemMaster_o *)this;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
LABEL_21:
      sub_1B88814(this, ids);
    if ( !v5 )
      goto LABEL_20;
    this = (ShopBuyItemListViewItemDraw_o *)SetItemMaster__GetList(v5, ids->m_Items[v6 + 1], 0LL);
    if ( !this )
      goto LABEL_20;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource >= 1 )
      break;
LABEL_17:
    LODWORD(v4) = ids->max_length;
    if ( (__int64)++v6 >= (int)v4 )
      return 0;
  }
  v8 = 0;
  while ( 1 )
  {
    if ( m_CancellationTokenSource == v8 )
      goto LABEL_21;
    v9 = *((_QWORD *)&this->fields.rangeSprite + v8);
    if ( !v9 )
      goto LABEL_20;
    if ( *(_DWORD *)(v9 + 20) == 7 )
      return 1;
    if ( m_CancellationTokenSource == ++v8 )
      goto LABEL_17;
  }
}


System_Int32_array *__fastcall ShopBuyItemListViewItemDraw__GetUserItemCounts(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 SelfUserGame; // x0
  __int64 v5; // x1
  _DWORD *v6; // x21
  System_Int32_array *v7; // x19
  Il2CppObject *MasterData_object; // x21
  ShopEntity_o *v9; // x8
  int64_t v10; // x20
  int32_t v11; // w8
  UserItemMaster_o *v12; // x21
  unsigned int ItemCount; // w0
  ShopEntity_o *Shop_k__BackingField; // x8
  unsigned __int64 v15; // x22
  __int64 v16; // x24
  int64_t v17; // x23
  unsigned int v18; // w0

  if ( (byte_4A57750 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57750 = 1;
  }
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !item || (v6 = (_DWORD *)SelfUserGame, (SelfUserGame = (__int64)item->fields._Shop_k__BackingField) == 0) )
LABEL_28:
    sub_1B8880C(SelfUserGame, v5);
  switch ( *(_DWORD *)(SelfUserGame + 68) )
  {
    case 1:
      SelfUserGame = sub_1B88658(int___TypeInfo, 1LL);
      if ( !v6 )
        goto LABEL_28;
      v7 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_28;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_48;
      v11 = v6[44];
      goto LABEL_46;
    case 2:
      SelfUserGame = sub_1B88658(int___TypeInfo, 1LL);
      if ( !v6 )
        goto LABEL_28;
      v7 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_28;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_48;
      v11 = v6[24];
      goto LABEL_46;
    case 4:
      SelfUserGame = sub_1B88658(int___TypeInfo, 1LL);
      if ( !v6 )
        goto LABEL_28;
      v7 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_28;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_48;
      v11 = v6[46];
      goto LABEL_46;
    case 6:
    case 0xB:
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_28;
      SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)SelfUserGame,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !item->fields._Shop_k__BackingField )
        goto LABEL_28;
      v12 = (UserItemMaster_o *)SelfUserGame;
      ItemCount = ShopEntity__GetItemCount(item->fields._Shop_k__BackingField, 0LL);
      SelfUserGame = sub_1B88658(int___TypeInfo, ItemCount);
      Shop_k__BackingField = item->fields._Shop_k__BackingField;
      if ( !Shop_k__BackingField )
        goto LABEL_28;
      v7 = (System_Int32_array *)SelfUserGame;
      v15 = 0LL;
      v16 = SelfUserGame + 32;
      break;
    case 8:
    case 9:
    case 0xC:
      v7 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_28;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      SelfUserGame = NetworkManager__get_UserId(0LL);
      v9 = item->fields._Shop_k__BackingField;
      if ( !v9 )
        goto LABEL_28;
      v10 = SelfUserGame;
      SelfUserGame = ShopEntity__GetItemIDs(v9, 0, 0LL);
      if ( !MasterData_object )
        goto LABEL_28;
      SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)MasterData_object,
                                v10,
                                SelfUserGame,
                                0LL);
      if ( !SelfUserGame || !v7 )
        goto LABEL_28;
      if ( !v7->max_length )
        goto LABEL_48;
      v11 = *(_DWORD *)(SelfUserGame + 28);
      goto LABEL_46;
    case 0xA:
      SelfUserGame = sub_1B88658(int___TypeInfo, 1LL);
      if ( !v6 )
        goto LABEL_28;
      v7 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_28;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_48;
      v11 = v6[47];
LABEL_46:
      v7->m_Items[1] = v11;
      return v7;
    default:
      v18 = ShopEntity__GetItemCount((ShopEntity_o *)SelfUserGame, 0LL);
      return (System_Int32_array *)sub_1B88658(int___TypeInfo, v18);
  }
  while ( (__int64)v15 < ShopEntity__GetItemCount(Shop_k__BackingField, 0LL) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    SelfUserGame = NetworkManager__get_UserId(0LL);
    if ( item->fields._Shop_k__BackingField )
    {
      v17 = SelfUserGame;
      SelfUserGame = ShopEntity__GetItemIDs(item->fields._Shop_k__BackingField, v15, 0LL);
      if ( v12 )
      {
        SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(v12, v17, SelfUserGame, 0LL);
        if ( SelfUserGame )
        {
          if ( v7 )
          {
            if ( v15 >= v7->max_length )
LABEL_48:
              sub_1B88814(SelfUserGame, v5);
            *(_DWORD *)(v16 + 4 * v15) = *(_DWORD *)(SelfUserGame + 28);
            Shop_k__BackingField = item->fields._Shop_k__BackingField;
            ++v15;
            if ( Shop_k__BackingField )
              continue;
          }
        }
      }
    }
    goto LABEL_28;
  }
  return v7;
}


void __fastcall ShopBuyItemListViewItemDraw__SetBandSprite(
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
  if ( (byte_4A57742 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20585/*"img_txt_shop"*/);
    sub_1B885B0(&StringLiteral_20571/*"img_txt_quest"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1B885B0(&StringLiteral_20505/*"img_txt_bgm"*/);
    byte_4A57742 = 1;
  }
  if ( !item || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0LL )
    sub_1B8880C(this, item);
  v7 = 0;
  v8 = &StringLiteral_20571/*"img_txt_quest"*/;
  switch ( Shop_k__BackingField->fields.purchaseType )
  {
    case 5:
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItemDraw__GetIsSetItemEventShop(
                                                this,
                                                Shop_k__BackingField->fields.targetIds,
                                                0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_7;
      v7 = 0;
      break;
    case 6:
      goto LABEL_9;
    case 7:
    case 9:
LABEL_7:
      v8 = &StringLiteral_20585/*"img_txt_shop"*/;
      goto LABEL_9;
    case 0xF:
      v8 = &StringLiteral_20505/*"img_txt_bgm"*/;
LABEL_9:
      ShopBuyItemListViewItemDraw__SetSpriteName(this, v5->fields.bandSprite, (System_String_o *)*v8, v3);
      v7 = 1;
      break;
    default:
      break;
  }
  ShopBuyItemListViewItemDraw__SetSpriteActive(this, v5->fields.bandSprite, v7, v3);
}


void __fastcall ShopBuyItemListViewItemDraw__SetBaseButton(
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

  if ( (byte_4A57748 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UICommonButtonColor_TypeInfo);
    byte_4A57748 = 1;
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
      sub_1B8880C(v11, v8);
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
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v6; // x0
  __int64 v7; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x0
  int32_t v9; // w0
  int bgImageId; // t1
  UISprite_o *v11; // x21
  System_String_o *v12; // x0
  System_String_o *v13; // x22
  struct ShopEntity_o *v14; // x8
  UISprite_o *v15; // x20
  System_String_o **onChange; // x8

  if ( (byte_4A57743 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ShopBuyItemListViewItemDraw_TypeInfo);
    sub_1B885B0(&StringLiteral_23275/*"shop_item_menu_"*/);
    byte_4A57743 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (UISprite_o *)UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    if ( item )
    {
      Shop_k__BackingField = item->fields._Shop_k__BackingField;
      if ( Shop_k__BackingField )
      {
        bgImageId = Shop_k__BackingField->fields.bgImageId;
        v9 = (_DWORD)Shop_k__BackingField + 124;
        if ( bgImageId >= 1 )
        {
          v11 = this->fields.baseSprite;
          v12 = System_Int32__ToString(v9, 0LL);
          v13 = System_String__Concat_61707032((System_String_o *)StringLiteral_23275/*"shop_item_menu_"*/, v12, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          if ( AtlasManager__SetShopBanner_37860916(v11, v13, 0LL) )
            return;
        }
      }
      v6 = this->fields.baseSprite;
      if ( v6 )
      {
        UISprite__set_atlas(v6, this->fields.baseAtlas, 0LL);
        v14 = item->fields._Shop_k__BackingField;
        if ( v14 )
        {
          v15 = this->fields.baseSprite;
          if ( v14->fields.shopType == 9 )
          {
            v6 = (UISprite_o *)ShopBuyItemListViewItemDraw_TypeInfo;
            if ( !ShopBuyItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ShopBuyItemListViewItemDraw_TypeInfo);
              v6 = (UISprite_o *)ShopBuyItemListViewItemDraw_TypeInfo;
            }
            onChange = (System_String_o **)v6->fields.onChange;
          }
          else
          {
            onChange = &this->fields.baseSpriteName;
          }
          if ( v15 )
          {
            UISprite__set_spriteName(v15, *onChange, 0LL);
            return;
          }
        }
      }
    }
    sub_1B8880C(v6, v7);
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

  if ( (byte_4A5773F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5773F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)button, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !button || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)button, 0LL)) == 0LL )
      sub_1B8880C(gameObject, v7);
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

  if ( (byte_4A5774C & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    byte_4A5774C = 1;
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
          sub_1B8880C(IsAp, v11);
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


void __fastcall ShopBuyItemListViewItemDraw__SetEventEndTime(
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

  if ( (byte_4A5774E & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_12059/*"SHOP_INDEFINITE_PERIOD"*/);
    sub_1B885B0(&StringLiteral_13311/*"TIME_REST2_NONE"*/);
    byte_4A5774E = 1;
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
        RestTime2 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12059/*"SHOP_INDEFINITE_PERIOD"*/,
                                                       0LL);
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
    RestTime2 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__GetRestTime2(activeTime, enterTime, 0LL);
    goto LABEL_12;
  }
  v15 = this->fields.restTimeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime2 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13311/*"TIME_REST2_NONE"*/, 0LL);
  v16 = v15;
LABEL_13:
  ShopBuyItemListViewItemDraw__SetLabelText(RestTime2, v16, (System_String_o *)RestTime2, v14);
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

  if ( (byte_4A5774D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5774D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)eventItemIcon, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !eventItemIcon )
      sub_1B8880C(v8, v9);
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
      sub_1B8880C(this, item);
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
      sub_1B88814(this, item);
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
  if ( (byte_4A57747 & 1) == 0 )
  {
    this = (ShopBuyItemListViewItemDraw_o *)sub_1B885B0(&StringLiteral_9251/*"NONE"*/);
    byte_4A57747 = 1;
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
                                                    (System_String_o *)StringLiteral_9251/*"NONE"*/,
                                                    0LL);
          goto LABEL_21;
        }
LABEL_23:
        sub_1B8880C(this, item);
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
  UnityEngine_Object_o *chocolateSprite; // x23
  _BOOL8 v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x3
  int64_t IsChocolateSvtEquip; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v36; // x1
  ShopBuyItemListViewItemDraw_o *v37; // x0
  const MethodInfo *v38; // x3
  UnityEngine_Object_o *soldOutImage; // x23
  bool v40; // w23
  const MethodInfo *v41; // x2
  ShopEntity_o *v42; // x24
  UILabel_o *textOnMask; // x25
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x3
  _BOOL4 IsRarePriShopPurchased_k__BackingField; // w22
  const MethodInfo *v47; // x1
  bool IsIndefinitePeriodShowable; // w0
  const MethodInfo *v49; // x5
  struct ShopEntity_o *v50; // x8
  int64_t closedAt; // x3
  ShopBuyItemListViewItemDraw_o *v52; // x0
  const MethodInfo *v53; // x3
  UnityEngine_Object_o *priceInfo1; // x22
  struct ShopEntity_o *v55; // x8
  int32_t payType; // w8
  const MethodInfo *v57; // x3
  UnityEngine_GameObject_o *v58; // x22
  struct UnityEngine_GameObject_o *priceInfo2; // x22
  bool v60; // w1
  const MethodInfo *v61; // x3
  const MethodInfo *v62; // x3
  _BOOL4 v63; // w22
  struct ShopEntity_o *v64; // x8
  _BOOL4 v65; // w23
  _BOOL4 v66; // w8
  struct ShopEntity_o *v67; // x8
  Il2CppObject *v68; // x21
  Il2CppObject *MasterData_object; // x22
  struct ShopEntity_o *v70; // x8
  UserShopEntity_o *v71; // x22
  System_String_o **v72; // x8
  System_String_o **v73; // x9
  struct CommonConsumeEntity_array *CommonConsumeEntities_k__BackingField; // x22
  bool v75; // zf
  System_String_o *v76; // x20
  System_String_o *v77; // x0
  struct UILabel_o *freeExchangeConditionNoticeLabel; // x8
  int mWidth; // w8
  struct UISprite_array *freeExchangeConditionNoticeBgSprites; // x21
  int v81; // w9
  int max_length; // w8
  unsigned int v83; // w22
  int32_t v84; // w19
  Il2CppClass **v85; // x8
  UISprite_o *v86; // x20
  const MethodInfo *v87; // [xsp+0h] [xbp-80h]
  const MethodInfo *v88; // [xsp+0h] [xbp-80h]
  bool isNotCommandCodeGet; // [xsp+14h] [xbp-6Ch] BYREF
  bool isNotCostumeGet; // [xsp+18h] [xbp-68h] BYREF
  bool isServantHaving; // [xsp+1Ch] [xbp-64h] BYREF
  bool isNotServantHaving; // [xsp+20h] [xbp-60h] BYREF
  bool isNotServantGet; // [xsp+24h] [xbp-5Ch] BYREF
  System_String_o *itemName; // [xsp+28h] [xbp-58h] BYREF
  System_String_o *message; // [xsp+38h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_4A5773C & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ShopBuyItemUtility_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_11980/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/);
    sub_1B885B0(&StringLiteral_19626/*"freeShopCondMessage"*/);
    sub_1B885B0(&StringLiteral_12066/*"SHOP_PAID_EXCHANGE_CONDITIONS"*/);
    sub_1B885B0(&StringLiteral_19625/*"freeShopCondId"*/);
    sub_1B885B0(&StringLiteral_20651/*"info_base"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_11981/*"SHOP_ACHIEVEMENT_PAID_EXCHANGE_CONDITIONS"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1B885B0(&StringLiteral_12039/*"SHOP_FREE_EXCHANGE_CONDITIONS"*/);
    byte_4A5773C = 1;
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
    ShopBuyItemListViewItemDraw__SetSpriteActive(v52, v6->fields.addRangeSprite, 0, v53);
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
  chocolateSprite = (UnityEngine_Object_o *)v6->fields.chocolateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v31 = UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL);
  if ( v31 )
  {
    IsChocolateSvtEquip = (int64_t)v6->fields.chocolateSprite;
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsChocolateSvtEquip, 0LL);
    IsChocolateSvtEquip = ShopBuyItemListViewItem__get_IsChocolateSvtEquip(item, v36);
    if ( !gameObject )
      goto LABEL_100;
    UnityEngine_GameObject__SetActive(gameObject, IsChocolateSvtEquip & 1, 0LL);
  }
  ShopBuyItemListViewItemDraw__SetLabelText(
    (ShopBuyItemListViewItemDraw_o *)v31,
    v6->fields.textOnMask,
    (System_String_o *)StringLiteral_1/*""*/,
    v33);
  ShopBuyItemListViewItemDraw__SetLabelText(v37, v6->fields.prepareTextOnMask, (System_String_o *)StringLiteral_1/*""*/, v38);
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
  v40 = v11;
  ShopBuyItemListViewItemDraw__SetRestCountText(
    v6,
    item,
    v11,
    &isNotServantGet,
    &isNotServantHaving,
    &isServantHaving,
    &isNotCostumeGet,
    &isNotCommandCodeGet,
    v87);
  ShopBuyItemListViewItemDraw__SetMask(
    v6,
    item,
    v11,
    isNotServantGet,
    isNotServantHaving,
    isServantHaving,
    isNotCostumeGet,
    isNotCommandCodeGet,
    v88);
  v42 = item->fields._Shop_k__BackingField;
  textOnMask = v6->fields.textOnMask;
  if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
  ShopBuyItemUtility__SetAddTextOnMask(v42, textOnMask, v41);
  ShopBuyItemListViewItemDraw__SetInfoButton(v6, item, v40, v44);
  ShopBuyItemListViewItemDraw__SetBaseButton(v6, v40, mode, v45);
  IsRarePriShopPurchased_k__BackingField = item->fields._IsRarePriShopPurchased_k__BackingField;
  IsIndefinitePeriodShowable = ShopBuyItemListViewItem__get_IsIndefinitePeriodShowable(item, v47);
  v50 = item->fields._Shop_k__BackingField;
  if ( v50 )
    closedAt = v50->fields.closedAt;
  else
    closedAt = 0LL;
  ShopBuyItemListViewItemDraw__SetEventEndTime(
    v6,
    IsRarePriShopPurchased_k__BackingField,
    IsIndefinitePeriodShowable,
    closedAt,
    item->fields._EnterTime_k__BackingField,
    v49);
  priceInfo1 = (UnityEngine_Object_o *)v6->fields.priceInfo1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(priceInfo1, 0LL, 0LL) )
    return;
  v55 = item->fields._Shop_k__BackingField;
  if ( !v55 )
  {
LABEL_35:
    IsChocolateSvtEquip = (int64_t)v6->fields.priceInfoFree;
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0LL);
    IsChocolateSvtEquip = (int64_t)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    v58 = v6->fields.priceInfo1;
    IsChocolateSvtEquip = ShopEntity__GetItemCount((ShopEntity_o *)IsChocolateSvtEquip, 0LL);
    if ( !v58 )
      goto LABEL_100;
    UnityEngine_GameObject__SetActive(v58, (int)IsChocolateSvtEquip < 2, 0LL);
    IsChocolateSvtEquip = (int64_t)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    priceInfo2 = v6->fields.priceInfo2;
    IsChocolateSvtEquip = ShopEntity__GetItemCount((ShopEntity_o *)IsChocolateSvtEquip, 0LL);
    if ( !priceInfo2 )
      goto LABEL_100;
    v60 = (int)IsChocolateSvtEquip > 1;
    IsChocolateSvtEquip = (int64_t)priceInfo2;
LABEL_41:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, v60, 0LL);
    ShopBuyItemListViewItemDraw__SetPriceIconText(v6, item, v11, v61);
    ShopBuyItemListViewItemDraw__SetEventItemIconText(v6, item, v11, v62);
    goto LABEL_42;
  }
  payType = v55->fields.payType;
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
      ShopBuyItemListViewItemDraw__SetPriceIconText(v6, item, v11, v57);
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
    v60 = (signed int)CommonConsumeEntities_k__BackingField->max_length > 1;
    goto LABEL_41;
  }
LABEL_42:
  IsChocolateSvtEquip = (int64_t)item->fields._Shop_k__BackingField;
  if ( !IsChocolateSvtEquip )
    goto LABEL_100;
  IsChocolateSvtEquip = ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)IsChocolateSvtEquip, 0, 0LL);
  v63 = 0;
  if ( (IsChocolateSvtEquip & 1) != 0 )
  {
    IsChocolateSvtEquip = (int64_t)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    IsChocolateSvtEquip = ShopEntity__IsSoldOut((ShopEntity_o *)IsChocolateSvtEquip, 0LL);
    v63 = (IsChocolateSvtEquip & 1) == 0;
  }
  v64 = item->fields._Shop_k__BackingField;
  if ( !v64 )
    goto LABEL_100;
  if ( v64->fields.purchaseType == 14 )
  {
    IsChocolateSvtEquip = ShopEntity__IsEligibleForFreeFeaturesTheCostumeRelease(
                            item->fields._Shop_k__BackingField,
                            0LL);
    v64 = item->fields._Shop_k__BackingField;
    if ( !v64 )
      goto LABEL_100;
    v65 = (IsChocolateSvtEquip & 1) == 0;
  }
  else
  {
    v65 = 0;
  }
  IsChocolateSvtEquip = (int64_t)v64->fields.script;
  if ( !IsChocolateSvtEquip )
LABEL_100:
    sub_1B8880C(IsChocolateSvtEquip, v32);
  IsChocolateSvtEquip = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          (System_Collections_Generic_Dictionary_object__object__o *)IsChocolateSvtEquip,
                          (Il2CppObject *)StringLiteral_19625/*"freeShopCondId"*/,
                          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( (IsChocolateSvtEquip & 1) != 0 && (!v11 || !v63) )
  {
    IsChocolateSvtEquip = (int64_t)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    IsChocolateSvtEquip = ShopEntity__IsAfterTheFreeShopReleaseDate((ShopEntity_o *)IsChocolateSvtEquip, 0LL);
    v66 = (IsChocolateSvtEquip & 1) == 0;
  }
  else
  {
    v66 = 1;
  }
  if ( v66 || v65 )
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
  v67 = item->fields._Shop_k__BackingField;
  if ( !v67 )
    goto LABEL_100;
  IsChocolateSvtEquip = (int64_t)v67->fields.script;
  if ( !IsChocolateSvtEquip )
    goto LABEL_100;
  IsChocolateSvtEquip = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                   (System_Collections_Generic_Dictionary_object__object__o *)IsChocolateSvtEquip,
                                   (Il2CppObject *)StringLiteral_19626/*"freeShopCondMessage"*/,
                                   (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !IsChocolateSvtEquip )
    goto LABEL_100;
  v68 = (Il2CppObject *)(*(__int64 (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)IsChocolateSvtEquip + 360LL))(
                          IsChocolateSvtEquip,
                          *(_QWORD *)(*(_QWORD *)IsChocolateSvtEquip + 368LL));
  IsChocolateSvtEquip = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsChocolateSvtEquip )
    goto LABEL_100;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)IsChocolateSvtEquip,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  IsChocolateSvtEquip = NetworkManager__get_UserId(0LL);
  v70 = item->fields._Shop_k__BackingField;
  if ( !v70 )
    goto LABEL_100;
  if ( !MasterData_object )
    goto LABEL_100;
  IsChocolateSvtEquip = (int64_t)UserShopMaster__GetEntityDefinitely(
                                   (UserShopMaster_o *)MasterData_object,
                                   IsChocolateSvtEquip,
                                   v70->fields.id,
                                   0LL);
  if ( !item->fields._Shop_k__BackingField )
    goto LABEL_100;
  v71 = (UserShopEntity_o *)IsChocolateSvtEquip;
  IsChocolateSvtEquip = ShopEntity__IsFulFilledFreeExchangeCondition(item->fields._Shop_k__BackingField, 0LL);
  if ( !v71 )
    goto LABEL_100;
  if ( v71->fields.num )
  {
    IsChocolateSvtEquip = (int64_t)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    if ( !ShopEntity__IsPaidExchange((ShopEntity_o *)IsChocolateSvtEquip, 0LL) )
      goto LABEL_56;
    LOBYTE(IsChocolateSvtEquip) = UserShopEntity__get_IsReturnRarePriShop(v71, 0LL);
    v72 = (System_String_o **)&StringLiteral_12066/*"SHOP_PAID_EXCHANGE_CONDITIONS"*/;
    v73 = (System_String_o **)&StringLiteral_11981/*"SHOP_ACHIEVEMENT_PAID_EXCHANGE_CONDITIONS"*/;
  }
  else
  {
    v72 = (System_String_o **)&StringLiteral_12039/*"SHOP_FREE_EXCHANGE_CONDITIONS"*/;
    v73 = (System_String_o **)&StringLiteral_11980/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/;
  }
  v75 = (IsChocolateSvtEquip & 1) == 0;
  IsChocolateSvtEquip = (int64_t)v6->fields.freeExchangeConditionNoticeRoot;
  if ( !v75 )
    v72 = v73;
  if ( !IsChocolateSvtEquip )
    goto LABEL_100;
  v76 = *v72;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 1, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v77 = LocalizationManager__Get(v76, 0LL);
  IsChocolateSvtEquip = (int64_t)System_String__Format(v77, v68, 0LL);
  if ( !v6->fields.freeExchangeConditionNoticeLabel )
    goto LABEL_100;
  UILabel__set_text(v6->fields.freeExchangeConditionNoticeLabel, (System_String_o *)IsChocolateSvtEquip, 0LL);
  freeExchangeConditionNoticeLabel = v6->fields.freeExchangeConditionNoticeLabel;
  if ( !freeExchangeConditionNoticeLabel )
    goto LABEL_100;
  mWidth = freeExchangeConditionNoticeLabel->fields.mWidth;
  freeExchangeConditionNoticeBgSprites = v6->fields.freeExchangeConditionNoticeBgSprites;
  v81 = mWidth >= 512 ? 512 : mWidth;
  if ( !freeExchangeConditionNoticeBgSprites )
    goto LABEL_100;
  max_length = freeExchangeConditionNoticeBgSprites->max_length;
  if ( max_length >= 1 )
  {
    v83 = 0;
    v84 = v81 + 16;
    while ( 1 )
    {
      if ( v83 >= max_length )
        sub_1B88814(IsChocolateSvtEquip, v32);
      v85 = &freeExchangeConditionNoticeBgSprites->obj.klass + (int)v83;
      v86 = (UISprite_o *)v85[4];
      if ( !v86 )
        break;
      UIWidget__set_width((UIWidget_o *)v85[4], v84, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      IsChocolateSvtEquip = AtlasManager__SetEventUI(v86, (System_String_o *)StringLiteral_20651/*"info_base"*/, 0LL);
      max_length = freeExchangeConditionNoticeBgSprites->max_length;
      if ( (int)++v83 >= max_length )
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
      sub_1B8880C(itemIcon, item);
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

  if ( (byte_4A5773D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5773D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_1B8880C(gameObject, v7);
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

  if ( (byte_4A5773E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5773E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1B8880C(v6, v7);
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
  UILabel_o *v17; // x21
  const MethodInfo *v18; // x3
  UILabel_o *v19; // x1
  ShopBuyItemListViewItemDraw_o *v20; // x2
  ShopEntity_o *Shop_k__BackingField; // x0
  _BOOL4 v22; // w23
  UnityEngine_Object_o *anotherBuyable; // x21
  System_Int32_array *AnotherPayItemIds; // x0
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x3
  UnityEngine_Object_o *anotherPayItemImage; // x21
  UnityEngine_GameObject_o *v28; // x21
  UISprite_o *v29; // x21
  int32_t rangeSprite; // w22
  UISprite_o *maskSprite; // x1
  bool v32; // w2
  struct ShopEntity_o *v33; // x8
  struct ShopEntity_o *v34; // x8
  bool v35; // w20
  struct ShopEntity_o *v36; // x8
  ShopReleaseMaster_o *v37; // x21
  struct ShopEntity_o *v38; // x8
  struct UISprite_o *v39; // x8
  struct ShopEntity_o *v40; // x8
  struct System_Int32_array *targetIds; // x8
  Il2CppObject *Entity; // x0
  struct ShopEntity_o *v43; // x8
  __int64 *v44; // x8
  ShopBuyItemListViewItemDraw_o *Empty; // x21
  UILabel_o *v46; // x21
  ShopBuyItemListViewItemDraw_o *v47; // x0
  const MethodInfo *v48; // x3
  struct ShopEntity_o *v49; // x8
  const MethodInfo *v50; // x2
  UILabel_o *textOnMask; // x20
  struct ShopEntity_o *v52; // x8
  UILabel_o *v53; // x21
  UnityEngine_Object_o *prepareTextOnMask; // x21
  const MethodInfo *v55; // x1
  UILabel_o *v56; // x19
  ShopBuyItemListViewItemDraw_o *v57; // x0
  const MethodInfo *v58; // x3
  int32_t questId; // [xsp+Ch] [xbp-54h] BYREF

  v16 = this;
  if ( (byte_4A57749 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ShopReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_12032/*"SHOP_CANT_BUY"*/);
    sub_1B885B0(&StringLiteral_12069/*"SHOP_QUEST_OPEN"*/);
    sub_1B885B0(&StringLiteral_12067/*"SHOP_QUEST_ALREADY_CLEARED"*/);
    sub_1B885B0(&StringLiteral_19625/*"freeShopCondId"*/);
    sub_1B885B0(&StringLiteral_12065/*"SHOP_NOT_RELEASE_SET_ITEM"*/);
    sub_1B885B0(&StringLiteral_12006/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1B885B0(&StringLiteral_11984/*"SHOP_ALREADY_GET"*/);
    byte_4A57749 = 1;
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
      v22 = !ShopEntity__IsAnotherItemBuyable((ShopEntity_o *)this, 0LL);
    }
    else
    {
      v22 = 0;
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
        v28 = v16->fields.anotherBuyable;
        this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsAnotherItemBuyable((ShopEntity_o *)this, 0LL);
        if ( !v28 )
          goto LABEL_139;
        UnityEngine_GameObject__SetActive(v28, (unsigned __int8)this & 1, 0LL);
        this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
        if ( !this )
          goto LABEL_139;
        AnotherPayItemIds = ShopEntity__GetAnotherPayItemIds((ShopEntity_o *)this, 0LL);
        if ( AnotherPayItemIds )
        {
          this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
          if ( !this )
            goto LABEL_139;
          v29 = v16->fields.anotherPayItemImage;
          this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetAnotherPayItemIds((ShopEntity_o *)this, 0LL);
          if ( !this )
            goto LABEL_139;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
LABEL_140:
            sub_1B88814(this, item);
          rangeSprite = (int32_t)this->fields.rangeSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AnotherPayItemIds = (System_Int32_array *)AtlasManager__SetItem(v29, rangeSprite, 0LL);
        }
      }
    }
    if ( v22 )
    {
      ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(v16, item, v25);
      maskSprite = v16->fields.maskSprite;
      v32 = 1;
LABEL_43:
      ShopBuyItemListViewItemDraw__SetSpriteActive(
        (ShopBuyItemListViewItemDraw_o *)AnotherPayItemIds,
        maskSprite,
        v32,
        v26);
      return;
    }
    v33 = item->fields._Shop_k__BackingField;
    if ( !v33 || v33->fields.purchaseType != 6 )
    {
      maskSprite = v16->fields.maskSprite;
      v32 = 0;
      goto LABEL_43;
    }
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_139;
    this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
    v34 = item->fields._Shop_k__BackingField;
    if ( !v34 )
      goto LABEL_139;
    if ( !this )
      goto LABEL_139;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isQuestNotClearSet(
                                              (ShopReleaseMaster_o *)this,
                                              v34->fields.id,
                                              &questId,
                                              0LL);
    if ( !item->fields._Shop_k__BackingField )
      goto LABEL_139;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !ShopEntity__isQuestNotClearItemClosed(item->fields._Shop_k__BackingField, 1, 0LL) )
      {
LABEL_41:
        v35 = 0;
LABEL_111:
        this = (ShopBuyItemListViewItemDraw_o *)v16->fields.maskSprite;
        if ( this )
        {
          this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v35, 0LL);
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
    this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12069/*"SHOP_QUEST_OPEN"*/, 0LL);
    if ( !textOnMask )
      goto LABEL_139;
    UILabel__set_text(textOnMask, (System_String_o *)this, 0LL);
    v35 = 1;
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
    case 2:
    case 7:
    case 9:
      goto LABEL_7;
    case 4:
      v39 = this->fields.maskSprite;
      if ( !v39 )
        goto LABEL_139;
      if ( !LODWORD(v39->fields.m_CancellationTokenSource) )
        goto LABEL_140;
      if ( !LODWORD(v39->fields.leftAnchor) )
        goto LABEL_68;
      this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_139;
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      v40 = item->fields._Shop_k__BackingField;
      if ( !v40 )
        goto LABEL_139;
      targetIds = v40->fields.targetIds;
      if ( !targetIds )
        goto LABEL_139;
      if ( !targetIds->max_length )
        goto LABEL_140;
      if ( !this )
        goto LABEL_139;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 targetIds->m_Items[1],
                 (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Entity
        && ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL)
        && item->fields._ShopKind_k__BackingField != 6 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v44 = &StringLiteral_12032/*"SHOP_CANT_BUY"*/;
        goto LABEL_128;
      }
LABEL_68:
      if ( isNotServantGet || isNotServantHaving || isServantHaving || isNotCostumeGet || isNotCommandCodeGet )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
        v43 = item->fields._Shop_k__BackingField;
        if ( v43 && this )
        {
          this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                    (ShopReleaseMaster_o *)this,
                                                    v43->fields.id,
                                                    40,
                                                    0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v20 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_1/*""*/;
            goto LABEL_129;
          }
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v44 = &StringLiteral_11984/*"SHOP_ALREADY_GET"*/;
LABEL_128:
          this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v44, 0LL);
          v20 = this;
LABEL_129:
          v19 = v16->fields.textOnMask;
LABEL_130:
          ShopBuyItemListViewItemDraw__SetLabelText(this, v19, (System_String_o *)v20, v18);
          goto LABEL_131;
        }
LABEL_139:
        sub_1B8880C(this, item);
      }
LABEL_131:
      prepareTextOnMask = (UnityEngine_Object_o *)v16->fields.prepareTextOnMask;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(prepareTextOnMask, 0LL, 0LL)
        && ShopBuyItemListViewItem__IsPrepareTextOnMask(item, v55) )
      {
        v56 = v16->fields.prepareTextOnMask;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v57 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12006/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, 0LL);
        ShopBuyItemListViewItemDraw__SetLabelText(v57, v56, (System_String_o *)v57, v58);
      }
      return;
    case 5:
      Empty = (ShopBuyItemListViewItemDraw_o *)string_TypeInfo->static_fields->Empty;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12065/*"SHOP_NOT_RELEASE_SET_ITEM"*/, 0LL);
        Empty = this;
      }
      v19 = v16->fields.textOnMask;
      v20 = Empty;
      goto LABEL_130;
    case 6:
      if ( !ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)this, 0, 0LL) )
        goto LABEL_131;
      v46 = v16->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v47 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12067/*"SHOP_QUEST_ALREADY_CLEARED"*/, 0LL);
      ShopBuyItemListViewItemDraw__SetLabelText(v47, v46, (System_String_o *)v47, v48);
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_139;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_131;
      v49 = item->fields._Shop_k__BackingField;
      if ( !v49 )
        goto LABEL_139;
      this = (ShopBuyItemListViewItemDraw_o *)v49->fields.script;
      if ( !this )
        goto LABEL_139;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)this,
             (Il2CppObject *)StringLiteral_19625/*"freeShopCondId"*/,
             (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
LABEL_103:
        ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(v16, item, v50);
      }
      goto LABEL_131;
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
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
      v52 = item->fields._Shop_k__BackingField;
      if ( !v52 || !this )
        goto LABEL_139;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                (ShopReleaseMaster_o *)this,
                                                v52->fields.id,
                                                1,
                                                0LL);
      v53 = v16->fields.textOnMask;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11984/*"SHOP_ALREADY_GET"*/, 0LL);
        v20 = this;
      }
      else
      {
        v20 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_1/*""*/;
      }
      v19 = v53;
      goto LABEL_130;
    default:
      if ( !isNotServantGet && !isNotServantHaving && !isServantHaving && !isNotCostumeGet && !isNotCommandCodeGet )
        goto LABEL_131;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
      v36 = item->fields._Shop_k__BackingField;
      if ( !v36 )
        goto LABEL_139;
      v37 = (ShopReleaseMaster_o *)this;
      if ( !this )
        goto LABEL_139;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                (ShopReleaseMaster_o *)this,
                                                v36->fields.id,
                                                1,
                                                0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_56;
      v38 = item->fields._Shop_k__BackingField;
      if ( !v38 )
        goto LABEL_139;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(v37, v38->fields.id, 40, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_7:
        v17 = v16->fields.textOnMask;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11984/*"SHOP_ALREADY_GET"*/, 0LL);
        v19 = v17;
        v20 = this;
      }
      else
      {
LABEL_56:
        v19 = v16->fields.textOnMask;
        v20 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_1/*""*/;
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
  if ( (byte_4A57744 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_15848/*"[000000]"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1B885B0(&StringLiteral_25466/*"？"*/);
    byte_4A57744 = 1;
  }
  if ( isInPreparation )
  {
    messageTextLabel = v10->fields.messageTextLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__ReplaceCommonTag(preparationMessage, 0, 0LL);
    v13 = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_61707032(
                                             (System_String_o *)StringLiteral_15848/*"[000000]"*/,
                                             v12,
                                             0LL);
    ShopBuyItemListViewItemDraw__SetLabelText(v13, messageTextLabel, (System_String_o *)v13, v14);
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
            v15 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_25466/*"？"*/;
LABEL_37:
            UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)this, (System_String_o *)v15, 0LL);
            return;
          }
        }
        else
        {
          IsNullOrEmpty = System_String__IsNullOrEmpty(preparationItemName, 0LL);
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
          this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v39, 0, 0LL);
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
    sub_1B8880C(this, item);
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
      && ShopBuyItemListViewItem__TryGetClosedMessage(item, &message, &value, v17) )
    {
      v19 = v10->fields.messageTextLabel;
      v20 = message;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = LocalizationManager__ReplaceCommonTag(v20, 0, 0LL);
      v22 = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_61707032(
                                               (System_String_o *)StringLiteral_15848/*"[000000]"*/,
                                               v21,
                                               0LL);
      ShopBuyItemListViewItemDraw__SetLabelText(v22, v19, (System_String_o *)v22, v23);
      v24 = System_String__IsNullOrEmpty(value, 0LL);
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
      this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v27, 0, 0LL);
      if ( !v26 )
        goto LABEL_42;
      UICrossNarrowLabel__SetCrossNarrowText(v26, (System_String_o *)this, 0LL);
      return;
    }
  }
  v29 = v10->fields.nameTextLabel;
  v30 = ShopBuyItemListViewItem__get_NameText(item, v16);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v30, 0, 0LL);
  if ( !v29 )
    goto LABEL_42;
  UICrossNarrowLabel__SetCrossNarrowText(v29, (System_String_o *)this, 0LL);
  v31 = v10->fields.messageTextLabel;
  DetailText = ShopBuyItemListViewItem__get_DetailText(item, v32);
  v34 = LocalizationManager__ReplaceCommonTag(DetailText, 0, 0LL);
  this = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_61707032(
                                            (System_String_o *)StringLiteral_15848/*"[000000]"*/,
                                            v34,
                                            0LL);
  if ( !v31 )
    goto LABEL_42;
  UILabel__set_text(v31, (System_String_o *)this, 0LL);
}


void __fastcall ShopBuyItemListViewItemDraw__SetNumText(
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
  if ( (byte_4A57745 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_ShopBuyItemListViewItemDraw__SetNumText_b__59_0__);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1B885B0(&StringLiteral_12012/*"SHOP_BUY_ITEM_HOLD"*/);
    byte_4A57745 = 1;
  }
  if ( isInPreparation )
  {
    if ( !item )
      goto LABEL_18;
    this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
    if ( !this )
      goto LABEL_18;
    v7 = ShopEntity__checkFlag((ShopEntity_o *)this, 2, 0LL);
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
  v7 = ShopEntity__checkHoldDisp((ShopEntity_o *)this, 0LL);
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
  v10 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12012/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
  ShopBuyItemListViewItemDraw__SetLabelText(v10, numTitleLabel, (System_String_o *)v10, v11);
  ShopBuyItemListViewItemDraw__SetLabelActive(v12, v6->fields.numTextLabel, 1, v13);
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
LABEL_18:
    sub_1B8880C(this, item);
  numTextLabel = v6->fields.numTextLabel;
  HoldCount = ShopEntity__getHoldCount((ShopEntity_o *)this, 0LL);
  NumberFormat = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__GetNumberFormat(HoldCount, 0LL);
  ShopBuyItemListViewItemDraw__SetLabelText(NumberFormat, numTextLabel, (System_String_o *)NumberFormat, v17);
  if ( item->fields._ShopKind_k__BackingField == 7 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
    v19 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v19, (Il2CppObject *)v6, Method_ShopBuyItemListViewItemDraw__SetNumText_b__59_0__, 0LL);
    StoneCountRefreshComponent__AttachToGameObject(gameObject, v19, 1, 0LL);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetPriceIconText(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v6; // x19
  int bandSprite_high; // w8
  UILabel_o *priceLabelFree; // x19
  struct CommonConsumeEntity_array *CommonConsumeEntities_k__BackingField; // x24
  __int64 v10; // x8
  ShopBuyItemListViewItemDraw_o *priceIconLabel; // x19
  int32_t v12; // w20
  ShopBuyItemListViewItemDraw_o *ItemCount; // x0
  const MethodInfo *v14; // x2
  ShopEntity_o *v15; // x0
  int32_t v16; // w1
  int32_t v17; // w3
  int32_t v18; // w2
  System_Int32_array *UserItemCounts; // x0
  UIIconLabel_o *v20; // x22
  System_Int32_array *v21; // x21
  const MethodInfo *v22; // x1
  int32_t v23; // w23
  ShopBuyItemListViewItemDraw_o *priceIconLabel2; // x19
  const MethodInfo *v25; // x1
  ShopEntity_o *Shop_k__BackingField; // x8
  int32_t v27; // w20
  UIIconLabel_o *v28; // x22
  ShopBuyItemListViewItemDraw_o *PriceIcon; // x0
  const MethodInfo *v30; // x2
  int32_t v31; // w23
  int32_t sellQp; // w24
  UIIconLabel_o *priceIconLabel1; // x21
  int32_t v34; // w22
  int32_t rangeSprite; // w23
  int32_t v36; // w21
  struct ItemEntity_o *itemEntity; // x8
  const MethodInfo *v38; // x3
  ShopEntity_o *Price; // x0
  struct ItemEntity_o *v40; // x8
  ShopEntity_o *v41; // x0
  int32_t v42; // w20
  struct ItemEntity_o *v43; // x8
  double v44; // d0
  UILabel_o **p_LineText2digit; // x8

  v6 = this;
  if ( (byte_4A5774B & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&System_Math_TypeInfo);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1B885B0(&StringLiteral_12036/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/);
    byte_4A5774B = 1;
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
    v10 = *(_QWORD *)&CommonConsumeEntities_k__BackingField->max_length;
    if ( !v10 )
      return;
    if ( (_DWORD)v10 == 1 )
    {
      if ( !CommonConsumeEntities_k__BackingField->m_Items[0] )
        return;
      priceIconLabel = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
      if ( CommonConsumeEntities_k__BackingField->max_length )
      {
        v12 = (int)this;
        this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[0];
        if ( !this )
          goto LABEL_83;
        goto LABEL_54;
      }
    }
    else
    {
      if ( (int)v10 < 2 )
        return;
      if ( !CommonConsumeEntities_k__BackingField->m_Items[0] )
        goto LABEL_87;
      priceIconLabel1 = v6->fields.priceIconLabel1;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
      if ( CommonConsumeEntities_k__BackingField->max_length )
      {
        v34 = (int)this;
        this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[0];
        if ( !this )
          goto LABEL_83;
        rangeSprite = (int32_t)this->fields.rangeSprite;
        this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0LL);
        if ( !priceIconLabel1 )
          goto LABEL_83;
        UIIconLabel__SetPurchaseDecision(priceIconLabel1, v34, rangeSprite, (int32_t)this, 0LL);
        if ( CommonConsumeEntities_k__BackingField->max_length > 1 )
        {
LABEL_87:
          if ( !CommonConsumeEntities_k__BackingField->m_Items[1] )
            return;
          priceIconLabel = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel2;
          this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
          if ( CommonConsumeEntities_k__BackingField->max_length > 1 )
          {
            v12 = (int)this;
            this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[1];
            if ( !this )
              goto LABEL_83;
LABEL_54:
            v36 = (int32_t)this->fields.rangeSprite;
            this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntity__GetUserHasNum(
                                                      (CommonConsumeEntity_o *)this,
                                                      0LL);
            if ( !priceIconLabel )
              goto LABEL_83;
            v17 = (int)this;
            this = priceIconLabel;
            v16 = v12;
            v18 = v36;
            goto LABEL_56;
          }
        }
      }
    }
LABEL_84:
    sub_1B88814(this, item);
  }
  if ( bandSprite_high == 13 )
  {
    priceLabelFree = v6->fields.priceLabelFree;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12036/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, 0LL);
    if ( priceLabelFree )
    {
      UILabel__set_text(priceLabelFree, (System_String_o *)this, 0LL);
      return;
    }
LABEL_83:
    sub_1B8880C(this, item);
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
    UserItemCounts = ShopBuyItemListViewItemDraw__GetUserItemCounts(ItemCount, item, v14);
    v20 = v6->fields.priceIconLabel1;
    v21 = UserItemCounts;
    this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v22);
    if ( !item->fields._Shop_k__BackingField )
      goto LABEL_83;
    v23 = (int)this;
    this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrices(item->fields._Shop_k__BackingField, 0, 0LL);
    if ( !v21 )
      goto LABEL_83;
    if ( v21->max_length )
    {
      if ( !v20 )
        goto LABEL_83;
      UIIconLabel__SetPurchaseDecision(v20, v23, (int32_t)this, v21->m_Items[1], 0LL);
      priceIconLabel2 = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel2;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v25);
      Shop_k__BackingField = item->fields._Shop_k__BackingField;
      if ( !Shop_k__BackingField )
        goto LABEL_83;
      v27 = (int)this;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrices(Shop_k__BackingField, 1, 0LL);
      if ( v21->max_length > 1 )
      {
        if ( !priceIconLabel2 )
          goto LABEL_83;
        v17 = v21->m_Items[2];
        v18 = (int)this;
        this = priceIconLabel2;
        v16 = v27;
        goto LABEL_56;
      }
    }
    goto LABEL_84;
  }
  v15 = item->fields._Shop_k__BackingField;
  if ( v15 && ShopEntity__IsSoldOut(v15, 0LL) && item->fields._IsNotHavingShopItemReceived_k__BackingField )
  {
    this = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel;
    if ( !this )
      goto LABEL_83;
    v16 = 56;
    v17 = -1;
    v18 = 0;
LABEL_56:
    UIIconLabel__SetPurchaseDecision((UIIconLabel_o *)this, v16, v18, v17, 0LL);
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
  v28 = v6->fields.priceIconLabel;
  PriceIcon = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
  v31 = (int)PriceIcon;
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
  this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItemDraw__GetUserItemCounts(PriceIcon, item, v30);
  if ( !this )
    goto LABEL_83;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_84;
  if ( !v28 )
    goto LABEL_83;
  UIIconLabel__SetPurchaseDecision(v28, v31, sellQp, (int32_t)this->fields.rangeSprite, 0LL);
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
      v40 = item->fields.itemEntity;
      if ( !v40 )
        goto LABEL_80;
      Price = (ShopEntity_o *)(unsigned int)v40->fields.sellQp;
      if ( !(_DWORD)Price )
        goto LABEL_80;
    }
    v41 = item->fields._Shop_k__BackingField;
    if ( v41 )
    {
      v42 = ShopEntity__GetPrice(v41, 0LL);
    }
    else
    {
      v43 = item->fields.itemEntity;
      if ( v43 )
        v42 = v43->fields.sellQp;
      else
        v42 = 0;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v44 = log10((double)v42);
    if ( v44 == INFINITY || (int)v44 )
    {
      p_LineText2digit = &v6->fields.LineText2digit;
      goto LABEL_82;
    }
LABEL_80:
    p_LineText2digit = &v6->fields.LineText;
LABEL_82:
    ShopBuyItemListViewItemDraw__SetLabelActive((ShopBuyItemListViewItemDraw_o *)Price, *p_LineText2digit, 1, v38);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v4; // x19
  struct ShopEntity_o *Shop_k__BackingField; // x8
  unsigned int shopType; // w9
  struct ShopEntity_o *v7; // x8
  struct System_Int32_array *targetIds; // x8
  struct ShopEntity_o *v9; // x8
  ShopBuyItemListViewItemDraw_o *v10; // x0
  const MethodInfo *v11; // x3
  bool IsPaidExchange; // w20
  System_String_o **v13; // x8
  ShopBuyItemListViewItemDraw_o *v14; // x0
  const MethodInfo *v15; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4A5774A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_12068/*"SHOP_QUEST_FREE_EXCHANGE_CLEARED"*/);
    sub_1B885B0(&StringLiteral_12070/*"SHOP_QUEST_PAID_EXCHANGE_CLEARED"*/);
    sub_1B885B0(&StringLiteral_19625/*"freeShopCondId"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1B885B0(&StringLiteral_11984/*"SHOP_ALREADY_GET"*/);
    byte_4A5774A = 1;
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
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      v7 = item->fields._Shop_k__BackingField;
      if ( v7 )
      {
        targetIds = v7->fields.targetIds;
        if ( targetIds )
        {
          if ( !targetIds->max_length )
            sub_1B88814(this, item);
          if ( this )
          {
            this = (ShopBuyItemListViewItemDraw_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                      &entity,
                                                      targetIds->m_Items[1],
                                                      (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v9 = item->fields._Shop_k__BackingField;
              if ( !v9 )
                goto LABEL_33;
              if ( v9->fields.purchaseType == 4 )
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
                  v10 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11984/*"SHOP_ALREADY_GET"*/,
                                                           0LL);
                  ShopBuyItemListViewItemDraw__SetLabelText(v10, v4->fields.textOnMask, (System_String_o *)v10, v11);
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
                        (Il2CppObject *)StringLiteral_19625/*"freeShopCondId"*/,
                        (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                    v13 = (System_String_o **)&StringLiteral_12070/*"SHOP_QUEST_PAID_EXCHANGE_CLEARED"*/;
                    if ( !IsPaidExchange )
                      v13 = (System_String_o **)&StringLiteral_12068/*"SHOP_QUEST_FREE_EXCHANGE_CLEARED"*/;
                    v14 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get(*v13, 0LL);
                    ShopBuyItemListViewItemDraw__SetLabelText(v14, v4->fields.textOnMask, (System_String_o *)v14, v15);
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
    sub_1B8880C(this, item);
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
  struct ShopEntity_o *v39; // x8
  struct ShopEntity_o *v40; // x8
  Il2CppObject *NumberFormat; // x0

  v16 = this;
  if ( (byte_4A57746 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_12016/*"SHOP_BUY_PREPARATION"*/);
    sub_1B885B0(&StringLiteral_8310/*"LOTTERY_REST_NUM"*/);
    sub_1B885B0(&StringLiteral_14801/*"UNIT_REST_NONE"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1B885B0(&StringLiteral_3907/*"COUNT_INFO"*/);
    byte_4A57746 = 1;
  }
  *isNotServantGet = 0;
  *isNotServantHaving = 0;
  *isServantHaving = 0;
  *isNotCostumeGet = 0;
  *isNotCommandCodeGet = 0;
  if ( !isInPreparation )
  {
    if ( !item )
      goto LABEL_58;
LABEL_11:
    Shop_k__BackingField = item->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_29;
    if ( Shop_k__BackingField->fields.limitNum > 0 )
    {
      this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_58;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ShopBuyItemListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
      v21 = item->fields._Shop_k__BackingField;
      if ( !v21 || !MasterData_object )
        goto LABEL_58;
      this = (ShopBuyItemListViewItemDraw_o *)UserShopMaster__GetEntityDefinitely(
                                                (UserShopMaster_o *)MasterData_object,
                                                (int64_t)this,
                                                v21->fields.baseShopId,
                                                0LL);
      v22 = item->fields._Shop_k__BackingField;
      if ( v22 )
      {
        limitNum = v22->fields.limitNum;
        if ( !this )
          goto LABEL_58;
      }
      else
      {
        limitNum = 0;
        if ( !this )
          goto LABEL_58;
      }
      v36 = limitNum - HIDWORD(this->fields.m_CancellationTokenSource);
      if ( v36 >= 1 && (!v22 || !ShopEntity__IsSoldOut(item->fields._Shop_k__BackingField, 0LL)) )
      {
        restCountLabel = v16->fields.restCountLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3907/*"COUNT_INFO"*/, 0LL);
        goto LABEL_68;
      }
      if ( !item->fields._IsNotHavingShopItemReceived_k__BackingField )
        goto LABEL_9;
      restCountLabel = v16->fields.restCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
LABEL_49:
      v29 = &StringLiteral_14801/*"UNIT_REST_NONE"*/;
      goto LABEL_50;
    }
    if ( ShopEntity__IsSoldOut(Shop_k__BackingField, 0LL) )
      goto LABEL_9;
    v27 = item->fields._Shop_k__BackingField;
    if ( v27 )
      purchaseType = v27->fields.purchaseType;
    else
LABEL_29:
      purchaseType = item->fields.itemEntity != 0LL;
    restCountLabel = v16->fields.restCountLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( purchaseType == 16 )
    {
      v29 = &StringLiteral_8310/*"LOTTERY_REST_NUM"*/;
      goto LABEL_50;
    }
    goto LABEL_49;
  }
  if ( !item )
    goto LABEL_58;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_58;
  baseSprite = (unsigned int)this->fields.baseSprite;
  if ( baseSprite > 9 || ((1 << baseSprite) & 0x2E0) == 0 )
  {
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_58;
    this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
    v30 = item->fields._Shop_k__BackingField;
    if ( !v30 )
      goto LABEL_58;
    v31 = (ShopReleaseMaster_o *)this;
    if ( !this )
      goto LABEL_58;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(
                                              (ShopReleaseMaster_o *)this,
                                              v30->fields.id,
                                              38,
                                              0LL);
    *isNotServantGet = (unsigned __int8)this & 1;
    v32 = item->fields._Shop_k__BackingField;
    if ( !v32 )
      goto LABEL_58;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v31, v32->fields.id, 41, 0LL);
    *isNotServantHaving = (unsigned __int8)this & 1;
    v33 = item->fields._Shop_k__BackingField;
    if ( !v33 )
      goto LABEL_58;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v31, v33->fields.id, 40, 0LL);
    *isServantHaving = (unsigned __int8)this & 1;
    v34 = item->fields._Shop_k__BackingField;
    if ( !v34 )
      goto LABEL_58;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v31, v34->fields.id, 78, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v35 = 1;
    }
    else
    {
      v39 = item->fields._Shop_k__BackingField;
      if ( !v39 )
        goto LABEL_58;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v31, v39->fields.id, 79, 0LL);
      v35 = (unsigned __int8)this & 1;
    }
    *isNotCostumeGet = v35;
    v40 = item->fields._Shop_k__BackingField;
    if ( !v40 )
      goto LABEL_58;
    *isNotCommandCodeGet = ShopReleaseMaster__isExistCondType(v31, v40->fields.id, 108, 0LL);
    this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
    if ( !this )
      goto LABEL_58;
  }
  if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, 0LL) )
  {
LABEL_9:
    ShopBuyItemListViewItemDraw__ShowSoldOut(v16, item, v18);
    return;
  }
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
LABEL_58:
    sub_1B8880C(this, item);
  switch ( LODWORD(this->fields.baseSprite) )
  {
    case 2:
      goto LABEL_9;
    case 5:
    case 7:
    case 9:
      goto LABEL_23;
    case 6:
      if ( !ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)this, 0, 0LL) )
        goto LABEL_72;
LABEL_23:
      restCountLabel = v16->fields.restCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3907/*"COUNT_INFO"*/, 0LL);
      v26 = 0;
      goto LABEL_69;
    default:
      if ( *isNotServantGet || *isNotServantHaving || *isServantHaving || *isNotCostumeGet || *isNotCommandCodeGet )
      {
        restCountLabel = v16->fields.restCountLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3907/*"COUNT_INFO"*/, 0LL);
        v36 = *isServantHaving || *isNotServantHaving;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
LABEL_68:
        v26 = v36;
LABEL_69:
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v26, 0LL);
        v37 = (ShopBuyItemListViewItemDraw_o *)System_String__Format(v25, NumberFormat, 0LL);
        goto LABEL_70;
      }
LABEL_72:
      if ( ShopBuyItemListViewItem__IsPrepareTextOnMask(item, (const MethodInfo *)item) )
        goto LABEL_11;
      restCountLabel = v16->fields.restCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v29 = &StringLiteral_12016/*"SHOP_BUY_PREPARATION"*/;
      break;
  }
LABEL_50:
  v37 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v29, 0LL);
LABEL_70:
  ShopBuyItemListViewItemDraw__SetLabelText(v37, restCountLabel, (System_String_o *)v37, v38);
}


void __fastcall ShopBuyItemListViewItemDraw__SetSpriteActive(
        ShopBuyItemListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4A57740 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57740 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_1B8880C(gameObject, v7);
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

  if ( (byte_4A57741 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57741 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !sprite )
      sub_1B8880C(v6, v7);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__ShowSoldOut(
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
  if ( (byte_4A57751 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_12023/*"SHOP_BUY_SOLD_OUT"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57751 = 1;
  }
  if ( !item )
    goto LABEL_21;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_21;
  v5 = ShopEntity__checkFlag((ShopEntity_o *)this, 0x8000, 0LL);
  soldOutImage = (UnityEngine_Object_o *)v4->fields.soldOutImage;
  v7 = v5;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (System_String_o *)UnityEngine_Object__op_Inequality(0LL, soldOutImage, 0LL);
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
    sub_1B8880C(this, item);
  }
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    this = (ShopBuyItemListViewItemDraw_o *)v4->fields.soldOutImage;
    if ( !this )
      goto LABEL_21;
    this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  v12 = v4->fields.restCountLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12023/*"SHOP_BUY_SOLD_OUT"*/, 0LL);
  restCountLabel = v12;
  v11 = v8;
LABEL_20:
  ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v8, restCountLabel, v11, v9);
}


void __fastcall ShopBuyItemListViewItemDraw___SetNumText_b__59_0(
        ShopBuyItemListViewItemDraw_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *numTextLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_4A57753 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A57753 = 1;
  }
  numTextLabel = this->fields.numTextLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !numTextLabel )
    sub_1B8880C(NumberFormat, v7);
  UILabel__set_text(numTextLabel, NumberFormat, 0LL);
}