void ShopBuyItemListViewItemDraw___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct ShopBuyItemListViewItemDraw_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct ShopBuyItemListViewItemDraw_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596C7DA & 1) == 0 )
  {
    sub_2213A60(&ShopBuyItemListViewItemDraw_TypeInfo);
    sub_2213A60(&StringLiteral_18218/*"btn_bg_32"*/);
    sub_2213A60(&StringLiteral_21413/*"img_list_bg05"*/);
    sub_2213A60(&StringLiteral_21412/*"img_list_bg04"*/);
    byte_596C7DA = 1;
  }
  v7 = StringLiteral_21412/*"img_list_bg04"*/;
  ShopBuyItemListViewItemDraw_TypeInfo->static_fields->BASE_IMG_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_21412/*"img_list_bg04"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ShopBuyItemListViewItemDraw_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_21413/*"img_list_bg05"*/;
  static_fields = ShopBuyItemListViewItemDraw_TypeInfo->static_fields;
  static_fields->ClassBoardResetBaseSpriteName = (struct System_String_o *)StringLiteral_21413/*"img_list_bg05"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->ClassBoardResetBaseSpriteName,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_18218/*"btn_bg_32"*/;
  v17 = ShopBuyItemListViewItemDraw_TypeInfo->static_fields;
  v17->ReturnItemButtonSpriteName = (struct System_String_o *)StringLiteral_18218/*"btn_bg_32"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->ReturnItemButtonSpriteName, v16, v18, v19, v20, v21, v22, v23);
}


void ShopBuyItemListViewItemDraw___ctor(ShopBuyItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ShopBuyItemListViewItemDraw__Awake(ShopBuyItemListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct UISprite_o *v13; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct UISprite_o *v21; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_596C7BC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C7BC = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Equality(baseSprite, 0, 0);
  if ( !v5 )
  {
    v13 = this->fields.baseSprite;
    if ( !v13
      || (mAtlas = v13->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.baseAtlas,
            (int32_t)mAtlas,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12),
          (v21 = this->fields.baseSprite) == 0) )
    {
      sub_2213CDC(v5, v6);
    }
    mSpriteName = v21->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseSpriteName,
      (int32_t)mSpriteName,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
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

  if ( (byte_596C7BE & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    byte_596C7BE = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)this->fields.possessionAnotherItemIds,
                    0);
  if ( !IsNullOrEmpty )
  {
    possessionAnotherItemIds = this->fields.possessionAnotherItemIds;
    if ( !possessionAnotherItemIds || !manager )
      sub_2213CDC(IsNullOrEmpty, v6);
    max_length = possessionAnotherItemIds->max_length;
    v10 = manager->fields.alphaAnimCnt % (int)max_length;
    if ( v10 >= max_length )
      sub_2213CE4(IsNullOrEmpty);
    anotherPayItemImage = this->fields.anotherPayItemImage;
    v12 = possessionAnotherItemIds->m_Items[v10];
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v7);
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
  il2cpp_array_size_t max_length; // x8
  SetItemMaster_o *v5; // x20
  unsigned __int64 v6; // x21
  int m_CancellationTokenSource; // w8
  int v8; // w10
  __int64 v9; // x11

  if ( (byte_596C7D4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SetItemMaster___);
    this = (ShopBuyItemListViewItemDraw_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C7D4 = 1;
  }
  if ( !ids )
    goto LABEL_20;
  if ( !ids->max_length )
    return 0;
  this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_2213CDC(this, ids);
  this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SetItemMaster___);
  max_length = ids->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v5 = (SetItemMaster_o *)this;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)max_length )
LABEL_21:
      sub_2213CE4(this);
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
    if ( (m_CancellationTokenSource & ~(m_CancellationTokenSource >> 31)) == ++v8 )
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
  unsigned int v7; // w8
  UserItemMaster_o *v8; // x21
  unsigned int ItemCount; // w0
  ShopEntity_o *v10; // x8
  __int64 v11; // x20
  unsigned __int64 v12; // x22
  __int64 v13; // x2
  int64_t v14; // x24
  unsigned __int64 v15; // x10
  __int64 v16; // x2
  Il2CppObject *MasterData_object; // x21
  __int64 v18; // x9
  ShopEntity_o *Shop_k__BackingField; // x0
  int64_t v20; // x19
  int v21; // w8
  unsigned int v23; // w0

  if ( (byte_596C7D5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C7D5 = 1;
  }
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !item )
    goto LABEL_25;
  v6 = (_DWORD *)SelfUserGame;
  SelfUserGame = (__int64)item->fields._Shop_k__BackingField;
  if ( !SelfUserGame )
    goto LABEL_25;
  v7 = *(_DWORD *)(SelfUserGame + 68);
  if ( v7 <= 0xC )
  {
    if ( ((1 << v7) & 0x1300) != 0 )
    {
      v11 = sub_2213B20(int___TypeInfo, 1);
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_25;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v16);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      SelfUserGame = (__int64)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v16);
        SelfUserGame = (__int64)NetworkManager_TypeInfo;
      }
      if ( !item->fields._Shop_k__BackingField )
        goto LABEL_25;
      v18 = *(_QWORD *)(SelfUserGame + 184);
      Shop_k__BackingField = item->fields._Shop_k__BackingField;
      v20 = *(_QWORD *)(v18 + 64);
      SelfUserGame = ShopEntity__GetItemIDs(Shop_k__BackingField, 0, 0);
      if ( !MasterData_object )
        goto LABEL_25;
      SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)MasterData_object,
                                v20,
                                SelfUserGame,
                                0);
      if ( !SelfUserGame || !v11 )
        goto LABEL_25;
      if ( *(_DWORD *)(v11 + 24) )
      {
        v21 = *(_DWORD *)(SelfUserGame + 28);
LABEL_54:
        *(_DWORD *)(v11 + 32) = v21;
        return (System_Int32_array *)v11;
      }
LABEL_57:
      sub_2213CE4(SelfUserGame);
    }
    if ( ((1 << v7) & 0x840) != 0 )
    {
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( SelfUserGame )
      {
        SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)SelfUserGame,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
        if ( item->fields._Shop_k__BackingField )
        {
          v8 = (UserItemMaster_o *)SelfUserGame;
          ItemCount = ShopEntity__GetItemCount(item->fields._Shop_k__BackingField, 0);
          SelfUserGame = sub_2213B20(int___TypeInfo, ItemCount);
          v10 = item->fields._Shop_k__BackingField;
          if ( v10 )
          {
            v11 = SelfUserGame;
            v12 = 0;
            while ( (__int64)v12 < ShopEntity__GetItemCount(v10, 0) )
            {
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v13);
              if ( !byte_5969EF2 )
              {
                sub_2213A60(&NetworkManager_TypeInfo);
                byte_5969EF2 = 1;
              }
              SelfUserGame = (__int64)NetworkManager_TypeInfo;
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v13);
                SelfUserGame = (__int64)NetworkManager_TypeInfo;
              }
              if ( item->fields._Shop_k__BackingField )
              {
                v14 = *(_QWORD *)(*(_QWORD *)(SelfUserGame + 184) + 64LL);
                SelfUserGame = ShopEntity__GetItemIDs(item->fields._Shop_k__BackingField, v12, 0);
                if ( v8 )
                {
                  SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(v8, v14, SelfUserGame, 0);
                  if ( SelfUserGame )
                  {
                    if ( v11 )
                    {
                      if ( v12 >= *(unsigned int *)(v11 + 24) )
                        goto LABEL_57;
                      v15 = v11 + 4 * v12;
                      v10 = item->fields._Shop_k__BackingField;
                      ++v12;
                      *(_DWORD *)(v15 + 32) = *(_DWORD *)(SelfUserGame + 28);
                      if ( v10 )
                        continue;
                    }
                  }
                }
              }
              goto LABEL_25;
            }
            return (System_Int32_array *)v11;
          }
        }
      }
LABEL_25:
      sub_2213CDC(SelfUserGame, v5);
    }
    if ( v7 == 10 )
    {
      SelfUserGame = sub_2213B20(int___TypeInfo, 1);
      if ( !v6 )
        goto LABEL_25;
      v11 = SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_25;
      if ( *(_DWORD *)(SelfUserGame + 24) )
      {
        v21 = v6[49];
        goto LABEL_54;
      }
      goto LABEL_57;
    }
  }
  if ( v7 == 1 )
  {
    SelfUserGame = sub_2213B20(int___TypeInfo, 1);
    if ( !v6 )
      goto LABEL_25;
    v11 = SelfUserGame;
    if ( !SelfUserGame )
      goto LABEL_25;
    if ( *(_DWORD *)(SelfUserGame + 24) )
    {
      v21 = v6[46];
      goto LABEL_54;
    }
    goto LABEL_57;
  }
  if ( v7 == 4 )
  {
    SelfUserGame = sub_2213B20(int___TypeInfo, 1);
    if ( !v6 )
      goto LABEL_25;
    v11 = SelfUserGame;
    if ( !SelfUserGame )
      goto LABEL_25;
    if ( *(_DWORD *)(SelfUserGame + 24) )
    {
      v21 = v6[48];
      goto LABEL_54;
    }
    goto LABEL_57;
  }
  v23 = ShopEntity__GetItemCount((ShopEntity_o *)SelfUserGame, 0);
  return (System_Int32_array *)sub_2213B20(int___TypeInfo, v23);
}


System_Int64_array *ShopBuyItemListViewItemDraw__GetUserItemCountsLong(
        ShopBuyItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x19
  System_Int64_array *result; // x0
  __int64 v4; // x1

  if ( (byte_596C7D6 & 1) == 0 )
  {
    sub_2213A60(&long___TypeInfo);
    byte_596C7D6 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  result = (System_Int64_array *)sub_2213B20(long___TypeInfo, 1);
  if ( !SelfUserGame || !result )
    sub_2213CDC(result, v4);
  if ( !LODWORD(result->max_length) )
    sub_2213CE4(result);
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
  struct ShopEntity_o *Shop_k__BackingField; // x9
  int purchaseType; // w8
  __int64 *v8; // x8
  UISprite_o *bandSprite; // x1
  bool v10; // w2

  v5 = this;
  if ( (byte_596C7C5 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21715/*"img_txt_shop"*/);
    sub_2213A60(&StringLiteral_21699/*"img_txt_quest"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_2213A60(&StringLiteral_21620/*"img_txt_bgm"*/);
    byte_596C7C5 = 1;
  }
  if ( !item || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0 )
    sub_2213CDC(this, item);
  purchaseType = Shop_k__BackingField->fields.purchaseType;
  if ( purchaseType <= 6 )
  {
    if ( purchaseType == 5 )
    {
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItemDraw__GetIsSetItemEventShop(
                                                this,
                                                Shop_k__BackingField->fields.targetIds,
                                                method);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_15;
    }
    else if ( purchaseType == 6 )
    {
      v8 = &StringLiteral_21699/*"img_txt_quest"*/;
      goto LABEL_16;
    }
LABEL_17:
    bandSprite = v5->fields.bandSprite;
    v10 = 0;
    goto LABEL_18;
  }
  if ( purchaseType == 7 )
  {
LABEL_15:
    v8 = &StringLiteral_21715/*"img_txt_shop"*/;
    goto LABEL_16;
  }
  if ( purchaseType != 15 )
  {
    if ( purchaseType != 9 )
      goto LABEL_17;
    goto LABEL_15;
  }
  v8 = &StringLiteral_21620/*"img_txt_bgm"*/;
LABEL_16:
  ShopBuyItemListViewItemDraw__SetSpriteName(this, v5->fields.bandSprite, (System_String_o *)*v8, v3);
  bandSprite = v5->fields.bandSprite;
  v10 = 1;
