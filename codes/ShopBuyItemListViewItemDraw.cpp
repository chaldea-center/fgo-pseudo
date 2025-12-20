void ShopBuyItemListViewItemDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct ShopBuyItemListViewItemDraw_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct ShopBuyItemListViewItemDraw_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4D2897A & 1) == 0 )
  {
    sub_1C94098(&ShopBuyItemListViewItemDraw_TypeInfo);
    sub_1C94098(&StringLiteral_17540/*"btn_bg_32"*/);
    sub_1C94098(&StringLiteral_20604/*"img_list_bg05"*/);
    sub_1C94098(&StringLiteral_20603/*"img_list_bg04"*/);
    byte_4D2897A = 1;
  }
  ShopBuyItemListViewItemDraw_TypeInfo->static_fields->BASE_IMG_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_20603/*"img_list_bg04"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)ShopBuyItemListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_20603/*"img_list_bg04"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_20604/*"img_list_bg05"*/;
  static_fields = ShopBuyItemListViewItemDraw_TypeInfo->static_fields;
  static_fields->ClassBoardResetBaseSpriteName = (struct System_String_o *)StringLiteral_20604/*"img_list_bg05"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->ClassBoardResetBaseSpriteName,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = StringLiteral_17540/*"btn_bg_32"*/;
  v16 = ShopBuyItemListViewItemDraw_TypeInfo->static_fields;
  v16->ReturnItemButtonSpriteName = (struct System_String_o *)StringLiteral_17540/*"btn_bg_32"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v16->ReturnItemButtonSpriteName, v15, v17, v18, v19, v20, v21, v22);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct UISprite_o *v12; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct UISprite_o *v20; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4D2895C & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2895C = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(baseSprite, 0, 0);
  if ( !v4 )
  {
    v12 = this->fields.baseSprite;
    if ( !v12
      || (mAtlas = v12->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v6, v7, v8, v9, v10, v11),
          (v20 = this->fields.baseSprite) == 0) )
    {
      sub_1C942F0(v4, v5);
    }
    mSpriteName = v20->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.baseSpriteName,
      (int32_t)mSpriteName,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
}


void ShopBuyItemListViewItemDraw__ChangeNextAnotherItemIcon(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewManager_o *manager,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1
  struct System_Int32_array *possessionAnotherItemIds; // x8
  unsigned int max_length; // w10
  int v9; // w9
  UISprite_o *anotherPayItemImage; // x19
  int32_t v11; // w20

  if ( (byte_4D2895E & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    byte_4D2895E = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)this->fields.possessionAnotherItemIds,
                    0);
  if ( !IsNullOrEmpty )
  {
    possessionAnotherItemIds = this->fields.possessionAnotherItemIds;
    if ( !possessionAnotherItemIds || !manager )
      sub_1C942F0(IsNullOrEmpty, v6);
    max_length = possessionAnotherItemIds->max_length;
    v9 = manager->fields.alphaAnimCnt % (int)max_length;
    if ( v9 >= max_length )
      sub_1C942F8(IsNullOrEmpty);
    anotherPayItemImage = this->fields.anotherPayItemImage;
    v11 = possessionAnotherItemIds->m_Items[v9];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(anotherPayItemImage, v11, 0);
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
  il2cpp_array_size_t max_length; // x8
  SetItemMaster_o *v5; // x20
  unsigned __int64 v6; // x21
  int m_CancellationTokenSource; // w8
  int v8; // w9
  __int64 v9; // x10

  if ( (byte_4D28974 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_SetItemMaster___);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D28974 = 1;
  }
  if ( !ids )
    goto LABEL_20;
  if ( !ids->max_length )
    return 0;
  this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_1C942F0(this, ids);
  this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SetItemMaster___);
  max_length = ids->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v5 = (SetItemMaster_o *)this;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)max_length )
LABEL_21:
      sub_1C942F8(this);
    if ( !v5 )
      goto LABEL_20;
    this = (ShopBuyItemListViewItemDraw_o *)SetItemMaster__GetList(v5, ids->m_Items[v6], 0);
    if ( !this )
      goto LABEL_20;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource >= 1 )
      break;
LABEL_17:
    LODWORD(max_length) = ids->max_length;
    if ( (__int64)++v6 >= (int)max_length )
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
  int v12; // w8
  UserItemMaster_o *v13; // x21
  unsigned int ItemCount; // w0
  ShopEntity_o *Shop_k__BackingField; // x8
  unsigned __int64 v16; // x22
  __int64 v17; // x25
  int64_t v18; // x24
  unsigned int v19; // w0

  if ( (byte_4D28975 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D28975 = 1;
  }
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !item || (v6 = (_DWORD *)SelfUserGame, (SelfUserGame = (__int64)item->fields._Shop_k__BackingField) == 0) )
LABEL_36:
    sub_1C942F0(SelfUserGame, v5);
  switch ( *(_DWORD *)(SelfUserGame + 68) )
  {
    case 1:
      SelfUserGame = sub_1C94140(int___TypeInfo, 1);
      if ( !v6 )
        goto LABEL_36;
      v7 = SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_36;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_52;
      v12 = v6[46];
      goto LABEL_50;
    case 4:
      SelfUserGame = sub_1C94140(int___TypeInfo, 1);
      if ( !v6 )
        goto LABEL_36;
      v7 = SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_36;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_52;
      v12 = v6[48];
      goto LABEL_50;
    case 6:
    case 0xB:
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_36;
      SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)SelfUserGame,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !item->fields._Shop_k__BackingField )
        goto LABEL_36;
      v13 = (UserItemMaster_o *)SelfUserGame;
      ItemCount = ShopEntity__GetItemCount(item->fields._Shop_k__BackingField, 0);
      SelfUserGame = sub_1C94140(int___TypeInfo, ItemCount);
      Shop_k__BackingField = item->fields._Shop_k__BackingField;
      if ( !Shop_k__BackingField )
        goto LABEL_36;
      v7 = SelfUserGame;
      v16 = 0;
      v17 = SelfUserGame + 32;
      break;
    case 8:
    case 9:
    case 0xC:
      v7 = sub_1C94140(int___TypeInfo, 1);
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_36;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2633A )
      {
        sub_1C94098(&NetworkManager_TypeInfo);
        byte_4D2633A = 1;
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
      v12 = *(_DWORD *)(SelfUserGame + 28);
      goto LABEL_50;
    case 0xA:
      SelfUserGame = sub_1C94140(int___TypeInfo, 1);
      if ( !v6 )
        goto LABEL_36;
      v7 = SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_36;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_52;
      v12 = v6[49];
LABEL_50:
      *(_DWORD *)(v7 + 32) = v12;
      return (System_Int32_array *)v7;
    default:
      v19 = ShopEntity__GetItemCount((ShopEntity_o *)SelfUserGame, 0);
      return (System_Int32_array *)sub_1C94140(int___TypeInfo, v19);
  }
  while ( (__int64)v16 < ShopEntity__GetItemCount(Shop_k__BackingField, 0) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2633A )
    {
      sub_1C94098(&NetworkManager_TypeInfo);
      byte_4D2633A = 1;
    }
    SelfUserGame = (__int64)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      SelfUserGame = (__int64)NetworkManager_TypeInfo;
    }
    if ( item->fields._Shop_k__BackingField )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(SelfUserGame + 184) + 64LL);
      SelfUserGame = ShopEntity__GetItemIDs(item->fields._Shop_k__BackingField, v16, 0);
      if ( v13 )
      {
        SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(v13, v18, SelfUserGame, 0);
        if ( SelfUserGame )
        {
          if ( v7 )
          {
            if ( v16 >= *(unsigned int *)(v7 + 24) )
LABEL_52:
              sub_1C942F8(SelfUserGame);
            *(_DWORD *)(v17 + 4 * v16) = *(_DWORD *)(SelfUserGame + 28);
            Shop_k__BackingField = item->fields._Shop_k__BackingField;
            ++v16;
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

  if ( (byte_4D28976 & 1) == 0 )
  {
    sub_1C94098(&long___TypeInfo);
    byte_4D28976 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  result = (System_Int64_array *)sub_1C94140(long___TypeInfo, 1);
  if ( !SelfUserGame || !result )
    sub_1C942F0(result, v4);
  if ( !LODWORD(result->max_length) )
    sub_1C942F8(result);
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
  if ( (byte_4D28965 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20894/*"img_txt_shop"*/);
    sub_1C94098(&StringLiteral_20878/*"img_txt_quest"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C94098(&StringLiteral_20803/*"img_txt_bgm"*/);
    byte_4D28965 = 1;
  }
  if ( !item || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0 )
    sub_1C942F0(this, item);
  v7 = 0;
  v8 = &StringLiteral_20878/*"img_txt_quest"*/;
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
      v8 = &StringLiteral_20894/*"img_txt_shop"*/;
      goto LABEL_9;
    case 0xF:
      v8 = &StringLiteral_20803/*"img_txt_bgm"*/;
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

  if ( (byte_4D2896C & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&UICommonButtonColor_TypeInfo);
    byte_4D2896C = 1;
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
      sub_1C942F0(v11, v8);
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
  System_String_o *ClassBoardResetBaseSpriteName; // x20
  System_String_o *baseSpriteName; // x1
  int32_t v13; // w0
  int bgImageId; // t1
  UISprite_o *v15; // x21
  System_String_o *v16; // x0
  System_String_o *v17; // x22
  struct ShopEntity_o *v18; // x8
  struct UISprite_o *v19; // x20
  struct System_String_o **onChange; // x8

  if ( (byte_4D28966 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&ShopBuyItemListViewItemDraw_TypeInfo);
    sub_1C94098(&StringLiteral_23673/*"shop_item_menu_"*/);
    byte_4D28966 = 1;
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
    sub_1C942F0(v6, v7);
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
    ClassBoardResetBaseSpriteName = v10->static_fields->ClassBoardResetBaseSpriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetShopBanner_41359164(v9, ClassBoardResetBaseSpriteName, 0);
    return;
  }
  bgImageId = Shop_k__BackingField->fields.bgImageId;
  v13 = (_DWORD)Shop_k__BackingField + 124;
  if ( bgImageId < 1 )
    goto LABEL_22;
  v15 = this->fields.baseSprite;
  v16 = System_Int32__ToString(v13, 0);
  v17 = System_String__Concat_64417744((System_String_o *)StringLiteral_23673/*"shop_item_menu_"*/, v16, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetShopBanner_41359164(v15, v17, 0) )
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

  if ( (byte_4D28962 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28962 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)button, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !button || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)button, 0)) == 0 )
      sub_1C942F0(gameObject, v7);
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

  if ( (byte_4D28971 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    byte_4D28971 = 1;
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
          sub_1C942F0(IsAp, v11);
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

  if ( (byte_4D28973 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_12175/*"SHOP_INDEFINITE_PERIOD"*/);
    sub_1C94098(&StringLiteral_13456/*"TIME_REST2_NONE"*/);
    byte_4D28973 = 1;
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
        RestTime2 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12175/*"SHOP_INDEFINITE_PERIOD"*/, 0);
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
  RestTime2 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13456/*"TIME_REST2_NONE"*/, 0);
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

  if ( (byte_4D28972 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28972 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)eventItemIcon, 0, 0);
  if ( !v8 )
  {
    if ( !eventItemIcon )
      sub_1C942F0(v8, v9);
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
            v12);
          v20 = item->fields._EventItemEntities_k__BackingField;
          if ( v20 )
          {
            if ( LODWORD(v20->max_length) <= 1 )
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
          this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, 0);
          if ( ((unsigned __int8)this & 1) != 0 && item->fields._IsNotHavingShopItemReceived_k__BackingField )
            return;
        }
        v13 = item->fields._EventItemEntities_k__BackingField;
        if ( v13 )
        {
          if ( !LODWORD(v13->max_length) )
            goto LABEL_38;
          eventItemIcon2 = v6->fields.eventItemIcon;
          v15 = v13->m_Items[0];
LABEL_28:
          v18 = v7;
          goto LABEL_29;
        }
      }
