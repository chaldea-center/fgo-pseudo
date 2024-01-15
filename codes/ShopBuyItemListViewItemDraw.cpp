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

  if ( (byte_40FF7FB & 1) == 0 )
  {
    sub_B16FFC(&ShopBuyItemListViewItemDraw_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_19433/*"img_list_bg04"*/, v8);
    byte_40FF7FB = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ShopBuyItemListViewItemDraw_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_19433/*"img_list_bg04"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19433/*"img_list_bg04"*/;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall ShopBuyItemListViewItemDraw___ctor(ShopBuyItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ShopBuyItemListViewItemDraw__Awake(ShopBuyItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct UISprite_o *v10; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UISprite_o *v18; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_40FF7E4 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FF7E4 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL) )
  {
    v10 = this->fields.baseSprite;
    if ( !v10
      || (mAtlas = v10->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.baseAtlas,
            (System_Int32_array **)mAtlas,
            v4,
            v5,
            v6,
            v7,
            v8,
            v9),
          (v18 = this->fields.baseSprite) == 0LL) )
    {
      sub_B170D4();
    }
    mSpriteName = v18->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.baseSpriteName,
      (System_Int32_array **)mSpriteName,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
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
  WebViewManager_o *Instance; // x0
  void *MasterData_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x8
  SetItemMaster_o *v10; // x20
  unsigned __int64 v11; // x21
  int v12; // w8
  unsigned int v13; // w9
  __int64 v14; // x10

  if ( (byte_40FF7F8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SetItemMaster___, ids);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FF7F8 = 1;
  }
  if ( !ids )
    goto LABEL_20;
  if ( !*(_QWORD *)&ids->max_length )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_20:
    sub_B170D4();
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SetItemMaster___);
  v9 = *(_QWORD *)&ids->max_length;
  if ( (int)v9 < 1 )
    return 0;
  v10 = (SetItemMaster_o *)MasterData_WarQuestSelectionMaster;
  v11 = 0LL;
  while ( 1 )
  {
    if ( v11 >= (unsigned int)v9 )
    {
LABEL_21:
      sub_B17100(MasterData_WarQuestSelectionMaster, v7, v8);
      sub_B170A0();
    }
    if ( !v10 )
      goto LABEL_20;
    MasterData_WarQuestSelectionMaster = SetItemMaster__GetList(v10, ids->m_Items[v11 + 1], 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_20;
    v12 = *((_DWORD *)MasterData_WarQuestSelectionMaster + 6);
    if ( v12 >= 1 )
      break;
LABEL_17:
    LODWORD(v9) = ids->max_length;
    if ( (__int64)++v11 >= (int)v9 )
      return 0;
  }
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= v12 )
      goto LABEL_21;
    v14 = *((_QWORD *)MasterData_WarQuestSelectionMaster + (int)v13 + 4);
    if ( !v14 )
      goto LABEL_20;
    if ( *(_DWORD *)(v14 + 20) == 7 )
      return 1;
    if ( (int)++v13 >= v12 )
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
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x2
  struct ShopEntity_o *Shop_k__BackingField; // x8
  UserGameEntity_o *v11; // x21
  System_Int32_array *v12; // x19
  WebViewManager_o *v13; // x0
  UserItemMaster_o *v14; // x21
  int64_t UserId; // x0
  const MethodInfo *v16; // x2
  ShopEntity_o *v17; // x8
  int64_t v18; // x20
  int32_t ItemIDs; // w0
  UserItemEntity_o *EntityDefinitely; // x0
  const MethodInfo *v21; // x1
  __int64 v22; // x2
  int32_t stone; // w8
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v26; // x1
  unsigned int ItemCount; // w0
  __int64 v28; // x2
  const MethodInfo *v29; // x1
  unsigned __int64 v30; // x22
  int64_t v31; // x0
  const MethodInfo *v32; // x2
  int64_t v33; // x23
  int32_t v34; // w0
  unsigned int v36; // w0
  __int64 v37; // x2

  if ( (byte_40FF7F9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, item);
    sub_B16FFC(&int___TypeInfo, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FF7F9 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !item || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0LL )
LABEL_48:
    sub_B170D4();
  v11 = SelfUserGame;
  switch ( Shop_k__BackingField->fields.payType )
  {
    case 1:
      EntityDefinitely = (UserItemEntity_o *)sub_B17014(int___TypeInfo, 1LL, v9);
      if ( !v11 )
        goto LABEL_48;
      v12 = (System_Int32_array *)EntityDefinitely;
      if ( !EntityDefinitely )
        goto LABEL_48;
      if ( !EntityDefinitely->fields.itemId )
        goto LABEL_49;
      stone = v11->fields.stone;
      goto LABEL_45;
    case 2:
      EntityDefinitely = (UserItemEntity_o *)sub_B17014(int___TypeInfo, 1LL, v9);
      if ( !v11 )
        goto LABEL_48;
      v12 = (System_Int32_array *)EntityDefinitely;
      if ( !EntityDefinitely )
        goto LABEL_48;
      if ( !EntityDefinitely->fields.itemId )
        goto LABEL_49;
      stone = v11->fields.qp;
      goto LABEL_45;
    case 4:
      EntityDefinitely = (UserItemEntity_o *)sub_B17014(int___TypeInfo, 1LL, v9);
      if ( !v11 )
        goto LABEL_48;
      v12 = (System_Int32_array *)EntityDefinitely;
      if ( !EntityDefinitely )
        goto LABEL_48;
      if ( !EntityDefinitely->fields.itemId )
        goto LABEL_49;
      stone = v11->fields.mana;
      goto LABEL_45;
    case 6:
    case 0xB:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_48;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
      ItemCount = ShopBuyItemListViewItem__get_ItemCount(item, v26);
      v12 = (System_Int32_array *)sub_B17014(int___TypeInfo, ItemCount, v28);
      if ( ShopBuyItemListViewItem__get_ItemCount(item, v29) < 1 )
        return v12;
      v30 = 0LL;
      break;
    case 8:
    case 9:
    case 0xC:
      v12 = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v9);
      v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v13 )
        goto LABEL_48;
      v14 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v13,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v17 = item->fields._Shop_k__BackingField;
      if ( !v17 )
        goto LABEL_48;
      v18 = UserId;
      ItemIDs = ShopEntity__GetItemIDs(v17, 0, v16);
      if ( !v14 )
        goto LABEL_48;
      EntityDefinitely = UserItemMaster__GetEntityDefinitely(v14, v18, ItemIDs, 0LL);
      if ( !EntityDefinitely || !v12 )
        goto LABEL_48;
      if ( !v12->max_length )
        goto LABEL_49;
      stone = EntityDefinitely->fields.num;
      goto LABEL_45;
    case 0xA:
      EntityDefinitely = (UserItemEntity_o *)sub_B17014(int___TypeInfo, 1LL, v9);
      if ( !v11 )
        goto LABEL_48;
      v12 = (System_Int32_array *)EntityDefinitely;
      if ( !EntityDefinitely )
        goto LABEL_48;
      if ( !EntityDefinitely->fields.itemId )
        goto LABEL_49;
      stone = v11->fields.rarePri;
LABEL_45:
      v12->m_Items[1] = stone;
      return v12;
    default:
      v36 = ShopBuyItemListViewItem__get_ItemCount(item, v8);
      return (System_Int32_array *)sub_B17014(int___TypeInfo, v36, v37);
  }
  do
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v31 = NetworkManager__get_UserId(0LL);
    if ( !item->fields._Shop_k__BackingField )
      goto LABEL_48;
    v33 = v31;
    v34 = ShopEntity__GetItemIDs(item->fields._Shop_k__BackingField, v30, v32);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_48;
    EntityDefinitely = UserItemMaster__GetEntityDefinitely(MasterData_WarQuestSelectionMaster, v33, v34, 0LL);
    if ( !EntityDefinitely || !v12 )
      goto LABEL_48;
    if ( v30 >= v12->max_length )
    {
LABEL_49:
      sub_B17100(EntityDefinitely, v21, v22);
      sub_B170A0();
    }
    v12->m_Items[++v30] = EntityDefinitely->fields.num;
  }
  while ( (__int64)v30 < ShopBuyItemListViewItem__get_ItemCount(item, v21) );
  return v12;
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
  if ( (byte_40FF7EB & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19667/*"img_txt_shop"*/, item);
    sub_B16FFC(&StringLiteral_19655/*"img_txt_quest"*/, v6);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B16FFC(&StringLiteral_19589/*"img_txt_bgm"*/, v7);
    byte_40FF7EB = 1;
  }
  if ( !item || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0LL )
    sub_B170D4();
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
      v12 = &StringLiteral_19655/*"img_txt_quest"*/;
      goto LABEL_11;
    case 7:
    case 9:
