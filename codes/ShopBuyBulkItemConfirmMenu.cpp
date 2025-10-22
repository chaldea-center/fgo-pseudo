void ShopBuyBulkItemConfirmMenu___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct ShopBuyBulkItemConfirmMenu_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct ShopBuyBulkItemConfirmMenu_StaticFields *v7; // x8

  if ( (byte_4C59109 & 1) == 0 )
  {
    sub_1C3E564(&ShopBuyBulkItemConfirmMenu_TypeInfo);
    sub_1C3E564(&StringLiteral_17636/*"btn_txt_trade"*/);
    sub_1C3E564(&StringLiteral_17614/*"btn_txt_sale"*/);
    byte_4C59109 = 1;
  }
  ShopBuyBulkItemConfirmMenu_TypeInfo->static_fields->DECIED_BTN_NAME_DEFAULT = (struct System_String_o *)StringLiteral_17636/*"btn_txt_trade"*/;
  sub_1C3E508((CGThumbnailListItem_o *)ShopBuyBulkItemConfirmMenu_TypeInfo->static_fields, StringLiteral_17636/*"btn_txt_trade"*/, v1, v2);
  v3 = StringLiteral_17614/*"btn_txt_sale"*/;
  static_fields = ShopBuyBulkItemConfirmMenu_TypeInfo->static_fields;
  static_fields->DECIED_BTN_NAME_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_17614/*"btn_txt_sale"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->DECIED_BTN_NAME_LIMIT_MATERIAL, v3, v5, v6);
  v7 = ShopBuyBulkItemConfirmMenu_TypeInfo->static_fields;
  *(_QWORD *)&v7->WARNING_LABEL_MAX_WIDTH = 0xFA000002A8LL;
  v7->EXCHANGE_AP_NAME_OFFSET_X = -30;
}


void ShopBuyBulkItemConfirmMenu___ctor(ShopBuyBulkItemConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C59108 & 1) == 0 )
  {
    sub_1C3E564(&BaseDialog_TypeInfo);
    byte_4C59108 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ShopBuyBulkItemConfirmMenu__CallOnClose(ShopBuyBulkItemConfirmMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Action_o *onClose; // x19
  CGThumbnailListItem_o *p_onClose; // x0

  onClose = this->fields.onClose;
  if ( onClose )
  {
    p_onClose = (CGThumbnailListItem_o *)&this->fields.onClose;
    p_onClose->klass = 0;
    sub_1C3E508(p_onClose, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))onClose->fields.invoke_impl)(
      onClose->fields.method_code,
      onClose->fields.method);
  }
}


void ShopBuyBulkItemConfirmMenu__CallOnDecide(
        ShopBuyBulkItemConfirmMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Action_int__o *onDecide; // x20
  CGThumbnailListItem_o *p_onDecide; // x0

  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    p_onDecide = (CGThumbnailListItem_o *)&this->fields.onDecide;
    p_onDecide->klass = 0;
    sub_1C3E508(p_onDecide, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onDecide->fields.invoke_impl)(
      onDecide->fields.method_code,
      (unsigned int)result,
      onDecide->fields.method);
  }
}


void ShopBuyBulkItemConfirmMenu__Close(ShopBuyBulkItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ShopBuyBulkItemConfirmMenu__Close_45347456(this, 0, v2);
}


void ShopBuyBulkItemConfirmMenu__Close_45347456(
        ShopBuyBulkItemConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C590F5 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ShopBuyBulkItemConfirmMenu_EndClose__);
    byte_4C590F5 = 1;
  }
  this->fields.onClose = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onClose, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ShopBuyBulkItemConfirmMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void ShopBuyBulkItemConfirmMenu__EndClose(ShopBuyBulkItemConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  ShopBuyBulkItemConfirmMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C3E7C0(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  ShopBuyBulkItemConfirmMenu__CallOnClose(this, v5);
}


void ShopBuyBulkItemConfirmMenu__EndMaxErrorDialog(ShopBuyBulkItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  this->fields.state = 3;
  ShopBuyBulkItemConfirmMenu__CallOnDecide(this, 0, v2);
}


void ShopBuyBulkItemConfirmMenu__EndOpen(ShopBuyBulkItemConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void ShopBuyBulkItemConfirmMenu__EndShowItemDetailDialog(
        ShopBuyBulkItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C59107 & 1) == 0 )
  {
    sub_1C3E564(&Method_ShopBuyBulkItemConfirmMenu_EndShowItemDetailDialog__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C59107 = 1;
  }
  v3 = Method_ShopBuyBulkItemConfirmMenu_EndShowItemDetailDialog__;
  if ( (*((_BYTE *)Method_ShopBuyBulkItemConfirmMenu_EndShowItemDetailDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_ShopBuyBulkItemConfirmMenu_EndShowItemDetailDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v6);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
}


void ShopBuyBulkItemConfirmMenu__EndShowServantEquipStatusDialog(
        ShopBuyBulkItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C59106 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C59106 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v4);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0, 0);
}


void ShopBuyBulkItemConfirmMenu__EndShowServantStatusDialog(
        ShopBuyBulkItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C59105 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C59105 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
}


bool ShopBuyBulkItemConfirmMenu__GetIsBuyable(
        ShopBuyBulkItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isPreparation,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  unsigned int payType; // w8
  int32_t m_CancellationTokenSource; // w20
  int32_t PresentBoxMax; // w8
  struct ShopEntity_o *v13; // x9
  int v14; // w19
  struct System_Int32_array *itemIds; // x8
  UserItemMaster_o *v16; // x22
  unsigned __int64 v17; // x23
  struct System_Int32_array *v18; // x8
  int m_CancellationTokenSource_high; // w27
  Il2CppObject *MasterData_object; // x19
  int32_t Sum; // w19
  BalanceConfig_c *v22; // x8
  int32_t UserItemMax; // w9
  int32_t v24; // w21
  int32_t recordNum[2]; // [xsp+8h] [xbp-68h] BYREF
  int32_t buyCmdCodeNum[2]; // [xsp+10h] [xbp-60h] BYREF
  int32_t buyServantNum[2]; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4C590F1 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C590F1 = 1;
  }
  Instance = 0;
  *(_QWORD *)buyCmdCodeNum = 0;
  *(_QWORD *)buyServantNum = 0;
  *(_QWORD *)recordNum = 0;
  if ( !isPreparation )
  {
    if ( !shopEntity )
      goto LABEL_35;
    payType = shopEntity->fields.payType;
    if ( payType > 0xE )
      goto LABEL_8;
    if ( ((1 << payType) & 0x3B40) != 0 )
    {
      if ( ShopEntity__GetItemCount(shopEntity, 0) > 1 )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_35;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserItemMaster___);
        itemIds = shopEntity->fields.itemIds;
        if ( !itemIds )
          goto LABEL_35;
        v16 = (UserItemMaster_o *)Instance;
        v17 = 0;
        while ( (__int64)v17 < SLODWORD(itemIds->max_length) )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C50AE2 )
          {
            sub_1C3E564(&NetworkManager_TypeInfo);
            byte_4C50AE2 = 1;
          }
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
          }
          v18 = shopEntity->fields.itemIds;
          if ( v18 )
          {
            if ( v17 >= LODWORD(v18->max_length) )
              sub_1C3E7C8(Instance, shopEntity);
            if ( v16 )
            {
              Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(
                                            v16,
                                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                            v18->m_Items[v17],
                                            0);
              if ( Instance )
              {
                m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
                Instance = (DataManager_o *)ShopEntity__GetPrices(shopEntity, v17, 0);
                if ( !(m_CancellationTokenSource_high / (int)Instance) )
                  goto LABEL_57;
                itemIds = shopEntity->fields.itemIds;
                ++v17;
                if ( itemIds )
                  continue;
              }
            }
          }
          goto LABEL_35;
        }
      }
LABEL_8:
      *(_QWORD *)buyCmdCodeNum = 0;
      *(_QWORD *)buyServantNum = 0;
      *(_QWORD *)recordNum = 0;
      ShopEntity__GetSum(
        shopEntity,
        &buyServantNum[1],
        buyServantNum,
        &buyCmdCodeNum[1],
        buyCmdCodeNum,
        &recordNum[1],
        recordNum,
        0);
      if ( buyCmdCodeNum[1] + buyServantNum[0] + buyCmdCodeNum[0] >= 1 )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_35;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
        if ( !userGameEntity )
          goto LABEL_35;
        if ( !Instance )
          goto LABEL_35;
        Instance = (DataManager_o *)UserPresentBoxMaster__getVaildList(
                                      (UserPresentBoxMaster_o *)Instance,
                                      userGameEntity->fields.userId,
                                      0);
        if ( !Instance )
          goto LABEL_35;
        m_CancellationTokenSource = (int32_t)Instance->fields.m_CancellationTokenSource;
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (DataManager_o *)BalanceConfig_TypeInfo;
        }
        PresentBoxMax = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 128LL);
        if ( PresentBoxMax <= m_CancellationTokenSource )
          goto LABEL_57;
        v13 = this->fields.shopEntity;
        if ( !v13 )
          goto LABEL_35;
        if ( v13->fields.purchaseType == 5 )
          v14 = recordNum[0];
        else
          v14 = buyCmdCodeNum[1] + buyServantNum[0] + buyCmdCodeNum[0];
        if ( !LODWORD(Instance[1].fields.saveDataMapList) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
        }
        if ( v14 + m_CancellationTokenSource > PresentBoxMax )
          goto LABEL_57;
      }
      if ( buyServantNum[1] < 1 )
        goto LABEL_58;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C50AE2 )
        {
          sub_1C3E564(&NetworkManager_TypeInfo);
          byte_4C50AE2 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( MasterData_object )
        {
          Sum = UserItemMaster__getSum(
                  (UserItemMaster_o *)MasterData_object,
                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                  0);
          v22 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v22 = BalanceConfig_TypeInfo;
          }
          UserItemMax = v22->static_fields->UserItemMax;
          if ( Sum >= UserItemMax )
            goto LABEL_57;
          v24 = buyServantNum[1];
          if ( !v22->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v22);
            UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
          }
          if ( v24 + Sum > UserItemMax )
          {
LABEL_57:
            LOBYTE(Instance) = 0;
            return (char)Instance;
          }
LABEL_58:
          LOBYTE(Instance) = 1;
          return (char)Instance;
        }
      }
LABEL_35:
      sub_1C3E7C0(Instance, shopEntity);
    }
    if ( payType != 14 )
      goto LABEL_8;
    LOBYTE(Instance) = ShopEntity__GetCommonConsumeBuyableCount(shopEntity, 0) > 0;
  }
  return (char)Instance;
}


bool ShopBuyBulkItemConfirmMenu__GetIsMultiPrices(
        ShopBuyBulkItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  unsigned int payType; // w8
  bool result; // w0

  if ( !shopEntity )
    sub_1C3E7C0(this, 0);
  payType = shopEntity->fields.payType;
  result = 0;
  if ( payType <= 0xB && ((1 << payType) & 0xB40) != 0 )
    return ShopEntity__GetItemCount(shopEntity, 0) > 1;
  return result;
}


int32_t ShopBuyBulkItemConfirmMenu__GetItemSliderMax(
        ShopBuyBulkItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        UserGameEntity_o *userGameEntity,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  Il2CppObject *UserItemBuyableCount; // x0
  __int64 v10; // x1
  int32_t limitNum; // w21
  int32_t v12; // w19
  int32_t TotalNum_k__BackingField; // w23
  UserItemMaster_o *v14; // x21
  int32_t v15; // w20
  int32_t left; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C590ED & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&System_Math_TypeInfo);
    byte_4C590ED = 1;
  }
  left = 0;
  UserItemBuyableCount = (Il2CppObject *)ShopBuyBulkItemConfirmMenu__GetUserItemBuyableCount(
                                           this,
                                           shopEntity,
                                           userGameEntity,
                                           (const MethodInfo *)item);
  if ( !shopEntity )
    goto LABEL_18;
  limitNum = shopEntity->fields.limitNum;
  v12 = (int)UserItemBuyableCount;
  if ( limitNum )
  {
    if ( !item )
      goto LABEL_18;
    TotalNum_k__BackingField = item->fields._TotalNum_k__BackingField;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v12 = System_Math__Min_65160228(v12, limitNum - TotalNum_k__BackingField, 0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserItemBuyableCount = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !item
    || (v14 = (UserItemMaster_o *)UserItemBuyableCount,
        UserItemBuyableCount = (Il2CppObject *)ShopBuyItemListViewItem__get_TargetId(item, 0),
        !v14) )
  {
LABEL_18:
    sub_1C3E7C0(UserItemBuyableCount, v10);
  }
  if ( UserItemMaster__TryGetItemMaxLeft(v14, &left, (int32_t)UserItemBuyableCount, 0) )
  {
    v15 = left;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    return System_Math__Min_65160228(v12, v15, 0);
  }
  return v12;
}


System_String_o *ShopBuyBulkItemConfirmMenu__GetMaxAlertBase(
        ShopBuyBulkItemConfirmMenu_o *this,
        int32_t shopType,
        const MethodInfo *method)
{
  System_String_o **v4; // x8

  if ( (byte_4C590FA & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_8284/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/);
    sub_1C3E564(&StringLiteral_12133/*"SHOP_MAX_ALERT"*/);
    byte_4C590FA = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( shopType == 9 )
    v4 = (System_String_o **)&StringLiteral_8284/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/;
  else
    v4 = (System_String_o **)&StringLiteral_12133/*"SHOP_MAX_ALERT"*/;
  return LocalizationManager__Get(*v4, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ShopBuyBulkItemConfirmMenu__GetMaxAlertMessage(
        ShopBuyBulkItemConfirmMenu_o *this,
        int32_t shopType,
        int32_t itemType,
        const MethodInfo *method)
{
  ShopBuyBulkItemConfirmMenu_o *MaxAlertBase; // x20
  const MethodInfo *v6; // x2
  Il2CppObject *MaxOverItemName; // x1

  MaxAlertBase = (ShopBuyBulkItemConfirmMenu_o *)ShopBuyBulkItemConfirmMenu__GetMaxAlertBase(
                                                   this,
                                                   shopType,
                                                   *(const MethodInfo **)&itemType);
  MaxOverItemName = (Il2CppObject *)ShopBuyBulkItemConfirmMenu__GetMaxOverItemName(MaxAlertBase, itemType, v6);
  return System_String__Format((System_String_o *)MaxAlertBase, MaxOverItemName, 0);
}


System_String_o *ShopBuyBulkItemConfirmMenu__GetMaxOverItemName(
        ShopBuyBulkItemConfirmMenu_o *this,
        int32_t itemType,
        const MethodInfo *method)
{
  __int64 *v4; // x8

  if ( (byte_4C590F9 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_10817/*"QP_NAME"*/);
    sub_1C3E564(&StringLiteral_8535/*"MANA_NAME"*/);
    sub_1C3E564(&StringLiteral_10960/*"RARE_PRI_NAME"*/);
    sub_1C3E564(&StringLiteral_6551/*"FRIEND_POINT_NAME"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C590F9 = 1;
  }
  if ( itemType <= 5 )
  {
    if ( itemType == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10817/*"QP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v4, 0);
    }
    if ( itemType == 5 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_8535/*"MANA_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v4, 0);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( itemType == 13 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = &StringLiteral_6551/*"FRIEND_POINT_NAME"*/;
    return LocalizationManager__Get((System_String_o *)*v4, 0);
  }
  if ( itemType != 22 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = &StringLiteral_10960/*"RARE_PRI_NAME"*/;
  return LocalizationManager__Get((System_String_o *)*v4, 0);
}


int32_t ShopBuyBulkItemConfirmMenu__GetUserItemBuyableCount(
        ShopBuyBulkItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  ShopBuyBulkItemConfirmMenu_o *v6; // x20
  __int64 v7; // x21
  struct System_Int32_array *itemIds; // x8
  UserItemMaster_o *v9; // x22
  unsigned __int64 v10; // x23
  struct System_Int32_array *v11; // x8
  int m_CancellationTokenSource_high; // w27
  int32_t stone; // w20
  int64_t qp; // x20

  v6 = this;
  if ( (byte_4C590EE & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    this = (ShopBuyBulkItemConfirmMenu_o *)sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C590EE = 1;
  }
  if ( !shopEntity )
LABEL_26:
    sub_1C3E7C0(this, shopEntity);
  LODWORD(v7) = 0;
  switch ( shopEntity->fields.payType )
  {
    case 1:
      if ( !userGameEntity )
        goto LABEL_26;
      stone = userGameEntity->fields.stone;
      goto LABEL_35;
    case 2:
      if ( !userGameEntity )
        goto LABEL_26;
      qp = userGameEntity->fields.qp;
      return qp / ShopEntity__GetPrice(shopEntity, 0);
    case 4:
      if ( !userGameEntity )
        goto LABEL_26;
      stone = userGameEntity->fields.mana;
      goto LABEL_35;
    case 6:
    case 8:
    case 9:
    case 0xB:
    case 0xC:
      this = (ShopBuyBulkItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_26;
      this = (ShopBuyBulkItemConfirmMenu_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserItemMaster___);
      itemIds = shopEntity->fields.itemIds;
      if ( !itemIds )
        goto LABEL_26;
      v9 = (UserItemMaster_o *)this;
      v10 = 0;
      LODWORD(v7) = 0;
      break;
    case 0xA:
      if ( !userGameEntity )
        goto LABEL_26;
      stone = userGameEntity->fields.rarePri;
LABEL_35:
      LODWORD(v7) = stone / ShopEntity__GetPrice(shopEntity, 0);
      return v7;
    case 0xD:
      LODWORD(v7) = shopEntity->fields.limitNum;
      return v7;
    case 0xE:
      return ShopEntity__GetCommonConsumeBuyableCount(shopEntity, 0);
    default:
      return v7;
  }
  while ( (__int64)v10 < SLODWORD(itemIds->max_length) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C50AE2 )
    {
      sub_1C3E564(&NetworkManager_TypeInfo);
      byte_4C50AE2 = 1;
    }
    this = (ShopBuyBulkItemConfirmMenu_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ShopBuyBulkItemConfirmMenu_o *)NetworkManager_TypeInfo;
    }
    v11 = shopEntity->fields.itemIds;
    if ( v11 )
    {
      if ( v10 >= LODWORD(v11->max_length) )
        sub_1C3E7C8(this, shopEntity);
      if ( v9 )
      {
        this = (ShopBuyBulkItemConfirmMenu_o *)UserItemMaster__GetEntityDefinitely(
                                                 v9,
                                                 *(_QWORD *)&this->fields.itemSlider->fields.mValue,
                                                 v11->m_Items[v10],
                                                 0);
        if ( this )
        {
          if ( v6->fields.shopEntity )
          {
            m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
            this = (ShopBuyBulkItemConfirmMenu_o *)ShopEntity__GetPrices(v6->fields.shopEntity, v10, 0);
            itemIds = shopEntity->fields.itemIds;
            if ( m_CancellationTokenSource_high / (int)this < (int)v7 || v10 == 0 )
              LODWORD(v7) = m_CancellationTokenSource_high / (int)this;
            ++v10;
            if ( itemIds )
              continue;
          }
        }
      }
    }
    goto LABEL_26;
  }
  return v7;
}


void ShopBuyBulkItemConfirmMenu__Init(ShopBuyBulkItemConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C3E7C0(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  this->fields.shopEntity = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.shopEntity, 0, v5, v6);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


int64_t ShopBuyBulkItemConfirmMenu__ItemMaxOverCheck(
        ShopBuyBulkItemConfirmMenu_o *this,
        int64_t count,
        int64_t price,
        const MethodInfo *method)
{
  BalanceConfig_c *v6; // x0
  int64_t UserItemMax; // x8

  if ( (byte_4C590FC & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C590FC = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  UserItemMax = v6->static_fields->UserItemMax;
  if ( price * count > UserItemMax )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
    }
    return UserItemMax / price;
  }
  return count;
}


void ShopBuyBulkItemConfirmMenu__Modify(
        ShopBuyBulkItemConfirmMenu_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.state = 2;
  this->fields.onDecide = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onDecide, (int32_t)callback, (int32_t)method, v3);
}


void ShopBuyBulkItemConfirmMenu__OnClickCancel(ShopBuyBulkItemConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C590FB & 1) == 0 )
  {
    sub_1C3E564(&Method_ShopBuyBulkItemConfirmMenu_OnClickCancel__);
    byte_4C590FB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ShopBuyBulkItemConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ShopBuyBulkItemConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_ShopBuyBulkItemConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1C3E7C0(0, v5);
    UISliderWithButton__grayMode(itemSlider, 0);
    ShopBuyBulkItemConfirmMenu__CallOnDecide(this, 0, v7);
  }
}


void ShopBuyBulkItemConfirmMenu__OnClickDecide(ShopBuyBulkItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C590F6 & 1) == 0 )
  {
    sub_1C3E564(&Method_ShopBuyBulkItemConfirmMenu_OnClickDecide__);
    byte_4C590F6 = 1;
  }
  if ( this->fields.state == 2
    && !ShopBuyBulkItemConfirmMenu__SetShopNotEnableWarning(this, this->fields.shopEntity, v2)
    && !ShopBuyBulkItemConfirmMenu__OpenMaxAlertNotification(this, this->fields.shopEntity, v4) )
  {
    this->fields.state = 3;
    v5 = Method_ShopBuyBulkItemConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ShopBuyBulkItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3E57C(Method_ShopBuyBulkItemConfirmMenu_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3E548(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, this->fields.decideSe, 0, 0);
    ShopBuyBulkItemConfirmMenu__CallOnDecide(this, this->fields.buyCount, v7);
  }
}


