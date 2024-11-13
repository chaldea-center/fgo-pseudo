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
  __int64 v9; // x2

  if ( (byte_4B126C3 & 1) == 0 )
  {
    sub_1BCA7E0(&ShopBuyItemListViewItemDraw_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_20554/*"img_list_bg04"*/, v8, v9);
    byte_4B126C3 = 1;
  }
  ShopBuyItemListViewItemDraw_TypeInfo->static_fields->BASE_IMG_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_20554/*"img_list_bg04"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ShopBuyItemListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_20554/*"img_list_bg04"*/,
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
  __int64 v2; // x2
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct UISprite_o *v13; // x8
  struct UIAtlas_o *mAtlas; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct UISprite_o *v21; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4B126AA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B126AA = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL);
  if ( !v5 )
  {
    v13 = this->fields.baseSprite;
    if ( !v13
      || (mAtlas = v13->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseAtlas, (int64_t)mAtlas, v7, v8, v9, v10, v11, v12),
          (v21 = this->fields.baseSprite) == 0LL) )
    {
      sub_1BCAA3C(v5, v6);
    }
    mSpriteName = v21->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.baseSpriteName,
      (int64_t)mSpriteName,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
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
  __int64 v5; // x2
  __int64 v6; // x8
  SetItemMaster_o *v7; // x20
  unsigned __int64 v8; // x21
  int m_CancellationTokenSource; // w8
  int v10; // w9
  __int64 v11; // x10

  if ( (byte_4B126BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SetItemMaster___, ids, method);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1BCA7E0(
                                              &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                              v4,
                                              v5);
    byte_4B126BE = 1;
  }
  if ( !ids )
    goto LABEL_20;
  if ( !*(_QWORD *)&ids->max_length )
    return 0;
  this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_1BCAA3C(this, ids);
  this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SetItemMaster___);
  v6 = *(_QWORD *)&ids->max_length;
  if ( (int)v6 < 1 )
    return 0;
  v7 = (SetItemMaster_o *)this;
  v8 = 0LL;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)v6 )
LABEL_21:
      sub_1BCAA44(this, ids);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 SelfUserGame; // x0
  __int64 v11; // x1
  _DWORD *v12; // x21
  System_Int32_array *v13; // x19
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x21
  ShopEntity_o *v16; // x8
  int64_t v17; // x20
  int32_t v18; // w8
  UserItemMaster_o *v19; // x21
  unsigned int ItemCount; // w0
  ShopEntity_o *Shop_k__BackingField; // x8
  unsigned __int64 v22; // x22
  __int64 v23; // x24
  __int64 v24; // x1
  int64_t v25; // x23
  unsigned int v26; // w0

  if ( (byte_4B126BF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, item, method);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B126BF = 1;
  }
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !item || (v12 = (_DWORD *)SelfUserGame, (SelfUserGame = (__int64)item->fields._Shop_k__BackingField) == 0) )
LABEL_28:
    sub_1BCAA3C(SelfUserGame, v11);
  switch ( *(_DWORD *)(SelfUserGame + 68) )
  {
    case 1:
      SelfUserGame = sub_1BCA888(int___TypeInfo, 1LL);
      if ( !v12 )
        goto LABEL_28;
      v13 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_28;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_48;
      v18 = v12[44];
      goto LABEL_46;
    case 2:
      SelfUserGame = sub_1BCA888(int___TypeInfo, 1LL);
      if ( !v12 )
        goto LABEL_28;
      v13 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_28;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_48;
      v18 = v12[24];
      goto LABEL_46;
    case 4:
      SelfUserGame = sub_1BCA888(int___TypeInfo, 1LL);
      if ( !v12 )
        goto LABEL_28;
      v13 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_28;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_48;
      v18 = v12[46];
      goto LABEL_46;
    case 6:
    case 0xB:
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_28;
      SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)SelfUserGame,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !item->fields._Shop_k__BackingField )
        goto LABEL_28;
      v19 = (UserItemMaster_o *)SelfUserGame;
      ItemCount = ShopEntity__GetItemCount(item->fields._Shop_k__BackingField, 0LL);
      SelfUserGame = sub_1BCA888(int___TypeInfo, ItemCount);
      Shop_k__BackingField = item->fields._Shop_k__BackingField;
      if ( !Shop_k__BackingField )
        goto LABEL_28;
      v13 = (System_Int32_array *)SelfUserGame;
      v22 = 0LL;
      v23 = SelfUserGame + 32;
      break;
    case 8:
    case 9:
    case 0xC:
      v13 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_28;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
      SelfUserGame = NetworkManager__get_UserId(0LL);
      v16 = item->fields._Shop_k__BackingField;
      if ( !v16 )
        goto LABEL_28;
      v17 = SelfUserGame;
      SelfUserGame = ShopEntity__GetItemIDs(v16, 0, 0LL);
      if ( !MasterData_object )
        goto LABEL_28;
      SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)MasterData_object,
                                v17,
                                SelfUserGame,
                                0LL);
      if ( !SelfUserGame || !v13 )
        goto LABEL_28;
      if ( !v13->max_length )
        goto LABEL_48;
      v18 = *(_DWORD *)(SelfUserGame + 28);
      goto LABEL_46;
    case 0xA:
      SelfUserGame = sub_1BCA888(int___TypeInfo, 1LL);
      if ( !v12 )
        goto LABEL_28;
      v13 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_28;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_48;
      v18 = v12[47];
LABEL_46:
      v13->m_Items[1] = v18;
      return v13;
    default:
      v26 = ShopEntity__GetItemCount((ShopEntity_o *)SelfUserGame, 0LL);
      return (System_Int32_array *)sub_1BCA888(int___TypeInfo, v26);
  }
  while ( (__int64)v22 < ShopEntity__GetItemCount(Shop_k__BackingField, 0LL) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24);
    SelfUserGame = NetworkManager__get_UserId(0LL);
    if ( item->fields._Shop_k__BackingField )
    {
      v25 = SelfUserGame;
      SelfUserGame = ShopEntity__GetItemIDs(item->fields._Shop_k__BackingField, v22, 0LL);
      if ( v19 )
      {
        SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(v19, v25, SelfUserGame, 0LL);
        if ( SelfUserGame )
        {
          if ( v13 )
          {
            if ( v22 >= v13->max_length )
LABEL_48:
              sub_1BCAA44(SelfUserGame, v11);
            *(_DWORD *)(v23 + 4 * v22) = *(_DWORD *)(SelfUserGame + 28);
            Shop_k__BackingField = item->fields._Shop_k__BackingField;
            ++v22;
            if ( Shop_k__BackingField )
              continue;
          }
        }
      }
    }
    goto LABEL_28;
  }
  return v13;
}