LABEL_6:
      v11 = v5->fields.bandSprite;
      p_bandSprite = &v5->fields.bandSprite;
      v9 = v11;
      v12 = &StringLiteral_19667/*"img_txt_shop"*/;
      goto LABEL_11;
    case 0xF:
      v16 = v5->fields.bandSprite;
      p_bandSprite = &v5->fields.bandSprite;
      v9 = v16;
      v12 = &StringLiteral_19589/*"img_txt_bgm"*/;
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
  UnityEngine_Object_o *baseSprite; // x20
  UIWidget_o *v10; // x19
  UICommonButtonColor_c *v11; // x0
  struct UICommonButton_o *v12; // x0
  UICommonButton_o *v13; // x0
  struct UICommonButton_o *v14; // x0

  if ( (byte_40FF7F1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isInPreparation);
    sub_B16FFC(&UICommonButtonColor_TypeInfo, v7);
    byte_40FF7F1 = 1;
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
      v10 = (UIWidget_o *)this->fields.baseSprite;
      v11 = UICommonButtonColor_TypeInfo;
      if ( (BYTE3(UICommonButtonColor_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UICommonButtonColor_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
        v11 = UICommonButtonColor_TypeInfo;
      }
      if ( v10 )
      {
        UIWidget__set_color(v10, v11->static_fields->normal, 0LL);
        return;
      }
LABEL_21:
      sub_B170D4();
    }
  }
  else
  {
    v12 = this->fields.baseButton;
    if ( !v12 )
      goto LABEL_21;
    ((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))v12->klass->vtable._5_set_isEnabled.method)(
      v12,
      !isInPreparation,
      v12->klass->vtable._6_OnInit.methodPtr);
    v13 = this->fields.baseButton;
    if ( !v13 )
      goto LABEL_21;
    UICommonButton__SetColliderEnable(v13, dispMode == 3 || isInPreparation, 1, 0LL);
    v14 = this->fields.baseButton;
    if ( !v14 )
      goto LABEL_21;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v14->klass->vtable._14_SetState.method)(
      v14,
      0LL,
      1LL,
      v14->klass->vtable._15_OnPress.methodPtr);
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
  struct ShopEntity_o *Shop_k__BackingField; // x0
  int32_t v10; // w0
  int bgImageId; // t1
  UISprite_o *v12; // x21
  System_String_o *v13; // x0
  System_String_o *v14; // x22
  UISprite_o *v15; // x0
  struct ShopEntity_o *v16; // x8
  UISprite_o *v17; // x20
  ShopBuyItemListViewItemDraw_c *v18; // x0
  System_String_o **p_BASE_IMG_LIMIT_MATERIAL; // x8

  if ( (byte_40FF7EC & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&ShopBuyItemListViewItemDraw_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_22019/*"shop_item_menu_"*/, v7);
    byte_40FF7EC = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL) )
  {
    if ( item )
    {
      Shop_k__BackingField = item->fields._Shop_k__BackingField;
      if ( Shop_k__BackingField )
      {
        bgImageId = Shop_k__BackingField->fields.bgImageId;
        v10 = (_DWORD)Shop_k__BackingField + 124;
        if ( bgImageId >= 1 )
        {
          v12 = this->fields.baseSprite;
          v13 = System_Int32__ToString(v10, 0LL);
          v14 = System_String__Concat_43743732((System_String_o *)StringLiteral_22019/*"shop_item_menu_"*/, v13, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          if ( AtlasManager__SetShopBanner_28586476(v12, v14, 0LL) )
            return;
        }
      }
      v15 = this->fields.baseSprite;
      if ( v15 )
      {
        UISprite__set_atlas(v15, this->fields.baseAtlas, 0LL);
        v16 = item->fields._Shop_k__BackingField;
        if ( v16 )
        {
          v17 = this->fields.baseSprite;
          if ( v16->fields.shopType == 9 )
          {
            v18 = ShopBuyItemListViewItemDraw_TypeInfo;
            if ( (BYTE3(ShopBuyItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ShopBuyItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ShopBuyItemListViewItemDraw_TypeInfo);
              v18 = ShopBuyItemListViewItemDraw_TypeInfo;
            }
            p_BASE_IMG_LIMIT_MATERIAL = &v18->static_fields->BASE_IMG_LIMIT_MATERIAL;
            if ( !v17 )
              goto LABEL_25;
          }
          else
          {
            p_BASE_IMG_LIMIT_MATERIAL = &this->fields.baseSpriteName;
            if ( !v17 )
              goto LABEL_25;
          }
          UISprite__set_spriteName(v17, *p_BASE_IMG_LIMIT_MATERIAL, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_B170D4();
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetButtonActive(
        ShopBuyItemListViewItemDraw_o *this,
        UICommonButton_o *button,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FF7E8 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, button);
    byte_40FF7E8 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)button, 0LL, 0LL) )
  {
    if ( !button || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)button, 0LL)) == 0LL )
      sub_B170D4();
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
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *iconSprite; // x19

  if ( (byte_40FF7F5 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, itemIcon);
    byte_40FF7F5 = 1;
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
    else if ( CommonConsumeEntity__get_IsAp(commonConsumeEntity, 0LL) )
    {
      if ( !itemIcon )
        sub_B170D4();
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

  if ( (byte_40FF7F7 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, isRarePriShopPurchased);
    sub_B16FFC(&StringLiteral_12112/*"SHOP_INDEFINITE_PERIOD"*/, v11);
    sub_B16FFC(&StringLiteral_13322/*"TIME_REST2_NONE"*/, v12);
    byte_40FF7F7 = 1;
  }
  if ( activeTime <= 0 )
  {
    restTimeLabel = this->fields.restTimeLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    RestTime2 = LocalizationManager__Get((System_String_o *)StringLiteral_13322/*"TIME_REST2_NONE"*/, 0LL);
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
      RestTime2 = LocalizationManager__Get((System_String_o *)StringLiteral_12112/*"SHOP_INDEFINITE_PERIOD"*/, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FF7F6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, eventItemIcon);
    byte_40FF7F6 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)eventItemIcon, 0LL, 0LL) )
  {
    if ( !eventItemIcon )
      sub_B170D4();
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
  struct ShopEntity_o *Shop_k__BackingField; // x8
  int v8; // w20
  struct ShopEntity_o *v9; // x8
  struct CommonConsumeEntity_array *CommonConsumeEntities_k__BackingField; // x22
  int max_length; // w8
  CommonConsumeEntity_o *v12; // x2
  ItemIconComponent_o *eventItemIcon; // x1
  struct ShopEntity_o *ItemCount; // x0
  const MethodInfo *v15; // x1
  __int64 v16; // x2
  const MethodInfo *v17; // x4
  struct ItemEntity_array *v18; // x8
  ItemIconComponent_o *eventItemIcon2; // x1
  ItemEntity_o *v20; // x2
  ShopBuyItemListViewItemDraw_o *v21; // x0
  const MethodInfo *v22; // x4
  bool v23; // w3
  struct ItemEntity_array *EventItemEntities_k__BackingField; // x8
  struct ItemEntity_array *v25; // x8
  CommonConsumeEntity_o *v26; // x2

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
      ShopBuyItemListViewItemDraw__SetEventItemIcon(v21, this->fields.eventItemIcon1, 0LL, 0, v22);
      eventItemIcon2 = this->fields.eventItemIcon2;
      v20 = 0LL;
      v23 = 0;
LABEL_28:
      ShopBuyItemListViewItemDraw__SetEventItemIcon(
        (ShopBuyItemListViewItemDraw_o *)ItemCount,
        eventItemIcon2,
        v20,
        v23,
        v17);
      return;
    }
    ItemCount = (struct ShopEntity_o *)ShopBuyItemListViewItem__get_ItemCount(item, (const MethodInfo *)item);
    if ( (int)ItemCount >= 2 )
    {
      EventItemEntities_k__BackingField = item->fields._EventItemEntities_k__BackingField;
      if ( EventItemEntities_k__BackingField )
      {
        if ( !EventItemEntities_k__BackingField->max_length )
          goto LABEL_37;
        ShopBuyItemListViewItemDraw__SetEventItemIcon(
          (ShopBuyItemListViewItemDraw_o *)ItemCount,
          this->fields.eventItemIcon1,
          EventItemEntities_k__BackingField->m_Items[0],
          v8,
          v17);
        v25 = item->fields._EventItemEntities_k__BackingField;
        if ( v25 )
        {
          if ( v25->max_length <= 1 )
            goto LABEL_37;
          eventItemIcon2 = this->fields.eventItemIcon2;
          v20 = v25->m_Items[1];
          goto LABEL_27;
        }
      }
    }
    else
    {
      ItemCount = item->fields._Shop_k__BackingField;
      if ( ItemCount )
      {
        ItemCount = (struct ShopEntity_o *)ShopEntity__IsSoldOut(ItemCount, v15);
        if ( ((unsigned __int8)ItemCount & 1) != 0 && item->fields._IsNotHavingShopItemReceived_k__BackingField )
          return;
      }
      v18 = item->fields._EventItemEntities_k__BackingField;
      if ( v18 )
      {
        if ( !v18->max_length )
          goto LABEL_37;
        eventItemIcon2 = this->fields.eventItemIcon;
        v20 = v18->m_Items[0];
LABEL_27:
        v23 = v8;
        goto LABEL_28;
      }
    }
LABEL_36:
    sub_B170D4();
  }
  max_length = CommonConsumeEntities_k__BackingField->max_length;
  if ( max_length == 1 )
  {
    v12 = CommonConsumeEntities_k__BackingField->m_Items[0];
    if ( v12 )
    {
      eventItemIcon = this->fields.eventItemIcon;
LABEL_34:
      ShopBuyItemListViewItemDraw__SetCommonConsumeIcon(this, eventItemIcon, v12, v8, v4);
      return;
    }
    return;
  }
  if ( max_length < 2 )
    return;
  v26 = CommonConsumeEntities_k__BackingField->m_Items[0];
  if ( v26 )
  {
    ShopBuyItemListViewItemDraw__SetCommonConsumeIcon(this, this->fields.eventItemIcon1, v26, v8, v4);
    if ( CommonConsumeEntities_k__BackingField->max_length <= 1 )
    {
LABEL_37:
      sub_B17100(ItemCount, v15, v16);
      sub_B170A0();
    }
  }
  v12 = CommonConsumeEntities_k__BackingField->m_Items[1];
  if ( v12 )
  {
    eventItemIcon = this->fields.eventItemIcon2;
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
  if ( (byte_40FF7F0 & 1) == 0 )
  {
    this = (ShopBuyItemListViewItemDraw_o *)sub_B16FFC(&StringLiteral_9280/*"NONE"*/, item);
    byte_40FF7F0 = 1;
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
        if ( System_String__IsNullOrEmpty(v8->fields.infoMessage, 0LL) )
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
                                                    (System_String_o *)StringLiteral_9280/*"NONE"*/,
                                                    0LL);
          goto LABEL_19;
        }
      }