void ShopBuyBulkItemConfirmMenu__OnClickInfo(ShopBuyBulkItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ShopEntity_o *shopEntity; // x1
  int purchaseType; // w8
  ShopBuyBulkItemConfirmMenu_o *v6; // x0
  const MethodInfo *v7; // x2
  int32_t v8; // w0
  const MethodInfo *v9; // x2
  int32_t v10; // w1
  int32_t v11; // w0
  const MethodInfo *v12; // x2
  int32_t TargetId; // w0
  const MethodInfo *v14; // x2

  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    sub_1C3E7C0(this, 0);
  purchaseType = shopEntity->fields.purchaseType;
  if ( purchaseType <= 4 )
  {
    if ( purchaseType == 1 )
    {
      TargetId = ShopEntity__get_TargetId(this->fields.shopEntity, 0);
      v6 = (ShopBuyBulkItemConfirmMenu_o *)ShopBuyBulkItemConfirmMenu__ShowItemInfomation(this, TargetId, v14);
      goto LABEL_11;
    }
    if ( purchaseType != 4 )
      goto LABEL_5;
  }
  else
  {
    if ( purchaseType == 19 )
    {
      v11 = ShopEntity__get_TargetId(this->fields.shopEntity, 0);
      v6 = (ShopBuyBulkItemConfirmMenu_o *)ShopBuyBulkItemConfirmMenu__ShowCommandCodeInfomation(this, v11, v12);
      goto LABEL_11;
    }
    if ( purchaseType != 21 )
    {
LABEL_5:
      v6 = (ShopBuyBulkItemConfirmMenu_o *)ShopBuyBulkItemConfirmMenu__ShowOtherInfomation(this, shopEntity, v2);
LABEL_11:
      v10 = 0;
      goto LABEL_12;
    }
  }
  v8 = ShopEntity__get_TargetId(this->fields.shopEntity, 0);
  v6 = (ShopBuyBulkItemConfirmMenu_o *)ShopBuyBulkItemConfirmMenu__ShowServantInfomation(this, v8, v9);
  v10 = (int)v6;
LABEL_12:
  ShopBuyBulkItemConfirmMenu__PlayShowInfomationSound(v6, v10, v7);
}


void ShopBuyBulkItemConfirmMenu__Open(
        ShopBuyBulkItemConfirmMenu_o *this,
        ShopEntity_o *entity,
        ShopBuyItemListViewItem_o *item,
        System_Action_int__o *onDecide,
        int32_t se,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct ShopEntity_o *shopEntity; // x0
  struct CommonConsumeEntity_array *CommonConsumeEntities; // x1
  struct CommonConsumeEntity_array **p_commonConsumeEntities; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  bool IsPreparation; // w0
  int32_t buyCount; // w21
  bool v22; // w22
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct ShopBuyItemListViewObject_o *itemInfoPrefab; // x8
  UserGameEntity_o *v28; // x23
  const MethodInfo *v29; // x4
  UILabel_o *exchangeDestinationItemName; // x24
  char v31; // w21
  bool v32; // w22
  const MethodInfo *v33; // x4
  const MethodInfo *v34; // x5
  const MethodInfo *v35; // x2
  ShopEntity_o *v36; // x1
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x3
  __int64 v43; // x1
  struct UILabel_o *warningLabel; // x8
  bool IsNullOrEmpty; // w0
  const MethodInfo *v46; // x2
  System_Action_o *v47; // x20
  System_String_o *itemName; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C590E5 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentInChildren_ShopBuyItemListViewItemDraw___);
    sub_1C3E564(&Method_ShopBuyBulkItemConfirmMenu_EndOpen__);
    byte_4C590E5 = 1;
  }
  message = 0;
  itemName = 0;
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1C3E508(
      (CGThumbnailListItem_o *)&this->fields.onDecide,
      (int32_t)onDecide,
      (int32_t)item,
      (const MethodInfo *)onDecide);
    this->fields.shopEntity = entity;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.shopEntity, (int32_t)entity, v11, v12);
    shopEntity = this->fields.shopEntity;
    if ( shopEntity && shopEntity->fields.payType == 14 )
    {
      CommonConsumeEntities = ShopEntity__GetCommonConsumeEntities(shopEntity, 0);
      p_commonConsumeEntities = &this->fields.commonConsumeEntities;
      this->fields.commonConsumeEntities = CommonConsumeEntities;
    }
    else
    {
      p_commonConsumeEntities = &this->fields.commonConsumeEntities;
      LODWORD(CommonConsumeEntities) = 0;
      this->fields.commonConsumeEntities = 0;
    }
    sub_1C3E508((CGThumbnailListItem_o *)p_commonConsumeEntities, (int32_t)CommonConsumeEntities, v13, v14);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.shopEntity;
    this->fields.buyCount = 1;
    this->fields.decideSe = se;
    if ( !gameObject )
      goto LABEL_23;
    gameObject = (UnityEngine_GameObject_o *)ShopEntity__GetItemCount((ShopEntity_o *)gameObject, 0);
    this->fields.itemCount = (int)gameObject;
    if ( !item )
      goto LABEL_23;
    IsPreparation = ShopBuyItemListViewItem__GetIsPreparation(item, &message, &itemName, 0);
    buyCount = this->fields.buyCount;
    v22 = IsPreparation;
    ShopBuyBulkItemConfirmMenu__SetExchangeOriginCount(this, this->fields.itemCount, buyCount, v23);
    ShopBuyBulkItemConfirmMenu__SetExchangeDestinationCount(this, this->fields.shopEntity, buyCount, v24);
    gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0);
    itemInfoPrefab = this->fields.itemInfoPrefab;
    if ( !itemInfoPrefab )
      goto LABEL_23;
    itemInfoPrefab->fields.shopBuyItem = item;
    v28 = (UserGameEntity_o *)gameObject;
    sub_1C3E508((CGThumbnailListItem_o *)&itemInfoPrefab->fields.shopBuyItem, (int32_t)item, v25, v26);
    gameObject = (UnityEngine_GameObject_o *)this->fields.itemInfoPrefab;
    if ( !gameObject )
      goto LABEL_23;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentInChildren_object__51315876(
                                               (UnityEngine_Component_o *)gameObject,
                                               (const MethodInfo_30F04A4 *)Method_UnityEngine_Component_GetComponentInChildren_ShopBuyItemListViewItemDraw___);
    if ( !gameObject )
      goto LABEL_23;
    ShopBuyItemListViewItemDraw__SetItem((ShopBuyItemListViewItemDraw_o *)gameObject, item, 2, 0);
    gameObject = (UnityEngine_GameObject_o *)ShopBuyBulkItemConfirmMenu__GetIsBuyable(
                                               this,
                                               this->fields.shopEntity,
                                               v22,
                                               v28,
                                               v29);
    if ( !this->fields.shopEntity )
      goto LABEL_23;
    exchangeDestinationItemName = this->fields.exchangeDestinationItemName;
    v31 = (char)gameObject;
    gameObject = (UnityEngine_GameObject_o *)ShopEntity__getName(this->fields.shopEntity, 0);
    if ( !exchangeDestinationItemName )
      goto LABEL_23;
    UILabel__set_text(exchangeDestinationItemName, (System_String_o *)gameObject, 0);
    v32 = v22;
    ShopBuyBulkItemConfirmMenu__SetWarningText(this, this->fields.shopEntity, v32, v28, v33);
    ShopBuyBulkItemConfirmMenu__SetItemSlider(this, this->fields.shopEntity, v32, v28, item, v34);
    ShopBuyBulkItemConfirmMenu__SetExchangeOriginItemName(this, this->fields.shopEntity, v35);
    ShopBuyBulkItemConfirmMenu__SetExchangeOriginItemIcon(this, v36, v37);
    ShopBuyBulkItemConfirmMenu__SetExchangeDestinationItemIcon(this, this->fields.shopEntity, v38);
    ShopBuyBulkItemConfirmMenu__SetExchangeObjects(this, v39);
    ShopBuyBulkItemConfirmMenu__SetExchangeDestinationText(this, this->fields.shopEntity, v31 & 1, v40);
    ShopBuyBulkItemConfirmMenu__SetPresentAheadText(this, this->fields.shopEntity, v31 & 1, v41);
    ShopBuyBulkItemConfirmMenu__SetDecideButtonImage(this, this->fields.shopEntity, v31 & 1, v42);
    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !gameObject )
      goto LABEL_23;
    v43 = (v31 & 1) != 0 ? 0LL : 3LL;
    gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
                                               gameObject,
                                               v43,
                                               1,
                                               gameObject->klass[1]._1.implementedInterfaces);
    warningLabel = this->fields.warningLabel;
    if ( !warningLabel )
