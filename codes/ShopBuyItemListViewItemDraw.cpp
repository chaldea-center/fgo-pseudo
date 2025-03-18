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

  if ( (byte_4C1E363 & 1) == 0 )
  {
    sub_1C3B764(&ShopBuyItemListViewItemDraw_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_20746/*"level"*/, v8);
    byte_4C1E363 = 1;
  }
  ShopBuyItemListViewItemDraw_TypeInfo->static_fields->BASE_IMG_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_20746/*"level"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)ShopBuyItemListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_20746/*"level"*/,
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

  if ( (byte_4C1E348 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1E348 = 1;
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
          sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.baseAtlas, (int64_t)mAtlas, v6, v7, v8, v9, v10, v11),
          (v20 = this->fields.baseSprite) == 0LL) )
    {
      sub_1C3B9C0(v4, v5);
    }
    mSpriteName = v20->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1C3B708(
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

  if ( (byte_4C1E34A & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, manager);
    byte_4C1E34A = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)this->fields.possessionAnotherItemIds,
                    0LL);
  if ( !IsNullOrEmpty )
  {
    possessionAnotherItemIds = this->fields.possessionAnotherItemIds;
    if ( !possessionAnotherItemIds || !manager )
      sub_1C3B9C0(IsNullOrEmpty, v6);
    max_length = possessionAnotherItemIds->max_length;
    v9 = manager->fields.alphaAnimCnt % (int)max_length;
    if ( v9 >= max_length )
      sub_1C3B9C8(IsNullOrEmpty, v6);
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

  if ( (byte_4C1E35E & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_SetItemMaster___, ids);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4C1E35E = 1;
  }
  if ( !ids )
    goto LABEL_20;
  if ( !*(_QWORD *)&ids->max_length )
    return 0;
  this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_1C3B9C0(this, ids);
  this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_SetItemMaster___);
  v5 = *(_QWORD *)&ids->max_length;
  if ( (int)v5 < 1 )
    return 0;
  v6 = (SetItemMaster_o *)this;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v5 )
LABEL_21:
      sub_1C3B9C8(this, ids);
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
  struct ShopEntity_o *Shop_k__BackingField; // x8
  _DWORD *v10; // x21
  System_Int32_array *v11; // x19
  Il2CppObject *v12; // x21
  __int64 v13; // x9
  ShopEntity_o *v14; // x0
  int64_t v15; // x20
  int32_t v16; // w8
  Il2CppObject *MasterData_object; // x21
  unsigned int ItemCount; // w0
  unsigned __int64 v19; // x22
  int64_t v20; // x24
  unsigned int v21; // w0

  if ( (byte_4C1E35F & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserItemMaster___, item);
    sub_1C3B764(&int___TypeInfo, v4);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C1E35F = 1;
  }
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !item || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0LL )
LABEL_54:
    sub_1C3B9C0(SelfUserGame, v8);
  v10 = (_DWORD *)SelfUserGame;
  switch ( Shop_k__BackingField->fields.payType )
  {
    case 1:
      SelfUserGame = sub_1C3B80C(int___TypeInfo, 1LL);
      if ( !v10 )
        goto LABEL_54;
      v11 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_54;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_55;
      v16 = v10[44];
      goto LABEL_52;
    case 2:
      SelfUserGame = sub_1C3B80C(int___TypeInfo, 1LL);
      if ( !v10 )
        goto LABEL_54;
      v11 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_54;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_55;
      v16 = v10[24];
      goto LABEL_52;
    case 4:
      SelfUserGame = sub_1C3B80C(int___TypeInfo, 1LL);
      if ( !v10 )
        goto LABEL_54;
      v11 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_54;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_55;
      v16 = v10[46];
      goto LABEL_52;
    case 6:
    case 0xB:
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_54;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserItemMaster___);
      ItemCount = ShopBuyItemListViewItem__get_ItemCount(item, 0LL);
      v11 = (System_Int32_array *)sub_1C3B80C(int___TypeInfo, ItemCount);
      if ( ShopBuyItemListViewItem__get_ItemCount(item, 0LL) < 1 )
        return v11;
      v19 = 0LL;
      break;
    case 8:
    case 9:
    case 0xC:
      v11 = (System_Int32_array *)sub_1C3B80C(int___TypeInfo, 1LL);
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_54;
      v12 = DataManager__GetMasterData_object_(
              (DataManager_o *)SelfUserGame,
              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v8);
        byte_4C1C955 = 1;
      }
      SelfUserGame = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        SelfUserGame = (__int64)NetworkManager_TypeInfo;
      }
      if ( !item->fields._Shop_k__BackingField )
        goto LABEL_54;
      v13 = *(_QWORD *)(SelfUserGame + 184);
      v14 = item->fields._Shop_k__BackingField;
      v15 = *(_QWORD *)(v13 + 64);
      SelfUserGame = ShopEntity__GetItemIDs(v14, 0, 0LL);
      if ( !v12 )
        goto LABEL_54;
      SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)v12, v15, SelfUserGame, 0LL);
      if ( !SelfUserGame || !v11 )
        goto LABEL_54;
      if ( !v11->max_length )
        goto LABEL_55;
      v16 = *(_DWORD *)(SelfUserGame + 28);
      goto LABEL_52;
    case 0xA:
      SelfUserGame = sub_1C3B80C(int___TypeInfo, 1LL);
      if ( !v10 )
        goto LABEL_54;
      v11 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_54;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_55;
      v16 = v10[47];
LABEL_52:
      v11->m_Items[1] = v16;
      return v11;
    default:
      v21 = ShopBuyItemListViewItem__get_ItemCount(item, 0LL);
      return (System_Int32_array *)sub_1C3B80C(int___TypeInfo, v21);
  }
  do
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C1C955 )
    {
      sub_1C3B764(&NetworkManager_TypeInfo, v8);
      byte_4C1C955 = 1;
    }
    SelfUserGame = (__int64)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      SelfUserGame = (__int64)NetworkManager_TypeInfo;
    }
    if ( !item->fields._Shop_k__BackingField )
      goto LABEL_54;
    v20 = *(_QWORD *)(*(_QWORD *)(SelfUserGame + 184) + 64LL);
    SelfUserGame = ShopEntity__GetItemIDs(item->fields._Shop_k__BackingField, v19, 0LL);
    if ( !MasterData_object )
      goto LABEL_54;
    SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                              (UserItemMaster_o *)MasterData_object,
                              v20,
                              SelfUserGame,
                              0LL);
    if ( !SelfUserGame || !v11 )
      goto LABEL_54;
    if ( v19 >= v11->max_length )
