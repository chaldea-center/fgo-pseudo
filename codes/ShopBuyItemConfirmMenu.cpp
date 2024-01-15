void __fastcall ShopBuyItemConfirmMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  struct ShopBuyItemConfirmMenu_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct ShopBuyItemConfirmMenu_StaticFields *v21; // x0
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_40FF3C2 & 1) == 0 )
  {
    sub_B16FFC(&ShopBuyItemConfirmMenu_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_16987/*"btn_txt_event_"*/, v8);
    sub_B16FFC(&StringLiteral_17036/*"btn_txt_trade"*/, v9);
    sub_B16FFC(&StringLiteral_17019/*"btn_txt_sale"*/, v10);
    byte_40FF3C2 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_16987/*"btn_txt_event_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16987/*"btn_txt_event_"*/;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_17036/*"btn_txt_trade"*/;
  v13->DECIED_BTN_NAME_DEFAULT = (struct System_String_o *)StringLiteral_17036/*"btn_txt_trade"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v13->DECIED_BTN_NAME_DEFAULT, v14, v15, v16, v17, v18, v19, v20);
  v21 = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_17019/*"btn_txt_sale"*/;
  v21->DECIED_BTN_NAME_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_17019/*"btn_txt_sale"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v21->DECIED_BTN_NAME_LIMIT_MATERIAL, v22, v23, v24, v25, v26, v27, v28);
  ShopBuyItemConfirmMenu_TypeInfo->static_fields->PRICE_DATA_LABEL_MAX_WIDTH = 320;
}


void __fastcall ShopBuyItemConfirmMenu___ctor(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40FF3C1 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FF3C1 = 1;
  }
  this->fields.itemDetailDialogOverwriteDepth = 0x80000000;
  *(_OWORD *)&this->fields.freeLabelPos.fields.x = xmmword_314BFD0;
  *(_QWORD *)&this->fields.freeLabelPos2digit.fields.y = 3250585600LL;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__CallOnClose(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *onClose; // x19
  BattleServantConfConponent_o *p_onClose; // x0

  onClose = this->fields.onClose;
  if ( onClose )
  {
    p_onClose = (BattleServantConfConponent_o *)&this->fields.onClose;
    p_onClose->klass = 0LL;
    sub_B16F98(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(onClose, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__CallOnDecide(
        ShopBuyItemConfirmMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_int__o *onDecide; // x21

  if ( (byte_40FF3B0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int__Invoke__, *(_QWORD *)&result);
    byte_40FF3B0 = 1;
  }
  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    this->fields.onDecide = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_int___Invoke(onDecide, result, (const MethodInfo_24B5D94 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall ShopBuyItemConfirmMenu__Close(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ShopBuyItemConfirmMenu__Close_33691512(this, 0LL, v2);
}


void __fastcall ShopBuyItemConfirmMenu__Close_33691512(
        ShopBuyItemConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FF3AF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_ShopBuyItemConfirmMenu_EndClose__, v10);
    byte_40FF3AF = 1;
  }
  this->fields.onClose = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__EndClose(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  ShopBuyItemConfirmMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ShopBuyItemConfirmMenu__CallOnClose(this, v4);
}


void __fastcall ShopBuyItemConfirmMenu__EndMaxErrorDialog(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  this->fields.state = 3;
  ShopBuyItemConfirmMenu__CallOnDecide(this, 0, v2);
}


void __fastcall ShopBuyItemConfirmMenu__EndOpen(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__EndShowItemDetailDialog(
        ShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0

  if ( (byte_40FF3BD & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FF3BD = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__EndShowServantEquipStatusDialog(
        ShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FF3BC & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FF3BC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantEquipStatusDialog(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__EndShowServantStatusDialog(
        ShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FF3BB & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FF3BB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


bool __fastcall ShopBuyItemConfirmMenu__GetIsBuyable(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  bool isQuestNotClearItemClosedSub; // w8
  bool result; // w0
  const MethodInfo *v15; // x1
  System_Int32_array *UserItemCounts; // x22
  __int64 Price; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  WebViewManager_o *Instance; // x0
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserPresentBoxEntity_array *VaildList; // x0
  int32_t purchaseType; // w8
  signed int max_length; // w19
  int32_t v25; // w20
  __int64 v26; // x21
  BalanceConfig_c *v27; // x0
  int32_t PresentBoxMax; // w8
  WebViewManager_o *v29; // x0
  UserItemMaster_o *v30; // x19
  int64_t UserId; // x0
  int32_t Sum; // w19
  BalanceConfig_c *v33; // x8
  int32_t UserItemMax; // w9
  int v35; // w21
  struct CommonConsumeEntity_array *commonConsumeEntities; // x21
  int v37; // w8
  __int64 v38; // x22
  CommonConsumeEntity_o *v39; // x0
  int num; // w24
  int32_t questId; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t recordNum[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t buyCmdCodeNum[2]; // [xsp+10h] [xbp-40h] BYREF
  __int64 buyServantNum; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_40FF3A3 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, shopEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v10);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FF3A3 = 1;
  }
  *(_QWORD *)buyCmdCodeNum = 0LL;
  buyServantNum = 0LL;
  *(_QWORD *)recordNum = 0LL;
  questId = 0;
  if ( !shopEntity )
    goto LABEL_75;
  if ( !ShopEntity__IsSoldOut(shopEntity, 0LL) || ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0LL) )
  {
    if ( shopEntity->fields.purchaseType == 6 )
    {
      if ( isInPreparation )
        return 0;
      if ( ShopEntity__isQuestNotClear(shopEntity, &questId, 0, 0LL) )
      {
        isQuestNotClearItemClosedSub = ShopEntity__isQuestNotClearItemClosedSub(shopEntity, questId, 0, 0LL);
        result = 0;
        if ( isQuestNotClearItemClosedSub )
          return result;
      }
      else if ( ShopEntity__isExpireItemClosed(shopEntity, 0LL) )
      {
        return 0;
      }
    }
    else if ( isInPreparation )
    {
      return 0;
    }
    if ( ShopEntity__IsEnable(shopEntity, 0LL, 0LL) )
    {
      UserItemCounts = ShopBuyItemConfirmMenu__GetUserItemCounts(this, v15);
      switch ( shopEntity->fields.payType )
      {
        case 2:
        case 4:
        case 8:
        case 9:
        case 0xC:
          goto LABEL_14;
        case 6:
        case 0xB:
          if ( ShopEntity__GetItemCount(shopEntity, 0LL) < 2 )
          {
LABEL_14:
            Price = ShopEntity__GetPrice(shopEntity, 0LL);
            if ( !UserItemCounts )
              goto LABEL_75;
            if ( !UserItemCounts->max_length )
            {
LABEL_76:
              sub_B17100(Price, v18, v19);
              sub_B170A0();
            }
            if ( (int)Price > UserItemCounts->m_Items[1] )
              return 0;
          }
          else if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 1 )
          {
            v26 = 0LL;
            while ( 1 )
            {
              Price = ShopEntity__GetPrices(shopEntity, v26, 0LL);
              if ( !UserItemCounts )
                break;
              if ( (unsigned int)v26 >= UserItemCounts->max_length )
                goto LABEL_76;
              if ( (int)Price > UserItemCounts->m_Items[v26 + 1] )
                return 0;
              if ( (int)++v26 >= ShopEntity__GetItemCount(shopEntity, 0LL) )
                goto LABEL_17;
            }
LABEL_75:
            sub_B170D4();
          }
LABEL_17:
          *(_QWORD *)buyCmdCodeNum = 0LL;
          buyServantNum = 0LL;
          *(_QWORD *)recordNum = 0LL;
          ShopEntity__GetSum(
            shopEntity,
            (int32_t *)&buyServantNum + 1,
            (int32_t *)&buyServantNum,
            &buyCmdCodeNum[1],
            buyCmdCodeNum,
            &recordNum[1],
            recordNum,
            0LL);
          if ( buyCmdCodeNum[1] + (int)buyServantNum + buyCmdCodeNum[0] < 1 )
            goto LABEL_56;
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_75;
          MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
          if ( !userGameEntity )
            goto LABEL_75;
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_75;
          VaildList = UserPresentBoxMaster__getVaildList(
                        MasterData_WarQuestSelectionMaster,
                        userGameEntity->fields.userId,
                        0LL);
          if ( !VaildList )
            goto LABEL_75;
          purchaseType = shopEntity->fields.purchaseType;
          max_length = VaildList->max_length;
          if ( purchaseType == 5 )
            v25 = recordNum[0];
          else
            v25 = buyCmdCodeNum[1] + buyServantNum + buyCmdCodeNum[0];
          v27 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v27 = BalanceConfig_TypeInfo;
          }
          PresentBoxMax = v27->static_fields->PresentBoxMax;
          if ( PresentBoxMax > max_length )
          {
            if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v27);
              PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
            }
            if ( v25 + max_length <= PresentBoxMax )
            {
LABEL_56:
              if ( SHIDWORD(buyServantNum) < 1 )
                return 1;
              v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !v29 )
                goto LABEL_75;
              v30 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)v29,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              UserId = NetworkManager__get_UserId(0LL);
              if ( !v30 )
                goto LABEL_75;
              Sum = UserItemMaster__getSum(v30, UserId, 0LL);
              v33 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v33 = BalanceConfig_TypeInfo;
              }
              UserItemMax = v33->static_fields->UserItemMax;
              if ( Sum < UserItemMax )
              {
                v35 = HIDWORD(buyServantNum);
                if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v33);
                  UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
                }
                if ( v35 + Sum <= UserItemMax )
                  return 1;
              }
            }
          }
          break;
        case 0xA:
          Price = ShopEntity__GetPrice(shopEntity, 0LL);
          if ( !UserItemCounts )
            goto LABEL_75;
          if ( !UserItemCounts->max_length )
            goto LABEL_76;
          if ( (int)Price > UserItemCounts->m_Items[1]
            && (!ShopEntity__IsAfterTheFreeShopReleaseDate(shopEntity, 0LL)
             || !ShopEntity__IsFulFilledFreeExchangeCondition(shopEntity, 0LL)) )
          {
            return 0;
          }
          goto LABEL_17;
        case 0xE:
          Price = ShopEntity__GetItemCount(shopEntity, 0LL);
          if ( (int)Price < 1 )
            goto LABEL_17;
          commonConsumeEntities = this->fields.commonConsumeEntities;
          if ( !commonConsumeEntities )
            goto LABEL_17;
          v37 = commonConsumeEntities->max_length;
          if ( v37 < 1 )
            goto LABEL_17;
          v38 = 0LL;
          while ( 2 )
          {
            if ( (unsigned int)v38 >= v37 )
              goto LABEL_76;
            v39 = commonConsumeEntities->m_Items[v38];
            if ( !v39 )
              goto LABEL_75;
            num = v39->fields.num;
            Price = CommonConsumeEntity__GetUserHasNum(v39, 0LL);
            if ( num <= (int)Price )
            {
              v37 = commonConsumeEntities->max_length;
              if ( (int)++v38 >= v37 )
                goto LABEL_17;
              continue;
            }
            return 0;
          }
        default:
          goto LABEL_17;
      }
    }
  }
  return 0;
}


bool __fastcall ShopBuyItemConfirmMenu__GetIsSetItemEventShop(
        ShopBuyItemConfirmMenu_o *this,
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

  if ( (byte_40FF3BE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SetItemMaster___, ids);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FF3BE = 1;
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


bool __fastcall ShopBuyItemConfirmMenu__GetIsShowMask(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        const MethodInfo *method)
{
  int32_t questId; // [xsp+Ch] [xbp-14h] BYREF

  questId = 0;
  if ( !shopEntity )
    sub_B170D4();
  if ( ShopEntity__IsSoldOut(shopEntity, 0LL) && ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0LL) )
    return 0;
  if ( shopEntity->fields.purchaseType != 6 )
  {
    if ( isInPreparation )
      return 1;
    return ShopEntity__IsSoldOut(shopEntity, 0LL) && !ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0LL);
  }
  if ( !isInPreparation )
  {
    if ( ShopEntity__isQuestNotClear(shopEntity, &questId, 0, 0LL) )
    {
      if ( ShopEntity__isQuestNotClearItemClosedSub(shopEntity, questId, 0, 0LL) )
        return 1;
      return ShopEntity__IsSoldOut(shopEntity, 0LL) && !ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0LL);
    }
    if ( !ShopEntity__isExpireItemClosed(shopEntity, 0LL) )
      return ShopEntity__IsSoldOut(shopEntity, 0LL) && !ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0LL);
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ShopBuyItemConfirmMenu__GetMaxAlertBase(
        ShopBuyItemConfirmMenu_o *this,
        int32_t shopType,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 *v6; // x8

  if ( (byte_40FF3B3 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&shopType);
    sub_B16FFC(&StringLiteral_8369/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/, v4);
    sub_B16FFC(&StringLiteral_12115/*"SHOP_MAX_ALERT"*/, v5);
    byte_40FF3B3 = 1;
  }
  if ( shopType == 9 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_8369/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_12115/*"SHOP_MAX_ALERT"*/;
  }
  return LocalizationManager__Get((System_String_o *)*v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ShopBuyItemConfirmMenu__GetMaxAlertMessage(
        ShopBuyItemConfirmMenu_o *this,
        int32_t shopType,
        int32_t itemType,
        const MethodInfo *method)
{
  System_String_o *MaxAlertBase; // x20
  const MethodInfo *v6; // x2
  Il2CppObject *MaxOverItemName; // x1

  MaxAlertBase = ShopBuyItemConfirmMenu__GetMaxAlertBase(this, shopType, *(const MethodInfo **)&itemType);
  MaxOverItemName = (Il2CppObject *)ShopBuyItemConfirmMenu__GetMaxOverItemName(
                                      (ShopBuyItemConfirmMenu_o *)MaxAlertBase,
                                      itemType,
                                      v6);
  return System_String__Format(MaxAlertBase, MaxOverItemName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ShopBuyItemConfirmMenu__GetMaxOverItemName(
        ShopBuyItemConfirmMenu_o *this,
        int32_t itemType,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 *v9; // x8

  if ( (byte_40FF3B2 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&itemType);
    sub_B16FFC(&StringLiteral_10845/*"QP_NAME"*/, v4);
    sub_B16FFC(&StringLiteral_8590/*"MANA_NAME"*/, v5);
    sub_B16FFC(&StringLiteral_10975/*"RARE_PRI_NAME"*/, v6);
    sub_B16FFC(&StringLiteral_6461/*"FRIEND_POINT_NAME"*/, v7);
    sub_B16FFC(&StringLiteral_1/*""*/, v8);
    byte_40FF3B2 = 1;
  }
  if ( itemType > 5 )
  {
    if ( itemType == 13 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v9 = &StringLiteral_6461/*"FRIEND_POINT_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v9, 0LL);
    }
    if ( itemType == 22 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v9 = &StringLiteral_10975/*"RARE_PRI_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v9, 0LL);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( itemType == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v9 = &StringLiteral_10845/*"QP_NAME"*/;
    return LocalizationManager__Get((System_String_o *)*v9, 0LL);
  }
  if ( itemType != 5 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = &StringLiteral_8590/*"MANA_NAME"*/;
  return LocalizationManager__Get((System_String_o *)*v9, 0LL);
}


System_Int32_array *__fastcall ShopBuyItemConfirmMenu__GetUserItemCounts(
        ShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v7; // x2
  struct ShopEntity_o *shopEntity; // x8
  UserGameEntity_o *v9; // x21
  System_Int32_array *v10; // x20
  WebViewManager_o *v11; // x0
  UserItemMaster_o *v12; // x21
  __int64 itemIds; // x0
  const MethodInfo *v14; // x1
  __int64 v15; // x2
  struct ShopEntity_o *v16; // x8
  struct System_Int32_array *v17; // x8
  int32_t stone; // w8
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v21; // x1
  bool isAnotehrPayDisp; // w0
  System_Int32_array *AnotherPayItemIds; // x0
  __int64 v24; // x2
  int32_t max_length; // w22
  __int64 v27; // x23
  __int64 v28; // x24
  bool v29; // w0
  struct ShopEntity_o *v30; // x8
  unsigned __int64 v31; // x26
  int32_t v32; // w22
  int64_t UserId; // x0
  bool v34; // cc
  unsigned int ItemCount; // w0
  __int64 v36; // x2

  if ( (byte_40FF3A2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_B16FFC(&int___TypeInfo, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FF3A2 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_59;
  v9 = SelfUserGame;
  switch ( shopEntity->fields.payType )
  {
    case 1:
      itemIds = sub_B17014(int___TypeInfo, 1LL, v7);
      if ( !v9 )
        goto LABEL_59;
      v10 = (System_Int32_array *)itemIds;
      if ( !itemIds )
        goto LABEL_59;
      if ( !*(_DWORD *)(itemIds + 24) )
        goto LABEL_60;
      stone = v9->fields.stone;
      goto LABEL_38;
    case 2:
      itemIds = sub_B17014(int___TypeInfo, 1LL, v7);
      if ( !v9 )
        goto LABEL_59;
      v10 = (System_Int32_array *)itemIds;
      if ( !itemIds )
        goto LABEL_59;
      if ( !*(_DWORD *)(itemIds + 24) )
        goto LABEL_60;
      stone = v9->fields.qp;
      goto LABEL_38;
    case 4:
      itemIds = sub_B17014(int___TypeInfo, 1LL, v7);
      if ( !v9 )
        goto LABEL_59;
      v10 = (System_Int32_array *)itemIds;
      if ( !itemIds )
        goto LABEL_59;
      if ( !*(_DWORD *)(itemIds + 24) )
        goto LABEL_60;
      stone = v9->fields.mana;
      goto LABEL_38;
    case 6:
    case 0xB:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_59;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
      isAnotehrPayDisp = ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v21);
      if ( !this->fields.shopEntity )
        goto LABEL_59;
      if ( isAnotehrPayDisp )
      {
        AnotherPayItemIds = ShopEntity__GetAnotherPayItemIds(this->fields.shopEntity, 0LL);
        if ( !AnotherPayItemIds )
          goto LABEL_59;
        max_length = AnotherPayItemIds->max_length;
      }
      else
      {
        max_length = ShopEntity__GetItemCount(this->fields.shopEntity, 0LL);
      }
      v10 = (System_Int32_array *)sub_B17014(int___TypeInfo, (unsigned int)max_length, v24);
      if ( max_length >= 1 )
      {
        v27 = max_length;
        v28 = 8LL;
        while ( 1 )
        {
          v29 = ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v14);
          v30 = this->fields.shopEntity;
          if ( !v30 )
            break;
          v31 = v28 - 8;
          if ( v29 )
          {
            itemIds = (__int64)ShopEntity__GetAnotherPayItemIds(this->fields.shopEntity, 0LL);
            if ( !itemIds )
              break;
          }
          else
          {
            itemIds = (__int64)v30->fields.itemIds;
            if ( !itemIds )
              break;
          }
          if ( v31 >= *(unsigned int *)(itemIds + 24) )
          {
LABEL_60:
            sub_B17100(itemIds, v14, v15);
            sub_B170A0();
          }
          v32 = *(_DWORD *)(itemIds + 4 * v28);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            break;
          itemIds = (__int64)UserItemMaster__GetEntityDefinitely(MasterData_WarQuestSelectionMaster, UserId, v32, 0LL);
          if ( !itemIds || !v10 )
            break;
          if ( v31 >= v10->max_length )
            goto LABEL_60;
          v34 = v28 - 7 < v27;
          *((_DWORD *)&v10->obj.klass + v28++) = *(_DWORD *)(itemIds + 28);
          if ( !v34 )
            return v10;
        }
LABEL_59:
        sub_B170D4();
      }
      return v10;
    case 8:
    case 9:
    case 0xC:
      v10 = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v7);
      v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v11 )
        goto LABEL_59;
      v12 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v11,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      itemIds = NetworkManager__get_UserId(0LL);
      v16 = this->fields.shopEntity;
      if ( !v16 )
        goto LABEL_59;
      v17 = v16->fields.itemIds;
      if ( !v17 )
        goto LABEL_59;
      if ( !v17->max_length )
        goto LABEL_60;
      if ( !v12 )
        goto LABEL_59;
      itemIds = (__int64)UserItemMaster__GetEntityDefinitely(v12, itemIds, v17->m_Items[1], 0LL);
      if ( !itemIds || !v10 )
        goto LABEL_59;
      if ( !v10->max_length )
        goto LABEL_60;
      stone = *(_DWORD *)(itemIds + 28);
LABEL_38:
      v10->m_Items[1] = stone;
      return v10;
    case 0xA:
      itemIds = sub_B17014(int___TypeInfo, 1LL, v7);
      if ( !v9 )
        goto LABEL_59;
      v10 = (System_Int32_array *)itemIds;
      if ( !itemIds )
        goto LABEL_59;
      if ( !*(_DWORD *)(itemIds + 24) )
        goto LABEL_60;
      stone = v9->fields.rarePri;
      goto LABEL_38;
    default:
      ItemCount = ShopEntity__GetItemCount(this->fields.shopEntity, 0LL);
      return (System_Int32_array *)sub_B17014(int___TypeInfo, ItemCount, v36);
  }
}


void __fastcall ShopBuyItemConfirmMenu__Init(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *nameLabel; // x0
  UILabel_o *messageLabel; // x20
  UILabel_o *warningLabel; // x0
  UnityEngine_Component_o *freeLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  ItemIconComponent_o *itemIcon; // x0
  UnityEngine_GameObject_o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Component_o *infoButton; // x0
  UnityEngine_GameObject_o *v18; // x0
  ShopBuyItemConfirmMenu_o *v19; // x0
  const MethodInfo *v20; // x3
  ShopBuyItemConfirmMenu_o *v21; // x0
  const MethodInfo *v22; // x3
  ShopBuyItemConfirmMenu_o *v23; // x0
  const MethodInfo *v24; // x3

  if ( (byte_40FF399 & 1) == 0 )
  {
    sub_B16FFC(&ShopBuyItemUtility_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v3);
    byte_40FF399 = 1;
  }
  nameLabel = (UILabel_o *)this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_15;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( (BYTE3(ShopBuyItemUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
  }
  ShopBuyItemUtility__SetDefaultMessageLabel(messageLabel, 0LL);
  warningLabel = this->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_15;
  UILabel__set_text(warningLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  freeLabel = (UnityEngine_Component_o *)this->fields.freeLabel;
  if ( !freeLabel )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject(freeLabel, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    goto LABEL_15;
  ItemIconComponent__Clear(itemIcon, 0LL);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v10
    || (UnityEngine_GameObject__SetActive(v10, 0, 0LL),
        this->fields.state = 0,
        this->fields.shopEntity = 0LL,
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.shopEntity, 0LL, v11, v12, v13, v14, v15, v16),
        (infoButton = (UnityEngine_Component_o *)this->fields.infoButton) == 0LL)
    || (v18 = UnityEngine_Component__get_gameObject(infoButton, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v18, 0, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText(v19, this->fields.presentAheadLabel, (System_String_o *)StringLiteral_1/*""*/, v20);
  ShopBuyItemConfirmMenu__SetLabelActive(v21, this->fields.LineText, 0, v22);
  ShopBuyItemConfirmMenu__SetLabelActive(v23, this->fields.LineText2digit, 0, v24);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__OnClickCancel(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FF3B4 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FF3B4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    ShopBuyItemConfirmMenu__CallOnDecide(this, 0, v3);
  }
}


void __fastcall ShopBuyItemConfirmMenu__OnClickDecide(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v15; // x1
  WebViewManager_o *Instance; // x0
  ShopMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct ShopEntity_o *shopEntity; // x1
  struct ShopEntity_o *v19; // x0
  NoTitleDialog_o *noTitleDialog; // x20
  System_String_o *warningMessage; // x21
  Il2CppObject *Name; // x0
  System_String_o *v23; // x21
  System_String_o *v24; // x22
  System_String_o *v25; // x23
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Action_bool__o *v30; // x24
  ShopEntity_o *v31; // x0
  const MethodInfo *v32; // x3
  struct ShopEntity_o *v33; // x8
  System_String_o *MaxAlertMessage; // x20
  CommonUI_o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Action_o *v40; // x22
  UILabel_o *presentAheadLabel; // x0
  UILabel_o *warningLabel; // x20
  System_String_o *v43; // x0
  struct UICommonButton_o *decideButton; // x0
  const MethodInfo *v45; // x2
  int32_t check; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_40FF3B1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, method);
    sub_B16FFC(&System_Action_bool__TypeInfo, v3);
    sub_B16FFC(&System_Action_TypeInfo, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&Method_ShopBuyItemConfirmMenu_EndMaxErrorDialog__, v7);
    sub_B16FFC(&Method_ShopBuyItemConfirmMenu_ReturnWarning__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B16FFC(&SoundManager_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_9328/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, v12);
    sub_B16FFC(&StringLiteral_12056/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, v13);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v14);
    sub_B16FFC(&StringLiteral_1/*""*/, v15);
    byte_40FF3B1 = 1;
  }
  check = 0;
  if ( this->fields.state != 2 )
    return;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_40;
  if ( shopEntity->fields.purchaseType != 17 )
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_40;
    if ( ShopMaster__PurchaseCloseEventShop(MasterData_WarQuestSelectionMaster, shopEntity, 0LL) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(8, 0LL);
      v19 = this->fields.shopEntity;
      if ( v19 )
      {
        noTitleDialog = this->fields.noTitleDialog;
        warningMessage = v19->fields.warningMessage;
        Name = (Il2CppObject *)ShopEntity__getName(v19, 0LL);
        v23 = System_String__Format(warningMessage, Name, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v24 = LocalizationManager__Get((System_String_o *)StringLiteral_9328/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, 0LL);
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
        v30 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v26, v27, v28, v29);
        System_Action_bool____ctor(
          v30,
          (Il2CppObject *)this,
          Method_ShopBuyItemConfirmMenu_ReturnWarning__,
          (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
        if ( noTitleDialog )
        {
          NoTitleDialog__Open(noTitleDialog, v23, v24, v25, v30, 0LL);
          return;
        }
      }
LABEL_40:
      sub_B170D4();
    }
    shopEntity = this->fields.shopEntity;
    if ( !shopEntity )
      goto LABEL_35;
  }
  if ( ShopEntity__IsEnable(shopEntity, 0LL, 0LL) )
  {
    v31 = this->fields.shopEntity;
    if ( !v31 )
      goto LABEL_40;
    if ( ShopEntity__isMaxOver(v31, 1LL, &check, 0LL) )
    {
      v33 = this->fields.shopEntity;
      if ( !v33 )
        goto LABEL_40;
      MaxAlertMessage = ShopBuyItemConfirmMenu__GetMaxAlertMessage(this, v33->fields.shopType, check, v32);
      v35 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v40 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v36, v37, v38, v39);
      System_Action___ctor(v40, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndMaxErrorDialog__, 0LL);
      if ( !v35 )
        goto LABEL_40;
      CommonUI__OpenNotificationDialog(
        v35,
        (System_String_o *)StringLiteral_1/*""*/,
        MaxAlertMessage,
        v40,
        -1,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0LL,
        0LL);
      return;
    }
LABEL_35:
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    ShopBuyItemConfirmMenu__CallOnDecide(this, 1, v45);
    return;
  }
  presentAheadLabel = this->fields.presentAheadLabel;
  if ( !presentAheadLabel )
    goto LABEL_40;
  UILabel__set_text(presentAheadLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  warningLabel = this->fields.warningLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12056/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_40;
  UILabel__set_text(warningLabel, v43, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_40;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))decideButton->klass->vtable._14_SetState.method)(
    decideButton,
    3LL,
    0LL,
    decideButton->klass->vtable._15_OnPress.methodPtr);
}


void __fastcall ShopBuyItemConfirmMenu__OnClickInfo(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ShopEntity_o *shopEntity; // x1
  int purchaseType; // w8
  ShopBuyItemConfirmMenu_o *v6; // x0
  const MethodInfo *v7; // x2
  int32_t v8; // w0
  const MethodInfo *v9; // x4
  struct ShopEntity_o *v10; // x8
  int32_t v11; // w1
  int32_t v12; // w0
  const MethodInfo *v13; // x2
  int32_t TargetId; // w0
  const MethodInfo *v15; // x2

  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_14;
  purchaseType = shopEntity->fields.purchaseType;
  if ( purchaseType <= 4 )
  {
    if ( purchaseType == 1 )
    {
      TargetId = ShopEntity__get_TargetId(this->fields.shopEntity, 0LL);
      v6 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu__ShowItemInfomation(this, TargetId, v15);
      goto LABEL_12;
    }
    if ( purchaseType != 4 )
      goto LABEL_5;
  }
  else
  {
    if ( purchaseType == 19 )
    {
      v12 = ShopEntity__get_TargetId(this->fields.shopEntity, 0LL);
      v6 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu__ShowCommandCodeInfomation(this, v12, v13);
      goto LABEL_12;
    }
    if ( purchaseType != 21 )
    {
LABEL_5:
      v6 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu__ShowOtherInfomation(this, shopEntity, v2);
LABEL_12:
      v11 = 0;
      goto LABEL_13;
    }
  }
  v8 = ShopEntity__get_TargetId(this->fields.shopEntity, 0LL);
  v10 = this->fields.shopEntity;
  if ( !v10 )
LABEL_14:
    sub_B170D4();
  v6 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu__ShowServantInfomation(
                                     this,
                                     v8,
                                     v10->fields.defaultLimitCount,
                                     v10->fields.defaultLv,
                                     v9);
  v11 = (int)v6;
LABEL_13:
  ShopBuyItemConfirmMenu__PlayShowInfomationSound(v6, v11, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__Open(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        int32_t shopKind,
        System_Action_int__o *onDecide,
        int32_t buttonSpriteId,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  ShopEntity_o **p_shopEntity; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct CommonConsumeEntity_array *CommonConsumeEntities; // x1
  struct CommonConsumeEntity_array **p_commonConsumeEntities; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *Name; // x22
  System_String_o *v34; // x0
  System_String_o *v35; // x22
  const MethodInfo *v36; // x3
  UISprite_o *decideButtonImg; // x23
  ShopBuyItemConfirmMenu_o *v38; // x0
  bool IsPreparation; // w0
  bool v40; // w25
  bool v41; // w23
  const MethodInfo *v42; // x4
  UserGameEntity_o *SelfUserGame; // x24
  const MethodInfo *v44; // x4
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x3
  ShopEntity_o *v47; // x26
  UILabel_o *textOnMask; // x27
  const MethodInfo *v49; // x3
  ShopEntity_o *v50; // x25
  UISprite_o *possessionSprite; // x26
  bool v52; // w0
  ShopEntity_o *v53; // x0
  const MethodInfo *v54; // x3
  bool IsNotHavingShopItemReceived; // w0
  bool v56; // w25
  bool v57; // w21
  const MethodInfo *v58; // x5
  const MethodInfo *v59; // x4
  bool IsBuyable; // w0
  struct UICommonButton_o *decideButton; // x8
  bool v62; // w20
  __int64 v63; // x1
  const MethodInfo *v64; // x3
  const MethodInfo *v65; // x3
  const MethodInfo *v66; // x5
  UISprite_o *itemMaskeSprite; // x20
  ShopBuyItemConfirmMenu_o *v68; // x0
  const MethodInfo *v69; // x3
  _BOOL8 IsShowMask; // x0
  const MethodInfo *v71; // x3
  const MethodInfo *v72; // x3
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  System_Action_o *v77; // x20
  System_String_o *itemName; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_40FF39A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, shopEntity);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&Method_ShopBuyItemConfirmMenu_EndOpen__, v14);
    sub_B16FFC(&ShopBuyItemConfirmMenu_TypeInfo, v15);
    sub_B16FFC(&ShopBuyItemUtility_TypeInfo, v16);
    byte_40FF39A = 1;
  }
  message = 0LL;
  itemName = 0LL;
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      (System_Int32_array **)onDecide,
      *(System_String_array ***)&shopKind,
      (System_String_array **)onDecide,
      *(System_Boolean_array ***)&buttonSpriteId,
      (System_Int32_array **)method,
      v6,
      v7);
    p_shopEntity = &this->fields.shopEntity;
    this->fields.shopEntity = shopEntity;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.shopEntity,
      (System_Int32_array **)shopEntity,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    if ( !this->fields.shopEntity )
      goto LABEL_8;
    if ( !shopEntity )
      goto LABEL_34;
    if ( shopEntity->fields.payType == 14 )
    {
      CommonConsumeEntities = ShopEntity__GetCommonConsumeEntities(shopEntity, 0LL);
      p_commonConsumeEntities = &this->fields.commonConsumeEntities;
      this->fields.commonConsumeEntities = CommonConsumeEntities;
    }
    else
    {
LABEL_8:
      p_commonConsumeEntities = &this->fields.commonConsumeEntities;
      CommonConsumeEntities = 0LL;
      this->fields.commonConsumeEntities = 0LL;
    }
    sub_B16F98(
      (BattleServantConfConponent_o *)p_commonConsumeEntities,
      (System_Int32_array **)CommonConsumeEntities,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    this->fields.shopKind = shopKind;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      if ( *p_shopEntity )
      {
        Name = ShopEntity__getName(*p_shopEntity, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v34 = LocalizationManager__ReplaceCommonTag(Name, 0, 0LL);
        if ( this->fields.nameLabel )
        {
          v35 = v34;
          UICrossNarrowLabel__SetCrossNarrowText(this->fields.nameLabel, v34, 0LL);
          decideButtonImg = this->fields.decideButtonImg;
          v38 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          if ( (BYTE3(ShopBuyItemConfirmMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
            v38 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          }
          ShopBuyItemConfirmMenu__SetSpriteName(
            v38,
            decideButtonImg,
            (System_String_o *)v38->fields.bandSprite->monitor,
            v36);
          if ( *p_shopEntity )
          {
            IsPreparation = ShopEntity__IsPreparation(*p_shopEntity, &message, &itemName, 0LL);
            v40 = IsPreparation;
            v41 = IsPreparation;
            ShopBuyItemConfirmMenu__SetMessageLabel(this, this->fields.shopEntity, IsPreparation, message, v42);
            SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
            ShopBuyItemConfirmMenu__SetWarningLabel(this, this->fields.shopEntity, v40, SelfUserGame, v44);
            ShopBuyItemConfirmMenu__SetBandSprite(this, this->fields.shopEntity, v45);
            ShopBuyItemConfirmMenu__SetTextOnMask(this, this->fields.shopEntity, v40, v46);
            v47 = this->fields.shopEntity;
            textOnMask = this->fields.textOnMask;
            if ( (BYTE3(ShopBuyItemUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
            }
            ShopBuyItemUtility__SetAddTextOnMask(v47, textOnMask, 0LL);
            ShopBuyItemConfirmMenu__SetNumText(this, this->fields.shopEntity, v40, v49);
            v50 = this->fields.shopEntity;
            if ( v50 )
            {
              possessionSprite = this->fields.possessionSprite;
              v52 = ShopEntity__checkFlag(this->fields.shopEntity, 0x4000, 0LL);
              ShopBuyItemUtility__SetShopHaveStatusIcon(v50, possessionSprite, v52, 0LL);
              v53 = this->fields.shopEntity;
              if ( v53 )
              {
                if ( ShopEntity__IsSoldOut(v53, 0LL) )
                {
                  if ( !*p_shopEntity )
                    goto LABEL_34;
                  IsNotHavingShopItemReceived = ShopEntity__GetIsNotHavingShopItemReceived(*p_shopEntity, 0LL);
                }
                else
                {
                  IsNotHavingShopItemReceived = 0;
                }
                v56 = IsNotHavingShopItemReceived;
                ShopBuyItemConfirmMenu__SetExtensionText(
                  this,
                  this->fields.shopEntity,
                  IsNotHavingShopItemReceived,
                  v54);
                v57 = v41;
                ShopBuyItemConfirmMenu__SetPriceInfo(this, this->fields.shopEntity, v41, buttonSpriteId, v56, v58);
                IsBuyable = ShopBuyItemConfirmMenu__GetIsBuyable(this, this->fields.shopEntity, v41, SelfUserGame, v59);
                decideButton = this->fields.decideButton;
                if ( decideButton )
                {
                  v62 = IsBuyable;
                  if ( IsBuyable )
                    v63 = 0LL;
                  else
                    v63 = 3LL;
                  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))decideButton->klass->vtable._14_SetState.method)(
                    this->fields.decideButton,
                    v63,
                    1LL,
                    decideButton->klass->vtable._15_OnPress.methodPtr);
                  ShopBuyItemConfirmMenu__SetAheadText(this, this->fields.shopEntity, v62, v64);
                  ShopBuyItemConfirmMenu__SetItemIcon(this, this->fields.shopEntity, v57, v65);
                  ShopBuyItemConfirmMenu__SetNameText(this, this->fields.shopEntity, v57, v35, itemName, v66);
                  itemMaskeSprite = this->fields.itemMaskeSprite;
                  IsShowMask = ShopBuyItemConfirmMenu__GetIsShowMask(v68, this->fields.shopEntity, v57, v69);
                  ShopBuyItemConfirmMenu__SetSpriteActive(
                    (ShopBuyItemConfirmMenu_o *)IsShowMask,
                    itemMaskeSprite,
                    IsShowMask,
                    v71);
                  ShopBuyItemConfirmMenu__SetInfoButton(this, this->fields.shopEntity, v57, v72);
                  this->fields.state = 1;
                  v77 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v73, v74, v75, v76);
                  System_Action___ctor(v77, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndOpen__, 0LL);
                  BaseDialog__Open((BaseDialog_o *)this, v77, 0, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_34:
    sub_B170D4();
  }
}


void __fastcall ShopBuyItemConfirmMenu__OpenAfterCheckedFree(
        ShopBuyItemConfirmMenu_o *this,
        ShopBuyItemListViewItem_o *item,
        System_Action_o *onChecked,
        System_Action_int__o *onCloseReturnWarning,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x23
  _BOOL4 IsPreparation; // w0
  _BOOL4 v19; // w24
  WebViewManager_o *Instance; // x0
  System_String_o *warningMessage; // x24
  CommonUI_o *v22; // x22
  Il2CppObject *Name; // x0
  System_String_o *v24; // x23
  System_String_o *v25; // x24
  System_String_o *v26; // x25
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Action_bool__o *v31; // x26
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_o *v44; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *message; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FF3BF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, item);
    sub_B16FFC(&System_Action_bool__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&Method_ShopBuyItemConfirmMenu_ReturnWarningRarePri__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v14);
    sub_B16FFC(&StringLiteral_18815/*"freeShopCondId"*/, v15);
    sub_B16FFC(&StringLiteral_11097/*"RETURN_RARE_PRI_SHOP_DECIDE_BUTTON"*/, v16);
    byte_40FF3BF = 1;
  }
  v44 = 0LL;
  message = 0LL;
  if ( !this->fields.state )
  {
    if ( item )
    {
      Shop_k__BackingField = item->fields._Shop_k__BackingField;
      if ( Shop_k__BackingField )
      {
        IsPreparation = ShopEntity__IsPreparation(item->fields._Shop_k__BackingField, &message, &v44, 0LL);
        if ( Shop_k__BackingField->fields.script )
        {
          v19 = IsPreparation;
          if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                  (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Shop_k__BackingField->fields.script,
                  (System_Xml_XmlQualifiedName_o *)StringLiteral_18815/*"freeShopCondId"*/,
                  (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
            || ((v19 | ShopBuyItemListViewItem__get_IsSoldOut(item, 0LL)) & 1) != 0
            || !ShopEntity__IsAfterTheFreeShopReleaseDate(Shop_k__BackingField, 0LL)
            || ShopEntity__IsFulFilledFreeExchangeCondition(Shop_k__BackingField, 0LL) )
          {
            ActionExtensions__Call(onChecked, 0LL);
            return;
          }
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          warningMessage = Shop_k__BackingField->fields.warningMessage;
          v22 = (CommonUI_o *)Instance;
          Name = (Il2CppObject *)ShopEntity__getName(Shop_k__BackingField, 0LL);
          v24 = System_String__Format(warningMessage, Name, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v25 = LocalizationManager__Get((System_String_o *)StringLiteral_11097/*"RETURN_RARE_PRI_SHOP_DECIDE_BUTTON"*/, 0LL);
          v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
          v31 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v27, v28, v29, v30);
          System_Action_bool____ctor(
            v31,
            (Il2CppObject *)this,
            Method_ShopBuyItemConfirmMenu_ReturnWarningRarePri__,
            (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
          if ( v22 )
          {
            CommonUI__OpenNoTitleDialog(v22, v24, v25, v26, v31, 0LL);
            this->fields.onChecked = onChecked;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.onChecked,
              (System_Int32_array **)onChecked,
              v32,
              v33,
              v34,
              v35,
              v36,
              v37);
            this->fields.onCloseReturnWarning = onCloseReturnWarning;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.onCloseReturnWarning,
              (System_Int32_array **)onCloseReturnWarning,
              v38,
              v39,
              v40,
              v41,
              v42,
              v43);
            return;
          }
        }
      }
    }
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__PlayShowInfomationSound(
        ShopBuyItemConfirmMenu_o *this,
        int32_t seKind,
        const MethodInfo *method)
{
  if ( (byte_40FF3BA & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, *(_QWORD *)&seKind);
    byte_40FF3BA = 1;
  }
  if ( (seKind & 0x80000000) == 0 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(seKind, 0LL);
  }
}


void __fastcall ShopBuyItemConfirmMenu__ReturnWarning(
        ShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  NoTitleDialog_o *noTitleDialog; // x0
  const MethodInfo *v6; // x2

  noTitleDialog = this->fields.noTitleDialog;
  if ( !noTitleDialog )
    sub_B170D4();
  NoTitleDialog__Close(noTitleDialog, 0LL);
  if ( isDecide )
  {
    this->fields.state = 3;
    ShopBuyItemConfirmMenu__CallOnDecide(this, 1, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__ReturnWarningRarePri(
        ShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  CommonUI_o *Instance; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Action_o *v22; // x20

  if ( (byte_40FF3B5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_ShopBuyItemConfirmMenu___c__DisplayClass93_0__ReturnWarningRarePri_b__0__, v8);
    sub_B16FFC(&ShopBuyItemConfirmMenu___c__DisplayClass93_0_TypeInfo, v9);
    byte_40FF3B5 = 1;
  }
  v10 = sub_B170CC(ShopBuyItemConfirmMenu___c__DisplayClass93_0_TypeInfo, isDecide, method, v3, v4);
  ShopBuyItemConfirmMenu___c__DisplayClass93_0___ctor((ShopBuyItemConfirmMenu___c__DisplayClass93_0_o *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v10 + 16),
          (System_Int32_array **)this,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        *(_BYTE *)(v10 + 24) = isDecide,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21),
        System_Action___ctor(
          v22,
          (Il2CppObject *)v10,
          Method_ShopBuyItemConfirmMenu___c__DisplayClass93_0__ReturnWarningRarePri_b__0__,
          0LL),
        !Instance) )
  {
    sub_B170D4();
  }
  CommonUI__CloseNoTitleDialog(Instance, v22, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__SetAheadText(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isBuyable,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v6; // x19
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
  int32_t purchaseType; // w8
  UILabel_o *presentAheadLabel; // x19
  __int64 *v22; // x8
  System_String_o *v23; // x0
  System_String_o *v24; // x1
  UILabel_o *v25; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  int32_t TargetId; // w0
  int32_t bannerId; // w8
  int32_t shopType; // w9
  UILabel_o *v31; // x20
  System_String_o *v32; // x0
  const MethodInfo *v33; // x3
  UISprite_o *decideButtonImg; // x19
  ShopBuyItemConfirmMenu_o *v35; // x0
  System_String_o *v36; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_40FF3A6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&ShopBuyItemConfirmMenu_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&StringLiteral_10507/*"PURCHASE_AFTER_COSTUME"*/, v11);
    sub_B16FFC(&StringLiteral_10512/*"PURCHASE_AFTER_USER_ITEM"*/, v12);
    sub_B16FFC(&StringLiteral_10509/*"PURCHASE_AFTER_ITEM_SET"*/, v13);
    sub_B16FFC(&StringLiteral_8368/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/, v14);
    sub_B16FFC(&StringLiteral_10510/*"PURCHASE_AFTER_PRESENT_BOX"*/, v15);
    sub_B16FFC(&StringLiteral_10508/*"PURCHASE_AFTER_EVENT_SVT_GET"*/, v16);
    sub_B16FFC(&StringLiteral_10511/*"PURCHASE_AFTER_QP"*/, v17);
    sub_B16FFC(&StringLiteral_10513/*"PURCHASE_AFTER_USER_SVT_COIN"*/, v18);
    this = (ShopBuyItemConfirmMenu_o *)sub_B16FFC(&StringLiteral_1/*""*/, v19);
    byte_40FF3A6 = 1;
  }
  entity = 0LL;
  ShopBuyItemConfirmMenu__SetLabelText(this, v6->fields.presentAheadLabel, (System_String_o *)StringLiteral_1/*""*/, method);
  if ( isBuyable )
  {
    if ( !shopEntity )
      goto LABEL_58;
    purchaseType = shopEntity->fields.purchaseType;
    if ( purchaseType <= 14 )
    {
      switch ( purchaseType )
      {
        case 1:
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_58;
          MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)Instance,
                                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
          TargetId = ShopEntity__get_TargetId(shopEntity, 0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_58;
          if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                  MasterData_WarQuestSelectionMaster,
                  &entity,
                  TargetId,
                  (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
            return;
          if ( !entity )
            goto LABEL_58;
          bannerId = entity->fields.bannerId;
          if ( bannerId != 1 )
          {
            if ( bannerId == 29 )
            {
              presentAheadLabel = v6->fields.presentAheadLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v22 = &StringLiteral_10513/*"PURCHASE_AFTER_USER_SVT_COIN"*/;
            }
            else
            {
              presentAheadLabel = v6->fields.presentAheadLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v22 = &StringLiteral_10512/*"PURCHASE_AFTER_USER_ITEM"*/;
            }
LABEL_12:
            v23 = LocalizationManager__Get((System_String_o *)*v22, 0LL);
            if ( presentAheadLabel )
            {
              v24 = v23;
              v25 = presentAheadLabel;
LABEL_14:
              UILabel__set_text(v25, v24, 0LL);
              return;
            }
            goto LABEL_58;
          }
          shopType = shopEntity->fields.shopType;
          v31 = v6->fields.presentAheadLabel;
          if ( shopType != 9 )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v36 = LocalizationManager__Get((System_String_o *)StringLiteral_10511/*"PURCHASE_AFTER_QP"*/, 0LL);
            if ( v31 )
            {
              v24 = v36;
              v25 = v31;
              goto LABEL_14;
            }
LABEL_58:
            sub_B170D4();
          }
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v32 = LocalizationManager__Get((System_String_o *)StringLiteral_8368/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/, 0LL);
          if ( !v31 )
            goto LABEL_58;
          UILabel__set_text(v31, v32, 0LL);
          decideButtonImg = v6->fields.decideButtonImg;
          v35 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          if ( (BYTE3(ShopBuyItemConfirmMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
            v35 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          }
          ShopBuyItemConfirmMenu__SetSpriteName(
            v35,
            decideButtonImg,
            *(System_String_o **)&v35->fields.bandSprite->fields.m_CachedPtr,
            v33);
          break;
        case 2:
        case 3:
        case 6:
        case 7:
          return;
        case 4:
          goto LABEL_8;
        case 5:
          presentAheadLabel = v6->fields.presentAheadLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v22 = &StringLiteral_10509/*"PURCHASE_AFTER_ITEM_SET"*/;
          goto LABEL_12;
        case 8:
          presentAheadLabel = v6->fields.presentAheadLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v22 = &StringLiteral_10508/*"PURCHASE_AFTER_EVENT_SVT_GET"*/;
          goto LABEL_12;
        default:
          if ( purchaseType != 14 )
            return;
          presentAheadLabel = v6->fields.presentAheadLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v22 = &StringLiteral_10507/*"PURCHASE_AFTER_COSTUME"*/;
          goto LABEL_12;
      }
    }
    else if ( (unsigned int)purchaseType <= 0x15 && ((1 << purchaseType) & 0x290000) != 0 )
    {
LABEL_8:
      presentAheadLabel = v6->fields.presentAheadLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v22 = &StringLiteral_10510/*"PURCHASE_AFTER_PRESENT_BOX"*/;
      goto LABEL_12;
    }
  }
}


void __fastcall ShopBuyItemConfirmMenu__SetBandSprite(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopBuyItemConfirmMenu_o *v5; // x19
  __int64 v6; // x1
  ShopBuyItemConfirmMenu_o *v7; // x0
  const MethodInfo *v8; // x3
  UISprite_o *bandSprite; // x1
  __int64 *v10; // x8

  v5 = this;
  if ( (byte_40FF3A7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19667/*"img_txt_shop"*/, shopEntity);
    this = (ShopBuyItemConfirmMenu_o *)sub_B16FFC(&StringLiteral_19655/*"img_txt_quest"*/, v6);
    byte_40FF3A7 = 1;
  }
  if ( !shopEntity )
    sub_B170D4();
  switch ( shopEntity->fields.purchaseType )
  {
    case 5:
      this = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu__GetIsSetItemEventShop(
                                           this,
                                           shopEntity->fields.targetIds,
                                           method);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_5;
      goto LABEL_9;
    case 6:
      ShopBuyItemConfirmMenu__SetSpriteActive(this, v5->fields.bandSprite, 1, v3);
      bandSprite = v5->fields.bandSprite;
      v10 = &StringLiteral_19655/*"img_txt_quest"*/;
      goto LABEL_7;
    case 7:
    case 9:
LABEL_5:
      ShopBuyItemConfirmMenu__SetSpriteActive(this, v5->fields.bandSprite, 1, v3);
      bandSprite = v5->fields.bandSprite;
      v10 = &StringLiteral_19667/*"img_txt_shop"*/;
LABEL_7:
      ShopBuyItemConfirmMenu__SetSpriteName(v7, bandSprite, (System_String_o *)*v10, v8);
      break;
    default:
LABEL_9:
      ShopBuyItemConfirmMenu__SetSpriteActive(this, v5->fields.bandSprite, 0, v3);
      break;
  }
}


void __fastcall ShopBuyItemConfirmMenu__SetCommonConsumeIcon(
        ShopBuyItemConfirmMenu_o *this,
        ItemIconComponent_o *itemIcon,
        CommonConsumeEntity_o *commonConsumeEntity,
        const MethodInfo *method)
{
  ItemEntity_o *ItemEntity; // x0
  UISprite_o *iconSprite; // x19

  if ( (byte_40FF3AD & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, itemIcon);
    byte_40FF3AD = 1;
  }
  if ( !commonConsumeEntity )
    goto LABEL_15;
  if ( CommonConsumeEntity__get_IsItem(commonConsumeEntity, 0LL) )
  {
    ItemEntity = CommonConsumeEntity__GetItemEntity(commonConsumeEntity, 0LL);
    if ( ItemEntity )
    {
      if ( itemIcon )
      {
        ItemIconComponent__SetItem(itemIcon, ItemEntity->fields.imageId, -1, 0LL);
        return;
      }
LABEL_15:
      sub_B170D4();
    }
  }
  else if ( CommonConsumeEntity__get_IsAp(commonConsumeEntity, 0LL) )
  {
    if ( !itemIcon )
      goto LABEL_15;
    iconSprite = itemIcon->fields.iconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetItem(iconSprite, 47, 0LL);
  }
}


void __fastcall ShopBuyItemConfirmMenu__SetCommonConsumePriceText(
        ShopBuyItemConfirmMenu_o *this,
        UILabel_o *priceDataLabel,
        UIIconLabel_o *priceIconLabel,
        ItemIconComponent_o *itemIcon,
        CommonConsumeEntity_o *commonConsumeEnt,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  bool v15; // w0
  System_String_o *v16; // x24
  Il2CppObject *v17; // x25
  Il2CppObject *Name; // x0
  System_String_o *v19; // x0
  ShopBuyItemConfirmMenu_c *v20; // x0
  ShopEntity_o *shopEntity; // x0
  int32_t PriceIcon; // w0
  int32_t v23; // w22
  int32_t v24; // w23
  int32_t HasNum; // w0
  ShopBuyItemConfirmMenu_o *v26; // x0
  const MethodInfo *v27; // x3
  int32_t num; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FF3AC & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, priceDataLabel);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&ShopBuyItemConfirmMenu_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_5624/*"EVENT_ITEM_NEED_INFO"*/, v14);
    byte_40FF3AC = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)priceDataLabel, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)priceIconLabel, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)itemIcon, 0LL, 0LL);
      if ( commonConsumeEnt && !v15 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5624/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
        num = commonConsumeEnt->fields.num;
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
        Name = (Il2CppObject *)CommonConsumeEntity__GetName(commonConsumeEnt, 0LL);
        v19 = System_String__Format_43739268(v16, v17, Name, 0LL);
        if ( !priceDataLabel )
          goto LABEL_27;
        UILabel__set_text(priceDataLabel, v19, 0LL);
        v20 = ShopBuyItemConfirmMenu_TypeInfo;
        if ( (BYTE3(ShopBuyItemConfirmMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
          v20 = ShopBuyItemConfirmMenu_TypeInfo;
        }
        UILabel__SetCondensedScale(priceDataLabel, v20->static_fields->PRICE_DATA_LABEL_MAX_WIDTH, 0LL);
        shopEntity = this->fields.shopEntity;
        if ( !shopEntity
          || (PriceIcon = ShopEntity__GetPriceIcon(shopEntity, 0LL),
              v23 = commonConsumeEnt->fields.num,
              v24 = PriceIcon,
              HasNum = CommonConsumeEntity__GetUserHasNum(commonConsumeEnt, 0LL),
              !priceIconLabel) )
        {
LABEL_27:
          sub_B170D4();
        }
        UIIconLabel__SetPurchaseDecision(priceIconLabel, v24, v23, HasNum, 0LL);
        ShopBuyItemConfirmMenu__SetCommonConsumeIcon(v26, itemIcon, commonConsumeEnt, v27);
      }
    }
  }
}


void __fastcall ShopBuyItemConfirmMenu__SetCommonConsumeWarningLabel(
        ShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ShopBuyItemConfirmMenu__SetDecideButtonSprite(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        int32_t eventId,
        int32_t buttonSpriteId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UISprite_o *deceideBtnSprite; // x21
  ShopBuyItemConfirmMenu_c *v13; // x0
  System_String_o *VALENTINE_BTN_NAME; // x22
  System_String_o *v15; // x20
  System_String_o *v16; // x0
  System_String_o *v17; // x20
  UISprite_o *v18; // x20
  UISprite_o *v19; // x0
  struct UISprite_o *v20; // x0
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  v21 = buttonSpriteId;
  if ( (byte_40FF3AE & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, shopEntity);
    sub_B16FFC(&EventRewardRootComponent_TypeInfo, v8);
    sub_B16FFC(&ShopBuyItemConfirmMenu_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_15842/*"_"*/, v10);
    sub_B16FFC(&StringLiteral_17036/*"btn_txt_trade"*/, v11);
    byte_40FF3AE = 1;
  }
  if ( !shopEntity )
    goto LABEL_20;
  if ( shopEntity->fields.payType == 6 )
  {
    if ( !buttonSpriteId )
      goto LABEL_13;
    deceideBtnSprite = this->fields.deceideBtnSprite;
    v13 = ShopBuyItemConfirmMenu_TypeInfo;
    if ( (BYTE3(ShopBuyItemConfirmMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
      v13 = ShopBuyItemConfirmMenu_TypeInfo;
    }
    VALENTINE_BTN_NAME = v13->static_fields->VALENTINE_BTN_NAME;
    v15 = System_Int32__ToString((int)shopEntity + 24, 0LL);
    v16 = System_Int32__ToString((int32_t)&v21, 0LL);
    v17 = System_String__Concat_43747144(VALENTINE_BTN_NAME, v15, (System_String_o *)StringLiteral_15842/*"_"*/, v16, 0LL);
    if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    }
    if ( !EventRewardRootComponent__setRewardInfoImg(deceideBtnSprite, v17, 0LL) )
    {
LABEL_13:
      v18 = this->fields.deceideBtnSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetCommon(v18, 0LL);
      v19 = this->fields.deceideBtnSprite;
      if ( v19 )
      {
        UISprite__set_spriteName(v19, (System_String_o *)StringLiteral_17036/*"btn_txt_trade"*/, 0LL);
        v20 = this->fields.deceideBtnSprite;
        if ( v20 )
        {
          ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v20->klass->vtable._33_MakePixelPerfect.method)(
            v20,
            v20->klass->vtable._34_get_minWidth.methodPtr);
          return;
        }
      }
LABEL_20:
      sub_B170D4();
    }
  }
}


void __fastcall ShopBuyItemConfirmMenu__SetExtensionText(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isNotHavingShopItemReceived,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v6; // x20
  __int64 v7; // x1
  UILabel_o *v8; // x1
  bool v9; // w2
  UILabel_o *extensionInfoLabel; // x21
  System_String_o *v11; // x0
  const MethodInfo *v12; // x3

  v6 = this;
  if ( (byte_40FF3AA & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, shopEntity);
    this = (ShopBuyItemConfirmMenu_o *)sub_B16FFC(&StringLiteral_9310/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/, v7);
    byte_40FF3AA = 1;
  }
  if ( !shopEntity )
    sub_B170D4();
  if ( shopEntity->fields.payType != 6 )
    goto LABEL_12;
  this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetItemCount(shopEntity, 0LL);
  if ( (int)this < 2 )
  {
    if ( isNotHavingShopItemReceived )
    {
      extensionInfoLabel = v6->fields.extensionInfoLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9310/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/, 0LL);
      ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)v11, extensionInfoLabel, v11, v12);
    }
LABEL_12:
    v8 = v6->fields.extensionInfoLabel;
    v9 = isNotHavingShopItemReceived;
    goto LABEL_13;
  }
  v8 = v6->fields.extensionInfoLabel;
  v9 = 0;
LABEL_13:
  ShopBuyItemConfirmMenu__SetLabelActive(this, v8, v9, method);
}


void __fastcall ShopBuyItemConfirmMenu__SetInfoButton(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool v9; // w1
  int32_t purchaseType; // w8
  UnityEngine_Component_o *infoButton; // x0

  if ( (byte_40FF39F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9280/*"NONE"*/, shopEntity);
    byte_40FF39F = 1;
  }
  if ( !shopEntity )
    goto LABEL_22;
  if ( ShopEntity__checkFlag(shopEntity, 0x8000, 0LL) || isInPreparation && !ShopEntity__IsSoldOut(shopEntity, 0LL) )
    goto LABEL_5;
  purchaseType = shopEntity->fields.purchaseType;
  if ( purchaseType > 4 )
  {
    if ( purchaseType != 21 && purchaseType != 19 )
      goto LABEL_16;
LABEL_18:
    infoButton = (UnityEngine_Component_o *)this->fields.infoButton;
    if ( infoButton )
    {
      gameObject = UnityEngine_Component__get_gameObject(infoButton, 0LL);
      if ( gameObject )
      {
        v9 = 1;
        goto LABEL_21;
      }
    }
LABEL_22:
    sub_B170D4();
  }
  if ( purchaseType == 1 || purchaseType == 4 )
    goto LABEL_18;
LABEL_16:
  if ( !System_String__IsNullOrEmpty(shopEntity->fields.infoMessage, 0LL)
    && System_String__op_Inequality(shopEntity->fields.infoMessage, (System_String_o *)StringLiteral_9280/*"NONE"*/, 0LL) )
  {
    goto LABEL_18;
  }
LABEL_5:
  v7 = (UnityEngine_Component_o *)this->fields.infoButton;
  if ( !v7 )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject(v7, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  v9 = 0;
LABEL_21:
  UnityEngine_GameObject__SetActive(gameObject, v9, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__SetInput(
        ShopBuyItemConfirmMenu_o *this,
        System_Action_int__o *onDecide,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.state = 2;
  this->fields.onDecide = onDecide;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onDecide,
    (System_Int32_array **)onDecide,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ShopBuyItemConfirmMenu__SetItemIcon(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *chocolateSprite; // x22
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  ItemIconComponent_o *itemIcon; // x0
  bool v14; // w0
  ItemIconComponent_o *v15; // x21
  int32_t purchaseType; // w22
  int32_t TargetId; // w0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  int32_t v20; // w0
  UnityEngine_Object_o *v21; // x20
  UnityEngine_Component_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x19
  bool IsChocolateSvtEquip; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  int32_t imageId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_40FF3A0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, shopEntity);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FF3A0 = 1;
  }
  imageId = 0;
  entity = 0LL;
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL) )
  {
    v11 = (UnityEngine_Component_o *)this->fields.chocolateSprite;
    if ( !v11 )
      goto LABEL_34;
    gameObject = UnityEngine_Component__get_gameObject(v11, 0LL);
    if ( !gameObject )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  if ( isInPreparation )
  {
    if ( !shopEntity )
      goto LABEL_34;
    if ( ShopEntity__checkFlag(shopEntity, 2, 0LL) )
    {
      itemIcon = this->fields.itemIcon;
      if ( itemIcon )
      {
        ItemIconComponent__SetItemImage(itemIcon, 8007, 0LL);
        return;
      }
LABEL_34:
      sub_B170D4();
    }
    imageId = 0;
  }
  else
  {
    imageId = 0;
    if ( !shopEntity )
      goto LABEL_34;
  }
  v14 = ShopEntity__CheckEquipItem(shopEntity, &imageId, 0LL);
  v15 = this->fields.itemIcon;
  if ( v14 )
  {
    if ( !v15 )
      goto LABEL_34;
    ItemIconComponent__SetEquipItemImage(this->fields.itemIcon, imageId, 0LL);
  }
  else
  {
    purchaseType = shopEntity->fields.purchaseType;
    TargetId = ShopEntity__get_TargetId(shopEntity, 0LL);
    if ( !v15 )
      goto LABEL_34;
    ItemIconComponent__SetPurchase(v15, purchaseType, TargetId, shopEntity->fields.imageId, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_34;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    v20 = ShopEntity__get_TargetId(shopEntity, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_34;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           MasterData_WarQuestSelectionMaster,
           &entity,
           v20,
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      v21 = (UnityEngine_Object_o *)this->fields.chocolateSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
      {
        v22 = (UnityEngine_Component_o *)this->fields.chocolateSprite;
        if ( !v22 )
          goto LABEL_34;
        v23 = UnityEngine_Component__get_gameObject(v22, 0LL);
        if ( !entity )
          goto LABEL_34;
        v24 = v23;
        IsChocolateSvtEquip = ServantEntity__get_IsChocolateSvtEquip((ServantEntity_o *)entity, 0LL);
        if ( !v24 )
          goto LABEL_34;
        UnityEngine_GameObject__SetActive(v24, IsChocolateSvtEquip, 0LL);
      }
    }
  }
}


void __fastcall ShopBuyItemConfirmMenu__SetLabelActive(
        ShopBuyItemConfirmMenu_o *this,
        UILabel_o *label,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FF39B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, label);
    byte_40FF39B = 1;
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


void __fastcall ShopBuyItemConfirmMenu__SetLabelText(
        ShopBuyItemConfirmMenu_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  if ( (byte_40FF39C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, label);
    byte_40FF39C = 1;
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


void __fastcall ShopBuyItemConfirmMenu__SetMessageLabel(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        System_String_o *preparationMessage,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x0
  const MethodInfo *v12; // x3
  struct UILabel_o *messageLabel; // x19
  UILabel_o *v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x1
  System_String_o *detail; // x20
  System_String_o *v18; // x0
  System_String_o *itemName; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-28h] BYREF

  message = preparationMessage;
  if ( (byte_40FF3A4 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, shopEntity);
    sub_B16FFC(&StringLiteral_15598/*"[000000]"*/, v9);
    sub_B16FFC(&StringLiteral_15599/*"[000000]？"*/, v10);
    byte_40FF3A4 = 1;
  }
  itemName = 0LL;
  if ( !shopEntity )
    sub_B170D4();
  if ( !isInPreparation )
  {
    if ( shopEntity->fields.purchaseType != 14
      || !ShopEntity__IsSoldOut(shopEntity, 0LL)
      || !ShopEntity__TryGetClosedMessage(shopEntity, &message, &itemName, 0LL) )
    {
      messageLabel = this->fields.messageLabel;
      detail = shopEntity->fields.detail;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v16 = LocalizationManager__ReplaceCommonTag(detail, 0, 0LL);
      v18 = (System_String_o *)StringLiteral_15598/*"[000000]"*/;
      goto LABEL_17;
    }
    messageLabel = this->fields.messageLabel;
    v16 = message;
LABEL_16:
    v18 = (System_String_o *)StringLiteral_15598/*"[000000]"*/;
LABEL_17:
    v11 = System_String__Concat_43743732(v18, v16, 0LL);
    v14 = messageLabel;
    v15 = v11;
    goto LABEL_18;
  }
  v11 = (System_String_o *)ShopEntity__checkFlag(shopEntity, 8, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( ((unsigned __int8)v11 & 1) == 0 )
  {
    v16 = preparationMessage;
    goto LABEL_16;
  }
  v14 = messageLabel;
  v15 = (System_String_o *)StringLiteral_15599/*"[000000]？"*/;
LABEL_18:
  ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)v11, v14, v15, v12);
}


void __fastcall ShopBuyItemConfirmMenu__SetNameText(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        System_String_o *replacedName,
        System_String_o *preparationItemName,
        const MethodInfo *method)
{
  __int64 v11; // x1
  UICrossNarrowLabel_o *v12; // x0
  System_String_o *v13; // x1
  struct UICrossNarrowLabel_o *nameTextLabel; // x19
  System_String_o *v15; // x0

  if ( (byte_40FF3A1 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, shopEntity);
    sub_B16FFC(&StringLiteral_23864/*"？"*/, v11);
    byte_40FF3A1 = 1;
  }
  if ( !System_String__IsNullOrEmpty(preparationItemName, 0LL) )
  {
    nameTextLabel = this->fields.nameTextLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = LocalizationManager__ReplaceCommonTag(preparationItemName, 0, 0LL);
    if ( nameTextLabel )
    {
      v13 = v15;
      v12 = nameTextLabel;
      goto LABEL_16;
    }
LABEL_17:
    sub_B170D4();
  }
  if ( !isInPreparation )
    goto LABEL_14;
  if ( !shopEntity )
    goto LABEL_17;
  if ( !ShopEntity__checkFlag(shopEntity, 4, 0LL) )
  {
LABEL_14:
    v12 = this->fields.nameTextLabel;
    if ( v12 )
    {
      v13 = replacedName;
      goto LABEL_16;
    }
    goto LABEL_17;
  }
  v12 = this->fields.nameTextLabel;
  if ( !v12 )
    goto LABEL_17;
  v13 = (System_String_o *)StringLiteral_23864/*"？"*/;
LABEL_16:
  UICrossNarrowLabel__SetCrossNarrowText(v12, v13, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__SetNumText(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        const MethodInfo *method)
{
  __int64 v7; // x1
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x3
  UILabel_o *numTitleLabel; // x21
  System_String_o *v11; // x0
  const MethodInfo *v12; // x3
  ShopBuyItemConfirmMenu_o *v13; // x0
  const MethodInfo *v14; // x3
  UILabel_o *numTextLabel; // x19
  int32_t HoldCount; // w0
  System_String_o *NumberFormat; // x0
  const MethodInfo *v18; // x3
  ShopBuyItemConfirmMenu_o *v19; // x0
  const MethodInfo *v20; // x3

  if ( (byte_40FF3A9 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, shopEntity);
    sub_B16FFC(&StringLiteral_12066/*"SHOP_BUY_ITEM_HOLD"*/, v7);
    byte_40FF3A9 = 1;
  }
  if ( !isInPreparation )
  {
    if ( shopEntity )
      goto LABEL_8;
LABEL_14:
    sub_B170D4();
  }
  if ( !shopEntity )
    goto LABEL_14;
  v8 = ShopEntity__checkFlag(shopEntity, 2, 0LL);
  if ( v8 )
    goto LABEL_13;
LABEL_8:
  v8 = ShopEntity__checkHoldDisp(shopEntity, 0LL);
  if ( !v8 )
  {
LABEL_13:
    ShopBuyItemConfirmMenu__SetLabelActive((ShopBuyItemConfirmMenu_o *)v8, this->fields.numTitleLabel, 0, v9);
    ShopBuyItemConfirmMenu__SetLabelActive(v19, this->fields.numTextLabel, 0, v20);
    return;
  }
  ShopBuyItemConfirmMenu__SetLabelActive((ShopBuyItemConfirmMenu_o *)v8, this->fields.numTitleLabel, 1, v9);
  numTitleLabel = this->fields.numTitleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12066/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)v11, numTitleLabel, v11, v12);
  ShopBuyItemConfirmMenu__SetLabelActive(v13, this->fields.numTextLabel, 1, v14);
  numTextLabel = this->fields.numTextLabel;
  HoldCount = ShopEntity__getHoldCount(shopEntity, 0LL);
  NumberFormat = LocalizationManager__GetNumberFormat(HoldCount, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)NumberFormat, numTextLabel, NumberFormat, v18);
}


void __fastcall ShopBuyItemConfirmMenu__SetPriceDataText(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        bool isNotHavingShopItemReceived,
        const MethodInfo *method)
{
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
  __int64 v23; // x1
  ItemIconComponent_o *eventItemIcon; // x0
  const MethodInfo *v25; // x1
  void *UserItemCounts; // x0
  UILabel_o *v27; // x1
  UIIconLabel_o *v28; // x2
  const MethodInfo *v29; // x5
  unsigned int *v30; // x21
  const MethodInfo *v31; // x1
  unsigned __int64 i; // x23
  WebViewManager_o *v33; // x0
  struct System_Int32_array *itemIds; // x8
  void *v35; // x24
  struct UILabel_array *priceDataLabels; // x8
  UILabel_o *v37; // x0
  struct UIIconLabel_array *priceIconLabels; // x8
  UIIconLabel_o *v39; // x0
  struct UILabel_array *v40; // x8
  UILabel_o *v41; // x0
  struct ItemIconComponent_array *eventItemIcons; // x8
  ItemIconComponent_o *v43; // x0
  struct UILabel_array *v44; // x8
  UILabel_o *v45; // x25
  System_String_o *v46; // x26
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  struct UIIconLabel_array *v49; // x8
  UIIconLabel_o *v50; // x25
  int32_t v51; // w26
  ItemIconComponent_o *v52; // x0
  struct UILabel_o *priceDataLabel; // x22
  __int64 *v54; // x8
  System_String_o *v55; // x0
  System_String_o *v56; // x0
  System_String_o *age; // x1
  UILabel_o *v58; // x0
  WebViewManager_o *v59; // x0
  struct System_Int32_array *v60; // x8
  WarEntity_o *v61; // x0
  UILabel_o *v62; // x23
  WarEntity_o *v63; // x22
  __int64 *v64; // x8
  WebViewManager_o *v65; // x0
  struct System_Int32_array *v66; // x8
  WarEntity_o *v67; // x0
  System_String_o *v68; // x0
  UIIconLabel_o *v69; // x23
  int32_t v70; // w24
  ItemIconComponent_o *v71; // x0
  WebViewManager_o *v72; // x0
  struct System_Int32_array *v73; // x8
  WarEntity_o *v74; // x0
  UIIconLabel_o *v75; // x19
  int32_t v76; // w22
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  __int64 v78; // x9
  UILabel_o *v79; // x23
  System_String_o *v80; // x0
  UIIconLabel_o *v81; // x23
  int32_t v82; // w24
  int32_t Price; // w21
  double v84; // d0
  int v85; // w21
  UILabel_o *priceFreeDataLabel; // x19
  System_String_o *v87; // x0
  _BOOL8 IsSetStrikethrough; // x0
  const MethodInfo *v89; // x3
  __int64 v90; // x8
  UnityEngine_Component_o *freeLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v94; // x8
  __int64 v95; // x9
  __int64 v96; // x10
  UnityEngine_Component_o *v97; // x0
  UnityEngine_GameObject_o *v98; // x0
  __int64 j; // x20
  struct UILabel_array *v100; // x11
  unsigned __int64 max_length; // x12
  unsigned __int64 v102; // x10
  struct UIIconLabel_array *v103; // x11
  unsigned __int64 v104; // x12
  struct ItemIconComponent_array *v105; // x11
  unsigned __int64 v106; // x12
  ItemIconComponent_o *v107; // x3
  __int64 v108; // x10
  int32_t v109; // w23
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x23
  UILabel_o *v113; // x0
  UIIconLabel_o *priceIconLabel; // x0
  UILabel_o *v115; // x0
  ItemIconComponent_o *v116; // x0
  UILabel_o *v117; // x22
  System_String_o *v118; // x24
  Il2CppObject *v119; // x0
  System_String_o *v120; // x0
  UILabel_o *v121; // x22
  UIIconLabel_o *v122; // x22
  int32_t PriceIcon; // w24
  ItemIconComponent_o *v124; // x0
  int32_t v125; // [xsp+8h] [xbp-58h] BYREF
  int32_t Prices; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v127; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FF3AB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_B16FFC(&int_TypeInfo, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&System_Math_TypeInfo, v12);
    sub_B16FFC(&ShopBuyItemConfirmMenu_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&StringLiteral_12322/*"STONE_FRAGMENTS_NEED_INFO"*/, v15);
    sub_B16FFC(&StringLiteral_1681/*"ANONYMOUS_NEED_INFO"*/, v16);
    sub_B16FFC(&StringLiteral_12328/*"STONE_NEED_INFO"*/, v17);
    sub_B16FFC(&StringLiteral_10845/*"QP_NAME"*/, v18);
    sub_B16FFC(&StringLiteral_10976/*"RARE_PRI_NEED_INFO"*/, v19);
    sub_B16FFC(&StringLiteral_1520/*"?"*/, v20);
    sub_B16FFC(&StringLiteral_5624/*"EVENT_ITEM_NEED_INFO"*/, v21);
    sub_B16FFC(&StringLiteral_8591/*"MANA_NEED_INFO"*/, v22);
    sub_B16FFC(&StringLiteral_12089/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, v23);
    byte_40FF3AB = 1;
  }
  eventItemIcon = this->fields.eventItemIcon;
  if ( !eventItemIcon )
    goto LABEL_191;
  ItemIconComponent__Clear(eventItemIcon, 0LL);
  UserItemCounts = ShopBuyItemConfirmMenu__GetUserItemCounts(this, v25);
  if ( !shopEntity )
    goto LABEL_191;
  v30 = (unsigned int *)UserItemCounts;
  switch ( shopEntity->fields.payType )
  {
    case 1:
      priceDataLabel = this->fields.priceDataLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v54 = &StringLiteral_12328/*"STONE_NEED_INFO"*/;
      goto LABEL_54;
    case 2:
      priceDataLabel = this->fields.priceDataLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v54 = &StringLiteral_10845/*"QP_NAME"*/;
LABEL_54:
      v55 = (System_String_o *)*v54;
      goto LABEL_59;
    case 4:
      priceDataLabel = this->fields.priceDataLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v55 = (System_String_o *)StringLiteral_8591/*"MANA_NEED_INFO"*/;
LABEL_59:
      v56 = LocalizationManager__Get(v55, 0LL);
      if ( !priceDataLabel )
        goto LABEL_191;
      age = v56;
      v58 = priceDataLabel;
      goto LABEL_91;
    case 6:
    case 0xB:
      if ( ShopEntity__GetItemCount(shopEntity, 0LL) < 2 )
      {
        if ( isNotHavingShopItemReceived )
          return;
        if ( ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v31) )
        {
          UserItemCounts = ShopEntity__GetAnotherPayItemIds(shopEntity, 0LL);
          if ( !UserItemCounts )
            goto LABEL_191;
        }
        else
        {
          UserItemCounts = shopEntity->fields.itemIds;
          if ( !UserItemCounts )
            goto LABEL_191;
        }
        if ( *((_DWORD *)UserItemCounts + 6) )
        {
          v109 = *((_DWORD *)UserItemCounts + 8);
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_191;
          MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)Instance,
                                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_191;
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     v109,
                     (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( isInPreparation )
          {
            if ( ShopEntity__checkFlag(shopEntity, 64, 0LL) )
            {
              v113 = this->fields.priceDataLabel;
              if ( v113 )
              {
                UILabel__set_text(v113, (System_String_o *)StringLiteral_1520/*"?"*/, 0LL);
                priceIconLabel = this->fields.priceIconLabel;
                if ( priceIconLabel )
                {
                  UIIconLabel__SetEventQuestion(priceIconLabel, 0LL);
                  return;
                }
              }
              goto LABEL_191;
            }
            if ( ShopEntity__checkFlag(shopEntity, 32, 0LL) )
            {
              v115 = this->fields.priceDataLabel;
              if ( v115 )
              {
                UILabel__set_text(v115, (System_String_o *)StringLiteral_1520/*"?"*/, 0LL);
                v116 = this->fields.eventItemIcon;
                if ( v116 )
                {
                  ItemIconComponent__SetItemImage(v116, 8007, 0LL);
                  return;
                }
              }
              goto LABEL_191;
            }
          }
          v117 = this->fields.priceDataLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v118 = LocalizationManager__Get((System_String_o *)StringLiteral_5624/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
          Prices = ShopEntity__GetPrices(shopEntity, 0, 0LL);
          v119 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Prices);
          if ( !Entity )
            goto LABEL_191;
          v120 = System_String__Format_43739268(v118, v119, (Il2CppObject *)Entity->fields.age, 0LL);
          if ( !v117 )
            goto LABEL_191;
          UILabel__set_text(v117, v120, 0LL);
          v121 = this->fields.priceDataLabel;
          if ( (BYTE3(ShopBuyItemConfirmMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
          }
          if ( !v121 )
            goto LABEL_191;
          UILabel__SetCondensedScale(
            v121,
            ShopBuyItemConfirmMenu_TypeInfo->static_fields->PRICE_DATA_LABEL_MAX_WIDTH,
            0LL);
          v122 = this->fields.priceIconLabel;
          PriceIcon = ShopEntity__GetPriceIcon(shopEntity, 0LL);
          UserItemCounts = (void *)ShopEntity__GetPrices(shopEntity, 0, 0LL);
          if ( !v30 )
            goto LABEL_191;
          if ( v30[6] )
          {
            if ( v122 )
            {
              UIIconLabel__SetPurchaseDecision(v122, PriceIcon, (int32_t)UserItemCounts, v30[8], 0LL);
              v124 = this->fields.eventItemIcon;
              if ( v124 )
              {
                ItemIconComponent__SetItem(v124, (int32_t)Entity->fields.longName, -1, 0LL);
                return;
              }
            }
LABEL_191:
            sub_B170D4();
          }
        }
LABEL_192:
        sub_B17100(UserItemCounts, v27, v28);
        sub_B170A0();
      }
      if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 1 )
      {
        for ( i = 0LL; (__int64)i < ShopEntity__GetItemCount(shopEntity, 0LL); ++i )
        {
          v33 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v33 )
            goto LABEL_191;
          UserItemCounts = DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)v33,
                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
          itemIds = shopEntity->fields.itemIds;
          if ( !itemIds )
            goto LABEL_191;
          if ( i >= itemIds->max_length )
            goto LABEL_192;
          if ( !UserItemCounts )
            goto LABEL_191;
          UserItemCounts = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)UserItemCounts,
                             itemIds->m_Items[i + 1],
                             (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          v35 = UserItemCounts;
          if ( !isInPreparation )
            goto LABEL_30;
          UserItemCounts = (void *)ShopEntity__checkFlag(shopEntity, 64, 0LL);
          if ( ((unsigned __int8)UserItemCounts & 1) != 0 )
          {
            priceDataLabels = this->fields.priceDataLabels;
            if ( !priceDataLabels )
              goto LABEL_191;
            if ( i >= priceDataLabels->max_length )
              goto LABEL_192;
            v37 = priceDataLabels->m_Items[i];
            if ( !v37 )
              goto LABEL_191;
            UILabel__set_text(v37, (System_String_o *)StringLiteral_1520/*"?"*/, 0LL);
            priceIconLabels = this->fields.priceIconLabels;
            if ( !priceIconLabels )
              goto LABEL_191;
            if ( i >= priceIconLabels->max_length )
              goto LABEL_192;
            v39 = priceIconLabels->m_Items[i];
            if ( !v39 )
              goto LABEL_191;
            UIIconLabel__SetEventQuestion(v39, 0LL);
            continue;
          }
          UserItemCounts = (void *)ShopEntity__checkFlag(shopEntity, 32, 0LL);
          if ( ((unsigned __int8)UserItemCounts & 1) != 0 )
          {
            v40 = this->fields.priceDataLabels;
            if ( !v40 )
              goto LABEL_191;
            if ( i >= v40->max_length )
              goto LABEL_192;
            v41 = v40->m_Items[i];
            if ( !v41 )
              goto LABEL_191;
            UILabel__set_text(v41, (System_String_o *)StringLiteral_1520/*"?"*/, 0LL);
            eventItemIcons = this->fields.eventItemIcons;
            if ( !eventItemIcons )
              goto LABEL_191;
            if ( i >= eventItemIcons->max_length )
              goto LABEL_192;
            v43 = eventItemIcons->m_Items[i];
            if ( !v43 )
              goto LABEL_191;
            ItemIconComponent__SetItemImage(v43, 8007, 0LL);
          }
          else
          {
LABEL_30:
            v44 = this->fields.priceDataLabels;
            if ( !v44 )
              goto LABEL_191;
            if ( i >= v44->max_length )
              goto LABEL_192;
            v45 = v44->m_Items[i];
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v46 = LocalizationManager__Get((System_String_o *)StringLiteral_5624/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
            v125 = ShopEntity__GetPrices(shopEntity, i, 0LL);
            v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v125);
            if ( !v35 )
              goto LABEL_191;
            v48 = System_String__Format_43739268(v46, v47, *((Il2CppObject **)v35 + 3), 0LL);
            if ( !v45 )
              goto LABEL_191;
            UILabel__set_text(v45, v48, 0LL);
            v49 = this->fields.priceIconLabels;
            if ( !v49 )
              goto LABEL_191;
            if ( i >= v49->max_length )
              goto LABEL_192;
            v50 = v49->m_Items[i];
            v51 = ShopEntity__GetPriceIcon(shopEntity, 0LL);
            UserItemCounts = (void *)ShopEntity__GetPrices(shopEntity, i, 0LL);
            if ( !v30 )
              goto LABEL_191;
            if ( i >= v30[6] )
              goto LABEL_192;
            if ( !v50 )
              goto LABEL_191;
            UIIconLabel__SetPurchaseDecision(v50, v51, (int32_t)UserItemCounts, v30[i + 8], 0LL);
            v52 = this->fields.eventItemIcon;
            if ( !v52 )
              goto LABEL_191;
            ItemIconComponent__SetItem(v52, *((_DWORD *)v35 + 10), -1, 0LL);
          }
        }
      }
      return;
    case 8:
      v59 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v59 )
        goto LABEL_191;
      UserItemCounts = DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)v59,
                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      v60 = shopEntity->fields.itemIds;
      if ( !v60 )
        goto LABEL_191;
      if ( !v60->max_length )
        goto LABEL_192;
      if ( !UserItemCounts )
        goto LABEL_191;
      v61 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)UserItemCounts,
              v60->m_Items[1],
              (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v62 = this->fields.priceDataLabel;
      v63 = v61;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v64 = &StringLiteral_12322/*"STONE_FRAGMENTS_NEED_INFO"*/;
      goto LABEL_77;
    case 9:
      v65 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v65 )
        goto LABEL_191;
      UserItemCounts = DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)v65,
                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      v66 = shopEntity->fields.itemIds;
      if ( !v66 )
        goto LABEL_191;
      if ( !v66->max_length )
        goto LABEL_192;
      if ( !UserItemCounts )
        goto LABEL_191;
      v67 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)UserItemCounts,
              v66->m_Items[1],
              (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v62 = this->fields.priceDataLabel;
      v63 = v67;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v64 = &StringLiteral_1681/*"ANONYMOUS_NEED_INFO"*/;
LABEL_77:
      v68 = LocalizationManager__Get((System_String_o *)*v64, 0LL);
      if ( !v62 )
        goto LABEL_191;
      UILabel__set_text(v62, v68, 0LL);
      v69 = this->fields.priceIconLabel;
      v70 = ShopEntity__GetPriceIcon(shopEntity, 0LL);
      UserItemCounts = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !v30 )
        goto LABEL_191;
      if ( !v30[6] )
        goto LABEL_192;
      if ( !v69 )
        goto LABEL_191;
      UIIconLabel__SetPurchaseDecision(v69, v70, (int32_t)UserItemCounts, v30[8], 0LL);
      if ( !v63 )
        goto LABEL_191;
      v71 = this->fields.eventItemIcon;
      if ( !v71 )
        goto LABEL_191;
      ItemIconComponent__SetItem(v71, (int32_t)v63->fields.longName, -1, 0LL);
      return;
    case 0xA:
      v79 = this->fields.priceDataLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v80 = LocalizationManager__Get((System_String_o *)StringLiteral_10976/*"RARE_PRI_NEED_INFO"*/, 0LL);
      if ( !v79 )
        goto LABEL_191;
      UILabel__set_text(v79, v80, 0LL);
      v81 = this->fields.priceIconLabel;
      v82 = ShopEntity__GetPriceIcon(shopEntity, 0LL);
      UserItemCounts = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !v30 )
        goto LABEL_191;
      if ( !v30[6] )
        goto LABEL_192;
      if ( !v81 )
        goto LABEL_191;
      UIIconLabel__SetPurchaseDecision(v81, v82, (int32_t)UserItemCounts, v30[8], 0LL);
      if ( ShopEntity__GetPrice(shopEntity, 0LL) )
      {
        Price = ShopEntity__GetPrice(shopEntity, 0LL);
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        v84 = log10((double)Price);
        if ( v84 == INFINITY )
          v84 = -v84;
        v85 = (int)v84 + 1;
      }
      else
      {
        v85 = 1;
      }
      IsSetStrikethrough = ShopEntity__IsSetStrikethrough(shopEntity, isInPreparation, 0LL);
      if ( IsSetStrikethrough )
      {
        v90 = 344LL;
        if ( v85 == 1 )
          v90 = 336LL;
        ShopBuyItemConfirmMenu__SetLabelActive(
          (ShopBuyItemConfirmMenu_o *)IsSetStrikethrough,
          *(UILabel_o **)((char *)&this->klass + v90),
          1,
          v89);
      }
      if ( !ShopEntity__IsAfterTheFreeShopReleaseDate(shopEntity, 0LL)
        || !ShopEntity__IsFulFilledFreeExchangeCondition(shopEntity, 0LL) )
      {
        return;
      }
      freeLabel = (UnityEngine_Component_o *)this->fields.freeLabel;
      if ( !freeLabel )
        goto LABEL_191;
      gameObject = UnityEngine_Component__get_gameObject(freeLabel, 0LL);
      if ( !gameObject )
        goto LABEL_191;
      transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( !transform )
        goto LABEL_191;
      v94 = 376LL;
      if ( v85 == 1 )
        v94 = 364LL;
      v95 = v85 == 1 ? 360LL : 372LL;
      v96 = v85 == 1 ? 356LL : 368LL;
      v127.fields.y = *(float *)((char *)&this->klass + v95);
      v127.fields.x = *(float *)((char *)&this->klass + v96);
      v127.fields.z = *(float *)((char *)&this->klass + v94);
      UnityEngine_Transform__set_localPosition(transform, v127, 0LL);
      v97 = (UnityEngine_Component_o *)this->fields.freeLabel;
      if ( !v97 )
        goto LABEL_191;
      v98 = UnityEngine_Component__get_gameObject(v97, 0LL);
      if ( !v98 )
        goto LABEL_191;
      UnityEngine_GameObject__SetActive(v98, 1, 0LL);
      return;
    case 0xC:
      v72 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v72 )
        goto LABEL_191;
      UserItemCounts = DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)v72,
                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      v73 = shopEntity->fields.itemIds;
      if ( !v73 )
        goto LABEL_191;
      if ( !v73->max_length )
        goto LABEL_192;
      if ( !UserItemCounts )
        goto LABEL_191;
      v74 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)UserItemCounts,
              v73->m_Items[1],
              (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !v74 || !this->fields.priceDataLabel )
        goto LABEL_191;
      age = v74->fields.age;
      v58 = this->fields.priceDataLabel;