LABEL_21:
      sub_B170D4();
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
  const MethodInfo *v41; // x3
  struct ShopEntity_o *Shop_k__BackingField; // x0
  UnityEngine_Object_o *chocolateSprite; // x23
  _BOOL8 v44; // x0
  const MethodInfo *v45; // x3
  UnityEngine_Component_o *v46; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v48; // x1
  bool IsChocolateSvtEquip; // w0
  ShopBuyItemListViewItemDraw_o *v50; // x0
  const MethodInfo *v51; // x3
  UnityEngine_Object_o *soldOutImage; // x23
  UnityEngine_Component_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  bool v55; // w23
  const MethodInfo *v56; // x2
  ShopEntity_o *v57; // x24
  UILabel_o *textOnMask; // x25
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x3
  const MethodInfo *v61; // x5
  struct ShopEntity_o *v62; // x8
  UnityEngine_Object_o *priceInfo1; // x22
  const MethodInfo *v64; // x2
  struct ShopEntity_o *v65; // x8
  int32_t payType; // w8
  UnityEngine_GameObject_o *v67; // x0
  UnityEngine_GameObject_o *v68; // x0
  UnityEngine_GameObject_o *v69; // x0
  const MethodInfo *v70; // x3
  ShopBuyItemListViewItemDraw_o *v71; // x0
  const MethodInfo *v72; // x3
  UnityEngine_GameObject_o *v73; // x0
  UnityEngine_GameObject_o *v74; // x22
  const MethodInfo *v75; // x1
  int32_t ItemCount; // w0
  UnityEngine_GameObject_o *v77; // x22
  const MethodInfo *v78; // x1
  int32_t v79; // w0
  bool v80; // w1
  UnityEngine_GameObject_o *priceInfo2; // x0
  const MethodInfo *v82; // x3
  const MethodInfo *v83; // x3
  ShopEntity_o *v84; // x0
  const MethodInfo *v85; // x1
  _BOOL4 v86; // w22
  ShopEntity_o *v87; // x0
  struct ShopEntity_o *v88; // x8
  bool IsEligibleForFreeFeaturesTheCostumeRelease; // w0
  _BOOL4 v90; // w23
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *script; // x0
  const MethodInfo *v92; // x1
  _BOOL4 v93; // w8
  UnityEngine_GameObject_o *freeExchangeConditionNoticeRoot; // x0
  struct ShopEntity_o *v95; // x8
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v96; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v97; // x0
  Il2CppObject *v98; // x21
  WebViewManager_o *Instance; // x0
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  struct ShopEntity_o *v102; // x8
  UserShopEntity_o *EntityDefinitely; // x0
  const MethodInfo *v104; // x1
  UserShopEntity_o *v105; // x22
  bool IsFulFilledFreeExchangeCondition; // w0
  const MethodInfo *v107; // x1
  ShopEntity_o *v108; // x0
  System_String_o **v109; // x8
  System_String_o **v110; // x9
  struct CommonConsumeEntity_array *CommonConsumeEntities_k__BackingField; // x22
  UnityEngine_GameObject_o *priceInfoFree; // x0
  UnityEngine_GameObject_o *v113; // x0
  ShopEntity_o *v114; // x0
  bool v115; // zf
  UnityEngine_GameObject_o *v116; // x0
  System_String_o *v117; // x20
  System_String_o *v118; // x0
  System_String_o *v119; // x0
  _BOOL8 v120; // x0
  __int64 v121; // x1
  __int64 v122; // x2
  struct UILabel_o *freeExchangeConditionNoticeLabel; // x8
  int mWidth; // w8
  struct UISprite_array *freeExchangeConditionNoticeBgSprites; // x21
  int v126; // w9
  int max_length; // w8
  unsigned int v128; // w22
  int32_t v129; // w19
  Il2CppClass **v130; // x8
  UISprite_o *v131; // x20
  const MethodInfo *v132; // [xsp+0h] [xbp-70h]
  const MethodInfo *v133; // [xsp+0h] [xbp-70h]
  bool isNotCommandCodeGet; // [xsp+Ch] [xbp-64h] BYREF
  bool isNotCostumeGet; // [xsp+10h] [xbp-60h] BYREF
  bool isServantHaving; // [xsp+14h] [xbp-5Ch] BYREF
  bool isNotServantHaving; // [xsp+18h] [xbp-58h] BYREF
  bool isNotServantGet; // [xsp+1Ch] [xbp-54h] BYREF
  System_String_o *itemName; // [xsp+20h] [xbp-50h] BYREF
  System_String_o *message; // [xsp+28h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_40FF7E5 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&ShopBuyItemUtility_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&StringLiteral_12034/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/, v15);
    sub_B16FFC(&StringLiteral_18816/*"freeShopCondMessage"*/, v16);
    sub_B16FFC(&StringLiteral_12118/*"SHOP_PAID_EXCHANGE_CONDITIONS"*/, v17);
    sub_B16FFC(&StringLiteral_18815/*"freeShopCondId"*/, v18);
    sub_B16FFC(&StringLiteral_19729/*"info_base"*/, v19);
    sub_B16FFC(&StringLiteral_1/*""*/, v20);
    sub_B16FFC(&StringLiteral_12035/*"SHOP_ACHIEVEMENT_PAID_EXCHANGE_CONDITIONS"*/, v21);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B16FFC(&StringLiteral_12092/*"SHOP_FREE_EXCHANGE_CONDITIONS"*/, v22);
    byte_40FF7E5 = 1;
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
    ShopBuyItemListViewItemDraw__SetSpriteActive(v71, v6->fields.addRangeSprite, 0, v72);
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
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_105;
  ShopBuyItemUtility__SetShopHaveStatusIcon(
    Shop_k__BackingField,
    v6->fields.possessionSprite,
    (Shop_k__BackingField->fields.flag & 0x4000) != 0,
    v41);
  chocolateSprite = (UnityEngine_Object_o *)v6->fields.chocolateSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v44 = UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL);
  if ( v44 )
  {
    v46 = (UnityEngine_Component_o *)v6->fields.chocolateSprite;
    if ( !v46 )
      goto LABEL_105;
    gameObject = UnityEngine_Component__get_gameObject(v46, 0LL);
    IsChocolateSvtEquip = ShopBuyItemListViewItem__get_IsChocolateSvtEquip(item, v48);
    if ( !gameObject )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(gameObject, IsChocolateSvtEquip, 0LL);
  }
  ShopBuyItemListViewItemDraw__SetLabelText(
    (ShopBuyItemListViewItemDraw_o *)v44,
    v6->fields.textOnMask,
    (System_String_o *)StringLiteral_1/*""*/,
    v45);
  ShopBuyItemListViewItemDraw__SetLabelText(v50, v6->fields.prepareTextOnMask, (System_String_o *)StringLiteral_1/*""*/, v51);
  soldOutImage = (UnityEngine_Object_o *)v6->fields.soldOutImage;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(0LL, soldOutImage, 0LL) )
  {
    v53 = (UnityEngine_Component_o *)v6->fields.soldOutImage;
    if ( !v53 )
      goto LABEL_105;
    v54 = UnityEngine_Component__get_gameObject(v53, 0LL);
    if ( !v54 )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(v54, 0, 0LL);
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
    v132);
  ShopBuyItemListViewItemDraw__SetMask(
    v6,
    item,
    v27,
    isNotServantGet,
    isNotServantHaving,
    isServantHaving,
    isNotCostumeGet,
    isNotCommandCodeGet,
    v133);
  v57 = item->fields._Shop_k__BackingField;
  textOnMask = v6->fields.textOnMask;
  if ( (BYTE3(ShopBuyItemUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
  }
  ShopBuyItemUtility__SetAddTextOnMask(v57, textOnMask, v56);
  ShopBuyItemListViewItemDraw__SetInfoButton(v6, item, v55, v59);
  ShopBuyItemListViewItemDraw__SetBaseButton(v6, v55, mode, v60);
  v62 = item->fields._Shop_k__BackingField;
  if ( !v62 )
LABEL_105:
    sub_B170D4();
  ShopBuyItemListViewItemDraw__SetEventEndTime(
    v6,
    item->fields._IsRarePriShopPurchased_k__BackingField,
    (v62->fields.flag & 0x40000) != 0,
    v62->fields.closedAt,
    item->fields._EnterTime_k__BackingField,
    v61);
  priceInfo1 = (UnityEngine_Object_o *)v6->fields.priceInfo1;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(priceInfo1, 0LL, 0LL) )
    return;
  v65 = item->fields._Shop_k__BackingField;
  if ( !v65 )
    goto LABEL_39;
  payType = v65->fields.payType;
  if ( payType == 14 )
  {
    CommonConsumeEntities_k__BackingField = item->fields._CommonConsumeEntities_k__BackingField;
    if ( !CommonConsumeEntities_k__BackingField )
      goto LABEL_44;
    priceInfoFree = v6->fields.priceInfoFree;
    if ( !priceInfoFree )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(priceInfoFree, 0, 0LL);
    v113 = v6->fields.priceInfo1;
    if ( !v113 )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(v113, (signed int)CommonConsumeEntities_k__BackingField->max_length < 2, 0LL);
    priceInfo2 = v6->fields.priceInfo2;
    if ( !priceInfo2 )
      goto LABEL_105;
    v80 = (signed int)CommonConsumeEntities_k__BackingField->max_length > 1;
    goto LABEL_43;
  }
  if ( payType != 13 )
  {
LABEL_39:
    v73 = v6->fields.priceInfoFree;
    if ( !v73 )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(v73, 0, 0LL);
    v74 = v6->fields.priceInfo1;
    ItemCount = ShopBuyItemListViewItem__get_ItemCount(item, v75);
    if ( !v74 )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(v74, ItemCount < 2, 0LL);
    v77 = v6->fields.priceInfo2;
    v79 = ShopBuyItemListViewItem__get_ItemCount(item, v78);
    if ( !v77 )
      goto LABEL_105;
    v80 = v79 > 1;
    priceInfo2 = v77;
LABEL_43:
    UnityEngine_GameObject__SetActive(priceInfo2, v80, 0LL);
    ShopBuyItemListViewItemDraw__SetPriceIconText(v6, item, v27, v82);
    ShopBuyItemListViewItemDraw__SetEventItemIconText(v6, item, v27, v83);
    goto LABEL_44;
  }
  v67 = v6->fields.priceInfoFree;
  if ( !v67 )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive(v67, 1, 0LL);
  v68 = v6->fields.priceInfo1;
  if ( !v68 )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive(v68, 0, 0LL);
  v69 = v6->fields.priceInfo2;
  if ( !v69 )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive(v69, 0, 0LL);
  ShopBuyItemListViewItemDraw__SetPriceIconText(v6, item, v27, v70);
LABEL_44:
  v84 = item->fields._Shop_k__BackingField;
  if ( !v84 )
    goto LABEL_105;
  v86 = 0;
  if ( ShopEntity__isQuestNotClearItemClosed(v84, 0, v64) )
  {
    v87 = item->fields._Shop_k__BackingField;
    if ( !v87 )
      goto LABEL_105;
    v86 = !ShopEntity__IsSoldOut(v87, v85);
  }
  v88 = item->fields._Shop_k__BackingField;
  if ( !v88 )
    goto LABEL_105;
  if ( v88->fields.purchaseType == 14 )
  {
    IsEligibleForFreeFeaturesTheCostumeRelease = ShopEntity__IsEligibleForFreeFeaturesTheCostumeRelease(
                                                   item->fields._Shop_k__BackingField,
                                                   v85);
    v88 = item->fields._Shop_k__BackingField;
    if ( !v88 )
      goto LABEL_105;
    v90 = !IsEligibleForFreeFeaturesTheCostumeRelease;
  }
  else
  {
    v90 = 0;
  }
  script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v88->fields.script;
  if ( !script )
    goto LABEL_105;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         script,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_18815/*"freeShopCondId"*/,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    && (!v86 || !v27) )
  {
    v114 = item->fields._Shop_k__BackingField;
    if ( !v114 )
      goto LABEL_105;
    v93 = !ShopEntity__IsAfterTheFreeShopReleaseDate(v114, v92);
  }
  else
  {
    v93 = 1;
  }
  if ( v93 || v90 )
    goto LABEL_58;
  v95 = item->fields._Shop_k__BackingField;
  if ( !v95 )
    goto LABEL_105;
  v96 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v95->fields.script;
  if ( !v96 )
    goto LABEL_105;
  v97 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
          v96,
          (System_Type_o *)StringLiteral_18816/*"freeShopCondMessage"*/,
          (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v97 )
    goto LABEL_105;
  v98 = (Il2CppObject *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v97->klass->vtable[3].method)(
                          v97,
                          v97->klass->vtable[4].methodPtr);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_105;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v102 = item->fields._Shop_k__BackingField;
  if ( !v102 )
    goto LABEL_105;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_105;
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       UserId,
                       v102->fields.id,
                       0LL);
  if ( !item->fields._Shop_k__BackingField )
    goto LABEL_105;
  v105 = EntityDefinitely;
  IsFulFilledFreeExchangeCondition = ShopEntity__IsFulFilledFreeExchangeCondition(
                                       item->fields._Shop_k__BackingField,
                                       v104);
  if ( !v105 )
    goto LABEL_105;
  if ( v105->fields.num )
  {
    v108 = item->fields._Shop_k__BackingField;
    if ( !v108 )
      goto LABEL_105;
    if ( !ShopEntity__IsPaidExchange(v108, v107) )
    {
LABEL_58:
      freeExchangeConditionNoticeRoot = v6->fields.freeExchangeConditionNoticeRoot;
      if ( freeExchangeConditionNoticeRoot )
      {
        UnityEngine_GameObject__SetActive(freeExchangeConditionNoticeRoot, 0, 0LL);
        return;
      }
      goto LABEL_105;
    }
    IsFulFilledFreeExchangeCondition = UserShopEntity__get_IsReturnRarePriShop(v105, 0LL);
    v109 = (System_String_o **)&StringLiteral_12118/*"SHOP_PAID_EXCHANGE_CONDITIONS"*/;
    v110 = (System_String_o **)&StringLiteral_12035/*"SHOP_ACHIEVEMENT_PAID_EXCHANGE_CONDITIONS"*/;
  }
  else
  {
    v109 = (System_String_o **)&StringLiteral_12092/*"SHOP_FREE_EXCHANGE_CONDITIONS"*/;
    v110 = (System_String_o **)&StringLiteral_12034/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/;
  }
  v115 = !IsFulFilledFreeExchangeCondition;
  v116 = v6->fields.freeExchangeConditionNoticeRoot;
  if ( !v115 )
    v109 = v110;
  if ( !v116 )
    goto LABEL_105;
  v117 = *v109;
  UnityEngine_GameObject__SetActive(v116, 1, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v118 = LocalizationManager__Get(v117, 0LL);
  v119 = System_String__Format(v118, v98, 0LL);
  if ( !v6->fields.freeExchangeConditionNoticeLabel )
    goto LABEL_105;
  UILabel__set_text(v6->fields.freeExchangeConditionNoticeLabel, v119, 0LL);
  freeExchangeConditionNoticeLabel = v6->fields.freeExchangeConditionNoticeLabel;
  if ( !freeExchangeConditionNoticeLabel )
    goto LABEL_105;
  mWidth = freeExchangeConditionNoticeLabel->fields.mWidth;
  freeExchangeConditionNoticeBgSprites = v6->fields.freeExchangeConditionNoticeBgSprites;
  v126 = mWidth >= 512 ? 512 : mWidth;
  if ( !freeExchangeConditionNoticeBgSprites )
    goto LABEL_105;
  max_length = freeExchangeConditionNoticeBgSprites->max_length;
  if ( max_length >= 1 )
  {
    v128 = 0;
    v129 = v126 + 16;
    while ( 1 )
    {
      if ( v128 >= max_length )
      {
        sub_B17100(v120, v121, v122);
        sub_B170A0();
      }
      v130 = &freeExchangeConditionNoticeBgSprites->obj.klass + (int)v128;
      v131 = (UISprite_o *)v130[4];
      if ( !v131 )
        break;
      UIWidget__set_width((UIWidget_o *)v130[4], v129, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      v120 = AtlasManager__SetEventUI(v131, (System_String_o *)StringLiteral_19729/*"info_base"*/, 0LL);
      max_length = freeExchangeConditionNoticeBgSprites->max_length;
      if ( (int)++v128 >= max_length )
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
  ItemIconComponent_o *itemIcon; // x0
  const MethodInfo *v8; // x2
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ItemIconComponent_o *v10; // x0
  ShopEntity_o *v11; // x0
  bool v12; // w0
  const MethodInfo *v13; // x1
  ItemIconComponent_o *v14; // x20
  struct ShopEntity_o *v15; // x0
  int32_t purchaseType; // w19
  int32_t TargetId; // w2
  int32_t imageId; // [xsp+Ch] [xbp-14h] BYREF

  imageId = 0;
  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    goto LABEL_17;
  ItemIconComponent__Clear(itemIcon, 0LL);
  if ( isInPreparation )
  {
    if ( !item )
      goto LABEL_17;
    Shop_k__BackingField = item->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_17;
    if ( (Shop_k__BackingField->fields.flag & 2) != 0 )
    {
      v10 = this->fields.itemIcon;
      if ( v10 )
      {
        ItemIconComponent__SetItemImage(v10, 8007, 0LL);
        return;
      }
LABEL_17:
      sub_B170D4();
    }
  }
  else if ( !item )
  {
    goto LABEL_17;
  }
  v11 = item->fields._Shop_k__BackingField;
  if ( !v11 )
    goto LABEL_17;
  v12 = ShopEntity__CheckEquipItem(v11, &imageId, v8);
  v14 = this->fields.itemIcon;
  if ( v12 )
  {
    if ( !v14 )
      goto LABEL_17;
    ItemIconComponent__SetEquipItemImage(v14, imageId, 0LL);
  }
  else
  {
    v15 = item->fields._Shop_k__BackingField;
    if ( v15 )
    {
      purchaseType = v15->fields.purchaseType;
      TargetId = ShopEntity__get_TargetId(v15, v13);
      if ( !v14 )
        goto LABEL_17;
    }
    else
    {
      TargetId = 0;
      purchaseType = item->fields.itemEntity != 0LL;
      if ( !v14 )
        goto LABEL_17;
    }
    ItemIconComponent__SetPurchase(v14, purchaseType, TargetId, imageId, 0LL);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetLabelActive(
        ShopBuyItemListViewItemDraw_o *this,
        UILabel_o *label,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FF7E6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, label);
    byte_40FF7E6 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL) )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetLabelText(
        ShopBuyItemListViewItemDraw_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  if ( (byte_40FF7E7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, label);
    byte_40FF7E7 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL) )
  {
    if ( !label )
      sub_B170D4();
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
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x2
  DataMasterBase_WarMaster__WarEntity__int__o *v33; // x0
  UILabel_o *v34; // x21
  System_String_o *v35; // x0
  const MethodInfo *v36; // x3
  UILabel_o *v37; // x1
  System_String_o *v38; // x2
  UnityEngine_Object_o *prepareTextOnMask; // x21
  const MethodInfo *v40; // x1
  UILabel_o *v41; // x19
  System_String_o *v42; // x0
  const MethodInfo *v43; // x3
  ShopEntity_o *Shop_k__BackingField; // x0
  const MethodInfo *v45; // x1
  _BOOL4 v46; // w23
  UnityEngine_Object_o *anotherBuyable; // x21
  System_Int32_array *AnotherPayItemIds; // x0
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x3
  UnityEngine_Object_o *anotherPayItemImage; // x21
  const MethodInfo *v52; // x1
  ShopEntity_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x21
  bool IsAnotherItemBuyable; // w0
  const MethodInfo *v56; // x1
  ShopEntity_o *v57; // x0
  const MethodInfo *v58; // x1
  ShopEntity_o *v59; // x0
  UISprite_o *v60; // x21
  int32_t list; // w22
  UISprite_o *maskSprite; // x1
  bool v63; // w2
  struct ShopEntity_o *v64; // x8
  WebViewManager_o *Instance; // x0
  ShopReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct ShopEntity_o *v67; // x8
  bool isQuestNotClearSet; // w0
  const MethodInfo *v69; // x1
  const MethodInfo *v70; // x2
  bool v71; // w20
  const MethodInfo *v72; // x1
  ShopEntity_o *v73; // x0
  const MethodInfo *v74; // x2
  WebViewManager_o *v75; // x0
  ShopReleaseMaster_o *v76; // x0
  struct ShopEntity_o *v77; // x8
  UILabel_o *v78; // x21
  struct System_Text_StringBuilder_o *sb; // x8
  WebViewManager_o *v80; // x0
  struct ShopEntity_o *v81; // x8
  struct System_Int32_array *targetIds; // x8
  ServantEntity_o *Entity; // x0
  __int64 *v84; // x8
  WebViewManager_o *v85; // x0
  ShopReleaseMaster_o *v86; // x0
  struct ShopEntity_o *v87; // x8
  UILabel_o *v88; // x21
  System_String_o *v89; // x0
  const MethodInfo *v90; // x3
  const MethodInfo *v91; // x1
  ShopEntity_o *v92; // x0
  struct ShopEntity_o *v93; // x8
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *script; // x0
  ShopEntity_o *v95; // x0
  UILabel_o *textOnMask; // x20
  System_String_o *v97; // x0
  UnityEngine_Component_o *v98; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t questId; // [xsp+Ch] [xbp-44h] BYREF

  v16 = this;
  if ( (byte_40FF7F2 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v18);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v20);
    sub_B16FFC(&LocalizationManager_TypeInfo, v21);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B16FFC(&StringLiteral_12086/*"SHOP_CANT_BUY"*/, v24);
    sub_B16FFC(&StringLiteral_12121/*"SHOP_QUEST_OPEN"*/, v25);
    sub_B16FFC(&StringLiteral_12119/*"SHOP_QUEST_ALREADY_CLEARED"*/, v26);
    sub_B16FFC(&StringLiteral_18815/*"freeShopCondId"*/, v27);
    sub_B16FFC(&StringLiteral_12060/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, v28);
    sub_B16FFC(&StringLiteral_1/*""*/, v29);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B16FFC(&StringLiteral_12038/*"SHOP_ALREADY_GET"*/, v30);
    byte_40FF7F2 = 1;
  }
  questId = 0;
  if ( !isInPreparation )
  {
    if ( !item )
      goto LABEL_133;
    Shop_k__BackingField = item->fields._Shop_k__BackingField;
    if ( Shop_k__BackingField
      && ShopEntity__IsSoldOut(Shop_k__BackingField, (const MethodInfo *)item)
      && !item->fields._IsNotHavingShopItemReceived_k__BackingField )
    {
      v95 = item->fields._Shop_k__BackingField;
      if ( !v95 )
        goto LABEL_133;
      v46 = !ShopEntity__IsAnotherItemBuyable(v95, v45);
    }
    else
    {
      v46 = 0;
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
        v53 = item->fields._Shop_k__BackingField;
        if ( !v53 )
          goto LABEL_133;
        v54 = v16->fields.anotherBuyable;
        IsAnotherItemBuyable = ShopEntity__IsAnotherItemBuyable(v53, v52);
        if ( !v54 )
          goto LABEL_133;
        UnityEngine_GameObject__SetActive(v54, IsAnotherItemBuyable, 0LL);
        v57 = item->fields._Shop_k__BackingField;
        if ( !v57 )
          goto LABEL_133;
        AnotherPayItemIds = ShopEntity__GetAnotherPayItemIds(v57, v56);
        if ( AnotherPayItemIds )
        {
          v59 = item->fields._Shop_k__BackingField;
          if ( !v59 )
            goto LABEL_133;
          v60 = v16->fields.anotherPayItemImage;
          v33 = (DataMasterBase_WarMaster__WarEntity__int__o *)ShopEntity__GetAnotherPayItemIds(v59, v58);
          if ( !v33 )
            goto LABEL_133;
          if ( !LODWORD(v33->fields._MasterName_k__BackingField) )
          {
LABEL_134:
            sub_B17100(v33, v31, v32);
            sub_B170A0();
          }
          list = (int32_t)v33->fields.list;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AnotherPayItemIds = (System_Int32_array *)AtlasManager__SetItem(v60, list, 0LL);
        }
      }
    }
    if ( v46 )
    {
      ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(v16, item, v49);
      maskSprite = v16->fields.maskSprite;
      v63 = 1;
LABEL_58:
      ShopBuyItemListViewItemDraw__SetSpriteActive(
        (ShopBuyItemListViewItemDraw_o *)AnotherPayItemIds,
        maskSprite,
        v63,
        v50);
      return;
    }
    v64 = item->fields._Shop_k__BackingField;
    if ( !v64 || v64->fields.purchaseType != 6 )
    {
      maskSprite = v16->fields.maskSprite;
      v63 = 0;
      goto LABEL_58;
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopReleaseMaster___),
          (v67 = item->fields._Shop_k__BackingField) == 0LL)
      || !MasterData_WarQuestSelectionMaster
      || (isQuestNotClearSet = ShopReleaseMaster__isQuestNotClearSet(
                                 MasterData_WarQuestSelectionMaster,
                                 v67->fields.id,
                                 &questId,
                                 0LL),
          !item->fields._Shop_k__BackingField) )
    {
LABEL_133:
      sub_B170D4();
    }
    if ( isQuestNotClearSet )
    {
      if ( !ShopEntity__isQuestNotClearItemClosed(item->fields._Shop_k__BackingField, 1, v70) )
      {
LABEL_56:
        v71 = 0;
LABEL_126:
        v98 = (UnityEngine_Component_o *)v16->fields.maskSprite;
        if ( v98 )
        {
          gameObject = UnityEngine_Component__get_gameObject(v98, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, v71, 0LL);
            return;
          }
        }
        goto LABEL_133;
      }
    }
    else if ( !ShopEntity__isExpireItemClosed(item->fields._Shop_k__BackingField, v69) )
    {
      goto LABEL_56;
    }
    textOnMask = v16->fields.textOnMask;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v97 = LocalizationManager__Get((System_String_o *)StringLiteral_12121/*"SHOP_QUEST_OPEN"*/, 0LL);
    if ( !textOnMask )
      goto LABEL_133;
    UILabel__set_text(textOnMask, v97, 0LL);
    v71 = 1;
    goto LABEL_126;
  }
  ShopBuyItemListViewItemDraw__SetSpriteActive(this, v16->fields.maskSprite, 1, (const MethodInfo *)isNotServantGet);
  if ( !item )
    goto LABEL_133;
  v33 = (DataMasterBase_WarMaster__WarEntity__int__o *)item->fields._Shop_k__BackingField;
  if ( !v33 )
    goto LABEL_133;
  switch ( LODWORD(v33->fields.seriazlier) )
  {
    case 4:
      sb = v33->fields.sb;
      if ( !sb )
        goto LABEL_133;
      if ( !LODWORD(sb->fields.m_ChunkPrevious) )
        goto LABEL_134;
      if ( !sb->fields.m_ChunkLength )
        goto LABEL_84;
      v80 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v80 )
        goto LABEL_133;
      v33 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v80,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      v81 = item->fields._Shop_k__BackingField;
      if ( !v81 )
        goto LABEL_133;
      targetIds = v81->fields.targetIds;
      if ( !targetIds )
        goto LABEL_133;
      if ( !targetIds->max_length )
        goto LABEL_134;
      if ( !v33 )
        goto LABEL_133;
      Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v33,
                                    targetIds->m_Items[1],
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Entity && ServantEntity__get_IsServant(Entity, 0LL) && item->fields._ShopKind_k__BackingField != 6 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v84 = &StringLiteral_12086/*"SHOP_CANT_BUY"*/;
      }
      else
      {
LABEL_84:
        if ( !isNotServantGet && !isNotServantHaving && !isServantHaving && !isNotCostumeGet && !isNotCommandCodeGet )
          goto LABEL_13;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v84 = &StringLiteral_12038/*"SHOP_ALREADY_GET"*/;
      }
      v35 = LocalizationManager__Get((System_String_o *)*v84, 0LL);
      v37 = v16->fields.textOnMask;