void __fastcall ShopBuyItemListViewItemDraw__SetBandSprite(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopBuyItemListViewItemDraw_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct ShopEntity_o *Shop_k__BackingField; // x8
  bool v11; // w2
  __int64 *v12; // x9

  v5 = this;
  if ( (byte_4B126B1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20808/*"img_txt_shop"*/, item, method);
    sub_1BCA7E0(&StringLiteral_20793/*"img_txt_quest"*/, v6, v7);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_20727/*"img_txt_bgm"*/, v8, v9);
    byte_4B126B1 = 1;
  }
  if ( !item || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0LL )
    sub_1BCAA3C(this, item);
  v11 = 0;
  v12 = &StringLiteral_20793/*"img_txt_quest"*/;
  switch ( Shop_k__BackingField->fields.purchaseType )
  {
    case 5:
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItemDraw__GetIsSetItemEventShop(
                                                this,
                                                Shop_k__BackingField->fields.targetIds,
                                                0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_7;
      v11 = 0;
      break;
    case 6:
      goto LABEL_9;
    case 7:
    case 9:
LABEL_7:
      v12 = &StringLiteral_20808/*"img_txt_shop"*/;
      goto LABEL_9;
    case 0xF:
      v12 = &StringLiteral_20727/*"img_txt_bgm"*/;
LABEL_9:
      ShopBuyItemListViewItemDraw__SetSpriteName(this, v5->fields.bandSprite, (System_String_o *)*v12, v3);
      v11 = 1;
      break;
    default:
      break;
  }
  ShopBuyItemListViewItemDraw__SetSpriteActive(this, v5->fields.bandSprite, v11, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewItemDraw__SetBaseButton(
        ShopBuyItemListViewItemDraw_o *this,
        bool isInPreparation,
        int32_t dispMode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *baseButton; // x22
  __int64 v10; // x1
  UnityEngine_Object_o *baseSprite; // x20
  UIWidget_o *v12; // x19
  UnityEngine_Color_o **v13; // x0

  if ( (byte_4B126B7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isInPreparation, *(_QWORD *)&dispMode);
    sub_1BCA7E0(&UICommonButtonColor_TypeInfo, v7, v8);
    byte_4B126B7 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isInPreparation);
  if ( UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      v12 = (UIWidget_o *)this->fields.baseSprite;
      v13 = (UnityEngine_Color_o **)UICommonButtonColor_TypeInfo;
      if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo, v10);
        v13 = (UnityEngine_Color_o **)UICommonButtonColor_TypeInfo;
      }
      if ( v12 )
      {
        UIWidget__set_color(v12, *v13[23], 0LL);
        return;
      }
LABEL_18:
      sub_1BCAA3C(v13, v10);
    }
  }
  else
  {
    v13 = (UnityEngine_Color_o **)this->fields.baseButton;
    if ( !v13 )
      goto LABEL_18;
    (*(void (__fastcall **)(UnityEngine_Color_o **, bool, _QWORD))&(*v13)[24].fields.b)(
      v13,
      !isInPreparation,
      *(_QWORD *)&(*v13)[25].fields.r);
    v13 = (UnityEngine_Color_o **)this->fields.baseButton;
    if ( !v13 )
      goto LABEL_18;
    UICommonButton__SetColliderEnable((UICommonButton_o *)v13, dispMode == 3 || isInPreparation, 1, 0LL);
    v13 = (UnityEngine_Color_o **)this->fields.baseButton;
    if ( !v13 )
      goto LABEL_18;
    (*(void (__fastcall **)(UnityEngine_Color_o **, _QWORD, __int64, _QWORD))&(*v13)[33].fields.b)(
      v13,
      0LL,
      1LL,
      *(_QWORD *)&(*v13)[34].fields.r);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetBaseSprite(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v12; // x0
  __int64 v13; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x0
  int32_t v15; // w0
  int bgImageId; // t1
  UISprite_o *v17; // x21
  System_String_o *v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x22
  struct ShopEntity_o *v21; // x8
  UISprite_o *v22; // x20
  System_String_o **onChange; // x8

  if ( (byte_4B126B2 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&ShopBuyItemListViewItemDraw_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_23523/*"shop_item_menu_"*/, v9, v10);
    byte_4B126B2 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  v12 = (UISprite_o *)UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) == 0 )
  {
    if ( item )
    {
      Shop_k__BackingField = item->fields._Shop_k__BackingField;
      if ( Shop_k__BackingField )
      {
        bgImageId = Shop_k__BackingField->fields.bgImageId;
        v15 = (_DWORD)Shop_k__BackingField + 124;
        if ( bgImageId >= 1 )
        {
          v17 = this->fields.baseSprite;
          v18 = System_Int32__ToString(v15, 0LL);
          v20 = System_String__Concat_62401220((System_String_o *)StringLiteral_23523/*"shop_item_menu_"*/, v18, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v19);
          if ( AtlasManager__SetShopBanner_38576124(v17, v20, 0LL) )
            return;
        }
      }
      v12 = this->fields.baseSprite;
      if ( v12 )
      {
        UISprite__set_atlas(v12, this->fields.baseAtlas, 0LL);
        v21 = item->fields._Shop_k__BackingField;
        if ( v21 )
        {
          v22 = this->fields.baseSprite;
          if ( v21->fields.shopType == 9 )
          {
            v12 = (UISprite_o *)ShopBuyItemListViewItemDraw_TypeInfo;
            if ( !ShopBuyItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ShopBuyItemListViewItemDraw_TypeInfo, v13);
              v12 = (UISprite_o *)ShopBuyItemListViewItemDraw_TypeInfo;
            }
            onChange = (System_String_o **)v12->fields.onChange;
          }
          else
          {
            onChange = &this->fields.baseSpriteName;
          }
          if ( v22 )
          {
            UISprite__set_spriteName(v22, *onChange, 0LL);
            return;
          }
        }
      }
    }
    sub_1BCAA3C(v12, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewItemDraw__SetButtonActive(
        ShopBuyItemListViewItemDraw_o *this,
        UICommonButton_o *button,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4B126AE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, button, isActive);
    byte_4B126AE = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, button);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)button, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !button || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)button, 0LL)) == 0LL )
      sub_1BCAA3C(gameObject, v7);
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
  __int64 v13; // x1
  UISprite_o *iconSprite; // x19

  if ( (byte_4B126BB & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, itemIcon, commonConsumeEntity);
    byte_4B126BB = 1;
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
          sub_1BCAA3C(IsAp, v11);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0LL);
        GameObjectExtensions__SetLocalPositionY(gameObject, -3.0, 0LL);
        iconSprite = itemIcon->fields.iconSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct UILabel_o *restTimeLabel; // x22
  bool v16; // w21
  ShopBuyItemListViewItemDraw_o *RestTime2; // x0
  const MethodInfo *v18; // x3
  struct UILabel_o *v19; // x19
  UILabel_o *v20; // x1

  if ( (byte_4B126BD & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, isRarePriShopPurchased, isIndefinitePeriodShowable);
    sub_1BCA7E0(&StringLiteral_12204/*"SHOP_INDEFINITE_PERIOD"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_13474/*"TIME_REST2_NONE"*/, v13, v14);
    byte_4B126BD = 1;
  }
  if ( activeTime > 0 )
  {
    restTimeLabel = this->fields.restTimeLabel;
    v16 = isRarePriShopPurchased || isIndefinitePeriodShowable;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( v16 )
      {
LABEL_6:
        RestTime2 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12204/*"SHOP_INDEFINITE_PERIOD"*/,
                                                       0LL);
LABEL_12:
        v20 = restTimeLabel;
        goto LABEL_13;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isRarePriShopPurchased);
      if ( v16 )
        goto LABEL_6;
    }
    RestTime2 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__GetRestTime2(activeTime, enterTime, 0LL);
    goto LABEL_12;
  }
  v19 = this->fields.restTimeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isRarePriShopPurchased);
  RestTime2 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13474/*"TIME_REST2_NONE"*/, 0LL);
  v20 = v19;
LABEL_13:
  ShopBuyItemListViewItemDraw__SetLabelText(RestTime2, v20, (System_String_o *)RestTime2, v18);
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

  if ( (byte_4B126BC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, eventItemIcon, itemEntity);
    byte_4B126BC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, eventItemIcon);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)eventItemIcon, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !eventItemIcon )
      sub_1BCAA3C(v8, v9);
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
      sub_1BCAA3C(this, item);
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
      sub_1BCAA44(this, item);
  }
  v10 = CommonConsumeEntities_k__BackingField->m_Items[1];
  if ( v10 )
  {
    eventItemIcon = v6->fields.eventItemIcon2;
    goto LABEL_35;
  }
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4B126B6 & 1) == 0 )
  {
    this = (ShopBuyItemListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_9382/*"NONE"*/, item, isInPreparation);
    byte_4B126B6 = 1;
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
                                                    (System_String_o *)StringLiteral_9382/*"NONE"*/,
                                                    0LL);
          goto LABEL_21;
        }