LABEL_18:
  ShopBuyItemListViewItemDraw__SetSpriteActive(this, bandSprite, v10, v3);
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemListViewItemDraw__SetBaseButton(
        ShopBuyItemListViewItemDraw_o *this,
        bool isInPreparation,
        int32_t dispMode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *baseSprite; // x20
  __int64 v11; // x2
  UIWidget_o *v12; // x19
  UICommonButton_o *v13; // x0

  if ( (byte_596C7CC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICommonButtonColor_TypeInfo);
    byte_596C7CC = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isInPreparation, *(_QWORD *)&dispMode);
  if ( UnityEngine_Object__op_Equality(baseButton, 0, 0) )
  {
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
    {
      v12 = (UIWidget_o *)this->fields.baseSprite;
      v13 = (UICommonButton_o *)UICommonButtonColor_TypeInfo;
      if ( !*(&UICommonButtonColor_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo, v8, v11);
      if ( v12 )
      {
        UIWidget__set_color(v12, UICommonButtonColor_TypeInfo->static_fields->normal, 0);
        return;
      }
LABEL_18:
      sub_2213CDC(v13, v8);
    }
  }
  else
  {
    v13 = this->fields.baseButton;
    if ( !v13 )
      goto LABEL_18;
    ((void (__fastcall *)(UICommonButton_o *, bool, const MethodInfo *))v13->klass->vtable._5_set_isEnabled.methodPtr)(
      v13,
      !isInPreparation,
      v13->klass->vtable._5_set_isEnabled.method);
    v13 = this->fields.baseButton;
    if ( !v13 )
      goto LABEL_18;
    UICommonButton__SetColliderEnable(v13, dispMode == 3 || isInPreparation, 1, 0);
    v13 = this->fields.baseButton;
    if ( !v13 )
      goto LABEL_18;
    ((void (__fastcall *)(UICommonButton_o *, _QWORD, __int64, const MethodInfo *))v13->klass->vtable._14_SetState.methodPtr)(
      v13,
      0,
      1,
      v13->klass->vtable._14_SetState.method);
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
  __int64 v8; // x2
  struct ShopEntity_o *Shop_k__BackingField; // x0
  UISprite_o *v10; // x19
  ShopBuyItemListViewItemDraw_c *v11; // x0
  System_String_o *ClassBoardResetBaseSpriteName; // x20
  System_String_o *baseSpriteName; // x1
  int32_t v14; // w0
  int bgImageId; // t1
  UISprite_o *v16; // x21
  System_String_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  System_String_o *v20; // x22
  __int64 v21; // x2
  struct ShopEntity_o *v22; // x8
  struct UISprite_o *v23; // x20
  struct System_String_o **onChange; // x8

  if ( (byte_596C7C6 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ShopBuyItemListViewItemDraw_TypeInfo);
    sub_2213A60(&StringLiteral_24677/*"shop_item_menu_"*/);
    byte_596C7C6 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, method);
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
    sub_2213CDC(v6, v7);
  }
  if ( Shop_k__BackingField->fields.shopType == 18 )
  {
    v10 = this->fields.baseSprite;
    v11 = ShopBuyItemListViewItemDraw_TypeInfo;
    if ( !*(&ShopBuyItemListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemListViewItemDraw_TypeInfo, v7, v8);
      v11 = ShopBuyItemListViewItemDraw_TypeInfo;
    }
    ClassBoardResetBaseSpriteName = v11->static_fields->ClassBoardResetBaseSpriteName;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7, v8);
    AtlasManager__SetShopBanner_47571044(v10, ClassBoardResetBaseSpriteName, 0);
    return;
  }
  bgImageId = Shop_k__BackingField->fields.bgImageId;
  v14 = (_DWORD)Shop_k__BackingField + 124;
  if ( bgImageId < 1 )
    goto LABEL_22;
  v16 = this->fields.baseSprite;
  v17 = System_Int32__ToString(v14, 0);
  v20 = System_String__Concat_75651716((System_String_o *)StringLiteral_24677/*"shop_item_menu_"*/, v17, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v18, v19);
  if ( !AtlasManager__SetShopBanner_47571044(v16, v20, 0) )
  {
LABEL_22:
    v6 = this->fields.baseSprite;
    if ( v6 )
    {
      UISprite__set_atlas(v6, this->fields.baseAtlas, 0);
      v22 = item->fields._Shop_k__BackingField;
      if ( v22 )
      {
        v23 = this->fields.baseSprite;
        if ( v22->fields.shopType == 9 )
        {
          v6 = (UISprite_o *)ShopBuyItemListViewItemDraw_TypeInfo;
          if ( !*(&ShopBuyItemListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ShopBuyItemListViewItemDraw_TypeInfo, v7, v21);
            v6 = (UISprite_o *)ShopBuyItemListViewItemDraw_TypeInfo;
          }
          onChange = (struct System_String_o **)v6->fields.onChange;
        }
        else
        {
          onChange = &this->fields.baseSpriteName;
        }
        if ( v23 )
        {
          baseSpriteName = *onChange;
          v6 = v23;
          goto LABEL_31;
        }
      }
    }
    goto LABEL_32;
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemListViewItemDraw__SetButtonActive(
        ShopBuyItemListViewItemDraw_o *this,
        UICommonButton_o *button,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_596C7C2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C7C2 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, button, isActive);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)button, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !button || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)button, 0)) == 0 )
      sub_2213CDC(gameObject, v7);
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
  __int64 v13; // x1
  __int64 v14; // x2
  UISprite_o *iconSprite; // x19

  if ( (byte_596C7D1 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    byte_596C7D1 = 1;
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
          sub_2213CDC(IsAp, v11);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0);
        GameObjectExtensions__SetLocalPositionY(gameObject, -3.0, 0);
        iconSprite = itemIcon->fields.iconSprite;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13, v14);
        AtlasManager__SetItem(iconSprite, 47, 0);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemListViewItemDraw__SetEventEndTime(
        ShopBuyItemListViewItemDraw_o *this,
        bool isRarePriShopPurchased,
        bool isIndefinitePeriodShowable,
        int64_t activeTime,
        int64_t enterTime,
        const MethodInfo *method)
{
  struct UILabel_o *v11; // x21
  int v12; // w8
  ShopBuyItemListViewItemDraw_o *RestTime2; // x0
  const MethodInfo *v14; // x3
  struct UILabel_o *restTimeLabel; // x19
  UILabel_o *v16; // x1

  if ( (byte_596C7D3 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12644/*"SHOP_INDEFINITE_PERIOD"*/);
    sub_2213A60(&StringLiteral_13957/*"TIME_REST2_NONE"*/);
    byte_596C7D3 = 1;
  }
  if ( activeTime <= 0 )
  {
    restTimeLabel = this->fields.restTimeLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isRarePriShopPurchased, isIndefinitePeriodShowable);
    RestTime2 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13957/*"TIME_REST2_NONE"*/, 0);
    v16 = restTimeLabel;
  }
  else
  {
    v11 = this->fields.restTimeLabel;
    v12 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( isRarePriShopPurchased || isIndefinitePeriodShowable )
    {
      if ( !v12 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isRarePriShopPurchased, isIndefinitePeriodShowable);
      RestTime2 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12644/*"SHOP_INDEFINITE_PERIOD"*/, 0);
    }
    else
    {
      if ( !v12 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isRarePriShopPurchased, isIndefinitePeriodShowable);
      RestTime2 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__GetRestTime2(activeTime, enterTime, 0);
    }
    v16 = v11;
  }
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

  if ( (byte_596C7D2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C7D2 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, eventItemIcon, itemEntity);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)eventItemIcon, 0, 0);
  if ( !v8 )
  {
    if ( !eventItemIcon )
      sub_2213CDC(v8, v9);
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
  il2cpp_array_size_t max_length_low; // x8
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
      goto LABEL_38;
    this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
    if ( !this )
      goto LABEL_38;
    v7 = ShopEntity__checkFlag((ShopEntity_o *)this, 32, 0);
  }
  else
  {
    if ( !item )
      goto LABEL_38;
    v7 = 0;
  }
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
  {
    if ( item->fields._EventItemEntities_k__BackingField )
      goto LABEL_38;
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
            goto LABEL_39;
          ShopBuyItemListViewItemDraw__SetEventItemIcon(
            this,
            v6->fields.eventItemIcon1,
            EventItemEntities_k__BackingField->m_Items[0],
            v7,
            v12);
          v20 = item->fields._EventItemEntities_k__BackingField;
          if ( v20 )
          {
            if ( (v20->max_length & 0xFFFFFFFE) == 0 )
              goto LABEL_39;
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
            goto LABEL_39;
          eventItemIcon2 = v6->fields.eventItemIcon;
          v15 = v13->m_Items[0];
LABEL_28:
          v18 = v7;
          goto LABEL_29;
        }
      }
LABEL_38:
      sub_2213CDC(this, item);
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
  max_length_low = LODWORD(CommonConsumeEntities_k__BackingField->max_length);
  if ( max_length_low == 1 )
  {
    v10 = CommonConsumeEntities_k__BackingField->m_Items[0];
    if ( v10 )
    {
      eventItemIcon = v6->fields.eventItemIcon;
LABEL_36:
      ShopBuyItemListViewItemDraw__SetCommonConsumeIcon(v6, eventItemIcon, v10, v7, v4);
      return;
    }
    return;
  }
  if ( (int)max_length_low < 2 )
    return;
  v21 = CommonConsumeEntities_k__BackingField->m_Items[0];
  if ( v21 )
  {
    ShopBuyItemListViewItemDraw__SetCommonConsumeIcon(v6, v6->fields.eventItemIcon1, v21, v7, v4);
    max_length_low = CommonConsumeEntities_k__BackingField->max_length;
  }
  if ( (max_length_low & 0xFFFFFFFE) == 0 )
LABEL_39:
    sub_2213CE4(this);
  v10 = CommonConsumeEntities_k__BackingField->m_Items[1];
  if ( v10 )
  {
    eventItemIcon = v6->fields.eventItemIcon2;
    goto LABEL_36;
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
  UICommonButton_o *v9; // x1
  bool v10; // w2
  struct ShopEntity_o *Shop_k__BackingField; // x8
  unsigned int v12; // w9
  struct ShopEntity_o *v13; // x8

  v6 = this;
  if ( (byte_596C7CB & 1) == 0 )
  {
    this = (ShopBuyItemListViewItemDraw_o *)sub_2213A60(&StringLiteral_9661/*"NONE"*/);
    byte_596C7CB = 1;
  }
  if ( !item )
    goto LABEL_19;
  if ( ShopBuyItemListViewItem__IsInfoButtonDisableInPreparation(
         item,
         isInPreparation,
         (const MethodInfo *)isInPreparation) )
  {
    return;
  }
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_19;
  this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__checkFlag((ShopEntity_o *)this, 0x8000, 0);
  infoButton = v6->fields.infoButton;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    Shop_k__BackingField = item->fields._Shop_k__BackingField;
    if ( Shop_k__BackingField )
    {
      v12 = Shop_k__BackingField->fields.purchaseType - 1;
      if ( v12 >= 0x15 || ((0x140009u >> v12) & 1) == 0 )
      {
        this = (ShopBuyItemListViewItemDraw_o *)System_String__IsNullOrEmpty(
                                                  Shop_k__BackingField->fields.infoMessage,
                                                  0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = 0;
LABEL_17:
          v10 = (unsigned __int8)this & 1;
          v9 = infoButton;
          goto LABEL_18;
        }
        v13 = item->fields._Shop_k__BackingField;
        if ( v13 )
        {
          this = (ShopBuyItemListViewItemDraw_o *)System_String__op_Inequality(
                                                    v13->fields.infoMessage,
                                                    (System_String_o *)StringLiteral_9661/*"NONE"*/,
                                                    0);
          goto LABEL_17;
        }
LABEL_19:
        sub_2213CDC(this, item);
      }
    }
    else if ( !item->fields.itemEntity )
    {
      goto LABEL_19;
    }
    this = (ShopBuyItemListViewItemDraw_o *)(&dword_0 + 1);
    goto LABEL_17;
  }
  v9 = infoButton;
  v10 = 0;
