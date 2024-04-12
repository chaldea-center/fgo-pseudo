void __fastcall ShopBuyItemListViewItemDraw___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_42B5BBA & 1) == 0 )
  {
    sub_B52984(&ShopBuyItemListViewItemDraw_TypeInfo);
    sub_B52984(&StringLiteral_19654/*"img_list_bg04"*/);
    byte_42B5BBA = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ShopBuyItemListViewItemDraw_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_19654/*"img_list_bg04"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19654/*"img_list_bg04"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
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

  if ( (byte_42B5BA3 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B5BA3 = 1;
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
          sub_B52920(
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
      sub_B52A5C(v4, v5);
    }
    mSpriteName = v20->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_B52920(
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
  __int64 v4; // x8
  SetItemMaster_o *v5; // x20
  unsigned __int64 v6; // x21
  int rangeSprite; // w8
  unsigned int v8; // w9
  __int64 v9; // x10
  __int64 v11; // x0

  if ( (byte_42B5BB7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SetItemMaster___);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B5BB7 = 1;
  }
  if ( !ids )
    goto LABEL_20;
  if ( !*(_QWORD *)&ids->max_length )
    return 0;
  this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_B52A5C(this, ids);
  this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SetItemMaster___);
  v4 = *(_QWORD *)&ids->max_length;
  if ( (int)v4 < 1 )
    return 0;
  v5 = (SetItemMaster_o *)this;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
    {
LABEL_21:
      v11 = sub_B52A88(this);
      sub_B52A28(v11, 0LL);
    }
    if ( !v5 )
      goto LABEL_20;
    this = (ShopBuyItemListViewItemDraw_o *)SetItemMaster__GetList(v5, ids->m_Items[v6 + 1], 0LL);
    if ( !this )
      goto LABEL_20;
    rangeSprite = (int)this->fields.rangeSprite;
    if ( rangeSprite >= 1 )
      break;
LABEL_17:
    LODWORD(v4) = ids->max_length;
    if ( (__int64)++v6 >= (int)v4 )
      return 0;
  }
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= rangeSprite )
      goto LABEL_21;
    v9 = *((_QWORD *)&this->fields.addRangeSprite + (int)v8);
    if ( !v9 )
      goto LABEL_20;
    if ( *(_DWORD *)(v9 + 20) == 7 )
      return 1;
    if ( (int)++v8 >= rangeSprite )
      goto LABEL_17;
  }
}


System_Int32_array *__fastcall ShopBuyItemListViewItemDraw__GetUserItemCounts(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 SelfUserGame; // x0
  const MethodInfo *v5; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x8
  _DWORD *v7; // x21
  System_Int32_array *v8; // x19
  UserItemMaster_o *v9; // x21
  const MethodInfo *v10; // x2
  ShopEntity_o *v11; // x8
  int64_t v12; // x20
  int32_t v13; // w8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v15; // x1
  unsigned int ItemCount; // w0
  const MethodInfo *v17; // x1
  unsigned __int64 v18; // x22
  const MethodInfo *v19; // x2
  int64_t v20; // x23
  unsigned int v22; // w0
  __int64 v23; // x0

  if ( (byte_42B5BB8 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B5BB8 = 1;
  }
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !item || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0LL )
LABEL_48:
    sub_B52A5C(SelfUserGame, v5);
  v7 = (_DWORD *)SelfUserGame;
  switch ( Shop_k__BackingField->fields.payType )
  {
    case 1:
      SelfUserGame = sub_B5299C(int___TypeInfo, 1LL);
      if ( !v7 )
        goto LABEL_48;
      v8 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_48;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_49;
      v13 = v7[42];
      goto LABEL_45;
    case 2:
      SelfUserGame = sub_B5299C(int___TypeInfo, 1LL);
      if ( !v7 )
        goto LABEL_48;
      v8 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_48;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_49;
      v13 = v7[24];
      goto LABEL_45;
    case 4:
      SelfUserGame = sub_B5299C(int___TypeInfo, 1LL);
      if ( !v7 )
        goto LABEL_48;
      v8 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_48;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_49;
      v13 = v7[44];
      goto LABEL_45;
    case 6:
    case 0xB:
      SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_48;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)SelfUserGame,
                                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
      ItemCount = ShopBuyItemListViewItem__get_ItemCount(item, v15);
      v8 = (System_Int32_array *)sub_B5299C(int___TypeInfo, ItemCount);
      if ( ShopBuyItemListViewItem__get_ItemCount(item, v17) < 1 )
        return v8;
      v18 = 0LL;
      break;
    case 8:
    case 9:
    case 0xC:
      v8 = (System_Int32_array *)sub_B5299C(int___TypeInfo, 1LL);
      SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_48;
      v9 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)SelfUserGame,
                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      SelfUserGame = NetworkManager__get_UserId(0LL);
      v11 = item->fields._Shop_k__BackingField;
      if ( !v11 )
        goto LABEL_48;
      v12 = SelfUserGame;
      SelfUserGame = ShopEntity__GetItemIDs(v11, 0, v10);
      if ( !v9 )
        goto LABEL_48;
      SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(v9, v12, SelfUserGame, 0LL);
      if ( !SelfUserGame || !v8 )
        goto LABEL_48;
      if ( !v8->max_length )
        goto LABEL_49;
      v13 = *(_DWORD *)(SelfUserGame + 28);
      goto LABEL_45;
    case 0xA:
      SelfUserGame = sub_B5299C(int___TypeInfo, 1LL);
      if ( !v7 )
        goto LABEL_48;
      v8 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_48;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_49;
      v13 = v7[45];
LABEL_45:
      v8->m_Items[1] = v13;
      return v8;
    default:
      v22 = ShopBuyItemListViewItem__get_ItemCount(item, v5);
      return (System_Int32_array *)sub_B5299C(int___TypeInfo, v22);
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
    v20 = SelfUserGame;
    SelfUserGame = ShopEntity__GetItemIDs(item->fields._Shop_k__BackingField, v18, v19);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_48;
    SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                              MasterData_WarQuestSelectionMaster,
                              v20,
                              SelfUserGame,
                              0LL);
    if ( !SelfUserGame || !v8 )
      goto LABEL_48;
    if ( v18 >= v8->max_length )
    {
LABEL_49:
      v23 = sub_B52A88(SelfUserGame);
      sub_B52A28(v23, 0LL);
    }
    v8->m_Items[++v18] = *(_DWORD *)(SelfUserGame + 28);
  }
  while ( (__int64)v18 < ShopBuyItemListViewItem__get_ItemCount(item, v5) );
  return v8;
}


void __fastcall ShopBuyItemListViewItemDraw__SetBandSprite(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopBuyItemListViewItemDraw_o *v5; // x19
  struct ShopEntity_o *Shop_k__BackingField; // x8
  UISprite_o *v7; // x1
  UISprite_o **p_bandSprite; // x19
  UISprite_o *v9; // t1
  __int64 *v10; // x8
  UISprite_o *v11; // x1
  bool v12; // w2
  UISprite_o *bandSprite; // t1
  UISprite_o *v14; // t1

  v5 = this;
  if ( (byte_42B5BAA & 1) == 0 )
  {
    sub_B52984(&StringLiteral_19888/*"img_txt_shop"*/);
    sub_B52984(&StringLiteral_19876/*"img_txt_quest"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B52984(&StringLiteral_19810/*"img_txt_bgm"*/);
    byte_42B5BAA = 1;
  }
  if ( !item || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0LL )
    sub_B52A5C(this, item);
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
      v7 = bandSprite;
      v10 = &StringLiteral_19876/*"img_txt_quest"*/;
      goto LABEL_11;
    case 7:
    case 9:
LABEL_6:
      v9 = v5->fields.bandSprite;
      p_bandSprite = &v5->fields.bandSprite;
      v7 = v9;
      v10 = &StringLiteral_19888/*"img_txt_shop"*/;
      goto LABEL_11;
    case 0xF:
      v14 = v5->fields.bandSprite;
      p_bandSprite = &v5->fields.bandSprite;
      v7 = v14;
      v10 = &StringLiteral_19810/*"img_txt_bgm"*/;
