void ShopBuyBulkItemConfirmMenu___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct ShopBuyBulkItemConfirmMenu_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct ShopBuyBulkItemConfirmMenu_StaticFields *v16; // x8

  if ( (byte_5972C83 & 1) == 0 )
  {
    sub_2213A60(&ShopBuyBulkItemConfirmMenu_TypeInfo);
    sub_2213A60(&StringLiteral_18393/*"btn_txt_trade"*/);
    sub_2213A60(&StringLiteral_18370/*"btn_txt_sale"*/);
    byte_5972C83 = 1;
  }
  v7 = StringLiteral_18393/*"btn_txt_trade"*/;
  ShopBuyBulkItemConfirmMenu_TypeInfo->static_fields->DECIED_BTN_NAME_DEFAULT = (struct System_String_o *)StringLiteral_18393/*"btn_txt_trade"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ShopBuyBulkItemConfirmMenu_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_18370/*"btn_txt_sale"*/;
  static_fields = ShopBuyBulkItemConfirmMenu_TypeInfo->static_fields;
  static_fields->DECIED_BTN_NAME_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_18370/*"btn_txt_sale"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->DECIED_BTN_NAME_LIMIT_MATERIAL,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = ShopBuyBulkItemConfirmMenu_TypeInfo->static_fields;
  *(_QWORD *)&v16->WARNING_LABEL_MAX_WIDTH = 0xFA000002A8LL;
  v16->EXCHANGE_AP_NAME_OFFSET_X = -30;
}


void ShopBuyBulkItemConfirmMenu___ctor(ShopBuyBulkItemConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_5972C82 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5972C82 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ShopBuyBulkItemConfirmMenu__CallOnClose(ShopBuyBulkItemConfirmMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_o *onClose; // x19

  onClose = this->fields.onClose;
  if ( onClose )
  {
    this->fields.onClose = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onClose, 0, v2, v3, v4, v5, v6, v7);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_int__o *onDecide; // x20

  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    this->fields.onDecide = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onDecide->fields.invoke_impl)(
      onDecide->fields.method_code,
      (unsigned int)result,
      onDecide->fields.method);
  }
}


void ShopBuyBulkItemConfirmMenu__Close(ShopBuyBulkItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ShopBuyBulkItemConfirmMenu__Close_52334680(this, 0, v2);
}


void ShopBuyBulkItemConfirmMenu__Close_52334680(
        ShopBuyBulkItemConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_5972C6F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ShopBuyBulkItemConfirmMenu_EndClose__);
    byte_5972C6F = 1;
  }
  this->fields.onClose = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClose,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ShopBuyBulkItemConfirmMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void ShopBuyBulkItemConfirmMenu__EndClose(ShopBuyBulkItemConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  ShopBuyBulkItemConfirmMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
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

  if ( (byte_5972C81 & 1) == 0 )
  {
    sub_2213A60(&Method_ShopBuyBulkItemConfirmMenu_EndShowItemDetailDialog__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5972C81 = 1;
  }
  v3 = Method_ShopBuyBulkItemConfirmMenu_EndShowItemDetailDialog__;
  if ( (*((_BYTE *)Method_ShopBuyBulkItemConfirmMenu_EndShowItemDetailDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ShopBuyBulkItemConfirmMenu_EndShowItemDetailDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
}


void ShopBuyBulkItemConfirmMenu__EndShowServantEquipStatusDialog(
        ShopBuyBulkItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5972C80 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5972C80 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0, 0);
}


void ShopBuyBulkItemConfirmMenu__EndShowServantStatusDialog(
        ShopBuyBulkItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5972C7F & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5972C7F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
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
  Il2CppObject *MasterData_object; // x22
  __int64 v12; // x1
  int32_t v13; // w23
  NetworkManager_c *v14; // x0
  int64_t userIdNumber; // x25
  int m_CancellationTokenSource_high; // w25
  int32_t m_CancellationTokenSource; // w20
  int32_t PresentBoxMax; // w8
  struct ShopEntity_o *v19; // x9
  int v20; // w19
  Il2CppObject *v21; // x19
  __int64 v22; // x1
  int32_t Sum; // w19
  BalanceConfig_c *v24; // x8
  int32_t UserItemMax; // w9
  int32_t v26; // w21
  int32_t recordNum[2]; // [xsp+8h] [xbp-68h] BYREF
  int32_t buyCmdCodeNum[2]; // [xsp+10h] [xbp-60h] BYREF
  int32_t buyServantNum[2]; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5972C6B & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5972C6B = 1;
  }
  Instance = 0;
  *(_QWORD *)buyCmdCodeNum = 0;
  *(_QWORD *)buyServantNum = 0;
  *(_QWORD *)recordNum = 0;
  if ( !isPreparation )
  {
    if ( !shopEntity )
      goto LABEL_57;
    payType = shopEntity->fields.payType;
    if ( payType <= 0xE )
    {
      if ( ((1 << payType) & 0x3B40) != 0 )
      {
        if ( ShopEntity__GetItemCount(shopEntity, 0) > 1 )
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_57;
          MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( ShopEntity__GetItemCount(shopEntity, 0) >= 1 )
          {
            v13 = 0;
            while ( 1 )
            {
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
              if ( !byte_5969EF2 )
              {
                sub_2213A60(&NetworkManager_TypeInfo);
                byte_5969EF2 = 1;
              }
              v14 = NetworkManager_TypeInfo;
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
                v14 = NetworkManager_TypeInfo;
              }
              userIdNumber = v14->static_fields->userIdNumber;
              Instance = (DataManager_o *)ShopEntity__GetItemIDs(shopEntity, v13, 0);
              if ( !MasterData_object )
                break;
              Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(
                                            (UserItemMaster_o *)MasterData_object,
                                            userIdNumber,
                                            (int32_t)Instance,
                                            0);
              if ( !Instance )
                break;
              m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
              if ( !(m_CancellationTokenSource_high / ShopEntity__GetPrices(shopEntity, v13, 0)) )
                goto LABEL_54;
              if ( ++v13 >= ShopEntity__GetItemCount(shopEntity, 0) )
                goto LABEL_24;
            }
LABEL_57:
            sub_2213CDC(Instance, shopEntity);
          }
        }
      }
      else if ( payType == 14 )
      {
        LOBYTE(Instance) = ShopEntity__GetCommonConsumeBuyableCount(shopEntity, 0) > 0;
        return (char)Instance;
      }
    }
LABEL_24:
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_57;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
      if ( !userGameEntity )
        goto LABEL_57;
      if ( !Instance )
        goto LABEL_57;
      Instance = (DataManager_o *)UserPresentBoxMaster__getVaildList(
                                    (UserPresentBoxMaster_o *)Instance,
                                    userGameEntity->fields.userId,
                                    0);
      if ( !Instance )
        goto LABEL_57;
      m_CancellationTokenSource = (int32_t)Instance->fields.m_CancellationTokenSource;
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, shopEntity);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      PresentBoxMax = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 128LL);
      if ( PresentBoxMax <= m_CancellationTokenSource )
        goto LABEL_54;
      v19 = this->fields.shopEntity;
      if ( !v19 )
        goto LABEL_57;
      if ( v19->fields.purchaseType == 5 )
        v20 = recordNum[0];
      else
        v20 = buyCmdCodeNum[1] + buyServantNum[0] + buyCmdCodeNum[0];
      if ( !HIDWORD(Instance[1].fields.saveDataMapList) )
      {
        j_il2cpp_runtime_class_init_0(Instance, shopEntity);
        PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
      }
      if ( v20 + m_CancellationTokenSource > PresentBoxMax )
        goto LABEL_54;
    }
    if ( buyServantNum[1] < 1 )
      goto LABEL_55;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_57;
    v21 = DataManager__GetMasterData_object_(
            Instance,
            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, shopEntity);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, shopEntity);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !v21 )
      goto LABEL_57;
    Sum = UserItemMaster__getSum(
            (UserItemMaster_o *)v21,
            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
            0);
    v24 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v22);
      v24 = BalanceConfig_TypeInfo;
    }
    UserItemMax = v24->static_fields->UserItemMax;
    if ( Sum >= UserItemMax )
      goto LABEL_54;
    v26 = buyServantNum[1];
    if ( !*(&v24->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v24, v22);
      UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
    }
    if ( v26 + Sum <= UserItemMax )
LABEL_55:
      LOBYTE(Instance) = 1;
    else
LABEL_54:
      LOBYTE(Instance) = 0;
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
    sub_2213CDC(this, 0);
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
  __int64 UserItemBuyableCount; // x0
  __int64 v10; // x1
  int32_t v11; // w19
  int32_t LimitNum; // w0
  __int64 v13; // x1
  int32_t v14; // w21
  int32_t TotalNum_k__BackingField; // w24
  Il2CppObject *Master_object; // x21
  __int64 v17; // x1
  int32_t v18; // w20
  int32_t left; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5972C65 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    byte_5972C65 = 1;
  }
  left = 0;
  UserItemBuyableCount = ShopBuyBulkItemConfirmMenu__GetUserItemBuyableCount(
                           this,
                           shopEntity,
                           userGameEntity,
                           (const MethodInfo *)item);
  if ( !item )
    goto LABEL_16;
  v11 = UserItemBuyableCount;
  LimitNum = ShopBuyItemListViewItem__get_LimitNum(item, 0);
  if ( LimitNum )
  {
    v14 = LimitNum;
    TotalNum_k__BackingField = item->fields._TotalNum_k__BackingField;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v13);
    v11 = System_Math__Min_77153596(v11, v14 - TotalNum_k__BackingField, 0);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  UserItemBuyableCount = ShopBuyItemListViewItem__get_TargetId(item, 0);
  if ( !Master_object )
LABEL_16:
    sub_2213CDC(UserItemBuyableCount, v10);
  if ( UserItemMaster__TryGetItemMaxLeft((UserItemMaster_o *)Master_object, &left, UserItemBuyableCount, 0) )
  {
    v18 = left;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v17);
    return System_Math__Min_77153596(v11, v18, 0);
  }
  return v11;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ShopBuyBulkItemConfirmMenu__GetMaxAlertBase(
        ShopBuyBulkItemConfirmMenu_o *this,
        int32_t shopType,
        const MethodInfo *method)
{
  System_String_o **v4; // x8

  if ( (byte_5972C74 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_8632/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/);
    sub_2213A60(&StringLiteral_12647/*"SHOP_MAX_ALERT"*/);
    byte_5972C74 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&shopType);
  if ( shopType == 9 )
    v4 = (System_String_o **)&StringLiteral_8632/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/;
  else
    v4 = (System_String_o **)&StringLiteral_12647/*"SHOP_MAX_ALERT"*/;
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


// local variable allocation has failed, the output may be wrong!
System_String_o *ShopBuyBulkItemConfirmMenu__GetMaxOverItemName(
        ShopBuyBulkItemConfirmMenu_o *this,
        int32_t itemType,
        const MethodInfo *method)
{
  __int64 *v4; // x8

  if ( (byte_5972C73 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_11287/*"QP_NAME"*/);
    sub_2213A60(&StringLiteral_8897/*"MANA_NAME"*/);
    sub_2213A60(&StringLiteral_11435/*"RARE_PRI_NAME"*/);
    sub_2213A60(&StringLiteral_6836/*"FRIEND_POINT_NAME"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972C73 = 1;
  }
  if ( itemType <= 5 )
  {
    if ( itemType == 1 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&itemType);
      v4 = &StringLiteral_11287/*"QP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v4, 0);
    }
    if ( itemType == 5 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&itemType);
      v4 = &StringLiteral_8897/*"MANA_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v4, 0);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( itemType == 13 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&itemType);
    v4 = &StringLiteral_6836/*"FRIEND_POINT_NAME"*/;
    return LocalizationManager__Get((System_String_o *)*v4, 0);
  }
  if ( itemType != 22 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&itemType);
  v4 = &StringLiteral_11435/*"RARE_PRI_NAME"*/;
  return LocalizationManager__Get((System_String_o *)*v4, 0);
}


int32_t ShopBuyBulkItemConfirmMenu__GetUserItemBuyableCount(
        ShopBuyBulkItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  ShopBuyBulkItemConfirmMenu_o *v6; // x20
  int32_t payType; // w8
  __int64 v8; // x21
  int32_t stone; // w20
  Il2CppObject *MasterData_object; // x22
  __int64 v11; // x1
  int32_t v12; // w23
  NetworkManager_c *v13; // x0
  int64_t userIdNumber; // x25
  int m_CancellationTokenSource_high; // w25
  int v16; // w8
  int64_t qp; // x20

  v6 = this;
  if ( (byte_5972C66 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    this = (ShopBuyBulkItemConfirmMenu_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5972C66 = 1;
  }
  if ( !shopEntity )
    goto LABEL_48;
  payType = shopEntity->fields.payType;
  LODWORD(v8) = 0;
  if ( payType <= 9 )
  {
    if ( payType <= 5 )
    {
      switch ( payType )
      {
        case 1:
          if ( userGameEntity )
          {
            stone = userGameEntity->fields.stone;
            goto LABEL_46;
          }
          goto LABEL_48;
        case 2:
          if ( !userGameEntity )
            goto LABEL_48;
          qp = userGameEntity->fields.qp;
          return qp / ShopEntity__GetPrice(shopEntity, 0);
        case 4:
          if ( userGameEntity )
          {
            stone = userGameEntity->fields.mana;
LABEL_46:
            LODWORD(v8) = stone / ShopEntity__GetPrice(shopEntity, 0);
            return v8;
          }
          goto LABEL_48;
      }
      return v8;
    }
    if ( (unsigned int)(payType - 8) >= 2 && payType != 6 )
      return v8;
LABEL_18:
    this = (ShopBuyBulkItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_48;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( ShopEntity__GetItemCount(shopEntity, 0) >= 1 )
    {
      LODWORD(v8) = 0;
      v12 = 0;
      while ( 1 )
      {
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        v13 = NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
          v13 = NetworkManager_TypeInfo;
        }
        userIdNumber = v13->static_fields->userIdNumber;
        this = (ShopBuyBulkItemConfirmMenu_o *)ShopEntity__GetItemIDs(shopEntity, v12, 0);
        if ( !MasterData_object )
          break;
        this = (ShopBuyBulkItemConfirmMenu_o *)UserItemMaster__GetEntityDefinitely(
                                                 (UserItemMaster_o *)MasterData_object,
                                                 userIdNumber,
                                                 (int32_t)this,
                                                 0);
        if ( !this || !v6->fields.shopEntity )
          break;
        m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
        v16 = m_CancellationTokenSource_high / ShopEntity__GetPrices(v6->fields.shopEntity, v12, 0);
        if ( v16 < (int)v8 || v12++ == 0 )
          LODWORD(v8) = v16;
        if ( v12 >= ShopEntity__GetItemCount(shopEntity, 0) )
          return v8;
      }
      goto LABEL_48;
    }
    LODWORD(v8) = 0;
    return v8;
  }
  if ( payType > 12 )
  {
    if ( payType == 13 )
    {
      LODWORD(v8) = shopEntity->fields.limitNum;
    }
    else if ( payType == 14 )
    {
      return ShopEntity__GetCommonConsumeBuyableCount(shopEntity, 0);
    }
    return v8;
  }
  if ( (unsigned int)(payType - 11) < 2 )
    goto LABEL_18;
  if ( payType == 10 )
  {
    if ( userGameEntity )
    {
      stone = userGameEntity->fields.rarePri;
      goto LABEL_46;
    }
LABEL_48:
    sub_2213CDC(this, shopEntity);
  }
  return v8;
}


void ShopBuyBulkItemConfirmMenu__Init(ShopBuyBulkItemConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  this->fields.shopEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.shopEntity, 0, v5, v6, v7, v8, v9, v10);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


int64_t ShopBuyBulkItemConfirmMenu__ItemMaxOverCheck(
        ShopBuyBulkItemConfirmMenu_o *this,
        int64_t count,
        int64_t price,
        const MethodInfo *method)
{
  int64_t v5; // x20
  BalanceConfig_c *v6; // x0
  int64_t UserItemMax; // x8

  v5 = count;
  if ( (byte_5972C76 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_5972C76 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, count);
    v6 = BalanceConfig_TypeInfo;
  }
  UserItemMax = v6->static_fields->UserItemMax;
  if ( price * v5 > UserItemMax )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, count);
      UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
    }
    return UserItemMax / price;
  }
  return v5;
}