LABEL_91:
      UILabel__set_text(v58, age, 0LL);
      v75 = this->fields.priceIconLabel;
      v76 = ShopEntity__GetPriceIcon(shopEntity, 0LL);
      UserItemCounts = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !v30 )
        goto LABEL_191;
      if ( !v30[6] )
        goto LABEL_192;
      if ( !v75 )
        goto LABEL_191;
      UIIconLabel__SetPurchaseDecision(v75, v76, (int32_t)UserItemCounts, v30[8], 0LL);
      return;
    case 0xD:
      priceFreeDataLabel = this->fields.priceFreeDataLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v87 = LocalizationManager__Get((System_String_o *)StringLiteral_12089/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, 0LL);
      if ( !priceFreeDataLabel )
        goto LABEL_191;
      UILabel__set_text(priceFreeDataLabel, v87, 0LL);
      return;
    case 0xE:
      commonConsumeEntities = this->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        return;
      v78 = *(_QWORD *)&commonConsumeEntities->max_length;
      if ( (_DWORD)v78 == 1 )
      {
        ShopBuyItemConfirmMenu__SetCommonConsumePriceText(
          this,
          this->fields.priceDataLabel,
          this->fields.priceIconLabel,
          this->fields.eventItemIcon,
          commonConsumeEntities->m_Items[0],
          v29);
        return;
      }
      if ( (int)v78 < 2 )
        return;
      for ( j = 4LL; ; ++j )
      {
        v100 = this->fields.priceDataLabels;
        if ( !v100 )
          break;
        max_length = v100->max_length;
        v102 = j - 4;
        if ( j - 4 >= (int)max_length )
        {
          v27 = 0LL;
        }
        else
        {
          if ( v102 >= max_length )
            goto LABEL_192;
          v27 = (UILabel_o *)*((_QWORD *)&v100->obj.klass + j);
        }
        v103 = this->fields.priceIconLabels;
        if ( !v103 )
          break;
        v104 = v103->max_length;
        if ( (__int64)v102 >= (int)v104 )
        {
          v28 = 0LL;
        }
        else
        {
          if ( v102 >= v104 )
            goto LABEL_192;
          v28 = (UIIconLabel_o *)*((_QWORD *)&v103->obj.klass + j);
        }
        v105 = this->fields.eventItemIcons;
        if ( !v105 )
          break;
        v106 = v105->max_length;
        if ( (__int64)v102 >= (int)v106 )
        {
          v107 = 0LL;
        }
        else
        {
          if ( v102 >= v106 )
            goto LABEL_192;
          v107 = (ItemIconComponent_o *)*((_QWORD *)&v105->obj.klass + j);
        }
        if ( v102 >= (unsigned int)v78 )
          goto LABEL_192;
        ShopBuyItemConfirmMenu__SetCommonConsumePriceText(
          this,
          v27,
          v28,
          v107,
          *((CommonConsumeEntity_o **)&commonConsumeEntities->obj.klass + j),
          v29);
        commonConsumeEntities = this->fields.commonConsumeEntities;
        if ( !commonConsumeEntities )
          goto LABEL_191;
        LODWORD(v78) = commonConsumeEntities->max_length;
        v108 = j - 3;
        if ( v108 >= (int)v78 )
          return;
      }
      goto LABEL_191;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__SetPriceInfo(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        int32_t buttonSpriteId,
        bool isNotHavingShopItemReceived,
        const MethodInfo *method)
{
  bool v6; // w23
  const MethodInfo *v11; // x4
  int32_t v12; // w2
  const MethodInfo *v13; // x4

  v6 = isNotHavingShopItemReceived;
  ShopBuyItemConfirmMenu__SetPriceInfoActive(
    this,
    shopEntity,
    isNotHavingShopItemReceived,
    *(const MethodInfo **)&buttonSpriteId);
  ShopBuyItemConfirmMenu__SetPriceDataText(this, shopEntity, isInPreparation, v6, v11);
  if ( !shopEntity )
    sub_B170D4();
  ShopBuyItemConfirmMenu__SetDecideButtonSprite(this, shopEntity, v12, buttonSpriteId, v13);
}