LABEL_23:
        sub_1BCAA3C(this, item);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewItemDraw__SetItem(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  ShopBuyItemListViewItemDraw_o *v39; // x0
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  _BOOL8 IsPreparation; // x0
  _BOOL4 v43; // w21
  const MethodInfo *v44; // x3
  ShopBuyItemListViewItemDraw_o *v45; // x0
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x2
  ShopBuyItemListViewItemDraw_o *v48; // x0
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x2
  bool v51; // w23
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x1
  UILabel_o *messageTextLabel; // x24
  const MethodInfo *v55; // x5
  const MethodInfo *v56; // x3
  ShopEntity_o *Shop_k__BackingField; // x23
  UISprite_o *possessionSprite; // x24
  const MethodInfo *v59; // x1
  bool HaveIconShowable; // w0
  const MethodInfo *v61; // x3
  const MethodInfo *v62; // x2
  const MethodInfo *v63; // x2
  __int64 v64; // x1
  UnityEngine_Object_o *chocolateSprite; // x23
  _BOOL8 v66; // x0
  __int64 v67; // x1
  const MethodInfo *v68; // x3
  int64_t IsChocolateSvtEquip; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v71; // x1
  ShopBuyItemListViewItemDraw_o *v72; // x0
  const MethodInfo *v73; // x3
  __int64 v74; // x1
  UnityEngine_Object_o *soldOutImage; // x23
  bool v76; // w23
  __int64 v77; // x1
  const MethodInfo *v78; // x2
  ShopEntity_o *v79; // x24
  UILabel_o *textOnMask; // x25
  const MethodInfo *v81; // x3
  const MethodInfo *v82; // x3
  _BOOL4 IsRarePriShopPurchased_k__BackingField; // w22
  const MethodInfo *v84; // x1
  bool IsIndefinitePeriodShowable; // w0
  const MethodInfo *v86; // x5
  struct ShopEntity_o *v87; // x8
  int64_t closedAt; // x3
  ShopBuyItemListViewItemDraw_o *v89; // x0
  const MethodInfo *v90; // x3
  __int64 v91; // x1
  UnityEngine_Object_o *priceInfo1; // x22
  struct ShopEntity_o *v93; // x8
  int32_t payType; // w8
  const MethodInfo *v95; // x3
  UnityEngine_GameObject_o *v96; // x22
  struct UnityEngine_GameObject_o *priceInfo2; // x22
  bool v98; // w1
  const MethodInfo *v99; // x3
  const MethodInfo *v100; // x3
  _BOOL4 v101; // w22
  struct ShopEntity_o *v102; // x8
  _BOOL4 v103; // w23
  _BOOL4 v104; // w8
  struct ShopEntity_o *v105; // x8
  Il2CppObject *v106; // x21
  __int64 v107; // x1
  Il2CppObject *MasterData_object; // x22
  struct ShopEntity_o *v109; // x8
  UserShopEntity_o *v110; // x22
  System_String_o **v111; // x8
  System_String_o **v112; // x9
  struct CommonConsumeEntity_array *CommonConsumeEntities_k__BackingField; // x22
  bool v114; // zf
  System_String_o *v115; // x20
  __int64 v116; // x1
  System_String_o *v117; // x0
  struct UILabel_o *freeExchangeConditionNoticeLabel; // x8
  int mWidth; // w8
  struct UISprite_array *freeExchangeConditionNoticeBgSprites; // x21
  int v121; // w9
  int max_length; // w8
  unsigned int v123; // w22
  int32_t v124; // w19
  Il2CppClass **v125; // x8
  UISprite_o *v126; // x20
  __int64 v127; // x1
  const MethodInfo *v128; // [xsp+0h] [xbp-80h]
  const MethodInfo *v129; // [xsp+0h] [xbp-80h]
  bool isNotCommandCodeGet; // [xsp+14h] [xbp-6Ch] BYREF
  bool isNotCostumeGet; // [xsp+18h] [xbp-68h] BYREF
  bool isServantHaving; // [xsp+1Ch] [xbp-64h] BYREF
  bool isNotServantHaving; // [xsp+20h] [xbp-60h] BYREF
  bool isNotServantGet; // [xsp+24h] [xbp-5Ch] BYREF
  System_String_o *itemName; // [xsp+28h] [xbp-58h] BYREF
  System_String_o *message; // [xsp+38h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_4B126AB & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&ShopBuyItemUtility_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&StringLiteral_12116/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_19828/*"freeShopCondMessage"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_12211/*"SHOP_PAID_EXCHANGE_CONDITIONS"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_19827/*"freeShopCondId"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_20875/*"info_base"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_12117/*"SHOP_ACHIEVEMENT_PAID_EXCHANGE_CONDITIONS"*/, v35, v36);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_12184/*"SHOP_FREE_EXCHANGE_CONDITIONS"*/, v37, v38);
    byte_4B126AB = 1;
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
    ShopBuyItemListViewItemDraw__SetSpriteActive(v89, v6->fields.addRangeSprite, 0, v90);
    return;
  }
  ShopBuyItemListViewItemDraw__SetLabelActive(this, v6->fields.LineText, 0, method);
  ShopBuyItemListViewItemDraw__SetLabelActive(v39, v6->fields.LineText2digit, 0, v40);
  IsPreparation = ShopBuyItemListViewItem__GetIsPreparation(item, &message, &itemName, v41);
  v43 = IsPreparation;
  ShopBuyItemListViewItemDraw__SetSpriteActive(
    (ShopBuyItemListViewItemDraw_o *)IsPreparation,
    v6->fields.rangeSprite,
    mode == 0,
    v44);
  ShopBuyItemListViewItemDraw__SetSpriteActive(v45, v6->fields.addRangeSprite, item->fields.isTerminationSpace, v46);
  ShopBuyItemListViewItemDraw__SetBandSprite(v6, item, v47);
  ShopBuyItemListViewItemDraw__SetButtonActive(v48, v6->fields.infoButton, 0, v49);
  if ( !mode )
    return;
  ShopBuyItemListViewItemDraw__SetBaseSprite(v6, item, v50);
  v51 = v43;
  ShopBuyItemListViewItemDraw__SetItemIcon(v6, item, v43, v52);
  messageTextLabel = v6->fields.messageTextLabel;
  if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo, v53);
  ShopBuyItemUtility__SetDefaultMessageLabel(messageTextLabel, v53);
  ShopBuyItemListViewItemDraw__SetNameAndMessageText(v6, item, v51, message, itemName, v55);
  ShopBuyItemListViewItemDraw__SetNumText(v6, item, v51, v56);
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  possessionSprite = v6->fields.possessionSprite;
  HaveIconShowable = ShopBuyItemListViewItem__get_IsHaveIconShowable(item, v59);
  ShopBuyItemUtility__SetShopHaveStatusIcon(Shop_k__BackingField, possessionSprite, HaveIconShowable, v61);
  ShopBuyItemListViewItemDraw__SetShopResetText(v6, item->fields._Shop_k__BackingField, v62);
  ShopBuyItemListViewItemDraw__SetPossessionInfo(v6, item, v63);
  chocolateSprite = (UnityEngine_Object_o *)v6->fields.chocolateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64);
  v66 = UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL);
  if ( v66 )
  {
    IsChocolateSvtEquip = (int64_t)v6->fields.chocolateSprite;
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsChocolateSvtEquip, 0LL);
    IsChocolateSvtEquip = ShopBuyItemListViewItem__get_IsChocolateSvtEquip(item, v71);
    if ( !gameObject )
      goto LABEL_100;
    UnityEngine_GameObject__SetActive(gameObject, IsChocolateSvtEquip & 1, 0LL);
  }
  ShopBuyItemListViewItemDraw__SetLabelText(
    (ShopBuyItemListViewItemDraw_o *)v66,
    v6->fields.textOnMask,
    (System_String_o *)StringLiteral_1/*""*/,
    v68);
  ShopBuyItemListViewItemDraw__SetLabelText(v72, v6->fields.prepareTextOnMask, (System_String_o *)StringLiteral_1/*""*/, v73);
  soldOutImage = (UnityEngine_Object_o *)v6->fields.soldOutImage;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v74);
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
  v76 = v43;
  ShopBuyItemListViewItemDraw__SetRestCountText(
    v6,
    item,
    v43,
    &isNotServantGet,
    &isNotServantHaving,
    &isServantHaving,
    &isNotCostumeGet,
    &isNotCommandCodeGet,
    v128);
  ShopBuyItemListViewItemDraw__SetMask(
    v6,
    item,
    v43,
    isNotServantGet,
    isNotServantHaving,
    isServantHaving,
    isNotCostumeGet,
    isNotCommandCodeGet,
    v129);
  v79 = item->fields._Shop_k__BackingField;
  textOnMask = v6->fields.textOnMask;
  if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo, v77);
  ShopBuyItemUtility__SetAddTextOnMask(v79, textOnMask, v78);
  ShopBuyItemListViewItemDraw__SetInfoButton(v6, item, v76, v81);
  ShopBuyItemListViewItemDraw__SetBaseButton(v6, v76, mode, v82);
  IsRarePriShopPurchased_k__BackingField = item->fields._IsRarePriShopPurchased_k__BackingField;
  IsIndefinitePeriodShowable = ShopBuyItemListViewItem__get_IsIndefinitePeriodShowable(item, v84);
  v87 = item->fields._Shop_k__BackingField;
  if ( v87 )
    closedAt = v87->fields.closedAt;
  else
    closedAt = 0LL;
  ShopBuyItemListViewItemDraw__SetEventEndTime(
    v6,
    IsRarePriShopPurchased_k__BackingField,
    IsIndefinitePeriodShowable,
    closedAt,
    item->fields._EnterTime_k__BackingField,
    v86);
  priceInfo1 = (UnityEngine_Object_o *)v6->fields.priceInfo1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v91);
  if ( UnityEngine_Object__op_Equality(priceInfo1, 0LL, 0LL) )
    return;
  v93 = item->fields._Shop_k__BackingField;
  if ( !v93 )
  {
LABEL_35:
    IsChocolateSvtEquip = (int64_t)v6->fields.priceInfoFree;
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0LL);
    IsChocolateSvtEquip = (int64_t)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    v96 = v6->fields.priceInfo1;
    IsChocolateSvtEquip = ShopEntity__GetItemCount((ShopEntity_o *)IsChocolateSvtEquip, 0LL);
    if ( !v96 )
      goto LABEL_100;
    UnityEngine_GameObject__SetActive(v96, (int)IsChocolateSvtEquip < 2, 0LL);
    IsChocolateSvtEquip = (int64_t)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    priceInfo2 = v6->fields.priceInfo2;
    IsChocolateSvtEquip = ShopEntity__GetItemCount((ShopEntity_o *)IsChocolateSvtEquip, 0LL);
    if ( !priceInfo2 )
      goto LABEL_100;
    v98 = (int)IsChocolateSvtEquip > 1;
    IsChocolateSvtEquip = (int64_t)priceInfo2;
LABEL_41:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, v98, 0LL);
    ShopBuyItemListViewItemDraw__SetPriceIconText(v6, item, v43, v99);
    ShopBuyItemListViewItemDraw__SetEventItemIconText(v6, item, v43, v100);
    goto LABEL_42;
  }
  payType = v93->fields.payType;
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
      ShopBuyItemListViewItemDraw__SetPriceIconText(v6, item, v43, v95);
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
    v98 = (signed int)CommonConsumeEntities_k__BackingField->max_length > 1;
    goto LABEL_41;
  }
LABEL_42:
  IsChocolateSvtEquip = (int64_t)item->fields._Shop_k__BackingField;
  if ( !IsChocolateSvtEquip )
    goto LABEL_100;
  IsChocolateSvtEquip = ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)IsChocolateSvtEquip, 0, 0LL);
  v101 = 0;
  if ( (IsChocolateSvtEquip & 1) != 0 )
  {
    IsChocolateSvtEquip = (int64_t)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    IsChocolateSvtEquip = ShopEntity__IsSoldOut((ShopEntity_o *)IsChocolateSvtEquip, 0LL);
    v101 = (IsChocolateSvtEquip & 1) == 0;
  }
  v102 = item->fields._Shop_k__BackingField;
  if ( !v102 )
    goto LABEL_100;
  if ( v102->fields.purchaseType == 14 )
  {
    IsChocolateSvtEquip = ShopEntity__IsEligibleForFreeFeaturesTheCostumeRelease(
                            item->fields._Shop_k__BackingField,
                            0LL);
    v102 = item->fields._Shop_k__BackingField;
    if ( !v102 )
      goto LABEL_100;
    v103 = (IsChocolateSvtEquip & 1) == 0;
  }
  else
  {
    v103 = 0;
  }
  IsChocolateSvtEquip = (int64_t)v102->fields.script;
  if ( !IsChocolateSvtEquip )