void ShopBuyBulkItemConfirmMenu__Modify(
        ShopBuyBulkItemConfirmMenu_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.state = 2;
  this->fields.onDecide = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ShopBuyBulkItemConfirmMenu__OnClickCancel(ShopBuyBulkItemConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v7; // x2

  if ( (byte_5972C75 & 1) == 0 )
  {
    sub_2213A60(&Method_ShopBuyBulkItemConfirmMenu_OnClickCancel__);
    byte_5972C75 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ShopBuyBulkItemConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ShopBuyBulkItemConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ShopBuyBulkItemConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_2213CDC(0, v5);
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

  if ( (byte_5972C70 & 1) == 0 )
  {
    sub_2213A60(&Method_ShopBuyBulkItemConfirmMenu_OnClickDecide__);
    byte_5972C70 = 1;
  }
  if ( this->fields.state == 2
    && !ShopBuyBulkItemConfirmMenu__SetShopNotEnableWarning(this, this->fields.shopEntity, v2)
    && !ShopBuyBulkItemConfirmMenu__OpenMaxAlertNotification(this, this->fields.shopEntity, v4) )
  {
    this->fields.state = 3;
    v5 = Method_ShopBuyBulkItemConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ShopBuyBulkItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_ShopBuyBulkItemConfirmMenu_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
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
    sub_2213CDC(this, 0);
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
  bool v6; // w6
  bool v7; // w7
  int32_t state; // w8
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct ShopEntity_o *shopEntity; // x0
  struct CommonConsumeEntity_array *CommonConsumeEntities; // x0
  int32_t v28; // w1
  struct CommonConsumeEntity_array **p_commonConsumeEntities; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v31; // x1
  bool IsPreparation; // w0
  int32_t buyCount; // w21
  bool v34; // w22
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x3
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct ShopBuyItemListViewObject_o *itemInfoPrefab; // x8
  UserGameEntity_o *v44; // x23
  const MethodInfo *v45; // x4
  char v46; // w21
  UILabel_o *exchangeDestinationItemName; // x24
  const MethodInfo *v48; // x4
  const MethodInfo *v49; // x5
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x3
  struct UILabel_o *warningLabel; // x8
  bool IsNullOrEmpty; // w0
  const MethodInfo *v60; // x2
  System_Action_o *v61; // x20
  System_String_o *itemName; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5972C5D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_ShopBuyItemListViewItemDraw___);
    sub_2213A60(&Method_ShopBuyBulkItemConfirmMenu_EndOpen__);
    byte_5972C5D = 1;
  }
  state = this->fields.state;
  message = 0;
  itemName = 0;
  if ( !state )
  {
    this->fields.onDecide = onDecide;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide,
      (int32_t)onDecide,
      (System_String_o *)item,
      (System_String_o *)onDecide,
      se,
      (int32_t)method,
      v6,
      v7);
    this->fields.shopEntity = entity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.shopEntity,
      (int32_t)entity,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    shopEntity = this->fields.shopEntity;
    if ( shopEntity && shopEntity->fields.payType == 14 )
    {
      CommonConsumeEntities = ShopEntity__GetCommonConsumeEntities(shopEntity, 0);
      v28 = (int)CommonConsumeEntities;
      this->fields.commonConsumeEntities = CommonConsumeEntities;
      p_commonConsumeEntities = &this->fields.commonConsumeEntities;
    }
    else
    {
      p_commonConsumeEntities = &this->fields.commonConsumeEntities;
      v28 = 0;
      this->fields.commonConsumeEntities = 0;
    }
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_commonConsumeEntities, v28, v20, v21, v22, v23, v24, v25);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.shopEntity;
    this->fields.buyCount = 1;
    this->fields.decideSe = se;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_GameObject_o *)ShopEntity__GetItemCount((ShopEntity_o *)gameObject, 0);
    this->fields.itemCount = (int)gameObject;
    if ( !item )
      goto LABEL_20;
    IsPreparation = ShopBuyItemListViewItem__GetIsPreparation(item, &message, &itemName, 0);
    buyCount = this->fields.buyCount;
    v34 = IsPreparation;
    ShopBuyBulkItemConfirmMenu__SetExchangeOriginCount(this, this->fields.itemCount, buyCount, v35);
    ShopBuyBulkItemConfirmMenu__SetExchangeDestinationCount(this, this->fields.shopEntity, buyCount, v36);
    gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0);
    itemInfoPrefab = this->fields.itemInfoPrefab;
    if ( !itemInfoPrefab )
      goto LABEL_20;
    v44 = (UserGameEntity_o *)gameObject;
    itemInfoPrefab->fields.shopBuyItem = item;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&itemInfoPrefab->fields.shopBuyItem,
      (int32_t)item,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    gameObject = (UnityEngine_GameObject_o *)this->fields.itemInfoPrefab;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentInChildren_object__58855044(
                                               (UnityEngine_Component_o *)gameObject,
                                               (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_ShopBuyItemListViewItemDraw___);
    if ( !gameObject )
      goto LABEL_20;
    ShopBuyItemListViewItemDraw__SetItem((ShopBuyItemListViewItemDraw_o *)gameObject, item, 2, 0);
    gameObject = (UnityEngine_GameObject_o *)ShopBuyBulkItemConfirmMenu__GetIsBuyable(
                                               this,
                                               this->fields.shopEntity,
                                               v34,
                                               v44,
                                               v45);
    if ( !this->fields.shopEntity )
      goto LABEL_20;
    v46 = (char)gameObject;
    exchangeDestinationItemName = this->fields.exchangeDestinationItemName;
    gameObject = (UnityEngine_GameObject_o *)ShopEntity__getName(this->fields.shopEntity, 0);
    if ( !exchangeDestinationItemName )
      goto LABEL_20;
    UILabel__set_text(exchangeDestinationItemName, (System_String_o *)gameObject, 0);
    ShopBuyBulkItemConfirmMenu__SetWarningText(this, this->fields.shopEntity, v34, v44, v48);
    ShopBuyBulkItemConfirmMenu__SetItemSlider(this, this->fields.shopEntity, v34, v44, item, v49);
    ShopBuyBulkItemConfirmMenu__SetExchangeOriginItemName(this, this->fields.shopEntity, v50);
    ShopBuyBulkItemConfirmMenu__SetExchangeOriginItemIcon(this, this->fields.shopEntity, v51);
    ShopBuyBulkItemConfirmMenu__SetExchangeDestinationItemIcon(this, this->fields.shopEntity, v52);
    ShopBuyBulkItemConfirmMenu__SetExchangeObjects(this, v53);
    ShopBuyBulkItemConfirmMenu__SetExchangeOriginPossession(this, this->fields.shopEntity, v54);
    ShopBuyBulkItemConfirmMenu__SetExchangeDestinationText(this, this->fields.shopEntity, v46 & 1, v55);
    ShopBuyBulkItemConfirmMenu__SetPresentAheadText(this, this->fields.shopEntity, v46 & 1, v56);
    ShopBuyBulkItemConfirmMenu__SetDecideButtonImage(this, this->fields.shopEntity, v46 & 1, v57);
    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !gameObject
      || (gameObject = (UnityEngine_GameObject_o *)((__int64 (*)(void))gameObject->klass[1]._1.nestedTypes)(),
          (warningLabel = this->fields.warningLabel) == 0) )
    {
LABEL_20:
      sub_2213CDC(gameObject, v31);
    }
    IsNullOrEmpty = System_String__IsNullOrEmpty(warningLabel->fields.mText, 0);
    ShopBuyBulkItemConfirmMenu__SetWarningActive(this, !IsNullOrEmpty, v60);
    this->fields.state = 1;
    v61 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v61, (Il2CppObject *)this, Method_ShopBuyBulkItemConfirmMenu_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v61, 0, 0, 0);
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

  if ( (byte_5972C72 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ShopBuyBulkItemConfirmMenu_EndMaxErrorDialog__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972C72 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
      sub_2213CDC(v5, shopEntity);
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

  if ( (byte_5972C7E & 1) == 0 )
  {
    sub_2213A60(&Method_ShopBuyBulkItemConfirmMenu_PlayShowInfomationSound__);
    byte_5972C7E = 1;
  }
  if ( (seKind & 0x80000000) == 0 )
  {
    v4 = Method_ShopBuyBulkItemConfirmMenu_PlayShowInfomationSound__;
    if ( (*((_BYTE *)Method_ShopBuyBulkItemConfirmMenu_PlayShowInfomationSound__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_ShopBuyBulkItemConfirmMenu_PlayShowInfomationSound__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
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
  __int64 v6; // x19
  UnityEngine_Object_c **v7; // x27
  LocalizationManager_c **v8; // x28
  struct UILabel_array *exchangeOriginCounts; // x8
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v11; // x29
  UnityEngine_Object_o *v12; // x22
  CommonConsumeEntity_o *v13; // x25
  __int64 num; // x22
  int64_t v15; // x21
  System_String_o *NumberFormatLong; // x26
  int32_t HasNum; // w22
  System_String_o *v18; // x24
  Il2CppObject *v19; // x0
  Il2CppObject *v20; // x24
  __int64 v21; // x1
  bool IsAp; // w25
  __int64 *v23; // x8
  ShopBuyBulkItemConfirmMenu_o *v24; // x25
  __int64 v25; // x1
  int64_t v26; // x22
  System_String_o *v27; // x0
  UnityEngine_Object_c **v28; // x21
  LocalizationManager_c **v29; // x23
  System_String_o *v30; // x27
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  ShopBuyBulkItemConfirmMenu_o *v37; // x28
  __int64 v38; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  bool v57; // cc
  Il2CppObject *v58; // x22
  System_String_o *v59; // x0
  struct UILabel_array *v60; // x8
  struct UILabel_array *v61; // x8
  UILabel_o *v62; // x22
  __int64 v63; // x9
  __int64 v64; // x0
  ShopBuyBulkItemConfirmMenu_o *v65; // [xsp+8h] [xbp-78h]
  int32_t v67; // [xsp+18h] [xbp-68h]
  int32_t v68; // [xsp+1Ch] [xbp-64h] BYREF

  v5 = this;
  if ( (byte_5972C78 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ShopBuyBulkItemConfirmMenu_TypeInfo);
    sub_2213A60(&StringLiteral_3847/*"COMMON_NUM_FORMAT"*/);
    sub_2213A60(&StringLiteral_12558/*"SHOP_BULK_WINDOW_AP_KIND"*/);
    sub_2213A60(&StringLiteral_12557/*"SHOP_BULK_WINDOW_AP_CARRYOVER_COLOR"*/);
    sub_2213A60(&StringLiteral_12564/*"SHOP_BULK_WINDOW_DISABLE_ITEM_COLOR"*/);
    sub_2213A60(&StringLiteral_12561/*"SHOP_BULK_WINDOW_COUNT_FORMAT"*/);
    this = (ShopBuyBulkItemConfirmMenu_o *)sub_2213A60(&StringLiteral_12568/*"SHOP_BULK_WINDOW_ORIGIN_KIND"*/);
    byte_5972C78 = 1;
  }
  if ( !entities )
    goto LABEL_61;
  if ( SLODWORD(entities->max_length) >= 1 )
  {
    v6 = 4;
    v7 = &UnityEngine_Object_TypeInfo;
    v8 = &LocalizationManager_TypeInfo;
    v65 = v5;
    while ( 1 )
    {
      exchangeOriginCounts = v5->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        break;
      max_length_low = LODWORD(exchangeOriginCounts->max_length);
      v11 = v6 - 4;
      if ( v6 - 4 >= (int)max_length_low )
        return;
      if ( v11 >= max_length_low )
        goto LABEL_60;
      v12 = (UnityEngine_Object_o *)*((_QWORD *)&exchangeOriginCounts->obj.klass + v6);
      if ( !*(&(*v7)->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(*v7, entities);
      this = (ShopBuyBulkItemConfirmMenu_o *)UnityEngine_Object__op_Equality(v12, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( v11 >= LODWORD(entities->max_length) )
          goto LABEL_60;
        v13 = (CommonConsumeEntity_o *)*((_QWORD *)&entities->obj.klass + v6);
        if ( !v13 )
          break;
        num = v13->fields.num;
        if ( !*(&(*v8)->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(*v8, entities);
        v15 = num * count;
        NumberFormatLong = LocalizationManager__GetNumberFormatLong(num * count, 0);
        HasNum = CommonConsumeEntity__GetUserHasNum(v13, 0);
        v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3847/*"COMMON_NUM_FORMAT"*/, 0);
        v68 = HasNum;
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v68);
        v20 = (Il2CppObject *)System_String__Format(v18, v19, 0);
        IsAp = CommonConsumeEntity__get_IsAp(v13, 0);
        if ( !*(&(*v8)->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(*v8, v21);
        v23 = &StringLiteral_12558/*"SHOP_BULK_WINDOW_AP_KIND"*/;
        if ( !IsAp )
          v23 = &StringLiteral_12568/*"SHOP_BULK_WINDOW_ORIGIN_KIND"*/;
        this = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v23, 0);
        if ( v11 >= LODWORD(entities->max_length) )
          goto LABEL_60;
        v24 = this;
        this = (ShopBuyBulkItemConfirmMenu_o *)*((_QWORD *)&entities->obj.klass + v6);
        if ( !this )
          break;
        v67 = HasNum;
        if ( !CommonConsumeEntity__get_IsAp((CommonConsumeEntity_o *)this, 0) )
          goto LABEL_28;
        this = (ShopBuyBulkItemConfirmMenu_o *)UserGameMaster__getSelfUserGame(0);
        if ( !this )
          break;
        if ( UserGameEntity__getCarryOverAct((UserGameEntity_o *)this, 0) >= 1 )
        {
          if ( !*(&(*v8)->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(*v8, v25);
          v26 = v15;
          v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12557/*"SHOP_BULK_WINDOW_AP_CARRYOVER_COLOR"*/, 0);
          v20 = (Il2CppObject *)System_String__Format(v27, v20, 0);
        }
        else
        {
LABEL_28:
          v26 = v15;
        }
        v28 = v7;
        v29 = v8;
        if ( !*(&(*v8)->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(*v8, v25);
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12561/*"SHOP_BULK_WINDOW_COUNT_FORMAT"*/, 0);
        this = (ShopBuyBulkItemConfirmMenu_o *)sub_2213B20(object___TypeInfo, 4);
        if ( !this )
          break;
        v37 = this;
        if ( NumberFormatLong )
        {
          this = (ShopBuyBulkItemConfirmMenu_o *)sub_2213BB4(NumberFormatLong, this->klass->_1.element_class);
          if ( !this )
            goto LABEL_62;
        }
        if ( !LODWORD(v37->fields.m_CancellationTokenSource) )
          goto LABEL_60;
        v37->fields.basePanel = (struct UIPanel_o *)NumberFormatLong;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v37->fields.basePanel,
          (int32_t)NumberFormatLong,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
        if ( v24 )
        {
          this = (ShopBuyBulkItemConfirmMenu_o *)sub_2213BB4(v24, v37->klass->_1.element_class);
          if ( !this )
            goto LABEL_62;
        }
        if ( ((__int64)v37->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
          goto LABEL_60;
        v37->fields.basePanelList = (struct UIPanel_array *)v24;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v37->fields.basePanelList,
          (int32_t)v24,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
        if ( v20 )
        {
          this = (ShopBuyBulkItemConfirmMenu_o *)sub_2213BB4(v20, v37->klass->_1.element_class);
          if ( !this )
            goto LABEL_62;
        }
        if ( LODWORD(v37->fields.m_CancellationTokenSource) <= 2 )
          goto LABEL_60;
        v37->fields.baseWindow = (struct UnityEngine_GameObject_o *)v20;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v37->fields.baseWindow,
          (int32_t)v20,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
        if ( v24 )
        {
          this = (ShopBuyBulkItemConfirmMenu_o *)sub_2213BB4(v24, v37->klass->_1.element_class);
          if ( !this )
          {
LABEL_62:
            v64 = sub_2213D00(this, v38);
            sub_2213BA0(v64, 0);
          }
        }
        if ( ((__int64)v37->fields.m_CancellationTokenSource & 0xFFFFFFFC) == 0 )
LABEL_60:
          sub_2213CE4(this);
        v37->fields.maskSprite = (struct UISprite_o *)v24;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v37->fields.maskSprite,
          (int32_t)v24,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56);
        this = (ShopBuyBulkItemConfirmMenu_o *)System_String__Format_75698016(v30, (System_Object_array *)v37, 0);
        v57 = v26 <= v67;
        v58 = (Il2CppObject *)this;
        if ( v57 )
        {
          v7 = v28;
          v5 = v65;
          v8 = v29;
        }
        else
        {
          v8 = v29;
          v7 = v28;
          if ( !*(&(*v29)->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(*v29, entities);
          v59 = LocalizationManager__Get((System_String_o *)StringLiteral_12564/*"SHOP_BULK_WINDOW_DISABLE_ITEM_COLOR"*/, 0);
          this = (ShopBuyBulkItemConfirmMenu_o *)System_String__Format(v59, v58, 0);
          v5 = v65;
          v58 = (Il2CppObject *)this;
        }
        v60 = v5->fields.exchangeOriginCounts;
        if ( !v60 )
          break;
        if ( v11 >= LODWORD(v60->max_length) )
          goto LABEL_60;
        this = (ShopBuyBulkItemConfirmMenu_o *)*((_QWORD *)&v60->obj.klass + v6);
        if ( !this )
          break;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)v58, 0);
        v61 = v5->fields.exchangeOriginCounts;
        if ( !v61 )
          break;
        if ( v11 >= LODWORD(v61->max_length) )
          goto LABEL_60;
        this = (ShopBuyBulkItemConfirmMenu_o *)ShopBuyBulkItemConfirmMenu_TypeInfo;
        v62 = (UILabel_o *)*((_QWORD *)&v61->obj.klass + v6);
        if ( !*(&ShopBuyBulkItemConfirmMenu_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ShopBuyBulkItemConfirmMenu_TypeInfo, entities);
        if ( !v62 )
          break;
        UILabel__SetCondensedScale(
          v62,
          ShopBuyBulkItemConfirmMenu_TypeInfo->static_fields->EXCHANGE_ITEM_INFO_WIDTH,
          0,
          0);
      }
      v63 = v6 - 3;
      ++v6;
      if ( v63 >= SLODWORD(entities->max_length) )
        return;
    }
LABEL_61:
    sub_2213CDC(this, entities);
  }
}


void ShopBuyBulkItemConfirmMenu__SetCommonConsumeExchangeObjects(
        ShopBuyBulkItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *exchangeOriginDispObject1; // x0
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  __int64 v5; // x1
  UILabel_o *exchangeOrigin; // x20
  ShopBuyBulkItemConfirmMenu_o *v7; // x0
  const MethodInfo *v8; // x3
  struct CommonConsumeEntity_array *v9; // x8
  UnityEngine_Object_o *exchangeOrigin2; // x20
  UILabel_o *v11; // x20
  ShopBuyBulkItemConfirmMenu_o *v12; // x0
  const MethodInfo *v13; // x3
  struct CommonConsumeEntity_array *v14; // x8
  unsigned int v15; // w24
  unsigned int max_length; // w9
  struct UILabel_array *exchangeOriginCountKinds; // x8
  LocalizationManager_c *v18; // x0
  Il2CppClass **v19; // x8
  __int64 *v20; // x25
  UILabel_o *v21; // x20
  ShopBuyBulkItemConfirmMenu_o *v22; // x0
  const MethodInfo *v23; // x3
  UILabel_o *exchangeDestinationCountKind; // x19
  ShopBuyBulkItemConfirmMenu_o *v25; // x0
  const MethodInfo *v26; // x3

  if ( (byte_5972C63 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_12558/*"SHOP_BULK_WINDOW_AP_KIND"*/);
    sub_2213A60(&StringLiteral_12567/*"SHOP_BULK_WINDOW_ORIGIN"*/);
    sub_2213A60(&StringLiteral_12563/*"SHOP_BULK_WINDOW_DESTINATION_KIND"*/);
    sub_2213A60(&StringLiteral_12568/*"SHOP_BULK_WINDOW_ORIGIN_KIND"*/);
    byte_5972C63 = 1;
  }
  if ( this->fields.commonConsumeEntities )
  {
    exchangeOriginDispObject1 = this->fields.exchangeOriginDispObject1;
    if ( !exchangeOriginDispObject1 )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive(exchangeOriginDispObject1, 1, 0);
    commonConsumeEntities = this->fields.commonConsumeEntities;
    if ( !commonConsumeEntities )
      goto LABEL_34;
    exchangeOriginDispObject1 = this->fields.exchangeOriginDispObject2;
    if ( !exchangeOriginDispObject1 )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive(exchangeOriginDispObject1, SLODWORD(commonConsumeEntities->max_length) > 1, 0);
    exchangeOrigin = this->fields.exchangeOrigin;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
    v7 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12567/*"SHOP_BULK_WINDOW_ORIGIN"*/, 0);
    ShopBuyBulkItemConfirmMenu__SetLabelText(v7, exchangeOrigin, (System_String_o *)v7, v8);
    v9 = this->fields.commonConsumeEntities;
    if ( !v9 )
      goto LABEL_34;
    if ( SLODWORD(v9->max_length) >= 2 )
    {
      exchangeOrigin2 = (UnityEngine_Object_o *)this->fields.exchangeOrigin2;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      exchangeOriginDispObject1 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(exchangeOrigin2, 0, 0);
      if ( ((unsigned __int8)exchangeOriginDispObject1 & 1) != 0 )
      {
        v11 = this->fields.exchangeOrigin2;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
        v12 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12567/*"SHOP_BULK_WINDOW_ORIGIN"*/, 0);
        ShopBuyBulkItemConfirmMenu__SetLabelText(v12, v11, (System_String_o *)v12, v13);
      }
    }
    if ( this->fields.displayMode == 1 )
      return;
    v14 = this->fields.commonConsumeEntities;
    if ( !v14 )
LABEL_34:
      sub_2213CDC(exchangeOriginDispObject1, method);
    v15 = 0;
    while ( 1 )
    {
      max_length = v14->max_length;
      if ( (int)v15 >= (int)max_length )
        break;
      if ( v15 >= max_length )
        goto LABEL_38;
      exchangeOriginDispObject1 = (UnityEngine_GameObject_o *)v14->m_Items[v15];
      if ( !exchangeOriginDispObject1 )
        goto LABEL_34;
      exchangeOriginDispObject1 = (UnityEngine_GameObject_o *)CommonConsumeEntity__get_IsAp(
                                                                (CommonConsumeEntity_o *)exchangeOriginDispObject1,
                                                                0);
      exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
      if ( ((unsigned __int8)exchangeOriginDispObject1 & 1) != 0 )
      {
        if ( !exchangeOriginCountKinds )
          goto LABEL_34;
        if ( v15 >= LODWORD(exchangeOriginCountKinds->max_length) )
          goto LABEL_38;
        v18 = LocalizationManager_TypeInfo;
        v19 = &exchangeOriginCountKinds->obj.klass + (int)v15;
        v20 = &StringLiteral_12558/*"SHOP_BULK_WINDOW_AP_KIND"*/;
      }
      else
      {
        if ( !exchangeOriginCountKinds )
          goto LABEL_34;
        if ( v15 >= LODWORD(exchangeOriginCountKinds->max_length) )
LABEL_38:
          sub_2213CE4(exchangeOriginDispObject1);
        v18 = LocalizationManager_TypeInfo;
        v19 = &exchangeOriginCountKinds->obj.klass + (int)v15;
        v20 = &StringLiteral_12568/*"SHOP_BULK_WINDOW_ORIGIN_KIND"*/;
      }
      v21 = (UILabel_o *)v19[4];
      if ( !*(&v18->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v18, method);
      v22 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v20, 0);
      ShopBuyBulkItemConfirmMenu__SetLabelText(v22, v21, (System_String_o *)v22, v23);
      v14 = this->fields.commonConsumeEntities;
      ++v15;
      if ( !v14 )
        goto LABEL_34;
    }
    exchangeDestinationCountKind = this->fields.exchangeDestinationCountKind;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v25 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12563/*"SHOP_BULK_WINDOW_DESTINATION_KIND"*/, 0);
    ShopBuyBulkItemConfirmMenu__SetLabelText(v25, exchangeDestinationCountKind, (System_String_o *)v25, v26);
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
  if ( (byte_5972C6E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&ShopBuyBulkItemConfirmMenu_TypeInfo);
    this = (ShopBuyBulkItemConfirmMenu_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5972C6E = 1;
  }
  entity = 0;
  if ( !isBuyable )
    goto LABEL_14;
  if ( !shopEntity )
    goto LABEL_18;
  if ( shopEntity->fields.purchaseType != 1 )
    goto LABEL_14;
  this = (ShopBuyBulkItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  this = (ShopBuyBulkItemConfirmMenu_o *)ShopEntity__get_TargetId(shopEntity, 0);
  if ( !MasterData_object )
    goto LABEL_18;
  this = (ShopBuyBulkItemConfirmMenu_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                           &entity,
                                           (int32_t)this,
                                           (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_14;
  v8 = v6->fields.shopEntity;
  if ( !v8 )
LABEL_18:
    sub_2213CDC(this, shopEntity);
  if ( v8->fields.shopType == 9 )
  {
    v9 = (ShopBuyBulkItemConfirmMenu_o *)ShopBuyBulkItemConfirmMenu_TypeInfo;
    decideButtonImg = v6->fields.decideButtonImg;
    if ( !*(&ShopBuyBulkItemConfirmMenu_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyBulkItemConfirmMenu_TypeInfo, shopEntity);
      v9 = (ShopBuyBulkItemConfirmMenu_o *)ShopBuyBulkItemConfirmMenu_TypeInfo;
    }
    p_monitor = (System_String_o **)&v9->fields.itemSlider->monitor;
    goto LABEL_17;
  }
LABEL_14:
  v9 = (ShopBuyBulkItemConfirmMenu_o *)ShopBuyBulkItemConfirmMenu_TypeInfo;
  decideButtonImg = v6->fields.decideButtonImg;
  if ( !*(&ShopBuyBulkItemConfirmMenu_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyBulkItemConfirmMenu_TypeInfo, shopEntity);
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
  int32_t setNum; // w23
  System_String_o *NumberFormatLong; // x21
  System_String_o *v13; // x0
  Il2CppObject *v14; // x21
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v16; // x3
  System_String_o *v17; // x0
  UILabel_o *v18; // x19
  int32_t v19; // w20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v6 = this;
  if ( (byte_5972C79 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&ShopBuyBulkItemConfirmMenu_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_12564/*"SHOP_BULK_WINDOW_DISABLE_ITEM_COLOR"*/);
    this = (ShopBuyBulkItemConfirmMenu_o *)sub_2213A60(&StringLiteral_12568/*"SHOP_BULK_WINDOW_ORIGIN_KIND"*/);
    byte_5972C79 = 1;
  }
  entity = 0;
  if ( shopEntity )
  {
    v7 = v6->fields.shopEntity;
    if ( !v7 )
      goto LABEL_33;
    if ( v7->fields.purchaseType != 1 )
      goto LABEL_15;
    this = (ShopBuyBulkItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_33;
    this = (ShopBuyBulkItemConfirmMenu_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
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
                                             (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_15;
    if ( !entity )
      goto LABEL_33;
    if ( LODWORD(entity[3].klass) == 1 )
    {
      exchangeDestinationCount = v6->fields.exchangeDestinationCount;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
      v10 = count;
    }
    else
    {
LABEL_15:
      if ( v6->fields.displayMode == 1 )
      {
        setNum = shopEntity->fields.setNum;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
        NumberFormatLong = LocalizationManager__GetNumberFormatLong(setNum * (__int64)count, 0);
        v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12568/*"SHOP_BULK_WINDOW_ORIGIN_KIND"*/, 0);
        v14 = (Il2CppObject *)System_String__Concat_75651716(NumberFormatLong, v13, 0);
        SelfUserGame = UserGameMaster__getSelfUserGame(0);
        if ( ShopBuyBulkItemConfirmMenu__GetUserItemBuyableCount(v6, shopEntity, SelfUserGame, v16) <= 0 )
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
          v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12564/*"SHOP_BULK_WINDOW_DISABLE_ITEM_COLOR"*/, 0);
          v14 = (Il2CppObject *)System_String__Format(v17, v14, 0);
        }
        this = (ShopBuyBulkItemConfirmMenu_o *)v6->fields.exchangeDestinationCount;
        if ( this )
        {
          UILabel__set_text((UILabel_o *)this, (System_String_o *)v14, 0);
          v18 = v6->fields.exchangeDestinationCount;
          this = (ShopBuyBulkItemConfirmMenu_o *)ShopBuyBulkItemConfirmMenu_TypeInfo;
          if ( !*(&ShopBuyBulkItemConfirmMenu_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ShopBuyBulkItemConfirmMenu_TypeInfo, shopEntity);
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
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
      v10 = v19 * (__int64)count;
    }
    this = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__GetNumberFormatLong(v10, 0);
    if ( exchangeDestinationCount )
    {
      UILabel__set_text(exchangeDestinationCount, (System_String_o *)this, 0);
      return;
    }
LABEL_33:
    sub_2213CDC(this, shopEntity);
  }
}


void ShopBuyBulkItemConfirmMenu__SetExchangeDestinationItemIcon(
        ShopBuyBulkItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  int32_t displayMode; // w8
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x21
  ItemIconComponent_o *v8; // x20
  __int64 TargetId; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  int purchaseType; // w21
  UnityEngine_Object_o *exchangeDestinationServantIcon; // x22
  bool v14; // w0
  __int64 v15; // x1
  ServantFaceIconComponent_o *v16; // x20
  UnityEngine_Object_o *exchangeDestinationItemIcons; // x22
  ItemIconComponent_o *v18; // x20
  ServantFaceIconComponent_o *v19; // x20

  if ( (byte_5972C69 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972C69 = 1;
  }
  if ( !shopEntity )
    return;
  displayMode = this->fields.displayMode;
  if ( displayMode == 2 )
  {
    if ( ShopEntity__get_TargetId(shopEntity, 0) < 1 )
      return;
    purchaseType = shopEntity->fields.purchaseType;
    exchangeDestinationServantIcon = (UnityEngine_Object_o *)this->fields.exchangeDestinationServantIcon;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    v14 = UnityEngine_Object__op_Inequality(exchangeDestinationServantIcon, 0, 0);
    LOBYTE(exchangeDestinationServantIcon) = 0;
    if ( v14 && (unsigned int)purchaseType <= 0x15 )
      LODWORD(exchangeDestinationServantIcon) = (0x280110u >> purchaseType) & 1;
    BasicHelper__SetActiveSafely(
      (UnityEngine_Component_o *)this->fields.exchangeDestinationItemIcons,
      (unsigned __int8)exchangeDestinationServantIcon != 1,
      0);
    BasicHelper__SetActiveSafely(
      (UnityEngine_Component_o *)this->fields.exchangeDestinationServantIcon,
      (bool)exchangeDestinationServantIcon,
      0);
    if ( (((unsigned __int8)exchangeDestinationServantIcon ^ 1) & 1) != 0 )
      goto LABEL_27;
    if ( purchaseType <= 8 )
    {
      if ( purchaseType != 4 && purchaseType != 8 )
        goto LABEL_27;
    }
    else
    {
      if ( purchaseType == 19 )
      {
        v19 = this->fields.exchangeDestinationServantIcon;
        TargetId = ShopEntity__get_TargetId(shopEntity, 0);
        if ( !v19 )
          goto LABEL_35;
        ServantFaceIconComponent__SetCommandCode(v19, TargetId, 0, 0, 2, 0, 0);
        return;
      }
      if ( purchaseType != 21 )
      {
LABEL_27:
        exchangeDestinationItemIcons = (UnityEngine_Object_o *)this->fields.exchangeDestinationItemIcons;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
        if ( UnityEngine_Object__op_Inequality(exchangeDestinationItemIcons, 0, 0) )
        {
          v18 = this->fields.exchangeDestinationItemIcons;
          TargetId = ShopEntity__get_TargetId(shopEntity, 0);
          if ( !v18 )
            goto LABEL_35;
          ItemIconComponent__SetPurchase(v18, purchaseType, TargetId, shopEntity->fields.imageId, 0);
        }
        return;
      }
    }
    v16 = this->fields.exchangeDestinationServantIcon;
    TargetId = ShopEntity__get_TargetId(shopEntity, 0);
    if ( !v16 )
      goto LABEL_35;
    ServantFaceIconComponent__Set_48052592(v16, TargetId, 0, -1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    return;
  }
  if ( displayMode == 1 && ShopEntity__get_TargetMax(shopEntity, 0) >= 1 )
  {
    v7 = (UnityEngine_Object_o *)this->fields.exchangeDestinationItemIcons;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( !UnityEngine_Object__op_Equality(v7, 0, 0) )
    {
      v8 = this->fields.exchangeDestinationItemIcons;
      TargetId = ShopEntity__get_TargetId(shopEntity, 0);
      if ( v8 )
      {
        ItemIconComponent__SetItemImage(v8, TargetId, 0);
        return;
      }
LABEL_35:
      sub_2213CDC(TargetId, v10);
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
  LocalizationManager_c *v9; // x0
  UILabel_o *exchangeDestination; // x19
  __int64 *v11; // x20
  ShopBuyBulkItemConfirmMenu_o *v12; // x0
  const MethodInfo *v13; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_5972C64 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_12562/*"SHOP_BULK_WINDOW_DESTINATION"*/);
    this = (ShopBuyBulkItemConfirmMenu_o *)sub_2213A60(&StringLiteral_8630/*"LIMIT_MATERIAL_DESTINATION"*/);
    byte_5972C64 = 1;
  }
  entity = 0;
  if ( isBuyable )
  {
    if ( !shopEntity )
      goto LABEL_16;
    if ( shopEntity->fields.purchaseType != 1 )
      goto LABEL_13;
    this = (ShopBuyBulkItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_16;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
    this = (ShopBuyBulkItemConfirmMenu_o *)ShopEntity__get_TargetId(shopEntity, 0);
    if ( !MasterData_object )
      goto LABEL_16;
    this = (ShopBuyBulkItemConfirmMenu_o *)DataMasterBase_object__object__int___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                             &entity,
                                             (int32_t)this,
                                             (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_13;
    v8 = v6->fields.shopEntity;
    if ( !v8 )
LABEL_16:
      sub_2213CDC(this, shopEntity);
    if ( v8->fields.shopType == 9 )
    {
      v9 = LocalizationManager_TypeInfo;
      exchangeDestination = v6->fields.exchangeDestination;
      v11 = &StringLiteral_8630/*"LIMIT_MATERIAL_DESTINATION"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_14;
      goto LABEL_15;
    }
  }
LABEL_13:
  v9 = LocalizationManager_TypeInfo;
  exchangeDestination = v6->fields.exchangeDestination;
  v11 = &StringLiteral_12562/*"SHOP_BULK_WINDOW_DESTINATION"*/;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
LABEL_14:
    j_il2cpp_runtime_class_init_0(v9, shopEntity);
LABEL_15:
  v12 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v11, 0);
  ShopBuyBulkItemConfirmMenu__SetLabelText(v12, exchangeDestination, (System_String_o *)v12, v13);
}


void ShopBuyBulkItemConfirmMenu__SetExchangeObjects(ShopBuyBulkItemConfirmMenu_o *this, const MethodInfo *method)
{
  struct ShopEntity_o *shopEntity; // x8
  UnityEngine_Object_o *exchangeOriginDispObject1; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *exchangeOriginDispObject2; // x0
  __int64 v7; // x1
  UILabel_o *exchangeOrigin; // x20
  ShopBuyBulkItemConfirmMenu_o *v9; // x0
  const MethodInfo *v10; // x3
  unsigned __int64 v11; // x23
  struct UILabel_array *exchangeOriginCountKinds; // x8
  UILabel_o *v13; // x20
  ShopBuyBulkItemConfirmMenu_o *v14; // x0
  const MethodInfo *v15; // x3
  UILabel_o *exchangeDestinationCountKind; // x19
  ShopBuyBulkItemConfirmMenu_o *v17; // x0
  const MethodInfo *v18; // x3

  if ( (byte_5972C62 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_12567/*"SHOP_BULK_WINDOW_ORIGIN"*/);
    sub_2213A60(&StringLiteral_12563/*"SHOP_BULK_WINDOW_DESTINATION_KIND"*/);
    sub_2213A60(&StringLiteral_12568/*"SHOP_BULK_WINDOW_ORIGIN_KIND"*/);
    byte_5972C62 = 1;
  }
  shopEntity = this->fields.shopEntity;
  if ( shopEntity && shopEntity->fields.payType == 14 )
  {
    ShopBuyBulkItemConfirmMenu__SetCommonConsumeExchangeObjects(this, method);
    return;
  }
  exchangeOriginDispObject1 = (UnityEngine_Object_o *)this->fields.exchangeOriginDispObject1;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
    v9 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12567/*"SHOP_BULK_WINDOW_ORIGIN"*/, 0);
    ShopBuyBulkItemConfirmMenu__SetLabelText(v9, exchangeOrigin, (System_String_o *)v9, v10);
    if ( this->fields.itemCount >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
        if ( !exchangeOriginCountKinds )
          break;
        if ( v11 >= LODWORD(exchangeOriginCountKinds->max_length) )
          sub_2213CE4(exchangeOriginDispObject2);
        v13 = exchangeOriginCountKinds->m_Items[v11];
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
        v14 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12568/*"SHOP_BULK_WINDOW_ORIGIN_KIND"*/, 0);
        ShopBuyBulkItemConfirmMenu__SetLabelText(v14, v13, (System_String_o *)v14, v15);
        if ( (__int64)++v11 >= this->fields.itemCount )
          goto LABEL_20;
      }
LABEL_23:
      sub_2213CDC(exchangeOriginDispObject2, v5);
    }
  }
LABEL_20:
  exchangeDestinationCountKind = this->fields.exchangeDestinationCountKind;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
  v17 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12563/*"SHOP_BULK_WINDOW_DESTINATION_KIND"*/, 0);
  ShopBuyBulkItemConfirmMenu__SetLabelText(v17, exchangeDestinationCountKind, (System_String_o *)v17, v18);
}


void ShopBuyBulkItemConfirmMenu__SetExchangeOriginCount(
        ShopBuyBulkItemConfirmMenu_o *this,
        int32_t itemCount,
        int32_t count,
        const MethodInfo *method)
{
  UILabel_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  struct UILabel_array *exchangeOriginCounts; // x8
  UnityEngine_Object_o *v10; // x22
  struct UILabel_array *v11; // x8
  UILabel_o *v12; // x19
  __int64 v13; // x1
  int32_t Prices; // w21
  struct ShopEntity_o *shopEntity; // x8
  struct UILabel_array *v16; // x22
  int max_length; // w8
  __int64 v18; // x20
  struct UILabel_array *exchangeOriginCountKinds; // x19
  int v20; // w8
  __int64 v21; // x20
  int v22; // w8
  __int64 v23; // x23
  struct UILabel_array *v24; // x22
  int v25; // w8
  __int64 v26; // x23
  const MethodInfo *v27; // x3
  UILabel_o *v28; // x21
  struct UILabel_array *v29; // x8
  UILabel_o *v30; // x19
  __int64 v31; // x1
  int32_t v32; // w21
  int64_t v33; // x0
  UILabel_o *v34; // x21
  __int64 v35; // x1
  int32_t v36; // w22
  ShopBuyBulkItemConfirmMenu_o *NumberFormatLong; // x0
  const MethodInfo *v38; // x3
  struct UILabel_array *v39; // x8
  ShopBuyBulkItemConfirmMenu_o *v40; // x0
  const MethodInfo *v41; // x3
  int32_t v42; // w23
  __int64 i; // x25
  struct UILabel_array *v44; // x8
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v46; // x26
  UnityEngine_Object_o *v47; // x20
  struct UILabel_array *v48; // x8
  __int64 v49; // x9
  UILabel_o *v50; // x20
  int v51; // w26
  ShopBuyBulkItemConfirmMenu_o *v52; // x0
  const MethodInfo *v53; // x3
  __int64 v54; // x9

  if ( (byte_5972C77 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972C77 = 1;
  }
  IsNullOrEmpty = (UILabel_o *)BasicHelper__IsNullOrEmpty(
                                 (System_Collections_ICollection_o *)this->fields.exchangeOriginCounts,
                                 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return;
  if ( this->fields.displayMode == 2 )
  {
    exchangeOriginCounts = this->fields.exchangeOriginCounts;
    if ( !exchangeOriginCounts )
      goto LABEL_86;
    if ( !LODWORD(exchangeOriginCounts->max_length) )
      goto LABEL_87;
    v10 = (UnityEngine_Object_o *)exchangeOriginCounts->m_Items[0];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    IsNullOrEmpty = (UILabel_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      v11 = this->fields.exchangeOriginCounts;
      if ( !v11 )
        goto LABEL_86;
      if ( LODWORD(v11->max_length) )
      {
        IsNullOrEmpty = (UILabel_o *)this->fields.shopEntity;
        if ( IsNullOrEmpty )
        {
          v12 = v11->m_Items[0];
          Prices = ShopEntity__GetPrices((ShopEntity_o *)IsNullOrEmpty, 0, 0);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
          IsNullOrEmpty = (UILabel_o *)LocalizationManager__GetNumberFormatLong(Prices * (__int64)count, 0);
          if ( v12 )
          {
            UILabel__set_text(v12, (System_String_o *)IsNullOrEmpty, 0);
            return;
          }
        }
LABEL_86:
        sub_2213CDC(IsNullOrEmpty, v8);
      }
LABEL_87:
      sub_2213CE4(IsNullOrEmpty);
    }
  }
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_86;
  v16 = this->fields.exchangeOriginCounts;
  if ( shopEntity->fields.payType == 13 )
  {
    if ( !v16 )
      goto LABEL_86;
    max_length = v16->max_length;
    if ( max_length < 1 )
    {
LABEL_27:
      exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
      if ( !exchangeOriginCountKinds )
        goto LABEL_86;
      v20 = exchangeOriginCountKinds->max_length;
      if ( v20 < 1 )
        return;
      v21 = 0;
      while ( (unsigned int)v21 < v20 )
      {
        IsNullOrEmpty = exchangeOriginCountKinds->m_Items[v21];
        if ( !IsNullOrEmpty )
          goto LABEL_86;
        IsNullOrEmpty = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0);
        if ( !IsNullOrEmpty )
          goto LABEL_86;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 0, 0);
        v20 = exchangeOriginCountKinds->max_length;
        if ( (int)++v21 >= v20 )
          return;
      }
    }
    else
    {
      v18 = 0;
      while ( (unsigned int)v18 < max_length )
      {
        IsNullOrEmpty = v16->m_Items[v18];
        if ( !IsNullOrEmpty )
          goto LABEL_86;
        IsNullOrEmpty = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0);
        if ( !IsNullOrEmpty )
          goto LABEL_86;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 0, 0);
        max_length = v16->max_length;
        if ( (int)++v18 >= max_length )
          goto LABEL_27;
      }
    }
    goto LABEL_87;
  }
  if ( !v16 )
    goto LABEL_86;
  v22 = v16->max_length;
  if ( v22 >= 1 )
  {
    v23 = 0;
    while ( (unsigned int)v23 < v22 )
    {
      IsNullOrEmpty = v16->m_Items[v23];
      if ( !IsNullOrEmpty )
        goto LABEL_86;
      IsNullOrEmpty = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0);
      if ( !IsNullOrEmpty )
        goto LABEL_86;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 1, 0);
      v22 = v16->max_length;
      if ( (int)++v23 >= v22 )
        goto LABEL_42;
    }
    goto LABEL_87;
  }
LABEL_42:
  v24 = this->fields.exchangeOriginCountKinds;
  if ( !v24 )
    goto LABEL_86;
  v25 = v24->max_length;
  if ( v25 >= 1 )
  {
    v26 = 0;
    while ( (unsigned int)v26 < v25 )
    {
      IsNullOrEmpty = v24->m_Items[v26];
      if ( !IsNullOrEmpty )
        goto LABEL_86;
      IsNullOrEmpty = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0);
      if ( !IsNullOrEmpty )
        goto LABEL_86;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 1, 0);
      v25 = v24->max_length;
      if ( (int)++v26 >= v25 )
        goto LABEL_49;
    }
    goto LABEL_87;
  }
LABEL_49:
  IsNullOrEmpty = (UILabel_o *)this->fields.shopEntity;
  if ( !IsNullOrEmpty )
    goto LABEL_86;
  if ( *(&IsNullOrEmpty->fields.updateAnchors + 1) != 14 )
  {
    v29 = this->fields.exchangeOriginCounts;
    if ( itemCount >= 2 )
    {
      if ( !v29 )
        goto LABEL_86;
      if ( !LODWORD(v29->max_length) )
        goto LABEL_87;
      v34 = v29->m_Items[0];
      v36 = ShopEntity__GetPrices((ShopEntity_o *)IsNullOrEmpty, 1, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
      NumberFormatLong = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__GetNumberFormatLong(
                                                           v36 * (__int64)count,
                                                           0);
      ShopBuyBulkItemConfirmMenu__SetLabelText(NumberFormatLong, v34, (System_String_o *)NumberFormatLong, v38);
      v39 = this->fields.exchangeOriginCounts;
      if ( !v39 )
        goto LABEL_86;
      if ( (v39->max_length & 0xFFFFFFFE) == 0 )
        goto LABEL_87;
      IsNullOrEmpty = (UILabel_o *)this->fields.shopEntity;
      if ( !IsNullOrEmpty )
        goto LABEL_86;
      v30 = v39->m_Items[1];
      v33 = count * (__int64)ShopEntity__GetPrices((ShopEntity_o *)IsNullOrEmpty, 0, 0);
    }
    else
    {
      if ( !v29 )
        goto LABEL_86;
      if ( !LODWORD(v29->max_length) )
        goto LABEL_87;
      v30 = v29->m_Items[0];
      v32 = ShopEntity__GetPrices((ShopEntity_o *)IsNullOrEmpty, 0, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
      v33 = v32 * (__int64)count;
    }
    v40 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__GetNumberFormatLong(v33, 0);
    ShopBuyBulkItemConfirmMenu__SetLabelText(v40, v30, (System_String_o *)v40, v41);
    return;
  }
  IsNullOrEmpty = (UILabel_o *)ShopEntity__GetCommonConsumeEntities((ShopEntity_o *)IsNullOrEmpty, 0);
  if ( IsNullOrEmpty )
  {
    v28 = IsNullOrEmpty;
    if ( this->fields.displayMode == 1 )
    {
      ShopBuyBulkItemConfirmMenu__SetApSeedExchangeOriginCountOnTerminal(
        this,
        (CommonConsumeEntity_array *)IsNullOrEmpty,
        count,
        v27);
      return;
    }
    if ( SLODWORD(IsNullOrEmpty->fields.m_CancellationTokenSource) >= 1 )
    {
      v42 = count;
      for ( i = 4; ; ++i )
      {
        v44 = this->fields.exchangeOriginCounts;
        if ( !v44 )
          break;
        max_length_low = LODWORD(v44->max_length);
        v46 = i - 4;
        if ( i - 4 < (int)max_length_low )
        {
          if ( v46 >= max_length_low )
            goto LABEL_87;
          v47 = (UnityEngine_Object_o *)*((_QWORD *)&v44->obj.klass + i);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
          IsNullOrEmpty = (UILabel_o *)UnityEngine_Object__op_Inequality(v47, 0, 0);
          if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
          {
            v48 = this->fields.exchangeOriginCounts;
            if ( !v48 )
              goto LABEL_86;
            if ( v46 >= LODWORD(v48->max_length) || v46 >= LODWORD(v28->fields.m_CancellationTokenSource) )
              goto LABEL_87;
            v49 = *((_QWORD *)&v28->klass + i);
            if ( !v49 )
              goto LABEL_86;
            v50 = (UILabel_o *)*((_QWORD *)&v48->obj.klass + i);
            v51 = *(_DWORD *)(v49 + 32);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
            v52 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__GetNumberFormatLong(v51 * (__int64)v42, 0);
            ShopBuyBulkItemConfirmMenu__SetLabelText(v52, v50, (System_String_o *)v52, v53);
          }
        }
        v54 = i - 3;
        if ( v54 >= SLODWORD(v28->fields.m_CancellationTokenSource) )
          return;
      }
      goto LABEL_86;
    }
  }
}


void ShopBuyBulkItemConfirmMenu__SetExchangeOriginItemIcon(
        ShopBuyBulkItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  ShopBuyBulkItemConfirmMenu_o *v4; // x19
  int32_t displayMode; // w8
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  __int64 v7; // x22
  unsigned __int64 v8; // x23
  struct ItemIconComponent_array *v9; // x8
  unsigned __int64 v10; // x9
  UnityEngine_Object_o *v11; // x20
  struct CommonConsumeEntity_array *v12; // x8
  __int64 v13; // x20
  struct ItemIconComponent_array *v14; // x8
  __int64 v15; // x1
  Il2CppObject *Master_object; // x21
  unsigned __int64 v17; // x22
  struct ItemIconComponent_array *exchangeOriginItemIcons; // x8
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v20; // x23
  struct ItemIconComponent_array *v21; // x8
  ItemIconComponent_o *v22; // x8

  v4 = this;
  if ( (byte_5972C68 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    this = (ShopBuyBulkItemConfirmMenu_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972C68 = 1;
  }
  if ( v4->fields.exchangeOriginItemIcons )
  {
    displayMode = v4->fields.displayMode;
    if ( displayMode == 2 )
    {
      if ( shopEntity && ShopEntity__GetItemCount(shopEntity, 0) )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
        this = (ShopBuyBulkItemConfirmMenu_o *)ShopEntity__GetItemCount(shopEntity, 0);
        if ( (int)this >= 1 )
        {
          v17 = 0;
          while ( 1 )
          {
            exchangeOriginItemIcons = v4->fields.exchangeOriginItemIcons;
            if ( !exchangeOriginItemIcons )
LABEL_25:
              sub_2213CDC(this, shopEntity);
            max_length_low = LODWORD(exchangeOriginItemIcons->max_length);
            if ( (__int64)v17 >= (int)max_length_low )
              return;
            if ( v17 >= max_length_low )
              break;
            v20 = (UnityEngine_Object_o *)exchangeOriginItemIcons->m_Items[v17];
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, shopEntity);
            if ( !UnityEngine_Object__op_Equality(v20, 0, 0) )
            {
              this = (ShopBuyBulkItemConfirmMenu_o *)ShopEntity__GetItemIDs(shopEntity, v17, 0);
              if ( !Master_object )
                goto LABEL_25;
              this = (ShopBuyBulkItemConfirmMenu_o *)DataMasterBase_object__object__int___GetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                       (int32_t)this,
                                                       (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
              if ( this )
              {
                v21 = v4->fields.exchangeOriginItemIcons;
                if ( !v21 )
                  goto LABEL_25;
                if ( v17 >= LODWORD(v21->max_length) )
                  break;
                v22 = v21->m_Items[v17];
                if ( !v22 )
                  goto LABEL_25;
                ItemIconComponent__SetItemImage(v22, (int32_t)this->fields.basePanelList, 0);
              }
            }
            ++v17;
            this = (ShopBuyBulkItemConfirmMenu_o *)ShopEntity__GetItemCount(shopEntity, 0);
            if ( (__int64)v17 >= (int)this )
              return;
          }
LABEL_46:
          sub_2213CE4(this);
        }
      }
    }
    else if ( displayMode == 1 )
    {
      commonConsumeEntities = v4->fields.commonConsumeEntities;
      if ( commonConsumeEntities )
      {
        if ( SLODWORD(commonConsumeEntities->max_length) >= 2 )
        {
          v7 = 4;
          while ( 1 )
          {
            v8 = v7 - 4;
            if ( v7 - 4 >= SLODWORD(commonConsumeEntities->max_length) )
              break;
            v9 = v4->fields.exchangeOriginItemIcons;
            if ( !v9 )
              goto LABEL_25;
            v10 = LODWORD(v9->max_length);
            if ( (__int64)v8 >= (int)v10 )
              break;
            if ( v8 >= v10 )
              goto LABEL_46;
            v11 = (UnityEngine_Object_o *)*((_QWORD *)&v9->obj.klass + v7);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, shopEntity);
            this = (ShopBuyBulkItemConfirmMenu_o *)UnityEngine_Object__op_Equality(v11, 0, 0);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              v12 = v4->fields.commonConsumeEntities;
              if ( !v12 )
                goto LABEL_25;
              if ( v8 >= LODWORD(v12->max_length) )
                goto LABEL_46;
              v13 = *((_QWORD *)&v12->obj.klass + v7);
              if ( !v13 )
                goto LABEL_25;
              this = (ShopBuyBulkItemConfirmMenu_o *)CommonConsumeEntity__get_IsAp(
                                                       *((CommonConsumeEntity_o **)&v12->obj.klass + v7),
                                                       0);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                v14 = v4->fields.exchangeOriginItemIcons;
                if ( !v14 )
                  goto LABEL_25;
                if ( v8 >= LODWORD(v14->max_length) )
                  goto LABEL_46;
                this = (ShopBuyBulkItemConfirmMenu_o *)*((_QWORD *)&v14->obj.klass + v7);
                if ( !this )
                  goto LABEL_25;
                ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, *(_DWORD *)(v13 + 28), 0);
              }
            }
            commonConsumeEntities = v4->fields.commonConsumeEntities;
            ++v7;
            if ( !commonConsumeEntities )
              goto LABEL_25;
          }
        }
      }
    }
  }
}


void ShopBuyBulkItemConfirmMenu__SetExchangeOriginItemName(
        ShopBuyBulkItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  System_String_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  int32_t payType; // w8
  struct UILabel_array *v8; // x8
  UILabel_o *v9; // x19
  __int64 *v10; // x8
  struct UILabel_array *v11; // x8
  int32_t v12; // w21
  Il2CppObject *MasterData_object; // x22
  struct UILabel_array *v14; // x8
  UILabel_o *v15; // x8
  Il2CppObject *v16; // x21
  struct UILabel_array *v17; // x8
  UILabel_o *v18; // x8
  System_String_o *klass; // x1
  UILabel_o *v20; // x0
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  __int64 max_length_low; // x9
  struct UILabel_array *v23; // x9
  struct UILabel_array *v24; // x8
  struct UILabel_array *v25; // x8
  struct UILabel_array *exchangeOriginItemNames; // x8
  __int64 v27; // x24
  unsigned __int64 v28; // x9
  unsigned __int64 v29; // x25
  struct UILabel_array *v30; // x9
  unsigned __int64 v31; // x10
  CommonConsumeEntity_o *v32; // x20
  UnityEngine_Object_o *v33; // x21
  struct UILabel_array *v34; // x8
  UILabel_o *v35; // x21
  struct UILabel_array *v36; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v38; // x1
  ShopBuyBulkItemConfirmMenu_c *v39; // x8
  UnityEngine_GameObject_o *v40; // x20

  if ( (byte_5972C67 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ShopBuyBulkItemConfirmMenu_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_12888/*"STONE_NAME"*/);
    sub_2213A60(&StringLiteral_11287/*"QP_NAME"*/);
    sub_2213A60(&StringLiteral_8897/*"MANA_NAME"*/);
    sub_2213A60(&StringLiteral_11436/*"RARE_PRI_NEED_INFO"*/);
    sub_2213A60(&StringLiteral_12620/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/);
    byte_5972C67 = 1;
  }
  IsNullOrEmpty = (System_String_o *)BasicHelper__IsNullOrEmpty(
                                       (System_Collections_ICollection_o *)this->fields.exchangeOriginItemNames,
                                       0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return;
  if ( !shopEntity )
    goto LABEL_96;
  payType = shopEntity->fields.payType;
  if ( payType <= 9 )
  {
    if ( payType <= 5 )
    {
      switch ( payType )
      {
        case 1:
          exchangeOriginItemNames = this->fields.exchangeOriginItemNames;
          if ( !exchangeOriginItemNames )
            goto LABEL_96;
          if ( !LODWORD(exchangeOriginItemNames->max_length) )
            goto LABEL_97;
          v9 = exchangeOriginItemNames->m_Items[0];
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
          v10 = &StringLiteral_12888/*"STONE_NAME"*/;
          break;
        case 2:
          v25 = this->fields.exchangeOriginItemNames;
          if ( !v25 )
            goto LABEL_96;
          if ( !LODWORD(v25->max_length) )
            goto LABEL_97;
          v9 = v25->m_Items[0];
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
          v10 = &StringLiteral_11287/*"QP_NAME"*/;
          break;
        case 4:
          v8 = this->fields.exchangeOriginItemNames;
          if ( !v8 )
            goto LABEL_96;
          if ( LODWORD(v8->max_length) )
          {
            v9 = v8->m_Items[0];
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
            v10 = &StringLiteral_8897/*"MANA_NAME"*/;
            break;
          }
LABEL_97:
          sub_2213CE4(IsNullOrEmpty);
        default:
          return;
      }
LABEL_68:
      IsNullOrEmpty = LocalizationManager__Get((System_String_o *)*v10, 0);
      if ( v9 )
      {
LABEL_69:
        klass = IsNullOrEmpty;
        v20 = v9;
        goto LABEL_70;
      }
LABEL_96:
      sub_2213CDC(IsNullOrEmpty, v6);
    }
    if ( (unsigned int)(payType - 8) >= 2 && payType != 6 )
      return;
    goto LABEL_26;
  }
  if ( payType <= 12 )
  {
    if ( (unsigned int)(payType - 11) >= 2 )
    {
      if ( payType != 10 )
        return;
      v11 = this->fields.exchangeOriginItemNames;
      if ( !v11 )
        goto LABEL_96;
      if ( !LODWORD(v11->max_length) )
        goto LABEL_97;
      v9 = v11->m_Items[0];
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
      v10 = &StringLiteral_11436/*"RARE_PRI_NEED_INFO"*/;
      goto LABEL_68;
    }
LABEL_26:
    if ( ShopEntity__GetItemCount(shopEntity, 0) >= 2 )
    {
      if ( ShopEntity__GetItemCount(shopEntity, 0) < 1 )
        return;
      v12 = 0;
      while ( 1 )
      {
        IsNullOrEmpty = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !IsNullOrEmpty )
          goto LABEL_96;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)IsNullOrEmpty,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
        IsNullOrEmpty = (System_String_o *)ShopEntity__GetItemIDs(shopEntity, v12, 0);
        if ( !MasterData_object )
          goto LABEL_96;
        IsNullOrEmpty = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                             (int32_t)IsNullOrEmpty,
                                             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !IsNullOrEmpty )
          goto LABEL_96;
        v14 = this->fields.exchangeOriginItemNames;
        if ( !v14 )
          goto LABEL_96;
        if ( (unsigned int)(v12 == 0) >= LODWORD(v14->max_length) )
          goto LABEL_97;
        v15 = v14->m_Items[v12 == 0];
        if ( !v15 )
          goto LABEL_96;
        UILabel__set_text(v15, (System_String_o *)IsNullOrEmpty[1].klass, 0);
        if ( ++v12 >= ShopEntity__GetItemCount(shopEntity, 0) )
          return;
      }
    }
    IsNullOrEmpty = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsNullOrEmpty )
      goto LABEL_96;
    v16 = DataManager__GetMasterData_object_(
            (DataManager_o *)IsNullOrEmpty,
            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
    IsNullOrEmpty = (System_String_o *)ShopEntity__GetItemID(shopEntity, 0);
    if ( !v16 )
      goto LABEL_96;
    IsNullOrEmpty = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)v16,
                                         (int32_t)IsNullOrEmpty,
                                         (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( !IsNullOrEmpty )
      goto LABEL_96;
    v17 = this->fields.exchangeOriginItemNames;
    if ( !v17 )
      goto LABEL_96;
    if ( LODWORD(v17->max_length) )
    {
      v18 = v17->m_Items[0];
      if ( v18 )
      {
        klass = (System_String_o *)IsNullOrEmpty[1].klass;
        v20 = v18;
LABEL_70:
        UILabel__set_text(v20, klass, 0);
        return;
      }
      goto LABEL_96;
    }
    goto LABEL_97;
  }
  if ( payType == 13 )
  {
    v24 = this->fields.exchangeOriginItemNames;
    if ( !v24 )
      goto LABEL_96;
    if ( !LODWORD(v24->max_length) )
      goto LABEL_97;
    v9 = v24->m_Items[0];
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
    v10 = &StringLiteral_12620/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/;
    goto LABEL_68;
  }
  if ( payType != 14 )
    return;
  commonConsumeEntities = this->fields.commonConsumeEntities;
  if ( !commonConsumeEntities )
    return;
  max_length_low = LODWORD(commonConsumeEntities->max_length);
  if ( max_length_low == 1 )
  {
    v23 = this->fields.exchangeOriginItemNames;
    if ( !v23 )
      goto LABEL_96;
    if ( LODWORD(v23->max_length) )
    {
      IsNullOrEmpty = (System_String_o *)commonConsumeEntities->m_Items[0];
      if ( IsNullOrEmpty )
      {
        v9 = v23->m_Items[0];
        IsNullOrEmpty = CommonConsumeEntity__GetName((CommonConsumeEntity_o *)IsNullOrEmpty, 0);
        if ( v9 )
          goto LABEL_69;
      }
      goto LABEL_96;
    }
    goto LABEL_97;
  }
  if ( (int)max_length_low >= 2 )
  {
    v27 = 4;
    while ( 1 )
    {
      v28 = LODWORD(commonConsumeEntities->max_length);
      v29 = v27 - 4;
      if ( v27 - 4 >= (int)v28 )
        break;
      if ( v29 >= v28 )
        goto LABEL_97;
      v30 = this->fields.exchangeOriginItemNames;
      if ( !v30 )
        goto LABEL_96;
      v31 = LODWORD(v30->max_length);
      v32 = (CommonConsumeEntity_o *)*((_QWORD *)&commonConsumeEntities->obj.klass + v27);
      if ( (__int64)v29 < (int)v31 )
      {
        if ( v29 >= v31 )
          goto LABEL_97;
        v33 = (UnityEngine_Object_o *)*((_QWORD *)&v30->obj.klass + v27);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
        IsNullOrEmpty = (System_String_o *)UnityEngine_Object__op_Inequality(v33, 0, 0);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          v34 = this->fields.exchangeOriginItemNames;
          if ( !v34 )
            goto LABEL_96;
          if ( v29 >= LODWORD(v34->max_length) )
            goto LABEL_97;
          if ( !v32 )
            goto LABEL_96;
          v35 = (UILabel_o *)*((_QWORD *)&v34->obj.klass + v27);
          IsNullOrEmpty = CommonConsumeEntity__GetName(v32, 0);
          if ( !v35 )
            goto LABEL_96;
          UILabel__set_text(v35, IsNullOrEmpty, 0);
        }
      }
      if ( this->fields.displayMode == 1 )
      {
        if ( !v32 )
          goto LABEL_96;
        IsNullOrEmpty = (System_String_o *)CommonConsumeEntity__get_IsAp(v32, 0);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          v36 = this->fields.exchangeOriginItemNames;
          if ( !v36 )
            goto LABEL_96;
          if ( v29 >= LODWORD(v36->max_length) )
            goto LABEL_97;
          IsNullOrEmpty = (System_String_o *)*((_QWORD *)&v36->obj.klass + v27);
          if ( !IsNullOrEmpty )
            goto LABEL_96;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0);
          v39 = ShopBuyBulkItemConfirmMenu_TypeInfo;
          v40 = gameObject;
          if ( !*(&ShopBuyBulkItemConfirmMenu_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ShopBuyBulkItemConfirmMenu_TypeInfo, v38);
            v39 = ShopBuyBulkItemConfirmMenu_TypeInfo;
          }
          GameObjectExtensions__AddLocalPositionX(v40, (float)v39->static_fields->EXCHANGE_AP_NAME_OFFSET_X, 0);
        }
      }
      commonConsumeEntities = this->fields.commonConsumeEntities;
      ++v27;
      if ( !commonConsumeEntities )
        goto LABEL_96;
    }
  }
}


void ShopBuyBulkItemConfirmMenu__SetExchangeOriginPossession(
        ShopBuyBulkItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  UILabel_o *exchangeOriginPossession; // x21
  ShopBuyBulkItemConfirmMenu_o *v6; // x0
  const MethodInfo *v7; // x3
  UILabel_o *exchangeOriginPossessionKind; // x21
  ShopBuyBulkItemConfirmMenu_o *v9; // x0
  const MethodInfo *v10; // x3
  System_String_o *NumberFormatLong; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t v14; // x21
  int64_t possessionDisplayLimit; // x20
  int64_t CurrencyCount; // x0
  __int64 v17; // x1
  int64_t v18; // x20
  UnityEngine_Object_o *exchangeOriginPossessionCount; // x21
  __int64 v20; // x1
  UILabel_o *v21; // x19

  if ( (byte_5972C6A & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_12569/*"SHOP_BULK_WINDOW_POSSESSION"*/);
    sub_2213A60(&StringLiteral_12568/*"SHOP_BULK_WINDOW_ORIGIN_KIND"*/);
    byte_5972C6A = 1;
  }
  if ( this->fields.displayMode == 2 )
  {
    exchangeOriginPossession = this->fields.exchangeOriginPossession;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
    v6 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12569/*"SHOP_BULK_WINDOW_POSSESSION"*/, 0);
    ShopBuyBulkItemConfirmMenu__SetLabelText(v6, exchangeOriginPossession, (System_String_o *)v6, v7);
    exchangeOriginPossessionKind = this->fields.exchangeOriginPossessionKind;
    v9 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12568/*"SHOP_BULK_WINDOW_ORIGIN_KIND"*/, 0);
    ShopBuyBulkItemConfirmMenu__SetLabelText(v9, exchangeOriginPossessionKind, (System_String_o *)v9, v10);
    if ( this->fields.possessionDisplayLimit <= 0 )
    {
      if ( !shopEntity )
        goto LABEL_21;
      CurrencyCount = ShopEntity__GetCurrencyCount(shopEntity, 0);
    }
    else
    {
      if ( !shopEntity )
        goto LABEL_21;
      v14 = ShopEntity__GetCurrencyCount(shopEntity, 0);
      possessionDisplayLimit = this->fields.possessionDisplayLimit;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v13);
      CurrencyCount = System_Math__Min_77153608(v14, possessionDisplayLimit, 0);
    }
    v18 = CurrencyCount;
    exchangeOriginPossessionCount = (UnityEngine_Object_o *)this->fields.exchangeOriginPossessionCount;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    if ( UnityEngine_Object__op_Inequality(exchangeOriginPossessionCount, 0, 0) )
    {
      v21 = this->fields.exchangeOriginPossessionCount;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
      NumberFormatLong = LocalizationManager__GetNumberFormatLong(v18, 0);
      if ( v21 )
      {
        UILabel__set_text(v21, NumberFormatLong, 0);
        return;
      }
LABEL_21:
      sub_2213CDC(NumberFormatLong, v12);
    }
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
LABEL_16:
    sub_2213CDC(ItemSliderMax, v10);
  v11 = (int)ItemSliderMax;
  if ( shopEntity->fields.payType == 8 || this->fields.displayMode == 1 )
  {
    ItemSliderMax = this->fields.itemSlider;
    if ( isPreparation || v11 <= 1 )
    {
      if ( !ItemSliderMax )
        goto LABEL_16;
      if ( this->fields.displayMode == 1 )
        v11 = 1;
LABEL_11:
      UISliderWithButton__grayMode(ItemSliderMax, 0);
      goto LABEL_14;
    }
  }
  else
  {
    ItemSliderMax = this->fields.itemSlider;
    if ( isPreparation )
    {
      if ( !ItemSliderMax )
        goto LABEL_16;
      goto LABEL_11;
    }
  }
  if ( !ItemSliderMax )
    goto LABEL_16;
  UISliderWithButton__normalMode(ItemSliderMax, 0);
LABEL_14:
  ItemSliderMax = this->fields.itemSlider;
  if ( !ItemSliderMax )
    goto LABEL_16;
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

  if ( (byte_5972C5E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972C5E = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0)) == 0 )
      sub_2213CDC(gameObject, v7);
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

  if ( (byte_5972C5F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972C5F = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( !v6 )
  {
    if ( !label )
      sub_2213CDC(v6, v7);
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
  ShopBuyBulkItemConfirmMenu_o *v10; // x0
  const MethodInfo *v11; // x3
  Il2CppObject *MasterData_object; // x21
  int klass; // w8
  UILabel_o *v14; // x19
  int v15; // w8
  __int64 *v16; // x8
  struct ShopEntity_o *v17; // x8
  int32_t shopType; // w10
  UILabel_o *v19; // x20
  int v20; // w8
  __int64 v21; // x1
  const MethodInfo *v22; // x3
  UISprite_o *decideButtonImg; // x19
  ShopBuyBulkItemConfirmMenu_o *v24; // x0
  ShopBuyBulkItemConfirmMenu_o *v25; // x1
  UILabel_o *v26; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_5972C6D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&ShopBuyBulkItemConfirmMenu_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_10917/*"PURCHASE_AFTER_COSTUME"*/);
    sub_2213A60(&StringLiteral_10922/*"PURCHASE_AFTER_USER_ITEM"*/);
    sub_2213A60(&StringLiteral_10919/*"PURCHASE_AFTER_ITEM_SET"*/);
    sub_2213A60(&StringLiteral_8631/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/);
    sub_2213A60(&StringLiteral_10920/*"PURCHASE_AFTER_PRESENT_BOX"*/);
    sub_2213A60(&StringLiteral_10924/*"PURCHASE_AFTER_USER_SVT_COIN_PERIOD"*/);
    sub_2213A60(&StringLiteral_10921/*"PURCHASE_AFTER_QP"*/);
    sub_2213A60(&StringLiteral_10923/*"PURCHASE_AFTER_USER_SVT_COIN"*/);
    this = (ShopBuyBulkItemConfirmMenu_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972C6D = 1;
  }
  entity = 0;
  if ( isBuyable )
  {
    if ( !shopEntity )
      goto LABEL_57;
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
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
        v9 = &StringLiteral_10919/*"PURCHASE_AFTER_ITEM_SET"*/;
        goto LABEL_15;
      }
      if ( purchaseType == 14 )
      {
        presentAheadLabel = v6->fields.presentAheadLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
        v9 = &StringLiteral_10917/*"PURCHASE_AFTER_COSTUME"*/;
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
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
        v9 = &StringLiteral_10920/*"PURCHASE_AFTER_PRESENT_BOX"*/;
LABEL_15:
        v10 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v9, 0);
        ShopBuyBulkItemConfirmMenu__SetLabelText(v10, presentAheadLabel, (System_String_o *)v10, v11);
        return;
      }
LABEL_31:
      ShopBuyBulkItemConfirmMenu__SetLabelText(
        this,
        v6->fields.presentAheadLabel,
        (System_String_o *)StringLiteral_1/*""*/,
        method);
      return;
    }
    this = (ShopBuyBulkItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_57;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
    this = (ShopBuyBulkItemConfirmMenu_o *)ShopEntity__get_TargetId(shopEntity, 0);
    if ( !MasterData_object )
      goto LABEL_57;
    this = (ShopBuyBulkItemConfirmMenu_o *)DataMasterBase_object__object__int___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                             &entity,
                                             (int32_t)this,
                                             (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_31;
    if ( !entity )
      goto LABEL_57;
    klass = (int)entity[3].klass;
    if ( klass != 1 )
    {
      if ( klass == 29 )
      {
        v14 = v6->fields.presentAheadLabel;
        v15 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
        if ( shopEntity->fields.shopType == 17 )
        {
          if ( !v15 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
          v16 = &StringLiteral_10924/*"PURCHASE_AFTER_USER_SVT_COIN_PERIOD"*/;
        }
        else
        {
          if ( !v15 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
          v16 = &StringLiteral_10923/*"PURCHASE_AFTER_USER_SVT_COIN"*/;
        }
      }
      else
      {
        v14 = v6->fields.presentAheadLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
        v16 = &StringLiteral_10922/*"PURCHASE_AFTER_USER_ITEM"*/;
      }
      this = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v16, 0);
      if ( v14 )
      {
        v25 = this;
        v26 = v14;
LABEL_52:
        UILabel__set_text(v26, (System_String_o *)v25, 0);
        return;
      }
      goto LABEL_57;
    }
    v17 = v6->fields.shopEntity;
    if ( !v17 )
      goto LABEL_57;
    shopType = v17->fields.shopType;
    v19 = v6->fields.presentAheadLabel;
    v20 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( shopType != 9 )
    {
      if ( !v20 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
      this = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10921/*"PURCHASE_AFTER_QP"*/, 0);
      if ( v19 )
      {
        v25 = this;
        v26 = v19;
        goto LABEL_52;
      }
LABEL_57:
      sub_2213CDC(this, shopEntity);
    }
    if ( !v20 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
    this = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8631/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/, 0);
    if ( !v19 )
      goto LABEL_57;
    UILabel__set_text(v19, (System_String_o *)this, 0);
    decideButtonImg = v6->fields.decideButtonImg;
    v24 = (ShopBuyBulkItemConfirmMenu_o *)ShopBuyBulkItemConfirmMenu_TypeInfo;
    if ( !*(&ShopBuyBulkItemConfirmMenu_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyBulkItemConfirmMenu_TypeInfo, v21);
      v24 = (ShopBuyBulkItemConfirmMenu_o *)ShopBuyBulkItemConfirmMenu_TypeInfo;
    }
    ShopBuyBulkItemConfirmMenu__SetSpriteName(
      v24,
      decideButtonImg,
      (System_String_o *)v24->fields.itemSlider->monitor,
      v22);
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
  __int64 v11; // x1
  UILabel_o *warningLabel; // x20
  ShopBuyBulkItemConfirmMenu_o *v13; // x0
  const MethodInfo *v14; // x3

  if ( (byte_5972C71 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ShopBuyBulkItemConfirmMenu_SetShopNotEnableWarning__);
    sub_2213A60(&StringLiteral_12579/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/);
    byte_5972C71 = 1;
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
    v7 = (_QWORD *)sub_2213A78(Method_ShopBuyBulkItemConfirmMenu_SetShopNotEnableWarning__);
  v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
  ShopBuyBulkItemConfirmMenu__SetLabelActive(v9, this->fields.warningLabel, 1, v10);
  warningLabel = this->fields.warningLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
  v13 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12579/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, 0);
  ShopBuyBulkItemConfirmMenu__SetLabelText(v13, warningLabel, (System_String_o *)v13, v14);
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
    sub_2213CDC(decideButton, shopEntity);
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

  if ( (byte_5972C60 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972C60 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sprite);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0)) == 0 )
      sub_2213CDC(gameObject, v7);
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

  if ( (byte_5972C61 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972C61 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sprite);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( !v6 )
  {
    if ( !sprite )
      sub_2213CDC(v6, v7);
    UISprite__set_spriteName(sprite, spriteName, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyBulkItemConfirmMenu__SetWarningActive(
        ShopBuyBulkItemConfirmMenu_o *this,
        bool isActive,
        const MethodInfo *method)
{
  int32_t displayMode; // w8
  UnityEngine_GameObject_o *exchangeBase; // x0
  ShopBuyBulkItemConfirmMenu_o *v7; // x0
  const MethodInfo *v8; // x3
  bool v9; // w21
  ShopBuyBulkItemConfirmMenu_o *v10; // x0
  const MethodInfo *v11; // x3

  displayMode = this->fields.displayMode;
  exchangeBase = this->fields.exchangeBase;
  if ( displayMode != 1 )
  {
    if ( exchangeBase )
    {
      v9 = !isActive;
      UnityEngine_GameObject__SetActive(exchangeBase, !isActive, 0);
      goto LABEL_6;
    }
LABEL_7:
    sub_2213CDC(exchangeBase, isActive);
  }
  if ( !exchangeBase )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(exchangeBase, 1, 0);
  v9 = !isActive;
LABEL_6:
  ShopBuyBulkItemConfirmMenu__SetLabelActive(v7, this->fields.warningLabel, isActive, v8);
  ShopBuyBulkItemConfirmMenu__SetLabelActive(v10, this->fields.presentAheadLabel, v9, v11);
}


void ShopBuyBulkItemConfirmMenu__SetWarningText(
        ShopBuyBulkItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isPreparation,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  ShopBuyBulkItemConfirmMenu_o *v8; // x19
  int32_t displayMode; // w8
  UILabel_o *warningLabel; // x23
  unsigned int payType; // w8
  Il2CppObject *MasterData_object; // x23
  int32_t v13; // w24
  NetworkManager_c *v14; // x0
  int64_t userIdNumber; // x26
  int m_CancellationTokenSource_high; // w26
  __int64 v17; // x1
  System_Text_StringBuilder_o *v18; // x22
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  char v20; // w28
  unsigned int v21; // w26
  unsigned int max_length; // w9
  CommonConsumeEntity_o *v23; // x23
  UILabel_o *v24; // x19
  __int64 *v25; // x8
  UILabel_o *v26; // x20
  System_String_o *v27; // x21
  Il2CppObject *v28; // x0
  UILabel_o *v29; // x19
  ShopBuyBulkItemConfirmMenu_o *v30; // x0
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  ShopBuyBulkItemConfirmMenu_o *v33; // x8
  int32_t m_CancellationTokenSource; // w20
  int32_t PresentBoxMax; // w8
  struct ShopEntity_o *v36; // x9
  int v37; // w21
  UILabel_o *v38; // x19
  __int64 *v39; // x8
  Il2CppObject *v40; // x20
  __int64 v41; // x1
  BalanceConfig_c *v42; // x8
  int32_t v43; // w20
  int32_t UserItemMax; // w9
  int32_t v45; // w21
  UILabel_o *v46; // x1
  ShopBuyBulkItemConfirmMenu_o *v47; // x2
  int32_t recordNum[2]; // [xsp+8h] [xbp-78h] BYREF
  int32_t buyCmdCodeNum[2]; // [xsp+10h] [xbp-70h] BYREF
  int32_t buyServantNum[2]; // [xsp+18h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_5972C6C & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&ShopBuyBulkItemConfirmMenu_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_12595/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/);
    sub_2213A60(&StringLiteral_12586/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/);
    sub_2213A60(&StringLiteral_12596/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/);
    sub_2213A60(&StringLiteral_12559/*"SHOP_BULK_WINDOW_COMMON_CONSUME_CONFIRM_WARNING"*/);
    sub_2213A60(&StringLiteral_12560/*"SHOP_BULK_WINDOW_CONNECT_WARDS_CHAR"*/);
    sub_2213A60(&StringLiteral_12578/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/);
    sub_2213A60(&StringLiteral_12588/*"SHOP_BUY_ITEM_FULL_WARNING"*/);
    sub_2213A60(&StringLiteral_12591/*"SHOP_BUY_ITEM_OVER_WARNING"*/);
    this = (ShopBuyBulkItemConfirmMenu_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972C6C = 1;
  }
  *(_QWORD *)buyServantNum = 0;
  displayMode = v8->fields.displayMode;
  buyCmdCodeNum[1] = 0;
  buyCmdCodeNum[0] = 0;
  *(_QWORD *)recordNum = 0;
  if ( displayMode != 1 )
  {
    this = (ShopBuyBulkItemConfirmMenu_o *)BalanceConfig_TypeInfo;
    warningLabel = v8->fields.warningLabel;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, shopEntity);
    if ( !warningLabel )
      goto LABEL_108;
    UILabel__set_fontSize(warningLabel, BalanceConfig_TypeInfo->static_fields->DefaultFontSize, 0);
  }
  if ( !shopEntity )
    goto LABEL_108;
  payType = shopEntity->fields.payType;
  if ( payType <= 0xE )
  {
    if ( ((1 << payType) & 0x3B40) != 0 )
    {
      if ( ShopEntity__GetItemCount(shopEntity, 0) >= 2 )
      {
        this = (ShopBuyBulkItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_108;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
        if ( ShopEntity__GetItemCount(shopEntity, 0) >= 1 )
        {
          v13 = 0;
          while ( 1 )
          {
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, shopEntity);
            if ( !byte_5969EF2 )
            {
              sub_2213A60(&NetworkManager_TypeInfo);
              byte_5969EF2 = 1;
            }
            v14 = NetworkManager_TypeInfo;
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, shopEntity);
              v14 = NetworkManager_TypeInfo;
            }
            userIdNumber = v14->static_fields->userIdNumber;
            this = (ShopBuyBulkItemConfirmMenu_o *)ShopEntity__GetItemIDs(shopEntity, v13, 0);
            if ( !MasterData_object )
              goto LABEL_108;
            this = (ShopBuyBulkItemConfirmMenu_o *)UserItemMaster__GetEntityDefinitely(
                                                     (UserItemMaster_o *)MasterData_object,
                                                     userIdNumber,
                                                     (int32_t)this,
                                                     0);
            if ( !this )
              goto LABEL_108;
            m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !(m_CancellationTokenSource_high / ShopEntity__GetPrices(shopEntity, v13, 0)) )
              break;
            if ( ++v13 >= ShopEntity__GetItemCount(shopEntity, 0) )
              goto LABEL_57;
          }
          v24 = v8->fields.warningLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
          v25 = &StringLiteral_12586/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/;
          goto LABEL_61;
        }
      }
    }
    else if ( payType == 14 && v8->fields.displayMode == 1 && v8->fields.commonConsumeEntities )
    {
      v18 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor(v18, 0);
      commonConsumeEntities = v8->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        goto LABEL_108;
      v20 = 0;
      v21 = 0;
      while ( 1 )
      {
        max_length = commonConsumeEntities->max_length;
        if ( (int)v21 >= (int)max_length )
          break;
        if ( v21 >= max_length )
          sub_2213CE4(this);
        v23 = commonConsumeEntities->m_Items[v21];
        if ( !v23 )
          goto LABEL_108;
        if ( v23->fields.num >= 1 )
        {
          this = (ShopBuyBulkItemConfirmMenu_o *)CommonConsumeEntity__GetUserHasNum(v23, 0);
          if ( (int)this / v23->fields.num <= 0 )
          {
            if ( (v20 & 1) != 0 )
            {
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
              this = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12560/*"SHOP_BULK_WINDOW_CONNECT_WARDS_CHAR"*/, 0);
              if ( !v18 )
                goto LABEL_108;
              System_Text_StringBuilder__Append_75735064(v18, (System_String_o *)this, 0);
              this = (ShopBuyBulkItemConfirmMenu_o *)CommonConsumeEntity__GetName(v23, 0);
            }
            else
            {
              this = (ShopBuyBulkItemConfirmMenu_o *)CommonConsumeEntity__GetName(v23, 0);
              if ( !v18 )
                goto LABEL_108;
            }
            this = (ShopBuyBulkItemConfirmMenu_o *)System_Text_StringBuilder__Append_75735064(
                                                     v18,
                                                     (System_String_o *)this,
                                                     0);
            v20 = 1;
          }
        }
        commonConsumeEntities = v8->fields.commonConsumeEntities;
        ++v21;
        if ( !commonConsumeEntities )
          goto LABEL_108;
      }
      if ( !v18 )
        goto LABEL_108;
      if ( System_Text_StringBuilder__get_Length(v18, 0) >= 1 )
      {
        v26 = v8->fields.warningLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12559/*"SHOP_BULK_WINDOW_COMMON_CONSUME_CONFIRM_WARNING"*/, 0);
        v28 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v18->klass->vtable._3_ToString.methodPtr)(
                                v18,
                                v18->klass->vtable._3_ToString.method);
        this = (ShopBuyBulkItemConfirmMenu_o *)System_String__Format(v27, v28, 0);
        if ( v26 )
        {
          UILabel__set_text(v26, (System_String_o *)this, 0);
          v29 = v8->fields.warningLabel;
          this = (ShopBuyBulkItemConfirmMenu_o *)ShopBuyBulkItemConfirmMenu_TypeInfo;
          if ( !*(&ShopBuyBulkItemConfirmMenu_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ShopBuyBulkItemConfirmMenu_TypeInfo, shopEntity);
          if ( v29 )
          {
            UILabel__SetCondensedScale(
              v29,
              ShopBuyBulkItemConfirmMenu_TypeInfo->static_fields->WARNING_LABEL_MAX_WIDTH,
              0,
              0);
            return;
          }
        }
        goto LABEL_108;
      }
    }
  }
LABEL_57:
  if ( isPreparation )
  {
    v24 = v8->fields.warningLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
    v25 = &StringLiteral_12578/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/;
LABEL_61:
    v30 = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v25, 0);
    ShopBuyBulkItemConfirmMenu__SetLabelText(v30, v24, (System_String_o *)v30, v31);
    return;
  }
  this = (ShopBuyBulkItemConfirmMenu_o *)v8->fields.shopEntity;
  *(_QWORD *)buyCmdCodeNum = 0;
  *(_QWORD *)buyServantNum = 0;
  *(_QWORD *)recordNum = 0;
  if ( !this )
    goto LABEL_108;
  ShopEntity__GetSum(
    (ShopEntity_o *)this,
    &buyServantNum[1],
    buyServantNum,
    &buyCmdCodeNum[1],
    buyCmdCodeNum,
    &recordNum[1],
    recordNum,
    0);
  if ( buyCmdCodeNum[1] + buyServantNum[0] + buyCmdCodeNum[0] >= 1 )
  {
    this = (ShopBuyBulkItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_108;
    this = (ShopBuyBulkItemConfirmMenu_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    if ( !userGameEntity )
      goto LABEL_108;
    if ( !this )
      goto LABEL_108;
    this = (ShopBuyBulkItemConfirmMenu_o *)UserPresentBoxMaster__getVaildList(
                                             (UserPresentBoxMaster_o *)this,
                                             userGameEntity->fields.userId,
                                             0);
    if ( !this )
      goto LABEL_108;
    v33 = this;
    this = (ShopBuyBulkItemConfirmMenu_o *)BalanceConfig_TypeInfo;
    m_CancellationTokenSource = (int32_t)v33->fields.m_CancellationTokenSource;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, shopEntity);
      this = (ShopBuyBulkItemConfirmMenu_o *)BalanceConfig_TypeInfo;
    }
    PresentBoxMax = *(_DWORD *)&this->fields.itemSlider->fields.mInverted;
    if ( PresentBoxMax <= m_CancellationTokenSource )
    {
      v38 = v8->fields.warningLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
      v39 = &StringLiteral_12595/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/;
      goto LABEL_106;
    }
    v36 = v8->fields.shopEntity;
    if ( !v36 )
      goto LABEL_108;
    if ( v36->fields.purchaseType == 5 )
      v37 = recordNum[0];
    else
      v37 = buyCmdCodeNum[1] + buyServantNum[0] + buyCmdCodeNum[0];
    if ( !HIDWORD(this->fields.exchangeOriginItemIcons) )
    {
      j_il2cpp_runtime_class_init_0(this, shopEntity);
      PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
    }
    if ( v37 + m_CancellationTokenSource > PresentBoxMax )
    {
      v38 = v8->fields.warningLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
      v39 = &StringLiteral_12596/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/;
LABEL_106:
      this = (ShopBuyBulkItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v39, 0);
      v46 = v38;
      v47 = this;
      goto LABEL_107;
    }
  }
  if ( buyServantNum[1] < 1 )
    goto LABEL_102;
  this = (ShopBuyBulkItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_108;
  v40 = DataManager__GetMasterData_object_(
          (DataManager_o *)this,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, shopEntity);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  this = (ShopBuyBulkItemConfirmMenu_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, shopEntity);
    this = (ShopBuyBulkItemConfirmMenu_o *)NetworkManager_TypeInfo;
  }
  if ( !v40 )
LABEL_108:
    sub_2213CDC(this, shopEntity);
  this = (ShopBuyBulkItemConfirmMenu_o *)UserItemMaster__getSum(
                                           (UserItemMaster_o *)v40,
                                           *(_QWORD *)&this->fields.itemSlider->fields.mValue,
                                           0);
  v42 = BalanceConfig_TypeInfo;
  v43 = (int)this;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v41);
    v42 = BalanceConfig_TypeInfo;
  }
  UserItemMax = v42->static_fields->UserItemMax;
  if ( v43 >= UserItemMax )
  {
    v38 = v8->fields.warningLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
    v39 = &StringLiteral_12588/*"SHOP_BUY_ITEM_FULL_WARNING"*/;
    goto LABEL_106;
  }
  v45 = buyServantNum[1];
  if ( !*(&v42->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v42, v41);
    UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
  }
  if ( v45 + v43 > UserItemMax )
  {
    v38 = v8->fields.warningLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
    v39 = &StringLiteral_12591/*"SHOP_BUY_ITEM_OVER_WARNING"*/;
    goto LABEL_106;
  }