LABEL_37:
      sub_1C942F0(this, item);
    }
LABEL_22:
    ShopBuyItemListViewItemDraw__SetEventItemIcon(this, v6->fields.eventItemIcon, 0, 0, v4);
    ShopBuyItemListViewItemDraw__SetEventItemIcon(v16, v6->fields.eventItemIcon1, 0, 0, v17);
    eventItemIcon2 = v6->fields.eventItemIcon2;
    v15 = 0;
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
    if ( LODWORD(CommonConsumeEntities_k__BackingField->max_length) <= 1 )
LABEL_38:
      sub_1C942F8(this);
  }
  v10 = CommonConsumeEntities_k__BackingField->m_Items[1];
  if ( v10 )
  {
    eventItemIcon = v6->fields.eventItemIcon2;
    goto LABEL_35;
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemListViewItemDraw__SetInfoButton(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v6; // x19
  const MethodInfo *v7; // x3
  UICommonButton_o *infoButton; // x19
  ShopBuyItemListViewItemDraw_o *v9; // x0
  struct ShopEntity_o *Shop_k__BackingField; // x8
  unsigned int v11; // w9
  struct ShopEntity_o *v12; // x8

  v6 = this;
  if ( (byte_4D2896B & 1) == 0 )
  {
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C94098(&StringLiteral_9297/*"NONE"*/);
    byte_4D2896B = 1;
  }
  if ( !item )
    goto LABEL_17;
  if ( ShopBuyItemListViewItem__IsInfoButtonDisableInPreparation(
         item,
         isInPreparation,
         (const MethodInfo *)isInPreparation) )
  {
    return;
  }
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_17;
  this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__checkFlag((ShopEntity_o *)this, 0x8000, 0);
  infoButton = v6->fields.infoButton;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    Shop_k__BackingField = item->fields._Shop_k__BackingField;
    if ( Shop_k__BackingField )
    {
      v11 = Shop_k__BackingField->fields.purchaseType - 1;
      if ( v11 >= 0x15 || ((0x140009u >> v11) & 1) == 0 )
      {
        this = (ShopBuyItemListViewItemDraw_o *)System_String__IsNullOrEmpty(
                                                  Shop_k__BackingField->fields.infoMessage,
                                                  0);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_7;
        v12 = item->fields._Shop_k__BackingField;
        if ( v12 )
        {
          v9 = (ShopBuyItemListViewItemDraw_o *)System_String__op_Inequality(
                                                  v12->fields.infoMessage,
                                                  (System_String_o *)StringLiteral_9297/*"NONE"*/,
                                                  0);
          goto LABEL_16;
        }
LABEL_17:
        sub_1C942F0(this, item);
      }
    }
    else if ( !item->fields.itemEntity )
    {
      goto LABEL_17;
    }
    v9 = (ShopBuyItemListViewItemDraw_o *)((char *)&dword_0 + 1);
    goto LABEL_16;
  }
LABEL_7:
  v9 = 0;
LABEL_16:
  ShopBuyItemListViewItemDraw__SetButtonActive(v9, infoButton, (unsigned __int8)v9 & 1, v7);
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
  struct UILabel_o *freeExchangeConditionNoticeLabel; // x8
  int mWidth; // w8
  struct UISprite_array *freeExchangeConditionNoticeBgSprites; // x21
  int v84; // w9
  int max_length; // w8
  unsigned int v86; // w22
  int32_t v87; // w19
  Il2CppClass **v88; // x8
  UISprite_o *v89; // x20
  const MethodInfo *v90; // [xsp+0h] [xbp-80h]
  const MethodInfo *v91; // [xsp+0h] [xbp-80h]
  bool isNotCommandCodeGet; // [xsp+14h] [xbp-6Ch] BYREF
  bool isNotCostumeGet; // [xsp+18h] [xbp-68h] BYREF
  bool isServantHaving; // [xsp+1Ch] [xbp-64h] BYREF
  bool isNotServantHaving; // [xsp+20h] [xbp-60h] BYREF
  bool isNotServantGet; // [xsp+24h] [xbp-5Ch] BYREF
  System_String_o *itemName; // [xsp+28h] [xbp-58h] BYREF
  System_String_o *message; // [xsp+38h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_4D2895F & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&ShopBuyItemUtility_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_12084/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/);
    sub_1C94098(&StringLiteral_19824/*"freeShopCondMessage"*/);
    sub_1C94098(&StringLiteral_12182/*"SHOP_PAID_EXCHANGE_CONDITIONS"*/);
    sub_1C94098(&StringLiteral_19823/*"freeShopCondId"*/);
    sub_1C94098(&StringLiteral_20964/*"info_base"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_12085/*"SHOP_ACHIEVEMENT_PAID_EXCHANGE_CONDITIONS"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C94098(&StringLiteral_12154/*"SHOP_FREE_EXCHANGE_CONDITIONS"*/);
    byte_4D2895F = 1;
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
    v90);
  ShopBuyItemListViewItemDraw__SetMask(
    v6,
    item,
    v11,
    isNotServantGet,
    isNotServantHaving,
    isServantHaving,
    isNotCostumeGet,
    isNotCommandCodeGet,
    v91);
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
    sub_1C942F0(IsChocolateSvtEquip, v34);
  IsChocolateSvtEquip = (UnityEngine_Component_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                     (System_Collections_Generic_Dictionary_object__object__o *)IsChocolateSvtEquip,
                                                     (Il2CppObject *)StringLiteral_19823/*"freeShopCondId"*/,
                                                     (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                                     (Il2CppObject *)StringLiteral_19824/*"freeShopCondMessage"*/,
                                                     (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !IsChocolateSvtEquip )
    goto LABEL_104;
  v71 = (Il2CppObject *)((__int64 (__fastcall *)(UnityEngine_Component_o *, const MethodInfo *))IsChocolateSvtEquip->klass->vtable._3_ToString.methodPtr)(
                          IsChocolateSvtEquip,
                          IsChocolateSvtEquip->klass->vtable._3_ToString.method);
  IsChocolateSvtEquip = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsChocolateSvtEquip )
    goto LABEL_104;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)IsChocolateSvtEquip,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
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
    v75 = (System_String_o **)&StringLiteral_12182/*"SHOP_PAID_EXCHANGE_CONDITIONS"*/;
    v76 = (System_String_o **)&StringLiteral_12085/*"SHOP_ACHIEVEMENT_PAID_EXCHANGE_CONDITIONS"*/;
  }
  else
  {
    v75 = (System_String_o **)&StringLiteral_12154/*"SHOP_FREE_EXCHANGE_CONDITIONS"*/;
    v76 = (System_String_o **)&StringLiteral_12084/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/;
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
  v84 = mWidth >= 512 ? 512 : mWidth;
  if ( !freeExchangeConditionNoticeBgSprites )
    goto LABEL_104;
  max_length = freeExchangeConditionNoticeBgSprites->max_length;
  if ( max_length >= 1 )
  {
    v86 = 0;
    v87 = v84 + 16;
    while ( 1 )
    {
      if ( v86 >= max_length )
        sub_1C942F8(IsChocolateSvtEquip);
      v88 = &freeExchangeConditionNoticeBgSprites->obj.klass + (int)v86;
      v89 = (UISprite_o *)v88[4];
      if ( !v89 )
        break;
      UIWidget__set_width((UIWidget_o *)v88[4], v87, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      IsChocolateSvtEquip = (UnityEngine_Component_o *)AtlasManager__SetEventUI(
                                                         v89,
                                                         (System_String_o *)StringLiteral_20964/*"info_base"*/,
                                                         0);
      max_length = freeExchangeConditionNoticeBgSprites->max_length;
      if ( (int)++v86 >= max_length )
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
  struct ShopEntity_o *Shop_k__BackingField; // x8
  struct System_Int32_array *targetIds; // x9
  struct ItemIconComponent_o *v11; // x9
  UISprite_o *iconSprite; // x19
  int32_t v13; // w20
  ItemIconComponent_o *v14; // x19
  int32_t imageId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D28967 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_AssistMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D28967 = 1;
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
      sub_1C942F0(itemIcon, item);
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
      itemIcon = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_AssistMaster___);
      Shop_k__BackingField = item->fields._Shop_k__BackingField;
      if ( !Shop_k__BackingField )
        goto LABEL_30;
      targetIds = Shop_k__BackingField->fields.targetIds;
      if ( !targetIds )
        goto LABEL_30;
      if ( !LODWORD(targetIds->max_length) )
        sub_1C942F8(itemIcon);
      if ( !itemIcon )
        goto LABEL_30;
      itemIcon = AssistMaster__GetNextPartsEntity(
                   (AssistMaster_o *)itemIcon,
                   targetIds->m_Items[0],
                   Shop_k__BackingField->fields.id,
                   0);
      v11 = this->fields.itemIcon;
      if ( !v11 || !itemIcon )
        goto LABEL_30;
      iconSprite = v11->fields.iconSprite;
      v13 = *((_DWORD *)itemIcon + 10);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetSkillIcon(iconSprite, v13, 0);
    }
    else
    {
      v14 = this->fields.itemIcon;
      itemIcon = (void *)ShopEntity__get_TargetId((ShopEntity_o *)itemIcon, 0);
      if ( !v14 )
        goto LABEL_30;
      ItemIconComponent__SetPurchase(v14, v8, (int32_t)itemIcon, imageId, 0);
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

  if ( (byte_4D28960 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28960 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0)) == 0 )
      sub_1C942F0(gameObject, v7);
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

  if ( (byte_4D28961 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28961 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( !v6 )
  {
    if ( !label )
      sub_1C942F0(v6, v7);
    WrapControlText__textAdjust(label, text, label->fields.mFontSize, 0, 0);
  }
}


void ShopBuyItemListViewItemDraw__SetListViewObject(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewObject_o *listViewObj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.listViewObject = listViewObj;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.listViewObject,
    (int32_t)listViewObj,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  ShopBuyItemListViewItemDraw_o *v16; // x19
  UILabel_o *v17; // x21
  System_String_o *v18; // x22
  const MethodInfo *v19; // x1
  Il2CppObject *NameText; // x0
  const MethodInfo *v21; // x3
  ShopEntity_o *Shop_k__BackingField; // x0
  _BOOL4 v23; // w23
  UnityEngine_Object_o *anotherBuyable; // x21
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x3
  UnityEngine_Object_o *anotherPayItemImage; // x21
  UnityEngine_GameObject_o *v28; // x22
  struct ShopBuyItemListViewObject_o *listViewObject; // x9
  struct System_Int32_array *possessionAnotherItemIds; // x8
  __int64 naturalAligment; // x10
  unsigned int max_length; // w10
  int v33; // w9
  UISprite_o *v34; // x21
  int32_t v35; // w22
  UISprite_o *maskSprite; // x1
  bool v37; // w2
  struct ShopEntity_o *v38; // x8
  struct ShopEntity_o *v39; // x8
  bool v40; // w20
  struct ShopEntity_o *v41; // x8
  ShopReleaseMaster_o *v42; // x21
  struct ShopEntity_o *v43; // x8
  UILabel_o *v44; // x1
  ShopBuyItemListViewItemDraw_o *v45; // x2
  const MethodInfo *v46; // x2
  __int64 *v47; // x8
  struct UISprite_o *v48; // x8
  struct ShopEntity_o *v49; // x8
  struct System_Int32_array *targetIds; // x8
  Il2CppObject *Entity; // x0
  struct ShopEntity_o *v52; // x8
  __int64 *v53; // x8
  ShopBuyItemListViewItemDraw_o *Empty; // x21
  UILabel_o *v55; // x21
  ShopBuyItemListViewItemDraw_o *v56; // x0
  const MethodInfo *v57; // x3
  struct ShopEntity_o *v58; // x8
  struct ShopEntity_o *v59; // x8
  ShopReleaseMaster_o *v60; // x21
  struct ShopEntity_o *v61; // x8
  bool v62; // w0
  struct UILabel_o *v63; // x23
  ShopBuyItemListViewItemDraw_o *v64; // x22
  int v65; // w25
  ShopBuyItemListViewItemDraw_o *v66; // x24
  UILabel_o *textOnMask; // x20
  struct ShopEntity_o *v68; // x8
  UnityEngine_Object_o *prepareTextOnMask; // x21
  const MethodInfo *v70; // x1
  UILabel_o *v71; // x19
  ShopBuyItemListViewItemDraw_o *v72; // x0
  const MethodInfo *v73; // x3
  struct ShopEntity_o *v74; // x8
  UILabel_o *v75; // x21
  ShopEntity_o *v76; // x0
  UILabel_o *v77; // x1
  const MethodInfo *v78; // x2
  System_Int32_array *v79; // [xsp+0h] [xbp-60h] BYREF
  int32_t questId; // [xsp+Ch] [xbp-54h] BYREF

  v16 = this;
  if ( (byte_4D2896E & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ShopReleaseMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&ShopBuyItemListViewManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&StringLiteral_12143/*"SHOP_CANT_BUY"*/);
    sub_1C94098(&StringLiteral_12185/*"SHOP_QUEST_OPEN"*/);
    sub_1C94098(&StringLiteral_12183/*"SHOP_QUEST_ALREADY_CLEARED"*/);
    sub_1C94098(&StringLiteral_3425/*"CLASS_BOARD_RESET_CANT_BUY_MSG_2"*/);
    sub_1C94098(&StringLiteral_3424/*"CLASS_BOARD_RESET_CANT_BUY_MSG_1"*/);
    sub_1C94098(&StringLiteral_19823/*"freeShopCondId"*/);
    sub_1C94098(&StringLiteral_5695/*"EVENT_REWARD_PARTS_GET_LIMIT"*/);
    sub_1C94098(&StringLiteral_12120/*"SHOP_BUY_ITEM_HAVE_LIMIT"*/);
    sub_1C94098(&StringLiteral_12181/*"SHOP_NOT_RELEASE_SET_ITEM"*/);
    sub_1C94098(&StringLiteral_12114/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C94098(&StringLiteral_12088/*"SHOP_ALREADY_GET"*/);
    byte_4D2896E = 1;
  }
  questId = 0;
  v79 = 0;
  if ( !isInPreparation )
  {
    if ( !item )
      goto LABEL_171;
    Shop_k__BackingField = item->fields._Shop_k__BackingField;
    if ( Shop_k__BackingField
      && ShopEntity__IsSoldOut(Shop_k__BackingField, 0)
      && !item->fields._IsNotHavingShopItemReceived_k__BackingField )
    {
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_171;
      v23 = !ShopEntity__IsAnotherItemBuyable((ShopEntity_o *)this, &v79, 0);
    }
    else
    {
      v23 = 0;
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
        this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
        if ( !this )
          goto LABEL_171;
        v28 = v16->fields.anotherBuyable;
        this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsAnotherItemBuyable(
                                                  (ShopEntity_o *)this,
                                                  &v16->fields.possessionAnotherItemIds,
                                                  0);
        if ( !v28 )
          goto LABEL_171;
        UnityEngine_GameObject__SetActive(v28, (unsigned __int8)this & 1, 0);
        this = (ShopBuyItemListViewItemDraw_o *)BasicHelper__IsNullOrEmpty(
                                                  (System_Collections_ICollection_o *)v16->fields.possessionAnotherItemIds,
                                                  0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          listViewObject = v16->fields.listViewObject;
          if ( !listViewObject )
            goto LABEL_171;
          possessionAnotherItemIds = v16->fields.possessionAnotherItemIds;
          if ( !possessionAnotherItemIds )
            goto LABEL_171;
          this = (ShopBuyItemListViewItemDraw_o *)listViewObject->fields.manager;
          if ( !this )
            goto LABEL_171;
          naturalAligment = ShopBuyItemListViewManager_TypeInfo->_2.naturalAligment;
          if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
            || (ShopBuyItemListViewManager_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != ShopBuyItemListViewManager_TypeInfo )
          {
            sub_1C9468C(this);
            ShopBuyItemUtility__SetAddTextOnMask(v76, v77, v78);
            return;
          }
          max_length = possessionAnotherItemIds->max_length;
          v33 = SLODWORD(this[1].fields.maskSprite) % (int)max_length;
          if ( v33 >= max_length )
LABEL_172:
            sub_1C942F8(this);
          v34 = v16->fields.anotherPayItemImage;
          v35 = possessionAnotherItemIds->m_Items[v33];
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          this = (ShopBuyItemListViewItemDraw_o *)AtlasManager__SetItem(v34, v35, 0);
        }
      }
    }
    if ( v23 )
    {
      ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(v16, item, v25);
      maskSprite = v16->fields.maskSprite;
      v37 = 1;
LABEL_46:
      ShopBuyItemListViewItemDraw__SetSpriteActive(this, maskSprite, v37, v26);
      return;
    }
    v38 = item->fields._Shop_k__BackingField;
    if ( !v38 || v38->fields.purchaseType != 6 )
    {
      maskSprite = v16->fields.maskSprite;
      v37 = 0;
      goto LABEL_46;
    }
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this
      || (this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ShopReleaseMaster___),
          (v39 = item->fields._Shop_k__BackingField) == 0)
      || !this
      || (this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isQuestNotClearSet(
                                                    (ShopReleaseMaster_o *)this,
                                                    v39->fields.id,
                                                    &questId,
                                                    0),
          !item->fields._Shop_k__BackingField) )
    {
LABEL_171:
      sub_1C942F0(this, item);
    }
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !ShopEntity__isQuestNotClearItemClosed(item->fields._Shop_k__BackingField, 1, 0) )
      {
LABEL_44:
        v40 = 0;
LABEL_133:
        this = (ShopBuyItemListViewItemDraw_o *)v16->fields.maskSprite;
        if ( this )
        {
          this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v40, 0);
            return;
          }
        }
        goto LABEL_171;
      }
    }
    else if ( !ShopEntity__isExpireItemClosed(item->fields._Shop_k__BackingField, 0) )
    {
      goto LABEL_44;
    }
    textOnMask = v16->fields.textOnMask;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12185/*"SHOP_QUEST_OPEN"*/, 0);
    if ( !textOnMask )
      goto LABEL_171;
    UILabel__set_text(textOnMask, (System_String_o *)this, 0);
    v40 = 1;
    goto LABEL_133;
  }
  ShopBuyItemListViewItemDraw__SetSpriteActive(this, v16->fields.maskSprite, 1, (const MethodInfo *)isNotServantGet);
  if ( !item )
    goto LABEL_171;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_171;
  switch ( LODWORD(this->fields.baseSprite) )
  {
    case 1:
      if ( !ShopEntity__IsItemMaxButShopAvailable((ShopEntity_o *)this, 0) )
        goto LABEL_47;
      v17 = v16->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_12120/*"SHOP_BUY_ITEM_HAVE_LIMIT"*/, 0);
      NameText = (Il2CppObject *)ShopBuyItemListViewItem__get_NameText(item, v19);
      this = (ShopBuyItemListViewItemDraw_o *)System_String__Format(v18, NameText, 0);
      goto LABEL_145;
    case 2:
      if ( !ShopEntity__IsSoldOut((ShopEntity_o *)this, 0) )
        goto LABEL_65;
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_171;
      if ( ShopEntity__GetFreeShopCondId((ShopEntity_o *)this, 0) < 1 )
        goto LABEL_65;
      goto LABEL_115;
    case 4:
      v48 = this->fields.maskSprite;
      if ( !v48 )
        goto LABEL_171;
      if ( !LODWORD(v48->fields.m_CancellationTokenSource) )
        goto LABEL_172;
      if ( !LODWORD(v48->fields.leftAnchor) )
        goto LABEL_80;
      this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_171;
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
      v49 = item->fields._Shop_k__BackingField;
      if ( !v49 )
        goto LABEL_171;
      targetIds = v49->fields.targetIds;
      if ( !targetIds )
        goto LABEL_171;
      if ( !LODWORD(targetIds->max_length) )
        goto LABEL_172;
      if ( !this )
        goto LABEL_171;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 targetIds->m_Items[0],
                 (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Entity
        && ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0)
        && item->fields._ShopKind_k__BackingField != 6 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v53 = &StringLiteral_12143/*"SHOP_CANT_BUY"*/;
        goto LABEL_169;
      }