LABEL_55:
      sub_1C3B9C8(SelfUserGame, v8);
    v11->m_Items[++v19] = *(_DWORD *)(SelfUserGame + 28);
  }
  while ( (__int64)v19 < ShopBuyItemListViewItem__get_ItemCount(item, 0LL) );
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
  bool v9; // w2
  __int64 *v10; // x9

  v5 = this;
  if ( (byte_4C1E351 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21004/*"materialLatestClear"*/, item);
    sub_1C3B764(&StringLiteral_20989/*"master_gauge_off_{0}"*/, v6);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C3B764(&StringLiteral_20923/*"mainScenario"*/, v7);
    byte_4C1E351 = 1;
  }
  if ( !item || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0LL )
    sub_1C3B9C0(this, item);
  v9 = 0;
  v10 = &StringLiteral_20989/*"master_gauge_off_{0}"*/;
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
      v10 = &StringLiteral_21004/*"materialLatestClear"*/;
      goto LABEL_9;
    case 0xF:
      v10 = &StringLiteral_20923/*"mainScenario"*/;
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

  if ( (byte_4C1E357 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, isInPreparation);
    sub_1C3B764(&UICommonButtonColor_TypeInfo, v7);
    byte_4C1E357 = 1;
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
      sub_1C3B9C0(v12, v9);
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

  if ( (byte_4C1E352 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, item);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    sub_1C3B764(&ShopBuyItemListViewItemDraw_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_23766/*"tutorial_clear"*/, v7);
    byte_4C1E352 = 1;
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
          v16 = System_String__Concat_63368612((System_String_o *)StringLiteral_23766/*"tutorial_clear"*/, v15, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          if ( AtlasManager__SetShopBanner_39284172(v14, v16, 0LL) )
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
    sub_1C3B9C0(v9, v10);
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

  if ( (byte_4C1E34E & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, button);
    byte_4C1E34E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)button, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !button || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)button, 0LL)) == 0LL )
      sub_1C3B9C0(gameObject, v7);
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

  if ( (byte_4C1E35B & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, itemIcon);
    byte_4C1E35B = 1;
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
          sub_1C3B9C0(IsAp, v11);
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

  if ( (byte_4C1E35D & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, isRarePriShopPurchased);
    sub_1C3B764(&StringLiteral_12317/*"Scroll View"*/, v11);
    sub_1C3B764(&StringLiteral_13605/*"The builder was not properly initialized."*/, v12);
    byte_4C1E35D = 1;
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
                                                       (System_String_o *)StringLiteral_12317/*"Scroll View"*/,
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
  RestTime2 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13605/*"The builder was not properly initialized."*/, 0LL);
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

  if ( (byte_4C1E35C & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, eventItemIcon);
    byte_4C1E35C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)eventItemIcon, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !eventItemIcon )
      sub_1C3B9C0(v8, v9);
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
  ShopBuyItemListViewItemDraw_o *v5; // x19
  bool v6; // w20
  _BOOL8 IsItemTypeCommonConsume; // x0
  const MethodInfo *v8; // x4
  struct CommonConsumeEntity_array *CommonConsumeEntities_k__BackingField; // x22
  int max_length; // w8
  CommonConsumeEntity_o *v11; // x2
  ItemIconComponent_o *eventItemIcon; // x1
  const MethodInfo *v13; // x4
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

  v5 = this;
  if ( isInPreparation )
  {
    if ( !item )
      goto LABEL_34;
    this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
    if ( !this )
      goto LABEL_34;
    v6 = ShopEntity__checkFlag((ShopEntity_o *)this, 32, 0LL);
  }
  else
  {
    if ( !item )
      goto LABEL_34;
    v6 = 0;
  }
  IsItemTypeCommonConsume = ShopBuyItemListViewItem__get_IsItemTypeCommonConsume(item, 0LL);
  if ( !IsItemTypeCommonConsume
    || (CommonConsumeEntities_k__BackingField = item->fields._CommonConsumeEntities_k__BackingField) == 0LL )
  {
    if ( !item->fields._EventItemEntities_k__BackingField )
    {
      ShopBuyItemListViewItemDraw__SetEventItemIcon(
        (ShopBuyItemListViewItemDraw_o *)IsItemTypeCommonConsume,
        v5->fields.eventItemIcon,
        0LL,
        0,
        v8);
      ShopBuyItemListViewItemDraw__SetEventItemIcon(v18, v5->fields.eventItemIcon1, 0LL, 0, v19);
      eventItemIcon2 = v5->fields.eventItemIcon2;
      v17 = 0LL;
      v20 = 0;
LABEL_26:
      ShopBuyItemListViewItemDraw__SetEventItemIcon(this, eventItemIcon2, v17, v20, v14);
      return;
    }
    this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_ItemCount(item, 0LL);
    if ( (int)this >= 2 )
    {
      EventItemEntities_k__BackingField = item->fields._EventItemEntities_k__BackingField;
      if ( EventItemEntities_k__BackingField )
      {
        if ( !EventItemEntities_k__BackingField->max_length )
          goto LABEL_35;
        ShopBuyItemListViewItemDraw__SetEventItemIcon(
          this,
          v5->fields.eventItemIcon1,
          EventItemEntities_k__BackingField->m_Items[0],
          v6,
          v13);
        v22 = item->fields._EventItemEntities_k__BackingField;
        if ( v22 )
        {
          if ( v22->max_length <= 1 )
            goto LABEL_35;
          eventItemIcon2 = v5->fields.eventItemIcon2;
          v17 = v22->m_Items[1];
          goto LABEL_25;
        }
      }
    }
    else
    {
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_IsSoldOut(item, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 && item->fields._IsNotHavingShopItemReceived_k__BackingField )
        return;
      v15 = item->fields._EventItemEntities_k__BackingField;
      if ( v15 )
      {
        if ( !v15->max_length )
          goto LABEL_35;
        eventItemIcon2 = v5->fields.eventItemIcon;
        v17 = v15->m_Items[0];
LABEL_25:
        v20 = v6;
        goto LABEL_26;
      }
    }
LABEL_34:
    sub_1C3B9C0(this, item);
  }
  max_length = CommonConsumeEntities_k__BackingField->max_length;
  if ( max_length == 1 )
  {
    v11 = CommonConsumeEntities_k__BackingField->m_Items[0];
    if ( v11 )
    {
      eventItemIcon = v5->fields.eventItemIcon;
LABEL_32:
      ShopBuyItemListViewItemDraw__SetCommonConsumeIcon(v5, eventItemIcon, v11, v6, v8);
      return;
    }
    return;
  }
  if ( max_length < 2 )
    return;
  v23 = CommonConsumeEntities_k__BackingField->m_Items[0];
  if ( v23 )
  {
    ShopBuyItemListViewItemDraw__SetCommonConsumeIcon(v5, v5->fields.eventItemIcon1, v23, v6, v8);
    if ( CommonConsumeEntities_k__BackingField->max_length <= 1 )
LABEL_35:
      sub_1C3B9C8(this, item);
  }
  v11 = CommonConsumeEntities_k__BackingField->m_Items[1];
  if ( v11 )
  {
    eventItemIcon = v5->fields.eventItemIcon2;
    goto LABEL_32;
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetInfoButton(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v6; // x19
  const MethodInfo *v7; // x3
  UICommonButton_o *infoButton; // x21
  UICommonButton_o *v9; // x1
  bool v10; // w2
  ShopBuyItemListViewItemDraw_o *v11; // x22
  UICommonButton_o *v12; // x23
  int32_t PurchaseType; // w0
  ShopBuyItemListViewItemDraw_o *v14; // x24
  UICommonButton_o *v15; // x25
  int32_t v16; // w0
  int32_t v17; // w0
  System_String_o *UniqueMessage; // x0
  System_String_o *v19; // x0

  v6 = this;
  if ( (byte_4C1E356 & 1) == 0 )
  {
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C3B764(&StringLiteral_9440/*"OPTION_FRIEND_MESSAGE_EXPLANATION"*/, item);
    byte_4C1E356 = 1;
  }
  if ( !isInPreparation )
  {
    if ( !item )
      goto LABEL_44;
    goto LABEL_8;
  }
  if ( !item )
    goto LABEL_44;
  if ( ShopBuyItemListViewItem__get_IsSoldOut(item, 0LL) )
  {
LABEL_8:
    this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
    if ( this )
    {
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__checkFlag((ShopEntity_o *)this, 0x8000, 0LL);
      infoButton = v6->fields.infoButton;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v9 = v6->fields.infoButton;
        v10 = 0;
LABEL_43:
        ShopBuyItemListViewItemDraw__SetButtonActive(this, v9, v10, v7);
        return;
      }
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PurchaseType(item, 0LL);
      if ( (_DWORD)this == 1 )
        v11 = 0LL;
      else
        v11 = v6;
      if ( (_DWORD)this == 1 )
        v12 = 0LL;
      else
        v12 = infoButton;
      if ( (_DWORD)this == 1 )
        goto LABEL_42;
      PurchaseType = ShopBuyItemListViewItem__get_PurchaseType(item, 0LL);
      v14 = PurchaseType == 4 ? 0LL : v11;
      v15 = PurchaseType == 4 ? 0LL : v12;
      if ( PurchaseType == 4 )
      {
        this = (ShopBuyItemListViewItemDraw_o *)(&dword_0 + 1);
      }
      else
      {
        v16 = ShopBuyItemListViewItem__get_PurchaseType(item, 0LL);
        v6 = v16 == 21 ? 0LL : v14;
        infoButton = v16 == 21 ? 0LL : v15;
        if ( v16 == 21 )
        {
          this = (ShopBuyItemListViewItemDraw_o *)(&dword_0 + 1);
          v6 = v11;
          infoButton = v12;
        }
        else
        {
          v17 = ShopBuyItemListViewItem__get_PurchaseType(item, 0LL);
          if ( v17 == 19 )
          {
            this = (ShopBuyItemListViewItemDraw_o *)(&dword_0 + 1);
            v6 = v14;
            infoButton = v15;
          }
          else
          {
            UniqueMessage = ShopBuyItemListViewItem__get_UniqueMessage(item, 0LL);
            if ( System_String__IsNullOrEmpty(UniqueMessage, 0LL) )
            {
              this = 0LL;
            }
            else
            {
              v19 = ShopBuyItemListViewItem__get_UniqueMessage(item, 0LL);
              this = (ShopBuyItemListViewItemDraw_o *)System_String__op_Inequality(
                                                        v19,
                                                        (System_String_o *)StringLiteral_9440/*"OPTION_FRIEND_MESSAGE_EXPLANATION"*/,
                                                        0LL);
            }
          }
        }
      }
      if ( v6 )
      {
LABEL_42:
        v10 = (unsigned __int8)this & 1;
        v9 = infoButton;
        goto LABEL_43;
      }
    }
LABEL_44:
    sub_1C3B9C0(this, item);
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
  _BOOL8 IsPreparation; // x0
  _BOOL4 v26; // w21
  const MethodInfo *v27; // x3
  ShopBuyItemListViewItemDraw_o *v28; // x0
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x2
  ShopBuyItemListViewItemDraw_o *v31; // x0
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x2
  bool v34; // w23
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x1
  UILabel_o *messageTextLabel; // x24
  const MethodInfo *v38; // x5
  const MethodInfo *v39; // x3
  ShopEntity_o *Shop_k__BackingField; // x23
  UISprite_o *possessionSprite; // x24
  bool HaveIconShowable; // w0
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x2
  UnityEngine_Object_o *chocolateSprite; // x23
  _BOOL8 v47; // x0
  __int64 v48; // x1
  const MethodInfo *v49; // x3
  UnityEngine_Component_o *IsChocolateSvtEquip; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  ShopBuyItemListViewItemDraw_o *v52; // x0
  const MethodInfo *v53; // x3
  UnityEngine_Object_o *soldOutImage; // x23
  bool v55; // w23
  const MethodInfo *v56; // x2
  ShopEntity_o *v57; // x24
  UILabel_o *textOnMask; // x25
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x3
  bool IsRarePriShopPurchased_k__BackingField; // w22
  bool IsIndefinitePeriodShowable; // w23
  int64_t ActiveTime; // x0
  const MethodInfo *v64; // x5
  UnityEngine_Object_o *priceInfo1; // x22
  const MethodInfo *v66; // x3
  ShopBuyItemListViewItemDraw_o *v67; // x0
  const MethodInfo *v68; // x3
  struct CommonConsumeEntity_array *CommonConsumeEntities_k__BackingField; // x22
  bool v70; // w1
  UnityEngine_GameObject_o *v71; // x22
  struct UnityEngine_GameObject_o *priceInfo2; // x22
  const MethodInfo *v73; // x3
  const MethodInfo *v74; // x3
  _BOOL4 v75; // w22
  struct ShopEntity_o *v76; // x8
  _BOOL4 v77; // w23
  _BOOL4 v78; // w8
  struct ShopEntity_o *v79; // x8
  Il2CppObject *v80; // x21
  Il2CppObject *MasterData_object; // x22
  struct ShopEntity_o *v82; // x8
  UserShopEntity_o *v83; // x22
  System_String_o **v84; // x8
  System_String_o **v85; // x9
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
  const MethodInfo *v98; // [xsp+0h] [xbp-80h]
  const MethodInfo *v99; // [xsp+0h] [xbp-80h]
  bool isNotCommandCodeGet; // [xsp+14h] [xbp-6Ch] BYREF
  bool isNotCostumeGet; // [xsp+18h] [xbp-68h] BYREF
  bool isServantHaving; // [xsp+1Ch] [xbp-64h] BYREF
  bool isNotServantHaving; // [xsp+20h] [xbp-60h] BYREF
  bool isNotServantGet; // [xsp+24h] [xbp-5Ch] BYREF
  System_String_o *itemName; // [xsp+28h] [xbp-58h] BYREF
  System_String_o *message; // [xsp+38h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_4C1E34B & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, item);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserShopMaster___, v7);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9);
    sub_1C3B764(&LocalizationManager_TypeInfo, v10);
    sub_1C3B764(&NetworkManager_TypeInfo, v11);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v12);
    sub_1C3B764(&ShopBuyItemUtility_TypeInfo, v13);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1C3B764(&StringLiteral_12229/*"SUPPORT_SELECT_INPUT_DECK_NAME_TITLE"*/, v15);
    sub_1C3B764(&StringLiteral_20010/*"img_list_no"*/, v16);
    sub_1C3B764(&StringLiteral_12324/*"Scrollbar"*/, v17);
    sub_1C3B764(&StringLiteral_20009/*"img_list_lv"*/, v18);
    sub_1C3B764(&StringLiteral_21072/*"messageOff"*/, v19);
    sub_1C3B764(&StringLiteral_1/*""*/, v20);
    sub_1C3B764(&StringLiteral_12230/*"SUPPORT_SELECT_NAME"*/, v21);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C3B764(&StringLiteral_12297/*"ScreenEffectBlur: KEEP"*/, v22);
    byte_4C1E34B = 1;
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
  IsPreparation = ShopBuyItemListViewItem__GetIsPreparation(item, &message, &itemName, 0LL);
  v26 = IsPreparation;
  ShopBuyItemListViewItemDraw__SetSpriteActive(
    (ShopBuyItemListViewItemDraw_o *)IsPreparation,
    v6->fields.rangeSprite,
    mode == 0,
    v27);
  ShopBuyItemListViewItemDraw__SetSpriteActive(v28, v6->fields.addRangeSprite, item->fields.isTerminationSpace, v29);
  ShopBuyItemListViewItemDraw__SetBandSprite(v6, item, v30);
  ShopBuyItemListViewItemDraw__SetButtonActive(v31, v6->fields.infoButton, 0, v32);
  if ( !mode )
    return;
  ShopBuyItemListViewItemDraw__SetBaseSprite(v6, item, v33);
  v34 = v26;
  ShopBuyItemListViewItemDraw__SetItemIcon(v6, item, v26, v35);
  messageTextLabel = v6->fields.messageTextLabel;
  if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
  ShopBuyItemUtility__SetDefaultMessageLabel(messageTextLabel, v36);
  ShopBuyItemListViewItemDraw__SetNameAndMessageText(v6, item, v34, message, itemName, v38);
  ShopBuyItemListViewItemDraw__SetNumText(v6, item, v34, v39);
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  possessionSprite = v6->fields.possessionSprite;
  HaveIconShowable = ShopBuyItemListViewItem__get_IsHaveIconShowable(item, 0LL);
  ShopBuyItemUtility__SetShopHaveStatusIcon(Shop_k__BackingField, possessionSprite, HaveIconShowable, v43);
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
      goto LABEL_98;
    gameObject = UnityEngine_Component__get_gameObject(IsChocolateSvtEquip, 0LL);
    IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopBuyItemListViewItem__get_IsChocolateSvtEquip(item, 0LL);
    if ( !gameObject )
      goto LABEL_98;
    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)IsChocolateSvtEquip & 1, 0LL);
  }
  ShopBuyItemListViewItemDraw__SetLabelText(
    (ShopBuyItemListViewItemDraw_o *)v47,
    v6->fields.textOnMask,
    (System_String_o *)StringLiteral_1/*""*/,
    v49);
  ShopBuyItemListViewItemDraw__SetLabelText(v52, v6->fields.prepareTextOnMask, (System_String_o *)StringLiteral_1/*""*/, v53);
  soldOutImage = (UnityEngine_Object_o *)v6->fields.soldOutImage;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(0LL, soldOutImage, 0LL) )
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.soldOutImage;
    if ( !IsChocolateSvtEquip )
      goto LABEL_98;
    IsChocolateSvtEquip = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(IsChocolateSvtEquip, 0LL);
    if ( !IsChocolateSvtEquip )
      goto LABEL_98;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0LL);
  }
  v55 = v26;
  ShopBuyItemListViewItemDraw__SetRestCountText(
    v6,
    item,
    v26,
    &isNotServantGet,
    &isNotServantHaving,
    &isServantHaving,
    &isNotCostumeGet,
    &isNotCommandCodeGet,
    v98);
  ShopBuyItemListViewItemDraw__SetMask(
    v6,
    item,
    v26,
    isNotServantGet,
    isNotServantHaving,
    isServantHaving,
    isNotCostumeGet,
    isNotCommandCodeGet,
    v99);
  v57 = item->fields._Shop_k__BackingField;
  textOnMask = v6->fields.textOnMask;
  if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
  ShopBuyItemUtility__SetAddTextOnMask(v57, textOnMask, v56);
  ShopBuyItemListViewItemDraw__SetInfoButton(v6, item, v55, v59);
  ShopBuyItemListViewItemDraw__SetBaseButton(v6, v55, mode, v60);
  IsRarePriShopPurchased_k__BackingField = item->fields._IsRarePriShopPurchased_k__BackingField;
  IsIndefinitePeriodShowable = ShopBuyItemListViewItem__get_IsIndefinitePeriodShowable(item, 0LL);
  ActiveTime = ShopBuyItemListViewItem__get_ActiveTime(item, 0LL);
  ShopBuyItemListViewItemDraw__SetEventEndTime(
    v6,
    IsRarePriShopPurchased_k__BackingField,
    IsIndefinitePeriodShowable,
    ActiveTime,
    item->fields._EnterTime_k__BackingField,
    v64);
  priceInfo1 = (UnityEngine_Object_o *)v6->fields.priceInfo1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(priceInfo1, 0LL, 0LL) )
    return;
  if ( ShopBuyItemListViewItem__get_IsItemTypeFree(item, 0LL) )
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfoFree;
    if ( !IsChocolateSvtEquip )
      goto LABEL_98;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 1, 0LL);
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfo1;
    if ( !IsChocolateSvtEquip )
      goto LABEL_98;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0LL);
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfo2;
    if ( !IsChocolateSvtEquip )
      goto LABEL_98;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0LL);
    ShopBuyItemListViewItemDraw__SetPriceIconText(v6, item, v26, v66);
    goto LABEL_41;
  }
  if ( ShopBuyItemListViewItem__get_IsItemTypeCommonConsume(item, 0LL) )
  {
    CommonConsumeEntities_k__BackingField = item->fields._CommonConsumeEntities_k__BackingField;
    if ( !CommonConsumeEntities_k__BackingField )
      goto LABEL_41;
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfoFree;
    if ( !IsChocolateSvtEquip )
      goto LABEL_98;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0LL);
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfo1;
    if ( !IsChocolateSvtEquip )
      goto LABEL_98;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)IsChocolateSvtEquip,
      (signed int)CommonConsumeEntities_k__BackingField->max_length < 2,
      0LL);
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfo2;
    if ( !IsChocolateSvtEquip )
      goto LABEL_98;
    v70 = (signed int)CommonConsumeEntities_k__BackingField->max_length > 1;
  }
  else
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfoFree;
    if ( !IsChocolateSvtEquip )
      goto LABEL_98;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0LL);
    v71 = v6->fields.priceInfo1;
    IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopBuyItemListViewItem__get_ItemCount(item, 0LL);
    if ( !v71 )
      goto LABEL_98;
    UnityEngine_GameObject__SetActive(v71, (int)IsChocolateSvtEquip < 2, 0LL);
    priceInfo2 = v6->fields.priceInfo2;
    IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopBuyItemListViewItem__get_ItemCount(item, 0LL);
    if ( !priceInfo2 )
      goto LABEL_98;
    v70 = (int)IsChocolateSvtEquip > 1;
    IsChocolateSvtEquip = (UnityEngine_Component_o *)priceInfo2;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, v70, 0LL);
  ShopBuyItemListViewItemDraw__SetPriceIconText(v6, item, v26, v73);
  ShopBuyItemListViewItemDraw__SetEventItemIconText(v6, item, v26, v74);