LABEL_11:
      v38 = v35;
LABEL_12:
      ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v35, v37, v38, v36);
LABEL_13:
      prepareTextOnMask = (UnityEngine_Object_o *)v16->fields.prepareTextOnMask;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(prepareTextOnMask, 0LL, 0LL)
        && ShopBuyItemListViewItem__IsPrepareTextOnMask(item, v40) )
      {
        v41 = v16->fields.prepareTextOnMask;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12060/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, 0LL);
        ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v42, v41, v42, v43);
      }
      break;
    case 5:
    case 7:
    case 9:
      v34 = v16->fields.textOnMask;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12038/*"SHOP_ALREADY_GET"*/, 0LL);
      v37 = v34;
      goto LABEL_11;
    case 6:
      if ( !ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)v33, 0, v32) )
        goto LABEL_13;
      v88 = v16->fields.textOnMask;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v89 = LocalizationManager__Get((System_String_o *)StringLiteral_12119/*"SHOP_QUEST_ALREADY_CLEARED"*/, 0LL);
      ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v89, v88, v89, v90);
      v92 = item->fields._Shop_k__BackingField;
      if ( !v92 )
        goto LABEL_133;
      if ( !ShopEntity__IsSoldOut(v92, v91) )
        goto LABEL_13;
      v93 = item->fields._Shop_k__BackingField;
      if ( !v93 )
        goto LABEL_133;
      script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v93->fields.script;
      if ( !script )
        goto LABEL_133;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             script,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_18815/*"freeShopCondId"*/,
             (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
LABEL_117:
        ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(v16, item, v74);
      }
      goto LABEL_13;
    case 0xE:
      if ( !isNotServantGet && !isNotServantHaving && !isServantHaving && !isNotCostumeGet && !isNotCommandCodeGet )
        goto LABEL_13;
      if ( ShopEntity__GetFreeShopCondId((ShopEntity_o *)v33, v31) < 1 )
        goto LABEL_68;
      v73 = item->fields._Shop_k__BackingField;
      if ( !v73 )
        goto LABEL_133;
      if ( ShopEntity__IsSoldOut(v73, v72) )
        goto LABEL_117;