LABEL_23:
      sub_1C3E7C0(gameObject, v19);
    IsNullOrEmpty = System_String__IsNullOrEmpty(warningLabel->fields.mText, 0);
    ShopBuyBulkItemConfirmMenu__SetWarningActive(this, !IsNullOrEmpty, v46);
    this->fields.state = 1;
    v47 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v47, (Il2CppObject *)this, Method_ShopBuyBulkItemConfirmMenu_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v47, 0, 0, 0);
  }
}


bool ShopBuyBulkItemConfirmMenu__OpenMaxAlertNotification(
        ShopBuyBulkItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  ShopEntity_o *v5; // x0
  const MethodInfo *v6; // x3
  System_String_o *MaxAlertMessage; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v9; // x22
  int32_t check; // [xsp+4Ch] [xbp-24h] BYREF

  if ( (byte_4C590F8 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ShopBuyBulkItemConfirmMenu_EndMaxErrorDialog__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C590F8 = 1;
  }
  check = 0;
  if ( shopEntity )
  {
    v5 = this->fields.shopEntity;
    if ( !v5 )
      goto LABEL_9;
    if ( ShopEntity__isMaxOver(v5, this->fields.buyCount, &check, 0) )
    {
      MaxAlertMessage = ShopBuyBulkItemConfirmMenu__GetMaxAlertMessage(this, shopEntity->fields.shopType, check, v6);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v9 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ShopBuyBulkItemConfirmMenu_EndMaxErrorDialog__, 0);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          (System_String_o *)StringLiteral_1/*""*/,
          MaxAlertMessage,
          v9,
          -1,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0.0,
          0,
          0);
        return 1;
      }
LABEL_9:
      sub_1C3E7C0(v5, shopEntity);
    }
  }
  return 0;
}


void ShopBuyBulkItemConfirmMenu__PlayShowInfomationSound(
        ShopBuyBulkItemConfirmMenu_o *this,
        int32_t seKind,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4C59104 & 1) == 0 )
  {
    sub_1C3E564(&Method_ShopBuyBulkItemConfirmMenu_PlayShowInfomationSound__);
    byte_4C59104 = 1;
  }
  if ( (seKind & 0x80000000) == 0 )
  {
    v4 = Method_ShopBuyBulkItemConfirmMenu_PlayShowInfomationSound__;
    if ( (*((_BYTE *)Method_ShopBuyBulkItemConfirmMenu_PlayShowInfomationSound__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C3E57C(Method_ShopBuyBulkItemConfirmMenu_PlayShowInfomationSound__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3E548(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, seKind, 0, 0);
  }
}


void ShopBuyBulkItemConfirmMenu__SetApSeedExchangeOriginCountOnTerminal(
        ShopBuyBulkItemConfirmMenu_o *this,
        CommonConsumeEntity_array *entities,
        int64_t count,
        const MethodInfo *method)
{
  ShopBuyBulkItemConfirmMenu_o *v5; // x21
  UnityEngine_Object_c **v6; // x27
  LocalizationManager_c **v7; // x28
  __int64 v8; // x29
  struct UILabel_array *exchangeOriginCounts; // x8
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v11; // x19
  UnityEngine_Object_o *v12; // x22
  CommonConsumeEntity_o *v13; // x24
  int64_t v14; // x21
  System_String_o *NumberFormatLong; // x26
  int32_t HasNum; // w22
  System_String_o *v17; // x25
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  Il2CppObject *v24; // x0
  Il2CppObject *v25; // x25
  bool IsAp; // w24
  System_String_o **v27; // x8
  ShopBuyBulkItemConfirmMenu_o *v28; // x24
  int64_t v29; // x22
  System_String_o *v30; // x0
  UnityEngine_Object_c **v31; // x21
  LocalizationManager_c **v32; // x23
  System_String_o *v33; // x27
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  ShopBuyBulkItemConfirmMenu_o *v36; // x28
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  bool v43; // cc
  Il2CppObject *v44; // x22
  System_String_o *v45; // x0
  struct UILabel_array *v46; // x8
  struct UILabel_array *v47; // x8
  UILabel_o *v48; // x22
  __int64 v49; // x9
  __int64 v50; // x0
  ShopBuyBulkItemConfirmMenu_o *v51; // [xsp+8h] [xbp-78h]
  int32_t v53; // [xsp+18h] [xbp-68h]
  int32_t v54; // [xsp+1Ch] [xbp-64h] BYREF

  v5 = this;
  if ( (byte_4C590FE & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&ShopBuyBulkItemConfirmMenu_TypeInfo);
    sub_1C3E564(&StringLiteral_3704/*"COMMON_NUM_FORMAT"*/);
    sub_1C3E564(&StringLiteral_12045/*"SHOP_BULK_WINDOW_AP_KIND"*/);
    sub_1C3E564(&StringLiteral_12044/*"SHOP_BULK_WINDOW_AP_CARRYOVER_COLOR"*/);
    sub_1C3E564(&StringLiteral_12051/*"SHOP_BULK_WINDOW_DISABLE_ITEM_COLOR"*/);
    sub_1C3E564(&StringLiteral_12048/*"SHOP_BULK_WINDOW_COUNT_FORMAT"*/);
    this = (ShopBuyBulkItemConfirmMenu_o *)sub_1C3E564(&StringLiteral_12055/*"SHOP_BULK_WINDOW_ORIGIN_KIND"*/);
    byte_4C590FE = 1;
  }
  if ( !entities )
    goto LABEL_61;
  if ( SLODWORD(entities->max_length) >= 1 )
  {
    v6 = &UnityEngine_Object_TypeInfo;
    v7 = &LocalizationManager_TypeInfo;
    v8 = 4;
    v51 = v5;
    while ( 1 )
    {
      exchangeOriginCounts = v5->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        break;
      max_length_low = LODWORD(exchangeOriginCounts->max_length);
      v11 = v8 - 4;
      if ( v8 - 4 >= (int)max_length_low )
        return;
      if ( v11 >= max_length_low )
        goto LABEL_60;
      v12 = (UnityEngine_Object_o *)*((_QWORD *)&exchangeOriginCounts->obj.klass + v8);
      if ( !(*v6)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v6);
      this = (ShopBuyBulkItemConfirmMenu_o *)UnityEngine_Object__op_Equality(v12, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( v11 >= LODWORD(entities->max_length) )
          goto LABEL_60;
        v13 = (CommonConsumeEntity_o *)*((_QWORD *)&entities->obj.klass + v8);
        if ( !v13 )
          break;
        v14 = v13->fields.num * count;
        if ( !(*v7)->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(*v7);
        NumberFormatLong = LocalizationManager__GetNumberFormatLong(v14, 0);
        HasNum = CommonConsumeEntity__GetUserHasNum(v13, 0);
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3704/*"COMMON_NUM_FORMAT"*/, 0);
        v54 = HasNum;
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v18, v19, v20, v21, v22, v23);
        v25 = (Il2CppObject *)System_String__Format(v17, v24, 0);
        IsAp = CommonConsumeEntity__get_IsAp(v13, 0);
        if ( !(*v7)->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(*v7);
        v27 = (System_String_o **)&StringLiteral_12045/*"SHOP_BULK_WINDOW_AP_KIND"*/;
        if ( !IsAp )
          v27 = (System_String_o **)&StringLiteral_12055/*"SHOP_BULK_WINDOW_ORIGIN_KIND"*/;
        this = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get(*v27, 0);
        if ( v11 >= LODWORD(entities->max_length) )
          goto LABEL_60;
        v28 = this;
        this = (ShopBuyBulkItemConfirmMenu_o *)*((_QWORD *)&entities->obj.klass + v8);
        if ( !this )
          break;
        v53 = HasNum;
        if ( !CommonConsumeEntity__get_IsAp((CommonConsumeEntity_o *)this, 0) )
          goto LABEL_28;
        this = (ShopBuyBulkItemConfirmMenu_o *)UserGameMaster__getSelfUserGame(0);
        if ( !this )
          break;
        if ( UserGameEntity__getCarryOverAct((UserGameEntity_o *)this, 0) >= 1 )
        {
          if ( !(*v7)->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(*v7);
          v29 = v14;
          v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12044/*"SHOP_BULK_WINDOW_AP_CARRYOVER_COLOR"*/, 0);
          v25 = (Il2CppObject *)System_String__Format(v30, v25, 0);
        }
        else
        {
LABEL_28:
          v29 = v14;
        }
        v31 = v6;
        v32 = v7;
        if ( !(*v7)->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(*v7);
        v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12048/*"SHOP_BULK_WINDOW_COUNT_FORMAT"*/, 0);
        this = (ShopBuyBulkItemConfirmMenu_o *)sub_1C3E60C(object___TypeInfo, 4);
        if ( !this )
          break;
        v36 = this;
        if ( NumberFormatLong )
        {
          this = (ShopBuyBulkItemConfirmMenu_o *)sub_1C3E6A0(NumberFormatLong, this->klass->_1.element_class);
          if ( !this )
            goto LABEL_62;
        }
        if ( !LODWORD(v36->fields.m_CancellationTokenSource) )
          goto LABEL_60;
        v36->fields.basePanel = (struct UIPanel_o *)NumberFormatLong;
        sub_1C3E508((CGThumbnailListItem_o *)&v36->fields.basePanel, (int32_t)NumberFormatLong, v34, v35);
        if ( v28 )
        {
          this = (ShopBuyBulkItemConfirmMenu_o *)sub_1C3E6A0(v28, v36->klass->_1.element_class);
          if ( !this )
            goto LABEL_62;
        }
        if ( LODWORD(v36->fields.m_CancellationTokenSource) <= 1 )
          goto LABEL_60;
        v36->fields.basePanelList = (struct UIPanel_array *)v28;
        sub_1C3E508((CGThumbnailListItem_o *)&v36->fields.basePanelList, (int32_t)v28, v37, v38);
        if ( v25 )
        {
          this = (ShopBuyBulkItemConfirmMenu_o *)sub_1C3E6A0(v25, v36->klass->_1.element_class);
          if ( !this )
            goto LABEL_62;
        }
        if ( LODWORD(v36->fields.m_CancellationTokenSource) <= 2 )
          goto LABEL_60;
        v36->fields.baseWindow = (struct UnityEngine_GameObject_o *)v25;
        sub_1C3E508((CGThumbnailListItem_o *)&v36->fields.baseWindow, (int32_t)v25, v39, v40);
        if ( v28 )
        {
          this = (ShopBuyBulkItemConfirmMenu_o *)sub_1C3E6A0(v28, v36->klass->_1.element_class);
          if ( !this )
          {
LABEL_62:
            v50 = sub_1C3E7E4(this);
            sub_1C3E68C(v50, 0);
          }
        }
        if ( LODWORD(v36->fields.m_CancellationTokenSource) <= 3 )
LABEL_60:
          sub_1C3E7C8(this, entities);
        v36->fields.maskSprite = (struct UISprite_o *)v28;
        sub_1C3E508((CGThumbnailListItem_o *)&v36->fields.maskSprite, (int32_t)v28, v41, v42);
        this = (ShopBuyBulkItemConfirmMenu_o *)System_String__Format_63677896(v33, (System_Object_array *)v36, 0);
        v43 = v29 <= v53;
        v44 = (Il2CppObject *)this;
        if ( v43 )
        {
          v6 = v31;
          v5 = v51;
          v7 = v32;
        }
        else
        {
          v7 = v32;
          v6 = v31;
          if ( !(*v32)->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(*v32);
          v45 = LocalizationManager__Get((System_String_o *)StringLiteral_12051/*"SHOP_BULK_WINDOW_DISABLE_ITEM_COLOR"*/, 0);
          this = (ShopBuyBulkItemConfirmMenu_o *)System_String__Format(v45, v44, 0);
          v5 = v51;
          v44 = (Il2CppObject *)this;
        }
        v46 = v5->fields.exchangeOriginCounts;
        if ( !v46 )
          break;
        if ( v11 >= LODWORD(v46->max_length) )
          goto LABEL_60;
        this = (ShopBuyBulkItemConfirmMenu_o *)*((_QWORD *)&v46->obj.klass + v8);
        if ( !this )
          break;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)v44, 0);
        v47 = v5->fields.exchangeOriginCounts;
        if ( !v47 )
          break;
        if ( v11 >= LODWORD(v47->max_length) )
          goto LABEL_60;
        this = (ShopBuyBulkItemConfirmMenu_o *)ShopBuyBulkItemConfirmMenu_TypeInfo;
        v48 = (UILabel_o *)*((_QWORD *)&v47->obj.klass + v8);
        if ( !ShopBuyBulkItemConfirmMenu_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ShopBuyBulkItemConfirmMenu_TypeInfo);
        if ( !v48 )
          break;
        UILabel__SetCondensedScale(
          v48,
          ShopBuyBulkItemConfirmMenu_TypeInfo->static_fields->EXCHANGE_ITEM_INFO_WIDTH,
          0,
          0);
      }
      v49 = v8 - 3;
      ++v8;
      if ( v49 >= SLODWORD(entities->max_length) )
        return;
    }
LABEL_61:
    sub_1C3E7C0(this, entities);
  }
}


void ShopBuyBulkItemConfirmMenu__SetCommonConsumeExchangeObjects(
        ShopBuyBulkItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *exchangeOriginDispObject1; // x0
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  UILabel_o *exchangeOrigin; // x20
  ShopBuyBulkItemConfirmMenu_o *v6; // x0
  const MethodInfo *v7; // x3
  struct CommonConsumeEntity_array *v8; // x8
  UnityEngine_Object_o *exchangeOrigin2; // x20
  UILabel_o *v10; // x20
  ShopBuyBulkItemConfirmMenu_o *v11; // x0
  const MethodInfo *v12; // x3
  struct CommonConsumeEntity_array *v13; // x8
  __int64 v14; // x23
  int max_length; // w9
  unsigned int v16; // w21
  struct UILabel_array *exchangeOriginCountKinds; // x8
  char v18; // w20
  UILabel_o *v19; // x21
  System_String_o **v20; // x8
  ShopBuyBulkItemConfirmMenu_o *v21; // x0
  const MethodInfo *v22; // x3
  UILabel_o *exchangeDestinationCountKind; // x19
  ShopBuyBulkItemConfirmMenu_o *v24; // x0
  const MethodInfo *v25; // x3

  if ( (byte_4C590EB & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_12045/*"SHOP_BULK_WINDOW_AP_KIND"*/);
    sub_1C3E564(&StringLiteral_12054/*"SHOP_BULK_WINDOW_ORIGIN"*/);
    sub_1C3E564(&StringLiteral_12050/*"SHOP_BULK_WINDOW_DESTINATION_KIND"*/);
    sub_1C3E564(&StringLiteral_12055/*"SHOP_BULK_WINDOW_ORIGIN_KIND"*/);
    byte_4C590EB = 1;
  }
  if ( this->fields.commonConsumeEntities )
  {
    exchangeOriginDispObject1 = this->fields.exchangeOriginDispObject1;
    if ( !exchangeOriginDispObject1 )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive(exchangeOriginDispObject1, 1, 0);
    commonConsumeEntities = this->fields.commonConsumeEntities;
    if ( !commonConsumeEntities )
      goto LABEL_32;
    exchangeOriginDispObject1 = this->fields.exchangeOriginDispObject2;
    if ( !exchangeOriginDispObject1 )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive(exchangeOriginDispObject1, SLODWORD(commonConsumeEntities->max_length) > 1, 0);
    exchangeOrigin = this->fields.exchangeOrigin;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12054/*"SHOP_BULK_WINDOW_ORIGIN"*/, 0);
    ShopBuyBulkItemConfirmMenu__SetLabelText(v6, exchangeOrigin, (System_String_o *)v6, v7);
    v8 = this->fields.commonConsumeEntities;
    if ( !v8 )
      goto LABEL_32;
    if ( SLODWORD(v8->max_length) >= 2 )
    {
      exchangeOrigin2 = (UnityEngine_Object_o *)this->fields.exchangeOrigin2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      exchangeOriginDispObject1 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(exchangeOrigin2, 0, 0);
      if ( ((unsigned __int8)exchangeOriginDispObject1 & 1) != 0 )
      {
        v10 = this->fields.exchangeOrigin2;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v11 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12054/*"SHOP_BULK_WINDOW_ORIGIN"*/, 0);
        ShopBuyBulkItemConfirmMenu__SetLabelText(v11, v10, (System_String_o *)v11, v12);
      }
    }
    if ( this->fields.displayMode == 1 )
      return;
    v13 = this->fields.commonConsumeEntities;
    if ( !v13 )
LABEL_32:
      sub_1C3E7C0(exchangeOriginDispObject1, method);
    v14 = 4;
    while ( 1 )
    {
      max_length = v13->max_length;
      v16 = v14 - 4;
      if ( (int)v14 - 4 >= max_length )
        break;
      if ( v16 >= max_length )
        goto LABEL_36;
      exchangeOriginDispObject1 = (UnityEngine_GameObject_o *)*((_QWORD *)&v13->obj.klass + v14);
      if ( exchangeOriginDispObject1 )
      {
        exchangeOriginDispObject1 = (UnityEngine_GameObject_o *)CommonConsumeEntity__get_IsAp(
                                                                  (CommonConsumeEntity_o *)exchangeOriginDispObject1,
                                                                  0);
        exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
        if ( exchangeOriginCountKinds )
        {
          if ( v16 >= LODWORD(exchangeOriginCountKinds->max_length) )
LABEL_36:
            sub_1C3E7C8(exchangeOriginDispObject1, method);
          v18 = (char)exchangeOriginDispObject1;
          v19 = (UILabel_o *)*((_QWORD *)&exchangeOriginCountKinds->obj.klass + v14);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v20 = (System_String_o **)((v18 & 1) != 0 ? &StringLiteral_12045/*"SHOP_BULK_WINDOW_AP_KIND"*/ : &StringLiteral_12055/*"SHOP_BULK_WINDOW_ORIGIN_KIND"*/);
          v21 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get(*v20, 0);
          ShopBuyBulkItemConfirmMenu__SetLabelText(v21, v19, (System_String_o *)v21, v22);
          v13 = this->fields.commonConsumeEntities;
          ++v14;
          if ( v13 )
            continue;
        }
      }
      goto LABEL_32;
    }
    exchangeDestinationCountKind = this->fields.exchangeDestinationCountKind;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12050/*"SHOP_BULK_WINDOW_DESTINATION_KIND"*/, 0);
    ShopBuyBulkItemConfirmMenu__SetLabelText(v24, exchangeDestinationCountKind, (System_String_o *)v24, v25);
  }
}