LABEL_100:
    sub_1BCAA3C(IsChocolateSvtEquip, v67);
  IsChocolateSvtEquip = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          (System_Collections_Generic_Dictionary_object__object__o *)IsChocolateSvtEquip,
                          (Il2CppObject *)StringLiteral_19827/*"freeShopCondId"*/,
                          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( (IsChocolateSvtEquip & 1) != 0 && (!v43 || !v101) )
  {
    IsChocolateSvtEquip = (int64_t)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    IsChocolateSvtEquip = ShopEntity__IsAfterTheFreeShopReleaseDate((ShopEntity_o *)IsChocolateSvtEquip, 0LL);
    v104 = (IsChocolateSvtEquip & 1) == 0;
  }
  else
  {
    v104 = 1;
  }
  if ( v104 || v103 )
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
  v105 = item->fields._Shop_k__BackingField;
  if ( !v105 )
    goto LABEL_100;
  IsChocolateSvtEquip = (int64_t)v105->fields.script;
  if ( !IsChocolateSvtEquip )
    goto LABEL_100;
  IsChocolateSvtEquip = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                   (System_Collections_Generic_Dictionary_object__object__o *)IsChocolateSvtEquip,
                                   (Il2CppObject *)StringLiteral_19828/*"freeShopCondMessage"*/,
                                   (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !IsChocolateSvtEquip )
    goto LABEL_100;
  v106 = (Il2CppObject *)(*(__int64 (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)IsChocolateSvtEquip + 360LL))(
                           IsChocolateSvtEquip,
                           *(_QWORD *)(*(_QWORD *)IsChocolateSvtEquip + 368LL));
  IsChocolateSvtEquip = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsChocolateSvtEquip )
    goto LABEL_100;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)IsChocolateSvtEquip,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v107);
  IsChocolateSvtEquip = NetworkManager__get_UserId(0LL);
  v109 = item->fields._Shop_k__BackingField;
  if ( !v109 )
    goto LABEL_100;
  if ( !MasterData_object )
    goto LABEL_100;
  IsChocolateSvtEquip = (int64_t)UserShopMaster__GetEntityDefinitely(
                                   (UserShopMaster_o *)MasterData_object,
                                   IsChocolateSvtEquip,
                                   v109->fields.id,
                                   0LL);
  if ( !item->fields._Shop_k__BackingField )
    goto LABEL_100;
  v110 = (UserShopEntity_o *)IsChocolateSvtEquip;
  IsChocolateSvtEquip = ShopEntity__IsFulFilledFreeExchangeCondition(item->fields._Shop_k__BackingField, 0LL);
  if ( !v110 )
    goto LABEL_100;
  if ( v110->fields.num )
  {
    IsChocolateSvtEquip = (int64_t)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_100;
    if ( !ShopEntity__IsPaidExchange((ShopEntity_o *)IsChocolateSvtEquip, 0LL) )
      goto LABEL_56;
    LOBYTE(IsChocolateSvtEquip) = UserShopEntity__get_IsReturnRarePriShop(v110, 0LL);
    v111 = (System_String_o **)&StringLiteral_12211/*"SHOP_PAID_EXCHANGE_CONDITIONS"*/;
    v112 = (System_String_o **)&StringLiteral_12117/*"SHOP_ACHIEVEMENT_PAID_EXCHANGE_CONDITIONS"*/;
  }
  else
  {
    v111 = (System_String_o **)&StringLiteral_12184/*"SHOP_FREE_EXCHANGE_CONDITIONS"*/;
    v112 = (System_String_o **)&StringLiteral_12116/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/;
  }
  v114 = (IsChocolateSvtEquip & 1) == 0;
  IsChocolateSvtEquip = (int64_t)v6->fields.freeExchangeConditionNoticeRoot;
  if ( !v114 )
    v111 = v112;
  if ( !IsChocolateSvtEquip )
    goto LABEL_100;
  v115 = *v111;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 1, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v116);
  v117 = LocalizationManager__Get(v115, 0LL);
  IsChocolateSvtEquip = (int64_t)System_String__Format(v117, v106, 0LL);
  if ( !v6->fields.freeExchangeConditionNoticeLabel )
    goto LABEL_100;
  UILabel__set_text(v6->fields.freeExchangeConditionNoticeLabel, (System_String_o *)IsChocolateSvtEquip, 0LL);
  freeExchangeConditionNoticeLabel = v6->fields.freeExchangeConditionNoticeLabel;
  if ( !freeExchangeConditionNoticeLabel )
    goto LABEL_100;
  mWidth = freeExchangeConditionNoticeLabel->fields.mWidth;
  freeExchangeConditionNoticeBgSprites = v6->fields.freeExchangeConditionNoticeBgSprites;
  v121 = mWidth >= 512 ? 512 : mWidth;
  if ( !freeExchangeConditionNoticeBgSprites )
    goto LABEL_100;
  max_length = freeExchangeConditionNoticeBgSprites->max_length;
  if ( max_length >= 1 )
  {
    v123 = 0;
    v124 = v121 + 16;
    while ( 1 )
    {
      if ( v123 >= max_length )
        sub_1BCAA44(IsChocolateSvtEquip, v67);
      v125 = &freeExchangeConditionNoticeBgSprites->obj.klass + (int)v123;
      v126 = (UISprite_o *)v125[4];
      if ( !v126 )
        break;
      UIWidget__set_width((UIWidget_o *)v125[4], v124, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v127);
      IsChocolateSvtEquip = AtlasManager__SetEventUI(v126, (System_String_o *)StringLiteral_20875/*"info_base"*/, 0LL);
      max_length = freeExchangeConditionNoticeBgSprites->max_length;
      if ( (int)++v123 >= max_length )
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
      sub_1BCAA3C(itemIcon, item);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewItemDraw__SetLabelActive(
        ShopBuyItemListViewItemDraw_o *this,
        UILabel_o *label,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4B126AC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, label, isActive);
    byte_4B126AC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_1BCAA3C(gameObject, v7);
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

  if ( (byte_4B126AD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, label, text);
    byte_4B126AD = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1BCAA3C(v6, v7);
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
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  UILabel_o *v53; // x21
  const MethodInfo *v54; // x3
  UILabel_o *v55; // x1
  ShopBuyItemListViewItemDraw_o *v56; // x2
  ShopEntity_o *Shop_k__BackingField; // x0
  _BOOL4 v58; // w23
  UnityEngine_Object_o *anotherBuyable; // x21
  System_Int32_array *AnotherPayItemIds; // x0
  __int64 v61; // x1
  const MethodInfo *v62; // x2
  const MethodInfo *v63; // x3
  UnityEngine_Object_o *anotherPayItemImage; // x21
  UnityEngine_GameObject_o *v65; // x21
  UISprite_o *v66; // x21
  int32_t rangeSprite; // w22
  UISprite_o *maskSprite; // x1
  bool v69; // w2
  struct ShopEntity_o *v70; // x8
  struct ShopEntity_o *v71; // x8
  bool v72; // w20
  struct ShopEntity_o *v73; // x8
  ShopReleaseMaster_o *v74; // x21
  struct ShopEntity_o *v75; // x8
  struct UISprite_o *v76; // x8
  struct ShopEntity_o *v77; // x8
  struct System_Int32_array *targetIds; // x8
  Il2CppObject *Entity; // x0
  struct ShopEntity_o *v80; // x8
  __int64 v81; // x1
  __int64 *v82; // x8
  ShopBuyItemListViewItemDraw_o *Empty; // x21
  __int64 v84; // x1
  UILabel_o *v85; // x21
  ShopBuyItemListViewItemDraw_o *v86; // x0
  const MethodInfo *v87; // x3
  struct ShopEntity_o *v88; // x8
  const MethodInfo *v89; // x2
  UILabel_o *textOnMask; // x20
  struct ShopEntity_o *v91; // x8
  __int64 v92; // x1
  UILabel_o *v93; // x21
  UnityEngine_Object_o *prepareTextOnMask; // x21
  const MethodInfo *v95; // x1
  __int64 v96; // x1
  UILabel_o *v97; // x19
  ShopBuyItemListViewItemDraw_o *v98; // x0
  const MethodInfo *v99; // x3
  int32_t questId; // [xsp+Ch] [xbp-54h] BYREF

  v16 = this;
  if ( (byte_4B126B8 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, isInPreparation);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopReleaseMaster___, v21, v22);
    sub_1BCA7E0(&DataManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v27, v28);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34);
    sub_1BCA7E0(&string_TypeInfo, v35, v36);
    sub_1BCA7E0(&StringLiteral_12174/*"SHOP_CANT_BUY"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_12214/*"SHOP_QUEST_OPEN"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_12212/*"SHOP_QUEST_ALREADY_CLEARED"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_19827/*"freeShopCondId"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_12210/*"SHOP_NOT_RELEASE_SET_ITEM"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_12146/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v49, v50);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_12120/*"SHOP_ALREADY_GET"*/, v51, v52);
    byte_4B126B8 = 1;
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
      v58 = !ShopEntity__IsAnotherItemBuyable((ShopEntity_o *)this, 0LL);
    }
    else
    {
      v58 = 0;
    }
    anotherBuyable = (UnityEngine_Object_o *)v16->fields.anotherBuyable;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
    AnotherPayItemIds = (System_Int32_array *)UnityEngine_Object__op_Inequality(anotherBuyable, 0LL, 0LL);
    if ( ((unsigned __int8)AnotherPayItemIds & 1) != 0 )
    {
      anotherPayItemImage = (UnityEngine_Object_o *)v16->fields.anotherPayItemImage;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v61);
      AnotherPayItemIds = (System_Int32_array *)UnityEngine_Object__op_Inequality(anotherPayItemImage, 0LL, 0LL);
      if ( ((unsigned __int8)AnotherPayItemIds & 1) != 0 )
      {
        this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
        if ( !this )
          goto LABEL_139;
        v65 = v16->fields.anotherBuyable;
        this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsAnotherItemBuyable((ShopEntity_o *)this, 0LL);
        if ( !v65 )
          goto LABEL_139;
        UnityEngine_GameObject__SetActive(v65, (unsigned __int8)this & 1, 0LL);
        this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
        if ( !this )
          goto LABEL_139;
        AnotherPayItemIds = ShopEntity__GetAnotherPayItemIds((ShopEntity_o *)this, 0LL);
        if ( AnotherPayItemIds )
        {
          this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
          if ( !this )
            goto LABEL_139;
          v66 = v16->fields.anotherPayItemImage;
          this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetAnotherPayItemIds((ShopEntity_o *)this, 0LL);
          if ( !this )
            goto LABEL_139;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
LABEL_140:
            sub_1BCAA44(this, item);
          rangeSprite = (int32_t)this->fields.rangeSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item);
          AnotherPayItemIds = (System_Int32_array *)AtlasManager__SetItem(v66, rangeSprite, 0LL);
        }
      }
    }
    if ( v58 )
    {
      ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(v16, item, v62);
      maskSprite = v16->fields.maskSprite;
      v69 = 1;
LABEL_43:
      ShopBuyItemListViewItemDraw__SetSpriteActive(
        (ShopBuyItemListViewItemDraw_o *)AnotherPayItemIds,
        maskSprite,
        v69,
        v63);
      return;
    }
    v70 = item->fields._Shop_k__BackingField;
    if ( !v70 || v70->fields.purchaseType != 6 )
    {
      maskSprite = v16->fields.maskSprite;
      v69 = 0;
      goto LABEL_43;
    }
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_139;
    this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
    v71 = item->fields._Shop_k__BackingField;
    if ( !v71 )
      goto LABEL_139;
    if ( !this )
      goto LABEL_139;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isQuestNotClearSet(
                                              (ShopReleaseMaster_o *)this,
                                              v71->fields.id,
                                              &questId,
                                              0LL);
    if ( !item->fields._Shop_k__BackingField )
      goto LABEL_139;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !ShopEntity__isQuestNotClearItemClosed(item->fields._Shop_k__BackingField, 1, 0LL) )
      {
LABEL_41:
        v72 = 0;
LABEL_111:
        this = (ShopBuyItemListViewItemDraw_o *)v16->fields.maskSprite;
        if ( this )
        {
          this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v72, 0LL);
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12214/*"SHOP_QUEST_OPEN"*/, 0LL);
    if ( !textOnMask )
      goto LABEL_139;
    UILabel__set_text(textOnMask, (System_String_o *)this, 0LL);
    v72 = 1;
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
      v76 = this->fields.maskSprite;
      if ( !v76 )
        goto LABEL_139;
      if ( !LODWORD(v76->fields.m_CancellationTokenSource) )
        goto LABEL_140;
      if ( !LODWORD(v76->fields.leftAnchor) )
        goto LABEL_68;
      this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_139;
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      v77 = item->fields._Shop_k__BackingField;
      if ( !v77 )
        goto LABEL_139;
      targetIds = v77->fields.targetIds;
      if ( !targetIds )
        goto LABEL_139;
      if ( !targetIds->max_length )
        goto LABEL_140;
      if ( !this )
        goto LABEL_139;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 targetIds->m_Items[1],
                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Entity
        && ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL)
        && item->fields._ShopKind_k__BackingField != 6 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
        v82 = &StringLiteral_12174/*"SHOP_CANT_BUY"*/;
        goto LABEL_128;
      }