LABEL_18:
  ShopBuyItemListViewItemDraw__SetButtonActive(this, v9, v10, v7);
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
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1
  __int64 v21; // x2
  UILabel_o *messageTextLabel; // x23
  const MethodInfo *v23; // x5
  const MethodInfo *v24; // x3
  ShopEntity_o *Shop_k__BackingField; // x23
  UISprite_o *possessionSprite; // x24
  const MethodInfo *v27; // x1
  bool HaveIconShowable; // w0
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_Object_o *chocolateSprite; // x23
  _BOOL8 v35; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x3
  UnityEngine_Component_o *IsChocolateSvtEquip; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v40; // x1
  ShopBuyItemListViewItemDraw_o *v41; // x0
  const MethodInfo *v42; // x3
  __int64 v43; // x1
  __int64 v44; // x2
  UnityEngine_Object_o *soldOutImage; // x23
  __int64 v46; // x1
  const MethodInfo *v47; // x2
  ShopEntity_o *v48; // x23
  UILabel_o *textOnMask; // x24
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x3
  _BOOL4 IsRarePriShopPurchased_k__BackingField; // w23
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x5
  bool IsIndefinitePeriodShowable; // w22
  int64_t ActiveTime; // x3
  ShopBuyItemListViewItemDraw_o *v58; // x0
  const MethodInfo *v59; // x3
  __int64 v60; // x1
  __int64 v61; // x2
  UnityEngine_Object_o *priceInfo1; // x22
  struct ShopEntity_o *v63; // x8
  int32_t payType; // w8
  const MethodInfo *v65; // x3
  UnityEngine_GameObject_o *v66; // x22
  UnityEngine_Component_o *priceInfo2; // x22
  bool v68; // cc
  bool v69; // w1
  const MethodInfo *v70; // x3
  const MethodInfo *v71; // x3
  unsigned int v72; // w22
  struct ShopEntity_o *v73; // x8
  char v74; // w23
  _BOOL4 v75; // w8
  struct ShopEntity_o *v76; // x8
  Il2CppObject *v77; // x21
  __int64 v78; // x2
  Il2CppObject *MasterData_object; // x22
  struct ShopEntity_o *v80; // x8
  UserShopEntity_o *v81; // x22
  System_String_o **v82; // x8
  System_String_o **v83; // x9
  struct CommonConsumeEntity_array *CommonConsumeEntities_k__BackingField; // x22
  bool v85; // zf
  System_String_o *v86; // x20
  __int64 v87; // x1
  __int64 v88; // x2
  System_String_o *v89; // x0
  struct UILabel_o *freeExchangeConditionNoticeLabel; // x8
  int mWidth; // w8
  struct UISprite_array *freeExchangeConditionNoticeBgSprites; // x20
  int v93; // w21
  int max_length; // w8
  unsigned int v95; // w24
  Il2CppClass **v96; // x8
  UISprite_o *v97; // x19
  __int64 v98; // x1
  __int64 v99; // x2
  const MethodInfo *v100; // [xsp+0h] [xbp-80h]
  const MethodInfo *v101; // [xsp+0h] [xbp-80h]
  bool isNotCommandCodeGet; // [xsp+14h] [xbp-6Ch] BYREF
  bool isNotCostumeGet; // [xsp+18h] [xbp-68h] BYREF
  bool isServantHaving; // [xsp+1Ch] [xbp-64h] BYREF
  bool isNotServantHaving; // [xsp+20h] [xbp-60h] BYREF
  bool isNotServantGet; // [xsp+24h] [xbp-5Ch] BYREF
  System_String_o *itemName; // [xsp+28h] [xbp-58h] BYREF
  System_String_o *message; // [xsp+38h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_596C7BF & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ShopBuyItemUtility_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_12552/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/);
    sub_2213A60(&StringLiteral_20592/*"freeShopCondMessage"*/);
    sub_2213A60(&StringLiteral_12651/*"SHOP_PAID_EXCHANGE_CONDITIONS"*/);
    sub_2213A60(&StringLiteral_20591/*"freeShopCondId"*/);
    sub_2213A60(&StringLiteral_21793/*"info_base"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_12553/*"SHOP_ACHIEVEMENT_PAID_EXCHANGE_CONDITIONS"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_2213A60(&StringLiteral_12623/*"SHOP_FREE_EXCHANGE_CONDITIONS"*/);
    byte_596C7BF = 1;
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
    ShopBuyItemListViewItemDraw__SetSpriteActive(v58, v6->fields.addRangeSprite, 0, v59);
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
  ShopBuyItemListViewItemDraw__SetItemIcon(v6, item, v11, v19);
  messageTextLabel = v6->fields.messageTextLabel;
  if ( !*(&ShopBuyItemUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo, v20, v21);
  ShopBuyItemUtility__SetDefaultMessageLabel(messageTextLabel, v20);
  ShopBuyItemListViewItemDraw__SetNameAndMessageText(v6, item, v11, message, itemName, v23);
  ShopBuyItemListViewItemDraw__SetNumText(v6, item, v11, v24);
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  possessionSprite = v6->fields.possessionSprite;
  HaveIconShowable = ShopBuyItemListViewItem__get_IsHaveIconShowable(item, v27);
  ShopBuyItemUtility__SetShopHaveStatusIcon(Shop_k__BackingField, possessionSprite, HaveIconShowable, v29);
  ShopBuyItemListViewItemDraw__SetShopResetText(v6, item->fields._Shop_k__BackingField, v30);
  ShopBuyItemListViewItemDraw__SetPossessionInfo(v6, item, v31);
  chocolateSprite = (UnityEngine_Object_o *)v6->fields.chocolateSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32, v33);
  v35 = UnityEngine_Object__op_Inequality(chocolateSprite, 0, 0);
  if ( v35 )
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.chocolateSprite;
    if ( !IsChocolateSvtEquip )
      goto LABEL_106;
    gameObject = UnityEngine_Component__get_gameObject(IsChocolateSvtEquip, 0);
    IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopBuyItemListViewItem__get_IsChocolateSvtEquip(item, v40);
    if ( !gameObject )
      goto LABEL_106;
    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)IsChocolateSvtEquip & 1, 0);
  }
  ShopBuyItemListViewItemDraw__SetLabelText(
    (ShopBuyItemListViewItemDraw_o *)v35,
    v6->fields.textOnMask,
    (System_String_o *)StringLiteral_1/*""*/,
    v37);
  ShopBuyItemListViewItemDraw__SetLabelText(v41, v6->fields.prepareTextOnMask, (System_String_o *)StringLiteral_1/*""*/, v42);
  soldOutImage = (UnityEngine_Object_o *)v6->fields.soldOutImage;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43, v44);
  if ( UnityEngine_Object__op_Inequality(0, soldOutImage, 0) )
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.soldOutImage;
    if ( !IsChocolateSvtEquip )
      goto LABEL_106;
    IsChocolateSvtEquip = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(IsChocolateSvtEquip, 0);
    if ( !IsChocolateSvtEquip )
      goto LABEL_106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0);
  }
  ShopBuyItemListViewItemDraw__SetRestCountText(
    v6,
    item,
    v11,
    &isNotServantGet,
    &isNotServantHaving,
    &isServantHaving,
    &isNotCostumeGet,
    &isNotCommandCodeGet,
    v100);
  ShopBuyItemListViewItemDraw__SetMask(
    v6,
    item,
    v11,
    isNotServantGet,
    isNotServantHaving,
    isServantHaving,
    isNotCostumeGet,
    isNotCommandCodeGet,
    v101);
  v48 = item->fields._Shop_k__BackingField;
  textOnMask = v6->fields.textOnMask;
  if ( !*(&ShopBuyItemUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo, v46, v47);
  ShopBuyItemUtility__SetAddTextOnMask(v48, textOnMask, v47);
  ShopBuyItemListViewItemDraw__SetInfoButton(v6, item, v11, v50);
  ShopBuyItemListViewItemDraw__SetBaseButton(v6, v11, mode, v51);
  ShopBuyItemListViewItemDraw__SetReturnButton(v6, item, v11, v52);
  IsRarePriShopPurchased_k__BackingField = item->fields._IsRarePriShopPurchased_k__BackingField;
  IsIndefinitePeriodShowable = ShopBuyItemListViewItem__get_IsIndefinitePeriodShowable(item, v54);
  if ( item->fields._Shop_k__BackingField )
    ActiveTime = ShopEntity__GetActiveTime(item->fields._Shop_k__BackingField, 0);
  else
    ActiveTime = 0;
  ShopBuyItemListViewItemDraw__SetEventEndTime(
    v6,
    IsRarePriShopPurchased_k__BackingField,
    IsIndefinitePeriodShowable,
    ActiveTime,
    item->fields._EnterTime_k__BackingField,
    v55);
  priceInfo1 = (UnityEngine_Object_o *)v6->fields.priceInfo1;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v60, v61);
  if ( UnityEngine_Object__op_Equality(priceInfo1, 0, 0) )
    return;
  v63 = item->fields._Shop_k__BackingField;
  if ( !v63 )
  {
LABEL_35:
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfoFree;
    if ( !IsChocolateSvtEquip )
      goto LABEL_106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0);
    IsChocolateSvtEquip = (UnityEngine_Component_o *)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_106;
    v66 = v6->fields.priceInfo1;
    IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__GetItemCount((ShopEntity_o *)IsChocolateSvtEquip, 0);
    if ( !v66 )
      goto LABEL_106;
    UnityEngine_GameObject__SetActive(v66, (int)IsChocolateSvtEquip < 2, 0);
    IsChocolateSvtEquip = (UnityEngine_Component_o *)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_106;
    priceInfo2 = (UnityEngine_Component_o *)v6->fields.priceInfo2;
    IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__GetItemCount((ShopEntity_o *)IsChocolateSvtEquip, 0);
    if ( !priceInfo2 )
      goto LABEL_106;
    v68 = (int)IsChocolateSvtEquip <= 1;
    IsChocolateSvtEquip = priceInfo2;
    goto LABEL_41;
  }
  payType = v63->fields.payType;
  if ( payType != 14 )
  {
    if ( payType == 13 )
    {
      IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfoFree;
      if ( !IsChocolateSvtEquip )
        goto LABEL_106;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 1, 0);
      IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfo1;
      if ( !IsChocolateSvtEquip )
        goto LABEL_106;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0);
      IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfo2;
      if ( !IsChocolateSvtEquip )
        goto LABEL_106;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0);
      ShopBuyItemListViewItemDraw__SetPriceIconText(v6, item, v11, v65);
      goto LABEL_45;
    }
    goto LABEL_35;
  }
  CommonConsumeEntities_k__BackingField = item->fields._CommonConsumeEntities_k__BackingField;
  if ( !CommonConsumeEntities_k__BackingField )
    goto LABEL_45;
  IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfoFree;
  if ( !IsChocolateSvtEquip )
    goto LABEL_106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0);
  IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfo1;
  if ( !IsChocolateSvtEquip )
    goto LABEL_106;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)IsChocolateSvtEquip,
    SLODWORD(CommonConsumeEntities_k__BackingField->max_length) < 2,
    0);
  IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.priceInfo2;
  if ( !IsChocolateSvtEquip )
    goto LABEL_106;
  v68 = SLODWORD(CommonConsumeEntities_k__BackingField->max_length) <= 1;
LABEL_41:
  v69 = !v68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, v69, 0);
  ShopBuyItemListViewItemDraw__SetPriceIconText(v6, item, v11, v70);
  ShopBuyItemListViewItemDraw__SetEventItemIconText(v6, item, v11, v71);
LABEL_45:
  IsChocolateSvtEquip = (UnityEngine_Component_o *)item->fields._Shop_k__BackingField;
  if ( !IsChocolateSvtEquip )
    goto LABEL_106;
  IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__isQuestNotClearItemClosed(
                                                     (ShopEntity_o *)IsChocolateSvtEquip,
                                                     0,
                                                     0);
  v72 = 0;
  if ( ((unsigned __int8)IsChocolateSvtEquip & 1) != 0 )
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_106;
    IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__IsSoldOut((ShopEntity_o *)IsChocolateSvtEquip, 0);
    v72 = (unsigned int)IsChocolateSvtEquip ^ 1;
  }
  v73 = item->fields._Shop_k__BackingField;
  if ( !v73 )
    goto LABEL_106;
  if ( v73->fields.purchaseType == 14 )
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__IsEligibleForFreeFeaturesTheCostumeRelease(
                                                       item->fields._Shop_k__BackingField,
                                                       0);
    v73 = item->fields._Shop_k__BackingField;
    if ( !v73 )
      goto LABEL_106;
    v74 = (unsigned __int8)IsChocolateSvtEquip ^ 1;
  }
  else
  {
    v74 = 0;
  }
  IsChocolateSvtEquip = (UnityEngine_Component_o *)v73->fields.script;
  if ( !IsChocolateSvtEquip )