void ShopBuyBulkItemConfirmMenu__SetDecideButtonImage(
        ShopBuyBulkItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isBuyable,
        const MethodInfo *method)
{
  ShopBuyBulkItemConfirmMenu_o *v6; // x19
  Il2CppObject *MasterData_object; // x21
  struct ShopEntity_o *v8; // x8
  ShopBuyBulkItemConfirmMenu_o *v9; // x0
  UISprite_o *decideButtonImg; // x19
  System_String_o **p_monitor; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4C590F4 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C3E564(&ShopBuyBulkItemConfirmMenu_TypeInfo);
    this = (ShopBuyBulkItemConfirmMenu_o *)sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C590F4 = 1;
  }
  entity = 0;
  if ( !isBuyable )
    goto LABEL_14;
  if ( !shopEntity )
    goto LABEL_18;
  if ( shopEntity->fields.purchaseType != 1 )
    goto LABEL_14;
  this = (ShopBuyBulkItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___);
  this = (ShopBuyBulkItemConfirmMenu_o *)ShopEntity__get_TargetId(shopEntity, 0);
  if ( !MasterData_object )
    goto LABEL_18;
  this = (ShopBuyBulkItemConfirmMenu_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                           &entity,
                                           (int32_t)this,
                                           (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_14;
  v8 = v6->fields.shopEntity;
  if ( !v8 )
LABEL_18:
    sub_1C3E7C0(this, shopEntity);
  if ( v8->fields.shopType == 9 )
  {
    v9 = (ShopBuyBulkItemConfirmMenu_o *)ShopBuyBulkItemConfirmMenu_TypeInfo;
    decideButtonImg = v6->fields.decideButtonImg;
    if ( !ShopBuyBulkItemConfirmMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyBulkItemConfirmMenu_TypeInfo);
      v9 = (ShopBuyBulkItemConfirmMenu_o *)ShopBuyBulkItemConfirmMenu_TypeInfo;
    }
    p_monitor = (System_String_o **)&v9->fields.itemSlider->monitor;
    goto LABEL_17;
  }
LABEL_14:
  v9 = (ShopBuyBulkItemConfirmMenu_o *)ShopBuyBulkItemConfirmMenu_TypeInfo;
  decideButtonImg = v6->fields.decideButtonImg;
  if ( !ShopBuyBulkItemConfirmMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyBulkItemConfirmMenu_TypeInfo);
    v9 = (ShopBuyBulkItemConfirmMenu_o *)ShopBuyBulkItemConfirmMenu_TypeInfo;
  }
  p_monitor = (System_String_o **)v9->fields.itemSlider;
LABEL_17:
  ShopBuyBulkItemConfirmMenu__SetSpriteName(v9, decideButtonImg, *p_monitor, method);
}


void ShopBuyBulkItemConfirmMenu__SetExchangeDestinationCount(
        ShopBuyBulkItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        int32_t count,
        const MethodInfo *method)
{
  ShopBuyBulkItemConfirmMenu_o *v6; // x19
  struct ShopEntity_o *v7; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x22
  UILabel_o *exchangeDestinationCount; // x19
  int64_t v10; // x0
  __int64 setNum; // x23
  System_String_o *NumberFormatLong; // x21
  System_String_o *v13; // x0
  Il2CppObject *v14; // x21
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v16; // x3
  System_String_o *v17; // x0
  UILabel_o *v18; // x19
  __int64 v19; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v6 = this;
  if ( (byte_4C590FF & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&ShopBuyBulkItemConfirmMenu_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_12051/*"SHOP_BULK_WINDOW_DISABLE_ITEM_COLOR"*/);
    this = (ShopBuyBulkItemConfirmMenu_o *)sub_1C3E564(&StringLiteral_12055/*"SHOP_BULK_WINDOW_ORIGIN_KIND"*/);
    byte_4C590FF = 1;
  }
  entity = 0;
  if ( shopEntity )
  {
    v7 = v6->fields.shopEntity;
    if ( !v7 )
      goto LABEL_33;
    if ( v7->fields.purchaseType != 1 )
      goto LABEL_15;
    this = (ShopBuyBulkItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_33;
    this = (ShopBuyBulkItemConfirmMenu_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !v6->fields.shopEntity )
      goto LABEL_33;
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    this = (ShopBuyBulkItemConfirmMenu_o *)ShopEntity__get_TargetId(v6->fields.shopEntity, 0);
    if ( !v8 )
      goto LABEL_33;
    this = (ShopBuyBulkItemConfirmMenu_o *)DataMasterBase_object__object__int___TryGetEntity(
                                             v8,
                                             &entity,
                                             (int32_t)this,
                                             (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_15;
    if ( !entity )
      goto LABEL_33;
    if ( LODWORD(entity[3].klass) == 1 )
    {
      exchangeDestinationCount = v6->fields.exchangeDestinationCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = count;
    }
    else
    {
LABEL_15:
      if ( v6->fields.displayMode == 1 )
      {
        setNum = shopEntity->fields.setNum;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        NumberFormatLong = LocalizationManager__GetNumberFormatLong(setNum * count, 0);
        v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12055/*"SHOP_BULK_WINDOW_ORIGIN_KIND"*/, 0);
        v14 = (Il2CppObject *)System_String__Concat_63636468(NumberFormatLong, v13, 0);
        SelfUserGame = UserGameMaster__getSelfUserGame(0);
        if ( ShopBuyBulkItemConfirmMenu__GetUserItemBuyableCount(v6, shopEntity, SelfUserGame, v16) <= 0 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12051/*"SHOP_BULK_WINDOW_DISABLE_ITEM_COLOR"*/, 0);
          v14 = (Il2CppObject *)System_String__Format(v17, v14, 0);
        }
        this = (ShopBuyBulkItemConfirmMenu_o *)v6->fields.exchangeDestinationCount;
        if ( this )
        {
          UILabel__set_text((UILabel_o *)this, (System_String_o *)v14, 0);
          v18 = v6->fields.exchangeDestinationCount;
          this = (ShopBuyBulkItemConfirmMenu_o *)ShopBuyBulkItemConfirmMenu_TypeInfo;
          if ( !ShopBuyBulkItemConfirmMenu_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ShopBuyBulkItemConfirmMenu_TypeInfo);
          if ( v18 )
          {
            UILabel__SetCondensedScale(
              v18,
              ShopBuyBulkItemConfirmMenu_TypeInfo->static_fields->EXCHANGE_ITEM_INFO_WIDTH,
              0,
              0);
            return;
          }
        }
        goto LABEL_33;
      }
      exchangeDestinationCount = v6->fields.exchangeDestinationCount;
      v19 = shopEntity->fields.setNum;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = v19 * count;
    }
    this = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__GetNumberFormatLong(v10, 0);
    if ( exchangeDestinationCount )
    {
      UILabel__set_text(exchangeDestinationCount, (System_String_o *)this, 0);
      return;
    }
LABEL_33:
    sub_1C3E7C0(this, shopEntity);
  }
}


void ShopBuyBulkItemConfirmMenu__SetExchangeDestinationItemIcon(
        ShopBuyBulkItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  ShopBuyBulkItemConfirmMenu_o *v4; // x20
  ItemIconComponent_o *exchangeDestinationItemIcons; // x20

  if ( this->fields.displayMode == 1 )
  {
    if ( !shopEntity )
      goto LABEL_7;
    v4 = this;
    if ( ShopEntity__get_TargetMax(shopEntity, 0) >= 1 )
    {
      exchangeDestinationItemIcons = v4->fields.exchangeDestinationItemIcons;
      this = (ShopBuyBulkItemConfirmMenu_o *)ShopEntity__get_TargetId(shopEntity, 0);
      if ( exchangeDestinationItemIcons )
      {
        ItemIconComponent__SetItemImage(exchangeDestinationItemIcons, (int32_t)this, 0);
        return;
      }
LABEL_7:
      sub_1C3E7C0(this, shopEntity);
    }
  }
}


void ShopBuyBulkItemConfirmMenu__SetExchangeDestinationText(
        ShopBuyBulkItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isBuyable,
        const MethodInfo *method)
{
  ShopBuyBulkItemConfirmMenu_o *v6; // x19
  Il2CppObject *MasterData_object; // x21
  struct ShopEntity_o *v8; // x8
  UILabel_o *exchangeDestination; // x19
  __int64 *v10; // x8
  ShopBuyBulkItemConfirmMenu_o *v11; // x0
  const MethodInfo *v12; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4C590EC & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_12049/*"SHOP_BULK_WINDOW_DESTINATION"*/);
    this = (ShopBuyBulkItemConfirmMenu_o *)sub_1C3E564(&StringLiteral_8282/*"LIMIT_MATERIAL_DESTINATION"*/);
    byte_4C590EC = 1;
  }
  entity = 0;
  if ( !isBuyable )
    goto LABEL_14;
  if ( !shopEntity )
    goto LABEL_18;
  if ( shopEntity->fields.purchaseType != 1 )
    goto LABEL_14;
  this = (ShopBuyBulkItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___);
  this = (ShopBuyBulkItemConfirmMenu_o *)ShopEntity__get_TargetId(shopEntity, 0);
  if ( !MasterData_object )
    goto LABEL_18;
  this = (ShopBuyBulkItemConfirmMenu_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                           &entity,
                                           (int32_t)this,
                                           (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_14;
  v8 = v6->fields.shopEntity;
  if ( !v8 )
LABEL_18:
    sub_1C3E7C0(this, shopEntity);
  if ( v8->fields.shopType == 9 )
  {
    exchangeDestination = v6->fields.exchangeDestination;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = &StringLiteral_8282/*"LIMIT_MATERIAL_DESTINATION"*/;
    goto LABEL_17;
  }
LABEL_14:
  exchangeDestination = v6->fields.exchangeDestination;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = &StringLiteral_12049/*"SHOP_BULK_WINDOW_DESTINATION"*/;
LABEL_17:
  v11 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v10, 0);
  ShopBuyBulkItemConfirmMenu__SetLabelText(v11, exchangeDestination, (System_String_o *)v11, v12);
}