LABEL_68:
      if ( isNotServantGet || isNotServantHaving || isServantHaving || isNotCostumeGet || isNotCommandCodeGet )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item);
        this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopReleaseMaster___);
        v80 = item->fields._Shop_k__BackingField;
        if ( v80 && this )
        {
          this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                    (ShopReleaseMaster_o *)this,
                                                    v80->fields.id,
                                                    40,
                                                    0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v56 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_1/*""*/;
            goto LABEL_129;
          }
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v81);
          v82 = &StringLiteral_12120/*"SHOP_ALREADY_GET"*/;
LABEL_128:
          this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v82, 0LL);
          v56 = this;
LABEL_129:
          v55 = v16->fields.textOnMask;
LABEL_130:
          ShopBuyItemListViewItemDraw__SetLabelText(this, v55, (System_String_o *)v56, v54);
          goto LABEL_131;
        }
LABEL_139:
        sub_1BCAA3C(this, item);
      }
LABEL_131:
      prepareTextOnMask = (UnityEngine_Object_o *)v16->fields.prepareTextOnMask;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
      if ( UnityEngine_Object__op_Inequality(prepareTextOnMask, 0LL, 0LL)
        && ShopBuyItemListViewItem__IsPrepareTextOnMask(item, v95) )
      {
        v97 = v16->fields.prepareTextOnMask;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v96);
        v98 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12146/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, 0LL);
        ShopBuyItemListViewItemDraw__SetLabelText(v98, v97, (System_String_o *)v98, v99);
      }
      return;
    case 5:
      Empty = (ShopBuyItemListViewItemDraw_o *)string_TypeInfo->static_fields->Empty;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v84);
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12210/*"SHOP_NOT_RELEASE_SET_ITEM"*/, 0LL);
        Empty = this;
      }
      v55 = v16->fields.textOnMask;
      v56 = Empty;
      goto LABEL_130;
    case 6:
      if ( !ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)this, 0, 0LL) )
        goto LABEL_131;
      v85 = v16->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
      v86 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12212/*"SHOP_QUEST_ALREADY_CLEARED"*/, 0LL);
      ShopBuyItemListViewItemDraw__SetLabelText(v86, v85, (System_String_o *)v86, v87);
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_139;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_131;
      v88 = item->fields._Shop_k__BackingField;
      if ( !v88 )
        goto LABEL_139;
      this = (ShopBuyItemListViewItemDraw_o *)v88->fields.script;
      if ( !this )
        goto LABEL_139;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)this,
             (Il2CppObject *)StringLiteral_19827/*"freeShopCondId"*/,
             (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
LABEL_103:
        ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(v16, item, v89);
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
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item);
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopReleaseMaster___);
      v91 = item->fields._Shop_k__BackingField;
      if ( !v91 || !this )
        goto LABEL_139;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                (ShopReleaseMaster_o *)this,
                                                v91->fields.id,
                                                1,
                                                0LL);
      v93 = v16->fields.textOnMask;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v92);
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12120/*"SHOP_ALREADY_GET"*/, 0LL);
        v56 = this;
      }
      else
      {
        v56 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_1/*""*/;
      }
      v55 = v93;
      goto LABEL_130;
    default:
      if ( !isNotServantGet && !isNotServantHaving && !isServantHaving && !isNotCostumeGet && !isNotCommandCodeGet )
        goto LABEL_131;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item);
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopReleaseMaster___);
      v73 = item->fields._Shop_k__BackingField;
      if ( !v73 )
        goto LABEL_139;
      v74 = (ShopReleaseMaster_o *)this;
      if ( !this )
        goto LABEL_139;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                (ShopReleaseMaster_o *)this,
                                                v73->fields.id,
                                                1,
                                                0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_56;
      v75 = item->fields._Shop_k__BackingField;
      if ( !v75 )
        goto LABEL_139;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(v74, v75->fields.id, 40, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_7:
        v53 = v16->fields.textOnMask;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12120/*"SHOP_ALREADY_GET"*/, 0LL);
        v55 = v53;
        v56 = this;
      }
      else
      {
LABEL_56:
        v55 = v16->fields.textOnMask;
        v56 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_1/*""*/;
      }
      goto LABEL_130;
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UILabel_o *messageTextLabel; // x23
  System_String_o *v16; // x0
  ShopBuyItemListViewItemDraw_o *v17; // x0
  const MethodInfo *v18; // x3
  ShopBuyItemListViewItemDraw_o *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x3
  struct ShopEntity_o *Shop_k__BackingField; // x8
  UILabel_o *v23; // x21
  System_String_o *v24; // x22
  System_String_o *v25; // x0
  ShopBuyItemListViewItemDraw_o *v26; // x0
  const MethodInfo *v27; // x3
  bool v28; // w0
  const MethodInfo *v29; // x1
  UICrossNarrowLabel_o *v30; // x20
  System_String_o *v31; // x19
  LocalizationManager_c *v32; // x0
  UICrossNarrowLabel_o *v33; // x21
  __int64 v34; // x1
  System_String_o *v35; // x22
  UILabel_o *v36; // x20
  const MethodInfo *v37; // x1
  System_String_o *DetailText; // x0
  System_String_o *v39; // x0
  bool IsNullOrEmpty; // w0
  const MethodInfo *v41; // x1
  ShopBuyItemListViewItemDraw_o *nameTextLabel; // x20
  __int64 v43; // x1
  System_String_o *NameText; // x19
  System_String_o *v45; // x0
  System_String_o *value; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *message; // [xsp+8h] [xbp-48h] BYREF

  v10 = this;
  value = preparationItemName;
  message = preparationMessage;
  if ( (byte_4B126B3 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, isInPreparation);
    sub_1BCA7E0(&StringLiteral_16014/*"[000000]"*/, v11, v12);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_25721/*"？"*/, v13, v14);
    byte_4B126B3 = 1;
  }
  if ( isInPreparation )
  {
    messageTextLabel = v10->fields.messageTextLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v16 = LocalizationManager__ReplaceCommonTag(preparationMessage, 0, 0LL);
    v17 = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_62401220(
                                             (System_String_o *)StringLiteral_16014/*"[000000]"*/,
                                             v16,
                                             0LL);
    ShopBuyItemListViewItemDraw__SetLabelText(v17, messageTextLabel, (System_String_o *)v17, v18);
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
            v19 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_25721/*"？"*/;
LABEL_37:
            UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)this, (System_String_o *)v19, 0LL);
            return;
          }
        }
        else
        {
          IsNullOrEmpty = System_String__IsNullOrEmpty(preparationItemName, 0LL);
          nameTextLabel = (ShopBuyItemListViewItemDraw_o *)v10->fields.nameTextLabel;
          if ( IsNullOrEmpty )
          {
            NameText = ShopBuyItemListViewItem__get_NameText(item, v41);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43);
            v45 = NameText;
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
            v45 = preparationItemName;
          }
          this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v45, 0, 0LL);
          if ( nameTextLabel )
          {
            v19 = this;
            this = nameTextLabel;
            goto LABEL_37;
          }
        }
      }
    }