LABEL_11:
      ShopBuyItemListViewItemDraw__SetSpriteName(this, v7, (System_String_o *)*v10, v3);
      v11 = *p_bandSprite;
      v12 = 1;
      break;
    default:
LABEL_8:
      v11 = v5->fields.bandSprite;
      v12 = 0;
      break;
  }
  ShopBuyItemListViewItemDraw__SetSpriteActive(this, v11, v12, v3);
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

  if ( (byte_42B5BB0 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&UICommonButtonColor_TypeInfo);
    byte_42B5BB0 = 1;
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
      v11 = (UnityEngine_Color_o **)UICommonButtonColor_TypeInfo;
      if ( (BYTE3(UICommonButtonColor_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UICommonButtonColor_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
        v11 = (UnityEngine_Color_o **)UICommonButtonColor_TypeInfo;
      }
      if ( v10 )
      {
        UIWidget__set_color(v10, *v11[23], 0LL);
        return;
      }
LABEL_21:
      sub_B52A5C(v11, v8);
    }
  }
  else
  {
    v11 = (UnityEngine_Color_o **)this->fields.baseButton;
    if ( !v11 )
      goto LABEL_21;
    (*(void (__fastcall **)(UnityEngine_Color_o **, bool, _QWORD))&(*v11)[24].fields.b)(
      v11,
      !isInPreparation,
      *(_QWORD *)&(*v11)[25].fields.r);
    v11 = (UnityEngine_Color_o **)this->fields.baseButton;
    if ( !v11 )
      goto LABEL_21;
    UICommonButton__SetColliderEnable((UICommonButton_o *)v11, dispMode == 3 || isInPreparation, 1, 0LL);
    v11 = (UnityEngine_Color_o **)this->fields.baseButton;
    if ( !v11 )
      goto LABEL_21;
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
  System_String_o **onPostFill; // x8

  if ( (byte_42B5BAB & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ShopBuyItemListViewItemDraw_TypeInfo);
    sub_B52984(&StringLiteral_22298/*"shop_item_menu_"*/);
    byte_42B5BAB = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
          v13 = System_String__Concat_44568316((System_String_o *)StringLiteral_22298/*"shop_item_menu_"*/, v12, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          if ( AtlasManager__SetShopBanner_28378824(v11, v13, 0LL) )
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
            if ( (BYTE3(ShopBuyItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ShopBuyItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ShopBuyItemListViewItemDraw_TypeInfo);
              v6 = (UISprite_o *)ShopBuyItemListViewItemDraw_TypeInfo;
            }
            onPostFill = (System_String_o **)v6->fields.onPostFill;
            if ( !v15 )
              goto LABEL_25;
          }
          else
          {
            onPostFill = &this->fields.baseSpriteName;
            if ( !v15 )
              goto LABEL_25;
          }
          UISprite__set_spriteName(v15, *onPostFill, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_B52A5C(v6, v7);
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

  if ( (byte_42B5BA7 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B5BA7 = 1;
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
      sub_B52A5C(gameObject, v7);
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

  if ( (byte_42B5BB4 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    byte_42B5BB4 = 1;
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
          sub_B52A5C(IsAp, v11);
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
  struct UILabel_o *v11; // x21
  System_String_o *RestTime2; // x0
  const MethodInfo *v13; // x3
  struct UILabel_o *restTimeLabel; // x19
  UILabel_o *v15; // x1

  if ( (byte_42B5BB6 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_12253/*"SHOP_INDEFINITE_PERIOD"*/);
    sub_B52984(&StringLiteral_13475/*"TIME_REST2_NONE"*/);
    byte_42B5BB6 = 1;
  }
  if ( activeTime <= 0 )
  {
    restTimeLabel = this->fields.restTimeLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    RestTime2 = LocalizationManager__Get((System_String_o *)StringLiteral_13475/*"TIME_REST2_NONE"*/, 0LL);
    v15 = restTimeLabel;
  }
  else
  {
    v11 = this->fields.restTimeLabel;
    if ( isRarePriShopPurchased || isIndefinitePeriodShowable )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      RestTime2 = LocalizationManager__Get((System_String_o *)StringLiteral_12253/*"SHOP_INDEFINITE_PERIOD"*/, 0LL);
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
    v15 = v11;
  }
  ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)RestTime2, v15, RestTime2, v13);
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

  if ( (byte_42B5BB5 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B5BB5 = 1;
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
      sub_B52A5C(v8, v9);
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
    sub_B52A5C(this, item);
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
      v24 = sub_B52A88(this);
      sub_B52A28(v24, 0LL);
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
  if ( (byte_42B5BAF & 1) == 0 )
  {
    this = (ShopBuyItemListViewItemDraw_o *)sub_B52984(&StringLiteral_9367/*"NONE"*/);
    byte_42B5BAF = 1;
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
                                                    (System_String_o *)StringLiteral_9367/*"NONE"*/,
                                                    0LL);
          goto LABEL_19;
        }
      }
LABEL_21:
      sub_B52A5C(this, item);
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
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x3
  int64_t Shop_k__BackingField; // x0
  UnityEngine_Object_o *chocolateSprite; // x23
  _BOOL8 v29; // x0
  const MethodInfo *v30; // x3
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v32; // x1
  ShopBuyItemListViewItemDraw_o *v33; // x0
  const MethodInfo *v34; // x3
  UnityEngine_Object_o *soldOutImage; // x23
  bool v36; // w23
  const MethodInfo *v37; // x2
  ShopEntity_o *v38; // x24
  UILabel_o *textOnMask; // x25
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x5
  struct ShopEntity_o *v43; // x8
  UnityEngine_Object_o *priceInfo1; // x22
  const MethodInfo *v45; // x2
  struct ShopEntity_o *v46; // x8
  int32_t payType; // w8
  const MethodInfo *v48; // x3
  ShopBuyItemListViewItemDraw_o *v49; // x0
  const MethodInfo *v50; // x3
  UnityEngine_GameObject_o *v51; // x22
  const MethodInfo *v52; // x1
  struct UnityEngine_GameObject_o *priceInfo2; // x22
  const MethodInfo *v54; // x1
  bool v55; // w1
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x3
  _BOOL4 v58; // w22
  struct ShopEntity_o *v59; // x8
  _BOOL4 v60; // w23
  _BOOL4 v61; // w8
  struct ShopEntity_o *v62; // x8
  Il2CppObject *v63; // x21
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x22
  struct ShopEntity_o *v65; // x8
  UserShopEntity_o *v66; // x22
  System_String_o **v67; // x8
  System_String_o **v68; // x9
  struct CommonConsumeEntity_array *CommonConsumeEntities_k__BackingField; // x22
  bool v70; // zf
  System_String_o *v71; // x20
  System_String_o *v72; // x0
  struct UILabel_o *freeExchangeConditionNoticeLabel; // x8
  int mWidth; // w8
  struct UISprite_array *freeExchangeConditionNoticeBgSprites; // x21
  int v76; // w9
  int max_length; // w8
  unsigned int v78; // w22
  int32_t v79; // w19
  Il2CppClass **v80; // x8
  UISprite_o *v81; // x20
  __int64 v82; // x0
  const MethodInfo *v83; // [xsp+0h] [xbp-70h]
  const MethodInfo *v84; // [xsp+0h] [xbp-70h]
  bool isNotCommandCodeGet; // [xsp+Ch] [xbp-64h] BYREF
  bool isNotCostumeGet; // [xsp+10h] [xbp-60h] BYREF
  bool isServantHaving; // [xsp+14h] [xbp-5Ch] BYREF
  bool isNotServantHaving; // [xsp+18h] [xbp-58h] BYREF
  bool isNotServantGet; // [xsp+1Ch] [xbp-54h] BYREF
  System_String_o *itemName; // [xsp+20h] [xbp-50h] BYREF
  System_String_o *message; // [xsp+28h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_42B5BA4 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ShopBuyItemUtility_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_12174/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/);
    sub_B52984(&StringLiteral_19029/*"freeShopCondMessage"*/);
    sub_B52984(&StringLiteral_12260/*"SHOP_PAID_EXCHANGE_CONDITIONS"*/);
    sub_B52984(&StringLiteral_19028/*"freeShopCondId"*/);
    sub_B52984(&StringLiteral_19952/*"info_base"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_12175/*"SHOP_ACHIEVEMENT_PAID_EXCHANGE_CONDITIONS"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B52984(&StringLiteral_12233/*"SHOP_FREE_EXCHANGE_CONDITIONS"*/);
    byte_42B5BA4 = 1;
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
    ShopBuyItemListViewItemDraw__SetSpriteActive(v49, v6->fields.addRangeSprite, 0, v50);
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
  if ( (BYTE3(ShopBuyItemUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
  }
  ShopBuyItemUtility__SetDefaultMessageLabel(messageTextLabel, v21);
  ShopBuyItemListViewItemDraw__SetNameAndMessageText(v6, item, v19, message, itemName, v23);
  ShopBuyItemListViewItemDraw__SetNumText(v6, item, v19, v24);
  Shop_k__BackingField = (int64_t)item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_105;
  ShopBuyItemUtility__SetShopHaveStatusIcon(
    (ShopEntity_o *)Shop_k__BackingField,
    v6->fields.possessionSprite,
    (*(_DWORD *)(Shop_k__BackingField + 44) & 0x4000) != 0,
    v26);
  chocolateSprite = (UnityEngine_Object_o *)v6->fields.chocolateSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v29 = UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL);
  if ( v29 )
  {
    Shop_k__BackingField = (int64_t)v6->fields.chocolateSprite;
    if ( !Shop_k__BackingField )
      goto LABEL_105;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Shop_k__BackingField, 0LL);
    Shop_k__BackingField = ShopBuyItemListViewItem__get_IsChocolateSvtEquip(item, v32);
    if ( !gameObject )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(gameObject, Shop_k__BackingField & 1, 0LL);
  }
  ShopBuyItemListViewItemDraw__SetLabelText(
    (ShopBuyItemListViewItemDraw_o *)v29,
    v6->fields.textOnMask,
    (System_String_o *)StringLiteral_1/*""*/,
    v30);
  ShopBuyItemListViewItemDraw__SetLabelText(v33, v6->fields.prepareTextOnMask, (System_String_o *)StringLiteral_1/*""*/, v34);
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
  v36 = v11;
  ShopBuyItemListViewItemDraw__SetRestCountText(
    v6,
    item,
    v11,
    &isNotServantGet,
    &isNotServantHaving,
    &isServantHaving,
    &isNotCostumeGet,
    &isNotCommandCodeGet,
    v83);
  ShopBuyItemListViewItemDraw__SetMask(
    v6,
    item,
    v11,
    isNotServantGet,
    isNotServantHaving,
    isServantHaving,
    isNotCostumeGet,
    isNotCommandCodeGet,
    v84);
  v38 = item->fields._Shop_k__BackingField;
  textOnMask = v6->fields.textOnMask;
  if ( (BYTE3(ShopBuyItemUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
  }
  ShopBuyItemUtility__SetAddTextOnMask(v38, textOnMask, v37);
  ShopBuyItemListViewItemDraw__SetInfoButton(v6, item, v36, v40);
  ShopBuyItemListViewItemDraw__SetBaseButton(v6, v36, mode, v41);
  v43 = item->fields._Shop_k__BackingField;
  if ( !v43 )
LABEL_105:
    sub_B52A5C(Shop_k__BackingField, v25);
  ShopBuyItemListViewItemDraw__SetEventEndTime(
    v6,
    item->fields._IsRarePriShopPurchased_k__BackingField,
    (v43->fields.flag & 0x40000) != 0,
    v43->fields.closedAt,
    item->fields._EnterTime_k__BackingField,
    v42);
  priceInfo1 = (UnityEngine_Object_o *)v6->fields.priceInfo1;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(priceInfo1, 0LL, 0LL) )
    return;
  v46 = item->fields._Shop_k__BackingField;
  if ( !v46 )
    goto LABEL_39;
  payType = v46->fields.payType;
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
    v55 = (signed int)CommonConsumeEntities_k__BackingField->max_length > 1;
    goto LABEL_43;
  }
  if ( payType != 13 )
  {
LABEL_39:
    Shop_k__BackingField = (int64_t)v6->fields.priceInfoFree;
    if ( !Shop_k__BackingField )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Shop_k__BackingField, 0, 0LL);
    v51 = v6->fields.priceInfo1;
    Shop_k__BackingField = ShopBuyItemListViewItem__get_ItemCount(item, v52);
    if ( !v51 )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(v51, (int)Shop_k__BackingField < 2, 0LL);
    priceInfo2 = v6->fields.priceInfo2;
    Shop_k__BackingField = ShopBuyItemListViewItem__get_ItemCount(item, v54);
    if ( !priceInfo2 )
      goto LABEL_105;
    v55 = (int)Shop_k__BackingField > 1;
    Shop_k__BackingField = (int64_t)priceInfo2;
LABEL_43:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Shop_k__BackingField, v55, 0LL);
    ShopBuyItemListViewItemDraw__SetPriceIconText(v6, item, v11, v56);
    ShopBuyItemListViewItemDraw__SetEventItemIconText(v6, item, v11, v57);
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
  ShopBuyItemListViewItemDraw__SetPriceIconText(v6, item, v11, v48);
LABEL_44:
  Shop_k__BackingField = (int64_t)item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_105;
  Shop_k__BackingField = ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)Shop_k__BackingField, 0, v45);
  v58 = 0;
  if ( (Shop_k__BackingField & 1) != 0 )
  {
    Shop_k__BackingField = (int64_t)item->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_105;
    Shop_k__BackingField = ShopEntity__IsSoldOut((ShopEntity_o *)Shop_k__BackingField, v25);
    v58 = (Shop_k__BackingField & 1) == 0;
  }
  v59 = item->fields._Shop_k__BackingField;
  if ( !v59 )
    goto LABEL_105;
  if ( v59->fields.purchaseType == 14 )
  {
    Shop_k__BackingField = ShopEntity__IsEligibleForFreeFeaturesTheCostumeRelease(
                             item->fields._Shop_k__BackingField,
                             v25);
    v59 = item->fields._Shop_k__BackingField;
    if ( !v59 )
      goto LABEL_105;
    v60 = (Shop_k__BackingField & 1) == 0;
  }
  else
  {
    v60 = 0;
  }
  Shop_k__BackingField = (int64_t)v59->fields.script;
  if ( !Shop_k__BackingField )
    goto LABEL_105;
  Shop_k__BackingField = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Shop_k__BackingField,
                           (System_Xml_XmlQualifiedName_o *)StringLiteral_19028/*"freeShopCondId"*/,
                           (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( (Shop_k__BackingField & 1) != 0 && (!v58 || !v11) )
  {
    Shop_k__BackingField = (int64_t)item->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_105;
    Shop_k__BackingField = ShopEntity__IsAfterTheFreeShopReleaseDate((ShopEntity_o *)Shop_k__BackingField, v25);
    v61 = (Shop_k__BackingField & 1) == 0;
  }
  else
  {
    v61 = 1;
  }
  if ( v61 || v60 )
    goto LABEL_58;
  v62 = item->fields._Shop_k__BackingField;
  if ( !v62 )
    goto LABEL_105;
  Shop_k__BackingField = (int64_t)v62->fields.script;
  if ( !Shop_k__BackingField )
    goto LABEL_105;
  Shop_k__BackingField = (int64_t)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                    (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Shop_k__BackingField,
                                    (System_Type_o *)StringLiteral_19029/*"freeShopCondMessage"*/,
                                    (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Shop_k__BackingField )
    goto LABEL_105;
  v63 = (Il2CppObject *)(*(__int64 (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Shop_k__BackingField + 360LL))(
                          Shop_k__BackingField,
                          *(_QWORD *)(*(_QWORD *)Shop_k__BackingField + 368LL));
  Shop_k__BackingField = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Shop_k__BackingField )
    goto LABEL_105;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Shop_k__BackingField,
                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Shop_k__BackingField = NetworkManager__get_UserId(0LL);
  v65 = item->fields._Shop_k__BackingField;
  if ( !v65 )
    goto LABEL_105;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_105;
  Shop_k__BackingField = (int64_t)UserShopMaster__GetEntityDefinitely(
                                    MasterData_WarQuestSelectionMaster,
                                    Shop_k__BackingField,
                                    v65->fields.id,
                                    0LL);
  if ( !item->fields._Shop_k__BackingField )
    goto LABEL_105;
  v66 = (UserShopEntity_o *)Shop_k__BackingField;
  Shop_k__BackingField = ShopEntity__IsFulFilledFreeExchangeCondition(item->fields._Shop_k__BackingField, v25);
  if ( !v66 )
    goto LABEL_105;
  if ( v66->fields.num )
  {
    Shop_k__BackingField = (int64_t)item->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_105;
    if ( !ShopEntity__IsPaidExchange((ShopEntity_o *)Shop_k__BackingField, v25) )
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
    LOBYTE(Shop_k__BackingField) = UserShopEntity__get_IsReturnRarePriShop(v66, 0LL);
    v67 = (System_String_o **)&StringLiteral_12260/*"SHOP_PAID_EXCHANGE_CONDITIONS"*/;
    v68 = (System_String_o **)&StringLiteral_12175/*"SHOP_ACHIEVEMENT_PAID_EXCHANGE_CONDITIONS"*/;
  }
  else
  {
    v67 = (System_String_o **)&StringLiteral_12233/*"SHOP_FREE_EXCHANGE_CONDITIONS"*/;
    v68 = (System_String_o **)&StringLiteral_12174/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/;
  }
  v70 = (Shop_k__BackingField & 1) == 0;
  Shop_k__BackingField = (int64_t)v6->fields.freeExchangeConditionNoticeRoot;
  if ( !v70 )
    v67 = v68;
  if ( !Shop_k__BackingField )
    goto LABEL_105;
  v71 = *v67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Shop_k__BackingField, 1, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v72 = LocalizationManager__Get(v71, 0LL);
  Shop_k__BackingField = (int64_t)System_String__Format(v72, v63, 0LL);
  if ( !v6->fields.freeExchangeConditionNoticeLabel )
    goto LABEL_105;
  UILabel__set_text(v6->fields.freeExchangeConditionNoticeLabel, (System_String_o *)Shop_k__BackingField, 0LL);
  freeExchangeConditionNoticeLabel = v6->fields.freeExchangeConditionNoticeLabel;
  if ( !freeExchangeConditionNoticeLabel )
    goto LABEL_105;
  mWidth = freeExchangeConditionNoticeLabel->fields.mWidth;
  freeExchangeConditionNoticeBgSprites = v6->fields.freeExchangeConditionNoticeBgSprites;
  v76 = mWidth >= 512 ? 512 : mWidth;
  if ( !freeExchangeConditionNoticeBgSprites )
    goto LABEL_105;
  max_length = freeExchangeConditionNoticeBgSprites->max_length;
  if ( max_length >= 1 )
  {
    v78 = 0;
    v79 = v76 + 16;
    while ( 1 )
    {
      if ( v78 >= max_length )
      {
        v82 = sub_B52A88(Shop_k__BackingField);
        sub_B52A28(v82, 0LL);
      }
      v80 = &freeExchangeConditionNoticeBgSprites->obj.klass + (int)v78;
      v81 = (UISprite_o *)v80[4];
      if ( !v81 )
        break;
      UIWidget__set_width((UIWidget_o *)v80[4], v79, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      Shop_k__BackingField = AtlasManager__SetEventUI(v81, (System_String_o *)StringLiteral_19952/*"info_base"*/, 0LL);
      max_length = freeExchangeConditionNoticeBgSprites->max_length;
      if ( (int)++v78 >= max_length )
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
      sub_B52A5C(itemIcon, item);
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

  if ( (byte_42B5BA5 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B5BA5 = 1;
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
      sub_B52A5C(gameObject, v7);
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

  if ( (byte_42B5BA6 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B5BA6 = 1;
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
      sub_B52A5C(v6, v7);
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
  const MethodInfo *v17; // x2
  UILabel_o *v18; // x21
  const MethodInfo *v19; // x3
  UILabel_o *v20; // x1
  System_String_o *v21; // x2
  ShopEntity_o *Shop_k__BackingField; // x0
  _BOOL4 v23; // w23
  UnityEngine_Object_o *anotherBuyable; // x21
  System_Int32_array *AnotherPayItemIds; // x0
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x3
  UnityEngine_Object_o *anotherPayItemImage; // x21
  UnityEngine_GameObject_o *v29; // x21
  UISprite_o *v30; // x21
  int32_t addRangeSprite; // w22
  UISprite_o *maskSprite; // x1
  bool v33; // w2
  struct ShopEntity_o *v34; // x8
  struct ShopEntity_o *v35; // x8
  const MethodInfo *v36; // x2
  bool v37; // w20
  struct UISprite_o *bandSprite; // x8
  struct ShopEntity_o *v39; // x8
  struct System_Int32_array *targetIds; // x8
  ServantEntity_o *Entity; // x0
  struct ShopEntity_o *v42; // x8
  __int64 *v43; // x8
  const MethodInfo *v44; // x2
  struct ShopEntity_o *v45; // x8
  UILabel_o *v46; // x21
  struct ShopEntity_o *v47; // x8
  ShopReleaseMaster_o *v48; // x21
  struct ShopEntity_o *v49; // x8
  System_String_o *Empty; // x21
  UILabel_o *v51; // x21
  System_String_o *v52; // x0
  const MethodInfo *v53; // x3
  struct ShopEntity_o *v54; // x8
  UILabel_o *textOnMask; // x20
  UnityEngine_Object_o *prepareTextOnMask; // x21
  const MethodInfo *v57; // x1
  UILabel_o *v58; // x19
  System_String_o *v59; // x0
  const MethodInfo *v60; // x3
  __int64 v61; // x0
  int32_t questId; // [xsp+Ch] [xbp-44h] BYREF

  v16 = this;
  if ( (byte_42B5BB1 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ShopReleaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&StringLiteral_12226/*"SHOP_CANT_BUY"*/);
    sub_B52984(&StringLiteral_12263/*"SHOP_QUEST_OPEN"*/);
    sub_B52984(&StringLiteral_12261/*"SHOP_QUEST_ALREADY_CLEARED"*/);
    sub_B52984(&StringLiteral_19028/*"freeShopCondId"*/);
    sub_B52984(&StringLiteral_12259/*"SHOP_NOT_RELEASE_SET_ITEM"*/);
    sub_B52984(&StringLiteral_12200/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B52984(&StringLiteral_12178/*"SHOP_ALREADY_GET"*/);
    byte_42B5BB1 = 1;
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
      v23 = !ShopEntity__IsAnotherItemBuyable((ShopEntity_o *)this, (const MethodInfo *)item);
    }
    else
    {
      v23 = 0;
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
        v29 = v16->fields.anotherBuyable;
        this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsAnotherItemBuyable(
                                                  (ShopEntity_o *)this,
                                                  (const MethodInfo *)item);
        if ( !v29 )
          goto LABEL_153;
        UnityEngine_GameObject__SetActive(v29, (unsigned __int8)this & 1, 0LL);
        this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
        if ( !this )
          goto LABEL_153;
        AnotherPayItemIds = ShopEntity__GetAnotherPayItemIds((ShopEntity_o *)this, (const MethodInfo *)item);
        if ( AnotherPayItemIds )
        {
          this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
          if ( !this )
            goto LABEL_153;
          v30 = v16->fields.anotherPayItemImage;
          this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetAnotherPayItemIds(
                                                    (ShopEntity_o *)this,
                                                    (const MethodInfo *)item);
          if ( !this )
            goto LABEL_153;
          if ( !LODWORD(this->fields.rangeSprite) )
          {
LABEL_154:
            v61 = sub_B52A88(this);
            sub_B52A28(v61, 0LL);
          }
          addRangeSprite = (int32_t)this->fields.addRangeSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AnotherPayItemIds = (System_Int32_array *)AtlasManager__SetItem(v30, addRangeSprite, 0LL);
        }
      }
    }
    if ( v23 )
    {
      ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(v16, item, v26);
      maskSprite = v16->fields.maskSprite;
      v33 = 1;
LABEL_47:
      ShopBuyItemListViewItemDraw__SetSpriteActive(
        (ShopBuyItemListViewItemDraw_o *)AnotherPayItemIds,
        maskSprite,
        v33,
        v27);
      return;
    }
    v34 = item->fields._Shop_k__BackingField;
    if ( !v34 || v34->fields.purchaseType != 6 )
    {
      maskSprite = v16->fields.maskSprite;
      v33 = 0;
      goto LABEL_47;
    }
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_153;
    this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
    v35 = item->fields._Shop_k__BackingField;
    if ( !v35 )
      goto LABEL_153;
    if ( !this )
      goto LABEL_153;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isQuestNotClearSet(
                                              (ShopReleaseMaster_o *)this,
                                              v35->fields.id,
                                              &questId,
                                              0LL);
    if ( !item->fields._Shop_k__BackingField )
      goto LABEL_153;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !ShopEntity__isQuestNotClearItemClosed(item->fields._Shop_k__BackingField, 1, v36) )
      {
LABEL_45:
        v37 = 0;
LABEL_130:
        this = (ShopBuyItemListViewItemDraw_o *)v16->fields.maskSprite;
        if ( this )
        {
          this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v37, 0LL);
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
    this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12263/*"SHOP_QUEST_OPEN"*/, 0LL);
    if ( !textOnMask )
      goto LABEL_153;
    UILabel__set_text(textOnMask, (System_String_o *)this, 0LL);
    v37 = 1;
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
      this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_153;
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
      v39 = item->fields._Shop_k__BackingField;
      if ( !v39 )
        goto LABEL_153;
      targetIds = v39->fields.targetIds;
      if ( !targetIds )
        goto LABEL_153;
      if ( !targetIds->max_length )
        goto LABEL_154;
      if ( !this )
        goto LABEL_153;
      Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                    targetIds->m_Items[1],
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Entity && ServantEntity__get_IsServant(Entity, 0LL) && item->fields._ShopKind_k__BackingField != 6 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v43 = &StringLiteral_12226/*"SHOP_CANT_BUY"*/;
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
        this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
        v42 = item->fields._Shop_k__BackingField;
        if ( v42 && this )
        {
          this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                    (ShopReleaseMaster_o *)this,
                                                    v42->fields.id,
                                                    40,
                                                    0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v21 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_141;
          }
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v43 = &StringLiteral_12178/*"SHOP_ALREADY_GET"*/;
LABEL_140:
          this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v43, 0LL);
          v21 = (System_String_o *)this;
LABEL_141:
          v20 = v16->fields.textOnMask;
LABEL_142:
          ShopBuyItemListViewItemDraw__SetLabelText(this, v20, v21, v19);
          goto LABEL_143;
        }
LABEL_153:
        sub_B52A5C(this, item);
      }
LABEL_143:
      prepareTextOnMask = (UnityEngine_Object_o *)v16->fields.prepareTextOnMask;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(prepareTextOnMask, 0LL, 0LL)
        && ShopBuyItemListViewItem__IsPrepareTextOnMask(item, v57) )
      {
        v58 = v16->fields.prepareTextOnMask;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v59 = LocalizationManager__Get((System_String_o *)StringLiteral_12200/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, 0LL);
        ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v59, v58, v59, v60);
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
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12259/*"SHOP_NOT_RELEASE_SET_ITEM"*/, 0LL);
        Empty = (System_String_o *)this;
      }
      v20 = v16->fields.textOnMask;
      v21 = Empty;
      goto LABEL_142;
    case 6:
      if ( !ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)this, 0, v17) )
        goto LABEL_143;
      v51 = v16->fields.textOnMask;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12261/*"SHOP_QUEST_ALREADY_CLEARED"*/, 0LL);
      ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v52, v51, v52, v53);
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_153;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, (const MethodInfo *)item);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_143;
      v54 = item->fields._Shop_k__BackingField;
      if ( !v54 )
        goto LABEL_153;
      this = (ShopBuyItemListViewItemDraw_o *)v54->fields.script;
      if ( !this )
        goto LABEL_153;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_19028/*"freeShopCondId"*/,
             (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
LABEL_121:
        ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(v16, item, v44);
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
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
      v45 = item->fields._Shop_k__BackingField;
      if ( !v45 || !this )
        goto LABEL_153;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                (ShopReleaseMaster_o *)this,
                                                v45->fields.id,
                                                1,
                                                0LL);
      v46 = v16->fields.textOnMask;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12178/*"SHOP_ALREADY_GET"*/, 0LL);
        v21 = (System_String_o *)this;
      }
      else
      {
        v21 = (System_String_o *)StringLiteral_1/*""*/;
      }
      v20 = v46;
      goto LABEL_142;
    default:
      if ( !isNotServantGet && !isNotServantHaving && !isServantHaving && !isNotCostumeGet && !isNotCommandCodeGet )
        goto LABEL_143;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
      v47 = item->fields._Shop_k__BackingField;
      if ( !v47 )
        goto LABEL_153;
      v48 = (ShopReleaseMaster_o *)this;
      if ( !this )
        goto LABEL_153;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                (ShopReleaseMaster_o *)this,
                                                v47->fields.id,
                                                1,
                                                0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_105;
      v49 = item->fields._Shop_k__BackingField;
      if ( !v49 )
        goto LABEL_153;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(v48, v49->fields.id, 40, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_7:
        v18 = v16->fields.textOnMask;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12178/*"SHOP_ALREADY_GET"*/, 0LL);
        v20 = v18;
        v21 = (System_String_o *)this;
      }
      else
      {
LABEL_105:
        v20 = v16->fields.textOnMask;
        v21 = (System_String_o *)StringLiteral_1/*""*/;
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
  UILabel_o *messageTextLabel; // x23
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  const MethodInfo *v14; // x3
  struct ShopEntity_o *Shop_k__BackingField; // x8
  bool IsNullOrEmpty; // w0
  const MethodInfo *v17; // x1
  ShopBuyItemListViewItemDraw_o *nameTextLabel; // x20
  System_String_o *NameText; // x19
  System_String_o *v20; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x3
  struct ShopEntity_o *v23; // x8
  UILabel_o *v24; // x21
  System_String_o *v25; // x22
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  const MethodInfo *v28; // x3
  bool v29; // w0
  const MethodInfo *v30; // x1
  UICrossNarrowLabel_o *v31; // x20
  System_String_o *v32; // x19
  LocalizationManager_c *v33; // x0
  UICrossNarrowLabel_o *v34; // x21
  System_String_o *v35; // x22
  UILabel_o *v36; // x20
  const MethodInfo *v37; // x1
  System_String_o *DetailText; // x0
  System_String_o *v39; // x0
  System_String_o *v40; // x1
  System_String_o *value; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *message; // [xsp+8h] [xbp-38h] BYREF

  v10 = this;
  value = preparationItemName;
  message = preparationMessage;
  if ( (byte_42B5BAC & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_15766/*"[000000]"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B52984(&StringLiteral_24167/*"？"*/);
    byte_42B5BAC = 1;
  }
  if ( isInPreparation )
  {
    messageTextLabel = v10->fields.messageTextLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = LocalizationManager__ReplaceCommonTag(preparationMessage, 0, 0LL);
    v13 = System_String__Concat_44568316((System_String_o *)StringLiteral_15766/*"[000000]"*/, v12, 0LL);
    ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v13, messageTextLabel, v13, v14);
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
            v40 = (System_String_o *)StringLiteral_24167/*"？"*/;
LABEL_43:
            UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)this, v40, 0LL);
            return;
          }
        }
        else
        {
          IsNullOrEmpty = System_String__IsNullOrEmpty(preparationItemName, 0LL);
          nameTextLabel = (ShopBuyItemListViewItemDraw_o *)v10->fields.nameTextLabel;
          if ( IsNullOrEmpty )
          {
            NameText = ShopBuyItemListViewItem__get_NameText(item, v17);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v20 = NameText;
          }
          else
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v20 = preparationItemName;
          }
          this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v20, 0, 0LL);
          if ( nameTextLabel )
          {
            v40 = (System_String_o *)this;
            this = nameTextLabel;
            goto LABEL_43;
          }
        }
      }
    }