LABEL_68:
      v75 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v75 )
        goto LABEL_133;
      v76 = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v75,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
      v77 = item->fields._Shop_k__BackingField;
      if ( !v77 || !v76 )
        goto LABEL_133;
      v35 = (System_String_o *)ShopReleaseMaster__CondClearCheck(v76, v77->fields.id, 1, 0LL);
      v78 = v16->fields.textOnMask;
      if ( ((unsigned __int8)v35 & 1) != 0 )
      {
LABEL_103:
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12038/*"SHOP_ALREADY_GET"*/, 0LL);
        v38 = v35;
      }
      else
      {
LABEL_72:
        v38 = (System_String_o *)StringLiteral_1/*""*/;
      }
      v37 = v78;
      goto LABEL_12;
    default:
      if ( !isNotServantGet && !isNotServantHaving && !isServantHaving && !isNotCostumeGet && !isNotCommandCodeGet )
        goto LABEL_13;
      v85 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v85 )
        goto LABEL_133;
      v86 = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v85,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
      v87 = item->fields._Shop_k__BackingField;
      if ( !v87 || !v86 )
        goto LABEL_133;
      v78 = v16->fields.textOnMask;
      v35 = (System_String_o *)ShopReleaseMaster__CondClearCheck(v86, v87->fields.id, 1, 0LL);
      if ( ((unsigned __int8)v35 & 1) != 0 )
        goto LABEL_103;
      goto LABEL_72;
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
  __int64 v11; // x1
  __int64 v12; // x1
  UILabel_o *messageTextLabel; // x23
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  const MethodInfo *v16; // x3
  struct ShopEntity_o *Shop_k__BackingField; // x8
  bool IsNullOrEmpty; // w0
  const MethodInfo *v19; // x1
  struct UICrossNarrowLabel_o *v20; // x20
  System_String_o *NameText; // x19
  System_String_o *v22; // x0
  ShopEntity_o *v23; // x0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x3
  struct ShopEntity_o *v26; // x8
  UILabel_o *v27; // x21
  System_String_o *v28; // x22
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  const MethodInfo *v31; // x3
  bool v32; // w0
  const MethodInfo *v33; // x1
  UICrossNarrowLabel_o *v34; // x20
  System_String_o *v35; // x19
  LocalizationManager_c *v36; // x0
  UICrossNarrowLabel_o *v37; // x21
  System_String_o *v38; // x22
  System_String_o *v39; // x0
  UILabel_o *v40; // x20
  const MethodInfo *v41; // x1
  System_String_o *DetailText; // x0
  System_String_o *v43; // x0
  System_String_o *v44; // x0
  UICrossNarrowLabel_o *nameTextLabel; // x0
  System_String_o *v46; // x1
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  System_String_o *value; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *message; // [xsp+8h] [xbp-38h] BYREF

  value = preparationItemName;
  message = preparationMessage;
  if ( (byte_40FF7ED & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&StringLiteral_15598/*"[000000]"*/, v11);
    sub_B16FFC(&StringLiteral_23864/*"？"*/, v12);
    byte_40FF7ED = 1;
  }
  if ( isInPreparation )
  {
    messageTextLabel = this->fields.messageTextLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__ReplaceCommonTag(preparationMessage, 0, 0LL);
    v15 = System_String__Concat_43743732((System_String_o *)StringLiteral_15598/*"[000000]"*/, v14, 0LL);
    ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v15, messageTextLabel, v15, v16);
    if ( item )
    {
      Shop_k__BackingField = item->fields._Shop_k__BackingField;
      if ( Shop_k__BackingField )
      {
        if ( (Shop_k__BackingField->fields.flag & 4) != 0 )
        {
          nameTextLabel = this->fields.nameTextLabel;
          if ( nameTextLabel )
          {
            v46 = (System_String_o *)StringLiteral_23864/*"？"*/;
LABEL_43:
            UICrossNarrowLabel__SetCrossNarrowText(nameTextLabel, v46, 0LL);
            return;
          }
        }
        else
        {
          IsNullOrEmpty = System_String__IsNullOrEmpty(preparationItemName, 0LL);
          v20 = this->fields.nameTextLabel;
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
          v47 = LocalizationManager__ReplaceCommonTag(v22, 0, 0LL);
          if ( v20 )
          {
            v46 = v47;
            nameTextLabel = v20;
            goto LABEL_43;
          }
        }
      }
    }