LABEL_41:
  IsChocolateSvtEquip = (UnityEngine_Component_o *)item->fields._Shop_k__BackingField;
  if ( !IsChocolateSvtEquip )
    goto LABEL_98;
  IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__isQuestNotClearItemClosed(
                                                     (ShopEntity_o *)IsChocolateSvtEquip,
                                                     0,
                                                     0LL);
  v75 = 0;
  if ( ((unsigned __int8)IsChocolateSvtEquip & 1) != 0 )
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_98;
    IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__IsSoldOut((ShopEntity_o *)IsChocolateSvtEquip, 0LL);
    v75 = ((unsigned __int8)IsChocolateSvtEquip & 1) == 0;
  }
  v76 = item->fields._Shop_k__BackingField;
  if ( !v76 )
    goto LABEL_98;
  if ( v76->fields.purchaseType == 14 )
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__IsEligibleForFreeFeaturesTheCostumeRelease(
                                                       item->fields._Shop_k__BackingField,
                                                       0LL);
    v76 = item->fields._Shop_k__BackingField;
    if ( !v76 )
      goto LABEL_98;
    v77 = ((unsigned __int8)IsChocolateSvtEquip & 1) == 0;
  }
  else
  {
    v77 = 0;
  }
  IsChocolateSvtEquip = (UnityEngine_Component_o *)v76->fields.script;
  if ( !IsChocolateSvtEquip )