LABEL_80:
      if ( !isNotServantGet && !isNotServantHaving && !isServantHaving && !isNotCostumeGet && !isNotCommandCodeGet )
        goto LABEL_147;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
      v52 = item->fields._Shop_k__BackingField;
      if ( v52 && this )
      {
        this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                  (ShopReleaseMaster_o *)this,
                                                  v52->fields.id,
                                                  40,
                                                  0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v45 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_1/*""*/;
LABEL_170:
          v44 = v16->fields.textOnMask;
          goto LABEL_146;
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v53 = &StringLiteral_12088/*"SHOP_ALREADY_GET"*/;
LABEL_169:
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v53, 0);
        v45 = this;
        goto LABEL_170;
      }
      goto LABEL_171;
    case 5:
      Empty = (ShopBuyItemListViewItemDraw_o *)string_TypeInfo->static_fields->Empty;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12181/*"SHOP_NOT_RELEASE_SET_ITEM"*/, 0);
        Empty = this;
      }
      v44 = v16->fields.textOnMask;
      v45 = Empty;
      goto LABEL_146;
    case 6:
      if ( !ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)this, 0, 0) )
        goto LABEL_147;
      v55 = v16->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v56 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12183/*"SHOP_QUEST_ALREADY_CLEARED"*/, 0);
      ShopBuyItemListViewItemDraw__SetLabelText(v56, v55, (System_String_o *)v56, v57);
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_171;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_147;
      v58 = item->fields._Shop_k__BackingField;
      if ( !v58 )
        goto LABEL_171;
      this = (ShopBuyItemListViewItemDraw_o *)v58->fields.script;
      if ( !this )
        goto LABEL_171;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)this,
             (Il2CppObject *)StringLiteral_19823/*"freeShopCondId"*/,
             (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
LABEL_115:
        ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(v16, item, v46);
      }
      goto LABEL_147;
    case 7:
    case 9:
      goto LABEL_65;
    case 0xE:
      if ( !isNotServantGet && !isNotServantHaving && !isServantHaving && !isNotCostumeGet && !isNotCommandCodeGet )
        goto LABEL_147;
      if ( ShopEntity__GetFreeShopCondId((ShopEntity_o *)this, 0) < 1 )
        goto LABEL_155;
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_171;
      if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, 0) )
        goto LABEL_115;