LABEL_42:
    sub_1BCAA3C(this, item);
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
      && ShopBuyItemListViewItem__TryGetClosedMessage(item, &message, &value, v21) )
    {
      v23 = v10->fields.messageTextLabel;
      v24 = message;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
      v25 = LocalizationManager__ReplaceCommonTag(v24, 0, 0LL);
      v26 = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_62401220(
                                               (System_String_o *)StringLiteral_16014/*"[000000]"*/,
                                               v25,
                                               0LL);
      ShopBuyItemListViewItemDraw__SetLabelText(v26, v23, (System_String_o *)v26, v27);
      v28 = System_String__IsNullOrEmpty(value, 0LL);
      v30 = v10->fields.nameTextLabel;
      if ( v28 )
      {
        v31 = ShopBuyItemListViewItem__get_NameText(item, v29);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          v32 = LocalizationManager_TypeInfo;
LABEL_39:
          j_il2cpp_runtime_class_init_0(v32, v29);
        }
      }
      else
      {
        v32 = LocalizationManager_TypeInfo;
        v31 = value;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          goto LABEL_39;
      }
      this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v31, 0, 0LL);
      if ( !v30 )
        goto LABEL_42;
      UICrossNarrowLabel__SetCrossNarrowText(v30, (System_String_o *)this, 0LL);
      return;
    }
  }
  v33 = v10->fields.nameTextLabel;
  v35 = ShopBuyItemListViewItem__get_NameText(item, v20);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
  this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v35, 0, 0LL);
  if ( !v33 )
    goto LABEL_42;
  UICrossNarrowLabel__SetCrossNarrowText(v33, (System_String_o *)this, 0LL);
  v36 = v10->fields.messageTextLabel;
  DetailText = ShopBuyItemListViewItem__get_DetailText(item, v37);
  v39 = LocalizationManager__ReplaceCommonTag(DetailText, 0, 0LL);
  this = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_62401220(
                                            (System_String_o *)StringLiteral_16014/*"[000000]"*/,
                                            v39,
                                            0LL);
  if ( !v36 )
    goto LABEL_42;
  UILabel__set_text(v36, (System_String_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewItemDraw__SetNumText(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  UILabel_o *numTitleLabel; // x21
  ShopBuyItemListViewItemDraw_o *v17; // x0
  const MethodInfo *v18; // x3
  ShopBuyItemListViewItemDraw_o *v19; // x0
  const MethodInfo *v20; // x3
  UILabel_o *numTextLabel; // x21
  int32_t HoldCount; // w0
  ShopBuyItemListViewItemDraw_o *NumberFormat; // x0
  const MethodInfo *v24; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Action_int__o *v29; // x21
  ShopBuyItemListViewItemDraw_o *v30; // x0
  const MethodInfo *v31; // x3

  v6 = this;
  if ( (byte_4B126B4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, item, isInPreparation);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_ShopBuyItemListViewItemDraw__SetNumText_b__67_0__, v9, v10);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_12152/*"SHOP_BUY_ITEM_HOLD"*/, v11, v12);
    byte_4B126B4 = 1;
  }
  if ( isInPreparation )
  {
    if ( !item )
      goto LABEL_18;
    this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
    if ( !this )
      goto LABEL_18;
    v13 = ShopEntity__checkFlag((ShopEntity_o *)this, 2, 0LL);
    if ( v13 )
      goto LABEL_16;
  }
  else if ( !item )
  {
    goto LABEL_18;
  }
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_18;
  v13 = ShopEntity__checkHoldDisp((ShopEntity_o *)this, 0LL);
  if ( !v13 )
  {
LABEL_16:
    ShopBuyItemListViewItemDraw__SetLabelActive((ShopBuyItemListViewItemDraw_o *)v13, v6->fields.numTitleLabel, 0, v14);
    ShopBuyItemListViewItemDraw__SetLabelActive(v30, v6->fields.numTextLabel, 0, v31);
    return;
  }
  ShopBuyItemListViewItemDraw__SetLabelActive((ShopBuyItemListViewItemDraw_o *)v13, v6->fields.numTitleLabel, 1, v14);
  numTitleLabel = v6->fields.numTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
  v17 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12152/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
  ShopBuyItemListViewItemDraw__SetLabelText(v17, numTitleLabel, (System_String_o *)v17, v18);
  ShopBuyItemListViewItemDraw__SetLabelActive(v19, v6->fields.numTextLabel, 1, v20);
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
LABEL_18:
    sub_1BCAA3C(this, item);
  numTextLabel = v6->fields.numTextLabel;
  HoldCount = ShopEntity__getHoldCount((ShopEntity_o *)this, 0LL);
  NumberFormat = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__GetNumberFormat(HoldCount, 0LL);
  ShopBuyItemListViewItemDraw__SetLabelText(NumberFormat, numTextLabel, (System_String_o *)NumberFormat, v24);
  if ( item->fields._ShopKind_k__BackingField == 7 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
    v29 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v26, v27, v28);
    System_Action_int____ctor(v29, (Il2CppObject *)v6, Method_ShopBuyItemListViewItemDraw__SetNumText_b__67_0__, 0LL);
    StoneCountRefreshComponent__AttachToGameObject(gameObject, v29, 1, 0LL);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetPossessionInfo(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *possessionGrid; // x21
  __int64 v16; // x1
  UnityEngine_Object_o *possessionNumLabel; // x21
  __int64 v18; // x1
  UnityEngine_Object_o *coinNumLabel; // x21
  __int64 v20; // x1
  UnityEngine_Object_o *coinIcon; // x21
  __int64 v22; // x1
  UnityEngine_Object_o *treasureDeviceLevelLabel; // x21
  __int64 v24; // x1
  UnityEngine_Object_o *summonedSprite; // x21
  __int64 v26; // x1
  UnityEngine_Object_o *possessionBGSprite; // x21
  ShopEntity_o *Master_object; // x0
  __int64 v29; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x8
  unsigned int purchaseType; // w8
  int32_t v32; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x21
  int32_t v34; // w2
  void *monitor; // x21
  Il2CppClass *klass; // x22
  UIGrid_o *v37; // x20
  UILabel_o *v38; // x22
  UILabel_o *v39; // x23
  UILabel_o *v40; // x24
  UISprite_o *v41; // x25
  UISprite_o *v42; // x26
  UISprite_o *v43; // x19
  __int64 v44; // x1
  bool IsPossessionInfoDisp; // w27
  const MethodInfo *v46; // [xsp+8h] [xbp-68h]
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4B126C2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, item, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&ShopBuyItemUtility_TypeInfo, v13, v14);
    byte_4B126C2 = 1;
  }
  entity = 0LL;
  possessionGrid = (UnityEngine_Object_o *)this->fields.possessionGrid;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( !UnityEngine_Object__op_Equality(possessionGrid, 0LL, 0LL) )
  {
    possessionNumLabel = (UnityEngine_Object_o *)this->fields.possessionNumLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( !UnityEngine_Object__op_Equality(possessionNumLabel, 0LL, 0LL) )
    {
      coinNumLabel = (UnityEngine_Object_o *)this->fields.coinNumLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
      if ( !UnityEngine_Object__op_Equality(coinNumLabel, 0LL, 0LL) )
      {
        coinIcon = (UnityEngine_Object_o *)this->fields.coinIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
        if ( !UnityEngine_Object__op_Equality(coinIcon, 0LL, 0LL) )
        {
          treasureDeviceLevelLabel = (UnityEngine_Object_o *)this->fields.treasureDeviceLevelLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
          if ( !UnityEngine_Object__op_Equality(treasureDeviceLevelLabel, 0LL, 0LL) )
          {
            summonedSprite = (UnityEngine_Object_o *)this->fields.summonedSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
            if ( !UnityEngine_Object__op_Equality(summonedSprite, 0LL, 0LL) )
            {
              possessionBGSprite = (UnityEngine_Object_o *)this->fields.possessionBGSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
              Master_object = (ShopEntity_o *)UnityEngine_Object__op_Equality(possessionBGSprite, 0LL, 0LL);
              if ( ((unsigned __int8)Master_object & 1) == 0 )
              {
                if ( !item )
                  goto LABEL_47;
                Shop_k__BackingField = item->fields._Shop_k__BackingField;
                if ( Shop_k__BackingField )
                {
                  purchaseType = Shop_k__BackingField->fields.purchaseType;
                  v32 = 0;
                  if ( purchaseType > 0x15 || ((1 << purchaseType) & 0x200110) == 0 )
                  {
LABEL_42:
                    Master_object = item->fields._Shop_k__BackingField;
                    if ( Master_object )
                    {
                      v37 = this->fields.possessionGrid;
                      v38 = this->fields.possessionNumLabel;
                      v39 = this->fields.coinNumLabel;
                      v40 = this->fields.treasureDeviceLevelLabel;
                      v41 = this->fields.summonedSprite;
                      v42 = this->fields.coinIcon;
                      v43 = this->fields.possessionBGSprite;
                      IsPossessionInfoDisp = ShopEntity__IsPossessionInfoDisp(Master_object, 0LL);
                      if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo, v44);
                      ShopBuyItemUtility__SetPossessionInfo(
                        v32,
                        v37,
                        v38,
                        v39,
                        v42,
                        v40,
                        v41,
                        v43,
                        IsPossessionInfoDisp,
                        v46);
                      return;
                    }
LABEL_47:
                    sub_1BCAA3C(Master_object, v29);
                  }
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29);
                  Master_object = (ShopEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
                  v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
                  if ( item->fields._Shop_k__BackingField )
                  {
                    Master_object = (ShopEntity_o *)ShopEntity__get_TargetId(item->fields._Shop_k__BackingField, 0LL);
                    v34 = (int)Master_object;
                  }
                  else
                  {
                    v34 = 0;
                  }
                  if ( !v33 )
                    goto LABEL_47;
                  if ( DataMasterBase_object__object__int___TryGetEntity(
                         v33,
                         &entity,
                         v34,
                         (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
                      *(_QWORD *)&v48.fields.currentCryptoKey = klass;
                      *(_QWORD *)&v48.fields.fakeValue = monitor;
                      v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v48, 0LL);
                      goto LABEL_42;
                    }
                  }
                }
                v32 = 0;
                goto LABEL_42;
              }
            }
          }
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewItemDraw__SetPriceIconText(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int bandSprite_high; // w8
  UILabel_o *priceLabelFree; // x19
  struct CommonConsumeEntity_array *CommonConsumeEntities_k__BackingField; // x24
  __int64 v14; // x8
  ShopBuyItemListViewItemDraw_o *priceIconLabel; // x19
  int32_t v16; // w20
  ShopBuyItemListViewItemDraw_o *ItemCount; // x0
  const MethodInfo *v18; // x2
  ShopEntity_o *v19; // x0
  int32_t v20; // w1
  int32_t v21; // w3
  int32_t v22; // w2
  System_Int32_array *UserItemCounts; // x0
  UIIconLabel_o *v24; // x22
  System_Int32_array *v25; // x21
  const MethodInfo *v26; // x1
  int32_t v27; // w23
  ShopBuyItemListViewItemDraw_o *priceIconLabel2; // x19
  const MethodInfo *v29; // x1
  ShopEntity_o *Shop_k__BackingField; // x8
  int32_t v31; // w20
  UIIconLabel_o *v32; // x22
  ShopBuyItemListViewItemDraw_o *PriceIcon; // x0
  const MethodInfo *v34; // x2
  int32_t v35; // w23
  int32_t sellQp; // w24
  UIIconLabel_o *priceIconLabel1; // x21
  int32_t v38; // w22
  int32_t rangeSprite; // w23
  int32_t v40; // w21
  struct ItemEntity_o *itemEntity; // x8
  __int64 v42; // x1
  const MethodInfo *v43; // x3
  ShopEntity_o *Price; // x0
  struct ItemEntity_o *v45; // x8
  ShopEntity_o *v46; // x0
  int32_t v47; // w20
  struct ItemEntity_o *v48; // x8
  double v49; // d0
  UILabel_o **p_LineText2digit; // x8

  v6 = this;
  if ( (byte_4B126BA & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, isInPreparation);
    sub_1BCA7E0(&System_Math_TypeInfo, v7, v8);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_12181/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, v9, v10);
    byte_4B126BA = 1;
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
    v14 = *(_QWORD *)&CommonConsumeEntities_k__BackingField->max_length;
    if ( !v14 )
      return;
    if ( (_DWORD)v14 == 1 )
    {
      if ( !CommonConsumeEntities_k__BackingField->m_Items[0] )
        return;
      priceIconLabel = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
      if ( CommonConsumeEntities_k__BackingField->max_length )
      {
        v16 = (int)this;
        this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[0];
        if ( !this )
          goto LABEL_83;
        goto LABEL_54;
      }
    }
    else
    {
      if ( (int)v14 < 2 )
        return;
      if ( !CommonConsumeEntities_k__BackingField->m_Items[0] )
        goto LABEL_87;
      priceIconLabel1 = v6->fields.priceIconLabel1;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
      if ( CommonConsumeEntities_k__BackingField->max_length )
      {
        v38 = (int)this;
        this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[0];
        if ( !this )
          goto LABEL_83;
        rangeSprite = (int32_t)this->fields.rangeSprite;
        this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0LL);
        if ( !priceIconLabel1 )
          goto LABEL_83;
        UIIconLabel__SetPurchaseDecision(priceIconLabel1, v38, rangeSprite, (int32_t)this, 0LL);
        if ( CommonConsumeEntities_k__BackingField->max_length > 1 )
        {
LABEL_87:
          if ( !CommonConsumeEntities_k__BackingField->m_Items[1] )
            return;
          priceIconLabel = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel2;
          this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
          if ( CommonConsumeEntities_k__BackingField->max_length > 1 )
          {
            v16 = (int)this;
            this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[1];
            if ( !this )
              goto LABEL_83;
LABEL_54:
            v40 = (int32_t)this->fields.rangeSprite;
            this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntity__GetUserHasNum(
                                                      (CommonConsumeEntity_o *)this,
                                                      0LL);
            if ( !priceIconLabel )
              goto LABEL_83;
            v21 = (int)this;
            this = priceIconLabel;
            v20 = v16;
            v22 = v40;
            goto LABEL_56;
          }
        }
      }
    }
LABEL_84:
    sub_1BCAA44(this, item);
  }
  if ( bandSprite_high == 13 )
  {
    priceLabelFree = v6->fields.priceLabelFree;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12181/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, 0LL);
    if ( priceLabelFree )
    {
      UILabel__set_text(priceLabelFree, (System_String_o *)this, 0LL);
      return;
    }
LABEL_83:
    sub_1BCAA3C(this, item);
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
    UserItemCounts = ShopBuyItemListViewItemDraw__GetUserItemCounts(ItemCount, item, v18);
    v24 = v6->fields.priceIconLabel1;
    v25 = UserItemCounts;
    this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v26);
    if ( !item->fields._Shop_k__BackingField )
      goto LABEL_83;
    v27 = (int)this;
    this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrices(item->fields._Shop_k__BackingField, 0, 0LL);
    if ( !v25 )
      goto LABEL_83;
    if ( v25->max_length )
    {
      if ( !v24 )
        goto LABEL_83;
      UIIconLabel__SetPurchaseDecision(v24, v27, (int32_t)this, v25->m_Items[1], 0LL);
      priceIconLabel2 = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel2;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v29);
      Shop_k__BackingField = item->fields._Shop_k__BackingField;
      if ( !Shop_k__BackingField )
        goto LABEL_83;
      v31 = (int)this;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrices(Shop_k__BackingField, 1, 0LL);
      if ( v25->max_length > 1 )
      {
        if ( !priceIconLabel2 )
          goto LABEL_83;
        v21 = v25->m_Items[2];
        v22 = (int)this;
        this = priceIconLabel2;
        v20 = v31;
        goto LABEL_56;
      }
    }
    goto LABEL_84;
  }
  v19 = item->fields._Shop_k__BackingField;
  if ( v19 && ShopEntity__IsSoldOut(v19, 0LL) && item->fields._IsNotHavingShopItemReceived_k__BackingField )
  {
    this = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel;
    if ( !this )
      goto LABEL_83;
    v20 = 56;
    v21 = -1;
    v22 = 0;
LABEL_56:
    UIIconLabel__SetPurchaseDecision((UIIconLabel_o *)this, v20, v22, v21, 0LL);
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
  v32 = v6->fields.priceIconLabel;
  PriceIcon = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
  v35 = (int)PriceIcon;
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
  this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItemDraw__GetUserItemCounts(PriceIcon, item, v34);
  if ( !this )
    goto LABEL_83;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_84;
  if ( !v32 )
    goto LABEL_83;
  UIIconLabel__SetPurchaseDecision(v32, v35, sellQp, (int32_t)this->fields.rangeSprite, 0LL);
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
      v45 = item->fields.itemEntity;
      if ( !v45 )
        goto LABEL_80;
      Price = (ShopEntity_o *)(unsigned int)v45->fields.sellQp;
      if ( !(_DWORD)Price )
        goto LABEL_80;
    }
    v46 = item->fields._Shop_k__BackingField;
    if ( v46 )
    {
      v47 = ShopEntity__GetPrice(v46, 0LL);
    }
    else
    {
      v48 = item->fields.itemEntity;
      if ( v48 )
        v47 = v48->fields.sellQp;
      else
        v47 = 0;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v42);
    v49 = log10((double)v47);
    if ( v49 == INFINITY || (int)v49 )
    {
      p_LineText2digit = &v6->fields.LineText2digit;
      goto LABEL_82;
    }