LABEL_98:
    sub_1C3B9C0(IsChocolateSvtEquip, v48);
  IsChocolateSvtEquip = (UnityEngine_Component_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                     (System_Collections_Generic_Dictionary_object__object__o *)IsChocolateSvtEquip,
                                                     (Il2CppObject *)StringLiteral_20009/*"img_list_lv"*/,
                                                     (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( ((unsigned __int8)IsChocolateSvtEquip & 1) != 0 && (!v26 || !v75) )
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_98;
    IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__IsAfterTheFreeShopReleaseDate(
                                                       (ShopEntity_o *)IsChocolateSvtEquip,
                                                       0LL);
    v78 = ((unsigned __int8)IsChocolateSvtEquip & 1) == 0;
  }
  else
  {
    v78 = 1;
  }
  if ( v78 || v77 )
  {
LABEL_55:
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.freeExchangeConditionNoticeRoot;
    if ( IsChocolateSvtEquip )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0LL);
      return;
    }
    goto LABEL_98;
  }
  v79 = item->fields._Shop_k__BackingField;
  if ( !v79 )
    goto LABEL_98;
  IsChocolateSvtEquip = (UnityEngine_Component_o *)v79->fields.script;
  if ( !IsChocolateSvtEquip )
    goto LABEL_98;
  IsChocolateSvtEquip = (UnityEngine_Component_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                     (System_Collections_Generic_Dictionary_object__object__o *)IsChocolateSvtEquip,
                                                     (Il2CppObject *)StringLiteral_20010/*"img_list_no"*/,
                                                     (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !IsChocolateSvtEquip )
    goto LABEL_98;
  v80 = (Il2CppObject *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))IsChocolateSvtEquip->klass->vtable._3_ToString.method)(
                          IsChocolateSvtEquip,
                          IsChocolateSvtEquip->klass[1]._1.image);
  IsChocolateSvtEquip = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsChocolateSvtEquip )
    goto LABEL_98;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)IsChocolateSvtEquip,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v48);
    byte_4C1C955 = 1;
  }
  IsChocolateSvtEquip = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    IsChocolateSvtEquip = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
  }
  v82 = item->fields._Shop_k__BackingField;
  if ( !v82 )
    goto LABEL_98;
  if ( !MasterData_object )
    goto LABEL_98;
  IsChocolateSvtEquip = (UnityEngine_Component_o *)UserShopMaster__GetEntityDefinitely(
                                                     (UserShopMaster_o *)MasterData_object,
                                                     *(_QWORD *)(*(_QWORD *)&IsChocolateSvtEquip[7].fields.m_CachedPtr
                                                               + 64LL),
                                                     v82->fields.id,
                                                     0LL);
  if ( !item->fields._Shop_k__BackingField )
    goto LABEL_98;
  v83 = (UserShopEntity_o *)IsChocolateSvtEquip;
  IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__IsFulFilledFreeExchangeCondition(
                                                     item->fields._Shop_k__BackingField,
                                                     0LL);
  if ( !v83 )
    goto LABEL_98;
  if ( v83->fields.num )
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_98;
    if ( !ShopEntity__IsPaidExchange((ShopEntity_o *)IsChocolateSvtEquip, 0LL) )
      goto LABEL_55;
    LOBYTE(IsChocolateSvtEquip) = UserShopEntity__get_IsReturnRarePriShop(v83, 0LL);
    v84 = (System_String_o **)&StringLiteral_12324/*"Scrollbar"*/;
    v85 = (System_String_o **)&StringLiteral_12230/*"SUPPORT_SELECT_NAME"*/;
  }
  else
  {
    v84 = (System_String_o **)&StringLiteral_12297/*"ScreenEffectBlur: KEEP"*/;
    v85 = (System_String_o **)&StringLiteral_12229/*"SUPPORT_SELECT_INPUT_DECK_NAME_TITLE"*/;
  }
  v86 = ((unsigned __int8)IsChocolateSvtEquip & 1) == 0;
  IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.freeExchangeConditionNoticeRoot;
  if ( !v86 )
    v84 = v85;
  if ( !IsChocolateSvtEquip )
    goto LABEL_98;
  v87 = *v84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 1, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v88 = LocalizationManager__Get(v87, 0LL);
  IsChocolateSvtEquip = (UnityEngine_Component_o *)System_String__Format(v88, v80, 0LL);
  if ( !v6->fields.freeExchangeConditionNoticeLabel )
    goto LABEL_98;
  UILabel__set_text(v6->fields.freeExchangeConditionNoticeLabel, (System_String_o *)IsChocolateSvtEquip, 0LL);
  freeExchangeConditionNoticeLabel = v6->fields.freeExchangeConditionNoticeLabel;
  if ( !freeExchangeConditionNoticeLabel )
    goto LABEL_98;
  mWidth = freeExchangeConditionNoticeLabel->fields.mWidth;
  freeExchangeConditionNoticeBgSprites = v6->fields.freeExchangeConditionNoticeBgSprites;
  v92 = mWidth >= 512 ? 512 : mWidth;
  if ( !freeExchangeConditionNoticeBgSprites )
    goto LABEL_98;
  max_length = freeExchangeConditionNoticeBgSprites->max_length;
  if ( max_length >= 1 )
  {
    v94 = 0;
    v95 = v92 + 16;
    while ( 1 )
    {
      if ( v94 >= max_length )
        sub_1C3B9C8(IsChocolateSvtEquip, v48);
      v96 = &freeExchangeConditionNoticeBgSprites->obj.klass + (int)v94;
      v97 = (UISprite_o *)v96[4];
      if ( !v97 )
        break;
      UIWidget__set_width((UIWidget_o *)v96[4], v95, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      IsChocolateSvtEquip = (UnityEngine_Component_o *)AtlasManager__SetEventUI(
                                                         v97,
                                                         (System_String_o *)StringLiteral_21072/*"messageOff"*/,
                                                         0LL);
      max_length = freeExchangeConditionNoticeBgSprites->max_length;
      if ( (int)++v94 >= max_length )
        return;
    }
    goto LABEL_98;
  }
}