LABEL_155:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
      v74 = item->fields._Shop_k__BackingField;
      if ( !v74 || !this )
        goto LABEL_171;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                (ShopReleaseMaster_o *)this,
                                                v74->fields.id,
                                                1,
                                                0);
      v75 = v16->fields.textOnMask;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12088/*"SHOP_ALREADY_GET"*/, 0);
        v45 = this;
      }
      else
      {
        v45 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_1/*""*/;
      }
      v44 = v75;
      goto LABEL_146;
    case 0x17:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
      v59 = item->fields._Shop_k__BackingField;
      if ( !v59 )
        goto LABEL_171;
      v60 = (ShopReleaseMaster_o *)this;
      if ( !this )
        goto LABEL_171;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                (ShopReleaseMaster_o *)this,
                                                v59->fields.id,
                                                1,
                                                0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v61 = item->fields._Shop_k__BackingField;
        if ( !v61 )
          goto LABEL_171;
        v62 = ShopReleaseMaster__CondClearCheck(v60, v61->fields.id, 113, 0);
        v63 = v16->fields.textOnMask;
        if ( v62 )
        {
          v64 = 0;
          v65 = 0;
          v17 = 0;
          v66 = v16;
          goto LABEL_138;
        }
      }
      else
      {
        v63 = v16->fields.textOnMask;
      }
      v66 = 0;
      v65 = 1;
      v64 = v16;
      v17 = v63;
      v63 = 0;