LABEL_106:
    sub_2213CDC(IsChocolateSvtEquip, v36);
  IsChocolateSvtEquip = (UnityEngine_Component_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                     (System_Collections_Generic_Dictionary_object__object__o *)IsChocolateSvtEquip,
                                                     (Il2CppObject *)StringLiteral_20591/*"freeShopCondId"*/,
                                                     (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  v75 = 1;
  if ( ((unsigned __int8)IsChocolateSvtEquip & 1) != 0 && (v11 & v72 & 1) == 0 )
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_106;
    IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__IsAfterTheFreeShopReleaseDate(
                                                       (ShopEntity_o *)IsChocolateSvtEquip,
                                                       0);
    v75 = ((unsigned __int8)IsChocolateSvtEquip & 1) == 0;
  }
  if ( v75 | v74 & 1 )
  {
LABEL_60:
    IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.freeExchangeConditionNoticeRoot;
    if ( IsChocolateSvtEquip )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 0, 0);
      return;
    }
    goto LABEL_106;
  }
  v76 = item->fields._Shop_k__BackingField;
  if ( !v76 )
    goto LABEL_106;
  IsChocolateSvtEquip = (UnityEngine_Component_o *)v76->fields.script;
  if ( !IsChocolateSvtEquip )
    goto LABEL_106;
  IsChocolateSvtEquip = (UnityEngine_Component_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                     (System_Collections_Generic_Dictionary_object__object__o *)IsChocolateSvtEquip,
                                                     (Il2CppObject *)StringLiteral_20592/*"freeShopCondMessage"*/,
                                                     (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !IsChocolateSvtEquip )
    goto LABEL_106;
  v77 = (Il2CppObject *)((__int64 (__fastcall *)(UnityEngine_Component_o *, const MethodInfo *))IsChocolateSvtEquip->klass->vtable._3_ToString.methodPtr)(
                          IsChocolateSvtEquip,
                          IsChocolateSvtEquip->klass->vtable._3_ToString.method);
  IsChocolateSvtEquip = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsChocolateSvtEquip )
    goto LABEL_106;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)IsChocolateSvtEquip,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v36, v78);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  IsChocolateSvtEquip = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v36, v78);
    IsChocolateSvtEquip = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
  }
  v80 = item->fields._Shop_k__BackingField;
  if ( !v80 )
    goto LABEL_106;
  if ( !MasterData_object )
    goto LABEL_106;
  IsChocolateSvtEquip = (UnityEngine_Component_o *)UserShopMaster__GetEntityDefinitely(
                                                     (UserShopMaster_o *)MasterData_object,
                                                     *(_QWORD *)(IsChocolateSvtEquip[7].fields.m_CachedPtr + 64),
                                                     v80->fields.id,
                                                     0);
  if ( !item->fields._Shop_k__BackingField )
    goto LABEL_106;
  v81 = (UserShopEntity_o *)IsChocolateSvtEquip;
  IsChocolateSvtEquip = (UnityEngine_Component_o *)ShopEntity__IsFulFilledFreeExchangeCondition(
                                                     item->fields._Shop_k__BackingField,
                                                     0);
  if ( !v81 )
    goto LABEL_106;
  if ( v81->fields.num )
  {
    IsChocolateSvtEquip = (UnityEngine_Component_o *)item->fields._Shop_k__BackingField;
    if ( !IsChocolateSvtEquip )
      goto LABEL_106;
    if ( !ShopEntity__IsPaidExchange((ShopEntity_o *)IsChocolateSvtEquip, 0) )
      goto LABEL_60;
    LOBYTE(IsChocolateSvtEquip) = UserShopEntity__get_IsReturnRarePriShop(v81, 0);
    v82 = (System_String_o **)&StringLiteral_12651/*"SHOP_PAID_EXCHANGE_CONDITIONS"*/;
    v83 = (System_String_o **)&StringLiteral_12553/*"SHOP_ACHIEVEMENT_PAID_EXCHANGE_CONDITIONS"*/;
  }
  else
  {
    v82 = (System_String_o **)&StringLiteral_12623/*"SHOP_FREE_EXCHANGE_CONDITIONS"*/;
    v83 = (System_String_o **)&StringLiteral_12552/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/;
  }
  v85 = ((unsigned __int8)IsChocolateSvtEquip & 1) == 0;
  IsChocolateSvtEquip = (UnityEngine_Component_o *)v6->fields.freeExchangeConditionNoticeRoot;
  if ( !v85 )
    v82 = v83;
  if ( !IsChocolateSvtEquip )
    goto LABEL_106;
  v86 = *v82;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsChocolateSvtEquip, 1, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v87, v88);
  v89 = LocalizationManager__Get(v86, 0);
  IsChocolateSvtEquip = (UnityEngine_Component_o *)System_String__Format(v89, v77, 0);
  if ( !v6->fields.freeExchangeConditionNoticeLabel )
    goto LABEL_106;
  UILabel__set_text(v6->fields.freeExchangeConditionNoticeLabel, (System_String_o *)IsChocolateSvtEquip, 0);
  freeExchangeConditionNoticeLabel = v6->fields.freeExchangeConditionNoticeLabel;
  if ( !freeExchangeConditionNoticeLabel )
    goto LABEL_106;
  mWidth = freeExchangeConditionNoticeLabel->fields.mWidth;
  freeExchangeConditionNoticeBgSprites = v6->fields.freeExchangeConditionNoticeBgSprites;
  v93 = mWidth >= 512 ? 512 : mWidth;
  if ( !freeExchangeConditionNoticeBgSprites )
    goto LABEL_106;
  max_length = freeExchangeConditionNoticeBgSprites->max_length;
  if ( max_length >= 1 )
  {
    v95 = 0;
    while ( 1 )
    {
      if ( v95 >= max_length )
        sub_2213CE4(IsChocolateSvtEquip);
      v96 = &freeExchangeConditionNoticeBgSprites->obj.klass + (int)v95;
      v97 = (UISprite_o *)v96[4];
      if ( !v97 )
        break;
      UIWidget__set_width((UIWidget_o *)v96[4], v93 + 16, 0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v98, v99);
      IsChocolateSvtEquip = (UnityEngine_Component_o *)AtlasManager__SetEventUI(
                                                         v97,
                                                         (System_String_o *)StringLiteral_21793/*"info_base"*/,
                                                         0);
      max_length = freeExchangeConditionNoticeBgSprites->max_length;
      if ( (int)++v95 >= max_length )
        return;
    }
    goto LABEL_106;
  }
}


void ShopBuyItemListViewItemDraw__SetItemIcon(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        const MethodInfo *method)
{
  void *itemIcon; // x0
  __int64 v8; // x2
  int32_t v9; // w21
  struct ShopEntity_o *Shop_k__BackingField; // x8
  struct System_Int32_array *targetIds; // x9
  __int64 v12; // x2
  struct ItemIconComponent_o *v13; // x9
  UISprite_o *iconSprite; // x19
  int32_t v15; // w20
  ItemIconComponent_o *v16; // x19
  int32_t imageId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596C7C7 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_AssistMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596C7C7 = 1;
  }
  itemIcon = this->fields.itemIcon;
  imageId = 0;
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
      sub_2213CDC(itemIcon, item);
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
    v9 = *((_DWORD *)itemIcon + 12);
    if ( v9 == 24 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, v8);
      itemIcon = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_AssistMaster___);
      Shop_k__BackingField = item->fields._Shop_k__BackingField;
      if ( !Shop_k__BackingField )
        goto LABEL_30;
      targetIds = Shop_k__BackingField->fields.targetIds;
      if ( !targetIds )
        goto LABEL_30;
      if ( !LODWORD(targetIds->max_length) )
        sub_2213CE4(itemIcon);
      if ( !itemIcon )
        goto LABEL_30;
      itemIcon = AssistMaster__GetNextPartsEntity(
                   (AssistMaster_o *)itemIcon,
                   targetIds->m_Items[0],
                   Shop_k__BackingField->fields.id,
                   0);
      v13 = this->fields.itemIcon;
      if ( !v13 || !itemIcon )
        goto LABEL_30;
      iconSprite = v13->fields.iconSprite;
      v15 = *((_DWORD *)itemIcon + 10);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item, v12);
      AtlasManager__SetSkillIcon(iconSprite, v15, 0);
    }
    else
    {
      v16 = this->fields.itemIcon;
      itemIcon = (void *)ShopEntity__get_TargetId((ShopEntity_o *)itemIcon, 0);
      if ( !v16 )
        goto LABEL_30;
      ItemIconComponent__SetPurchase(v16, v9, (int32_t)itemIcon, imageId, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemListViewItemDraw__SetLabelActive(
        ShopBuyItemListViewItemDraw_o *this,
        UILabel_o *label,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_596C7C0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C7C0 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label, isActive);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0)) == 0 )
      sub_2213CDC(gameObject, v7);
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

  if ( (byte_596C7C1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C7C1 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label, text);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( !v6 )
  {
    if ( !label )
      sub_2213CDC(v6, v7);
    WrapControlText__textAdjust(label, text, label->fields.mFontSize, 0, 0);
  }
}


void ShopBuyItemListViewItemDraw__SetListViewObject(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewObject_o *listViewObj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.listViewObject = listViewObj;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.listViewObject,
    (int32_t)listViewObj,
    (System_String_o *)method,
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
  const MethodInfo *v17; // x2
  int baseSprite; // w8
  UILabel_o *v19; // x21
  ShopBuyItemListViewItemDraw_o *v20; // x0
  const MethodInfo *v21; // x3
  struct ShopEntity_o *v22; // x8
  ShopEntity_o *Shop_k__BackingField; // x0
  bool v24; // w23
  UnityEngine_Object_o *anotherBuyable; // x21
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x3
  UnityEngine_Object_o *anotherPayItemImage; // x21
  UnityEngine_GameObject_o *v29; // x21
  struct ShopBuyItemListViewObject_o *listViewObject; // x9
  struct System_Int32_array *possessionAnotherItemIds; // x8
  __int64 naturalAligment; // x10
  unsigned int max_length; // w10
  int v34; // w9
  UISprite_o *v35; // x21
  int32_t v36; // w22
  UILabel_o *textOnMask; // x20
  ShopBuyItemListViewItemDraw_o *v38; // x0
  const MethodInfo *v39; // x3
  UILabel_o *v40; // x21
  __int64 *v41; // x8
  struct ShopEntity_o *v42; // x8
  struct ShopEntity_o *v43; // x8
  bool isQuestNotClearSet; // w8
  __int64 v45; // x2
  bool v46; // w20
  UISprite_o *maskSprite; // x1
  bool v48; // w2
  const MethodInfo *v49; // x3
  UILabel_o *v50; // x1
  ShopBuyItemListViewItemDraw_o *v51; // x2
  System_String_o *v52; // x22
  const MethodInfo *v53; // x1
  Il2CppObject *NameText; // x0
  struct ShopEntity_o *v55; // x8
  ShopReleaseMaster_o *v56; // x21
  struct ShopEntity_o *v57; // x8
  struct UISprite_o *v58; // x8
  struct ShopEntity_o *v59; // x8
  struct System_Int32_array *targetIds; // x8
  Il2CppObject *Entity; // x0
  struct ShopEntity_o *v62; // x8
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 *v65; // x8
  ShopBuyItemListViewItemDraw_o *v66; // x21
  __int64 v67; // x1
  __int64 v68; // x2
  struct ShopEntity_o *v69; // x8
  ShopReleaseMaster_o *v70; // x21
  __int64 v71; // x2
  struct ShopEntity_o *v72; // x8
  bool v73; // w0
  UILabel_o *v74; // x21
  __int64 *v75; // x8
  UILabel_o *v76; // x20
  struct ShopEntity_o *v77; // x8
  struct ShopEntity_o *v78; // x8
  __int64 v79; // x1
  __int64 v80; // x2
  struct ShopEntity_o *v81; // x8
  __int64 v82; // x1
  __int64 v83; // x2
  bool IsPreparationByCondType; // w21
  UnityEngine_Object_o *prepareTextOnMask; // x22
  const MethodInfo *v86; // x1
  __int64 v87; // x1
  __int64 v88; // x2
  UILabel_o *v89; // x19
  ShopBuyItemListViewItemDraw_o *v90; // x0
  const MethodInfo *v91; // x3
  ShopEntity_o *v92; // x0
  UILabel_o *v93; // x1
  const MethodInfo *v94; // x2
  System_Int32_array *v95; // [xsp+0h] [xbp-60h] BYREF
  int32_t questId; // [xsp+Ch] [xbp-54h] BYREF

  v16 = this;
  if ( (byte_596C7CE & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ShopReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ShopBuyItemListViewManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_12612/*"SHOP_CANT_BUY"*/);
    sub_2213A60(&StringLiteral_12654/*"SHOP_QUEST_OPEN"*/);
    sub_2213A60(&StringLiteral_12652/*"SHOP_QUEST_ALREADY_CLEARED"*/);
    sub_2213A60(&StringLiteral_3560/*"CLASS_BOARD_RESET_CANT_BUY_MSG_2"*/);
    sub_2213A60(&StringLiteral_3559/*"CLASS_BOARD_RESET_CANT_BUY_MSG_1"*/);
    sub_2213A60(&StringLiteral_20591/*"freeShopCondId"*/);
    sub_2213A60(&StringLiteral_5922/*"EVENT_REWARD_PARTS_GET_LIMIT"*/);
    sub_2213A60(&StringLiteral_12589/*"SHOP_BUY_ITEM_HAVE_LIMIT"*/);
    sub_2213A60(&StringLiteral_12650/*"SHOP_NOT_RELEASE_SET_ITEM"*/);
    sub_2213A60(&StringLiteral_6086/*"EX_ROOM_SHOP_SOLD_OUT"*/);
    sub_2213A60(&StringLiteral_12583/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_2213A60(&StringLiteral_12556/*"SHOP_ALREADY_GET"*/);
    byte_596C7CE = 1;
  }
  questId = 0;
  v95 = 0;
  if ( !isInPreparation )
  {
    if ( !item )
      goto LABEL_193;
    Shop_k__BackingField = item->fields._Shop_k__BackingField;
    if ( Shop_k__BackingField
      && ShopEntity__IsSoldOut(Shop_k__BackingField, 0)
      && !item->fields._IsNotHavingShopItemReceived_k__BackingField )
    {
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_193;
      v24 = !ShopEntity__IsAnotherItemBuyable((ShopEntity_o *)this, &v95, 0);
    }
    else
    {
      v24 = 0;
    }
    anotherBuyable = (UnityEngine_Object_o *)v16->fields.anotherBuyable;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isInPreparation);
    this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(anotherBuyable, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      anotherPayItemImage = (UnityEngine_Object_o *)v16->fields.anotherPayItemImage;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v26);
      this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(anotherPayItemImage, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
        if ( !this )
          goto LABEL_193;
        v29 = v16->fields.anotherBuyable;
        this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsAnotherItemBuyable(
                                                  (ShopEntity_o *)this,
                                                  &v16->fields.possessionAnotherItemIds,
                                                  0);
        if ( !v29 )
          goto LABEL_193;
        UnityEngine_GameObject__SetActive(v29, (unsigned __int8)this & 1, 0);
        this = (ShopBuyItemListViewItemDraw_o *)BasicHelper__IsNullOrEmpty(
                                                  (System_Collections_ICollection_o *)v16->fields.possessionAnotherItemIds,
                                                  0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          listViewObject = v16->fields.listViewObject;
          if ( !listViewObject )
            goto LABEL_193;
          possessionAnotherItemIds = v16->fields.possessionAnotherItemIds;
          if ( !possessionAnotherItemIds )
            goto LABEL_193;
          this = (ShopBuyItemListViewItemDraw_o *)listViewObject->fields.manager;
          if ( !this )
            goto LABEL_193;
          naturalAligment = ShopBuyItemListViewManager_TypeInfo->_2.naturalAligment;
          if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
            || (ShopBuyItemListViewManager_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != ShopBuyItemListViewManager_TypeInfo )
          {
            sub_221405C(this, ShopBuyItemListViewManager_TypeInfo, v26, v27);
            ShopBuyItemUtility__SetAddTextOnMask(v92, v93, v94);
            return;
          }
          max_length = possessionAnotherItemIds->max_length;
          v34 = *((_DWORD *)this + 128) % (int)max_length;
          if ( v34 >= max_length )
            goto LABEL_194;
          v35 = v16->fields.anotherPayItemImage;
          v36 = possessionAnotherItemIds->m_Items[v34];
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, ShopBuyItemListViewManager_TypeInfo, v26);
          this = (ShopBuyItemListViewItemDraw_o *)AtlasManager__SetItem(v35, v36, 0);
        }
      }
    }
    if ( v24 )
    {
      if ( item->fields._ShopKind_k__BackingField == 24 )
      {
        textOnMask = v16->fields.textOnMask;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v26);
        v38 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6086/*"EX_ROOM_SHOP_SOLD_OUT"*/, 0);
        ShopBuyItemListViewItemDraw__SetLabelText(v38, textOnMask, (System_String_o *)v38, v39);
      }
      else
      {
        ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(v16, item, v26);
      }
      maskSprite = v16->fields.maskSprite;
      v48 = 1;
      goto LABEL_67;
    }
    v42 = item->fields._Shop_k__BackingField;
    if ( !v42 || v42->fields.purchaseType != 6 )
    {
      maskSprite = v16->fields.maskSprite;
      v48 = 0;
LABEL_67:
      ShopBuyItemListViewItemDraw__SetSpriteActive(this, maskSprite, v48, v27);
      return;
    }
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_193;
    this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
    v43 = item->fields._Shop_k__BackingField;
    if ( !v43 || !this )
      goto LABEL_193;
    isQuestNotClearSet = ShopReleaseMaster__isQuestNotClearSet((ShopReleaseMaster_o *)this, v43->fields.id, &questId, 0);
    this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
    if ( isQuestNotClearSet )
    {
      if ( !this )
        goto LABEL_193;
      if ( !ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)this, 1, 0) )
      {
LABEL_63:
        v46 = 0;
LABEL_154:
        this = (ShopBuyItemListViewItemDraw_o *)v16->fields.maskSprite;
        if ( this )
        {
          this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v46, 0);
            return;
          }
        }
        goto LABEL_193;
      }
    }
    else
    {
      if ( !this )
        goto LABEL_193;
      if ( !ShopEntity__isExpireItemClosed((ShopEntity_o *)this, 0) )
        goto LABEL_63;
    }
    v76 = v16->fields.textOnMask;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v45);
    this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12654/*"SHOP_QUEST_OPEN"*/, 0);
    if ( !v76 )
      goto LABEL_193;
    UILabel__set_text(v76, (System_String_o *)this, 0);
    v46 = 1;
    goto LABEL_154;
  }
  ShopBuyItemListViewItemDraw__SetSpriteActive(this, v16->fields.maskSprite, 1, (const MethodInfo *)isNotServantGet);
  if ( !item )
    goto LABEL_193;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_193;
  baseSprite = (int)this->fields.baseSprite;
  if ( baseSprite > 6 )
  {
    if ( baseSprite <= 13 )
    {
      if ( baseSprite == 7 || baseSprite == 9 )
      {
LABEL_76:
        v40 = v16->fields.textOnMask;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v17);
        v41 = &StringLiteral_12556/*"SHOP_ALREADY_GET"*/;
LABEL_79:
        this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v41, 0);
LABEL_80:
        v50 = v40;
        v51 = this;
LABEL_180:
        ShopBuyItemListViewItemDraw__SetLabelText(this, v50, (System_String_o *)v51, v49);
        goto LABEL_181;
      }
      goto LABEL_87;
    }
    if ( baseSprite != 14 )
    {
      if ( baseSprite != 23 )
      {
        if ( baseSprite == 24 )
        {
          if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, 0) )
            goto LABEL_181;
          v40 = v16->fields.textOnMask;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v17);
          v41 = &StringLiteral_5922/*"EVENT_REWARD_PARTS_GET_LIMIT"*/;
          goto LABEL_79;
        }
        goto LABEL_87;
      }
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, v17);
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
      v69 = item->fields._Shop_k__BackingField;
      if ( !v69 )
        goto LABEL_193;
      v70 = (ShopReleaseMaster_o *)this;
      if ( !this )
        goto LABEL_193;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                (ShopReleaseMaster_o *)this,
                                                v69->fields.id,
                                                1,
                                                0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v72 = item->fields._Shop_k__BackingField;
        if ( !v72 )
          goto LABEL_193;
        v73 = ShopReleaseMaster__CondClearCheck(v70, v72->fields.id, 113, 0);
        v74 = v16->fields.textOnMask;
        if ( v73 )
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v71);
          v75 = &StringLiteral_3559/*"CLASS_BOARD_RESET_CANT_BUY_MSG_1"*/;