void __fastcall ShopBuyItemConfirmMenu__SetPriceInfoActive(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isNotHavingShopItemReceived,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *priceInfoFree; // x0
  UnityEngine_GameObject_o *priceInfo1; // x0
  char v7; // w1
  UnityEngine_GameObject_o *priceInfo2; // x0
  char v9; // w1
  int32_t ItemCount; // w0
  int v12; // w21
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  UnityEngine_GameObject_o *v16; // x0
  struct CommonConsumeEntity_array *v17; // x8

  if ( !shopEntity )
    goto LABEL_26;
  switch ( shopEntity->fields.payType )
  {
    case 1:
    case 4:
    case 8:
    case 9:
    case 0xA:
      priceInfoFree = this->fields.priceInfoFree;
      if ( !priceInfoFree )
        goto LABEL_26;
      UnityEngine_GameObject__SetActive(priceInfoFree, 0, 0LL);
      priceInfo1 = this->fields.priceInfo1;
      if ( !priceInfo1 )
        goto LABEL_26;
      v7 = 1;
      goto LABEL_6;
    case 6:
    case 0xB:
      ItemCount = ShopEntity__GetItemCount(shopEntity, 0LL);
      if ( !this->fields.priceInfoFree )
        goto LABEL_26;
      v12 = ItemCount;
      UnityEngine_GameObject__SetActive(this->fields.priceInfoFree, 0, 0LL);
      priceInfo1 = this->fields.priceInfo1;
      if ( !priceInfo1 )
        goto LABEL_26;
      if ( v12 > 1 )
      {
        UnityEngine_GameObject__SetActive(priceInfo1, 0, 0LL);
        priceInfo2 = this->fields.priceInfo2;
        if ( priceInfo2 )
        {
          v9 = 1;
          goto LABEL_8;
        }
LABEL_26:
        sub_B170D4();
      }
      v7 = !isNotHavingShopItemReceived;
LABEL_6:
      UnityEngine_GameObject__SetActive(priceInfo1, v7, 0LL);
      priceInfo2 = this->fields.priceInfo2;
      if ( !priceInfo2 )
        goto LABEL_26;
      v9 = 0;
LABEL_8:
      UnityEngine_GameObject__SetActive(priceInfo2, v9, 0LL);
      return;
    case 0xD:
      v13 = this->fields.priceInfoFree;
      if ( !v13 )
        goto LABEL_26;
      UnityEngine_GameObject__SetActive(v13, 1, 0LL);
      priceInfo1 = this->fields.priceInfo1;
      if ( !priceInfo1 )
        goto LABEL_26;
      v7 = 0;
      goto LABEL_6;
    case 0xE:
      if ( !this->fields.commonConsumeEntities )
        return;
      v14 = this->fields.priceInfoFree;
      if ( !v14 )
        goto LABEL_26;
      UnityEngine_GameObject__SetActive(v14, 0, 0LL);
      commonConsumeEntities = this->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        goto LABEL_26;
      v16 = this->fields.priceInfo1;
      if ( !v16 )
        goto LABEL_26;
      UnityEngine_GameObject__SetActive(v16, commonConsumeEntities->max_length == 1, 0LL);
      v17 = this->fields.commonConsumeEntities;
      if ( !v17 )
        goto LABEL_26;
      priceInfo2 = this->fields.priceInfo2;
      if ( !priceInfo2 )
        goto LABEL_26;
      v9 = (signed int)v17->max_length > 1;
      goto LABEL_8;
    default:
      return;
  }
}