LABEL_102:
  v46 = v8->fields.warningLabel;
  v47 = (ShopBuyBulkItemConfirmMenu_o *)StringLiteral_1/*""*/;
LABEL_107:
  ShopBuyBulkItemConfirmMenu__SetLabelText(this, v46, (System_String_o *)v47, v32);
}


int32_t ShopBuyBulkItemConfirmMenu__ShowCommandCodeInfomation(
        ShopBuyBulkItemConfirmMenu_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x20
  ServantStatusDialog_EndDelegate_o *v9; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5972C7C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_ShopBuyBulkItemConfirmMenu_EndShowServantEquipStatusDialog__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5972C7C = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_9;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         commandCodeId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
  {
    v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = entity;
    v9 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ShopBuyBulkItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0);
    if ( v7 )
    {
      CommonUI__OpenServantEquipStatusDialog_37389176((CommonUI_o *)v7, 25, (CommandCodeEntity_o *)v8, 0, v9, 0, 0);
      return 0;
    }
LABEL_9:
    sub_2213CDC(Instance, v6);
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
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v9; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5972C7B & 1) == 0 )
  {
    sub_2213A60(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&Method_ShopBuyBulkItemConfirmMenu_EndShowItemDetailDialog__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5972C7B = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_9;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         itemId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = entity;
    v9 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      (intptr_t)Method_ShopBuyBulkItemConfirmMenu_EndShowItemDetailDialog__,
      0);
    if ( v7 )
    {
      CommonUI__OpenItemDetailDialog((CommonUI_o *)v7, (ItemEntity_o *)v8, v9, 50, 0);
      return 0;
    }
LABEL_9:
    sub_2213CDC(Instance, v6);
  }
  return 0;
}