void __fastcall ShopBuyItemListViewItemDraw__SetItemIcon(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0
  ItemIconComponent_o *v8; // x20
  int32_t PurchaseType; // w21
  int32_t imageId; // [xsp+Ch] [xbp-24h] BYREF

  imageId = 0;
  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    goto LABEL_16;
  ItemIconComponent__Clear(itemIcon, 0LL);
  if ( isInPreparation )
  {
    if ( !item )
      goto LABEL_16;
    itemIcon = (ItemIconComponent_o *)item->fields._Shop_k__BackingField;
    if ( !itemIcon )
      goto LABEL_16;
    if ( ShopEntity__checkFlag((ShopEntity_o *)itemIcon, 2, 0LL) )
    {
      itemIcon = this->fields.itemIcon;
      if ( itemIcon )
      {
        ItemIconComponent__SetItemImage(itemIcon, 8007, 0LL);
        return;
      }
LABEL_16:
      sub_1C3B9C0(itemIcon, item);
    }
  }
  else if ( !item )
  {
    goto LABEL_16;
  }
  itemIcon = (ItemIconComponent_o *)item->fields._Shop_k__BackingField;
  if ( !itemIcon )
    goto LABEL_16;
  itemIcon = (ItemIconComponent_o *)ShopEntity__CheckEquipItem((ShopEntity_o *)itemIcon, &imageId, 0LL);
  v8 = this->fields.itemIcon;
  if ( ((unsigned __int8)itemIcon & 1) != 0 )
  {
    if ( !v8 )
      goto LABEL_16;
    ItemIconComponent__SetEquipItemImage(v8, imageId, 0LL);
  }
  else
  {
    PurchaseType = ShopBuyItemListViewItem__get_PurchaseType(item, 0LL);
    itemIcon = (ItemIconComponent_o *)ShopBuyItemListViewItem__get_TargetId(item, 0LL);
    if ( !v8 )
      goto LABEL_16;
    ItemIconComponent__SetPurchase(v8, PurchaseType, (int32_t)itemIcon, imageId, 0LL);
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

  if ( (byte_4C1E34C & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, label);
    byte_4C1E34C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_1C3B9C0(gameObject, v7);
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

  if ( (byte_4C1E34D & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, label);
    byte_4C1E34D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1C3B9C0(v6, v7);
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
  sub_1C3B708(
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
  _BOOL4 v40; // w23
  UnityEngine_Object_o *anotherBuyable; // x21
  const MethodInfo *v42; // x2
  UnityEngine_Object_o *anotherPayItemImage; // x21
  UnityEngine_GameObject_o *v44; // x22
  struct ShopBuyItemListViewObject_o *listViewObject; // x9
  struct System_Int32_array *possessionAnotherItemIds; // x8
  __int64 methodPtr_low; // x10
  unsigned int max_length; // w10
  int v49; // w9
  UISprite_o *v50; // x21
  int32_t v51; // w22
  ShopBuyItemListViewItemDraw_o *PurchaseType; // x0
  const MethodInfo *v53; // x3
  UISprite_o *maskSprite; // x1
  bool v55; // w2
  struct ShopEntity_o *Shop_k__BackingField; // x8
  bool v57; // w20
  struct ShopEntity_o *v58; // x8
  ShopReleaseMaster_o *v59; // x21
  struct ShopEntity_o *v60; // x8
  struct UISprite_o *v61; // x8
  struct ShopEntity_o *v62; // x8
  struct System_Int32_array *targetIds; // x8
  Il2CppObject *Entity; // x0
  struct ShopEntity_o *v65; // x8
  __int64 *v66; // x8
  ShopBuyItemListViewItemDraw_o *Empty; // x21
  UILabel_o *v68; // x21
  ShopBuyItemListViewItemDraw_o *v69; // x0
  const MethodInfo *v70; // x3
  struct ShopEntity_o *v71; // x8
  const MethodInfo *v72; // x2
  UILabel_o *textOnMask; // x20
  struct ShopEntity_o *v74; // x8
  UILabel_o *v75; // x21
  UnityEngine_Object_o *prepareTextOnMask; // x21
  UILabel_o *v77; // x19
  ShopBuyItemListViewItemDraw_o *v78; // x0
  const MethodInfo *v79; // x3
  ShopEntity_o *v80; // x0
  UILabel_o *v81; // x1
  const MethodInfo *v82; // x2
  System_Int32_array *v83; // [xsp+0h] [xbp-60h] BYREF
  int32_t questId; // [xsp+Ch] [xbp-54h] BYREF

  v15 = item;
  v16 = this;
  if ( (byte_4C1E358 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, item);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v17);
    sub_1C3B764(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v18);
    sub_1C3B764(&Method_DataManager_GetMaster_ShopReleaseMaster___, v19);
    sub_1C3B764(&DataManager_TypeInfo, v20);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v22);
    sub_1C3B764(&LocalizationManager_TypeInfo, v23);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v24);
    sub_1C3B764(&ShopBuyItemListViewManager_TypeInfo, v25);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1C3B764(&string_TypeInfo, v27);
    sub_1C3B764(&StringLiteral_12287/*"SceneManager:scene {0} loaded"*/, v28);
    sub_1C3B764(&StringLiteral_12327/*"Scrollbar.value"*/, v29);
    sub_1C3B764(&StringLiteral_12325/*"Scrollbar Horizontal"*/, v30);
    sub_1C3B764(&StringLiteral_20009/*"img_list_lv"*/, v31);
    sub_1C3B764(&StringLiteral_12323/*"ScrollViewEnabled"*/, v32);
    sub_1C3B764(&StringLiteral_12259/*"Sami, Inari (Finland)"*/, v33);
    sub_1C3B764(&StringLiteral_1/*""*/, v34);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C3B764(&StringLiteral_12233/*"SUPPORT_SELECT_NO_SERVANT_TITLE"*/, v35);
    byte_4C1E358 = 1;
  }
  questId = 0;
  v83 = 0LL;
  if ( !isInPreparation )
  {
    if ( !v15 )
      goto LABEL_139;
    if ( ShopBuyItemListViewItem__get_IsSoldOut(v15, 0LL) && !v15->fields._IsNotHavingShopItemReceived_k__BackingField )
    {
      this = (ShopBuyItemListViewItemDraw_o *)v15->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_139;
      v40 = !ShopEntity__IsAnotherItemBuyable((ShopEntity_o *)this, &v83, 0LL);
    }
    else
    {
      v40 = 0;
    }
    anotherBuyable = (UnityEngine_Object_o *)v16->fields.anotherBuyable;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(anotherBuyable, 0LL, 0LL) )
    {
      anotherPayItemImage = (UnityEngine_Object_o *)v16->fields.anotherPayItemImage;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(anotherPayItemImage, 0LL, 0LL) )
      {
        this = (ShopBuyItemListViewItemDraw_o *)v15->fields._Shop_k__BackingField;
        if ( !this )
          goto LABEL_139;
        v44 = v16->fields.anotherBuyable;
        this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsAnotherItemBuyable(
                                                  (ShopEntity_o *)this,
                                                  &v16->fields.possessionAnotherItemIds,
                                                  0LL);
        if ( !v44 )
          goto LABEL_139;
        UnityEngine_GameObject__SetActive(v44, (unsigned __int8)this & 1, 0LL);
        this = (ShopBuyItemListViewItemDraw_o *)BasicHelper__IsNullOrEmpty(
                                                  (System_Collections_ICollection_o *)v16->fields.possessionAnotherItemIds,
                                                  0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          listViewObject = v16->fields.listViewObject;
          if ( !listViewObject )
            goto LABEL_139;
          possessionAnotherItemIds = v16->fields.possessionAnotherItemIds;
          if ( !possessionAnotherItemIds )
            goto LABEL_139;
          this = (ShopBuyItemListViewItemDraw_o *)listViewObject->fields.manager;
          if ( !this )
            goto LABEL_139;
          item = (ShopBuyItemListViewItem_o *)ShopBuyItemListViewManager_TypeInfo;
          methodPtr_low = LOBYTE(ShopBuyItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
            || (ShopBuyItemListViewManager_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopBuyItemListViewManager_TypeInfo )
          {
            sub_1C3BC80(this);
            ShopBuyItemUtility__SetAddTextOnMask(v80, v81, v82);
            return;
          }
          max_length = possessionAnotherItemIds->max_length;
          v49 = SLODWORD(this[1].fields.baseButton) % (int)max_length;
          if ( v49 >= max_length )
LABEL_140:
            sub_1C3B9C8(this, item);
          v50 = v16->fields.anotherPayItemImage;
          v51 = possessionAnotherItemIds->m_Items[v49 + 1];
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetItem(v50, v51, 0LL);
        }
      }
    }
    if ( v40 )
    {
      ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(v16, v15, v42);
      maskSprite = v16->fields.maskSprite;
      v55 = 1;
LABEL_45:
      ShopBuyItemListViewItemDraw__SetSpriteActive(PurchaseType, maskSprite, v55, v53);
      return;
    }
    PurchaseType = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PurchaseType(v15, 0LL);
    if ( (_DWORD)PurchaseType != 6 )
    {
      maskSprite = v16->fields.maskSprite;
      v55 = 0;
      goto LABEL_45;
    }
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_139;
    this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
    Shop_k__BackingField = v15->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_139;
    if ( !this )
      goto LABEL_139;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isQuestNotClearSet(
                                              (ShopReleaseMaster_o *)this,
                                              Shop_k__BackingField->fields.id,
                                              &questId,
                                              0LL);
    if ( !v15->fields._Shop_k__BackingField )
      goto LABEL_139;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !ShopEntity__isQuestNotClearItemClosed(v15->fields._Shop_k__BackingField, 1, 0LL) )
      {
LABEL_41:
        v57 = 0;
LABEL_111:
        this = (ShopBuyItemListViewItemDraw_o *)v16->fields.maskSprite;
        if ( this )
        {
          this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v57, 0LL);
            return;
          }
        }
        goto LABEL_139;
      }
    }
    else if ( !ShopEntity__isExpireItemClosed(v15->fields._Shop_k__BackingField, 0LL) )
    {
      goto LABEL_41;
    }
    textOnMask = v16->fields.textOnMask;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12327/*"Scrollbar.value"*/, 0LL);
    if ( !textOnMask )
      goto LABEL_139;
    UILabel__set_text(textOnMask, (System_String_o *)this, 0LL);
    v57 = 1;
    goto LABEL_111;
  }
  ShopBuyItemListViewItemDraw__SetSpriteActive(this, v16->fields.maskSprite, 1, (const MethodInfo *)isNotServantGet);
  if ( !v15 )
    goto LABEL_139;
  this = (ShopBuyItemListViewItemDraw_o *)v15->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_139;
  switch ( LODWORD(this->fields.baseSprite) )
  {
    case 2:
    case 7:
    case 9:
      goto LABEL_7;
    case 4:
      v61 = this->fields.maskSprite;
      if ( !v61 )
        goto LABEL_139;
      if ( !LODWORD(v61->fields.m_CancellationTokenSource) )
        goto LABEL_140;
      if ( !LODWORD(v61->fields.leftAnchor) )
        goto LABEL_70;
      this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_139;
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
      v62 = v15->fields._Shop_k__BackingField;
      if ( !v62 )
        goto LABEL_139;
      targetIds = v62->fields.targetIds;
      if ( !targetIds )
        goto LABEL_139;
      if ( !targetIds->max_length )
        goto LABEL_140;
      if ( !this )
        goto LABEL_139;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 targetIds->m_Items[1],
                 (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Entity
        && ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL)
        && v15->fields._ShopKind_k__BackingField != 6 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v66 = &StringLiteral_12287/*"SceneManager:scene {0} loaded"*/;
        goto LABEL_128;
      }
LABEL_70:
      if ( isNotServantGet || isNotServantHaving || isServantHaving || isNotCostumeGet || isNotCommandCodeGet )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
        v65 = v15->fields._Shop_k__BackingField;
        if ( v65 && this )
        {
          this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                    (ShopReleaseMaster_o *)this,
                                                    v65->fields.id,
                                                    40,
                                                    0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v39 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_1/*""*/;
            goto LABEL_129;
          }
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v66 = &StringLiteral_12233/*"SUPPORT_SELECT_NO_SERVANT_TITLE"*/;
LABEL_128:
          this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v66, 0LL);
          v39 = this;
LABEL_129:
          v38 = v16->fields.textOnMask;
LABEL_130:
          ShopBuyItemListViewItemDraw__SetLabelText(this, v38, (System_String_o *)v39, v37);
          goto LABEL_131;
        }
LABEL_139:
        sub_1C3B9C0(this, item);
      }
LABEL_131:
      prepareTextOnMask = (UnityEngine_Object_o *)v16->fields.prepareTextOnMask;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(prepareTextOnMask, 0LL, 0LL)
        && ShopBuyItemListViewItem__IsPrepareTextOnMask(v15, 0LL) )
      {
        v77 = v16->fields.prepareTextOnMask;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v78 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12259/*"Sami, Inari (Finland)"*/, 0LL);
        ShopBuyItemListViewItemDraw__SetLabelText(v78, v77, (System_String_o *)v78, v79);
      }
      return;
    case 5:
      Empty = (ShopBuyItemListViewItemDraw_o *)string_TypeInfo->static_fields->Empty;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12323/*"ScrollViewEnabled"*/, 0LL);
        Empty = this;
      }
      v38 = v16->fields.textOnMask;
      v39 = Empty;
      goto LABEL_130;
    case 6:
      if ( !ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)this, 0, 0LL) )
        goto LABEL_131;
      v68 = v16->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v69 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12325/*"Scrollbar Horizontal"*/, 0LL);
      ShopBuyItemListViewItemDraw__SetLabelText(v69, v68, (System_String_o *)v69, v70);
      this = (ShopBuyItemListViewItemDraw_o *)v15->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_139;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_131;
      v71 = v15->fields._Shop_k__BackingField;
      if ( !v71 )
        goto LABEL_139;
      this = (ShopBuyItemListViewItemDraw_o *)v71->fields.script;
      if ( !this )
        goto LABEL_139;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)this,
             (Il2CppObject *)StringLiteral_20009/*"img_list_lv"*/,
             (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
LABEL_105:
        ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(v16, v15, v72);
      }
      goto LABEL_131;
    case 0xE:
      if ( !isNotServantGet && !isNotServantHaving && !isServantHaving && !isNotCostumeGet && !isNotCommandCodeGet )
        goto LABEL_131;
      if ( ShopEntity__GetFreeShopCondId((ShopEntity_o *)this, 0LL) < 1 )
        goto LABEL_114;
      this = (ShopBuyItemListViewItemDraw_o *)v15->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_139;
      if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, 0LL) )
        goto LABEL_105;