LABEL_170:
          this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v75, 0);
LABEL_171:
          v51 = this;
LABEL_172:
          v50 = v74;
          goto LABEL_180;
        }
      }
      else
      {
        v74 = v16->fields.textOnMask;
      }
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v71);
      this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3560/*"CLASS_BOARD_RESET_CANT_BUY_MSG_2"*/, 0);
      v77 = item->fields._Shop_k__BackingField;
      if ( !v77 )
        goto LABEL_193;
      this = (ShopBuyItemListViewItemDraw_o *)System_String__Format(
                                                (System_String_o *)this,
                                                (Il2CppObject *)v77->fields.name,
                                                0);
      goto LABEL_171;
    }
    if ( !isNotServantGet && !isNotServantHaving && !isServantHaving && !isNotCostumeGet && !isNotCommandCodeGet )
      goto LABEL_181;
    if ( ShopEntity__GetFreeShopCondId((ShopEntity_o *)this, 0) >= 1 )
    {
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_193;
      if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, 0) )
        goto LABEL_132;
    }
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, v17);
    this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
    v78 = item->fields._Shop_k__BackingField;
    if ( !v78 || !this )
      goto LABEL_193;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                              (ShopReleaseMaster_o *)this,
                                              v78->fields.id,
                                              1,
                                              0);
    v74 = v16->fields.textOnMask;
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v51 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_1/*""*/;
      goto LABEL_172;
    }
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v79, v80);
    v75 = &StringLiteral_12556/*"SHOP_ALREADY_GET"*/;
    goto LABEL_170;
  }
  if ( baseSprite <= 3 )
  {
    if ( baseSprite == 1 )
    {
      if ( ShopEntity__IsItemMaxButShopAvailable((ShopEntity_o *)this, 0) )
      {
        v40 = v16->fields.textOnMask;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v17);
        v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12589/*"SHOP_BUY_ITEM_HAVE_LIMIT"*/, 0);
        NameText = (Il2CppObject *)ShopBuyItemListViewItem__get_NameText(item, v53);
        this = (ShopBuyItemListViewItemDraw_o *)System_String__Format(v52, NameText, 0);
        goto LABEL_80;
      }
    }
    else if ( baseSprite == 2 )
    {
      if ( !ShopEntity__IsSoldOut((ShopEntity_o *)this, 0) )
        goto LABEL_76;
      this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
      if ( !this )
        goto LABEL_193;
      if ( ShopEntity__GetFreeShopCondId((ShopEntity_o *)this, 0) < 1 )
        goto LABEL_76;
LABEL_132:
      ShopBuyItemListViewItemDraw__SetReplacedTextOnMask(v16, item, v17);
      goto LABEL_181;
    }
LABEL_87:
    if ( !isNotServantGet && !isNotServantHaving && !isServantHaving && !isNotCostumeGet && !isNotCommandCodeGet )
      goto LABEL_181;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, v17);
    this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
    v55 = item->fields._Shop_k__BackingField;
    if ( !v55 )
      goto LABEL_193;
    v56 = (ShopReleaseMaster_o *)this;
    if ( !this )
      goto LABEL_193;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                              (ShopReleaseMaster_o *)this,
                                              v55->fields.id,
                                              1,
                                              0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_99;
    v57 = item->fields._Shop_k__BackingField;
    if ( !v57 )
      goto LABEL_193;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(v56, v57->fields.id, 40, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_99:
      v50 = v16->fields.textOnMask;
      v51 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_1/*""*/;
      goto LABEL_180;
    }
    goto LABEL_76;
  }
  if ( baseSprite == 4 )
  {
    v58 = this->fields.maskSprite;
    if ( !v58 )
      goto LABEL_193;
    if ( LODWORD(v58->fields.m_CancellationTokenSource) )
    {
      if ( !LODWORD(v58->fields.leftAnchor) )
      {
LABEL_111:
        if ( !isNotServantGet && !isNotServantHaving && !isServantHaving && !isNotCostumeGet && !isNotCommandCodeGet )
          goto LABEL_181;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, v17);
        this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
        v62 = item->fields._Shop_k__BackingField;
        if ( v62 && this )
        {
          this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__CondClearCheck(
                                                    (ShopReleaseMaster_o *)this,
                                                    v62->fields.id,
                                                    40,
                                                    0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v51 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_1/*""*/;
LABEL_179:
            v50 = v16->fields.textOnMask;
            goto LABEL_180;
          }
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v63, v64);
          v65 = &StringLiteral_12556/*"SHOP_ALREADY_GET"*/;
LABEL_178:
          this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v65, 0);
          v51 = this;
          goto LABEL_179;
        }
LABEL_193:
        sub_2213CDC(this, item);
      }
      this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_193;
      this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
      v59 = item->fields._Shop_k__BackingField;
      if ( !v59 )
        goto LABEL_193;
      targetIds = v59->fields.targetIds;
      if ( !targetIds )
        goto LABEL_193;
      if ( LODWORD(targetIds->max_length) )
      {
        if ( !this )
          goto LABEL_193;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   targetIds->m_Items[0],
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Entity
          && ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0)
          && item->fields._ShopKind_k__BackingField != 6 )
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v17);
          v65 = &StringLiteral_12612/*"SHOP_CANT_BUY"*/;
          goto LABEL_178;
        }
        goto LABEL_111;
      }
    }
LABEL_194:
    sub_2213CE4(this);
  }
  if ( baseSprite == 5 )
  {
    v66 = **(ShopBuyItemListViewItemDraw_o ***)(qword_5984390 + 184);
    this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v67, v68);
      this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12650/*"SHOP_NOT_RELEASE_SET_ITEM"*/, 0);
      v66 = this;
    }
    v50 = v16->fields.textOnMask;
    v51 = v66;
    goto LABEL_180;
  }
  if ( !ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)this, 0, 0) )
    goto LABEL_181;
  v19 = v16->fields.textOnMask;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v17);
  v20 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12652/*"SHOP_QUEST_ALREADY_CLEARED"*/, 0);
  ShopBuyItemListViewItemDraw__SetLabelText(v20, v19, (System_String_o *)v20, v21);
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_193;
  this = (ShopBuyItemListViewItemDraw_o *)ShopEntity__IsSoldOut((ShopEntity_o *)this, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v22 = item->fields._Shop_k__BackingField;
    if ( !v22 )
      goto LABEL_193;
    this = (ShopBuyItemListViewItemDraw_o *)v22->fields.script;
    if ( !this )
      goto LABEL_193;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)this,
           (Il2CppObject *)StringLiteral_20591/*"freeShopCondId"*/,
           (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      goto LABEL_132;
    }
  }