void __fastcall ShopBuyItemConfirmMenu__SetSpriteActive(
        ShopBuyItemConfirmMenu_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FF39D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, sprite);
    byte_40FF39D = 1;
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


void __fastcall ShopBuyItemConfirmMenu__SetSpriteName(
        ShopBuyItemConfirmMenu_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  if ( (byte_40FF39E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, sprite);
    byte_40FF39E = 1;
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


void __fastcall ShopBuyItemConfirmMenu__SetTextOnMask(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  WebViewManager_o *Instance; // x0
  ShopReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ShopReleaseMaster_o *v18; // x25
  _BOOL4 isExistCondType; // w22
  _BOOL4 v20; // w23
  _BOOL4 v21; // w24
  _BOOL4 v22; // w27
  System_String_o *Entity; // x0
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x3
  char v26; // w26
  struct UILabel_o *v27; // x19
  __int64 *v28; // x8
  WebViewManager_o *v29; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  struct System_Int32_array *targetIds; // x8
  __int64 *v34; // x8
  UILabel_o *textOnMask; // x1
  System_String_o *v36; // x2
  UILabel_o *v37; // x19
  System_String_o *v38; // x0
  unsigned int shopType; // w8
  ServantEntity_o *v40; // [xsp+0h] [xbp-60h] BYREF
  int32_t questId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40FF3A8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, shopEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&StringLiteral_12086/*"SHOP_CANT_BUY"*/, v11);
    sub_B16FFC(&StringLiteral_12121/*"SHOP_QUEST_OPEN"*/, v12);
    sub_B16FFC(&StringLiteral_12119/*"SHOP_QUEST_ALREADY_CLEARED"*/, v13);
    sub_B16FFC(&StringLiteral_1/*""*/, v14);
    sub_B16FFC(&StringLiteral_12038/*"SHOP_ALREADY_GET"*/, v15);
    byte_40FF3A8 = 1;
  }
  questId = 0;
  v40 = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  MasterData_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
  if ( !shopEntity )
    goto LABEL_65;
  v18 = MasterData_WarQuestSelectionMaster;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_65;
  isExistCondType = ShopReleaseMaster__isExistCondType(
                      MasterData_WarQuestSelectionMaster,
                      shopEntity->fields.id,
                      38,
                      0LL);
  v20 = ShopReleaseMaster__isExistCondType(v18, shopEntity->fields.id, 41, 0LL);
  v21 = ShopReleaseMaster__isExistCondType(v18, shopEntity->fields.id, 40, 0LL);
  v22 = ShopReleaseMaster__isExistCondType(v18, shopEntity->fields.id, 78, 0LL)
     || ShopReleaseMaster__isExistCondType(v18, shopEntity->fields.id, 79, 0LL);
  Entity = (System_String_o *)ShopReleaseMaster__isExistCondType(v18, shopEntity->fields.id, 108, 0LL);
  v26 = (char)Entity;
  switch ( shopEntity->fields.purchaseType )
  {
    case 4:
      v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v29 )
        goto LABEL_65;
      v30 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v29,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      targetIds = shopEntity->fields.targetIds;
      if ( !targetIds )
        goto LABEL_65;
      if ( !targetIds->max_length )
      {
        sub_B17100(v30, v31, v32);
        sub_B170A0();
      }
      if ( !v30 )
        goto LABEL_65;
      Entity = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v30,
                                    (WarEntity_o **)&v40,
                                    targetIds->m_Items[1],
                                    (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Entity & 1) == 0 )
        goto LABEL_57;
      if ( isInPreparation )
      {
        if ( v40 )
        {
          Entity = (System_String_o *)ServantEntity__get_IsServant(v40, 0LL);
          if ( ((unsigned __int8)Entity & 1) != 0 && this->fields.shopKind != 6 )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v34 = &StringLiteral_12086/*"SHOP_CANT_BUY"*/;
            goto LABEL_64;
          }
          if ( (isExistCondType || v20 || v21 || v22) | v26 & 1 )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v34 = &StringLiteral_12038/*"SHOP_ALREADY_GET"*/;
LABEL_64:
            Entity = LocalizationManager__Get((System_String_o *)*v34, 0LL);
            textOnMask = this->fields.textOnMask;
            goto LABEL_44;
          }