LABEL_49:
    sub_B52A5C(this, item);
  }
  if ( !item )
    goto LABEL_49;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_49;
  if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, (const MethodInfo *)item) )
  {
    v23 = item->fields._Shop_k__BackingField;
    if ( (!v23 || v23->fields.purchaseType != 14)
      && ShopBuyItemListViewItem__TryGetClosedMessage(item, &message, &value, v22) )
    {
      v24 = v10->fields.messageTextLabel;
      v25 = message;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v26 = LocalizationManager__ReplaceCommonTag(v25, 0, 0LL);
      v27 = System_String__Concat_44568316((System_String_o *)StringLiteral_15766/*"[000000]"*/, v26, 0LL);
      ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v27, v24, v27, v28);
      v29 = System_String__IsNullOrEmpty(value, 0LL);
      v31 = v10->fields.nameTextLabel;
      if ( v29 )
      {
        v32 = ShopBuyItemListViewItem__get_NameText(item, v30);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
          || LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          goto LABEL_47;
        }
        v33 = LocalizationManager_TypeInfo;
      }
      else
      {
        v33 = LocalizationManager_TypeInfo;
        v32 = value;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
          || LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          goto LABEL_47;
        }
      }
      j_il2cpp_runtime_class_init_0(v33);
LABEL_47:
      this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v32, 0, 0LL);
      if ( !v31 )
        goto LABEL_49;
      UICrossNarrowLabel__SetCrossNarrowText(v31, (System_String_o *)this, 0LL);
      return;
    }
  }
  v34 = v10->fields.nameTextLabel;
  v35 = ShopBuyItemListViewItem__get_NameText(item, v21);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v35, 0, 0LL);
  if ( !v34 )
    goto LABEL_49;
  UICrossNarrowLabel__SetCrossNarrowText(v34, (System_String_o *)this, 0LL);
  v36 = v10->fields.messageTextLabel;
  DetailText = ShopBuyItemListViewItem__get_DetailText(item, v37);
  v39 = LocalizationManager__ReplaceCommonTag(DetailText, 0, 0LL);
  this = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_44568316(
                                            (System_String_o *)StringLiteral_15766/*"[000000]"*/,
                                            v39,
                                            0LL);
  if ( !v36 )
    goto LABEL_49;
  UILabel__set_text(v36, (System_String_o *)this, 0LL);
}