LABEL_181:
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, v17);
  this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  v81 = item->fields._Shop_k__BackingField;
  if ( !v81 || !this )
    goto LABEL_193;
  IsPreparationByCondType = ShopReleaseMaster__IsPreparationByCondType(
                              (ShopReleaseMaster_o *)this,
                              v81->fields.id,
                              82,
                              0);
  prepareTextOnMask = (UnityEngine_Object_o *)v16->fields.prepareTextOnMask;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v82, v83);
  if ( UnityEngine_Object__op_Inequality(prepareTextOnMask, 0, 0)
    && !(IsPreparationByCondType | !ShopBuyItemListViewItem__IsPrepareTextOnMask(item, v86)) )
  {
    v89 = v16->fields.prepareTextOnMask;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v87, v88);
    v90 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12583/*"SHOP_BUY_EVENTSHOP_PREPARATION"*/, 0);
    ShopBuyItemListViewItemDraw__SetLabelText(v90, v89, (System_String_o *)v90, v91);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v19; // x2
  UILabel_o *v20; // x21
  System_String_o *v21; // x22
  System_String_o *v22; // x0
  ShopBuyItemListViewItemDraw_o *v23; // x0
  const MethodInfo *v24; // x3
  bool v25; // w0
  const MethodInfo *v26; // x1
  __int64 v27; // x2
  UICrossNarrowLabel_o *v28; // x20
  System_String_o *v29; // x19
  LocalizationManager_c *v30; // x0
  UICrossNarrowLabel_o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  System_String_o *v34; // x22
  UILabel_o *v35; // x20
  const MethodInfo *v36; // x1
  System_String_o *DetailText; // x0
  System_String_o *v38; // x0
  bool IsNullOrEmpty; // w0
  const MethodInfo *v40; // x1
  __int64 v41; // x2
  ShopBuyItemListViewItemDraw_o *nameTextLabel; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  System_String_o *NameText; // x19
  System_String_o *v46; // x0
  System_String_o *value; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *message; // [xsp+8h] [xbp-48h] BYREF

  v10 = this;
  value = preparationItemName;
  message = preparationMessage;
  if ( (byte_596C7C8 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_16464/*"[000000]"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_2213A60(&StringLiteral_26984/*"？"*/);
    byte_596C7C8 = 1;
  }
  if ( isInPreparation )
  {
    messageTextLabel = v10->fields.messageTextLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, isInPreparation);
    v12 = LocalizationManager__ReplaceCommonTag(preparationMessage, 0, 0);
    v13 = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_75651716(
                                             (System_String_o *)StringLiteral_16464/*"[000000]"*/,
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
            v15 = (ShopBuyItemListViewItemDraw_o *)StringLiteral_26984/*"？"*/;
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
            NameText = ShopBuyItemListViewItem__get_NameText(item, v40);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43, v44);
            v46 = NameText;
          }
          else
          {
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40, v41);
            v46 = preparationItemName;
          }
          this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v46, 0, 0);
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
    sub_2213CDC(this, item);
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
      v20 = v10->fields.messageTextLabel;
      v21 = message;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v19);
      v22 = LocalizationManager__ReplaceCommonTag(v21, 0, 0);
      v23 = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_75651716(
                                               (System_String_o *)StringLiteral_16464/*"[000000]"*/,
                                               v22,
                                               0);
      ShopBuyItemListViewItemDraw__SetLabelText(v23, v20, (System_String_o *)v23, v24);
      v25 = System_String__IsNullOrEmpty(value, 0);
      v28 = v10->fields.nameTextLabel;
      if ( v25 )
      {
        v29 = ShopBuyItemListViewItem__get_NameText(item, v26);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        {
          v30 = LocalizationManager_TypeInfo;
LABEL_39:
          j_il2cpp_runtime_class_init_0(v30, v26, v27);
        }
      }
      else
      {
        v30 = LocalizationManager_TypeInfo;
        v29 = value;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          goto LABEL_39;
      }
      this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v29, 0, 0);
      if ( !v28 )
        goto LABEL_42;
      UICrossNarrowLabel__SetCrossNarrowText(v28, (System_String_o *)this, 0);
      return;
    }
  }
  v31 = v10->fields.nameTextLabel;
  v34 = ShopBuyItemListViewItem__get_NameText(item, v16);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32, v33);
  this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__ReplaceCommonTag(v34, 0, 0);
  if ( !v31 )
    goto LABEL_42;
  UICrossNarrowLabel__SetCrossNarrowText(v31, (System_String_o *)this, 0);
  v35 = v10->fields.messageTextLabel;
  DetailText = ShopBuyItemListViewItem__get_DetailText(item, v36);
  v38 = LocalizationManager__ReplaceCommonTag(DetailText, 0, 0);
  this = (ShopBuyItemListViewItemDraw_o *)System_String__Concat_75651716((System_String_o *)StringLiteral_16464/*"[000000]"*/, v38, 0);
  if ( !v35 )
    goto LABEL_42;
  UILabel__set_text(v35, (System_String_o *)this, 0);
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
  __int64 v9; // x1
  __int64 v10; // x2
  UILabel_o *numTitleLabel; // x21
  ShopBuyItemListViewItemDraw_o *v12; // x0
  const MethodInfo *v13; // x3
  ShopBuyItemListViewItemDraw_o *v14; // x0
  const MethodInfo *v15; // x3
  UILabel_o *numTextLabel; // x21
  int64_t HoldCount; // x0
  ShopBuyItemListViewItemDraw_o *NumberFormatLong; // x0
  const MethodInfo *v19; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v21; // x21
  ShopBuyItemListViewItemDraw_o *v22; // x0
  const MethodInfo *v23; // x3

  v6 = this;
  if ( (byte_596C7C9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ShopBuyItemListViewItemDraw__SetNumText_b__79_0__);
    this = (ShopBuyItemListViewItemDraw_o *)sub_2213A60(&StringLiteral_12590/*"SHOP_BUY_ITEM_HOLD"*/);
    byte_596C7C9 = 1;
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
    ShopBuyItemListViewItemDraw__SetLabelActive(v22, v6->fields.numTextLabel, 0, v23);
    return;
  }
  ShopBuyItemListViewItemDraw__SetLabelActive((ShopBuyItemListViewItemDraw_o *)v7, v6->fields.numTitleLabel, 1, v8);
  numTitleLabel = v6->fields.numTitleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
  v12 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12590/*"SHOP_BUY_ITEM_HOLD"*/, 0);
  ShopBuyItemListViewItemDraw__SetLabelText(v12, numTitleLabel, (System_String_o *)v12, v13);
  ShopBuyItemListViewItemDraw__SetLabelActive(v14, v6->fields.numTextLabel, 1, v15);
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
LABEL_18:
    sub_2213CDC(this, item);
  numTextLabel = v6->fields.numTextLabel;
  HoldCount = ShopEntity__getHoldCount((ShopEntity_o *)this, 0);
  NumberFormatLong = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__GetNumberFormatLong(HoldCount, 0);
  ShopBuyItemListViewItemDraw__SetLabelText(NumberFormatLong, numTextLabel, (System_String_o *)NumberFormatLong, v19);
  if ( item->fields._ShopKind_k__BackingField == 7 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
    v21 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v21, (Il2CppObject *)v6, Method_ShopBuyItemListViewItemDraw__SetNumText_b__79_0__, 0);
    StoneCountRefreshComponent__AttachToGameObject(gameObject, v21, 1, 0);
  }
}