int32_t ShopBuyBulkItemConfirmMenu__ShowOtherInfomation(
        ShopBuyBulkItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  Il2CppObject *Instance; // x22
  System_String_o *name; // x21
  System_String_o *infoMessage; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v8; // x23

  v4 = (Il2CppObject *)this;
  if ( (byte_5972C7D & 1) == 0 )
  {
    sub_2213A60(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ShopBuyBulkItemConfirmMenu_EndShowItemDetailDialog__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ShopBuyBulkItemConfirmMenu_o *)sub_2213A60(&StringLiteral_9661/*"NONE"*/);
    byte_5972C7D = 1;
  }
  if ( !shopEntity )
    goto LABEL_9;
  if ( !System_String__IsNullOrEmpty(shopEntity->fields.infoMessage, 0)
    && System_String__op_Inequality(shopEntity->fields.infoMessage, (System_String_o *)StringLiteral_9661/*"NONE"*/, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    name = shopEntity->fields.name;
    infoMessage = shopEntity->fields.infoMessage;
    v8 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v8,
      v4,
      (intptr_t)Method_ShopBuyBulkItemConfirmMenu_EndShowItemDetailDialog__,
      0);
    if ( Instance )
    {
      CommonUI__OpenItemDetailDialog_37450192((CommonUI_o *)Instance, name, infoMessage, v8, 0);
      return 0;
    }
LABEL_9:
    sub_2213CDC(this, shopEntity);
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

  if ( (byte_5972C7A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&EquipTargetInfo_TypeInfo);
    sub_2213A60(&ServantLeaderInfo_TypeInfo);
    sub_2213A60(&Method_ShopBuyBulkItemConfirmMenu_EndShowServantEquipStatusDialog__);
    sub_2213A60(&Method_ShopBuyBulkItemConfirmMenu_EndShowServantStatusDialog__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5972C7A = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_21;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          servantId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
    v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (ServantLeaderInfo_o *)sub_2213CCC(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_50583572(v8, servantId, 0, 1, 0);
    v9 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ShopBuyBulkItemConfirmMenu_EndShowServantStatusDialog__,
      0);
    if ( v7 )
    {
      CommonUI__OpenServantStatusDialog_37385604((CommonUI_o *)v7, 7, v8, v9, 0);
      return 0;
    }
    goto LABEL_21;
  }
  Instance = entity;
  if ( !entity )
    goto LABEL_21;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0) )
  {
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (EquipTargetInfo_o *)sub_2213CCC(EquipTargetInfo_TypeInfo);
    EquipTargetInfo___ctor_48715996(v12, servantId, 0, 1, 0, 0);
    v13 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v13,
      (Il2CppObject *)this,
      Method_ShopBuyBulkItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0);
    if ( v11 )
    {
      CommonUI__OpenServantEquipStatusDialog_37388712((CommonUI_o *)v11, 7, v12, v13, 0, 0);
      return 0;
    }
LABEL_21:
    sub_2213CDC(Instance, v6);
  }
  return 2;
}