void __fastcall ShopBuyItemListViewItemDraw__SetNumText(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v6; // x19
  struct ShopEntity_o *Shop_k__BackingField; // x8
  UILabel_o *numTitleLabel; // x21
  System_String_o *v9; // x0
  const MethodInfo *v10; // x3
  ShopBuyItemListViewItemDraw_o *v11; // x0
  const MethodInfo *v12; // x3
  UILabel_o *numTextLabel; // x21
  int32_t HoldCount; // w0
  System_String_o *NumberFormat; // x0
  const MethodInfo *v16; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v18; // x21
  ShopBuyItemListViewItemDraw_o *v19; // x0
  const MethodInfo *v20; // x3

  v6 = this;
  if ( (byte_42B5BAD & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int___ctor__);
    sub_B52984(&System_Action_int__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_ShopBuyItemListViewItemDraw__SetNumText_b__59_0__);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B52984(&StringLiteral_12206/*"SHOP_BUY_ITEM_HOLD"*/);
    byte_42B5BAD = 1;
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
    ShopBuyItemListViewItemDraw__SetLabelActive(v19, v6->fields.numTextLabel, 0, v20);
    return;
  }
  ShopBuyItemListViewItemDraw__SetLabelActive(this, v6->fields.numTitleLabel, 1, method);
  numTitleLabel = v6->fields.numTitleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12206/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
  ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v9, numTitleLabel, v9, v10);
  ShopBuyItemListViewItemDraw__SetLabelActive(v11, v6->fields.numTextLabel, 1, v12);
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
LABEL_19:
    sub_B52A5C(this, item);
  numTextLabel = v6->fields.numTextLabel;
  HoldCount = ShopEntity__getHoldCount((ShopEntity_o *)this, (const MethodInfo *)item);
  NumberFormat = LocalizationManager__GetNumberFormat(HoldCount, 0LL);
  ShopBuyItemListViewItemDraw__SetLabelText(
    (ShopBuyItemListViewItemDraw_o *)NumberFormat,
    numTextLabel,
    NumberFormat,
    v16);
  if ( item->fields._ShopKind_k__BackingField == 7 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
    v18 = (System_Action_int__o *)sub_B52A54(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v18,
      (Il2CppObject *)v6,
      Method_ShopBuyItemListViewItemDraw__SetNumText_b__59_0__,
      (const MethodInfo_26261F0 *)Method_System_Action_int___ctor__);
    StoneCountRefreshComponent__AttachToGameObject(gameObject, v18, 1, 0LL);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetPriceIconText(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v6; // x19
  struct ShopEntity_o *Shop_k__BackingField; // x8
  int32_t payType; // w8
  UILabel_o *priceLabelFree; // x19
  struct CommonConsumeEntity_array *CommonConsumeEntities_k__BackingField; // x24
  __int64 v11; // x8
  ShopBuyItemListViewItemDraw_o *priceIconLabel; // x19
  int32_t v13; // w20
  const MethodInfo *v14; // x2
  int32_t v15; // w1
  int32_t v16; // w3
  int32_t v17; // w2
  struct ShopEntity_o *v18; // x8
  System_Int32_array *UserItemCounts; // x0
  UIIconLabel_o *v20; // x22
  System_Int32_array *v21; // x21
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  int32_t v24; // w23
  ShopBuyItemListViewItemDraw_o *priceIconLabel2; // x19
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x2
  ShopEntity_o *v28; // x8
  int32_t v29; // w20
  struct ShopEntity_o *v30; // x8
  UIIconLabel_o *v31; // x22
  ShopBuyItemListViewItemDraw_o *PriceIcon; // x0
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x2
  int32_t v35; // w23
  int32_t sellQp; // w24
  UIIconLabel_o *priceIconLabel1; // x21
  int32_t v38; // w22
  int32_t addRangeSprite; // w23
  int32_t v40; // w21
  struct ItemEntity_o *itemEntity; // x8
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x3
  ShopEntity_o *Price; // x0
  struct ItemEntity_o *v46; // x8
  ShopEntity_o *v47; // x0
  int32_t v48; // w20
  struct ItemEntity_o *v49; // x8
  double v50; // d0
  UILabel_o **p_LineText2digit; // x8
  __int64 v52; // x0

  v6 = this;
  if ( (byte_42B5BB3 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&System_Math_TypeInfo);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B52984(&StringLiteral_12230/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/);
    byte_42B5BB3 = 1;
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
    v11 = *(_QWORD *)&CommonConsumeEntities_k__BackingField->max_length;
    if ( !v11 )
      return;
    if ( (_DWORD)v11 == 1 )
    {
      if ( !CommonConsumeEntities_k__BackingField->m_Items[0] )
        return;
      priceIconLabel = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
      if ( !CommonConsumeEntities_k__BackingField->max_length )
        goto LABEL_87;
      v13 = (int)this;
      this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[0];
      if ( !this )
        goto LABEL_86;
    }
    else
    {
      if ( (int)v11 < 2 )
        return;
      if ( CommonConsumeEntities_k__BackingField->m_Items[0] )
      {
        priceIconLabel1 = v6->fields.priceIconLabel1;
        this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
        if ( !CommonConsumeEntities_k__BackingField->max_length )
          goto LABEL_87;
        v38 = (int)this;
        this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[0];
        if ( !this )
          goto LABEL_86;
        addRangeSprite = (int32_t)this->fields.addRangeSprite;
        this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0LL);
        if ( !priceIconLabel1 )
          goto LABEL_86;
        UIIconLabel__SetPurchaseDecision(priceIconLabel1, v38, addRangeSprite, (int32_t)this, 0LL);
        if ( CommonConsumeEntities_k__BackingField->max_length <= 1 )
          goto LABEL_87;
      }
      if ( !CommonConsumeEntities_k__BackingField->m_Items[1] )
        return;
      priceIconLabel = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel2;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
      if ( CommonConsumeEntities_k__BackingField->max_length <= 1 )
        goto LABEL_87;
      v13 = (int)this;
      this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[1];
      if ( !this )
        goto LABEL_86;
    }
    v40 = (int32_t)this->fields.addRangeSprite;
    this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0LL);
    if ( !priceIconLabel )
      goto LABEL_86;
    v16 = (int)this;
    this = priceIconLabel;
    v15 = v13;
    v17 = v40;
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
    this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12230/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, 0LL);
    if ( priceLabelFree )
    {
      UILabel__set_text(priceLabelFree, (System_String_o *)this, 0LL);
      return;
    }