LABEL_57:
          textOnMask = this->fields.textOnMask;
          v36 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_58;
        }
LABEL_65:
        sub_B170D4();
      }
      shopType = shopEntity->fields.shopType;
      if ( shopType > 0x10 || ((1 << shopType) & 0x1000C) == 0 )
        goto LABEL_57;
      if ( !v40 )
        goto LABEL_65;
      Entity = (System_String_o *)ServantEntity__get_IsServantEquip(v40, 0LL);
      if ( ((unsigned __int8)Entity & 1) == 0 )
        goto LABEL_57;
      Entity = (System_String_o *)ShopBuyItemConfirmMenu__GetIsShowMask(
                                    (ShopBuyItemConfirmMenu_o *)Entity,
                                    this->fields.shopEntity,
                                    0,
                                    v25);
      if ( ((unsigned __int8)Entity & 1) == 0 )
        goto LABEL_57;
      Entity = (System_String_o *)ShopEntity__IsAnotherItemBuyable(shopEntity, 0LL);
      if ( ((unsigned __int8)Entity & 1) != 0 )
        goto LABEL_57;
LABEL_11:
      v27 = this->fields.textOnMask;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v28 = &StringLiteral_12038/*"SHOP_ALREADY_GET"*/;
      break;
    case 5:
      Entity = (System_String_o *)ShopBuyItemConfirmMenu__GetIsSetItemEventShop(
                                    (ShopBuyItemConfirmMenu_o *)Entity,
                                    shopEntity->fields.targetIds,
                                    v24);
      if ( ((unsigned __int8)Entity & 1) == 0 )
        goto LABEL_30;
      goto LABEL_10;
    case 6:
      if ( isInPreparation )
      {
        Entity = (System_String_o *)ShopEntity__isQuestNotClearItemClosed(shopEntity, 0, 0LL);
        if ( ((unsigned __int8)Entity & 1) == 0 )
          goto LABEL_57;
      }
      else
      {
        if ( !ShopEntity__isQuestNotClear(shopEntity, &questId, 0, 0LL) )
        {
          Entity = (System_String_o *)ShopEntity__isExpireItemClosed(shopEntity, 0LL);
          if ( ((unsigned __int8)Entity & 1) == 0 )
            goto LABEL_57;
          v37 = this->fields.textOnMask;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12121/*"SHOP_QUEST_OPEN"*/, 0LL);
          if ( v37 )
          {
            UILabel__set_text(v37, v38, 0LL);
            return;
          }
          goto LABEL_65;
        }
        Entity = (System_String_o *)ShopEntity__isQuestNotClearItemClosedSub(shopEntity, questId, 0, 0LL);
        if ( ((unsigned __int8)Entity & 1) == 0 )
          goto LABEL_57;
      }
      v27 = this->fields.textOnMask;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v28 = &StringLiteral_12119/*"SHOP_QUEST_ALREADY_CLEARED"*/;
      break;
    case 7:
    case 9:
LABEL_10:
      if ( isInPreparation )
        goto LABEL_11;
      goto LABEL_57;
    default:
LABEL_30:
      if ( !isInPreparation )
        goto LABEL_57;
      if ( !((isExistCondType || v20 || v22) | v26 & 1) )
        goto LABEL_57;
      Entity = (System_String_o *)ShopReleaseMaster__CondClearCheck(v18, shopEntity->fields.id, 1, 0LL);
      if ( ((unsigned __int8)Entity & 1) == 0 )
        goto LABEL_57;
      goto LABEL_11;
  }
  Entity = LocalizationManager__Get((System_String_o *)*v28, 0LL);
  textOnMask = v27;
LABEL_44:
  v36 = Entity;
LABEL_58:
  ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)Entity, textOnMask, v36, v25);
}


void __fastcall ShopBuyItemConfirmMenu__SetWarningLabel(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
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
  __int64 v36; // x1
  UILabel_o *warningLabel; // x23
  UILabel_o **p_warningLabel; // x24
  ShopBuyItemConfirmMenu_o *v39; // x0
  const MethodInfo *v40; // x3
  UILabel_o *v41; // x19
  __int64 *v42; // x8
  const MethodInfo *v43; // x1
  System_Int32_array *UserItemCounts; // x22
  __int64 v45; // x21
  void *Price; // x0
  const MethodInfo *v47; // x1
  __int64 v48; // x2
  System_String_o *v49; // x0
  const MethodInfo *v50; // x3
  bool isAnotehrPayDisp; // w0
  struct ShopEntity_o *v52; // x8
  __int64 *v53; // x8
  UILabel_o *v54; // x21
  System_String_o *v55; // x22
  Il2CppObject *v56; // x0
  System_String_o *v57; // x0
  const MethodInfo *v58; // x3
  __int64 *v59; // x8
  System_String_o *v60; // x20
  WebViewManager_o *v61; // x0
  struct ShopEntity_o *v62; // x8
  struct System_Int32_array *itemIds; // x8
  WarEntity_o *v64; // x0
  Il2CppObject *age; // x1
  System_String_o *v66; // x0
  BalanceConfig_c *v67; // x8
  int v68; // w22
  UILabel_o *v69; // x22
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  __int64 v71; // x9
  CommonConsumeEntity_o *v72; // x21
  int32_t num; // w22
  int32_t v74; // w19
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct System_String_o *Empty; // x22
  int v78; // w26
  Il2CppClass **v79; // x8
  CommonConsumeEntity_o *v80; // x23
  int v81; // w28
  Il2CppObject *Name; // x0
  System_String_o *v83; // x0
  int m_stringLength; // w8
  System_String_o *v85; // x0
  Il2CppObject *v86; // x20
  WebViewManager_o *v87; // x0
  UserPresentBoxMaster_o *v88; // x0
  UserPresentBoxEntity_array *VaildList; // x0
  int32_t purchaseType; // w8
  int32_t max_length; // w19
  int32_t v92; // w20
  BalanceConfig_c *v93; // x0
  int32_t PresentBoxMax; // w8
  UILabel_o *v95; // x19
  __int64 *v96; // x8
  WebViewManager_o *v97; // x0
  UserItemMaster_o *v98; // x19
  int64_t UserId; // x0
  int32_t Sum; // w0
  BalanceConfig_c *v101; // x8
  int32_t v102; // w19
  int32_t UserItemMax; // w9
  int v104; // w20
  System_String_o *v105; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  int32_t recordNum; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t buyQuestNum[2]; // [xsp+18h] [xbp-68h] BYREF
  int32_t buyServantEquipNum[2]; // [xsp+20h] [xbp-60h] BYREF
  __int64 buyItemNum; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_40FF3A5 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, shopEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&NetworkManager_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&string_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_12071/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/, v18);
    sub_B16FFC(&StringLiteral_12063/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/, v19);
    sub_B16FFC(&StringLiteral_12072/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/, v20);
    sub_B16FFC(&StringLiteral_12074/*"SHOP_BUY_RARE_PRI_CONFIRM_WARNING"*/, v21);
    sub_B16FFC(&StringLiteral_12068/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/, v22);
    sub_B16FFC(&StringLiteral_10845/*"QP_NAME"*/, v23);
    sub_B16FFC(&StringLiteral_12059/*"SHOP_BUY_CONFIRM_SOLD_OUT_WARNING"*/, v24);
    sub_B16FFC(&StringLiteral_12052/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/, v25);
    sub_B16FFC(&StringLiteral_12055/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/, v26);
    sub_B16FFC(&StringLiteral_12054/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, v27);
    sub_B16FFC(&StringLiteral_12056/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, v28);
    sub_B16FFC(&StringLiteral_12057/*"SHOP_BUY_CONFIRM_QUEST_CLAER"*/, v29);
    sub_B16FFC(&StringLiteral_23571/*"{0}、"*/, v30);
    sub_B16FFC(&StringLiteral_12062/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, v31);
    sub_B16FFC(&StringLiteral_12080/*"SHOP_BUY_STONE_FRAGMENTS_CONFIRM_WARNING"*/, v32);
    sub_B16FFC(&StringLiteral_12065/*"SHOP_BUY_ITEM_FULL_WARNING"*/, v33);
    sub_B16FFC(&StringLiteral_12067/*"SHOP_BUY_ITEM_OVER_WARNING"*/, v34);
    sub_B16FFC(&StringLiteral_1/*""*/, v35);
    sub_B16FFC(&StringLiteral_12058/*"SHOP_BUY_CONFIRM_QUEST_HOLD"*/, v36);
    byte_40FF3A5 = 1;
  }
  *(_QWORD *)buyServantEquipNum = 0LL;
  buyItemNum = 0LL;
  *(_QWORD *)buyQuestNum = 0LL;
  recordNum = 0;
  entity = 0LL;
  p_warningLabel = &this->fields.warningLabel;
  warningLabel = this->fields.warningLabel;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !warningLabel )
    goto LABEL_202;
  UILabel__set_fontSize(warningLabel, BalanceConfig_TypeInfo->static_fields->DefaultFontSize, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText(v39, *p_warningLabel, (System_String_o *)StringLiteral_1/*""*/, v40);
  if ( !shopEntity )
    goto LABEL_202;
  if ( shopEntity->fields.purchaseType != 6 || shopEntity->fields.shopType != 3 )
    goto LABEL_24;
  if ( !isInPreparation )
  {
    if ( !ShopEntity__isQuestNotClear(shopEntity, (int32_t *)&buyItemNum + 1, 0, 0LL)
      || !ShopEntity__isQuestNotClearItemClosedSub(shopEntity, SHIDWORD(buyItemNum), 0, 0LL) )
    {
      if ( ShopEntity__IsQuestHold(shopEntity, 0LL) )
      {
        v41 = *p_warningLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v42 = &StringLiteral_12058/*"SHOP_BUY_CONFIRM_QUEST_HOLD"*/;
        goto LABEL_50;
      }
      goto LABEL_24;
    }
LABEL_15:
    v41 = *p_warningLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v42 = &StringLiteral_12057/*"SHOP_BUY_CONFIRM_QUEST_CLAER"*/;
    goto LABEL_50;
  }
  if ( ShopEntity__isQuestNotClearItemClosed(shopEntity, 0, 0LL) )
    goto LABEL_15;
LABEL_24:
  if ( ShopEntity__IsSoldOut(shopEntity, 0LL)
    && !ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0LL)
    && !ShopEntity__IsAnotherItemBuyable(shopEntity, 0LL) )
  {
    v41 = *p_warningLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v42 = &StringLiteral_12059/*"SHOP_BUY_CONFIRM_SOLD_OUT_WARNING"*/;
    goto LABEL_50;
  }
  if ( isInPreparation )
  {
    v41 = *p_warningLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v42 = &StringLiteral_12055/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/;
LABEL_50:
    v49 = LocalizationManager__Get((System_String_o *)*v42, 0LL);
LABEL_51:
    ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)v49, v41, v49, v50);
    return;
  }
  if ( !ShopEntity__IsEnable(shopEntity, 0LL, 0LL) )
  {
    v41 = *p_warningLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v42 = &StringLiteral_12056/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/;
    goto LABEL_50;
  }
  UserItemCounts = ShopBuyItemConfirmMenu__GetUserItemCounts(this, v43);
  switch ( shopEntity->fields.payType )
  {
    case 2:
      Price = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_202;
      if ( !UserItemCounts->max_length )
        goto LABEL_203;
      if ( (int)Price <= UserItemCounts->m_Items[1] )
        goto LABEL_154;
      v54 = *p_warningLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v55 = LocalizationManager__Get((System_String_o *)StringLiteral_12062/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, 0LL);
      v56 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10845/*"QP_NAME"*/, 0LL);
      v57 = System_String__Format(v55, v56, 0LL);
      goto LABEL_106;
    case 4:
      Price = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_202;
      if ( !UserItemCounts->max_length )
        goto LABEL_203;
      if ( (int)Price <= UserItemCounts->m_Items[1] )
        goto LABEL_154;
      v54 = *p_warningLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v59 = &StringLiteral_12068/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/;
      goto LABEL_105;
    case 6:
    case 0xB:
    case 0xC:
      if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 2 )
      {
        if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 1 )
        {
          v45 = 0LL;
          while ( 1 )
          {
            Price = (void *)ShopEntity__GetPrices(shopEntity, v45, 0LL);
            if ( !UserItemCounts )
              goto LABEL_202;
            if ( (unsigned int)v45 >= UserItemCounts->max_length )
              goto LABEL_203;
            if ( (int)Price > UserItemCounts->m_Items[v45 + 1] )
              break;
            if ( (int)++v45 >= ShopEntity__GetItemCount(shopEntity, 0LL) )
              goto LABEL_154;
          }
          v41 = *p_warningLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v42 = &StringLiteral_12063/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/;
          goto LABEL_50;
        }
        goto LABEL_154;
      }
      Price = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_202;
      if ( !UserItemCounts->max_length )
        goto LABEL_203;
      if ( (int)Price <= UserItemCounts->m_Items[1] )
        goto LABEL_154;
      isAnotehrPayDisp = ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v47);
      v52 = this->fields.shopEntity;
      if ( !v52 )
        goto LABEL_202;
      if ( isAnotehrPayDisp )
      {
        Price = ShopEntity__GetAnotherPayItemIds(this->fields.shopEntity, 0LL);
        if ( !Price )
          goto LABEL_202;
      }
      else
      {
        Price = v52->fields.itemIds;
        if ( !Price )
          goto LABEL_202;
      }
      if ( !*((_DWORD *)Price + 6) )
      {
LABEL_203:
        sub_B17100(Price, v47, v48);
        sub_B170A0();
      }
      v74 = *((_DWORD *)Price + 8);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_202;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_202;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              MasterData_WarQuestSelectionMaster,
              &entity,
              v74,
              (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        return;
      v41 = *p_warningLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v66 = LocalizationManager__Get((System_String_o *)StringLiteral_12062/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, 0LL);
      if ( !entity )
        goto LABEL_202;
      age = (Il2CppObject *)entity->fields.age;
      goto LABEL_153;
    case 8:
      Price = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_202;
      if ( !UserItemCounts->max_length )
        goto LABEL_203;
      if ( (int)Price <= UserItemCounts->m_Items[1] )
        goto LABEL_154;
      v41 = *p_warningLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v53 = &StringLiteral_12080/*"SHOP_BUY_STONE_FRAGMENTS_CONFIRM_WARNING"*/;
      goto LABEL_88;
    case 9:
      Price = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_202;
      if ( !UserItemCounts->max_length )
        goto LABEL_203;
      if ( (int)Price <= UserItemCounts->m_Items[1] )
        goto LABEL_154;
      v41 = *p_warningLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v53 = &StringLiteral_12052/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/;
LABEL_88:
      v60 = LocalizationManager__Get((System_String_o *)*v53, 0LL);
      v61 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v61 )
        goto LABEL_202;
      Price = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)v61,
                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      v62 = this->fields.shopEntity;
      if ( !v62 )
        goto LABEL_202;
      itemIds = v62->fields.itemIds;
      if ( !itemIds )
        goto LABEL_202;
      if ( !itemIds->max_length )
        goto LABEL_203;
      if ( !Price )
        goto LABEL_202;
      v64 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)Price,
              itemIds->m_Items[1],
              (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !v64 )
        goto LABEL_202;
      age = (Il2CppObject *)v64->fields.age;
      goto LABEL_95;
    case 0xA:
      Price = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_202;
      if ( !UserItemCounts->max_length )
        goto LABEL_203;
      if ( (int)Price <= UserItemCounts->m_Items[1]
        || ShopEntity__IsAfterTheFreeShopReleaseDate(shopEntity, 0LL)
        && ShopEntity__IsFulFilledFreeExchangeCondition(shopEntity, 0LL) )
      {
        goto LABEL_154;
      }
      v54 = *p_warningLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v59 = &StringLiteral_12074/*"SHOP_BUY_RARE_PRI_CONFIRM_WARNING"*/;