void ShopBuyBulkItemConfirmMenu__SliderValueChange(ShopBuyBulkItemConfirmMenu_o *this, const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v4; // x3
  struct ShopEntity_o *shopEntity; // x8
  int v6; // w20
  struct CommonConsumeEntity_array *commonConsumeEntities; // x9
  int max_length; // w8
  int64_t v9; // x21
  CommonConsumeEntity_o **m_Items; // x9
  int64_t num; // x10
  int32_t v12; // w22
  int32_t v13; // w20
  int32_t itemCount; // w1
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3

  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_22;
  itemSlider = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(itemSlider, 0);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_22;
  v6 = (int)itemSlider;
  if ( shopEntity->fields.payType == 14 )
  {
    commonConsumeEntities = this->fields.commonConsumeEntities;
    if ( !commonConsumeEntities )
      return;
    max_length = commonConsumeEntities->max_length;
    if ( max_length >= 1 )
    {
      v9 = 0;
      m_Items = commonConsumeEntities->m_Items;
      while ( *m_Items )
      {
        num = (*m_Items++)->fields.num;
        if ( v9 <= num )
          v9 = num;
        if ( !--max_length )
          goto LABEL_20;
      }
      goto LABEL_22;
    }
  }
  else if ( this->fields.itemCount >= 1 )
  {
    v9 = 0;
    v12 = 0;
    while ( 1 )
    {
      itemSlider = (UISliderWithButton_o *)this->fields.shopEntity;
      if ( !itemSlider )
        break;
      itemSlider = (UISliderWithButton_o *)ShopEntity__GetPrices((ShopEntity_o *)itemSlider, v12++, 0);
      if ( v9 <= (int)itemSlider )
        v9 = (int)itemSlider;
      if ( v12 >= this->fields.itemCount )
        goto LABEL_20;
    }
LABEL_22:
    sub_2213CDC(itemSlider, method);
  }
  v9 = 0;
LABEL_20:
  v13 = ShopBuyBulkItemConfirmMenu__ItemMaxOverCheck((ShopBuyBulkItemConfirmMenu_o *)itemSlider, v6, v9, v4);
  itemCount = this->fields.itemCount;
  this->fields.buyCount = v13;
  ShopBuyBulkItemConfirmMenu__SetExchangeOriginCount(this, itemCount, v13, v15);
  ShopBuyBulkItemConfirmMenu__SetExchangeDestinationCount(this, this->fields.shopEntity, v13, v16);
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
  if ( (byte_5972C5C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16259/*"Window/CancelButton"*/);
    byte_5972C5C = 1;
  }
  return (System_String_o *)StringLiteral_16259/*"Window/CancelButton"*/;
}