LABEL_86:
    sub_B52A5C(this, item);
  }
  this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_ItemCount(item, (const MethodInfo *)item);
  if ( (int)this >= 2 )
  {
    if ( isInPreparation )
    {
      v18 = item->fields._Shop_k__BackingField;
      if ( !v18 )
        goto LABEL_86;
      if ( (v18->fields.flag & 0x40) != 0 )
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
    UserItemCounts = ShopBuyItemListViewItemDraw__GetUserItemCounts(this, item, v14);
    v20 = v6->fields.priceIconLabel1;
    v21 = UserItemCounts;
    this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v22);
    if ( !item->fields._Shop_k__BackingField )
      goto LABEL_86;
    v24 = (int)this;
    this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrices(item->fields._Shop_k__BackingField, 0, v23);
    if ( !v21 )
      goto LABEL_86;
    if ( v21->max_length )
    {
      if ( !v20 )
        goto LABEL_86;
      UIIconLabel__SetPurchaseDecision(v20, v24, (int32_t)this, v21->m_Items[1], 0LL);
      priceIconLabel2 = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel2;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v26);
      v28 = item->fields._Shop_k__BackingField;
      if ( !v28 )
        goto LABEL_86;
      v29 = (int)this;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrices(v28, 1, v27);
      if ( v21->max_length > 1 )
      {
        if ( !priceIconLabel2 )
          goto LABEL_86;
        v16 = v21->m_Items[2];
        v17 = (int)this;
        this = priceIconLabel2;
        v15 = v29;
        goto LABEL_52;
      }
    }