void ShopBuyBulkItemConfirmMenu__SetExchangeObjects(ShopBuyBulkItemConfirmMenu_o *this, const MethodInfo *method)
{
  struct ShopEntity_o *shopEntity; // x8
  UnityEngine_Object_o *exchangeOriginDispObject1; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *exchangeOriginDispObject2; // x0
  UILabel_o *exchangeOrigin; // x20
  ShopBuyBulkItemConfirmMenu_o *v8; // x0
  const MethodInfo *v9; // x3
  unsigned __int64 v10; // x22
  struct UILabel_array *exchangeOriginCountKinds; // x8
  UILabel_o *v12; // x20
  ShopBuyBulkItemConfirmMenu_o *v13; // x0
  const MethodInfo *v14; // x3
  UILabel_o *exchangeDestinationCountKind; // x19
  ShopBuyBulkItemConfirmMenu_o *v16; // x0
  const MethodInfo *v17; // x3

  if ( (byte_4C590EA & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_12054/*"SHOP_BULK_WINDOW_ORIGIN"*/);
    sub_1C3E564(&StringLiteral_12050/*"SHOP_BULK_WINDOW_DESTINATION_KIND"*/);
    sub_1C3E564(&StringLiteral_12055/*"SHOP_BULK_WINDOW_ORIGIN_KIND"*/);
    byte_4C590EA = 1;
  }
  shopEntity = this->fields.shopEntity;
  if ( shopEntity && shopEntity->fields.payType == 14 )
  {
    ShopBuyBulkItemConfirmMenu__SetCommonConsumeExchangeObjects(this, method);
    return;
  }
  exchangeOriginDispObject1 = (UnityEngine_Object_o *)this->fields.exchangeOriginDispObject1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(exchangeOriginDispObject1, 0, 0) )
  {
    exchangeOriginDispObject2 = this->fields.exchangeOriginDispObject1;
    if ( !exchangeOriginDispObject2 )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(exchangeOriginDispObject2, 1, 0);
    exchangeOriginDispObject2 = this->fields.exchangeOriginDispObject2;
    if ( !exchangeOriginDispObject2 )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(exchangeOriginDispObject2, this->fields.itemCount > 1, 0);
    exchangeOrigin = this->fields.exchangeOrigin;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12054/*"SHOP_BULK_WINDOW_ORIGIN"*/, 0);
    ShopBuyBulkItemConfirmMenu__SetLabelText(v8, exchangeOrigin, (System_String_o *)v8, v9);
    if ( this->fields.itemCount >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
        if ( !exchangeOriginCountKinds )
          break;
        if ( v10 >= LODWORD(exchangeOriginCountKinds->max_length) )
          sub_1C3E7C8(exchangeOriginDispObject2, v5);
        v12 = exchangeOriginCountKinds->m_Items[v10];
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v13 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12055/*"SHOP_BULK_WINDOW_ORIGIN_KIND"*/, 0);
        ShopBuyBulkItemConfirmMenu__SetLabelText(v13, v12, (System_String_o *)v13, v14);
        if ( (__int64)++v10 >= this->fields.itemCount )
          goto LABEL_20;
      }
LABEL_23:
      sub_1C3E7C0(exchangeOriginDispObject2, v5);
    }
  }
LABEL_20:
  exchangeDestinationCountKind = this->fields.exchangeDestinationCountKind;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12050/*"SHOP_BULK_WINDOW_DESTINATION_KIND"*/, 0);
  ShopBuyBulkItemConfirmMenu__SetLabelText(v16, exchangeDestinationCountKind, (System_String_o *)v16, v17);
}


void ShopBuyBulkItemConfirmMenu__SetExchangeOriginCount(
        ShopBuyBulkItemConfirmMenu_o *this,
        int32_t itemCount,
        int32_t count,
        const MethodInfo *method)
{
  UILabel_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  struct ShopEntity_o *shopEntity; // x8
  struct UILabel_array *exchangeOriginCounts; // x22
  int max_length; // w8
  unsigned int v12; // w20
  struct UILabel_array *exchangeOriginCountKinds; // x19
  int v14; // w8
  unsigned int v15; // w20
  int v16; // w8
  unsigned int v17; // w23
  struct UILabel_array *v18; // x22
  int v19; // w8
  unsigned int v20; // w23
  const MethodInfo *v21; // x3
  UILabel_o *v22; // x21
  struct UILabel_array *v23; // x8
  UILabel_o *v24; // x22
  int32_t v25; // w19
  ShopBuyBulkItemConfirmMenu_o *v26; // x0
  const MethodInfo *v27; // x3
  UILabel_o *v28; // x1
  int32_t Prices; // w21
  ShopBuyBulkItemConfirmMenu_o *NumberFormatLong; // x0
  const MethodInfo *v31; // x3
  struct UILabel_array *v32; // x8
  UILabel_o *v33; // x19
  int32_t v34; // w0
  __int64 v35; // x22
  __int64 i; // x23
  struct UILabel_array *v37; // x8
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v39; // x26
  UnityEngine_Object_o *v40; // x20
  struct UILabel_array *v41; // x8
  __int64 v42; // x9
  UILabel_o *v43; // x20
  __int64 v44; // x26
  ShopBuyBulkItemConfirmMenu_o *v45; // x0
  const MethodInfo *v46; // x3
  __int64 v47; // x9

  if ( (byte_4C590FD & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C590FD = 1;
  }
  IsNullOrEmpty = (UILabel_o *)BasicHelper__IsNullOrEmpty(
                                 (System_Collections_ICollection_o *)this->fields.exchangeOriginCounts,
                                 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return;
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_70;
  exchangeOriginCounts = this->fields.exchangeOriginCounts;
  if ( shopEntity->fields.payType == 13 )
  {
    if ( exchangeOriginCounts )
    {
      max_length = exchangeOriginCounts->max_length;
      if ( max_length >= 1 )
      {
        v12 = 0;
        while ( v12 < max_length )
        {
          IsNullOrEmpty = exchangeOriginCounts->m_Items[v12];
          if ( !IsNullOrEmpty )
            goto LABEL_70;
          IsNullOrEmpty = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)IsNullOrEmpty,
                                         0);
          if ( !IsNullOrEmpty )
            goto LABEL_70;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 0, 0);
          max_length = exchangeOriginCounts->max_length;
          if ( (int)++v12 >= max_length )
            goto LABEL_13;
        }
        goto LABEL_71;
      }
LABEL_13:
      exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
      if ( exchangeOriginCountKinds )
      {
        v14 = exchangeOriginCountKinds->max_length;
        if ( v14 >= 1 )
        {
          v15 = 0;
          while ( v15 < v14 )
          {
            IsNullOrEmpty = exchangeOriginCountKinds->m_Items[v15];
            if ( !IsNullOrEmpty )
              goto LABEL_70;
            IsNullOrEmpty = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)IsNullOrEmpty,
                                           0);
            if ( !IsNullOrEmpty )
              goto LABEL_70;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 0, 0);
            v14 = exchangeOriginCountKinds->max_length;
            if ( (int)++v15 >= v14 )
              return;
          }
          goto LABEL_71;
        }
        return;
      }
    }
LABEL_70:
    sub_1C3E7C0(IsNullOrEmpty, v8);
  }
  if ( !exchangeOriginCounts )
    goto LABEL_70;
  v16 = exchangeOriginCounts->max_length;
  if ( v16 >= 1 )
  {
    v17 = 0;
    while ( v17 < v16 )
    {
      IsNullOrEmpty = exchangeOriginCounts->m_Items[v17];
      if ( !IsNullOrEmpty )
        goto LABEL_70;
      IsNullOrEmpty = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0);
      if ( !IsNullOrEmpty )
        goto LABEL_70;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 1, 0);
      v16 = exchangeOriginCounts->max_length;
      if ( (int)++v17 >= v16 )
        goto LABEL_28;
    }
LABEL_71:
    sub_1C3E7C8(IsNullOrEmpty, v8);
  }
LABEL_28:
  v18 = this->fields.exchangeOriginCountKinds;
  if ( !v18 )
    goto LABEL_70;
  v19 = v18->max_length;
  if ( v19 >= 1 )
  {
    v20 = 0;
    while ( v20 < v19 )
    {
      IsNullOrEmpty = v18->m_Items[v20];
      if ( !IsNullOrEmpty )
        goto LABEL_70;
      IsNullOrEmpty = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0);
      if ( !IsNullOrEmpty )
        goto LABEL_70;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 1, 0);
      v19 = v18->max_length;
      if ( (int)++v20 >= v19 )
        goto LABEL_35;
    }
    goto LABEL_71;
  }
LABEL_35:
  IsNullOrEmpty = (UILabel_o *)this->fields.shopEntity;
  if ( !IsNullOrEmpty )
    goto LABEL_70;
  if ( *(&IsNullOrEmpty->fields.updateAnchors + 1) != 14 )
  {
    v23 = this->fields.exchangeOriginCounts;
    if ( !v23 )
      goto LABEL_70;
    if ( !LODWORD(v23->max_length) )
      goto LABEL_71;
    v24 = v23->m_Items[0];
    if ( itemCount >= 2 )
    {
      Prices = ShopEntity__GetPrices((ShopEntity_o *)IsNullOrEmpty, 1, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      NumberFormatLong = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__GetNumberFormatLong(
                                                           Prices * (__int64)count,
                                                           0);
      ShopBuyBulkItemConfirmMenu__SetLabelText(NumberFormatLong, v24, (System_String_o *)NumberFormatLong, v31);
      v32 = this->fields.exchangeOriginCounts;
      if ( !v32 )
        goto LABEL_70;
      if ( LODWORD(v32->max_length) <= 1 )
        goto LABEL_71;
      IsNullOrEmpty = (UILabel_o *)this->fields.shopEntity;
      if ( !IsNullOrEmpty )
        goto LABEL_70;
      v33 = v32->m_Items[1];
      v34 = ShopEntity__GetPrices((ShopEntity_o *)IsNullOrEmpty, 0, 0);
      v26 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__GetNumberFormatLong(v34 * (__int64)count, 0);
      v28 = v33;
    }
    else
    {
      v25 = ShopEntity__GetPrices((ShopEntity_o *)IsNullOrEmpty, 0, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__GetNumberFormatLong(v25 * (__int64)count, 0);
      v28 = v24;
    }
    ShopBuyBulkItemConfirmMenu__SetLabelText(v26, v28, (System_String_o *)v26, v27);
    return;
  }
  IsNullOrEmpty = (UILabel_o *)ShopEntity__GetCommonConsumeEntities((ShopEntity_o *)IsNullOrEmpty, 0);
  if ( IsNullOrEmpty )
  {
    v22 = IsNullOrEmpty;
    if ( this->fields.displayMode == 1 )
    {
      ShopBuyBulkItemConfirmMenu__SetApSeedExchangeOriginCountOnTerminal(
        this,
        (CommonConsumeEntity_array *)IsNullOrEmpty,
        count,
        v21);
      return;
    }
    if ( SLODWORD(IsNullOrEmpty->fields.m_CancellationTokenSource) >= 1 )
    {
      v35 = count;
      for ( i = 4; ; ++i )
      {
        v37 = this->fields.exchangeOriginCounts;
        if ( !v37 )
          break;
        max_length_low = LODWORD(v37->max_length);
        v39 = i - 4;
        if ( i - 4 < (int)max_length_low )
        {
          if ( v39 >= max_length_low )
            goto LABEL_71;
          v40 = (UnityEngine_Object_o *)*((_QWORD *)&v37->obj.klass + i);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          IsNullOrEmpty = (UILabel_o *)UnityEngine_Object__op_Inequality(v40, 0, 0);
          if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
          {
            v41 = this->fields.exchangeOriginCounts;
            if ( !v41 )
              goto LABEL_70;
            if ( v39 >= LODWORD(v41->max_length) || v39 >= LODWORD(v22->fields.m_CancellationTokenSource) )
              goto LABEL_71;
            v42 = *((_QWORD *)&v22->klass + i);
            if ( !v42 )
              goto LABEL_70;
            v43 = (UILabel_o *)*((_QWORD *)&v41->obj.klass + i);
            v44 = *(int *)(v42 + 32);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v45 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__GetNumberFormatLong(v44 * v35, 0);
            ShopBuyBulkItemConfirmMenu__SetLabelText(v45, v43, (System_String_o *)v45, v46);
          }
        }
        v47 = i - 3;
        if ( v47 >= SLODWORD(v22->fields.m_CancellationTokenSource) )
          return;
      }
      goto LABEL_70;
    }
  }
}


void ShopBuyBulkItemConfirmMenu__SetExchangeOriginItemIcon(
        ShopBuyBulkItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  ShopBuyBulkItemConfirmMenu_o *v3; // x19
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  __int64 i; // x21
  struct ItemIconComponent_array *exchangeOriginItemIcons; // x8
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v8; // x23
  UnityEngine_Object_o *v9; // x20
  struct CommonConsumeEntity_array *v10; // x8
  __int64 v11; // x20
  struct ItemIconComponent_array *v12; // x8
  struct CommonConsumeEntity_array *v13; // x8
  __int64 v14; // x9

  v3 = this;
  if ( (byte_4C590F0 & 1) == 0 )
  {
    this = (ShopBuyBulkItemConfirmMenu_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C590F0 = 1;
  }
  if ( v3->fields.displayMode == 1 && v3->fields.exchangeOriginItemIcons )
  {
    commonConsumeEntities = v3->fields.commonConsumeEntities;
    if ( !commonConsumeEntities )
      goto LABEL_25;
    if ( SLODWORD(commonConsumeEntities->max_length) >= 2 )
    {
      for ( i = 4; ; ++i )
      {
        exchangeOriginItemIcons = v3->fields.exchangeOriginItemIcons;
        if ( !exchangeOriginItemIcons )
          break;
        max_length_low = LODWORD(exchangeOriginItemIcons->max_length);
        v8 = i - 4;
        if ( i - 4 >= (int)max_length_low )
          return;
        if ( v8 >= max_length_low )
          goto LABEL_26;
        v9 = (UnityEngine_Object_o *)*((_QWORD *)&exchangeOriginItemIcons->obj.klass + i);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ShopBuyBulkItemConfirmMenu_o *)UnityEngine_Object__op_Equality(v9, 0, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v10 = v3->fields.commonConsumeEntities;
          if ( !v10 )
            break;
          if ( v8 >= LODWORD(v10->max_length) )
            goto LABEL_26;
          v11 = *((_QWORD *)&v10->obj.klass + i);
          if ( !v11 )
            break;
          this = (ShopBuyBulkItemConfirmMenu_o *)CommonConsumeEntity__get_IsAp(
                                                   *((CommonConsumeEntity_o **)&v10->obj.klass + i),
                                                   0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v12 = v3->fields.exchangeOriginItemIcons;
            if ( !v12 )
              break;
            if ( v8 >= LODWORD(v12->max_length) )
LABEL_26:
              sub_1C3E7C8(this, shopEntity);
            this = (ShopBuyBulkItemConfirmMenu_o *)*((_QWORD *)&v12->obj.klass + i);
            if ( !this )
              break;
            ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, *(_DWORD *)(v11 + 28), 0);
          }
        }
        v13 = v3->fields.commonConsumeEntities;
        if ( !v13 )
          break;
        v14 = i - 3;
        if ( v14 >= SLODWORD(v13->max_length) )
          return;
      }
LABEL_25:
      sub_1C3E7C0(this, shopEntity);
    }
  }
}