LABEL_138:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v65 )
      {
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3425/*"CLASS_BOARD_RESET_CANT_BUY_MSG_2"*/, 0);
        v68 = item->fields._Shop_k__BackingField;
        if ( !v68 )
          goto LABEL_171;
        this = (ShopBuyItemListViewItemDraw_o *)System_String__Format(
                                                  (System_String_o *)this,
                                                  (Il2CppObject *)v68->fields.name,
                                                  0);
      }
      else
      {
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3424/*"CLASS_BOARD_RESET_CANT_BUY_MSG_1"*/, 0);
        v64 = v66;
        v17 = v63;
      }
      if ( !v64 )
        goto LABEL_171;
LABEL_145:
      v44 = v17;
      v45 = this;
LABEL_146:
      ShopBuyItemListViewItemDraw__SetLabelText(this, v44, (System_String_o *)v45, v21);
LABEL_147:
      prepareTextOnMask = (UnityEngine_Object_o *)v16->fields.prepareTextOnMask;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(prepareTextOnMask, 0, 0)
        && ShopBuyItemListViewItem__IsPrepareTextOnMask(item, v70) )
      {
        v71 = v16->fields.prepareTextOnMask;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v72 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12114/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, 0);
        ShopBuyItemListViewItemDraw__SetLabelText(v72, v71, (System_String_o *)v72, v73);
      }
      return;
    case 0x18:
      if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, 0) )
        goto LABEL_147;
      v17 = v16->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v47 = &StringLiteral_5695/*"EVENT_REWARD_PARTS_GET_LIMIT"*/;
      goto LABEL_68;
    default:
LABEL_47:
      if ( !isNotServantGet && !isNotServantHaving && !isServantHaving && !isNotCostumeGet && !isNotCommandCodeGet )
        goto LABEL_147;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
      v41 = item->fields._Shop_k__BackingField;
      if ( !v41 )
        goto LABEL_171;
      v42 = (ShopReleaseMaster_o *)this;
      if ( !this )
        goto LABEL_171;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                (ShopReleaseMaster_o *)this,
                                                v41->fields.id,
                                                1,
                                                0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_59;
      v43 = item->fields._Shop_k__BackingField;
      if ( !v43 )
        goto LABEL_171;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(v42, v43->fields.id, 40, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
LABEL_59:
        v44 = v16->fields.textOnMask;
        v45 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_1/*""*/;
        goto LABEL_146;
      }
LABEL_65:
      v17 = v16->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v47 = &StringLiteral_12088/*"SHOP_ALREADY_GET"*/;