LABEL_80:
    p_LineText2digit = &v6->fields.LineText;
LABEL_82:
    ShopBuyItemListViewItemDraw__SetLabelActive((ShopBuyItemListViewItemDraw_o *)Price, *p_LineText2digit, 1, v43);
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  struct ShopEntity_o *Shop_k__BackingField; // x8
  unsigned int shopType; // w9
  struct ShopEntity_o *v23; // x8
  struct System_Int32_array *targetIds; // x8
  struct ShopEntity_o *v25; // x8
  ShopBuyItemListViewItemDraw_o *v26; // x0
  const MethodInfo *v27; // x3
  __int64 v28; // x1
  bool IsPaidExchange; // w20
  System_String_o **v30; // x8
  ShopBuyItemListViewItemDraw_o *v31; // x0
  const MethodInfo *v32; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4B126B9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, item, method);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&StringLiteral_12213/*"SHOP_QUEST_FREE_EXCHANGE_CLEARED"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_12215/*"SHOP_QUEST_PAID_EXCHANGE_CLEARED"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_19827/*"freeShopCondId"*/, v17, v18);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_12120/*"SHOP_ALREADY_GET"*/, v19, v20);
    byte_4B126B9 = 1;
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
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      v23 = item->fields._Shop_k__BackingField;
      if ( v23 )
      {
        targetIds = v23->fields.targetIds;
        if ( targetIds )
        {
          if ( !targetIds->max_length )
            sub_1BCAA44(this, item);
          if ( this )
          {
            this = (ShopBuyItemListViewItemDraw_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                      &entity,
                                                      targetIds->m_Items[1],
                                                      (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v25 = item->fields._Shop_k__BackingField;
              if ( !v25 )
                goto LABEL_33;
              if ( v25->fields.purchaseType == 4 )
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
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
                  v26 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_12120/*"SHOP_ALREADY_GET"*/,
                                                           0LL);
                  ShopBuyItemListViewItemDraw__SetLabelText(v26, v4->fields.textOnMask, (System_String_o *)v26, v27);
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
                        (Il2CppObject *)StringLiteral_19827/*"freeShopCondId"*/,
                        (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
                    v30 = (System_String_o **)&StringLiteral_12215/*"SHOP_QUEST_PAID_EXCHANGE_CLEARED"*/;
                    if ( !IsPaidExchange )
                      v30 = (System_String_o **)&StringLiteral_12213/*"SHOP_QUEST_FREE_EXCHANGE_CLEARED"*/;
                    v31 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get(*v30, 0LL);
                    ShopBuyItemListViewItemDraw__SetLabelText(v31, v4->fields.textOnMask, (System_String_o *)v31, v32);
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
    sub_1BCAA3C(this, item);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  unsigned int baseSprite; // w8
  const MethodInfo *v34; // x2
  struct ShopEntity_o *Shop_k__BackingField; // x0
  __int64 v36; // x1
  Il2CppObject *MasterData_object; // x21
  struct ShopEntity_o *v38; // x8
  struct ShopEntity_o *v39; // x8
  int32_t limitNum; // w9
  UILabel_o *restCountLabel; // x19
  System_String_o *v42; // x20
  int32_t v43; // w0
  struct ShopEntity_o *v44; // x8
  int32_t purchaseType; // w20
  __int64 *v46; // x8
  struct ShopEntity_o *v47; // x8
  ShopReleaseMaster_o *v48; // x26
  struct ShopEntity_o *v49; // x8
  struct ShopEntity_o *v50; // x8
  struct ShopEntity_o *v51; // x8
  bool v52; // w8
  int v53; // w21
  ShopBuyItemListViewItemDraw_o *v54; // x0
  const MethodInfo *v55; // x3
  struct ShopEntity_o *v56; // x8
  struct ShopEntity_o *v57; // x8
  __int64 v58; // x1
  Il2CppObject *NumberFormat; // x0

  v16 = this;
  if ( (byte_4B126B5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopReleaseMaster___, item, isInPreparation);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&StringLiteral_12156/*"SHOP_BUY_PREPARATION"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_8436/*"LOTTERY_REST_NUM"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_14966/*"UNIT_REST_NONE"*/, v29, v30);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_3940/*"COUNT_INFO"*/, v31, v32);
    byte_4B126B5 = 1;
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
      this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_58;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v36);
      this = (ShopBuyItemListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
      v38 = item->fields._Shop_k__BackingField;
      if ( !v38 || !MasterData_object )
        goto LABEL_58;
      this = (ShopBuyItemListViewItemDraw_o *)UserShopMaster__GetEntityDefinitely(
                                                (UserShopMaster_o *)MasterData_object,
                                                (int64_t)this,
                                                v38->fields.baseShopId,
                                                0LL);
      v39 = item->fields._Shop_k__BackingField;
      if ( v39 )
      {
        limitNum = v39->fields.limitNum;
        if ( !this )
          goto LABEL_58;
      }
      else
      {
        limitNum = 0;
        if ( !this )
          goto LABEL_58;
      }
      v53 = limitNum - HIDWORD(this->fields.m_CancellationTokenSource);
      if ( v53 >= 1 && (!v39 || !ShopEntity__IsSoldOut(item->fields._Shop_k__BackingField, 0LL)) )
      {
        restCountLabel = v16->fields.restCountLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_3940/*"COUNT_INFO"*/, 0LL);
        goto LABEL_68;
      }
      if ( !item->fields._IsNotHavingShopItemReceived_k__BackingField )
        goto LABEL_9;
      restCountLabel = v16->fields.restCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
LABEL_49:
      v46 = &StringLiteral_14966/*"UNIT_REST_NONE"*/;
      goto LABEL_50;
    }
    if ( ShopEntity__IsSoldOut(Shop_k__BackingField, 0LL) )
      goto LABEL_9;
    v44 = item->fields._Shop_k__BackingField;
    if ( v44 )
      purchaseType = v44->fields.purchaseType;
    else
LABEL_29:
      purchaseType = item->fields.itemEntity != 0LL;
    restCountLabel = v16->fields.restCountLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    if ( purchaseType == 16 )
    {
      v46 = &StringLiteral_8436/*"LOTTERY_REST_NUM"*/;
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
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_58;
    this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
    v47 = item->fields._Shop_k__BackingField;
    if ( !v47 )
      goto LABEL_58;
    v48 = (ShopReleaseMaster_o *)this;
    if ( !this )
      goto LABEL_58;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(
                                              (ShopReleaseMaster_o *)this,
                                              v47->fields.id,
                                              38,
                                              0LL);
    *isNotServantGet = (unsigned __int8)this & 1;
    v49 = item->fields._Shop_k__BackingField;
    if ( !v49 )
      goto LABEL_58;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v48, v49->fields.id, 41, 0LL);
    *isNotServantHaving = (unsigned __int8)this & 1;
    v50 = item->fields._Shop_k__BackingField;
    if ( !v50 )
      goto LABEL_58;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v48, v50->fields.id, 40, 0LL);
    *isServantHaving = (unsigned __int8)this & 1;
    v51 = item->fields._Shop_k__BackingField;
    if ( !v51 )
      goto LABEL_58;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v48, v51->fields.id, 78, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v52 = 1;
    }
    else
    {
      v56 = item->fields._Shop_k__BackingField;
      if ( !v56 )
        goto LABEL_58;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v48, v56->fields.id, 79, 0LL);
      v52 = (unsigned __int8)this & 1;
    }
    *isNotCostumeGet = v52;
    v57 = item->fields._Shop_k__BackingField;
    if ( !v57 )
      goto LABEL_58;
    *isNotCommandCodeGet = ShopReleaseMaster__isExistCondType(v48, v57->fields.id, 108, 0LL);
    this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
    if ( !this )
      goto LABEL_58;
  }
  if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, 0LL) )
  {
LABEL_9:
    ShopBuyItemListViewItemDraw__ShowSoldOut(v16, item, v34);
    return;
  }
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
LABEL_58:
    sub_1BCAA3C(this, item);
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
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
      v42 = LocalizationManager__Get((System_String_o *)StringLiteral_3940/*"COUNT_INFO"*/, 0LL);
      v43 = 0;
      goto LABEL_69;
    default:
      if ( *isNotServantGet || *isNotServantHaving || *isServantHaving || *isNotCostumeGet || *isNotCommandCodeGet )
      {
        restCountLabel = v16->fields.restCountLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_3940/*"COUNT_INFO"*/, 0LL);
        v53 = *isServantHaving || *isNotServantHaving;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v58);