void ShopBuyBulkItemConfirmMenu__SetExchangeOriginItemName(
        ShopBuyBulkItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  DataManager_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  struct System_Int32_array *v7; // x8
  unsigned __int64 v8; // x21
  struct System_Int32_array *v9; // x8
  struct UILabel_array *v10; // x8
  _BOOL8 v11; // x9
  UILabel_o *v12; // x8
  struct System_Int32_array *itemIds; // x8
  struct UILabel_array *v14; // x8
  UILabel_o *v15; // x8
  System_String_o *m_CancellationTokenSource; // x1
  UILabel_o *v17; // x0
  struct UILabel_array *exchangeOriginItemNames; // x8
  UILabel_o *v19; // x19
  __int64 *v20; // x8
  struct UILabel_array *v21; // x8
  struct UILabel_array *v22; // x8
  struct UILabel_array *v23; // x8
  struct UILabel_array *v24; // x8
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  il2cpp_array_size_t max_length; // x9
  struct UILabel_array *v27; // x9
  __int64 i; // x22
  unsigned __int64 v29; // x25
  struct UILabel_array *v30; // x9
  unsigned __int64 max_length_low; // x10
  CommonConsumeEntity_o *v32; // x20
  UnityEngine_Object_o *v33; // x21
  struct UILabel_array *v34; // x8
  UILabel_o *v35; // x21
  struct UILabel_array *v36; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  ShopBuyBulkItemConfirmMenu_c *v38; // x8
  UnityEngine_GameObject_o *v39; // x20
  __int64 v40; // x10

  if ( (byte_4C590EF & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&ShopBuyBulkItemConfirmMenu_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_12372/*"STONE_NAME"*/);
    sub_1C3E564(&StringLiteral_10817/*"QP_NAME"*/);
    sub_1C3E564(&StringLiteral_8535/*"MANA_NAME"*/);
    sub_1C3E564(&StringLiteral_10961/*"RARE_PRI_NEED_INFO"*/);
    sub_1C3E564(&StringLiteral_12106/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/);
    byte_4C590EF = 1;
  }
  IsNullOrEmpty = (DataManager_o *)BasicHelper__IsNullOrEmpty(
                                     (System_Collections_ICollection_o *)this->fields.exchangeOriginItemNames,
                                     0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return;
  if ( !shopEntity )
    goto LABEL_64;
  switch ( shopEntity->fields.payType )
  {
    case 1:
      exchangeOriginItemNames = this->fields.exchangeOriginItemNames;
      if ( !exchangeOriginItemNames )
        goto LABEL_64;
      if ( !LODWORD(exchangeOriginItemNames->max_length) )
        goto LABEL_91;
      v19 = exchangeOriginItemNames->m_Items[0];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v20 = &StringLiteral_12372/*"STONE_NAME"*/;
      goto LABEL_55;
    case 2:
      v21 = this->fields.exchangeOriginItemNames;
      if ( !v21 )
        goto LABEL_64;
      if ( !LODWORD(v21->max_length) )
        goto LABEL_91;
      v19 = v21->m_Items[0];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v20 = &StringLiteral_10817/*"QP_NAME"*/;
      goto LABEL_55;
    case 4:
      v22 = this->fields.exchangeOriginItemNames;
      if ( !v22 )
        goto LABEL_64;
      if ( !LODWORD(v22->max_length) )
        goto LABEL_91;
      v19 = v22->m_Items[0];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v20 = &StringLiteral_8535/*"MANA_NAME"*/;
      goto LABEL_55;
    case 6:
    case 8:
    case 9:
    case 0xB:
    case 0xC:
      IsNullOrEmpty = (DataManager_o *)ShopEntity__GetItemCount(shopEntity, 0);
      if ( (int)IsNullOrEmpty < 2 )
      {
        IsNullOrEmpty = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !IsNullOrEmpty )
          goto LABEL_64;
        IsNullOrEmpty = (DataManager_o *)DataManager__GetMasterData_object_(
                                           IsNullOrEmpty,
                                           (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___);
        itemIds = shopEntity->fields.itemIds;
        if ( !itemIds )
          goto LABEL_64;
        if ( LODWORD(itemIds->max_length) )
        {
          if ( !IsNullOrEmpty )
            goto LABEL_64;
          IsNullOrEmpty = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty,
                                             itemIds->m_Items[0],
                                             (const MethodInfo_33B2F58 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !IsNullOrEmpty )
            goto LABEL_64;
          v14 = this->fields.exchangeOriginItemNames;
          if ( !v14 )
            goto LABEL_64;
          if ( LODWORD(v14->max_length) )
          {
            v15 = v14->m_Items[0];
            if ( v15 )
            {
              m_CancellationTokenSource = (System_String_o *)IsNullOrEmpty->fields.m_CancellationTokenSource;
              v17 = v15;
LABEL_57:
              UILabel__set_text(v17, m_CancellationTokenSource, 0);
              return;
            }
            goto LABEL_64;
          }
        }
LABEL_91:
        sub_1C3E7C8(IsNullOrEmpty, v6);
      }
      v7 = shopEntity->fields.itemIds;
      if ( !v7 )
        goto LABEL_64;
      v8 = 0;
      while ( (__int64)v8 < SLODWORD(v7->max_length) )
      {
        IsNullOrEmpty = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( IsNullOrEmpty )
        {
          IsNullOrEmpty = (DataManager_o *)DataManager__GetMasterData_object_(
                                             IsNullOrEmpty,
                                             (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___);
          v9 = shopEntity->fields.itemIds;
          if ( v9 )
          {
            if ( v8 >= LODWORD(v9->max_length) )
              goto LABEL_91;
            if ( IsNullOrEmpty )
            {
              IsNullOrEmpty = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty,
                                                 v9->m_Items[v8],
                                                 (const MethodInfo_33B2F58 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
              if ( IsNullOrEmpty )
              {
                v10 = this->fields.exchangeOriginItemNames;
                v11 = v8 == 0;
                if ( v10 )
                {
                  if ( (unsigned int)v11 >= LODWORD(v10->max_length) )
                    goto LABEL_91;
                  v12 = v10->m_Items[v11];
                  if ( v12 )
                  {
                    UILabel__set_text(v12, (System_String_o *)IsNullOrEmpty->fields.m_CancellationTokenSource, 0);
                    v7 = shopEntity->fields.itemIds;
                    ++v8;
                    if ( v7 )
                      continue;
                  }
                }
              }
            }
          }
        }
        goto LABEL_64;
      }
      return;
    case 0xA:
      v23 = this->fields.exchangeOriginItemNames;
      if ( !v23 )
        goto LABEL_64;
      if ( !LODWORD(v23->max_length) )
        goto LABEL_91;
      v19 = v23->m_Items[0];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v20 = &StringLiteral_10961/*"RARE_PRI_NEED_INFO"*/;
      goto LABEL_55;
    case 0xD:
      v24 = this->fields.exchangeOriginItemNames;
      if ( !v24 )
        goto LABEL_64;
      if ( !LODWORD(v24->max_length) )
        goto LABEL_91;
      v19 = v24->m_Items[0];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v20 = &StringLiteral_12106/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/;
LABEL_55:
      IsNullOrEmpty = (DataManager_o *)LocalizationManager__Get((System_String_o *)*v20, 0);
      if ( v19 )
        goto LABEL_56;
      goto LABEL_64;
    case 0xE:
      commonConsumeEntities = this->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        return;
      max_length = commonConsumeEntities->max_length;
      if ( (_DWORD)max_length == 1 )
      {
        v27 = this->fields.exchangeOriginItemNames;
        if ( !v27 )
          goto LABEL_64;
        if ( LODWORD(v27->max_length) )
        {
          IsNullOrEmpty = (DataManager_o *)commonConsumeEntities->m_Items[0];
          if ( IsNullOrEmpty )
          {
            v19 = v27->m_Items[0];
            IsNullOrEmpty = (DataManager_o *)CommonConsumeEntity__GetName((CommonConsumeEntity_o *)IsNullOrEmpty, 0);
            if ( v19 )
            {
LABEL_56:
              m_CancellationTokenSource = (System_String_o *)IsNullOrEmpty;
              v17 = v19;
              goto LABEL_57;
            }
          }
LABEL_64:
          sub_1C3E7C0(IsNullOrEmpty, v6);
        }
      }
      else
      {
        if ( (int)max_length < 2 )
          return;
        for ( i = 4; ; ++i )
        {
          v29 = i - 4;
          if ( i - 4 >= (unsigned __int64)(unsigned int)max_length )
            break;
          v30 = this->fields.exchangeOriginItemNames;
          if ( !v30 )
            goto LABEL_64;
          max_length_low = LODWORD(v30->max_length);
          v32 = (CommonConsumeEntity_o *)*((_QWORD *)&commonConsumeEntities->obj.klass + i);
          if ( (__int64)v29 < (int)max_length_low )
          {
            if ( v29 >= max_length_low )
              goto LABEL_91;
            v33 = (UnityEngine_Object_o *)*((_QWORD *)&v30->obj.klass + i);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            IsNullOrEmpty = (DataManager_o *)UnityEngine_Object__op_Inequality(v33, 0, 0);
            if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
            {
              v34 = this->fields.exchangeOriginItemNames;
              if ( !v34 )
                goto LABEL_64;
              if ( v29 >= LODWORD(v34->max_length) )
                goto LABEL_91;
              if ( !v32 )
                goto LABEL_64;
              v35 = (UILabel_o *)*((_QWORD *)&v34->obj.klass + i);
              IsNullOrEmpty = (DataManager_o *)CommonConsumeEntity__GetName(v32, 0);
              if ( !v35 )
                goto LABEL_64;
              UILabel__set_text(v35, (System_String_o *)IsNullOrEmpty, 0);
            }
          }
          if ( this->fields.displayMode == 1 )
          {
            if ( !v32 )
              goto LABEL_64;
            IsNullOrEmpty = (DataManager_o *)CommonConsumeEntity__get_IsAp(v32, 0);
            if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
            {
              v36 = this->fields.exchangeOriginItemNames;
              if ( !v36 )
                goto LABEL_64;
              if ( v29 >= LODWORD(v36->max_length) )
                goto LABEL_91;
              IsNullOrEmpty = (DataManager_o *)*((_QWORD *)&v36->obj.klass + i);
              if ( !IsNullOrEmpty )
                goto LABEL_64;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0);
              v38 = ShopBuyBulkItemConfirmMenu_TypeInfo;
              v39 = gameObject;
              if ( !ShopBuyBulkItemConfirmMenu_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ShopBuyBulkItemConfirmMenu_TypeInfo);
                v38 = ShopBuyBulkItemConfirmMenu_TypeInfo;
              }
              GameObjectExtensions__AddLocalPositionX(v39, (float)v38->static_fields->EXCHANGE_AP_NAME_OFFSET_X, 0);
            }
          }
          commonConsumeEntities = this->fields.commonConsumeEntities;
          if ( !commonConsumeEntities )
            goto LABEL_64;
          LODWORD(max_length) = commonConsumeEntities->max_length;
          v40 = i - 3;
          if ( v40 >= (int)max_length )
            return;
        }
      }
      goto LABEL_91;
    default:
      return;
  }
}


void ShopBuyBulkItemConfirmMenu__SetItemSlider(
        ShopBuyBulkItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isPreparation,
        UserGameEntity_o *userGameEntity,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  UISliderWithButton_o *ItemSliderMax; // x0
  __int64 v10; // x1
  int32_t v11; // w19

  ItemSliderMax = (UISliderWithButton_o *)ShopBuyBulkItemConfirmMenu__GetItemSliderMax(
                                            this,
                                            shopEntity,
                                            userGameEntity,
                                            item,
                                            (const MethodInfo *)item);
  if ( !shopEntity )
LABEL_17:
    sub_1C3E7C0(ItemSliderMax, v10);
  v11 = (int)ItemSliderMax;
  if ( shopEntity->fields.payType == 8 || this->fields.displayMode == 1 )
  {
    ItemSliderMax = this->fields.itemSlider;
    if ( v11 >= 2 && !isPreparation )
    {
      if ( !ItemSliderMax )
        goto LABEL_17;
      goto LABEL_14;
    }
    if ( !ItemSliderMax )
      goto LABEL_17;
    if ( this->fields.displayMode == 1 )
      v11 = 1;
LABEL_13:
    UISliderWithButton__grayMode(ItemSliderMax, 0);
    goto LABEL_15;
  }
  ItemSliderMax = this->fields.itemSlider;
  if ( !ItemSliderMax )
    goto LABEL_17;
  if ( isPreparation )
    goto LABEL_13;
LABEL_14:
  UISliderWithButton__normalMode(ItemSliderMax, 0);
LABEL_15:
  ItemSliderMax = this->fields.itemSlider;
  if ( !ItemSliderMax )
    goto LABEL_17;
  UISliderWithButton__init(ItemSliderMax, v11, 0, 1, 0);
}


void ShopBuyBulkItemConfirmMenu__SetLabelActive(
        ShopBuyBulkItemConfirmMenu_o *this,
        UILabel_o *label,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4C590E6 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C590E6 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0)) == 0 )
      sub_1C3E7C0(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
  }
}


void ShopBuyBulkItemConfirmMenu__SetLabelText(
        ShopBuyBulkItemConfirmMenu_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C590E7 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C590E7 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( !v6 )
  {
    if ( !label )
      sub_1C3E7C0(v6, v7);
    WrapControlText__textAdjust(label, text, label->fields.mFontSize, 0, 0);
  }
}