void ShopBuyItemListViewItemDraw__SetPossessionInfo(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *possessionGrid; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *possessionNumLabel; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *coinNumLabel; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *coinIcon; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *treasureDeviceLevelLabel; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *summonedSprite; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *possessionBGSprite; // x21
  ShopEntity_o *Master_object; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  struct ShopEntity_o *Shop_k__BackingField; // x8
  unsigned int purchaseType; // w8
  int32_t v29; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x21
  int32_t v31; // w2
  __int64 v32; // x2
  Il2CppClass *klass; // x21
  void *monitor; // x22
  UIGrid_o *v35; // x20
  UILabel_o *v36; // x22
  UILabel_o *v37; // x23
  UILabel_o *v38; // x24
  UISprite_o *v39; // x25
  UISprite_o *v40; // x26
  UISprite_o *v41; // x19
  __int64 v42; // x1
  __int64 v43; // x2
  bool IsPossessionInfoDisp; // w27
  const MethodInfo *v45; // [xsp+8h] [xbp-68h]
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_596C7D9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ShopBuyItemUtility_TypeInfo);
    byte_596C7D9 = 1;
  }
  possessionGrid = (UnityEngine_Object_o *)this->fields.possessionGrid;
  entity = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, method);
  if ( !UnityEngine_Object__op_Equality(possessionGrid, 0, 0) )
  {
    possessionNumLabel = (UnityEngine_Object_o *)this->fields.possessionNumLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( !UnityEngine_Object__op_Equality(possessionNumLabel, 0, 0) )
    {
      coinNumLabel = (UnityEngine_Object_o *)this->fields.coinNumLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      if ( !UnityEngine_Object__op_Equality(coinNumLabel, 0, 0) )
      {
        coinIcon = (UnityEngine_Object_o *)this->fields.coinIcon;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
        if ( !UnityEngine_Object__op_Equality(coinIcon, 0, 0) )
        {
          treasureDeviceLevelLabel = (UnityEngine_Object_o *)this->fields.treasureDeviceLevelLabel;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
          if ( !UnityEngine_Object__op_Equality(treasureDeviceLevelLabel, 0, 0) )
          {
            summonedSprite = (UnityEngine_Object_o *)this->fields.summonedSprite;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
            if ( !UnityEngine_Object__op_Equality(summonedSprite, 0, 0) )
            {
              possessionBGSprite = (UnityEngine_Object_o *)this->fields.possessionBGSprite;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
              Master_object = (ShopEntity_o *)UnityEngine_Object__op_Equality(possessionBGSprite, 0, 0);
              if ( ((unsigned __int8)Master_object & 1) == 0 )
              {
                if ( !item )
                  goto LABEL_47;
                Shop_k__BackingField = item->fields._Shop_k__BackingField;
                if ( Shop_k__BackingField )
                {
                  purchaseType = Shop_k__BackingField->fields.purchaseType;
                  v29 = 0;
                  if ( purchaseType > 0x15 || ((1 << purchaseType) & 0x200110) == 0 )
                  {
LABEL_42:
                    Master_object = item->fields._Shop_k__BackingField;
                    if ( Master_object )
                    {
                      v35 = this->fields.possessionGrid;
                      v36 = this->fields.possessionNumLabel;
                      v37 = this->fields.coinNumLabel;
                      v38 = this->fields.treasureDeviceLevelLabel;
                      v40 = this->fields.summonedSprite;
                      v39 = this->fields.coinIcon;
                      v41 = this->fields.possessionBGSprite;
                      IsPossessionInfoDisp = ShopEntity__IsPossessionInfoDisp(Master_object, 0);
                      if ( !*(&ShopBuyItemUtility_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo, v42, v43);
                      ShopBuyItemUtility__SetPossessionInfo(
                        v29,
                        v35,
                        v36,
                        v37,
                        v39,
                        v38,
                        v40,
                        v41,
                        IsPossessionInfoDisp,
                        v45);
                      return;
                    }
LABEL_47:
                    sub_2213CDC(Master_object, v25);
                  }
                  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v25, v26);
                  Master_object = (ShopEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
                  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
                  if ( item->fields._Shop_k__BackingField )
                  {
                    Master_object = (ShopEntity_o *)ShopEntity__get_TargetId(item->fields._Shop_k__BackingField, 0);
                    v31 = (int)Master_object;
                  }
                  else
                  {
                    v31 = 0;
                  }
                  if ( !v30 )
                    goto LABEL_47;
                  if ( DataMasterBase_object__object__int___TryGetEntity(
                         v30,
                         &entity,
                         v31,
                         (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
                      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v32);
                      *(_QWORD *)&v47.fields.currentCryptoKey = klass;
                      *(_QWORD *)&v47.fields.fakeValue = monitor;
                      v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v47, 0);
                      goto LABEL_42;
                    }
                  }
                }
                v29 = 0;
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
  int32_t v15; // w2
  int32_t v16; // w3
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
  __int64 v55; // x1
  __int64 v56; // x2
  const MethodInfo *v57; // x3
  ShopEntity_o *v58; // x0
  struct ItemEntity_o *v59; // x8
  ShopEntity_o *v60; // x0
  int32_t v61; // w20
  struct ItemEntity_o *v62; // x8
  UILabel_o **p_LineText2digit; // x8

  v6 = this;
  if ( (byte_596C7D0 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    this = (ShopBuyItemListViewItemDraw_o *)sub_2213A60(&StringLiteral_12620/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/);
    byte_596C7D0 = 1;
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
        max_length = CommonConsumeEntities_k__BackingField->max_length;
      }
      if ( (max_length & 0xFFFFFFFE) == 0 )
        goto LABEL_106;
      if ( !CommonConsumeEntities_k__BackingField->m_Items[1] )
        return;
      priceIconLabel = (ShopBuyItemListViewItemDraw_o *)v6->fields.priceIconLabel2;
      this = (ShopBuyItemListViewItemDraw_o *)ShopBuyItemListViewItem__get_PriceIcon(item, (const MethodInfo *)item);
      if ( (CommonConsumeEntities_k__BackingField->max_length & 0xFFFFFFFE) == 0 )
LABEL_106:
        sub_2213CE4(this);
      v12 = (int)this;
      this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntities_k__BackingField->m_Items[1];
      if ( !this )
        goto LABEL_105;
    }
    v38 = (int32_t)this->fields.rangeSprite;
    this = (ShopBuyItemListViewItemDraw_o *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0);
    if ( !priceIconLabel )
      goto LABEL_105;
    v16 = (int)this;
    this = priceIconLabel;
    v14 = v12;
    v15 = v38;
    goto LABEL_69;
  }
  if ( bandSprite_high == 13 )
  {
    priceLabelFree = v6->fields.priceLabelFree;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, isInPreparation);
    this = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12620/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, 0);
    if ( priceLabelFree )
    {
      UILabel__set_text(priceLabelFree, (System_String_o *)this, 0);
      return;
    }
LABEL_105:
    sub_2213CDC(this, item);
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
        if ( (v22->max_length & 0xFFFFFFFE) != 0 )
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
        if ( (v41->max_length & 0xFFFFFFFE) != 0 )
        {
          if ( !v44 )
            goto LABEL_105;
          v16 = v41->m_Items[1];
          v15 = (int)this;
          this = v44;
          v14 = v47;
          goto LABEL_69;
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
    v15 = 0;
    v16 = -1;
LABEL_69:
    UIIconLabel__SetPurchaseDecision((UIIconLabel_o *)this, v14, v15, v16, 0);
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
      goto LABEL_86;
    }
    goto LABEL_106;
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
LABEL_86:
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_105;
  if ( ShopEntity__IsSetStrikethrough((ShopEntity_o *)this, isInPreparation, 0) )
  {
    v58 = item->fields._Shop_k__BackingField;
    if ( v58 )
    {
      v58 = (ShopEntity_o *)ShopEntity__GetPrice(v58, 0);
      if ( !(_DWORD)v58 )
        goto LABEL_103;
    }
    else
    {
      v59 = item->fields.itemEntity;
      if ( !v59 )
        goto LABEL_103;
      v58 = (ShopEntity_o *)(unsigned int)v59->fields.sellQp;
      if ( !(_DWORD)v58 )
        goto LABEL_103;
    }
    v60 = item->fields._Shop_k__BackingField;
    if ( v60 )
    {
      v61 = ShopEntity__GetPrice(v60, 0);
    }
    else
    {
      v62 = item->fields.itemEntity;
      if ( v62 )
        v61 = v62->fields.sellQp;
      else
        v61 = 0;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v55, v56);
    if ( (int)log10((double)v61) )
    {
      p_LineText2digit = &v6->fields.LineText2digit;
LABEL_104:
      ShopBuyItemListViewItemDraw__SetLabelActive((ShopBuyItemListViewItemDraw_o *)v58, *p_LineText2digit, 1, v57);
      return;
    }
LABEL_103:
    p_LineText2digit = &v6->fields.LineText;
    goto LABEL_104;
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
  __int64 v9; // x2
  ShopBuyItemListViewItemDraw_o *v10; // x0
  const MethodInfo *v11; // x3
  __int64 v12; // x1
  __int64 v13; // x2
  bool IsPaidExchange; // w20
  System_String_o **v15; // x8
  ShopBuyItemListViewItemDraw_o *v16; // x0
  const MethodInfo *v17; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_596C7CF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_12653/*"SHOP_QUEST_FREE_EXCHANGE_CLEARED"*/);
    sub_2213A60(&StringLiteral_12655/*"SHOP_QUEST_PAID_EXCHANGE_CLEARED"*/);
    sub_2213A60(&StringLiteral_20591/*"freeShopCondId"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_2213A60(&StringLiteral_12556/*"SHOP_ALREADY_GET"*/);
    byte_596C7CF = 1;
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
        this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_32;
        this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
        v7 = item->fields._Shop_k__BackingField;
        if ( !v7 )
          goto LABEL_32;
        targetIds = v7->fields.targetIds;
        if ( !targetIds )
          goto LABEL_32;
        if ( !LODWORD(targetIds->max_length) )
          sub_2213CE4(this);
        if ( !this )
          goto LABEL_32;
        this = (ShopBuyItemListViewItemDraw_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  &entity,
                                                  targetIds->m_Items[0],
                                                  (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (ShopBuyItemListViewItemDraw_o *)entity;
          if ( !entity )
            goto LABEL_32;
          this = (ShopBuyItemListViewItemDraw_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v9);
            v10 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12556/*"SHOP_ALREADY_GET"*/, 0);
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
              (Il2CppObject *)StringLiteral_20591/*"freeShopCondId"*/,
              (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
          v15 = (System_String_o **)&StringLiteral_12655/*"SHOP_QUEST_PAID_EXCHANGE_CLEARED"*/;
          if ( !IsPaidExchange )
            v15 = (System_String_o **)&StringLiteral_12653/*"SHOP_QUEST_FREE_EXCHANGE_CLEARED"*/;
          v16 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get(*v15, 0);
          ShopBuyItemListViewItemDraw__SetLabelText(v16, v4->fields.textOnMask, (System_String_o *)v16, v17);
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
    sub_2213CDC(this, item);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  ShopEntity_o *Shop_k__BackingField; // x0
  int32_t PurchaseLimitNum; // w8
  ShopEntity_o *v20; // x0
  int v21; // w21
  ShopEntity_o *v22; // x0
  int v23; // w8
  UILabel_o *restCountLabel; // x19
  __int64 *v25; // x8
  struct ShopEntity_o *v26; // x8
  ShopBuyItemListViewItemDraw_o *v27; // x0
  const MethodInfo *v28; // x3
  System_String_o *v29; // x20
  int32_t v30; // w0
  struct ShopEntity_o *v31; // x8
  ShopReleaseMaster_o *v32; // x26
  struct ShopEntity_o *v33; // x8
  struct ShopEntity_o *v34; // x8
  struct ShopEntity_o *v35; // x8
  bool v36; // w8
  Il2CppObject *NumberFormat; // x1
  System_String_o *v38; // x0
  struct ShopEntity_o *v39; // x8
  struct ShopEntity_o *v40; // x8
  _BOOL4 v41; // w8
  int32_t v42; // w20
  System_String_o *v43; // x21

  v16 = this;
  if ( (byte_596C7CA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_12594/*"SHOP_BUY_PREPARATION"*/);
    sub_2213A60(&StringLiteral_8687/*"LOTTERY_REST_NUM"*/);
    sub_2213A60(&StringLiteral_15416/*"UNIT_REST_NONE"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_2213A60(&StringLiteral_4004/*"COUNT_INFO"*/);
    byte_596C7CA = 1;
  }
  *isNotServantGet = 0;
  *isNotServantHaving = 0;
  *isServantHaving = 0;
  *isNotCostumeGet = 0;
  *isNotCommandCodeGet = 0;
  if ( !isInPreparation )
  {
    if ( !item )
      goto LABEL_66;
LABEL_11:
    Shop_k__BackingField = item->fields._Shop_k__BackingField;
    if ( !Shop_k__BackingField )
    {
LABEL_39:
      restCountLabel = v16->fields.restCountLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, isInPreparation);
      v25 = &StringLiteral_15416/*"UNIT_REST_NONE"*/;
      goto LABEL_42;
    }
    PurchaseLimitNum = ShopEntity__GetPurchaseLimitNum(Shop_k__BackingField, 0);
    v20 = item->fields._Shop_k__BackingField;
    if ( PurchaseLimitNum <= 0 )
    {
      if ( v20 )
      {
        if ( ShopEntity__IsSoldOut(v20, 0) )
          goto LABEL_9;
        v26 = item->fields._Shop_k__BackingField;
        if ( v26 )
        {
          if ( v26->fields.purchaseType == 16 )
          {
            restCountLabel = v16->fields.restCountLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, isInPreparation);
            v25 = &StringLiteral_8687/*"LOTTERY_REST_NUM"*/;
            goto LABEL_42;
          }
        }
      }
      goto LABEL_39;
    }
    if ( v20 )
      LODWORD(v20) = ShopEntity__GetPurchaseLimitNum(v20, 0);
    v21 = (_DWORD)v20 - item->fields._TotalNum_k__BackingField;
    if ( v21 < 1 || (v22 = item->fields._Shop_k__BackingField) != 0 && ShopEntity__IsSoldOut(v22, 0) )
    {
      if ( !item->fields._IsNotHavingShopItemReceived_k__BackingField )
        goto LABEL_9;
      goto LABEL_39;
    }
    restCountLabel = v16->fields.restCountLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, isInPreparation);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_4004/*"COUNT_INFO"*/, 0);
    v30 = v21;
    goto LABEL_59;
  }
  if ( !item )
    goto LABEL_66;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_66;
  baseSprite = (unsigned int)this->fields.baseSprite;
  if ( baseSprite > 9 || ((1 << baseSprite) & 0x2E0) == 0 )
  {
    this = (ShopBuyItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_66;
    this = (ShopBuyItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
    v31 = item->fields._Shop_k__BackingField;
    if ( !v31 )
      goto LABEL_66;
    v32 = (ShopReleaseMaster_o *)this;
    if ( !this )
      goto LABEL_66;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(
                                              (ShopReleaseMaster_o *)this,
                                              v31->fields.id,
                                              38,
                                              0);
    *isNotServantGet = (unsigned __int8)this & 1;
    v33 = item->fields._Shop_k__BackingField;
    if ( !v33 )
      goto LABEL_66;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v32, v33->fields.id, 41, 0);
    *isNotServantHaving = (unsigned __int8)this & 1;
    v34 = item->fields._Shop_k__BackingField;
    if ( !v34 )
      goto LABEL_66;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v32, v34->fields.id, 40, 0);
    *isServantHaving = (unsigned __int8)this & 1;
    v35 = item->fields._Shop_k__BackingField;
    if ( !v35 )
      goto LABEL_66;
    this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v32, v35->fields.id, 78, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v36 = 1;
    }
    else
    {
      v39 = item->fields._Shop_k__BackingField;
      if ( !v39 )
        goto LABEL_66;
      this = (ShopBuyItemListViewItemDraw_o *)ShopReleaseMaster__isExistCondType(v32, v39->fields.id, 79, 0);
      v36 = (unsigned __int8)this & 1;
    }
    *isNotCostumeGet = v36;
    v40 = item->fields._Shop_k__BackingField;
    if ( !v40 )
      goto LABEL_66;
    *isNotCommandCodeGet = ShopReleaseMaster__isExistCondType(v32, v40->fields.id, 108, 0);
    this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
    if ( !this )
      goto LABEL_66;
  }
  if ( ShopEntity__IsSoldOut((ShopEntity_o *)this, 0) )
  {
LABEL_9:
    ShopBuyItemListViewItemDraw__ShowSoldOut(v16, item, (const MethodInfo *)isInPreparation);
    return;
  }
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
LABEL_66:
    sub_2213CDC(this, item);
  v23 = (int)this->fields.baseSprite;
  if ( v23 <= 5 )
  {
    if ( v23 == 2 )
      goto LABEL_9;
    if ( v23 == 5 )
      goto LABEL_45;
  }
  else
  {
    if ( v23 == 9 || v23 == 7 )
      goto LABEL_45;
    if ( v23 == 6 )
    {
      if ( !ShopEntity__isQuestNotClearItemClosed((ShopEntity_o *)this, 0, 0) )
        goto LABEL_26;
LABEL_45:
      restCountLabel = v16->fields.restCountLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, isInPreparation);
      v29 = LocalizationManager__Get((System_String_o *)StringLiteral_4004/*"COUNT_INFO"*/, 0);
      v30 = 0;
LABEL_59:
      NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v30, 0);
      v38 = v29;
LABEL_60:
      v27 = (ShopBuyItemListViewItemDraw_o *)System_String__Format(v38, NumberFormat, 0);
      goto LABEL_61;
    }
  }
  if ( *isNotServantGet )
  {
    v41 = *isServantHaving;
    goto LABEL_70;
  }
  v41 = *isServantHaving;
  if ( *isNotServantHaving )
  {
LABEL_70:
    if ( v41 )
    {
LABEL_71:
      v42 = ShopEntity__GetPurchaseLimitNum((ShopEntity_o *)this, 0);
LABEL_77:
      restCountLabel = v16->fields.restCountLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, isInPreparation);
      v43 = LocalizationManager__Get((System_String_o *)StringLiteral_4004/*"COUNT_INFO"*/, 0);
      NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v42, 0);
      v38 = v43;
      goto LABEL_60;
    }
    goto LABEL_76;
  }
  if ( *isServantHaving )
    goto LABEL_71;
  if ( *isNotCostumeGet )
  {
    v42 = 0;
    goto LABEL_77;
  }
  if ( *isNotCommandCodeGet )
  {
LABEL_76:
    v42 = *isNotServantHaving;
    goto LABEL_77;
  }
LABEL_26:
  if ( ShopBuyItemListViewItem__IsPrepareTextOnMask(item, (const MethodInfo *)item) )
    goto LABEL_11;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_66;
  if ( ShopEntity__IsItemMaxButShopAvailable((ShopEntity_o *)this, 0) )
    goto LABEL_11;
  restCountLabel = v16->fields.restCountLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, isInPreparation);
  v25 = &StringLiteral_12594/*"SHOP_BUY_PREPARATION"*/;
LABEL_42:
  v27 = (ShopBuyItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v25, 0);