LABEL_68:
        v43 = v53;
LABEL_69:
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v43, 0LL);
        v54 = (ShopBuyItemListViewItemDraw_o *)System_String__Format(v42, NumberFormat, 0LL);
        goto LABEL_70;
      }
LABEL_72:
      if ( ShopBuyItemListViewItem__IsPrepareTextOnMask(item, (const MethodInfo *)item) )
        goto LABEL_11;
      restCountLabel = v16->fields.restCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
      v46 = &StringLiteral_12156/*"SHOP_BUY_PREPARATION"*/;
      break;
  }
LABEL_50:
  v54 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v46, 0LL);
LABEL_70:
  ShopBuyItemListViewItemDraw__SetLabelText(v54, restCountLabel, (System_String_o *)v54, v55);
}


void __fastcall ShopBuyItemListViewItemDraw__SetShopResetText(
        ShopBuyItemListViewItemDraw_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Object_o *shopResetNoticeLabel; // x21
  int64_t UserId; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x3
  int32_t baseShopId; // w21
  __int64 v30; // x1
  Il2CppObject *Master_object; // x22
  _BOOL8 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  __int64 v35; // x1
  Il2CppObject *v36; // x22
  UserShopEntity_o *EntityDefinitely; // x21
  const MethodInfo *v38; // x3
  char v39; // w20
  bool v40; // w20
  int32_t resetLimitNum; // w8
  __int64 *v42; // x8
  System_String_o *v43; // x2
  ShopResetEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B126C1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, shopEntity, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopResetMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserShopMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_12175/*"SHOP_CAN_NOT_RESET_NOTICE_MESSAGE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_12177/*"SHOP_CAN_RESET_NOTICE_MESSAGE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_12176/*"SHOP_CAN_NOT_RESET_SOLD_OUT_NOTICE_MESSAGE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v23, v24);
    byte_4B126C1 = 1;
  }
  entity = 0LL;
  shopResetNoticeLabel = (UnityEngine_Object_o *)this->fields.shopResetNoticeLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, shopEntity);
  UserId = UnityEngine_Object__op_Equality(shopResetNoticeLabel, 0LL, 0LL);
  if ( (UserId & 1) == 0 )
  {
    if ( shopEntity )
    {
      baseShopId = shopEntity->fields.baseShopId;
      ShopBuyItemListViewItemDraw__SetLabelText(
        (ShopBuyItemListViewItemDraw_o *)UserId,
        this->fields.shopResetNoticeLabel,
        (System_String_o *)StringLiteral_1/*""*/,
        v28);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v30);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopResetMaster___);
      UserId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
      if ( UserId )
      {
        if ( Master_object )
        {
          v32 = ShopResetMaster__TryGetEntity(
                  (ShopResetMaster_o *)Master_object,
                  &entity,
                  baseShopId,
                  *(_DWORD *)(UserId + 96),
                  0LL);
          if ( !v32 )
          {
            v40 = 0;
LABEL_38:
            ShopBuyItemListViewItemDraw__SetLabelActive(
              (ShopBuyItemListViewItemDraw_o *)v32,
              this->fields.shopResetNoticeLabel,
              v40,
              v34);
            return;
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33);
          v36 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserShopMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v35);
          UserId = NetworkManager__get_UserId(0LL);
          if ( v36 )
          {
            EntityDefinitely = UserShopMaster__GetEntityDefinitely((UserShopMaster_o *)v36, UserId, baseShopId, 0LL);
            UserId = ShopEntity__IsSoldOut(shopEntity, 0LL);
            if ( (UserId & 1) != 0
              && (UserId = ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0LL), (UserId & 1) == 0) )
            {
              UserId = ShopEntity__IsAnotherItemBuyable(shopEntity, 0LL);
              v39 = UserId ^ 1;
            }
            else
            {
              v39 = 0;
            }
            if ( entity )
            {
              resetLimitNum = entity->fields.resetLimitNum;
              if ( !resetLimitNum )
                goto LABEL_26;
              if ( EntityDefinitely )
              {
                if ( resetLimitNum <= EntityDefinitely->fields.resetNum )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
                  if ( (v39 & 1) != 0 )
                    v42 = &StringLiteral_12176/*"SHOP_CAN_NOT_RESET_SOLD_OUT_NOTICE_MESSAGE"*/;
                  else
                    v42 = &StringLiteral_12175/*"SHOP_CAN_NOT_RESET_NOTICE_MESSAGE"*/;
                  goto LABEL_36;
                }
LABEL_26:
                if ( (v39 & 1) == 0 )
                {
                  v43 = (System_String_o *)StringLiteral_1/*""*/;
                  v40 = 0;
LABEL_37:
                  ShopBuyItemListViewItemDraw__SetLabelText(
                    (ShopBuyItemListViewItemDraw_o *)UserId,
                    this->fields.shopResetNoticeLabel,
                    v43,
                    v38);
                  goto LABEL_38;
                }
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
                v42 = &StringLiteral_12177/*"SHOP_CAN_RESET_NOTICE_MESSAGE"*/;
LABEL_36:
                UserId = (int64_t)LocalizationManager__Get((System_String_o *)*v42, 0LL);
                v43 = (System_String_o *)UserId;
                v40 = 1;
                goto LABEL_37;
              }
            }
          }
        }
      }
    }
    sub_1BCAA3C(UserId, v27);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewItemDraw__SetSpriteActive(
        ShopBuyItemListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4B126AF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, sprite, isActive);
    byte_4B126AF = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sprite);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_1BCAA3C(gameObject, v7);
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

  if ( (byte_4B126B0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, sprite, spriteName);
    byte_4B126B0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sprite);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !sprite )
      sub_1BCAA3C(v6, v7);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  bool v11; // w0
  __int64 v12; // x1
  UnityEngine_Object_o *soldOutImage; // x21
  bool v14; // w20
  System_String_o *v15; // x0
  const MethodInfo *v16; // x3
  UILabel_o *restCountLabel; // x1
  System_String_o *v18; // x2
  UILabel_o *v19; // x19

  v4 = this;
  if ( (byte_4B126C0 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_12165/*"SHOP_BUY_SOLD_OUT"*/, v7, v8);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B126C0 = 1;
  }
  if ( !item )
    goto LABEL_21;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_21;
  v11 = ShopEntity__checkFlag((ShopEntity_o *)this, 0x8000, 0LL);
  soldOutImage = (UnityEngine_Object_o *)v4->fields.soldOutImage;
  v14 = v11;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  v15 = (System_String_o *)UnityEngine_Object__op_Inequality(0LL, soldOutImage, 0LL);
  if ( v14 )
  {
    if ( ((unsigned __int8)v15 & 1) == 0 )
    {
LABEL_12:
      restCountLabel = v4->fields.restCountLabel;
      v18 = (System_String_o *)StringLiteral_1/*""*/;
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
    sub_1BCAA3C(this, item);
  }
  if ( ((unsigned __int8)v15 & 1) != 0 )
  {
    this = (ShopBuyItemListViewItemDraw_o *)v4->fields.soldOutImage;
    if ( !this )
      goto LABEL_21;
    this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  v19 = v4->fields.restCountLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12165/*"SHOP_BUY_SOLD_OUT"*/, 0LL);
  restCountLabel = v19;
  v18 = v15;
LABEL_20:
  ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v15, restCountLabel, v18, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemListViewItemDraw___SetNumText_b__67_0(
        ShopBuyItemListViewItemDraw_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *numTextLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_4B126C4 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount, method);
    byte_4B126C4 = 1;
  }
  numTextLabel = this->fields.numTextLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !numTextLabel )
    sub_1BCAA3C(NumberFormat, v7);
  UILabel__set_text(numTextLabel, NumberFormat, 0LL);
}