LABEL_68:
      this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v47, 0);
      goto LABEL_145;
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
  if ( (byte_4D28968 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_15897/*"[000000]"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C94098(&StringLiteral_25837/*"？"*/);
    byte_4D28968 = 1;
  }
  if ( isInPreparation )
  {
    messageTextLabel = v10->fields.messageTextLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__ReplaceCommonTag(preparationMessage, 0, 0);
    v13 = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_64417744(
                                             (System_String_o *)StringLiteral_15897/*"[000000]"*/,
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
            v15 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_25837/*"？"*/;
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
    sub_1C942F0(this, item);
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
      v22 = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_64417744(
                                               (System_String_o *)StringLiteral_15897/*"[000000]"*/,
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
  this = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_64417744((System_String_o *)StringLiteral_15897/*"[000000]"*/, v34, 0);
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
  if ( (byte_4D28969 & 1) == 0 )
  {
    sub_1C94098(&System_Action_int__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_ShopBuyItemListViewItemDraw__SetNumText_b__79_0__);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C94098(&StringLiteral_12121/*"SHOP_BUY_ITEM_HOLD"*/);
    byte_4D28969 = 1;
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
  v10 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12121/*"SHOP_BUY_ITEM_HOLD"*/, 0);
  ShopBuyItemListViewItemDraw__SetLabelText(v10, numTitleLabel, (System_String_o *)v10, v11);
  ShopBuyItemListViewItemDraw__SetLabelActive(v12, v6->fields.numTextLabel, 1, v13);
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
LABEL_18:
    sub_1C942F0(this, item);
  numTextLabel = v6->fields.numTextLabel;
  HoldCount = ShopEntity__getHoldCount((ShopEntity_o *)this, 0);
  NumberFormat = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__GetNumberFormat(HoldCount, 0);
  ShopBuyItemListViewItemDraw__SetLabelText(NumberFormat, numTextLabel, (System_String_o *)NumberFormat, v17);
  if ( item->fields._ShopKind_k__BackingField == 7 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
    v19 = (System_Action_int__o *)sub_1C942E4(System_Action_int__TypeInfo);
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

  if ( (byte_4D28979 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&ShopBuyItemUtility_TypeInfo);
    byte_4D28979 = 1;
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
                    sub_1C942F0(Master_object, v13);
                  }
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  Master_object = (ShopEntity_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
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
                         (const MethodInfo_345B50C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
                      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v31, 0);
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
  int32_t v12; // w20
  ShopEntity_o *v13; // x0
  int32_t v14; // w1
  int32_t v15; // w3
  int32_t v16; // w2
  ShopBuyItemListViewItemDraw_o *PriceIcon; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  System_Int64_array *UserItemCountsLong; // x0
  UIIconLabel_o *v21; // x22
  System_Int64_array *v22; // x21
  const MethodInfo *v23; // x1
  int32_t v24; // w23
  UIIconLabel_o *priceIconLabel2; // x19
  const MethodInfo *v26; // x1
  ShopEntity_o *Shop_k__BackingField; // x8
  int32_t v28; // w20
  const MethodInfo *v29; // x1
  UIIconLabel_o *v30; // x22
  ShopBuyItemListViewItemDraw_o *Price; // x0
  const MethodInfo *v32; // x1
  int32_t v33; // w23
  int32_t sellQp; // w24
  UIIconLabel_o *priceIconLabel1; // x21
  int32_t v36; // w22
  int32_t rangeSprite; // w23
  int32_t v38; // w21
  System_Int32_array *UserItemCounts; // x0
  UIIconLabel_o *v40; // x22
  System_Int32_array *v41; // x21
  const MethodInfo *v42; // x1
  int32_t v43; // w23
  ShopBuyItemListViewItemDraw_o *v44; // x19
  const MethodInfo *v45; // x1
  ShopEntity_o *v46; // x8
  int32_t v47; // w20
  struct ItemEntity_o *itemEntity; // x8
  UIIconLabel_o *v49; // x22
  ShopBuyItemListViewItemDraw_o *v50; // x0
  const MethodInfo *v51; // x2
  int32_t v52; // w23
  int32_t v53; // w24
  struct ItemEntity_o *v54; // x8
  const MethodInfo *v55; // x3
  ShopEntity_o *v56; // x0
  struct ItemEntity_o *v57; // x8
  ShopEntity_o *v58; // x0
  int32_t v59; // w20
  struct ItemEntity_o *v60; // x8
  double v61; // d0
  UILabel_o **p_LineText2digit; // x8

  v6 = this;
  if ( (byte_4D28970 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&System_Math_TypeInfo);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C94098(&StringLiteral_12151/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/);
    byte_4D28970 = 1;
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
      v12 = (int)this;
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
        v36 = (int)this;
        this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[0];
        if ( !this )
          goto LABEL_105;
        rangeSprite = (int32_t)this->fields.rangeSprite;
        this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0);
        if ( !priceIconLabel1 )
          goto LABEL_105;
        UIIconLabel__SetPurchaseDecision(priceIconLabel1, v36, rangeSprite, (int32_t)this, 0);
        if ( LODWORD(CommonConsumeEntities_k__BackingField->max_length) <= 1 )
          goto LABEL_106;
      }
      if ( !CommonConsumeEntities_k__BackingField->m_Items[1] )
        return;
      priceIconLabel = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel2;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
      if ( LODWORD(CommonConsumeEntities_k__BackingField->max_length) <= 1 )
        goto LABEL_106;
      v12 = (int)this;
      this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[1];
      if ( !this )
        goto LABEL_105;
    }
    v38 = (int32_t)this->fields.rangeSprite;
    this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0);
    if ( !priceIconLabel )
      goto LABEL_105;
    v15 = (int)this;
    this = priceIconLabel;
    v14 = v12;
    v16 = v38;
    goto LABEL_68;
  }
  if ( bandSprite_high == 13 )
  {
    priceLabelFree = v6->fields.priceLabelFree;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12151/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, 0);
    if ( priceLabelFree )
    {
      UILabel__set_text(priceLabelFree, (System_String_o *)this, 0);
      return;
    }
LABEL_105:
    sub_1C942F0(this, item);
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
      || (PriceIcon = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v18),
          (_DWORD)PriceIcon == 14) )
    {
      UserItemCountsLong = ShopBuyItemListViewItemDraw__GetUserItemCountsLong(PriceIcon, v18);
      v21 = v6->fields.priceIconLabel1;
      v22 = UserItemCountsLong;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v23);
      if ( !item->fields._Shop_k__BackingField )
        goto LABEL_105;
      v24 = (int)this;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrices(item->fields._Shop_k__BackingField, 0, 0);
      if ( !v22 )
        goto LABEL_105;
      if ( LODWORD(v22->max_length) )
      {
        if ( !v21 )
          goto LABEL_105;
        UIIconLabel__SetPurchaseDecisionLong(v21, v24, (int32_t)this, v22->m_Items[0], 0);
        priceIconLabel2 = v6->fields.priceIconLabel2;
        this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v26);
        Shop_k__BackingField = item->fields._Shop_k__BackingField;
        if ( !Shop_k__BackingField )
          goto LABEL_105;
        v28 = (int)this;
        this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrices(Shop_k__BackingField, 1, 0);
        if ( LODWORD(v22->max_length) > 1 )
        {
          if ( !priceIconLabel2 )
            goto LABEL_105;
          UIIconLabel__SetPurchaseDecisionLong(priceIconLabel2, v28, (int32_t)this, v22->m_Items[1], 0);
          return;
        }
      }
    }
    else
    {
      UserItemCounts = ShopBuyItemListViewItemDraw__GetUserItemCounts(PriceIcon, item, v19);
      v40 = v6->fields.priceIconLabel1;
      v41 = UserItemCounts;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v42);
      if ( !item->fields._Shop_k__BackingField )
        goto LABEL_105;
      v43 = (int)this;
      this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrices(item->fields._Shop_k__BackingField, 0, 0);
      if ( !v41 )
        goto LABEL_105;
      if ( LODWORD(v41->max_length) )
      {
        if ( !v40 )
          goto LABEL_105;
        UIIconLabel__SetPurchaseDecision(v40, v43, (int32_t)this, v41->m_Items[0], 0);
        v44 = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel2;
        this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v45);
        v46 = item->fields._Shop_k__BackingField;
        if ( !v46 )
          goto LABEL_105;
        v47 = (int)this;
        this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrices(v46, 1, 0);
        if ( LODWORD(v41->max_length) > 1 )
        {
          if ( !v44 )
            goto LABEL_105;
          v15 = v41->m_Items[1];
          v16 = (int)this;
          this = v44;
          v14 = v47;
          goto LABEL_68;
        }
      }
    }
    goto LABEL_106;
  }
  v13 = item->fields._Shop_k__BackingField;
  if ( v13 && ShopEntity__IsSoldOut(v13, 0) && item->fields._IsNotHavingShopItemReceived_k__BackingField )
  {
    this = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel;
    if ( !this )
      goto LABEL_105;
    v14 = 56;
    v15 = -1;
    v16 = 0;
LABEL_68:
    UIIconLabel__SetPurchaseDecision((UIIconLabel_o *)this, v14, v16, v15, 0);
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
    || ShopBuyItemListViewItem__get_PriceIcon(item, v29) == 14 )
  {
    v30 = v6->fields.priceIconLabel;
    Price = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v29);
    v33 = (int)Price;
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
    this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItemDraw__GetUserItemCountsLong(Price, v32);
    if ( !this )
      goto LABEL_105;
    if ( LODWORD(this->fields.m_CancellationTokenSource) )
    {
      if ( !v30 )
        goto LABEL_105;
      UIIconLabel__SetPurchaseDecisionLong(v30, v33, sellQp, (int64_t)this->fields.rangeSprite, 0);
      goto LABEL_85;
    }