LABEL_49:
    sub_B170D4();
  }
  if ( !item )
    goto LABEL_49;
  v23 = item->fields._Shop_k__BackingField;
  if ( !v23 )
    goto LABEL_49;
  if ( ShopEntity__IsSoldOut(v23, (const MethodInfo *)item) )
  {
    v26 = item->fields._Shop_k__BackingField;
    if ( (!v26 || v26->fields.purchaseType != 14)
      && ShopBuyItemListViewItem__TryGetClosedMessage(item, &message, &value, v25) )
    {
      v27 = this->fields.messageTextLabel;
      v28 = message;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v29 = LocalizationManager__ReplaceCommonTag(v28, 0, 0LL);
      v30 = System_String__Concat_43743732((System_String_o *)StringLiteral_15598/*"[000000]"*/, v29, 0LL);
      ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v30, v27, v30, v31);
      v32 = System_String__IsNullOrEmpty(value, 0LL);
      v34 = this->fields.nameTextLabel;
      if ( v32 )
      {
        v35 = ShopBuyItemListViewItem__get_NameText(item, v33);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
          || LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          goto LABEL_47;
        }
        v36 = LocalizationManager_TypeInfo;
      }
      else
      {
        v36 = LocalizationManager_TypeInfo;
        v35 = value;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
          || LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          goto LABEL_47;
        }
      }
      j_il2cpp_runtime_class_init_0(v36);
LABEL_47:
      v48 = LocalizationManager__ReplaceCommonTag(v35, 0, 0LL);
      if ( !v34 )
        goto LABEL_49;
      UICrossNarrowLabel__SetCrossNarrowText(v34, v48, 0LL);
      return;
    }
  }
  v37 = this->fields.nameTextLabel;
  v38 = ShopBuyItemListViewItem__get_NameText(item, v24);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v39 = LocalizationManager__ReplaceCommonTag(v38, 0, 0LL);
  if ( !v37 )
    goto LABEL_49;
  UICrossNarrowLabel__SetCrossNarrowText(v37, v39, 0LL);
  v40 = this->fields.messageTextLabel;
  DetailText = ShopBuyItemListViewItem__get_DetailText(item, v41);
  v43 = LocalizationManager__ReplaceCommonTag(DetailText, 0, 0LL);
  v44 = System_String__Concat_43743732((System_String_o *)StringLiteral_15598/*"[000000]"*/, v43, 0LL);
  if ( !v40 )
    goto LABEL_49;
  UILabel__set_text(v40, v44, 0LL);
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
  ShopEntity_o *v12; // x0
  UILabel_o *numTitleLabel; // x21
  System_String_o *v14; // x0
  const MethodInfo *v15; // x3
  ShopBuyItemListViewItemDraw_o *v16; // x0
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  ShopEntity_o *v19; // x0
  UILabel_o *numTextLabel; // x21
  int32_t HoldCount; // w0
  System_String_o *NumberFormat; // x0
  const MethodInfo *v23; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Action_int__o *v29; // x21
  ShopBuyItemListViewItemDraw_o *v30; // x0
  const MethodInfo *v31; // x3

  v6 = this;
  if ( (byte_40FF7EE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, item);
    sub_B16FFC(&System_Action_int__TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&Method_ShopBuyItemListViewItemDraw__SetNumText_b__59_0__, v9);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B16FFC(&StringLiteral_12066/*"SHOP_BUY_ITEM_HOLD"*/, v10);
    byte_40FF7EE = 1;
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
  v12 = item->fields._Shop_k__BackingField;
  if ( !v12 )
    goto LABEL_19;
  this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__checkHoldDisp(v12, (const MethodInfo *)item);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_17:
    ShopBuyItemListViewItemDraw__SetLabelActive(this, v6->fields.numTitleLabel, 0, method);
    ShopBuyItemListViewItemDraw__SetLabelActive(v30, v6->fields.numTextLabel, 0, v31);
    return;
  }
  ShopBuyItemListViewItemDraw__SetLabelActive(this, v6->fields.numTitleLabel, 1, method);
  numTitleLabel = v6->fields.numTitleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12066/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
  ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v14, numTitleLabel, v14, v15);
  ShopBuyItemListViewItemDraw__SetLabelActive(v16, v6->fields.numTextLabel, 1, v17);
  v19 = item->fields._Shop_k__BackingField;
  if ( !v19 )