LABEL_87:
    v52 = sub_B52A88(this);
    sub_B52A28(v52, 0LL);
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
      v15 = 56;
      v16 = -1;
      v17 = 0;
LABEL_52:
      UIIconLabel__SetPurchaseDecision((UIIconLabel_o *)this, v15, v17, v16, 0LL);
      return;
    }
  }
  if ( isInPreparation )
  {
    v30 = item->fields._Shop_k__BackingField;
    if ( !v30 )
      goto LABEL_86;
    if ( (v30->fields.flag & 0x40) != 0 )
    {
      this = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel;
      if ( !this )
        goto LABEL_86;
LABEL_59:
      UIIconLabel__SetEventQuestion((UIIconLabel_o *)this, 0LL);
      return;
    }
  }
  v31 = v6->fields.priceIconLabel;
  PriceIcon = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
  v35 = (int)PriceIcon;
  if ( item->fields._Shop_k__BackingField )
  {
    PriceIcon = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrice(item->fields._Shop_k__BackingField, v33);
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
  this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItemDraw__GetUserItemCounts(PriceIcon, item, v34);
  if ( !this )
    goto LABEL_86;
  if ( !LODWORD(this->fields.rangeSprite) )
    goto LABEL_87;
  if ( !v31 )
    goto LABEL_86;
  UIIconLabel__SetPurchaseDecision(v31, v35, sellQp, (int32_t)this->fields.addRangeSprite, 0LL);
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_86;
  if ( ShopEntity__IsSetStrikethrough((ShopEntity_o *)this, isInPreparation, v42) )
  {
    Price = item->fields._Shop_k__BackingField;
    if ( Price )
    {
      Price = (ShopEntity_o *)ShopEntity__GetPrice(Price, v43);
      if ( !(_DWORD)Price )
        goto LABEL_84;
    }
    else
    {
      v46 = item->fields.itemEntity;
      if ( !v46 )
        goto LABEL_84;
      Price = (ShopEntity_o *)(unsigned int)v46->fields.sellQp;
      if ( !(_DWORD)Price )
        goto LABEL_84;
    }
    v47 = item->fields._Shop_k__BackingField;
    if ( v47 )
    {
      v48 = ShopEntity__GetPrice(v47, v43);
    }
    else
    {
      v49 = item->fields.itemEntity;
      if ( v49 )
        v48 = v49->fields.sellQp;
      else
        v48 = 0;
    }
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v50 = log10((double)v48);
    if ( v50 == INFINITY )
      v50 = -v50;
    if ( (int)v50 )
    {
      p_LineText2digit = &v6->fields.LineText2digit;
LABEL_85:
      ShopBuyItemListViewItemDraw__SetLabelActive((ShopBuyItemListViewItemDraw_o *)Price, *p_LineText2digit, 1, v44);
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
  struct ShopEntity_o *Shop_k__BackingField; // x8
  unsigned int shopType; // w9
  struct ShopEntity_o *v7; // x8
  struct System_Int32_array *targetIds; // x8
  struct ShopEntity_o *v9; // x8
  System_String_o *v10; // x0
  const MethodInfo *v11; // x3
  bool IsPaidExchange; // w20
  __int64 *v13; // x8
  System_String_o *v14; // x0
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_42B5BB2 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_12262/*"SHOP_QUEST_FREE_EXCHANGE_CLEARED"*/);
    sub_B52984(&StringLiteral_12264/*"SHOP_QUEST_PAID_EXCHANGE_CLEARED"*/);
    sub_B52984(&StringLiteral_19028/*"freeShopCondId"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B52984(&StringLiteral_12178/*"SHOP_ALREADY_GET"*/);
    byte_42B5BB2 = 1;
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
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
      v7 = item->fields._Shop_k__BackingField;
      if ( v7 )
      {
        targetIds = v7->fields.targetIds;
        if ( targetIds )
        {
          if ( !targetIds->max_length )
          {
            v16 = sub_B52A88(this);
            sub_B52A28(v16, 0LL);
          }
          if ( this )
          {
            this = (ShopBuyItemListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                      (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                      &entity,
                                                      targetIds->m_Items[1],
                                                      (const MethodInfo_23E2334 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v9 = item->fields._Shop_k__BackingField;
              if ( !v9 )
                goto LABEL_39;
              if ( v9->fields.purchaseType == 4 )
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
                  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12178/*"SHOP_ALREADY_GET"*/, 0LL);
                  ShopBuyItemListViewItemDraw__SetLabelText(
                    (ShopBuyItemListViewItemDraw_o *)v10,
                    v4->fields.textOnMask,
                    v10,
                    v11);
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
                        (System_Xml_XmlQualifiedName_o *)StringLiteral_19028/*"freeShopCondId"*/,
                        (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                      v13 = &StringLiteral_12264/*"SHOP_QUEST_PAID_EXCHANGE_CLEARED"*/;
                    }
                    else
                    {
                      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v13 = &StringLiteral_12262/*"SHOP_QUEST_FREE_EXCHANGE_CLEARED"*/;
                    }
                    v14 = LocalizationManager__Get((System_String_o *)*v13, 0LL);
                    ShopBuyItemListViewItemDraw__SetLabelText(
                      (ShopBuyItemListViewItemDraw_o *)v14,
                      v4->fields.textOnMask,
                      v14,
                      v15);
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
    sub_B52A5C(this, item);
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
  unsigned int maskSprite; // w8
  const MethodInfo *v18; // x2
  struct ShopEntity_o *Shop_k__BackingField; // x0
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x21
  struct ShopEntity_o *v21; // x8
  struct ShopEntity_o *v22; // x8
  int32_t limitNum; // w9
  UILabel_o *restCountLabel; // x19
  System_String_o *v25; // x20
  int32_t v26; // w0
  struct ShopEntity_o *v27; // x8
  int32_t purchaseType; // w8
  LocalizationManager_c *v29; // x0
  __int64 *v30; // x8
  struct ShopEntity_o *v31; // x8
  ShopReleaseMaster_o *v32; // x26
  struct ShopEntity_o *v33; // x8
  struct ShopEntity_o *v34; // x8
  struct ShopEntity_o *v35; // x8
  bool v36; // w8
  int v37; // w21
  System_String_o *v38; // x0
  const MethodInfo *v39; // x3
  Il2CppObject *NumberFormat; // x0
  struct ShopEntity_o *v41; // x8
  struct ShopEntity_o *v42; // x8

  v16 = this;
  if ( (byte_42B5BAE & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_12210/*"SHOP_BUY_PREPARATION"*/);
    sub_B52984(&StringLiteral_8498/*"LOTTERY_REST_NUM"*/);
    sub_B52984(&StringLiteral_14814/*"UNIT_REST_NONE"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B52984(&StringLiteral_3443/*"COUNT_INFO"*/);
    byte_42B5BAE = 1;
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
      this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_85;
      MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)this,
                                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (ShopBuyItemListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
      v21 = item->fields._Shop_k__BackingField;
      if ( !v21 || !MasterData_WarQuestSelectionMaster )
        goto LABEL_85;
      this = (ShopBuyItemListViewItemDraw_o *)UserShopMaster__GetEntityDefinitely(
                                                MasterData_WarQuestSelectionMaster,
                                                (int64_t)this,
                                                v21->fields.baseShopId,
                                                0LL);
      v22 = item->fields._Shop_k__BackingField;
      if ( v22 )
      {
        limitNum = v22->fields.limitNum;
        if ( !this )
          goto LABEL_85;
      }
      else
      {
        limitNum = 0;
        if ( !this )
          goto LABEL_85;
      }
      v37 = limitNum - HIDWORD(this->fields.rangeSprite);
      if ( v37 >= 1 && (!v22 || !ShopEntity__IsSoldOut(item->fields._Shop_k__BackingField, (const MethodInfo *)item)) )
      {
        restCountLabel = v16->fields.restCountLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3443/*"COUNT_INFO"*/, 0LL);
        goto LABEL_78;
      }
      if ( !item->fields._IsNotHavingShopItemReceived_k__BackingField )
        goto LABEL_9;
      restCountLabel = v16->fields.restCountLabel;
      v29 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      {
LABEL_55:
        v30 = &StringLiteral_14814/*"UNIT_REST_NONE"*/;
        goto LABEL_56;
      }
LABEL_53:
      if ( !v29->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v29);
      goto LABEL_55;
    }
    if ( ShopEntity__IsSoldOut(Shop_k__BackingField, (const MethodInfo *)item) )
      goto LABEL_9;
    v27 = item->fields._Shop_k__BackingField;
    if ( v27 )
      purchaseType = v27->fields.purchaseType;
    else
LABEL_31:
      purchaseType = item->fields.itemEntity != 0LL;
    restCountLabel = v16->fields.restCountLabel;
    v29 = LocalizationManager_TypeInfo;
    if ( purchaseType == 16 )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v30 = &StringLiteral_8498/*"LOTTERY_REST_NUM"*/;
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
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_85;
    this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
    v31 = item->fields._Shop_k__BackingField;
    if ( !v31 )
      goto LABEL_85;
    v32 = (ShopReleaseMaster_o *)this;
    if ( !this )
      goto LABEL_85;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(
                                              (ShopReleaseMaster_o *)this,
                                              v31->fields.id,
                                              38,
                                              0LL);
    *isNotServantGet = (unsigned __int8)this & 1;
    v33 = item->fields._Shop_k__BackingField;
    if ( !v33 )
      goto LABEL_85;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v32, v33->fields.id, 41, 0LL);
    *isNotServantHaving = (unsigned __int8)this & 1;
    v34 = item->fields._Shop_k__BackingField;
    if ( !v34 )
      goto LABEL_85;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v32, v34->fields.id, 40, 0LL);
    *isServantHaving = (unsigned __int8)this & 1;
    v35 = item->fields._Shop_k__BackingField;
    if ( !v35 )
      goto LABEL_85;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v32, v35->fields.id, 78, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v36 = 1;
    }
    else
    {
      v41 = item->fields._Shop_k__BackingField;
      if ( !v41 )
        goto LABEL_85;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v32, v41->fields.id, 79, 0LL);
      v36 = (unsigned __int8)this & 1;
    }
    *isNotCostumeGet = v36;
    v42 = item->fields._Shop_k__BackingField;
    if ( !v42 )
      goto LABEL_85;
    *isNotCommandCodeGet = ShopReleaseMaster__isExistCondType(v32, v42->fields.id, 108, 0LL);
    this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
    if ( !this )
      goto LABEL_85;
  }
  if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, (const MethodInfo *)item) )
  {
LABEL_9:
    ShopBuyItemListViewItemDraw__ShowSoldOut(v16, item, v18);
    return;
  }
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
LABEL_85:
    sub_B52A5C(this, item);
  switch ( LODWORD(this->fields.maskSprite) )
  {
    case 5:
    case 7:
    case 9:
      goto LABEL_24;
    case 6:
      if ( !ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)this, 0, v18) )
        goto LABEL_62;