LABEL_106:
    sub_1C942F8(this);
  }
  v49 = v6->fields.priceIconLabel;
  v50 = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, v29);
  v52 = (int)v50;
  if ( item->fields._Shop_k__BackingField )
  {
    v50 = (ShopBuyItemListViewItemDraw_o *)ShopEntity__GetPrice(item->fields._Shop_k__BackingField, 0);
    v53 = (int)v50;
  }
  else
  {
    v54 = item->fields.itemEntity;
    if ( v54 )
      v53 = v54->fields.sellQp;
    else
      v53 = 0;
  }
  this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItemDraw__GetUserItemCounts(v50, item, v51);
  if ( !this )
    goto LABEL_105;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_106;
  if ( !v49 )
    goto LABEL_105;
  UIIconLabel__SetPurchaseDecision(v49, v52, v53, (int32_t)this->fields.rangeSprite, 0);
LABEL_85:
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_105;
  if ( ShopEntity__IsSetStrikethrough((ShopEntity_o *)this, isInPreparation, 0) )
  {
    v56 = item->fields._Shop_k__BackingField;
    if ( v56 )
    {
      v56 = (ShopEntity_o *)ShopEntity__GetPrice(v56, 0);
      if ( !(_DWORD)v56 )
        goto LABEL_102;
    }
    else
    {
      v57 = item->fields.itemEntity;
      if ( !v57 )
        goto LABEL_102;
      v56 = (ShopEntity_o *)(unsigned int)v57->fields.sellQp;
      if ( !(_DWORD)v56 )
        goto LABEL_102;
    }
    v58 = item->fields._Shop_k__BackingField;
    if ( v58 )
    {
      v59 = ShopEntity__GetPrice(v58, 0);
    }
    else
    {
      v60 = item->fields.itemEntity;
      if ( v60 )
        v59 = v60->fields.sellQp;
      else
        v59 = 0;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v61 = log10((double)v59);
    if ( v61 == INFINITY || (int)v61 )
    {
      p_LineText2digit = &v6->fields.LineText2digit;
      goto LABEL_104;
    }
LABEL_102:
    p_LineText2digit = &v6->fields.LineText;
LABEL_104:
    ShopBuyItemListViewItemDraw__SetLabelActive((ShopBuyItemListViewItemDraw_o *)v56, *p_LineText2digit, 1, v55);
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
  struct ShopEntity_o *v7; // x8
  struct System_Int32_array *targetIds; // x8
  ShopBuyItemListViewItemDraw_o *v9; // x0
  const MethodInfo *v10; // x3
  bool IsPaidExchange; // w20
  System_String_o **v12; // x8
  ShopBuyItemListViewItemDraw_o *v13; // x0
  const MethodInfo *v14; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4D2896F & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_12184/*"SHOP_QUEST_FREE_EXCHANGE_CLEARED"*/);
    sub_1C94098(&StringLiteral_12186/*"SHOP_QUEST_PAID_EXCHANGE_CLEARED"*/);
    sub_1C94098(&StringLiteral_19823/*"freeShopCondId"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C94098(&StringLiteral_12088/*"SHOP_ALREADY_GET"*/);
    byte_4D2896F = 1;
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
        this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_32;
        this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
        v7 = item->fields._Shop_k__BackingField;
        if ( !v7 )
          goto LABEL_32;
        targetIds = v7->fields.targetIds;
        if ( !targetIds )
          goto LABEL_32;
        if ( !LODWORD(targetIds->max_length) )
          sub_1C942F8(this);
        if ( !this )
          goto LABEL_32;
        this = (ShopBuyItemListViewItemDraw_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  &entity,
                                                  targetIds->m_Items[0],
                                                  (const MethodInfo_345B50C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
            v9 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12088/*"SHOP_ALREADY_GET"*/, 0);
            ShopBuyItemListViewItemDraw__SetLabelText(v9, v4->fields.textOnMask, (System_String_o *)v9, v10);
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
              (Il2CppObject *)StringLiteral_19823/*"freeShopCondId"*/,
              (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
          v12 = (System_String_o **)&StringLiteral_12186/*"SHOP_QUEST_PAID_EXCHANGE_CLEARED"*/;
          if ( !IsPaidExchange )
            v12 = (System_String_o **)&StringLiteral_12184/*"SHOP_QUEST_FREE_EXCHANGE_CLEARED"*/;
          v13 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get(*v12, 0);
          ShopBuyItemListViewItemDraw__SetLabelText(v13, v4->fields.textOnMask, (System_String_o *)v13, v14);
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
    sub_1C942F0(this, item);
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
  Il2CppObject *Master_object; // x21
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
  if ( (byte_4D2896A & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserShopMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_12125/*"SHOP_BUY_PREPARATION"*/);
    sub_1C94098(&StringLiteral_8358/*"LOTTERY_REST_NUM"*/);
    sub_1C94098(&StringLiteral_14877/*"UNIT_REST_NONE"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C94098(&StringLiteral_3865/*"COUNT_INFO"*/);
    byte_4D2896A = 1;
  }
  *isNotServantGet = 0;
  *isNotServantHaving = 0;
  *isServantHaving = 0;
  *isNotCostumeGet = 0;
  *isNotCommandCodeGet = 0;
  if ( !isInPreparation )
  {
    if ( !item )
      goto LABEL_87;
LABEL_11:
    Shop_k__BackingField = item->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
      goto LABEL_34;
    if ( Shop_k__BackingField->fields.limitNum > 0 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserShopMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2633A )
      {
        sub_1C94098(&NetworkManager_TypeInfo);
        byte_4D2633A = 1;
      }
      this = (ShopBuyItemListViewItemDraw_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ShopBuyItemListViewItemDraw_o *)NetworkManager_TypeInfo;
      }
      v21 = item->fields._Shop_k__BackingField;
      if ( !v21 || !Master_object )
        goto LABEL_87;
      this = (ShopBuyItemListViewItemDraw_o *)UserShopMaster__GetEntityDefinitely(
                                                (UserShopMaster_o *)Master_object,
                                                *(_QWORD *)&this->fields.priceLabelFree->fields.updateAnchors,
                                                v21->fields.baseShopId,
                                                0);
      v22 = item->fields._Shop_k__BackingField;
      if ( v22 )
      {
        limitNum = v22->fields.limitNum;
        if ( !this )
          goto LABEL_87;
      }
      else
      {
        limitNum = 0;
        if ( !this )
          goto LABEL_87;
      }
      v36 = limitNum - HIDWORD(this->fields.m_CancellationTokenSource);
      if ( v36 >= 1 && (!v22 || !ShopEntity__IsSoldOut(item->fields._Shop_k__BackingField, 0)) )
      {
        restCountLabel = v16->fields.restCountLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3865/*"COUNT_INFO"*/, 0);
        v26 = v36;
LABEL_59:
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v26, 0);
        v40 = v25;
        goto LABEL_60;
      }
      if ( !item->fields._IsNotHavingShopItemReceived_k__BackingField )
        goto LABEL_9;
      restCountLabel = v16->fields.restCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
LABEL_54:
      v29 = &StringLiteral_14877/*"UNIT_REST_NONE"*/;
      goto LABEL_55;
    }
    if ( ShopEntity__IsSoldOut(Shop_k__BackingField, 0) )
      goto LABEL_9;
    v27 = item->fields._Shop_k__BackingField;
    if ( v27 )
      purchaseType = v27->fields.purchaseType;
    else