LABEL_114:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
      v74 = v15->fields._Shop_k__BackingField;
      if ( !v74 || !this )
        goto LABEL_139;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                (ShopReleaseMaster_o *)this,
                                                v74->fields.id,
                                                1,
                                                0LL);
      v75 = v16->fields.textOnMask;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12233/*"SUPPORT_SELECT_NO_SERVANT_TITLE"*/, 0LL);
        v39 = this;
      }
      else
      {
        v39 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_1/*""*/;
      }
      v38 = v75;
      goto LABEL_130;
    default:
      if ( !isNotServantGet && !isNotServantHaving && !isServantHaving && !isNotCostumeGet && !isNotCommandCodeGet )
        goto LABEL_131;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
      v58 = v15->fields._Shop_k__BackingField;
      if ( !v58 )
        goto LABEL_139;
      v59 = (ShopReleaseMaster_o *)this;
      if ( !this )
        goto LABEL_139;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                (ShopReleaseMaster_o *)this,
                                                v58->fields.id,
                                                1,
                                                0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_58;
      v60 = v15->fields._Shop_k__BackingField;
      if ( !v60 )
        goto LABEL_139;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(v59, v60->fields.id, 40, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_7:
        v36 = v16->fields.textOnMask;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12233/*"SUPPORT_SELECT_NO_SERVANT_TITLE"*/, 0LL);
        v38 = v36;
        v39 = this;
      }
      else
      {
LABEL_58:
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
  UILabel_o *v18; // x21
  System_String_o *v19; // x22
  System_String_o *v20; // x0
  ShopBuyItemListViewItemDraw_o *v21; // x0
  const MethodInfo *v22; // x3
  bool v23; // w0
  UICrossNarrowLabel_o *v24; // x20
  System_String_o *v25; // x19
  LocalizationManager_c *v26; // x0
  UICrossNarrowLabel_o *v27; // x21
  System_String_o *v28; // x22
  UILabel_o *v29; // x20
  System_String_o *DetailText; // x0
  System_String_o *v31; // x0
  bool IsNullOrEmpty; // w0
  ShopBuyItemListViewItemDraw_o *nameTextLabel; // x20
  System_String_o *NameText; // x19
  System_String_o *v35; // x0
  System_String_o *itemName; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-38h] BYREF

  message = preparationMessage;
  v10 = this;
  itemName = preparationItemName;
  if ( (byte_4C1E353 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, item);
    sub_1C3B764(&StringLiteral_16163/*"__size-field"*/, v11);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C3B764(&StringLiteral_25988, v12);
    byte_4C1E353 = 1;
  }
  if ( isInPreparation )
  {
    messageTextLabel = v10->fields.messageTextLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__ReplaceCommonTag(preparationMessage, 0, 0LL);
    v15 = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_63368612(
                                             (System_String_o *)StringLiteral_16163/*"__size-field"*/,
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
            v17 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_25988;
LABEL_36:
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
            NameText = ShopBuyItemListViewItem__get_NameText(item, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v35 = NameText;
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v35 = preparationItemName;
          }
          this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v35, 0, 0LL);
          if ( nameTextLabel )
          {
            v17 = this;
            this = nameTextLabel;
            goto LABEL_36;
          }
        }
      }
    }
LABEL_41:
    sub_1C3B9C0(this, item);
  }
  if ( !item )
    goto LABEL_41;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_41;
  if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, 0LL)
    && ShopBuyItemListViewItem__get_PurchaseType(item, 0LL) != 14
    && ShopBuyItemListViewItem__TryGetClosedMessage(item, &message, &itemName, 0LL) )
  {
    v18 = v10->fields.messageTextLabel;
    v19 = message;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__ReplaceCommonTag(v19, 0, 0LL);
    v21 = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_63368612(
                                             (System_String_o *)StringLiteral_16163/*"__size-field"*/,
                                             v20,
                                             0LL);
    ShopBuyItemListViewItemDraw__SetLabelText(v21, v18, (System_String_o *)v21, v22);
    v23 = System_String__IsNullOrEmpty(itemName, 0LL);
    v24 = v10->fields.nameTextLabel;
    if ( v23 )
    {
      v25 = ShopBuyItemListViewItem__get_NameText(item, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        v26 = LocalizationManager_TypeInfo;
LABEL_38:
        j_il2cpp_runtime_class_init_0(v26);
      }
    }
    else
    {
      v26 = LocalizationManager_TypeInfo;
      v25 = itemName;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        goto LABEL_38;
    }
    this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v25, 0, 0LL);
    if ( !v24 )
      goto LABEL_41;
    UICrossNarrowLabel__SetCrossNarrowText(v24, (System_String_o *)this, 0LL);
    return;
  }
  v27 = v10->fields.nameTextLabel;
  v28 = ShopBuyItemListViewItem__get_NameText(item, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v28, 0, 0LL);
  if ( !v27 )
    goto LABEL_41;
  UICrossNarrowLabel__SetCrossNarrowText(v27, (System_String_o *)this, 0LL);
  v29 = v10->fields.messageTextLabel;
  DetailText = ShopBuyItemListViewItem__get_DetailText(item, 0LL);
  v31 = LocalizationManager__ReplaceCommonTag(DetailText, 0, 0LL);
  this = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_63368612(
                                            (System_String_o *)StringLiteral_16163/*"__size-field"*/,
                                            v31,
                                            0LL);
  if ( !v29 )
    goto LABEL_41;
  UILabel__set_text(v29, (System_String_o *)this, 0LL);
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
  if ( (byte_4C1E354 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_int__TypeInfo, item);
    sub_1C3B764(&LocalizationManager_TypeInfo, v7);
    sub_1C3B764(&Method_ShopBuyItemListViewItemDraw__SetNumText_b__73_0__, v8);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C3B764(&StringLiteral_12265/*"Sami, Skolt (Finland)"*/, v9);
    byte_4C1E354 = 1;
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
  v13 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12265/*"Sami, Skolt (Finland)"*/, 0LL);
  ShopBuyItemListViewItemDraw__SetLabelText(v13, numTitleLabel, (System_String_o *)v13, v14);
  ShopBuyItemListViewItemDraw__SetLabelActive(v15, v6->fields.numTextLabel, 1, v16);
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
LABEL_18:
    sub_1C3B9C0(this, item);
  numTextLabel = v6->fields.numTextLabel;
  HoldCount = ShopEntity__getHoldCount((ShopEntity_o *)this, 0LL);
  NumberFormat = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__GetNumberFormat(HoldCount, 0LL);
  ShopBuyItemListViewItemDraw__SetLabelText(NumberFormat, numTextLabel, (System_String_o *)NumberFormat, v20);
  if ( item->fields._ShopKind_k__BackingField == 7 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
    v22 = (System_Action_int__o *)sub_1C3B9B0(System_Action_int__TypeInfo);
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
  ShopEntity_o *TargetId; // x0
  __int64 v18; // x1
  Il2CppObject *Master_object; // x21
  void *monitor; // x21
  Il2CppClass *klass; // x22
  int32_t v22; // w21
  UIGrid_o *v23; // x20
  UILabel_o *v24; // x22
  UILabel_o *v25; // x23
  UILabel_o *v26; // x24
  UISprite_o *v27; // x25
  UISprite_o *v28; // x26
  UISprite_o *v29; // x19
  bool IsPossessionInfoDisp; // w27
  const MethodInfo *v31; // [xsp+8h] [xbp-68h]
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4C1E362 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_ServantMaster___, item);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1C3B764(&ShopBuyItemUtility_TypeInfo, v9);
    byte_4C1E362 = 1;
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
              TargetId = (ShopEntity_o *)UnityEngine_Object__op_Equality(possessionBGSprite, 0LL, 0LL);
              if ( ((unsigned __int8)TargetId & 1) == 0 )
              {
                if ( !item )
                  goto LABEL_44;
                if ( ShopBuyItemListViewItem__get_PurchaseType(item, 0LL) != 4
                  && ShopBuyItemListViewItem__get_PurchaseType(item, 0LL) != 8
                  && ShopBuyItemListViewItem__get_PurchaseType(item, 0LL) != 21 )
                {
                  goto LABEL_38;
                }
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantMaster___);
                TargetId = (ShopEntity_o *)ShopBuyItemListViewItem__get_TargetId(item, 0LL);
                if ( !Master_object )
                  goto LABEL_44;
                if ( !DataMasterBase_object__object__int___TryGetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        &entity,
                        (int32_t)TargetId,
                        (const MethodInfo_329AE94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
                  goto LABEL_38;
                TargetId = (ShopEntity_o *)entity;
                if ( !entity )
                  goto LABEL_44;
                TargetId = (ShopEntity_o *)ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL);
                if ( ((unsigned __int8)TargetId & 1) != 0 )
                {
                  if ( !entity )
                    goto LABEL_44;
                  klass = entity[1].klass;
                  monitor = entity[1].monitor;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v33.fields.currentCryptoKey = klass;
                  *(_QWORD *)&v33.fields.fakeValue = monitor;
                  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v33, 0LL);
                }
                else
                {
LABEL_38:
                  v22 = 0;
                }
                TargetId = item->fields._Shop_k__BackingField;
                if ( TargetId )
                {
                  v23 = this->fields.possessionGrid;
                  v24 = this->fields.possessionNumLabel;
                  v25 = this->fields.coinNumLabel;
                  v26 = this->fields.treasureDeviceLevelLabel;
                  v27 = this->fields.summonedSprite;
                  v28 = this->fields.coinIcon;
                  v29 = this->fields.possessionBGSprite;
                  IsPossessionInfoDisp = ShopEntity__IsPossessionInfoDisp(TargetId, 0LL);
                  if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
                  ShopBuyItemUtility__SetPossessionInfo(
                    v22,
                    v23,
                    v24,
                    v25,
                    v28,
                    v26,
                    v27,
                    v29,
                    IsPossessionInfoDisp,
                    v31);
                  return;
                }