LABEL_19:
    sub_B170D4();
  numTextLabel = v6->fields.numTextLabel;
  HoldCount = ShopEntity__getHoldCount(v19, v18);
  NumberFormat = LocalizationManager__GetNumberFormat(HoldCount, 0LL);
  ShopBuyItemListViewItemDraw__SetLabelText(
    (ShopBuyItemListViewItemDraw_o *)NumberFormat,
    numTextLabel,
    NumberFormat,
    v23);
  if ( item->fields._ShopKind_k__BackingField == 7 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
    v29 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v25, v26, v27, v28);
    System_Action_int____ctor(
      v29,
      (Il2CppObject *)v6,
      Method_ShopBuyItemListViewItemDraw__SetNumText_b__59_0__,
      (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
    StoneCountRefreshComponent__AttachToGameObject(gameObject, v29, 1, 0LL);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetPriceIconText(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x8
  int32_t payType; // w8
  UILabel_o *priceLabelFree; // x19
  System_String_o *v12; // x0
  struct CommonConsumeEntity_array *CommonConsumeEntities_k__BackingField; // x24
  __int64 v14; // x8
  struct UIIconLabel_o *priceIconLabel; // x19
  System_Int32_array *PriceIcon; // x0
  __int64 v17; // x2
  int32_t v18; // w20
  CommonConsumeEntity_o *v19; // x0
  ShopBuyItemListViewItemDraw_o *ItemCount; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  ShopEntity_o *v23; // x0
  UIIconLabel_o *v24; // x0
  int32_t v25; // w1
  int32_t v26; // w3
  int32_t v27; // w2
  struct ShopEntity_o *v28; // x8
  System_Int32_array *UserItemCounts; // x0
  UIIconLabel_o *v30; // x22
  System_Int32_array *v31; // x21
  const MethodInfo *v32; // x1
  int32_t v33; // w0
  const MethodInfo *v34; // x2
  int32_t v35; // w23
  struct UIIconLabel_o *v36; // x19
  const MethodInfo *v37; // x1
  int32_t v38; // w0
  const MethodInfo *v39; // x2
  ShopEntity_o *v40; // x8
  int32_t v41; // w20
  struct ShopEntity_o *v42; // x8
  UIIconLabel_o *v43; // x22
  ShopBuyItemListViewItemDraw_o *Price; // x0
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x2
  int32_t v47; // w23
  int32_t sellQp; // w24
  UIIconLabel_o *priceIconLabel1; // x21
  int32_t v50; // w22
  CommonConsumeEntity_o *v51; // x0
  int32_t num; // w23
  int32_t HasNum; // w0
  int32_t v54; // w21
  int32_t v55; // w0
  UIIconLabel_o *v56; // x0
  UIIconLabel_o *priceIconLabel2; // x0
  struct ItemEntity_o *itemEntity; // x8
  const MethodInfo *v59; // x2
  ShopEntity_o *v60; // x0
  const MethodInfo *v61; // x1
  const MethodInfo *v62; // x3
  ShopEntity_o *v63; // x0
  struct ItemEntity_o *v64; // x8
  ShopEntity_o *v65; // x0
  int32_t v66; // w20
  struct ItemEntity_o *v67; // x8
  double v68; // d0
  UILabel_o **p_LineText2digit; // x8

  if ( (byte_40FF7F4 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&System_Math_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_12089/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, v8);
    byte_40FF7F4 = 1;
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
    v14 = *(_QWORD *)&CommonConsumeEntities_k__BackingField->max_length;
    if ( !v14 )
      return;
    if ( (_DWORD)v14 == 1 )
    {
      if ( !CommonConsumeEntities_k__BackingField->m_Items[0] )
        return;
      priceIconLabel = this->fields.priceIconLabel;
      PriceIcon = (System_Int32_array *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
      if ( !CommonConsumeEntities_k__BackingField->max_length )
        goto LABEL_87;
      v18 = (int)PriceIcon;
      v19 = CommonConsumeEntities_k__BackingField->m_Items[0];
      if ( !v19 )
        goto LABEL_86;
    }
    else
    {
      if ( (int)v14 < 2 )
        return;
      if ( CommonConsumeEntities_k__BackingField->m_Items[0] )
      {
        priceIconLabel1 = this->fields.priceIconLabel1;
        PriceIcon = (System_Int32_array *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
        if ( !CommonConsumeEntities_k__BackingField->max_length )
          goto LABEL_87;
        v50 = (int)PriceIcon;
        v51 = CommonConsumeEntities_k__BackingField->m_Items[0];
        if ( !v51 )
          goto LABEL_86;
        num = v51->fields.num;
        HasNum = CommonConsumeEntity__GetUserHasNum(v51, 0LL);
        if ( !priceIconLabel1 )
          goto LABEL_86;
        UIIconLabel__SetPurchaseDecision(priceIconLabel1, v50, num, HasNum, 0LL);
        if ( CommonConsumeEntities_k__BackingField->max_length <= 1 )
          goto LABEL_87;
      }
      if ( !CommonConsumeEntities_k__BackingField->m_Items[1] )
        return;
      priceIconLabel = this->fields.priceIconLabel2;
      PriceIcon = (System_Int32_array *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
      if ( CommonConsumeEntities_k__BackingField->max_length <= 1 )
        goto LABEL_87;
      v18 = (int)PriceIcon;
      v19 = CommonConsumeEntities_k__BackingField->m_Items[1];
      if ( !v19 )
        goto LABEL_86;
    }
    v54 = v19->fields.num;
    v55 = CommonConsumeEntity__GetUserHasNum(v19, 0LL);
    if ( !priceIconLabel )
      goto LABEL_86;
    v26 = v55;
    v24 = priceIconLabel;
    v25 = v18;
    v27 = v54;
    goto LABEL_52;
  }
  if ( payType == 13 )
  {
    priceLabelFree = this->fields.priceLabelFree;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12089/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, 0LL);
    if ( priceLabelFree )
    {
      UILabel__set_text(priceLabelFree, v12, 0LL);
      return;
    }
LABEL_86:
    sub_B170D4();
  }
  ItemCount = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_ItemCount(item, (const MethodInfo *)item);
  if ( (int)ItemCount >= 2 )
  {
    if ( isInPreparation )
    {
      v28 = item->fields._Shop_k__BackingField;
      if ( !v28 )
        goto LABEL_86;
      if ( (v28->fields.flag & 0x40) != 0 )
      {
        v56 = this->fields.priceIconLabel1;
        if ( !v56 )
          goto LABEL_86;
        UIIconLabel__SetEventQuestion(v56, 0LL);
        priceIconLabel2 = this->fields.priceIconLabel2;
        if ( !priceIconLabel2 )
          goto LABEL_86;
        goto LABEL_59;
      }
    }
    UserItemCounts = ShopBuyItemListViewItemDraw__GetUserItemCounts(ItemCount, item, v22);
    v30 = this->fields.priceIconLabel1;
    v31 = UserItemCounts;
    v33 = ShopBuyItemListViewItem__get_PriceIcon(item, v32);
    if ( !item->fields._Shop_k__BackingField )
      goto LABEL_86;
    v35 = v33;
    PriceIcon = (System_Int32_array *)ShopEntity__GetPrices(item->fields._Shop_k__BackingField, 0, v34);
    if ( !v31 )
      goto LABEL_86;
    if ( v31->max_length )
    {
      if ( !v30 )
        goto LABEL_86;
      UIIconLabel__SetPurchaseDecision(v30, v35, (int32_t)PriceIcon, v31->m_Items[1], 0LL);
      v36 = this->fields.priceIconLabel2;
      v38 = ShopBuyItemListViewItem__get_PriceIcon(item, v37);
      v40 = item->fields._Shop_k__BackingField;
      if ( !v40 )
        goto LABEL_86;
      v41 = v38;
      PriceIcon = (System_Int32_array *)ShopEntity__GetPrices(v40, 1, v39);
      if ( v31->max_length > 1 )
      {
        if ( !v36 )
          goto LABEL_86;
        v26 = v31->m_Items[2];
        v27 = (int)PriceIcon;
        v24 = v36;
        v25 = v41;
        goto LABEL_52;
      }
    }
LABEL_87:
    sub_B17100(PriceIcon, item, v17);
    sub_B170A0();
  }
  v23 = item->fields._Shop_k__BackingField;
  if ( v23 && ShopEntity__IsSoldOut(v23, v21) && item->fields._IsNotHavingShopItemReceived_k__BackingField )
  {
    v24 = this->fields.priceIconLabel;
    if ( !v24 )
      goto LABEL_86;
    v25 = 56;
    v26 = -1;
    v27 = 0;
LABEL_52:
    UIIconLabel__SetPurchaseDecision(v24, v25, v27, v26, 0LL);
    return;
  }
  if ( isInPreparation )
  {
    v42 = item->fields._Shop_k__BackingField;
    if ( !v42 )
      goto LABEL_86;
    if ( (v42->fields.flag & 0x40) != 0 )
    {
      priceIconLabel2 = this->fields.priceIconLabel;
      if ( !priceIconLabel2 )
        goto LABEL_86;
LABEL_59:
      UIIconLabel__SetEventQuestion(priceIconLabel2, 0LL);
      return;
    }
  }
  v43 = this->fields.priceIconLabel;
  Price = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v21);
  v47 = (int)Price;
  if ( item->fields._Shop_k__BackingField )
  {
    Price = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrice(item->fields._Shop_k__BackingField, v45);
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
  PriceIcon = ShopBuyItemListViewItemDraw__GetUserItemCounts(Price, item, v46);
  if ( !PriceIcon )
    goto LABEL_86;
  if ( !PriceIcon->max_length )
    goto LABEL_87;
  if ( !v43 )
    goto LABEL_86;
  UIIconLabel__SetPurchaseDecision(v43, v47, sellQp, PriceIcon->m_Items[1], 0LL);
  v60 = item->fields._Shop_k__BackingField;
  if ( !v60 )
    goto LABEL_86;
  if ( ShopEntity__IsSetStrikethrough(v60, isInPreparation, v59) )
  {
    v63 = item->fields._Shop_k__BackingField;
    if ( v63 )
    {
      v63 = (ShopEntity_o *)ShopEntity__GetPrice(v63, v61);
      if ( !(_DWORD)v63 )
        goto LABEL_84;
    }
    else
    {
      v64 = item->fields.itemEntity;
      if ( !v64 )
        goto LABEL_84;
      v63 = (ShopEntity_o *)(unsigned int)v64->fields.sellQp;
      if ( !(_DWORD)v63 )
        goto LABEL_84;
    }
    v65 = item->fields._Shop_k__BackingField;
    if ( v65 )
    {
      v66 = ShopEntity__GetPrice(v65, v61);
    }
    else
    {
      v67 = item->fields.itemEntity;
      if ( v67 )
        v66 = v67->fields.sellQp;
      else
        v66 = 0;
    }
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v68 = log10((double)v66);
    if ( v68 == INFINITY )
      v68 = -v68;
    if ( (int)v68 )
    {
      p_LineText2digit = &this->fields.LineText2digit;
LABEL_85:
      ShopBuyItemListViewItemDraw__SetLabelActive((ShopBuyItemListViewItemDraw_o *)v63, *p_LineText2digit, 1, v62);
      return;
    }
LABEL_84:
    p_LineText2digit = &this->fields.LineText;
    goto LABEL_85;
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
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
  struct ShopEntity_o *Shop_k__BackingField; // x8
  unsigned int shopType; // w9
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  struct ShopEntity_o *v19; // x8
  struct System_Int32_array *targetIds; // x8
  struct ShopEntity_o *v21; // x8
  System_String_o *v22; // x0
  const MethodInfo *v23; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *script; // x0
  const MethodInfo *v25; // x1
  ShopEntity_o *v26; // x0
  const MethodInfo *v27; // x1
  ShopEntity_o *v28; // x0
  bool IsPaidExchange; // w20
  __int64 *v30; // x8
  System_String_o *v31; // x0
  const MethodInfo *v32; // x3
  UnityEngine_GameObject_o *freeExchangeConditionNoticeRoot; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FF7F3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, item);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&StringLiteral_12120/*"SHOP_QUEST_FREE_EXCHANGE_CLEARED"*/, v9);
    sub_B16FFC(&StringLiteral_12122/*"SHOP_QUEST_PAID_EXCHANGE_CLEARED"*/, v10);
    sub_B16FFC(&StringLiteral_18815/*"freeShopCondId"*/, v11);
    sub_B16FFC(&StringLiteral_12038/*"SHOP_ALREADY_GET"*/, v12);
    byte_40FF7F3 = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      v19 = item->fields._Shop_k__BackingField;
      if ( v19 )
      {
        targetIds = v19->fields.targetIds;
        if ( targetIds )
        {
          if ( !targetIds->max_length )
          {
            sub_B17100(MasterData_WarQuestSelectionMaster, v17, v18);
            sub_B170A0();
          }
          if ( MasterData_WarQuestSelectionMaster )
          {
            if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   MasterData_WarQuestSelectionMaster,
                   &entity,
                   targetIds->m_Items[1],
                   (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
            {
              v21 = item->fields._Shop_k__BackingField;
              if ( !v21 )
                goto LABEL_39;
              if ( v21->fields.purchaseType == 4 )
              {
                if ( !entity )
                  goto LABEL_39;
                if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL) )
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12038/*"SHOP_ALREADY_GET"*/, 0LL);
                  ShopBuyItemListViewItemDraw__SetLabelText(
                    (ShopBuyItemListViewItemDraw_o *)v22,
                    this->fields.textOnMask,
                    v22,
                    v23);
                }
              }
            }
            Shop_k__BackingField = item->fields._Shop_k__BackingField;
            if ( Shop_k__BackingField )
            {
LABEL_22:
              script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Shop_k__BackingField->fields.script;
              if ( script )
              {
                if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                        script,
                        (System_Xml_XmlQualifiedName_o *)StringLiteral_18815/*"freeShopCondId"*/,
                        (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
                  return;
                v26 = item->fields._Shop_k__BackingField;
                if ( v26 )
                {
                  if ( !ShopEntity__IsAfterTheFreeShopReleaseDate(v26, v25) )
                    return;
                  v28 = item->fields._Shop_k__BackingField;
                  if ( v28 )
                  {
                    IsPaidExchange = ShopEntity__IsPaidExchange(v28, v27);
                    if ( IsPaidExchange )
                    {
                      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v30 = &StringLiteral_12122/*"SHOP_QUEST_PAID_EXCHANGE_CLEARED"*/;
                    }
                    else
                    {
                      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v30 = &StringLiteral_12120/*"SHOP_QUEST_FREE_EXCHANGE_CLEARED"*/;
                    }
                    v31 = LocalizationManager__Get((System_String_o *)*v30, 0LL);
                    ShopBuyItemListViewItemDraw__SetLabelText(
                      (ShopBuyItemListViewItemDraw_o *)v31,
                      this->fields.textOnMask,
                      v31,
                      v32);
                    freeExchangeConditionNoticeRoot = this->fields.freeExchangeConditionNoticeRoot;
                    if ( freeExchangeConditionNoticeRoot )
                    {
                      UnityEngine_GameObject__SetActive(freeExchangeConditionNoticeRoot, IsPaidExchange, 0LL);
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
    sub_B170D4();
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  struct ShopEntity_o *v25; // x0
  unsigned int v26; // w8
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2
  struct ShopEntity_o *Shop_k__BackingField; // x0
  WebViewManager_o *Instance; // x0
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  struct ShopEntity_o *v33; // x8
  UserShopEntity_o *EntityDefinitely; // x0
  const MethodInfo *v35; // x1
  struct ShopEntity_o *v36; // x8
  int32_t limitNum; // w9
  struct ShopEntity_o *v38; // x0
  UILabel_o *restCountLabel; // x19
  System_String_o *v40; // x20
  int32_t v41; // w0
  struct ShopEntity_o *v42; // x8
  int32_t purchaseType; // w8
  LocalizationManager_c *v44; // x0
  __int64 *v45; // x8
  WebViewManager_o *v46; // x0
  ShopReleaseMaster_o *v47; // x0
  struct ShopEntity_o *v48; // x8
  ShopReleaseMaster_o *v49; // x26
  struct ShopEntity_o *v50; // x8
  struct ShopEntity_o *v51; // x8
  struct ShopEntity_o *v52; // x8
  char isExistCondType; // w8
  int v54; // w21
  System_String_o *v55; // x0
  const MethodInfo *v56; // x3
  Il2CppObject *NumberFormat; // x0
  struct ShopEntity_o *v58; // x8
  struct ShopEntity_o *v59; // x8

  if ( (byte_40FF7EF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopReleaseMaster___, item);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, v17);
    sub_B16FFC(&LocalizationManager_TypeInfo, v18);
    sub_B16FFC(&NetworkManager_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&StringLiteral_12070/*"SHOP_BUY_PREPARATION"*/, v21);
    sub_B16FFC(&StringLiteral_8421/*"LOTTERY_REST_NUM"*/, v22);
    sub_B16FFC(&StringLiteral_14656/*"UNIT_REST_NONE"*/, v23);
    sub_B16FFC(&StringLiteral_3397/*"COUNT_INFO"*/, v24);
    byte_40FF7EF = 1;
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_85;
      MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v33 = item->fields._Shop_k__BackingField;
      if ( !v33 || !MasterData_WarQuestSelectionMaster )
        goto LABEL_85;
      EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                           MasterData_WarQuestSelectionMaster,
                           UserId,
                           v33->fields.baseShopId,
                           0LL);
      v36 = item->fields._Shop_k__BackingField;
      if ( v36 )
      {
        limitNum = v36->fields.limitNum;
        if ( !EntityDefinitely )
          goto LABEL_85;
      }
      else
      {
        limitNum = 0;
        if ( !EntityDefinitely )
          goto LABEL_85;
      }
      v54 = limitNum - EntityDefinitely->fields.num;
      if ( v54 >= 1 && (!v36 || !ShopEntity__IsSoldOut(item->fields._Shop_k__BackingField, v35)) )
      {
        restCountLabel = this->fields.restCountLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v40 = LocalizationManager__Get((System_String_o *)StringLiteral_3397/*"COUNT_INFO"*/, 0LL);
        goto LABEL_78;
      }
      if ( !item->fields._IsNotHavingShopItemReceived_k__BackingField )
        goto LABEL_9;
      restCountLabel = this->fields.restCountLabel;
      v44 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      {
LABEL_55:
        v45 = &StringLiteral_14656/*"UNIT_REST_NONE"*/;
        goto LABEL_56;
      }
LABEL_53:
      if ( !v44->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v44);
      goto LABEL_55;
    }
    if ( ShopEntity__IsSoldOut(Shop_k__BackingField, (const MethodInfo *)item) )
      goto LABEL_9;
    v42 = item->fields._Shop_k__BackingField;
    if ( v42 )
      purchaseType = v42->fields.purchaseType;
    else
LABEL_31:
      purchaseType = item->fields.itemEntity != 0LL;
    restCountLabel = this->fields.restCountLabel;
    v44 = LocalizationManager_TypeInfo;
    if ( purchaseType == 16 )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v45 = &StringLiteral_8421/*"LOTTERY_REST_NUM"*/;
      goto LABEL_56;
    }
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
      goto LABEL_55;
    goto LABEL_53;
  }
  if ( !item )
    goto LABEL_85;
  v25 = item->fields._Shop_k__BackingField;
  if ( !v25 )
    goto LABEL_85;
  v26 = v25->fields.purchaseType;
  if ( v26 > 9 || ((1 << v26) & 0x2E0) == 0 )
  {
    v46 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v46 )
      goto LABEL_85;
    v47 = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v46,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
    v48 = item->fields._Shop_k__BackingField;
    if ( !v48 )
      goto LABEL_85;
    v49 = v47;
    if ( !v47 )
      goto LABEL_85;
    *isNotServantGet = ShopReleaseMaster__isExistCondType(v47, v48->fields.id, 38, 0LL);
    v50 = item->fields._Shop_k__BackingField;
    if ( !v50 )
      goto LABEL_85;
    *isNotServantHaving = ShopReleaseMaster__isExistCondType(v49, v50->fields.id, 41, 0LL);
    v51 = item->fields._Shop_k__BackingField;
    if ( !v51 )
      goto LABEL_85;
    *isServantHaving = ShopReleaseMaster__isExistCondType(v49, v51->fields.id, 40, 0LL);
    v52 = item->fields._Shop_k__BackingField;
    if ( !v52 )
      goto LABEL_85;
    if ( ShopReleaseMaster__isExistCondType(v49, v52->fields.id, 78, 0LL) )
    {
      isExistCondType = 1;
    }
    else
    {
      v58 = item->fields._Shop_k__BackingField;
      if ( !v58 )
        goto LABEL_85;
      isExistCondType = ShopReleaseMaster__isExistCondType(v49, v58->fields.id, 79, 0LL);
    }
    *isNotCostumeGet = isExistCondType;
    v59 = item->fields._Shop_k__BackingField;
    if ( !v59 )
      goto LABEL_85;
    *isNotCommandCodeGet = ShopReleaseMaster__isExistCondType(v49, v59->fields.id, 108, 0LL);
    v25 = item->fields._Shop_k__BackingField;
    if ( !v25 )
      goto LABEL_85;
  }
  if ( ShopEntity__IsSoldOut(v25, (const MethodInfo *)item) )
  {
LABEL_9:
    ShopBuyItemListViewItemDraw__ShowSoldOut(this, item, v28);
    return;
  }
  v38 = item->fields._Shop_k__BackingField;
  if ( !v38 )
LABEL_85:
    sub_B170D4();
  switch ( v38->fields.purchaseType )
  {
    case 5:
    case 7:
    case 9:
      goto LABEL_24;
    case 6:
      if ( !ShopEntity__isQuestNotClearItemClosed(v38, 0, v28) )
        goto LABEL_62;
LABEL_24:
      restCountLabel = this->fields.restCountLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v40 = LocalizationManager__Get((System_String_o *)StringLiteral_3397/*"COUNT_INFO"*/, 0LL);
      v41 = 0;
      goto LABEL_79;
    default:
      if ( *isNotServantGet || *isNotServantHaving || *isServantHaving || *isNotCostumeGet || *isNotCommandCodeGet )
      {
        restCountLabel = this->fields.restCountLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v40 = LocalizationManager__Get((System_String_o *)StringLiteral_3397/*"COUNT_INFO"*/, 0LL);
        v54 = *isServantHaving || *isNotServantHaving;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
LABEL_78:
        v41 = v54;
LABEL_79:
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v41, 0LL);
        v55 = System_String__Format(v40, NumberFormat, 0LL);
        goto LABEL_80;
      }
LABEL_62:
      if ( ShopBuyItemListViewItem__IsPrepareTextOnMask(item, v27) )
        goto LABEL_11;
      restCountLabel = this->fields.restCountLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v45 = &StringLiteral_12070/*"SHOP_BUY_PREPARATION"*/;
      break;
  }
LABEL_56:
  v55 = LocalizationManager__Get((System_String_o *)*v45, 0LL);
LABEL_80:
  ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v55, restCountLabel, v55, v56);
}


void __fastcall ShopBuyItemListViewItemDraw__SetSpriteActive(
        ShopBuyItemListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FF7E9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, sprite);
    byte_40FF7E9 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL) )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetSpriteName(
        ShopBuyItemListViewItemDraw_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  if ( (byte_40FF7EA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, sprite);
    byte_40FF7EA = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL) )
  {
    if ( !sprite )
      sub_B170D4();
    UISprite__set_spriteName(sprite, spriteName, 0LL);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__ShowSoldOut(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x8
  UnityEngine_Object_o *soldOutImage; // x20
  UnityEngine_Component_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  struct UILabel_o *v12; // x19
  System_String_o *v13; // x0
  const MethodInfo *v14; // x3
  UILabel_o *restCountLabel; // x1
  System_String_o *v16; // x2
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FF7FA & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_12077/*"SHOP_BUY_SOLD_OUT"*/, v6);
    sub_B16FFC(&StringLiteral_1/*""*/, v7);
    byte_40FF7FA = 1;
  }
  if ( !item )
    goto LABEL_26;
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_26;
  soldOutImage = (UnityEngine_Object_o *)this->fields.soldOutImage;
  if ( (Shop_k__BackingField->fields.flag & 0x8000) != 0 )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v13 = (System_String_o *)UnityEngine_Object__op_Inequality(0LL, soldOutImage, 0LL);
    if ( ((unsigned __int8)v13 & 1) != 0 )
    {
      v17 = (UnityEngine_Component_o *)this->fields.soldOutImage;
      if ( !v17 )
        goto LABEL_26;
      gameObject = UnityEngine_Component__get_gameObject(v17, 0LL);
      if ( !gameObject )
        goto LABEL_26;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    }
    restCountLabel = this->fields.restCountLabel;
    v16 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_25;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(0LL, soldOutImage, 0LL) )
    goto LABEL_13;
  v10 = (UnityEngine_Component_o *)this->fields.soldOutImage;
  if ( !v10 || (v11 = UnityEngine_Component__get_gameObject(v10, 0LL)) == 0LL )
LABEL_26:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(v11, 0, 0LL);
LABEL_13:
  v12 = this->fields.restCountLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12077/*"SHOP_BUY_SOLD_OUT"*/, 0LL);
  restCountLabel = v12;
  v16 = v13;
LABEL_25:
  ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v13, restCountLabel, v16, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewItemDraw___SetNumText_b__59_0(
        ShopBuyItemListViewItemDraw_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *numTextLabel; // x20
  System_String_o *NumberFormat; // x0

  if ( (byte_40FF7FC & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_40FF7FC = 1;
  }
  numTextLabel = this->fields.numTextLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !numTextLabel )
    sub_B170D4();
  UILabel__set_text(numTextLabel, NumberFormat, 0LL);
}