LABEL_105:
      v57 = LocalizationManager__Get((System_String_o *)*v59, 0LL);
LABEL_106:
      ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)v57, v54, v57, v58);
      goto LABEL_154;
    case 0xE:
      if ( !this->fields.commonConsumeEntities )
        goto LABEL_154;
      Price = (void *)ShopEntity__get_TargetId(shopEntity, 0LL);
      v67 = BalanceConfig_TypeInfo;
      v68 = (int)Price;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v67 = BalanceConfig_TypeInfo;
      }
      if ( v68 != v67->static_fields->ApSeedExchangeTargetItemId )
        goto LABEL_117;
      v69 = *p_warningLabel;
      if ( (BYTE3(v67->vtable._0_Equals.methodPtr) & 4) != 0 && !v67->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v67);
      if ( !v69 )
        goto LABEL_202;
      UILabel__set_fontSize(v69, BalanceConfig_TypeInfo->static_fields->TradeApDialogWarningLabelFontSize, 0LL);
LABEL_117:
      commonConsumeEntities = this->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        goto LABEL_202;
      v71 = *(_QWORD *)&commonConsumeEntities->max_length;
      if ( (_DWORD)v71 == 1 )
      {
        v72 = commonConsumeEntities->m_Items[0];
        if ( !v72 )
          goto LABEL_202;
        num = v72->fields.num;
        if ( num > CommonConsumeEntity__GetUserHasNum(commonConsumeEntities->m_Items[0], 0LL) )
        {
          v41 = *p_warningLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v60 = LocalizationManager__Get((System_String_o *)StringLiteral_12054/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, 0LL);
          age = (Il2CppObject *)CommonConsumeEntity__GetName(v72, 0LL);
LABEL_95:
          v66 = v60;
          goto LABEL_153;
        }
      }
      else if ( (int)v71 > 1 )
      {
        Empty = string_TypeInfo->static_fields->Empty;
        v78 = 0;
        do
        {
          if ( v78 >= (unsigned int)v71 )
            goto LABEL_203;
          v79 = &commonConsumeEntities->obj.klass + v78;
          v80 = (CommonConsumeEntity_o *)v79[4];
          if ( !v80 )
            goto LABEL_202;
          v81 = v80->fields.num;
          Price = (void *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)v79[4], 0LL);
          if ( v81 > (int)Price )
          {
            Name = (Il2CppObject *)CommonConsumeEntity__GetName(v80, 0LL);
            v83 = System_String__Format((System_String_o *)StringLiteral_23571/*"{0}、"*/, Name, 0LL);
            Price = System_String__Concat_43743732(Empty, v83, 0LL);
            Empty = (struct System_String_o *)Price;
          }
          commonConsumeEntities = this->fields.commonConsumeEntities;
          if ( !commonConsumeEntities )
            goto LABEL_202;
          LODWORD(v71) = commonConsumeEntities->max_length;
          ++v78;
        }
        while ( v78 < (int)v71 );
        if ( !Empty )
          goto LABEL_202;
        m_stringLength = Empty->fields.m_stringLength;
        if ( m_stringLength >= 1 )
        {
          v85 = System_String__Remove_43822088(Empty, m_stringLength - 1, 0LL);
          v41 = *p_warningLabel;
          v86 = (Il2CppObject *)v85;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v66 = LocalizationManager__Get((System_String_o *)StringLiteral_12054/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, 0LL);
          age = v86;
LABEL_153:
          v49 = System_String__Format(v66, age, 0LL);
          goto LABEL_51;
        }
      }