void ShopBuyBulkItemConfirmMenu__SetPresentAheadText(
        ShopBuyBulkItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isBuyable,
        const MethodInfo *method)
{
  ShopBuyBulkItemConfirmMenu_o *v6; // x19
  int32_t purchaseType; // w8
  UILabel_o *presentAheadLabel; // x19
  __int64 *v9; // x8
  UILabel_o *v10; // x1
  ShopBuyBulkItemConfirmMenu_o *v11; // x2
  Il2CppObject *MasterData_object; // x21
  int klass; // w8
  int32_t shopType; // w20
  UILabel_o *v15; // x19
  __int64 *v16; // x8
  struct ShopEntity_o *v17; // x8
  int32_t v18; // w21
  UILabel_o *v19; // x20
  const MethodInfo *v20; // x3
  UISprite_o *decideButtonImg; // x19
  ShopBuyBulkItemConfirmMenu_o *v22; // x0
  ShopBuyBulkItemConfirmMenu_o *v23; // x1
  UILabel_o *v24; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4C590F3 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&ShopBuyBulkItemConfirmMenu_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_10486/*"PURCHASE_AFTER_COSTUME"*/);
    sub_1C3E564(&StringLiteral_10491/*"PURCHASE_AFTER_USER_ITEM"*/);
    sub_1C3E564(&StringLiteral_10488/*"PURCHASE_AFTER_ITEM_SET"*/);
    sub_1C3E564(&StringLiteral_8283/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/);
    sub_1C3E564(&StringLiteral_10489/*"PURCHASE_AFTER_PRESENT_BOX"*/);
    sub_1C3E564(&StringLiteral_10493/*"PURCHASE_AFTER_USER_SVT_COIN_PERIOD"*/);
    sub_1C3E564(&StringLiteral_10490/*"PURCHASE_AFTER_QP"*/);
    sub_1C3E564(&StringLiteral_10492/*"PURCHASE_AFTER_USER_SVT_COIN"*/);
    this = (ShopBuyBulkItemConfirmMenu_o *)sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C590F3 = 1;
  }
  entity = 0;
  if ( isBuyable )
  {
    if ( !shopEntity )
      goto LABEL_54;
    purchaseType = shopEntity->fields.purchaseType;
    if ( purchaseType > 14 )
    {
      if ( purchaseType != 21 && purchaseType != 19 )
        goto LABEL_31;
      goto LABEL_12;
    }
    if ( purchaseType > 4 )
    {
      if ( purchaseType == 5 )
      {
        presentAheadLabel = v6->fields.presentAheadLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v9 = &StringLiteral_10488/*"PURCHASE_AFTER_ITEM_SET"*/;
        goto LABEL_15;
      }
      if ( purchaseType == 14 )
      {
        presentAheadLabel = v6->fields.presentAheadLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v9 = &StringLiteral_10486/*"PURCHASE_AFTER_COSTUME"*/;
        goto LABEL_15;
      }
      goto LABEL_31;
    }
    if ( purchaseType != 1 )
    {
      if ( purchaseType == 4 )
      {
LABEL_12:
        presentAheadLabel = v6->fields.presentAheadLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v9 = &StringLiteral_10489/*"PURCHASE_AFTER_PRESENT_BOX"*/;
LABEL_15:
        this = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v9, 0);
        v10 = presentAheadLabel;
        v11 = this;
LABEL_32:
        ShopBuyBulkItemConfirmMenu__SetLabelText(this, v10, (System_String_o *)v11, method);
        return;
      }
LABEL_31:
      v10 = v6->fields.presentAheadLabel;
      v11 = (ShopBuyBulkItemConfirmMenu_o *)StringLiteral_1/*""*/;
      goto LABEL_32;
    }
    this = (ShopBuyBulkItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_54;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___);
    this = (ShopBuyBulkItemConfirmMenu_o *)ShopEntity__get_TargetId(shopEntity, 0);
    if ( !MasterData_object )
      goto LABEL_54;
    this = (ShopBuyBulkItemConfirmMenu_o *)DataMasterBase_object__object__int___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                             &entity,
                                             (int32_t)this,
                                             (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_31;
    if ( !entity )
      goto LABEL_54;
    klass = (int)entity[3].klass;
    if ( klass != 1 )
    {
      if ( klass == 29 )
      {
        shopType = shopEntity->fields.shopType;
        v15 = v6->fields.presentAheadLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( shopType == 17 )
          v16 = &StringLiteral_10493/*"PURCHASE_AFTER_USER_SVT_COIN_PERIOD"*/;
        else
          v16 = &StringLiteral_10492/*"PURCHASE_AFTER_USER_SVT_COIN"*/;
      }
      else
      {
        v15 = v6->fields.presentAheadLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v16 = &StringLiteral_10491/*"PURCHASE_AFTER_USER_ITEM"*/;
      }
      this = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v16, 0);
      if ( v15 )
      {
        v23 = this;
        v24 = v15;
LABEL_53:
        UILabel__set_text(v24, (System_String_o *)v23, 0);
        return;
      }
      goto LABEL_54;
    }
    v17 = v6->fields.shopEntity;
    if ( !v17 )
      goto LABEL_54;
    v18 = v17->fields.shopType;
    v19 = v6->fields.presentAheadLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v18 != 9 )
    {
      this = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10490/*"PURCHASE_AFTER_QP"*/, 0);
      if ( v19 )
      {
        v23 = this;
        v24 = v19;
        goto LABEL_53;
      }
LABEL_54:
      sub_1C3E7C0(this, shopEntity);
    }
    this = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8283/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/, 0);
    if ( !v19 )
      goto LABEL_54;
    UILabel__set_text(v19, (System_String_o *)this, 0);
    decideButtonImg = v6->fields.decideButtonImg;
    v22 = (ShopBuyBulkItemConfirmMenu_o *)ShopBuyBulkItemConfirmMenu_TypeInfo;
    if ( !ShopBuyBulkItemConfirmMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyBulkItemConfirmMenu_TypeInfo);
      v22 = (ShopBuyBulkItemConfirmMenu_o *)ShopBuyBulkItemConfirmMenu_TypeInfo;
    }
    ShopBuyBulkItemConfirmMenu__SetSpriteName(
      v22,
      decideButtonImg,
      (System_String_o *)v22->fields.itemSlider->monitor,
      v20);
  }
}


bool ShopBuyBulkItemConfirmMenu__SetShopNotEnableWarning(
        ShopBuyBulkItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  ShopEntity_o *decideButton; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  ShopBuyBulkItemConfirmMenu_o *v9; // x0
  const MethodInfo *v10; // x3
  UILabel_o *warningLabel; // x20
  ShopBuyBulkItemConfirmMenu_o *v12; // x0
  const MethodInfo *v13; // x3

  if ( (byte_4C590F7 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_ShopBuyBulkItemConfirmMenu_SetShopNotEnableWarning__);
    sub_1C3E564(&StringLiteral_12065/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/);
    byte_4C590F7 = 1;
  }
  if ( !shopEntity )
    return 0;
  decideButton = this->fields.shopEntity;
  if ( !decideButton )
    goto LABEL_14;
  if ( ShopEntity__IsEnable(decideButton, 0, 0) )
    return 0;
  v7 = Method_ShopBuyBulkItemConfirmMenu_SetShopNotEnableWarning__;
  if ( (*((_BYTE *)Method_ShopBuyBulkItemConfirmMenu_SetShopNotEnableWarning__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C3E57C(Method_ShopBuyBulkItemConfirmMenu_SetShopNotEnableWarning__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C3E548(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
  ShopBuyBulkItemConfirmMenu__SetLabelActive(v9, this->fields.warningLabel, 1, v10);
  warningLabel = this->fields.warningLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12065/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, 0);
  ShopBuyBulkItemConfirmMenu__SetLabelText(v12, warningLabel, (System_String_o *)v12, v13);
  decideButton = (ShopEntity_o *)this->fields.decideButton;
  if ( !decideButton
    || (((void (__fastcall *)(ShopEntity_o *, __int64, _QWORD, void *))decideButton->klass[1]._1.fields)(
          decideButton,
          3,
          0,
          decideButton->klass[1]._1.events),
        (decideButton = (ShopEntity_o *)this->fields.exchangeBase) == 0) )
  {
LABEL_14:
    sub_1C3E7C0(decideButton, shopEntity);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0);
  return 1;
}


void ShopBuyBulkItemConfirmMenu__SetSpriteActive(
        ShopBuyBulkItemConfirmMenu_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4C590E8 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C590E8 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0)) == 0 )
      sub_1C3E7C0(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
  }
}


void ShopBuyBulkItemConfirmMenu__SetSpriteName(
        ShopBuyBulkItemConfirmMenu_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C590E9 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C590E9 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( !v6 )
  {
    if ( !sprite )
      sub_1C3E7C0(v6, v7);
    UISprite__set_spriteName(sprite, spriteName, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyBulkItemConfirmMenu__SetWarningActive(
        ShopBuyBulkItemConfirmMenu_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *exchangeBase; // x0
  ShopBuyBulkItemConfirmMenu_o *v6; // x0
  const MethodInfo *v7; // x3
  bool v8; // w21
  ShopBuyBulkItemConfirmMenu_o *v9; // x0
  const MethodInfo *v10; // x3

  exchangeBase = this->fields.exchangeBase;
  if ( !exchangeBase )
    sub_1C3E7C0(0, isActive);
  if ( this->fields.displayMode == 1 )
  {
    UnityEngine_GameObject__SetActive(exchangeBase, 1, 0);
    v8 = !isActive;
  }
  else
  {
    v8 = !isActive;
    UnityEngine_GameObject__SetActive(exchangeBase, !isActive, 0);
  }
  ShopBuyBulkItemConfirmMenu__SetLabelActive(v6, this->fields.warningLabel, isActive, v7);
  ShopBuyBulkItemConfirmMenu__SetLabelActive(v9, this->fields.presentAheadLabel, v8, v10);
}


void ShopBuyBulkItemConfirmMenu__SetWarningText(
        ShopBuyBulkItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isPreparation,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  ShopBuyBulkItemConfirmMenu_o *v8; // x19
  UILabel_o *warningLabel; // x23
  unsigned int payType; // w8
  UILabel_o *v11; // x19
  __int64 *v12; // x8
  const MethodInfo *v13; // x3
  int32_t m_CancellationTokenSource; // w20
  int32_t PresentBoxMax; // w8
  struct ShopEntity_o *v16; // x9
  int v17; // w22
  struct System_Int32_array *itemIds; // x8
  UserItemMaster_o *v19; // x23
  unsigned __int64 v20; // x24
  struct System_Int32_array *v21; // x8
  int m_CancellationTokenSource_high; // w28
  System_Text_StringBuilder_o *v23; // x22
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  __int64 v25; // x25
  char v26; // w27
  int max_length; // w9
  CommonConsumeEntity_o *v28; // x23
  Il2CppObject *MasterData_object; // x20
  int32_t v30; // w20
  BalanceConfig_c *v31; // x8
  int32_t UserItemMax; // w9
  int32_t v33; // w22
  UILabel_o *v34; // x1
  ShopBuyBulkItemConfirmMenu_o *v35; // x2
  UILabel_o *v36; // x20
  System_String_o *v37; // x21
  Il2CppObject *v38; // x0
  UILabel_o *v39; // x19
  int32_t buyQuestNum[2]; // [xsp+0h] [xbp-70h] BYREF
  int32_t buyCmdCodeNum[2]; // [xsp+8h] [xbp-68h] BYREF
  int32_t buyServantNum[2]; // [xsp+18h] [xbp-58h] BYREF

  v8 = this;
  if ( (byte_4C590F2 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&ShopBuyBulkItemConfirmMenu_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&System_Text_StringBuilder_TypeInfo);
    sub_1C3E564(&StringLiteral_12081/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/);
    sub_1C3E564(&StringLiteral_12072/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/);
    sub_1C3E564(&StringLiteral_12082/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/);
    sub_1C3E564(&StringLiteral_12046/*"SHOP_BULK_WINDOW_COMMON_CONSUME_CONFIRM_WARNING"*/);
    sub_1C3E564(&StringLiteral_12047/*"SHOP_BULK_WINDOW_CONNECT_WARDS_CHAR"*/);
    sub_1C3E564(&StringLiteral_12064/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/);
    sub_1C3E564(&StringLiteral_12074/*"SHOP_BUY_ITEM_FULL_WARNING"*/);
    sub_1C3E564(&StringLiteral_12077/*"SHOP_BUY_ITEM_OVER_WARNING"*/);
    this = (ShopBuyBulkItemConfirmMenu_o *)sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C590F2 = 1;
  }
  *(_QWORD *)buyServantNum = 0;
  *(_QWORD *)buyQuestNum = 0;
  *(_QWORD *)buyCmdCodeNum = 0;
  if ( v8->fields.displayMode != 1 )
  {
    warningLabel = v8->fields.warningLabel;
    this = (ShopBuyBulkItemConfirmMenu_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !warningLabel )
      goto LABEL_44;
    UILabel__set_fontSize(warningLabel, BalanceConfig_TypeInfo->static_fields->DefaultFontSize, 0);
  }
  if ( !shopEntity )
    goto LABEL_44;
  payType = shopEntity->fields.payType;
  if ( payType > 0xE )
    goto LABEL_12;
  if ( ((1 << payType) & 0x3B40) != 0 )
  {
    if ( ShopEntity__GetItemCount(shopEntity, 0) >= 2 )
    {
      this = (ShopBuyBulkItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (ShopBuyBulkItemConfirmMenu_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserItemMaster___);
        itemIds = shopEntity->fields.itemIds;
        if ( itemIds )
        {
          v19 = (UserItemMaster_o *)this;
          v20 = 0;
          while ( 1 )
          {
            if ( (__int64)v20 >= SLODWORD(itemIds->max_length) )
              goto LABEL_12;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C50AE2 )
            {
              sub_1C3E564(&NetworkManager_TypeInfo);
              byte_4C50AE2 = 1;
            }
            this = (ShopBuyBulkItemConfirmMenu_o *)NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              this = (ShopBuyBulkItemConfirmMenu_o *)NetworkManager_TypeInfo;
            }
            v21 = shopEntity->fields.itemIds;
            if ( !v21 )
              goto LABEL_44;
            if ( v20 >= LODWORD(v21->max_length) )
              goto LABEL_110;
            if ( !v19 )
              goto LABEL_44;
            this = (ShopBuyBulkItemConfirmMenu_o *)UserItemMaster__GetEntityDefinitely(
                                                     v19,
                                                     *(_QWORD *)&this->fields.itemSlider->fields.mValue,
                                                     v21->m_Items[v20],
                                                     0);
            if ( !this )
              goto LABEL_44;
            m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
            this = (ShopBuyBulkItemConfirmMenu_o *)ShopEntity__GetPrices(shopEntity, v20, 0);
            if ( !(m_CancellationTokenSource_high / (int)this) )
              break;
            itemIds = shopEntity->fields.itemIds;
            ++v20;
            if ( !itemIds )
              goto LABEL_44;
          }
          v11 = v8->fields.warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v12 = &StringLiteral_12072/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/;
          goto LABEL_99;
        }
      }
      goto LABEL_44;
    }
LABEL_12:
    if ( isPreparation )
    {
      v11 = v8->fields.warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = &StringLiteral_12064/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/;
LABEL_99:
      this = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v12, 0);
      v34 = v11;
      v35 = this;
      goto LABEL_100;
    }
    *(_QWORD *)buyServantNum = 0;
    *(_QWORD *)buyQuestNum = 0;
    *(_QWORD *)buyCmdCodeNum = 0;
    this = (ShopBuyBulkItemConfirmMenu_o *)v8->fields.shopEntity;
    if ( this )
    {
      ShopEntity__GetSum(
        (ShopEntity_o *)this,
        &buyServantNum[1],
        buyServantNum,
        &buyCmdCodeNum[1],
        buyCmdCodeNum,
        &buyQuestNum[1],
        buyQuestNum,
        0);
      if ( buyCmdCodeNum[1] + buyServantNum[0] + buyCmdCodeNum[0] >= 1 )
      {
        this = (ShopBuyBulkItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_44;
        this = (ShopBuyBulkItemConfirmMenu_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
        if ( !userGameEntity )
          goto LABEL_44;
        if ( !this )
          goto LABEL_44;
        this = (ShopBuyBulkItemConfirmMenu_o *)UserPresentBoxMaster__getVaildList(
                                                 (UserPresentBoxMaster_o *)this,
                                                 userGameEntity->fields.userId,
                                                 0);
        if ( !this )
          goto LABEL_44;
        m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
        this = (ShopBuyBulkItemConfirmMenu_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (ShopBuyBulkItemConfirmMenu_o *)BalanceConfig_TypeInfo;
        }
        PresentBoxMax = *(_DWORD *)&this->fields.itemSlider->fields.mInverted;
        if ( PresentBoxMax <= m_CancellationTokenSource )
        {
          v11 = v8->fields.warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v12 = &StringLiteral_12081/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/;
          goto LABEL_99;
        }
        v16 = v8->fields.shopEntity;
        if ( !v16 )
          goto LABEL_44;
        if ( v16->fields.purchaseType == 5 )
          v17 = buyQuestNum[0];
        else
          v17 = buyCmdCodeNum[1] + buyServantNum[0] + buyCmdCodeNum[0];
        if ( !LODWORD(this->fields.exchangeOriginItemIcons) )
        {
          j_il2cpp_runtime_class_init_0(this);
          PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
        }
        if ( v17 + m_CancellationTokenSource > PresentBoxMax )
        {
          v11 = v8->fields.warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v12 = &StringLiteral_12082/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/;
          goto LABEL_99;
        }
      }
      if ( buyServantNum[1] < 1 )
        goto LABEL_95;
      this = (ShopBuyBulkItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C50AE2 )
        {
          sub_1C3E564(&NetworkManager_TypeInfo);
          byte_4C50AE2 = 1;
        }
        this = (ShopBuyBulkItemConfirmMenu_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (ShopBuyBulkItemConfirmMenu_o *)NetworkManager_TypeInfo;
        }
        if ( MasterData_object )
        {
          this = (ShopBuyBulkItemConfirmMenu_o *)UserItemMaster__getSum(
                                                   (UserItemMaster_o *)MasterData_object,
                                                   *(_QWORD *)&this->fields.itemSlider->fields.mValue,
                                                   0);
          v30 = (int)this;
          v31 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v31 = BalanceConfig_TypeInfo;
          }
          UserItemMax = v31->static_fields->UserItemMax;
          if ( v30 >= UserItemMax )
          {
            v11 = v8->fields.warningLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v12 = &StringLiteral_12074/*"SHOP_BUY_ITEM_FULL_WARNING"*/;
            goto LABEL_99;
          }
          v33 = buyServantNum[1];
          if ( !v31->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v31);
            UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
          }
          if ( v33 + v30 > UserItemMax )
          {
            v11 = v8->fields.warningLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v12 = &StringLiteral_12077/*"SHOP_BUY_ITEM_OVER_WARNING"*/;
            goto LABEL_99;
          }
LABEL_95:
          v34 = v8->fields.warningLabel;
          v35 = (ShopBuyBulkItemConfirmMenu_o *)StringLiteral_1/*""*/;
LABEL_100:
          ShopBuyBulkItemConfirmMenu__SetLabelText(this, v34, (System_String_o *)v35, v13);
          return;
        }
      }
    }
LABEL_44:
    sub_1C3E7C0(this, shopEntity);
  }
  if ( payType != 14 || v8->fields.displayMode != 1 || !v8->fields.commonConsumeEntities )
    goto LABEL_12;
  v23 = (System_Text_StringBuilder_o *)sub_1C3E7B0(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v23, 0);
  commonConsumeEntities = v8->fields.commonConsumeEntities;
  if ( !commonConsumeEntities )
    goto LABEL_44;
  v25 = 0;
  v26 = 0;
  while ( 1 )
  {
    max_length = commonConsumeEntities->max_length;
    if ( (int)v25 >= max_length )
      break;
    if ( (unsigned int)v25 >= max_length )
LABEL_110:
      sub_1C3E7C8(this, shopEntity);
    v28 = commonConsumeEntities->m_Items[v25];
    if ( !v28 )
      goto LABEL_44;
    if ( v28->fields.num >= 1 )
    {
      this = (ShopBuyBulkItemConfirmMenu_o *)CommonConsumeEntity__GetUserHasNum(v28, 0);
      if ( (int)this / v28->fields.num <= 0 )
      {
        if ( (v26 & 1) != 0 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12047/*"SHOP_BULK_WINDOW_CONNECT_WARDS_CHAR"*/, 0);
          if ( !v23 )
            goto LABEL_44;
          System_Text_StringBuilder__Append_63721532(v23, (System_String_o *)this, 0);
          this = (ShopBuyBulkItemConfirmMenu_o *)CommonConsumeEntity__GetName(v28, 0);
        }
        else
        {
          this = (ShopBuyBulkItemConfirmMenu_o *)CommonConsumeEntity__GetName(v28, 0);
          if ( !v23 )
            goto LABEL_44;
        }
        this = (ShopBuyBulkItemConfirmMenu_o *)System_Text_StringBuilder__Append_63721532(
                                                 v23,
                                                 (System_String_o *)this,
                                                 0);
        v26 = 1;
      }
    }
    commonConsumeEntities = v8->fields.commonConsumeEntities;
    ++v25;
    if ( !commonConsumeEntities )
      goto LABEL_44;
  }
  if ( !v23 )
    goto LABEL_44;
  if ( System_Text_StringBuilder__get_Length(v23, 0) < 1 )
    goto LABEL_12;
  v36 = v8->fields.warningLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_12046/*"SHOP_BULK_WINDOW_COMMON_CONSUME_CONFIRM_WARNING"*/, 0);
  v38 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v23->klass->vtable._3_ToString.methodPtr)(
                          v23,
                          v23->klass->vtable._3_ToString.method);
  this = (ShopBuyBulkItemConfirmMenu_o *)System_String__Format(v37, v38, 0);
  if ( !v36 )
    goto LABEL_44;
  UILabel__set_text(v36, (System_String_o *)this, 0);
  v39 = v8->fields.warningLabel;
  this = (ShopBuyBulkItemConfirmMenu_o *)ShopBuyBulkItemConfirmMenu_TypeInfo;
  if ( !ShopBuyBulkItemConfirmMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyBulkItemConfirmMenu_TypeInfo);
  if ( !v39 )
    goto LABEL_44;
  UILabel__SetCondensedScale(v39, ShopBuyBulkItemConfirmMenu_TypeInfo->static_fields->WARNING_LABEL_MAX_WIDTH, 0, 0);
}