LABEL_44:
                sub_1C3B9C0(TargetId, v18);
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
  struct ShopEntity_o *Shop_k__BackingField; // x8
  int32_t payType; // w8
  UILabel_o *priceLabelFree; // x19
  struct CommonConsumeEntity_array *CommonConsumeEntities_k__BackingField; // x24
  __int64 v13; // x8
  ShopBuyItemListViewItemDraw_o *priceIconLabel; // x19
  int32_t v15; // w20
  ShopBuyItemListViewItemDraw_o *ItemCount; // x0
  const MethodInfo *v17; // x2
  int32_t v18; // w1
  int32_t v19; // w3
  int32_t v20; // w2
  System_Int32_array *UserItemCounts; // x0
  UIIconLabel_o *v22; // x22
  System_Int32_array *v23; // x21
  int32_t PriceIcon; // w23
  ShopBuyItemListViewItemDraw_o *priceIconLabel2; // x19
  int32_t v26; // w22
  UIIconLabel_o *v27; // x22
  int32_t v28; // w23
  ShopBuyItemListViewItemDraw_o *Price; // x0
  int32_t v30; // w24
  const MethodInfo *v31; // x2
  ShopBuyItemListViewItemDraw_o *v32; // x0
  const MethodInfo *v33; // x3
  int32_t v34; // w20
  double v35; // d0
  UILabel_o **p_LineText2digit; // x8
  UIIconLabel_o *priceIconLabel1; // x21
  int32_t v38; // w22
  int32_t rangeSprite; // w23
  int32_t v40; // w21

  v6 = this;
  if ( (byte_4C1E35A & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, item);
    sub_1C3B764(&System_Math_TypeInfo, v7);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C3B764(&StringLiteral_12294/*"Schemas"*/, v8);
    byte_4C1E35A = 1;
  }
  if ( !item )
    goto LABEL_66;
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_66;
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
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, 0LL);
      if ( CommonConsumeEntities_k__BackingField->max_length )
      {
        v15 = (int)this;
        this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[0];
        if ( !this )
          goto LABEL_66;
        goto LABEL_60;
      }
    }
    else
    {
      if ( (int)v13 < 2 )
        return;
      if ( !CommonConsumeEntities_k__BackingField->m_Items[0] )
        goto LABEL_70;
      priceIconLabel1 = v6->fields.priceIconLabel1;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, 0LL);
      if ( CommonConsumeEntities_k__BackingField->max_length )
      {
        v38 = (int)this;
        this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[0];
        if ( !this )
          goto LABEL_66;
        rangeSprite = (int32_t)this->fields.rangeSprite;
        this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0LL);
        if ( !priceIconLabel1 )
          goto LABEL_66;
        UIIconLabel__SetPurchaseDecision(priceIconLabel1, v38, rangeSprite, (int32_t)this, 0LL);
        if ( CommonConsumeEntities_k__BackingField->max_length > 1 )
        {
LABEL_70:
          if ( !CommonConsumeEntities_k__BackingField->m_Items[1] )
            return;
          priceIconLabel = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel2;
          this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, 0LL);
          if ( CommonConsumeEntities_k__BackingField->max_length > 1 )
          {
            v15 = (int)this;
            this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[1];
            if ( !this )
              goto LABEL_66;
LABEL_60:
            v40 = (int32_t)this->fields.rangeSprite;
            this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntity__GetUserHasNum(
                                                      (CommonConsumeEntity_o *)this,
                                                      0LL);
            if ( !priceIconLabel )
              goto LABEL_66;
            v19 = (int)this;
            this = priceIconLabel;
            v18 = v15;
            v20 = v40;
            goto LABEL_62;
          }
        }
      }
    }
LABEL_67:
    sub_1C3B9C8(this, item);
  }
  if ( payType == 13 )
  {
    priceLabelFree = v6->fields.priceLabelFree;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12294/*"Schemas"*/, 0LL);
    if ( priceLabelFree )
    {
      UILabel__set_text(priceLabelFree, (System_String_o *)this, 0LL);
      return;
    }