LABEL_61:
  ShopBuyItemListViewItemDraw__SetLabelText(v27, restCountLabel, (System_String_o *)v27, v28);
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemListViewItemDraw__SetReturnButton(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        bool isInPreparation,
        const MethodInfo *method)
{
  UnityEngine_Object_o *returnItemButton; // x22
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *returnItemButtonSprite; // x22
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *returnItemButtonLabel; // x22
  void *listViewObject; // x0
  __int64 v15; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x0
  unsigned int v17; // w21
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *returnItemButtonDragScroll; // x20
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  Il2CppClass *klass; // x1
  __int64 v28; // x1
  __int64 v29; // x2
  UILabel_o *v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  UISprite_o *v33; // x20
  ShopBuyItemListViewItemDraw_c *v34; // x0
  System_String_o *ReturnItemButtonSpriteName; // x21
  bool v36; // w1
  Il2CppObject *component; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596C7CD & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_TryGetComponent_UIDragScrollView___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ShopBuyItemListViewItemDraw_TypeInfo);
    sub_2213A60(&StringLiteral_11629/*"RETURN_ITEM_LIST_BUTTON_TEXT"*/);
    byte_596C7CD = 1;
  }
  returnItemButton = (UnityEngine_Object_o *)this->fields.returnItemButton;
  component = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isInPreparation);
  if ( !UnityEngine_Object__op_Equality(returnItemButton, 0, 0) )
  {
    returnItemButtonSprite = (UnityEngine_Object_o *)this->fields.returnItemButtonSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    if ( !UnityEngine_Object__op_Equality(returnItemButtonSprite, 0, 0) )
    {
      returnItemButtonLabel = (UnityEngine_Object_o *)this->fields.returnItemButtonLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
      listViewObject = (void *)UnityEngine_Object__op_Equality(returnItemButtonLabel, 0, 0);
      if ( ((unsigned __int8)listViewObject & 1) == 0 )
      {
        if ( !item )
          goto LABEL_42;
        Shop_k__BackingField = item->fields._Shop_k__BackingField;
        if ( !Shop_k__BackingField || Shop_k__BackingField->fields.purchaseType != 23 )
          goto LABEL_37;
        v17 = 3;
        if ( !isInPreparation )
        {
          if ( ShopEntity__IsSoldOut(Shop_k__BackingField, 0) )
            v17 = 3;
          else
            v17 = 0;
        }
        listViewObject = this->fields.returnItemButton;
        if ( !listViewObject )
          goto LABEL_42;
        (*(void (__fastcall **)(void *, _QWORD, __int64, _QWORD))(*(_QWORD *)listViewObject + 536LL))(
          listViewObject,
          v17,
          1,
          *(_QWORD *)(*(_QWORD *)listViewObject + 544LL));
        returnItemButtonDragScroll = (UnityEngine_Object_o *)this->fields.returnItemButtonDragScroll;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
        if ( !UnityEngine_Object__op_Inequality(returnItemButtonDragScroll, 0, 0) )
          goto LABEL_37;
        listViewObject = this->fields.listViewObject;
        if ( !listViewObject )
          goto LABEL_42;
        listViewObject = (void *)UnityEngine_Component__TryGetComponent_object_(
                                   (UnityEngine_Component_o *)listViewObject,
                                   &component,
                                   (const MethodInfo_3821BA4 *)Method_UnityEngine_Component_TryGetComponent_UIDragScrollView___);
        if ( ((unsigned __int8)listViewObject & 1) != 0 )
        {
          if ( component )
          {
            listViewObject = this->fields.returnItemButtonDragScroll;
            if ( listViewObject )
            {
              klass = component[2].klass;
              *((_QWORD *)listViewObject + 4) = klass;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)((char *)listViewObject + 32),
                (int32_t)klass,
                v21,
                v22,
                v23,
                v24,
                v25,
                v26);
              v30 = this->fields.returnItemButtonLabel;
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
              listViewObject = LocalizationManager__Get((System_String_o *)StringLiteral_11629/*"RETURN_ITEM_LIST_BUTTON_TEXT"*/, 0);
              if ( v30 )
              {
                UILabel__set_text(v30, (System_String_o *)listViewObject, 0);
                v33 = this->fields.returnItemButtonSprite;
                v34 = ShopBuyItemListViewItemDraw_TypeInfo;
                if ( !*(&ShopBuyItemListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(ShopBuyItemListViewItemDraw_TypeInfo, v31, v32);
                  v34 = ShopBuyItemListViewItemDraw_TypeInfo;
                }
                ReturnItemButtonSpriteName = v34->static_fields->ReturnItemButtonSpriteName;
                if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v31, v32);
                AtlasManager__SetShopBanner_47571044(v33, ReturnItemButtonSpriteName, 0);
                listViewObject = this->fields.returnItemButton;
                if ( listViewObject )
                {
                  listViewObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listViewObject, 0);
                  if ( listViewObject )
                  {
                    v36 = 1;
LABEL_40:
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewObject, v36, 0);
                    return;
                  }
                }
              }
            }
          }
        }
        else
        {
LABEL_37:
          listViewObject = this->fields.returnItemButton;
          if ( listViewObject )
          {
            listViewObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listViewObject, 0);
            if ( listViewObject )
            {
              v36 = 0;
              goto LABEL_40;
            }
          }
        }
LABEL_42:
        sub_2213CDC(listViewObject, v15);
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
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Master_object; // x22
  _BOOL8 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  __int64 v17; // x2
  Il2CppObject *v18; // x22
  UserShopEntity_o *EntityDefinitely; // x21
  __int64 v20; // x2
  const MethodInfo *v21; // x3
  char v22; // w8
  bool v23; // w20
  int32_t resetLimitNum; // w9
  __int64 *v25; // x8
  System_String_o *v26; // x2
  int v27; // w9
  System_Int32_array *v28; // [xsp+0h] [xbp-50h] BYREF
  ShopResetEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_596C7D8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ShopResetMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserShopMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_12613/*"SHOP_CAN_NOT_RESET_NOTICE_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12615/*"SHOP_CAN_RESET_NOTICE_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12614/*"SHOP_CAN_NOT_RESET_SOLD_OUT_NOTICE_MESSAGE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C7D8 = 1;
  }
  shopResetNoticeLabel = (UnityEngine_Object_o *)this->fields.shopResetNoticeLabel;
  v28 = 0;
  entity = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, shopEntity, method);
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
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v11);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopResetMaster___);
      IsSoldOut = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( IsSoldOut )
      {
        if ( Master_object )
        {
          v13 = ShopResetMaster__TryGetEntity(
                  (ShopResetMaster_o *)Master_object,
                  &entity,
                  baseShopId,
                  *((_DWORD *)IsSoldOut + 25),
                  0);
          if ( !v13 )
          {
            v23 = 0;
LABEL_44:
            ShopBuyItemListViewItemDraw__SetLabelActive(
              (ShopBuyItemListViewItemDraw_o *)v13,
              this->fields.shopResetNoticeLabel,
              v23,
              v16);
            return;
          }
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v15);
          v18 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserShopMaster___);
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v17);
          if ( !byte_5969EF2 )
          {
            sub_2213A60(&NetworkManager_TypeInfo);
            byte_5969EF2 = 1;
          }
          IsSoldOut = NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v17);
            IsSoldOut = NetworkManager_TypeInfo;
          }
          if ( v18 )
          {
            EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                                 (UserShopMaster_o *)v18,
                                 *(_QWORD *)(*((_QWORD *)IsSoldOut + 23) + 64LL),
                                 baseShopId,
                                 0);
            IsSoldOut = (void *)ShopEntity__IsSoldOut(shopEntity, 0);
            if ( ((unsigned __int8)IsSoldOut & 1) != 0
              && (IsSoldOut = (void *)ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0),
                  ((unsigned __int8)IsSoldOut & 1) == 0) )
            {
              IsSoldOut = (void *)ShopEntity__IsAnotherItemBuyable(shopEntity, &v28, 0);
              v22 = (unsigned __int8)IsSoldOut ^ 1;
            }
            else
            {
              v22 = 0;
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
                  v27 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
                  if ( (v22 & 1) != 0 )
                  {
                    if ( !v27 )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v20);
                    v25 = &StringLiteral_12614/*"SHOP_CAN_NOT_RESET_SOLD_OUT_NOTICE_MESSAGE"*/;
                  }
                  else
                  {
                    if ( !v27 )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v20);
                    v25 = &StringLiteral_12613/*"SHOP_CAN_NOT_RESET_NOTICE_MESSAGE"*/;
                  }
                  goto LABEL_42;
                }
LABEL_30:
                if ( (v22 & 1) == 0 )
                {
                  v26 = (System_String_o *)StringLiteral_1/*""*/;
                  v23 = 0;
LABEL_43:
                  ShopBuyItemListViewItemDraw__SetLabelText(
                    (ShopBuyItemListViewItemDraw_o *)IsSoldOut,
                    this->fields.shopResetNoticeLabel,
                    v26,
                    v21);
                  goto LABEL_44;
                }
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v20);
                v25 = &StringLiteral_12615/*"SHOP_CAN_RESET_NOTICE_MESSAGE"*/;
LABEL_42:
                IsSoldOut = LocalizationManager__Get((System_String_o *)*v25, 0);
                v26 = (System_String_o *)IsSoldOut;
                v23 = 1;
                goto LABEL_43;
              }
            }
          }
        }
      }
    }
    sub_2213CDC(IsSoldOut, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemListViewItemDraw__SetSpriteActive(
        ShopBuyItemListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_596C7C3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C7C3 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sprite, isActive);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0)) == 0 )
      sub_2213CDC(gameObject, v7);
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

  if ( (byte_596C7C4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C7C4 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sprite, spriteName);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( !v6 )
  {
    if ( !sprite )
      sub_2213CDC(v6, v7);
    UISprite__set_spriteName(sprite, spriteName, 0);
  }
}


void ShopBuyItemListViewItemDraw__ShowSoldOut(
        ShopBuyItemListViewItemDraw_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  ShopBuyItemListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  bool v7; // w8
  UnityEngine_Object_o *soldOutImage; // x20
  int v9; // w9
  System_String_o *v10; // x0
  const MethodInfo *v11; // x3
  UILabel_o *restCountLabel; // x1
  System_String_o *v13; // x2
  __int64 v14; // x2
  UILabel_o *v15; // x19

  v4 = this;
  if ( (byte_596C7D7 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_12603/*"SHOP_BUY_SOLD_OUT"*/);
    this = (ShopBuyItemListViewItemDraw_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C7D7 = 1;
  }
  if ( !item )
    goto LABEL_23;
  this = (ShopBuyItemListViewItemDraw_o *)item->fields._Shop_k__BackingField;
  if ( !this )
    goto LABEL_23;
  v7 = ShopEntity__checkFlag((ShopEntity_o *)this, 0x8000, 0);
  soldOutImage = (UnityEngine_Object_o *)v4->fields.soldOutImage;
  v9 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( v7 )
  {
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    v10 = (System_String_o *)UnityEngine_Object__op_Inequality(0, soldOutImage, 0);
    if ( ((unsigned __int8)v10 & 1) == 0 )
      goto LABEL_12;
    this = (ShopBuyItemListViewItemDraw_o *)v4->fields.soldOutImage;
    if ( this )
    {
      this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
LABEL_12:
        restCountLabel = v4->fields.restCountLabel;
        v13 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_22;
      }
    }
LABEL_23:
    sub_2213CDC(this, item);
  }
  if ( !v9 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(0, soldOutImage, 0) )
  {
    this = (ShopBuyItemListViewItemDraw_o *)v4->fields.soldOutImage;
    if ( !this )
      goto LABEL_23;
    this = (ShopBuyItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  v15 = v4->fields.restCountLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v14);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12603/*"SHOP_BUY_SOLD_OUT"*/, 0);
  restCountLabel = v15;
  v13 = v10;
LABEL_22:
  ShopBuyItemListViewItemDraw__SetLabelText((ShopBuyItemListViewItemDraw_o *)v10, restCountLabel, v13, v11);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_596C7BD & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C7BD = 1;
  }
  if ( mode )
  {
    anotherBuyableWidget = (UnityEngine_Object_o *)this->fields.anotherBuyableWidget;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&mode, manager);
    v8 = (struct UIWidget_o *)UnityEngine_Object__op_Inequality(anotherBuyableWidget, 0, 0);
    if ( ((unsigned __int8)v8 & 1) != 0 )
    {
      possessionAnotherItemIds = this->fields.possessionAnotherItemIds;
      if ( possessionAnotherItemIds )
      {
        if ( SLODWORD(possessionAnotherItemIds->max_length) >= 2 )
        {
          if ( !manager || (v8 = this->fields.anotherBuyableWidget) == 0 )
            sub_2213CDC(v8, v9);
          ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, float))v8->klass->vtable._8_set_alpha.methodPtr)(
            v8,
            v8->klass->vtable._8_set_alpha.method,
            manager->fields.alphaAnimNow);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemListViewItemDraw___SetNumText_b__79_0(
        ShopBuyItemListViewItemDraw_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *numTextLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_596C7DB & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596C7DB = 1;
  }
  numTextLabel = this->fields.numTextLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount, method);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0);
  if ( !numTextLabel )
    sub_2213CDC(NumberFormat, v7);
  UILabel__set_text(numTextLabel, NumberFormat, 0);
}