int32_t ShopBuyBulkItemConfirmMenu__ShowCommandCodeInfomation(
        ShopBuyBulkItemConfirmMenu_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  Il2CppObject *v8; // x20
  CommonUI_o *v9; // x21
  ServantStatusDialog_EndDelegate_o *v10; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C59102 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C3E564(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_1C3E564(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C3E564(&Method_ShopBuyBulkItemConfirmMenu_EndShowServantEquipStatusDialog__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C59102 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_9;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         commandCodeId,
         (const MethodInfo_33B2FA4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
  {
    v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = entity;
    v9 = (CommonUI_o *)v7;
    v10 = (ServantStatusDialog_EndDelegate_o *)sub_1C3E7B0(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v10,
      (Il2CppObject *)this,
      Method_ShopBuyBulkItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0);
    if ( v9 )
    {
      CommonUI__OpenServantEquipStatusDialog_31254672(v9, 25, (CommandCodeEntity_o *)v8, 0, v10, 0, 0);
      return 0;
    }
LABEL_9:
    sub_1C3E7C0(Instance, v6);
  }
  return 0;
}


int32_t ShopBuyBulkItemConfirmMenu__ShowItemInfomation(
        ShopBuyBulkItemConfirmMenu_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  Il2CppObject *v8; // x20
  CommonUI_o *v9; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v10; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C59101 & 1) == 0 )
  {
    sub_1C3E564(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_ShopBuyBulkItemConfirmMenu_EndShowItemDetailDialog__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C59101 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_9;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         itemId,
         (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = entity;
    v9 = (CommonUI_o *)v7;
    v10 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C3E7B0(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      (intptr_t)Method_ShopBuyBulkItemConfirmMenu_EndShowItemDetailDialog__,
      0);
    if ( v9 )
    {
      CommonUI__OpenItemDetailDialog(v9, (ItemEntity_o *)v8, v10, 50, 0);
      return 0;
    }
LABEL_9:
    sub_1C3E7C0(Instance, v6);
  }
  return 0;
}


int32_t ShopBuyBulkItemConfirmMenu__ShowOtherInfomation(
        ShopBuyBulkItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  Il2CppObject *Instance; // x0
  System_String_o *name; // x21
  System_String_o *infoMessage; // x20
  CommonUI_o *v8; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v9; // x23

  v4 = (Il2CppObject *)this;
  if ( (byte_4C59103 & 1) == 0 )
  {
    sub_1C3E564(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_ShopBuyBulkItemConfirmMenu_EndShowItemDetailDialog__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ShopBuyBulkItemConfirmMenu_o *)sub_1C3E564(&StringLiteral_9276/*"NONE"*/);
    byte_4C59103 = 1;
  }
  if ( !shopEntity )
    goto LABEL_9;
  if ( !System_String__IsNullOrEmpty(shopEntity->fields.infoMessage, 0)
    && System_String__op_Inequality(shopEntity->fields.infoMessage, (System_String_o *)StringLiteral_9276/*"NONE"*/, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    name = shopEntity->fields.name;
    infoMessage = shopEntity->fields.infoMessage;
    v8 = (CommonUI_o *)Instance;
    v9 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C3E7B0(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v9,
      v4,
      (intptr_t)Method_ShopBuyBulkItemConfirmMenu_EndShowItemDetailDialog__,
      0);
    if ( v8 )
    {
      CommonUI__OpenItemDetailDialog_31317860(v8, name, infoMessage, v9, 0);
      return 0;
    }
LABEL_9:
    sub_1C3E7C0(this, shopEntity);
  }
  return 0;
}


int32_t ShopBuyBulkItemConfirmMenu__ShowServantInfomation(
        ShopBuyBulkItemConfirmMenu_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x21
  ServantLeaderInfo_o *v8; // x22
  ServantStatusDialog_EndDelegate_o *v9; // x20
  Il2CppObject *v11; // x21
  EquipTargetInfo_o *v12; // x22
  ServantStatusDialog_EndDelegate_o *v13; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C59100 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C3E564(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C3E564(&EquipTargetInfo_TypeInfo);
    sub_1C3E564(&ServantLeaderInfo_TypeInfo);
    sub_1C3E564(&Method_ShopBuyBulkItemConfirmMenu_EndShowServantEquipStatusDialog__);
    sub_1C3E564(&Method_ShopBuyBulkItemConfirmMenu_EndShowServantStatusDialog__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C59100 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_21;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          servantId,
          (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return -1;
  Instance = entity;
  if ( !entity )
    goto LABEL_21;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0) )
    goto LABEL_12;
  Instance = entity;
  if ( !entity )
    goto LABEL_21;
  if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)entity, 0) )
    goto LABEL_12;
  Instance = entity;
  if ( !entity )
    goto LABEL_21;
  if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)entity, 0) )
  {
LABEL_12:
    v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (ServantLeaderInfo_o *)sub_1C3E7B0(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_43531924(v8, servantId, 0, 1, 0);
    v9 = (ServantStatusDialog_EndDelegate_o *)sub_1C3E7B0(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ShopBuyBulkItemConfirmMenu_EndShowServantStatusDialog__,
      0);
    if ( v7 )
    {
      CommonUI__OpenServantStatusDialog_31250580((CommonUI_o *)v7, 7, v8, v9, 0);
      return 0;
    }
    goto LABEL_21;
  }
  Instance = entity;
  if ( !entity )
    goto LABEL_21;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0) )
  {
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (EquipTargetInfo_o *)sub_1C3E7B0(EquipTargetInfo_TypeInfo);
    EquipTargetInfo___ctor_41759588(v12, servantId, 0, 1, 0, 0);
    v13 = (ServantStatusDialog_EndDelegate_o *)sub_1C3E7B0(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v13,
      (Il2CppObject *)this,
      Method_ShopBuyBulkItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0);
    if ( v11 )
    {
      CommonUI__OpenServantEquipStatusDialog_31253688((CommonUI_o *)v11, 7, v12, v13, 0, 0);
      return 0;
    }
LABEL_21:
    sub_1C3E7C0(Instance, v6);
  }
  return 2;
}


void ShopBuyBulkItemConfirmMenu__SliderValueChange(ShopBuyBulkItemConfirmMenu_o *this, const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v4; // x3
  struct ShopEntity_o *shopEntity; // x8
  int v6; // w20
  struct CommonConsumeEntity_array *commonConsumeEntities; // x10
  int max_length; // w8
  __int64 v9; // x9
  int64_t v10; // x21
  CommonConsumeEntity_o **m_Items; // x10
  CommonConsumeEntity_o *v12; // x11
  int64_t num; // x11
  int32_t v14; // w22
  int32_t v15; // w0
  int32_t itemCount; // w1
  int32_t v17; // w20
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3

  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_19;
  itemSlider = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(itemSlider, 0);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_19;
  v6 = (int)itemSlider;
  if ( shopEntity->fields.payType != 14 )
  {
    if ( this->fields.itemCount >= 1 )
    {
      v10 = 0;
      v14 = 1;
      while ( 1 )
      {
        itemSlider = (UISliderWithButton_o *)ShopEntity__GetPrices(shopEntity, v14 - 1, 0);
        if ( v10 < (int)itemSlider )
          v10 = (int)itemSlider;
        if ( v14 >= this->fields.itemCount )
          goto LABEL_21;
        shopEntity = this->fields.shopEntity;
        ++v14;
        if ( !shopEntity )
          goto LABEL_19;
      }
    }
LABEL_20:
    v10 = 0;
LABEL_21:
    v15 = ShopBuyBulkItemConfirmMenu__ItemMaxOverCheck((ShopBuyBulkItemConfirmMenu_o *)itemSlider, v6, v10, v4);
    itemCount = this->fields.itemCount;
    v17 = v15;
    this->fields.buyCount = v15;
    ShopBuyBulkItemConfirmMenu__SetExchangeOriginCount(this, itemCount, v15, v18);
    ShopBuyBulkItemConfirmMenu__SetExchangeDestinationCount(this, this->fields.shopEntity, v17, v19);
    return;
  }
  commonConsumeEntities = this->fields.commonConsumeEntities;
  if ( commonConsumeEntities )
  {
    max_length = commonConsumeEntities->max_length;
    if ( max_length >= 1 )
    {
      v9 = 0;
      v10 = 0;
      m_Items = commonConsumeEntities->m_Items;
      while ( 1 )
      {
        if ( (unsigned int)v9 >= max_length )
          sub_1C3E7C8(itemSlider, method);
        v12 = m_Items[v9];
        if ( !v12 )
          break;
        num = v12->fields.num;
        ++v9;
        if ( v10 < num )
          v10 = num;
        if ( (int)v9 >= max_length )
          goto LABEL_21;
      }
LABEL_19:
      sub_1C3E7C0(itemSlider, method);
    }
    goto LABEL_20;
  }
}


void ShopBuyBulkItemConfirmMenu__UpdateCountValue(
        ShopBuyBulkItemConfirmMenu_o *this,
        int32_t count,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x3

  ShopBuyBulkItemConfirmMenu__SetExchangeOriginCount(this, this->fields.itemCount, count, v3);
  ShopBuyBulkItemConfirmMenu__SetExchangeDestinationCount(this, this->fields.shopEntity, count, v6);
}


System_String_o *ShopBuyBulkItemConfirmMenu__get_closeBtnPath(
        ShopBuyBulkItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C590E4 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_15651/*"Window/CancelButton"*/);
    byte_4C590E4 = 1;
  }
  return (System_String_o *)StringLiteral_15651/*"Window/CancelButton"*/;
}