LABEL_154:
      LODWORD(buyItemNum) = 0;
      *(_QWORD *)buyQuestNum = 0LL;
      *(_QWORD *)buyServantEquipNum = 0LL;
      recordNum = 0;
      ShopEntity__GetSum(
        shopEntity,
        (int32_t *)&buyItemNum,
        &buyServantEquipNum[1],
        buyServantEquipNum,
        &buyQuestNum[1],
        buyQuestNum,
        &recordNum,
        0LL);
      if ( buyServantEquipNum[0] + buyServantEquipNum[1] + buyQuestNum[1] >= 1 )
      {
        v87 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v87 )
          goto LABEL_202;
        v88 = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)v87,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
        if ( !userGameEntity )
          goto LABEL_202;
        if ( !v88 )
          goto LABEL_202;
        VaildList = UserPresentBoxMaster__getVaildList(v88, userGameEntity->fields.userId, 0LL);
        if ( !VaildList )
          goto LABEL_202;
        purchaseType = shopEntity->fields.purchaseType;
        max_length = VaildList->max_length;
        if ( purchaseType == 5 )
          v92 = recordNum;
        else
          v92 = buyServantEquipNum[0] + buyServantEquipNum[1] + buyQuestNum[1];
        v93 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v93 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v93->static_fields->PresentBoxMax;
        if ( PresentBoxMax <= max_length )
        {
          v95 = *p_warningLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v96 = &StringLiteral_12071/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/;
LABEL_200:
          v105 = LocalizationManager__Get((System_String_o *)*v96, 0LL);
          if ( v95 )
          {
            UILabel__set_text(v95, v105, 0LL);
            return;
          }
LABEL_202:
          sub_B170D4();
        }
        if ( (BYTE3(v93->vtable._0_Equals.methodPtr) & 4) != 0 && !v93->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v93);
          PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
        }
        if ( v92 + max_length > PresentBoxMax )
        {
          v95 = *p_warningLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v96 = &StringLiteral_12072/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/;
          goto LABEL_200;
        }
      }
      if ( (int)buyItemNum < 1 )
        return;
      v97 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v97 )
        goto LABEL_202;
      v98 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v97,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v98 )
        goto LABEL_202;
      Sum = UserItemMaster__getSum(v98, UserId, 0LL);
      v101 = BalanceConfig_TypeInfo;
      v102 = Sum;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v101 = BalanceConfig_TypeInfo;
      }
      UserItemMax = v101->static_fields->UserItemMax;
      if ( v102 >= UserItemMax )
      {
        v95 = *p_warningLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v96 = &StringLiteral_12065/*"SHOP_BUY_ITEM_FULL_WARNING"*/;
        goto LABEL_200;
      }
      v104 = buyItemNum;
      if ( (BYTE3(v101->vtable._0_Equals.methodPtr) & 4) != 0 && !v101->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v101);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      if ( v104 + v102 > UserItemMax )
      {
        v95 = *p_warningLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v96 = &StringLiteral_12067/*"SHOP_BUY_ITEM_OVER_WARNING"*/;
        goto LABEL_200;
      }
      return;
    default:
      goto LABEL_154;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopBuyItemConfirmMenu__ShowCommandCodeInfomation(
        ShopBuyItemConfirmMenu_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v12; // x0
  CommandCodeEntity_o *v13; // x20
  CommonUI_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  ServantStatusDialog_EndDelegate_o *v19; // x22
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FF3B8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&commandCodeId);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v6);
    sub_B16FFC(&Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_40FF3B8 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_9;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         commandCodeId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
  {
    v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (CommandCodeEntity_o *)entity;
    v14 = (CommonUI_o *)v12;
    v19 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v15, v16, v17, v18);
    ServantStatusDialog_EndDelegate___ctor(
      v19,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v14 )
    {
      CommonUI__OpenServantEquipStatusDialog_18253740(v14, 25, v13, 0, v19, 0LL, 0LL);
      return 0;
    }
LABEL_9:
    sub_B170D4();
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopBuyItemConfirmMenu__ShowItemInfomation(
        ShopBuyItemConfirmMenu_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  int32_t itemDetailDialogOverwriteDepth; // w23
  WebViewManager_o *v13; // x0
  ItemEntity_o *v14; // x20
  CommonUI_o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  ItemDetailInfoComponent_CallbackFunc_o *v20; // x22
  int32_t v21; // w3
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FF3B7 & 1) == 0 )
  {
    sub_B16FFC(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, *(_QWORD *)&itemId);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_40FF3B7 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         itemId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    itemDetailDialogOverwriteDepth = this->fields.itemDetailDialogOverwriteDepth;
    v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = (ItemEntity_o *)entity;
    v15 = (CommonUI_o *)v13;
    v20 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                      ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                      v16,
                                                      v17,
                                                      v18,
                                                      v19);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v20,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__,
      0LL);
    if ( itemDetailDialogOverwriteDepth == 0x80000000 )
    {
      if ( v15 )
      {
        v21 = 50;
LABEL_11:
        CommonUI__OpenItemDetailDialog(v15, v14, v20, v21, 0LL);
        return 0;
      }
    }
    else if ( v15 )
    {
      v21 = this->fields.itemDetailDialogOverwriteDepth;
      goto LABEL_11;
    }
LABEL_13:
    sub_B170D4();
  }
  return 0;
}


int32_t __fastcall ShopBuyItemConfirmMenu__ShowOtherInfomation(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  System_String_o *name; // x21
  System_String_o *infoMessage; // x20
  CommonUI_o *v11; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  ItemDetailInfoComponent_CallbackFunc_o *v16; // x23

  if ( (byte_40FF3B9 & 1) == 0 )
  {
    sub_B16FFC(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, shopEntity);
    sub_B16FFC(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_9280/*"NONE"*/, v7);
    byte_40FF3B9 = 1;
  }
  if ( !shopEntity )
    goto LABEL_9;
  if ( !System_String__IsNullOrEmpty(shopEntity->fields.infoMessage, 0LL)
    && System_String__op_Inequality(shopEntity->fields.infoMessage, (System_String_o *)StringLiteral_9280/*"NONE"*/, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    name = shopEntity->fields.name;
    infoMessage = shopEntity->fields.infoMessage;
    v11 = (CommonUI_o *)Instance;
    v16 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                      ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                      v12,
                                                      v13,
                                                      v14,
                                                      v15);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__,
      0LL);
    if ( v11 )
    {
      CommonUI__OpenItemDetailDialog_18297320(v11, name, infoMessage, v16, 0LL);
      return 0;
    }
LABEL_9:
    sub_B170D4();
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopBuyItemConfirmMenu__ShowServantInfomation(
        ShopBuyItemConfirmMenu_o *this,
        int32_t servantId,
        int32_t limitCount,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  CommonUI_o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  ServantLeaderInfo_o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  ServantStatusDialog_EndDelegate_o *v29; // x20
  CommonUI_o *v31; // x23
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  EquipTargetInfo_o *v36; // x24
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  ServantStatusDialog_EndDelegate_o *v41; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FF3B6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v10);
    sub_B16FFC(&EquipTargetInfo_TypeInfo, v11);
    sub_B16FFC(&ServantLeaderInfo_TypeInfo, v12);
    sub_B16FFC(&Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__, v13);
    sub_B16FFC(&Method_ShopBuyItemConfirmMenu_EndShowServantStatusDialog__, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    byte_40FF3B6 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_24;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          servantId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return -1;
  if ( !entity )
    goto LABEL_24;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) )
    goto LABEL_14;
  if ( !entity )
    goto LABEL_24;
  if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)entity, 0LL) )
    goto LABEL_14;
  if ( !entity )
    goto LABEL_24;
  if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)entity, 0LL) )
    goto LABEL_14;
  if ( !entity )
    goto LABEL_24;
  if ( ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)entity, 0LL) )
  {
LABEL_14:
    v19 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = (ServantLeaderInfo_o *)sub_B170CC(ServantLeaderInfo_TypeInfo, v20, v21, v22, v23);
    ServantLeaderInfo___ctor_29610580(v24, servantId, 0, 1, 0LL);
    v29 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v25, v26, v27, v28);
    ServantStatusDialog_EndDelegate___ctor(
      v29,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantStatusDialog__,
      0LL);
    if ( v19 )
    {
      CommonUI__OpenServantStatusDialog_18250312(v19, 7, v24, v29, 0LL);
      return 0;
    }
    goto LABEL_24;
  }
  if ( !entity )
    goto LABEL_24;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL) )
  {
    v31 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v36 = (EquipTargetInfo_o *)sub_B170CC(EquipTargetInfo_TypeInfo, v32, v33, v34, v35);
    EquipTargetInfo___ctor_29330048(v36, servantId, limitCount, level, 0, 0LL);
    v41 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v37, v38, v39, v40);
    ServantStatusDialog_EndDelegate___ctor(
      v41,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v31 )
    {
      CommonUI__OpenServantEquipStatusDialog_18252676(v31, 7, v36, v41, 0LL, 0LL);
      return 0;
    }
LABEL_24:
    sub_B170D4();
  }
  return 2;
}


System_String_o *__fastcall ShopBuyItemConfirmMenu__get_closeBtnPath(
        ShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FF3C0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15414/*"Window/CancelButton"*/, method);
    byte_40FF3C0 = 1;
  }
  return (System_String_o *)StringLiteral_15414/*"Window/CancelButton"*/;
}


bool __fastcall ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  EventRewardRootComponent_c *v3; // x0
  ShopEntity_o *shopEntity; // x0

  if ( (byte_40FF398 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardRootComponent_TypeInfo, method);
    byte_40FF398 = 1;
  }
  if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  }
  if ( !byte_40F6257 )
  {
    sub_B16FFC(&EventRewardRootComponent_TypeInfo, method);
    byte_40F6257 = 1;
  }
  v3 = EventRewardRootComponent_TypeInfo;
  if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    v3 = EventRewardRootComponent_TypeInfo;
  }
  if ( !v3->static_fields->_IsAnotherPayFlag_k__BackingField )
    return 0;
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    sub_B170D4();
  return ShopEntity__IsAnotherItemBuyable(shopEntity, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu___c__DisplayClass93_0___ctor(
        ShopBuyItemConfirmMenu___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu___c__DisplayClass93_0___ReturnWarningRarePri_b__0(
        ShopBuyItemConfirmMenu___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct ShopBuyItemConfirmMenu_o *_4__this; // x8
  System_Action_o *onChecked; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct ShopBuyItemConfirmMenu_o *v17; // x8
  System_Action_T__o *onCloseReturnWarning; // x21

  if ( (byte_40F79E1 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_int___, method);
    byte_40F79E1 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (onChecked = _4__this->fields.onChecked,
        _4__this->fields.onChecked = 0LL,
        sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.onChecked, 0LL, v2, v3, v4, v5, v6, v7),
        (v17 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  onCloseReturnWarning = (System_Action_T__o *)v17->fields.onCloseReturnWarning;
  v17->fields.onCloseReturnWarning = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v17->fields.onCloseReturnWarning, 0LL, v11, v12, v13, v14, v15, v16);
  if ( this->fields.isDecide )
    ActionExtensions__Call(onChecked, 0LL);
  else
    ActionExtensions__Call_int_(
      onCloseReturnWarning,
      0,
      (const MethodInfo_2D39F14 *)Method_ActionExtensions_Call_int___);
}