LABEL_24:
      restCountLabel = v16->fields.restCountLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3443/*"COUNT_INFO"*/, 0LL);
      v26 = 0;
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
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3443/*"COUNT_INFO"*/, 0LL);
        v37 = *isServantHaving || *isNotServantHaving;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
LABEL_78:
        v26 = v37;
LABEL_79:
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v26, 0LL);
        v38 = System_String__Format(v25, NumberFormat, 0LL);
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
      v30 = &StringLiteral_12210/*"SHOP_BUY_PREPARATION"*/;
      break;
  }
LABEL_56:
  v38 = LocalizationManager__Get((System_String_o *)*v30, 0LL);
LABEL_80:
  ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v38, restCountLabel, v38, v39);
}


void __fastcall ShopBuyItemListViewItemDraw__SetSpriteActive(
        ShopBuyItemListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_42B5BA8 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B5BA8 = 1;
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
      sub_B52A5C(gameObject, v7);
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

  if ( (byte_42B5BA9 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B5BA9 = 1;
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
      sub_B52A5C(v6, v7);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__ShowSoldOut(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v4; // x19
  struct ShopEntity_o *Shop_k__BackingField; // x8
  UnityEngine_Object_o *soldOutImage; // x20
  UILabel_o *v7; // x19
  System_String_o *v8; // x0
  const MethodInfo *v9; // x3
  UILabel_o *restCountLabel; // x1
  System_String_o *v11; // x2

  v4 = this;
  if ( (byte_42B5BB9 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_12217/*"SHOP_BUY_SOLD_OUT"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B5BB9 = 1;
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
    v8 = (System_String_o *)UnityEngine_Object__op_Inequality(0LL, soldOutImage, 0LL);
    if ( ((unsigned __int8)v8 & 1) != 0 )
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
    v11 = (System_String_o *)StringLiteral_1/*""*/;
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
    sub_B52A5C(this, item);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
LABEL_13:
  v7 = v4->fields.restCountLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12217/*"SHOP_BUY_SOLD_OUT"*/, 0LL);
  restCountLabel = v7;
  v11 = v8;
LABEL_25:
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

  if ( (byte_42B5BBB & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42B5BBB = 1;
  }
  numTextLabel = this->fields.numTextLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !numTextLabel )
    sub_B52A5C(NumberFormat, v7);
  UILabel__set_text(numTextLabel, NumberFormat, 0LL);
}