LABEL_34:
      purchaseType = item->fields.itemEntity != 0;
    restCountLabel = v16->fields.restCountLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( purchaseType == 16 )
    {
      v29 = &StringLiteral_8358/*"LOTTERY_REST_NUM"*/;
      goto LABEL_55;
    }
    goto LABEL_54;
  }
  if ( !item )
    goto LABEL_87;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_87;
  baseSprite = (unsigned int)this->fields.baseSprite;
  if ( baseSprite > 9 || ((1 << baseSprite) & 0x2E0) == 0 )
  {
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_87;
    this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
    v30 = item->fields._Shop_k__BackingField;
    if ( !v30 )
      goto LABEL_87;
    v31 = (ShopReleaseMaster_o *)this;
    if ( !this )
      goto LABEL_87;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(
                                              (ShopReleaseMaster_o *)this,
                                              v30->fields.id,
                                              38,
                                              0);
    *isNotServantGet = (unsigned __int8)this & 1;
    v32 = item->fields._Shop_k__BackingField;
    if ( !v32 )
      goto LABEL_87;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v31, v32->fields.id, 41, 0);
    *isNotServantHaving = (unsigned __int8)this & 1;
    v33 = item->fields._Shop_k__BackingField;
    if ( !v33 )
      goto LABEL_87;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v31, v33->fields.id, 40, 0);
    *isServantHaving = (unsigned __int8)this & 1;
    v34 = item->fields._Shop_k__BackingField;
    if ( !v34 )
      goto LABEL_87;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v31, v34->fields.id, 78, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v35 = 1;
    }
    else
    {
      v41 = item->fields._Shop_k__BackingField;
      if ( !v41 )
        goto LABEL_87;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v31, v41->fields.id, 79, 0);
      v35 = (unsigned __int8)this & 1;
    }
    *isNotCostumeGet = v35;
    v42 = item->fields._Shop_k__BackingField;
    if ( !v42 )
      goto LABEL_87;
    *isNotCommandCodeGet = ShopReleaseMaster__isExistCondType(v31, v42->fields.id, 108, 0);
    this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
    if ( !this )
      goto LABEL_87;
  }
  if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, 0) )
  {
LABEL_9:
    ShopBuyItemListViewItemDraw__ShowSoldOut(v16, item, v18);
    return;
  }
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
LABEL_87:
    sub_1C942F0(this, item);
  switch ( LODWORD(this->fields.baseSprite) )
  {
    case 2:
      goto LABEL_9;
    case 5:
    case 7:
    case 9:
      goto LABEL_28;
    case 6:
      if ( !ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)this, 0, 0) )
        goto LABEL_72;
LABEL_28:
      restCountLabel = v16->fields.restCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3865/*"COUNT_INFO"*/, 0);
      v26 = 0;
      goto LABEL_59;
    default:
      if ( *isNotServantGet || *isNotServantHaving )
        goto LABEL_69;
      if ( *isServantHaving )
        goto LABEL_70;
      if ( *isNotCostumeGet )
      {
        nameTextLabel = 0;
LABEL_79:
        restCountLabel = v16->fields.restCountLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v44 = LocalizationManager__Get((System_String_o *)StringLiteral_3865/*"COUNT_INFO"*/, 0);
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(nameTextLabel, 0);
        v40 = v44;
LABEL_60:
        v37 = (ShopBuyItemListViewItemDraw_o *)System_String__Format(v40, NumberFormat, 0);
        goto LABEL_61;
      }
      if ( *isNotCommandCodeGet )
      {
LABEL_69:
        if ( *isServantHaving )
LABEL_70:
          nameTextLabel = (int32_t)this->fields.nameTextLabel;
        else
          nameTextLabel = *isNotServantHaving;
        goto LABEL_79;
      }
LABEL_72:
      if ( ShopBuyItemListViewItem__IsPrepareTextOnMask(item, (const MethodInfo *)item) )
        goto LABEL_11;
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_87;
      if ( ShopEntity__IsItemMaxButShopAvailable((ShopEntity_o *)this, 0) )
        goto LABEL_11;
      restCountLabel = v16->fields.restCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v29 = &StringLiteral_12125/*"SHOP_BUY_PREPARATION"*/;
      break;
  }
LABEL_55:
  v37 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v29, 0);
LABEL_61:
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppClass *klass; // x1
  UILabel_o *v21; // x20
  UISprite_o *v22; // x20
  ShopBuyItemListViewItemDraw_c *v23; // x0
  System_String_o *ReturnItemButtonSpriteName; // x21
  bool v25; // w1
  Il2CppObject *component; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2896D & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Component_TryGetComponent_UIDragScrollView___);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&ShopBuyItemListViewItemDraw_TypeInfo);
    sub_1C94098(&StringLiteral_11188/*"RETURN_ITEM_LIST_BUTTON_TEXT"*/);
    byte_4D2896D = 1;
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
                                           (const MethodInfo_3193A00 *)Method_UnityEngine_Component_TryGetComponent_UIDragScrollView___);
          if ( ((unsigned __int8)Shop_k__BackingField & 1) != 0 )
          {
            if ( component )
            {
              Shop_k__BackingField = this->fields.returnItemButtonDragScroll;
              if ( Shop_k__BackingField )
              {
                klass = component[2].klass;
                *((_QWORD *)Shop_k__BackingField + 4) = klass;
                sub_1C9403C(
                  (GrandQuestFolderBoardItem_o *)((char *)Shop_k__BackingField + 32),
                  (int32_t)klass,
                  v14,
                  v15,
                  v16,
                  v17,
                  v18,
                  v19);
                v21 = this->fields.returnItemButtonLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Shop_k__BackingField = LocalizationManager__Get((System_String_o *)StringLiteral_11188/*"RETURN_ITEM_LIST_BUTTON_TEXT"*/, 0);
                if ( v21 )
                {
                  UILabel__set_text(v21, (System_String_o *)Shop_k__BackingField, 0);
                  v22 = this->fields.returnItemButtonSprite;
                  v23 = ShopBuyItemListViewItemDraw_TypeInfo;
                  if ( !ShopBuyItemListViewItemDraw_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewItemDraw_TypeInfo);
                    v23 = ShopBuyItemListViewItemDraw_TypeInfo;
                  }
                  ReturnItemButtonSpriteName = v23->static_fields->ReturnItemButtonSpriteName;
                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                  AtlasManager__SetShopBanner_41359164(v22, ReturnItemButtonSpriteName, 0);
                  Shop_k__BackingField = this->fields.returnItemButton;
                  if ( Shop_k__BackingField )
                  {
                    Shop_k__BackingField = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)Shop_k__BackingField,
                                             0);
                    if ( Shop_k__BackingField )
                    {
                      v25 = 1;
LABEL_41:
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Shop_k__BackingField, v25, 0);
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
            v25 = 0;
            goto LABEL_41;
          }
        }
LABEL_43:
        sub_1C942F0(Shop_k__BackingField, v11);
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

  if ( (byte_4D28978 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ShopResetMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserShopMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_12144/*"SHOP_CAN_NOT_RESET_NOTICE_MESSAGE"*/);
    sub_1C94098(&StringLiteral_12146/*"SHOP_CAN_RESET_NOTICE_MESSAGE"*/);
    sub_1C94098(&StringLiteral_12145/*"SHOP_CAN_NOT_RESET_SOLD_OUT_NOTICE_MESSAGE"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28978 = 1;
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ShopResetMaster___);
      IsSoldOut = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ItemMaster___);
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
          v13 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserShopMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4D2633A )
          {
            sub_1C94098(&NetworkManager_TypeInfo);
            byte_4D2633A = 1;
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
                    v19 = &StringLiteral_12145/*"SHOP_CAN_NOT_RESET_SOLD_OUT_NOTICE_MESSAGE"*/;
                  else
                    v19 = &StringLiteral_12144/*"SHOP_CAN_NOT_RESET_NOTICE_MESSAGE"*/;
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
                v19 = &StringLiteral_12146/*"SHOP_CAN_RESET_NOTICE_MESSAGE"*/;
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
    sub_1C942F0(IsSoldOut, v7);
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

  if ( (byte_4D28963 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28963 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0)) == 0 )
      sub_1C942F0(gameObject, v7);
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

  if ( (byte_4D28964 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28964 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( !v6 )
  {
    if ( !sprite )
      sub_1C942F0(v6, v7);
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
  if ( (byte_4D28977 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_12134/*"SHOP_BUY_SOLD_OUT"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28977 = 1;
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
    sub_1C942F0(this, item);
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
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12134/*"SHOP_BUY_SOLD_OUT"*/, 0);
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

  if ( (byte_4D2895D & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2895D = 1;
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
            sub_1C942F0(v8, v9);
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

  if ( (byte_4D2897B & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    byte_4D2897B = 1;
  }
  numTextLabel = this->fields.numTextLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0);
  if ( !numTextLabel )
    sub_1C942F0(NumberFormat, v7);
  UILabel__set_text(numTextLabel, NumberFormat, 0);
}