LABEL_66:
    sub_1C3B9C0(this, item);
  }
  ItemCount = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_ItemCount(item, 0LL);
  if ( (int)ItemCount >= 2 )
  {
    if ( isInPreparation )
    {
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_66;
      ItemCount = (ShopBuyItemListViewItemDraw_o *)ShopEntity__checkFlag((ShopEntity_o *)this, 64, 0LL);
      if ( ((unsigned __int8)ItemCount & 1) != 0 )
      {
        this = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel1;
        if ( !this )
          goto LABEL_66;
        UIIconLabel__SetEventQuestion((UIIconLabel_o *)this, 0LL);
        this = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel2;
        if ( !this )
          goto LABEL_66;
        goto LABEL_39;
      }
    }
    UserItemCounts = ShopBuyItemListViewItemDraw__GetUserItemCounts(ItemCount, item, v17);
    v22 = v6->fields.priceIconLabel1;
    v23 = UserItemCounts;
    PriceIcon = ShopBuyItemListViewItem__get_PriceIcon(item, 0LL);
    this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__GetEventPrice(item, 0, 0LL);
    if ( !v23 )
      goto LABEL_66;
    if ( v23->max_length )
    {
      if ( !v22 )
        goto LABEL_66;
      UIIconLabel__SetPurchaseDecision(v22, PriceIcon, (int32_t)this, v23->m_Items[1], 0LL);
      priceIconLabel2 = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel2;
      v26 = ShopBuyItemListViewItem__get_PriceIcon(item, 0LL);
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__GetEventPrice(item, 1, 0LL);
      if ( v23->max_length > 1 )
      {
        if ( !priceIconLabel2 )
          goto LABEL_66;
        v19 = v23->m_Items[2];
        v20 = (int)this;
        this = priceIconLabel2;
        v18 = v26;
        goto LABEL_62;
      }
    }
    goto LABEL_67;
  }
  if ( ShopBuyItemListViewItem__get_IsSoldOut(item, 0LL) && item->fields._IsNotHavingShopItemReceived_k__BackingField )
  {
    this = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel;
    if ( !this )
      goto LABEL_66;
    v18 = 56;
    v19 = -1;
    v20 = 0;
LABEL_62:
    UIIconLabel__SetPurchaseDecision((UIIconLabel_o *)this, v18, v20, v19, 0LL);
    return;
  }
  if ( isInPreparation )
  {
    this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
    if ( !this )
      goto LABEL_66;
    if ( ShopEntity__checkFlag((ShopEntity_o *)this, 64, 0LL) )
    {
      this = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel;
      if ( !this )
        goto LABEL_66;
LABEL_39:
      UIIconLabel__SetEventQuestion((UIIconLabel_o *)this, 0LL);
      return;
    }
  }
  v27 = v6->fields.priceIconLabel;
  v28 = ShopBuyItemListViewItem__get_PriceIcon(item, 0LL);
  Price = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_Price(item, 0LL);
  v30 = (int)Price;
  this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItemDraw__GetUserItemCounts(Price, item, v31);
  if ( !this )
    goto LABEL_66;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_67;
  if ( !v27 )
    goto LABEL_66;
  UIIconLabel__SetPurchaseDecision(v27, v28, v30, (int32_t)this->fields.rangeSprite, 0LL);
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_66;
  if ( ShopEntity__IsSetStrikethrough((ShopEntity_o *)this, isInPreparation, 0LL) )
  {
    v32 = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_Price(item, 0LL);
    if ( !(_DWORD)v32 )
      goto LABEL_50;
    v34 = ShopBuyItemListViewItem__get_Price(item, 0LL);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v35 = log10((double)v34);
    if ( v35 == INFINITY || (int)v35 )
      p_LineText2digit = &v6->fields.LineText2digit;
    else
LABEL_50:
      p_LineText2digit = &v6->fields.LineText;
    ShopBuyItemListViewItemDraw__SetLabelActive(v32, *p_LineText2digit, 1, v33);
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
  if ( (byte_4C1E359 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, item);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6);
    sub_1C3B764(&LocalizationManager_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1C3B764(&StringLiteral_12326/*"Scrollbar Vertical"*/, v9);
    sub_1C3B764(&StringLiteral_12328/*"Se/"*/, v10);
    sub_1C3B764(&StringLiteral_20009/*"img_list_lv"*/, v11);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C3B764(&StringLiteral_12233/*"SUPPORT_SELECT_NO_SERVANT_TITLE"*/, v12);
    byte_4C1E359 = 1;
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
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
      v15 = item->fields._Shop_k__BackingField;
      if ( v15 )
      {
        targetIds = v15->fields.targetIds;
        if ( targetIds )
        {
          if ( !targetIds->max_length )
            sub_1C3B9C8(this, item);
          if ( this )
          {
            this = (ShopBuyItemListViewItemDraw_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                      &entity,
                                                      targetIds->m_Items[1],
                                                      (const MethodInfo_329AE94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
                                                           (System_String_o *)StringLiteral_12233/*"SUPPORT_SELECT_NO_SERVANT_TITLE"*/,
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
                        (Il2CppObject *)StringLiteral_20009/*"img_list_lv"*/,
                        (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                    v21 = (System_String_o **)&StringLiteral_12328/*"Se/"*/;
                    if ( !IsPaidExchange )
                      v21 = (System_String_o **)&StringLiteral_12326/*"Scrollbar Vertical"*/;
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
    sub_1C3B9C0(this, item);
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
  struct ShopEntity_o *Shop_k__BackingField; // x8
  unsigned int purchaseType; // w8
  const MethodInfo *v27; // x2
  UILabel_o *restCountLabel; // x19
  System_String_o *v29; // x20
  int32_t v30; // w0
  Il2CppObject *MasterData_object; // x21
  struct ShopEntity_o *v32; // x8
  UserShopEntity_o *EntityDefinitely; // x21
  int v34; // w21
  struct ShopEntity_o *v35; // x8
  ShopReleaseMaster_o *v36; // x26
  struct ShopEntity_o *v37; // x8
  struct ShopEntity_o *v38; // x8
  struct ShopEntity_o *v39; // x8
  bool v40; // w8
  Il2CppObject *NumberFormat; // x1
  System_String_o *v42; // x0
  ShopBuyItemListViewItemDraw_o *v43; // x0
  const MethodInfo *v44; // x3
  int32_t v45; // w0
  int32_t v46; // w20
  __int64 *v47; // x8
  struct ShopEntity_o *v48; // x8
  struct ShopEntity_o *v49; // x8
  int32_t LimitNum; // w20
  System_String_o *v51; // x21

  v16 = this;
  if ( (byte_4C1E355 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ShopReleaseMaster___, item);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserShopMaster___, v17);
    sub_1C3B764(&LocalizationManager_TypeInfo, v18);
    sub_1C3B764(&NetworkManager_TypeInfo, v19);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1C3B764(&StringLiteral_12269/*"SandyBrown"*/, v21);
    sub_1C3B764(&StringLiteral_8482/*"MISSION_NAVI_MYROOM"*/, v22);
    sub_1C3B764(&StringLiteral_15100/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, v23);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C3B764(&StringLiteral_3953/*"Can't add component: "*/, v24);
    byte_4C1E355 = 1;
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
    goto LABEL_15;
  }
  if ( !item )
    goto LABEL_75;
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_75;
  purchaseType = Shop_k__BackingField->fields.purchaseType;
  if ( purchaseType > 9 || ((1 << purchaseType) & 0x2E0) == 0 )
  {
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_75;
    this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
    v35 = item->fields._Shop_k__BackingField;
    if ( !v35 )
      goto LABEL_75;
    v36 = (ShopReleaseMaster_o *)this;
    if ( !this )
      goto LABEL_75;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(
                                              (ShopReleaseMaster_o *)this,
                                              v35->fields.id,
                                              38,
                                              0LL);
    *isNotServantGet = (unsigned __int8)this & 1;
    v37 = item->fields._Shop_k__BackingField;
    if ( !v37 )
      goto LABEL_75;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v36, v37->fields.id, 41, 0LL);
    *isNotServantHaving = (unsigned __int8)this & 1;
    v38 = item->fields._Shop_k__BackingField;
    if ( !v38 )
      goto LABEL_75;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v36, v38->fields.id, 40, 0LL);
    *isServantHaving = (unsigned __int8)this & 1;
    v39 = item->fields._Shop_k__BackingField;
    if ( !v39 )
      goto LABEL_75;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v36, v39->fields.id, 78, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v40 = 1;
    }
    else
    {
      v48 = item->fields._Shop_k__BackingField;
      if ( !v48 )
        goto LABEL_75;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v36, v48->fields.id, 79, 0LL);
      v40 = (unsigned __int8)this & 1;
    }
    *isNotCostumeGet = v40;
    v49 = item->fields._Shop_k__BackingField;
    if ( !v49 )
LABEL_75:
      sub_1C3B9C0(this, item);
    *isNotCommandCodeGet = ShopReleaseMaster__isExistCondType(v36, v49->fields.id, 108, 0LL);
  }
  if ( ShopBuyItemListViewItem__get_IsSoldOut(item, 0LL) )
    goto LABEL_32;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_75;
  switch ( LODWORD(this->fields.baseSprite) )
  {
    case 2:
      goto LABEL_32;
    case 5:
    case 7:
    case 9:
      goto LABEL_11;
    case 6:
      if ( !ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)this, 0, 0LL) )
        goto LABEL_62;
LABEL_11:
      restCountLabel = v16->fields.restCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3953/*"Can't add component: "*/, 0LL);
      v30 = 0;
      goto LABEL_44;
    default:
      if ( *isNotServantGet || *isNotServantHaving )
        goto LABEL_59;
      if ( *isServantHaving )
        goto LABEL_60;
      if ( !*isNotCostumeGet )
      {
        if ( *isNotCommandCodeGet )
        {
LABEL_59:
          if ( *isServantHaving )
LABEL_60:
            LimitNum = ShopBuyItemListViewItem__get_LimitNum(item, 0LL);
          else
            LimitNum = *isNotServantHaving;
          goto LABEL_67;
        }
LABEL_62:
        if ( !ShopBuyItemListViewItem__IsPrepareTextOnMask(item, 0LL) )
        {
          restCountLabel = v16->fields.restCountLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v47 = &StringLiteral_12269/*"SandyBrown"*/;
          goto LABEL_51;
        }
LABEL_15:
        if ( ShopBuyItemListViewItem__get_LimitNum(item, 0LL) <= 0 )
        {
          if ( !ShopBuyItemListViewItem__get_IsSoldOut(item, 0LL) )
          {
            v45 = ShopBuyItemListViewItem__get_PurchaseType(item, 0LL);
            restCountLabel = v16->fields.restCountLabel;
            v46 = v45;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            if ( v46 == 16 )
            {
              v47 = &StringLiteral_8482/*"MISSION_NAVI_MYROOM"*/;
LABEL_51:
              v43 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v47, 0LL);
              goto LABEL_52;
            }
LABEL_50:
            v47 = &StringLiteral_15100/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/;
            goto LABEL_51;
          }
LABEL_32:
          ShopBuyItemListViewItemDraw__ShowSoldOut(v16, item, v27);
          return;
        }
        this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)this,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserShopMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C1C955 )
          {
            sub_1C3B764(&NetworkManager_TypeInfo, item);
            byte_4C1C955 = 1;
          }
          this = (ShopBuyItemListViewItemDraw_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (ShopBuyItemListViewItemDraw_o *)NetworkManager_TypeInfo;
          }
          v32 = item->fields._Shop_k__BackingField;
          if ( v32 )
          {
            if ( MasterData_object )
            {
              EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                                   (UserShopMaster_o *)MasterData_object,
                                   *(_QWORD *)&this->fields.priceLabelFree->fields.updateAnchors,
                                   v32->fields.baseShopId,
                                   0LL);
              this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_LimitNum(item, 0LL);
              if ( EntityDefinitely )
              {
                v34 = (_DWORD)this - EntityDefinitely->fields.num;
                if ( v34 >= 1 && !ShopBuyItemListViewItem__get_IsSoldOut(item, 0LL) )
                {
                  restCountLabel = v16->fields.restCountLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3953/*"Can't add component: "*/, 0LL);
                  v30 = v34;
LABEL_44:
                  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v30, 0LL);
                  v42 = v29;
                  goto LABEL_45;
                }
                if ( item->fields._IsNotHavingShopItemReceived_k__BackingField )
                {
                  restCountLabel = v16->fields.restCountLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  goto LABEL_50;
                }
                goto LABEL_32;
              }
            }
          }
        }
        goto LABEL_75;
      }
      LimitNum = 0;
LABEL_67:
      restCountLabel = v16->fields.restCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v51 = LocalizationManager__Get((System_String_o *)StringLiteral_3953/*"Can't add component: "*/, 0LL);
      NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(LimitNum, 0LL);
      v42 = v51;
LABEL_45:
      v43 = (ShopBuyItemListViewItemDraw_o *)System_String__Format(v42, NumberFormat, 0LL);
LABEL_52:
      ShopBuyItemListViewItemDraw__SetLabelText(v43, restCountLabel, (System_String_o *)v43, v44);
      return;
  }
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

  if ( (byte_4C1E361 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_ItemMaster___, shopEntity);
    sub_1C3B764(&Method_DataManager_GetMaster_ShopResetMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMaster_UserShopMaster___, v6);
    sub_1C3B764(&DataManager_TypeInfo, v7);
    sub_1C3B764(&LocalizationManager_TypeInfo, v8);
    sub_1C3B764(&NetworkManager_TypeInfo, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    sub_1C3B764(&StringLiteral_12288/*"SceneManager:scene {0} unloaded"*/, v11);
    sub_1C3B764(&StringLiteral_12290/*"Schema Id is missing. The schema returned from "*/, v12);
    sub_1C3B764(&StringLiteral_12289/*"Schema"*/, v13);
    sub_1C3B764(&StringLiteral_1/*""*/, v14);
    byte_4C1E361 = 1;
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ShopResetMaster___);
      IsSoldOut = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ItemMaster___);
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
          v23 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserShopMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C1C955 )
          {
            sub_1C3B764(&NetworkManager_TypeInfo, v17);
            byte_4C1C955 = 1;
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
                    v29 = &StringLiteral_12289/*"Schema"*/;
                  else
                    v29 = &StringLiteral_12288/*"SceneManager:scene {0} unloaded"*/;
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
                v29 = &StringLiteral_12290/*"Schema Id is missing. The schema returned from "*/;
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
    sub_1C3B9C0(IsSoldOut, v17);
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

  if ( (byte_4C1E34F & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, sprite);
    byte_4C1E34F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_1C3B9C0(gameObject, v7);
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

  if ( (byte_4C1E350 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, sprite);
    byte_4C1E350 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !sprite )
      sub_1C3B9C0(v6, v7);
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
  if ( (byte_4C1E360 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, item);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_12278/*"SavePlayedClassBoardBaseRelease"*/, v6);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C3B764(&StringLiteral_1/*""*/, v7);
    byte_4C1E360 = 1;
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
    sub_1C3B9C0(this, item);
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12278/*"SavePlayedClassBoardBaseRelease"*/, 0LL);
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

  if ( (byte_4C1E349 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    byte_4C1E349 = 1;
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
            sub_1C3B9C0(v8, v9);
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

  if ( (byte_4C1E364 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_4C1E364 = 1;
  }
  numTextLabel = this->fields.numTextLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !numTextLabel )
    sub_1C3B9C0(NumberFormat, v7);
  UILabel__set_text(numTextLabel, NumberFormat, 0LL);
}