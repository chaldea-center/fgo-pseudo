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

  if ( (byte_4218B06 & 1) == 0 )
  {
    sub_B0D8A4(&ShopBuyItemConfirmMenu_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_17104/*"btn_txt_event_"*/, v8);
    sub_B0D8A4(&StringLiteral_17154/*"btn_txt_trade"*/, v9);
    sub_B0D8A4(&StringLiteral_17137/*"btn_txt_sale"*/, v10);
    byte_4218B06 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_17104/*"btn_txt_event_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17104/*"btn_txt_event_"*/;
  sub_B0D840(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_17154/*"btn_txt_trade"*/;
  v13->DECIED_BTN_NAME_DEFAULT = (struct System_String_o *)StringLiteral_17154/*"btn_txt_trade"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v13->DECIED_BTN_NAME_DEFAULT, v14, v15, v16, v17, v18, v19, v20);
  v21 = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_17137/*"btn_txt_sale"*/;
  v21->DECIED_BTN_NAME_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_17137/*"btn_txt_sale"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v21->DECIED_BTN_NAME_LIMIT_MATERIAL, v22, v23, v24, v25, v26, v27, v28);
  ShopBuyItemConfirmMenu_TypeInfo->static_fields->PRICE_DATA_LABEL_MAX_WIDTH = 320;
}


void __fastcall ShopBuyItemConfirmMenu___ctor(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4218B05 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_4218B05 = 1;
  }
  this->fields.itemDetailDialogOverwriteDepth = 0x80000000;
  *(_OWORD *)&this->fields.freeLabelPos.fields.x = xmmword_3216500;
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
    sub_B0D840(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4218AF4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int__Invoke__, *(_QWORD *)&result);
    byte_4218AF4 = 1;
  }
  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    this->fields.onDecide = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_int___Invoke(onDecide, result, (const MethodInfo_246D4C0 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall ShopBuyItemConfirmMenu__Close(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ShopBuyItemConfirmMenu__Close_32543676(this, 0LL, v2);
}


void __fastcall ShopBuyItemConfirmMenu__Close_32543676(
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
  System_Action_o *v13; // x20

  if ( (byte_4218AF3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_ShopBuyItemConfirmMenu_EndClose__, v10);
    byte_4218AF3 = 1;
  }
  this->fields.onClose = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__EndClose(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  ShopBuyItemConfirmMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
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

  if ( (byte_4218B01 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_4218B01 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__EndShowServantEquipStatusDialog(
        ShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4218B00 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4218B00 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseServantEquipStatusDialog(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__EndShowServantStatusDialog(
        ShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4218AFF & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4218AFF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


bool __fastcall ShopBuyItemConfirmMenu__GetIsBuyable(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  bool isQuestNotClearItemClosedSub; // w8
  bool result; // w0
  const MethodInfo *v15; // x1
  System_Int32_array *UserItemCounts; // x22
  int32_t purchaseType; // w8
  int basePanel; // w19
  int32_t v19; // w20
  __int64 v20; // x21
  BalanceConfig_c *v21; // x0
  int32_t PresentBoxMax; // w8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x19
  int32_t Sum; // w19
  BalanceConfig_c *v25; // x8
  int32_t UserItemMax; // w9
  int v27; // w21
  struct CommonConsumeEntity_array *commonConsumeEntities; // x21
  int max_length; // w8
  __int64 v30; // x22
  int basePanelList; // w24
  __int64 v32; // x0
  int32_t questId; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t recordNum[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t buyCmdCodeNum[2]; // [xsp+10h] [xbp-40h] BYREF
  __int64 buyServantNum; // [xsp+18h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_4218AE7 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, shopEntity);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v10);
    sub_B0D8A4(&NetworkManager_TypeInfo, v11);
    this = (ShopBuyItemConfirmMenu_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4218AE7 = 1;
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
      UserItemCounts = ShopBuyItemConfirmMenu__GetUserItemCounts(v8, v15);
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
            this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetPrice(shopEntity, 0LL);
            if ( !UserItemCounts )
              goto LABEL_75;
            if ( !UserItemCounts->max_length )
            {
LABEL_76:
              v32 = sub_B0D9A8(this);
              sub_B0D948(v32, 0LL);
            }
            if ( (int)this > UserItemCounts->m_Items[1] )
              return 0;
          }
          else if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 1 )
          {
            v20 = 0LL;
            while ( 1 )
            {
              this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetPrices(shopEntity, v20, 0LL);
              if ( !UserItemCounts )
                break;
              if ( (unsigned int)v20 >= UserItemCounts->max_length )
                goto LABEL_76;
              if ( (int)this > UserItemCounts->m_Items[v20 + 1] )
                return 0;
              if ( (int)++v20 >= ShopEntity__GetItemCount(shopEntity, 0LL) )
                goto LABEL_17;
            }
LABEL_75:
            sub_B0D97C(this);
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
          this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_75;
          this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
          if ( !userGameEntity )
            goto LABEL_75;
          if ( !this )
            goto LABEL_75;
          this = (ShopBuyItemConfirmMenu_o *)UserPresentBoxMaster__getVaildList(
                                               (UserPresentBoxMaster_o *)this,
                                               userGameEntity->fields.userId,
                                               0LL);
          if ( !this )
            goto LABEL_75;
          purchaseType = shopEntity->fields.purchaseType;
          basePanel = (int)this->fields.basePanel;
          if ( purchaseType == 5 )
            v19 = recordNum[0];
          else
            v19 = buyCmdCodeNum[1] + buyServantNum + buyCmdCodeNum[0];
          v21 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v21 = BalanceConfig_TypeInfo;
          }
          PresentBoxMax = v21->static_fields->PresentBoxMax;
          if ( PresentBoxMax > basePanel )
          {
            if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v21);
              PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
            }
            if ( v19 + basePanel <= PresentBoxMax )
            {
LABEL_56:
              if ( SHIDWORD(buyServantNum) < 1 )
                return 1;
              this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_75;
              MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)this,
                                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              this = (ShopBuyItemConfirmMenu_o *)NetworkManager__get_UserId(0LL);
              if ( !MasterData_WarQuestSelectionMaster )
                goto LABEL_75;
              Sum = UserItemMaster__getSum(MasterData_WarQuestSelectionMaster, (int64_t)this, 0LL);
              v25 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v25 = BalanceConfig_TypeInfo;
              }
              UserItemMax = v25->static_fields->UserItemMax;
              if ( Sum < UserItemMax )
              {
                v27 = HIDWORD(buyServantNum);
                if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v25);
                  UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
                }
                if ( v27 + Sum <= UserItemMax )
                  return 1;
              }
            }
          }
          break;
        case 0xA:
          this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetPrice(shopEntity, 0LL);
          if ( !UserItemCounts )
            goto LABEL_75;
          if ( !UserItemCounts->max_length )
            goto LABEL_76;
          if ( (int)this > UserItemCounts->m_Items[1]
            && (!ShopEntity__IsAfterTheFreeShopReleaseDate(shopEntity, 0LL)
             || !ShopEntity__IsFulFilledFreeExchangeCondition(shopEntity, 0LL)) )
          {
            return 0;
          }
          goto LABEL_17;
        case 0xE:
          this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetItemCount(shopEntity, 0LL);
          if ( (int)this < 1 )
            goto LABEL_17;
          commonConsumeEntities = v8->fields.commonConsumeEntities;
          if ( !commonConsumeEntities )
            goto LABEL_17;
          max_length = commonConsumeEntities->max_length;
          if ( max_length < 1 )
            goto LABEL_17;
          v30 = 0LL;
          while ( 2 )
          {
            if ( (unsigned int)v30 >= max_length )
              goto LABEL_76;
            this = (ShopBuyItemConfirmMenu_o *)commonConsumeEntities->m_Items[v30];
            if ( !this )
              goto LABEL_75;
            basePanelList = (int)this->fields.basePanelList;
            this = (ShopBuyItemConfirmMenu_o *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0LL);
            if ( basePanelList <= (int)this )
            {
              max_length = commonConsumeEntities->max_length;
              if ( (int)++v30 >= max_length )
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
  __int64 v5; // x8
  SetItemMaster_o *v6; // x20
  unsigned __int64 v7; // x21
  int basePanel; // w8
  unsigned int v9; // w9
  __int64 v10; // x10
  __int64 v12; // x0

  if ( (byte_4218B02 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SetItemMaster___, ids);
    this = (ShopBuyItemConfirmMenu_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4218B02 = 1;
  }
  if ( !ids )
    goto LABEL_20;
  if ( !*(_QWORD *)&ids->max_length )
    return 0;
  this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_B0D97C(this);
  this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SetItemMaster___);
  v5 = *(_QWORD *)&ids->max_length;
  if ( (int)v5 < 1 )
    return 0;
  v6 = (SetItemMaster_o *)this;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v5 )
    {
LABEL_21:
      v12 = sub_B0D9A8(this);
      sub_B0D948(v12, 0LL);
    }
    if ( !v6 )
      goto LABEL_20;
    this = (ShopBuyItemConfirmMenu_o *)SetItemMaster__GetList(v6, ids->m_Items[v7 + 1], 0LL);
    if ( !this )
      goto LABEL_20;
    basePanel = (int)this->fields.basePanel;
    if ( basePanel >= 1 )
      break;
LABEL_17:
    LODWORD(v5) = ids->max_length;
    if ( (__int64)++v7 >= (int)v5 )
      return 0;
  }
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= basePanel )
      goto LABEL_21;
    v10 = *((_QWORD *)&this->fields.basePanelList + (int)v9);
    if ( !v10 )
      goto LABEL_20;
    if ( *(_DWORD *)(v10 + 20) == 7 )
      return 1;
    if ( (int)++v9 >= basePanel )
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
    sub_B0D97C(this);
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

  if ( (byte_4218AF7 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&shopType);
    sub_B0D8A4(&StringLiteral_8419/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/, v4);
    sub_B0D8A4(&StringLiteral_12205/*"SHOP_MAX_ALERT"*/, v5);
    byte_4218AF7 = 1;
  }
  if ( shopType == 9 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_8419/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_12205/*"SHOP_MAX_ALERT"*/;
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

  if ( (byte_4218AF6 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&itemType);
    sub_B0D8A4(&StringLiteral_10907/*"QP_NAME"*/, v4);
    sub_B0D8A4(&StringLiteral_8641/*"MANA_NAME"*/, v5);
    sub_B0D8A4(&StringLiteral_11038/*"RARE_PRI_NAME"*/, v6);
    sub_B0D8A4(&StringLiteral_6502/*"FRIEND_POINT_NAME"*/, v7);
    sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    byte_4218AF6 = 1;
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
      v9 = &StringLiteral_6502/*"FRIEND_POINT_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v9, 0LL);
    }
    if ( itemType == 22 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v9 = &StringLiteral_11038/*"RARE_PRI_NAME"*/;
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
    v9 = &StringLiteral_10907/*"QP_NAME"*/;
    return LocalizationManager__Get((System_String_o *)*v9, 0LL);
  }
  if ( itemType != 5 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = &StringLiteral_8641/*"MANA_NAME"*/;
  return LocalizationManager__Get((System_String_o *)*v9, 0LL);
}


System_Int32_array *__fastcall ShopBuyItemConfirmMenu__GetUserItemCounts(
        ShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 SelfUserGame; // x0
  struct ShopEntity_o *shopEntity; // x8
  _DWORD *v8; // x21
  System_Int32_array *v9; // x20
  UserItemMaster_o *v10; // x21
  struct ShopEntity_o *v11; // x8
  struct System_Int32_array *itemIds; // x8
  int32_t v13; // w8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v15; // x1
  int32_t ItemCount; // w22
  const MethodInfo *v18; // x1
  __int64 v19; // x23
  __int64 v20; // x24
  struct ShopEntity_o *v21; // x8
  unsigned __int64 v22; // x26
  int32_t v23; // w22
  bool v24; // cc
  unsigned int v25; // w0
  __int64 v26; // x0

  if ( (byte_4218AE6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_B0D8A4(&int___TypeInfo, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4218AE6 = 1;
  }
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_59;
  v8 = (_DWORD *)SelfUserGame;
  switch ( shopEntity->fields.payType )
  {
    case 1:
      SelfUserGame = sub_B0D8BC(int___TypeInfo, 1LL);
      if ( !v8 )
        goto LABEL_59;
      v9 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_59;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_60;
      v13 = v8[42];
      goto LABEL_38;
    case 2:
      SelfUserGame = sub_B0D8BC(int___TypeInfo, 1LL);
      if ( !v8 )
        goto LABEL_59;
      v9 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_59;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_60;
      v13 = v8[24];
      goto LABEL_38;
    case 4:
      SelfUserGame = sub_B0D8BC(int___TypeInfo, 1LL);
      if ( !v8 )
        goto LABEL_59;
      v9 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_59;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_60;
      v13 = v8[44];
      goto LABEL_38;
    case 6:
    case 0xB:
      SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_59;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)SelfUserGame,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
      SelfUserGame = ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v15);
      if ( !this->fields.shopEntity )
        goto LABEL_59;
      if ( (SelfUserGame & 1) != 0 )
      {
        SelfUserGame = (__int64)ShopEntity__GetAnotherPayItemIds(this->fields.shopEntity, 0LL);
        if ( !SelfUserGame )
          goto LABEL_59;
        ItemCount = *(_DWORD *)(SelfUserGame + 24);
      }
      else
      {
        ItemCount = ShopEntity__GetItemCount(this->fields.shopEntity, 0LL);
      }
      v9 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)ItemCount);
      if ( ItemCount >= 1 )
      {
        v19 = ItemCount;
        v20 = 8LL;
        while ( 1 )
        {
          SelfUserGame = ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v18);
          v21 = this->fields.shopEntity;
          if ( !v21 )
            break;
          v22 = v20 - 8;
          if ( (SelfUserGame & 1) != 0 )
          {
            SelfUserGame = (__int64)ShopEntity__GetAnotherPayItemIds(this->fields.shopEntity, 0LL);
            if ( !SelfUserGame )
              break;
          }
          else
          {
            SelfUserGame = (__int64)v21->fields.itemIds;
            if ( !SelfUserGame )
              break;
          }
          if ( v22 >= *(unsigned int *)(SelfUserGame + 24) )
          {
LABEL_60:
            v26 = sub_B0D9A8(SelfUserGame);
            sub_B0D948(v26, 0LL);
          }
          v23 = *(_DWORD *)(SelfUserGame + 4 * v20);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          SelfUserGame = NetworkManager__get_UserId(0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            break;
          SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                                    MasterData_WarQuestSelectionMaster,
                                    SelfUserGame,
                                    v23,
                                    0LL);
          if ( !SelfUserGame || !v9 )
            break;
          if ( v22 >= v9->max_length )
            goto LABEL_60;
          v24 = v20 - 7 < v19;
          *((_DWORD *)&v9->obj.klass + v20++) = *(_DWORD *)(SelfUserGame + 28);
          if ( !v24 )
            return v9;
        }
LABEL_59:
        sub_B0D97C(SelfUserGame);
      }
      return v9;
    case 8:
    case 9:
    case 0xC:
      v9 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
      SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_59;
      v10 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)SelfUserGame,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      SelfUserGame = NetworkManager__get_UserId(0LL);
      v11 = this->fields.shopEntity;
      if ( !v11 )
        goto LABEL_59;
      itemIds = v11->fields.itemIds;
      if ( !itemIds )
        goto LABEL_59;
      if ( !itemIds->max_length )
        goto LABEL_60;
      if ( !v10 )
        goto LABEL_59;
      SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(v10, SelfUserGame, itemIds->m_Items[1], 0LL);
      if ( !SelfUserGame || !v9 )
        goto LABEL_59;
      if ( !v9->max_length )
        goto LABEL_60;
      v13 = *(_DWORD *)(SelfUserGame + 28);
LABEL_38:
      v9->m_Items[1] = v13;
      return v9;
    case 0xA:
      SelfUserGame = sub_B0D8BC(int___TypeInfo, 1LL);
      if ( !v8 )
        goto LABEL_59;
      v9 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_59;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_60;
      v13 = v8[45];
      goto LABEL_38;
    default:
      v25 = ShopEntity__GetItemCount(this->fields.shopEntity, 0LL);
      return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, v25);
  }
}


void __fastcall ShopBuyItemConfirmMenu__Init(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *nameLabel; // x0
  UILabel_o *messageLabel; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  ShopBuyItemConfirmMenu_o *v12; // x0
  const MethodInfo *v13; // x3
  ShopBuyItemConfirmMenu_o *v14; // x0
  const MethodInfo *v15; // x3
  ShopBuyItemConfirmMenu_o *v16; // x0
  const MethodInfo *v17; // x3

  if ( (byte_4218ADD & 1) == 0 )
  {
    sub_B0D8A4(&ShopBuyItemUtility_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v3);
    byte_4218ADD = 1;
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
  nameLabel = this->fields.warningLabel;
  if ( !nameLabel )
    goto LABEL_15;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.freeLabel;
  if ( !nameLabel )
    goto LABEL_15;
  nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL);
  if ( !nameLabel )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0LL);
  nameLabel = (UILabel_o *)this->fields.itemIcon;
  if ( !nameLabel )
    goto LABEL_15;
  ItemIconComponent__Clear((ItemIconComponent_o *)nameLabel, 0LL);
  nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !nameLabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0LL),
        this->fields.state = 0,
        this->fields.shopEntity = 0LL,
        sub_B0D840((BattleServantConfConponent_o *)&this->fields.shopEntity, 0LL, v6, v7, v8, v9, v10, v11),
        (nameLabel = (UILabel_o *)this->fields.infoButton) == 0LL)
    || (nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B0D97C(nameLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText(v12, this->fields.presentAheadLabel, (System_String_o *)StringLiteral_1/*""*/, v13);
  ShopBuyItemConfirmMenu__SetLabelActive(v14, this->fields.LineText, 0, v15);
  ShopBuyItemConfirmMenu__SetLabelActive(v16, this->fields.LineText2digit, 0, v17);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__OnClickCancel(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4218AF8 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4218AF8 = 1;
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
  DataManager_o *Instance; // x0
  struct ShopEntity_o *shopEntity; // x1
  NoTitleDialog_o *noTitleDialog; // x20
  System_String_o *lookup; // x21
  Il2CppObject *Name; // x0
  System_String_o *v21; // x21
  System_String_o *v22; // x22
  System_String_o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  System_Action_bool__o *v26; // x24
  const MethodInfo *v27; // x3
  struct ShopEntity_o *v28; // x8
  System_String_o *MaxAlertMessage; // x20
  CommonUI_o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  System_Action_o *v33; // x22
  UILabel_o *warningLabel; // x20
  const MethodInfo *v35; // x2
  int32_t check; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_4218AF5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, method);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v3);
    sub_B0D8A4(&System_Action_TypeInfo, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopMaster___, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&Method_ShopBuyItemConfirmMenu_EndMaxErrorDialog__, v7);
    sub_B0D8A4(&Method_ShopBuyItemConfirmMenu_ReturnWarning__, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B0D8A4(&SoundManager_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_9381/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, v12);
    sub_B0D8A4(&StringLiteral_12145/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, v13);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v14);
    sub_B0D8A4(&StringLiteral_1/*""*/, v15);
    byte_4218AF5 = 1;
  }
  check = 0;
  if ( this->fields.state != 2 )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopMaster___);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_40;
  if ( shopEntity->fields.purchaseType != 17 )
  {
    if ( !Instance )
      goto LABEL_40;
    if ( ShopMaster__PurchaseCloseEventShop((ShopMaster_o *)Instance, shopEntity, 0LL) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(8, 0LL);
      Instance = (DataManager_o *)this->fields.shopEntity;
      if ( Instance )
      {
        noTitleDialog = this->fields.noTitleDialog;
        lookup = (System_String_o *)Instance[1].fields.lookup;
        Name = (Il2CppObject *)ShopEntity__getName((ShopEntity_o *)Instance, 0LL);
        v21 = System_String__Format(lookup, Name, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_9381/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, 0LL);
        v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
        v26 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v24, v25);
        System_Action_bool____ctor(
          v26,
          (Il2CppObject *)this,
          Method_ShopBuyItemConfirmMenu_ReturnWarning__,
          (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
        if ( noTitleDialog )
        {
          NoTitleDialog__Open(noTitleDialog, v21, v22, v23, v26, 0LL);
          return;
        }
      }
LABEL_40:
      sub_B0D97C(Instance);
    }
    shopEntity = this->fields.shopEntity;
    if ( !shopEntity )
      goto LABEL_35;
  }
  if ( ShopEntity__IsEnable(shopEntity, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.shopEntity;
    if ( !Instance )
      goto LABEL_40;
    Instance = (DataManager_o *)ShopEntity__isMaxOver((ShopEntity_o *)Instance, 1LL, &check, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v28 = this->fields.shopEntity;
      if ( !v28 )
        goto LABEL_40;
      MaxAlertMessage = ShopBuyItemConfirmMenu__GetMaxAlertMessage(this, v28->fields.shopType, check, v27);
      v30 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v33 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v31, v32);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndMaxErrorDialog__, 0LL);
      if ( !v30 )
        goto LABEL_40;
      CommonUI__OpenNotificationDialog(
        v30,
        (System_String_o *)StringLiteral_1/*""*/,
        MaxAlertMessage,
        v33,
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
    ShopBuyItemConfirmMenu__CallOnDecide(this, 1, v35);
    return;
  }
  Instance = (DataManager_o *)this->fields.presentAheadLabel;
  if ( !Instance )
    goto LABEL_40;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  warningLabel = this->fields.warningLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12145/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_40;
  UILabel__set_text(warningLabel, (System_String_o *)Instance, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  Instance = (DataManager_o *)this->fields.decideButton;
  if ( !Instance )
    goto LABEL_40;
  ((void (__fastcall *)(DataManager_o *, __int64, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))Instance->klass[1]._1.implementedInterfaces)(
    Instance,
    3LL,
    0LL,
    Instance->klass[1]._1.interfaceOffsets);
}


void __fastcall ShopBuyItemConfirmMenu__OnClickInfo(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ShopEntity_o *shopEntity; // x1
  int purchaseType; // w8
  ShopBuyItemConfirmMenu_o *v5; // x19
  ShopBuyItemConfirmMenu_o *v6; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x4
  struct ShopEntity_o *v9; // x8
  int32_t v10; // w1
  int32_t v11; // w0
  const MethodInfo *v12; // x2
  int32_t TargetId; // w0
  const MethodInfo *v14; // x2

  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_14;
  purchaseType = shopEntity->fields.purchaseType;
  v5 = this;
  if ( purchaseType <= 4 )
  {
    if ( purchaseType == 1 )
    {
      TargetId = ShopEntity__get_TargetId(this->fields.shopEntity, 0LL);
      v6 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu__ShowItemInfomation(v5, TargetId, v14);
      goto LABEL_12;
    }
    if ( purchaseType != 4 )
      goto LABEL_5;
  }
  else
  {
    if ( purchaseType == 19 )
    {
      v11 = ShopEntity__get_TargetId(this->fields.shopEntity, 0LL);
      v6 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu__ShowCommandCodeInfomation(v5, v11, v12);
      goto LABEL_12;
    }
    if ( purchaseType != 21 )
    {
LABEL_5:
      v6 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu__ShowOtherInfomation(this, shopEntity, v2);
LABEL_12:
      v10 = 0;
      goto LABEL_13;
    }
  }
  this = (ShopBuyItemConfirmMenu_o *)ShopEntity__get_TargetId(this->fields.shopEntity, 0LL);
  v9 = v5->fields.shopEntity;
  if ( !v9 )
LABEL_14:
    sub_B0D97C(this);
  v6 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu__ShowServantInfomation(
                                     v5,
                                     (int32_t)this,
                                     v9->fields.defaultLimitCount,
                                     v9->fields.defaultLv,
                                     v8);
  v10 = (int)v6;
LABEL_13:
  ShopBuyItemConfirmMenu__PlayShowInfomationSound(v6, v10, v7);
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
  struct ShopEntity_o **p_shopEntity; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct CommonConsumeEntity_array *CommonConsumeEntities; // x1
  struct CommonConsumeEntity_array **p_commonConsumeEntities; // x0
  System_String_o *Name; // x22
  System_String_o *v34; // x22
  const MethodInfo *v35; // x3
  UISprite_o *decideButtonImg; // x23
  ShopBuyItemConfirmMenu_o *v37; // x0
  bool IsPreparation; // w0
  bool v39; // w25
  bool v40; // w23
  const MethodInfo *v41; // x4
  UserGameEntity_o *SelfUserGame; // x24
  const MethodInfo *v43; // x4
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x3
  ShopEntity_o *v46; // x26
  UILabel_o *textOnMask; // x27
  const MethodInfo *v48; // x3
  ShopEntity_o *v49; // x25
  UISprite_o *possessionSprite; // x26
  bool v51; // w0
  const MethodInfo *v52; // x3
  bool IsNotHavingShopItemReceived; // w0
  bool v54; // w25
  bool v55; // w21
  const MethodInfo *v56; // x5
  const MethodInfo *v57; // x4
  struct UICommonButton_o *decideButton; // x8
  char v59; // w20
  __int64 v60; // x1
  const MethodInfo *v61; // x3
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x5
  UISprite_o *itemMaskeSprite; // x20
  ShopBuyItemConfirmMenu_o *v65; // x0
  const MethodInfo *v66; // x3
  _BOOL8 IsShowMask; // x0
  const MethodInfo *v68; // x3
  const MethodInfo *v69; // x3
  __int64 v70; // x1
  __int64 v71; // x2
  System_Action_o *v72; // x20
  System_String_o *itemName; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4218ADE & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, shopEntity);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v13);
    sub_B0D8A4(&Method_ShopBuyItemConfirmMenu_EndOpen__, v14);
    sub_B0D8A4(&ShopBuyItemConfirmMenu_TypeInfo, v15);
    sub_B0D8A4(&ShopBuyItemUtility_TypeInfo, v16);
    byte_4218ADE = 1;
  }
  message = 0LL;
  itemName = 0LL;
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_B0D840(
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
    sub_B0D840(
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
    sub_B0D840(
      (BattleServantConfConponent_o *)p_commonConsumeEntities,
      (System_Int32_array **)CommonConsumeEntities,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    this->fields.shopKind = shopKind;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)*p_shopEntity;
      if ( *p_shopEntity )
      {
        Name = ShopEntity__getName((ShopEntity_o *)gameObject, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__ReplaceCommonTag(Name, 0, 0LL);
        if ( this->fields.nameLabel )
        {
          v34 = (System_String_o *)gameObject;
          UICrossNarrowLabel__SetCrossNarrowText(this->fields.nameLabel, (System_String_o *)gameObject, 0LL);
          decideButtonImg = this->fields.decideButtonImg;
          v37 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          if ( (BYTE3(ShopBuyItemConfirmMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
            v37 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          }
          ShopBuyItemConfirmMenu__SetSpriteName(
            v37,
            decideButtonImg,
            (System_String_o *)v37->fields.bandSprite->monitor,
            v35);
          gameObject = (UnityEngine_GameObject_o *)*p_shopEntity;
          if ( *p_shopEntity )
          {
            IsPreparation = ShopEntity__IsPreparation((ShopEntity_o *)gameObject, &message, &itemName, 0LL);
            v39 = IsPreparation;
            v40 = IsPreparation;
            ShopBuyItemConfirmMenu__SetMessageLabel(this, this->fields.shopEntity, IsPreparation, message, v41);
            SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
            ShopBuyItemConfirmMenu__SetWarningLabel(this, this->fields.shopEntity, v39, SelfUserGame, v43);
            ShopBuyItemConfirmMenu__SetBandSprite(this, this->fields.shopEntity, v44);
            ShopBuyItemConfirmMenu__SetTextOnMask(this, this->fields.shopEntity, v39, v45);
            v46 = this->fields.shopEntity;
            textOnMask = this->fields.textOnMask;
            if ( (BYTE3(ShopBuyItemUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
            }
            ShopBuyItemUtility__SetAddTextOnMask(v46, textOnMask, 0LL);
            ShopBuyItemConfirmMenu__SetNumText(this, this->fields.shopEntity, v39, v48);
            v49 = this->fields.shopEntity;
            if ( v49 )
            {
              possessionSprite = this->fields.possessionSprite;
              v51 = ShopEntity__checkFlag(this->fields.shopEntity, 0x4000, 0LL);
              ShopBuyItemUtility__SetShopHaveStatusIcon(v49, possessionSprite, v51, 0LL);
              gameObject = (UnityEngine_GameObject_o *)this->fields.shopEntity;
              if ( gameObject )
              {
                if ( ShopEntity__IsSoldOut((ShopEntity_o *)gameObject, 0LL) )
                {
                  gameObject = (UnityEngine_GameObject_o *)*p_shopEntity;
                  if ( !*p_shopEntity )
                    goto LABEL_34;
                  IsNotHavingShopItemReceived = ShopEntity__GetIsNotHavingShopItemReceived(
                                                  (ShopEntity_o *)gameObject,
                                                  0LL);
                }
                else
                {
                  IsNotHavingShopItemReceived = 0;
                }
                v54 = IsNotHavingShopItemReceived;
                ShopBuyItemConfirmMenu__SetExtensionText(
                  this,
                  this->fields.shopEntity,
                  IsNotHavingShopItemReceived,
                  v52);
                v55 = v40;
                ShopBuyItemConfirmMenu__SetPriceInfo(this, this->fields.shopEntity, v40, buttonSpriteId, v54, v56);
                gameObject = (UnityEngine_GameObject_o *)ShopBuyItemConfirmMenu__GetIsBuyable(
                                                           this,
                                                           this->fields.shopEntity,
                                                           v40,
                                                           SelfUserGame,
                                                           v57);
                decideButton = this->fields.decideButton;
                if ( decideButton )
                {
                  v59 = (char)gameObject;
                  if ( ((unsigned __int8)gameObject & 1) != 0 )
                    v60 = 0LL;
                  else
                    v60 = 3LL;
                  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))decideButton->klass->vtable._14_SetState.method)(
                    this->fields.decideButton,
                    v60,
                    1LL,
                    decideButton->klass->vtable._15_OnPress.methodPtr);
                  ShopBuyItemConfirmMenu__SetAheadText(this, this->fields.shopEntity, v59 & 1, v61);
                  ShopBuyItemConfirmMenu__SetItemIcon(this, this->fields.shopEntity, v55, v62);
                  ShopBuyItemConfirmMenu__SetNameText(this, this->fields.shopEntity, v55, v34, itemName, v63);
                  itemMaskeSprite = this->fields.itemMaskeSprite;
                  IsShowMask = ShopBuyItemConfirmMenu__GetIsShowMask(v65, this->fields.shopEntity, v55, v66);
                  ShopBuyItemConfirmMenu__SetSpriteActive(
                    (ShopBuyItemConfirmMenu_o *)IsShowMask,
                    itemMaskeSprite,
                    IsShowMask,
                    v68);
                  ShopBuyItemConfirmMenu__SetInfoButton(this, this->fields.shopEntity, v55, v69);
                  this->fields.state = 1;
                  v72 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v70, v71);
                  System_Action___ctor(v72, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndOpen__, 0LL);
                  BaseDialog__Open((BaseDialog_o *)this, v72, 0, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_34:
    sub_B0D97C(gameObject);
  }
}


void __fastcall ShopBuyItemConfirmMenu__OpenAfterCheckedFree(
        ShopBuyItemConfirmMenu_o *this,
        ShopBuyItemListViewItem_o *item,
        System_Action_o *onChecked,
        System_Action_int__o *onCloseReturnWarning,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x23
  int v18; // w24
  WebViewManager_o *Instance; // x0
  System_String_o *warningMessage; // x24
  CommonUI_o *v21; // x22
  Il2CppObject *Name; // x0
  System_String_o *v23; // x23
  System_String_o *v24; // x24
  System_String_o *v25; // x25
  __int64 v26; // x1
  __int64 v27; // x2
  System_Action_bool__o *v28; // x26
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_o *v41; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *message; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4218B03 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, item);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v10);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&Method_ShopBuyItemConfirmMenu_ReturnWarningRarePri__, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v14);
    sub_B0D8A4(&StringLiteral_18945/*"freeShopCondId"*/, v15);
    this = (ShopBuyItemConfirmMenu_o *)sub_B0D8A4(&StringLiteral_11160/*"RETURN_RARE_PRI_SHOP_DECIDE_BUTTON"*/, v16);
    byte_4218B03 = 1;
  }
  v41 = 0LL;
  message = 0LL;
  if ( !v8->fields.state )
  {
    if ( item )
    {
      Shop_k__BackingField = item->fields._Shop_k__BackingField;
      if ( Shop_k__BackingField )
      {
        this = (ShopBuyItemConfirmMenu_o *)ShopEntity__IsPreparation(
                                             item->fields._Shop_k__BackingField,
                                             &message,
                                             &v41,
                                             0LL);
        if ( Shop_k__BackingField->fields.script )
        {
          v18 = (int)this;
          if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                  (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Shop_k__BackingField->fields.script,
                  (System_Xml_XmlQualifiedName_o *)StringLiteral_18945/*"freeShopCondId"*/,
                  (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
            || ((v18 | ShopBuyItemListViewItem__get_IsSoldOut(item, 0LL)) & 1) != 0
            || !ShopEntity__IsAfterTheFreeShopReleaseDate(Shop_k__BackingField, 0LL)
            || ShopEntity__IsFulFilledFreeExchangeCondition(Shop_k__BackingField, 0LL) )
          {
            ActionExtensions__Call(onChecked, 0LL);
            return;
          }
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          warningMessage = Shop_k__BackingField->fields.warningMessage;
          v21 = (CommonUI_o *)Instance;
          Name = (Il2CppObject *)ShopEntity__getName(Shop_k__BackingField, 0LL);
          v23 = System_String__Format(warningMessage, Name, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11160/*"RETURN_RARE_PRI_SHOP_DECIDE_BUTTON"*/, 0LL);
          v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
          v28 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v26, v27);
          System_Action_bool____ctor(
            v28,
            (Il2CppObject *)v8,
            Method_ShopBuyItemConfirmMenu_ReturnWarningRarePri__,
            (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
          if ( v21 )
          {
            CommonUI__OpenNoTitleDialog(v21, v23, v24, v25, v28, 0LL);
            v8->fields.onChecked = onChecked;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v8->fields.onChecked,
              (System_Int32_array **)onChecked,
              v29,
              v30,
              v31,
              v32,
              v33,
              v34);
            v8->fields.onCloseReturnWarning = onCloseReturnWarning;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v8->fields.onCloseReturnWarning,
              (System_Int32_array **)onCloseReturnWarning,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40);
            return;
          }
        }
      }
    }
    sub_B0D97C(this);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__PlayShowInfomationSound(
        ShopBuyItemConfirmMenu_o *this,
        int32_t seKind,
        const MethodInfo *method)
{
  if ( (byte_4218AFE & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, *(_QWORD *)&seKind);
    byte_4218AFE = 1;
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
    sub_B0D97C(0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  CommonUI_o *Instance; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_o *v19; // x20

  if ( (byte_4218AF9 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_ShopBuyItemConfirmMenu___c__DisplayClass93_0__ReturnWarningRarePri_b__0__, v6);
    sub_B0D8A4(&ShopBuyItemConfirmMenu___c__DisplayClass93_0_TypeInfo, v7);
    byte_4218AF9 = 1;
  }
  v8 = sub_B0D974(ShopBuyItemConfirmMenu___c__DisplayClass93_0_TypeInfo, isDecide, method);
  ShopBuyItemConfirmMenu___c__DisplayClass93_0___ctor((ShopBuyItemConfirmMenu___c__DisplayClass93_0_o *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = this,
        sub_B0D840((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15),
        *(_BYTE *)(v8 + 24) = isDecide,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v17, v18),
        System_Action___ctor(
          v19,
          (Il2CppObject *)v8,
          Method_ShopBuyItemConfirmMenu___c__DisplayClass93_0__ReturnWarningRarePri_b__0__,
          0LL),
        !Instance) )
  {
    sub_B0D97C(v9);
  }
  CommonUI__CloseNoTitleDialog(Instance, v19, 0LL);
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
  DataManager_o *Instance; // x0
  int32_t purchaseType; // w8
  UILabel_o *presentAheadLabel; // x19
  __int64 *v23; // x8
  System_String_o *v24; // x1
  UILabel_o *v25; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  int32_t bannerId; // w8
  int32_t shopType; // w9
  UILabel_o *v29; // x20
  const MethodInfo *v30; // x3
  UISprite_o *decideButtonImg; // x19
  ShopBuyItemConfirmMenu_o *v32; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4218AEA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&ShopBuyItemConfirmMenu_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B0D8A4(&StringLiteral_10566/*"PURCHASE_AFTER_COSTUME"*/, v11);
    sub_B0D8A4(&StringLiteral_10571/*"PURCHASE_AFTER_USER_ITEM"*/, v12);
    sub_B0D8A4(&StringLiteral_10568/*"PURCHASE_AFTER_ITEM_SET"*/, v13);
    sub_B0D8A4(&StringLiteral_8418/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/, v14);
    sub_B0D8A4(&StringLiteral_10569/*"PURCHASE_AFTER_PRESENT_BOX"*/, v15);
    sub_B0D8A4(&StringLiteral_10567/*"PURCHASE_AFTER_EVENT_SVT_GET"*/, v16);
    sub_B0D8A4(&StringLiteral_10570/*"PURCHASE_AFTER_QP"*/, v17);
    sub_B0D8A4(&StringLiteral_10572/*"PURCHASE_AFTER_USER_SVT_COIN"*/, v18);
    this = (ShopBuyItemConfirmMenu_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v19);
    byte_4218AEA = 1;
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_58;
          MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                Instance,
                                                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
          Instance = (DataManager_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_58;
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        &entity,
                                        (int32_t)Instance,
                                        (const MethodInfo_2669C30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
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
              v23 = &StringLiteral_10572/*"PURCHASE_AFTER_USER_SVT_COIN"*/;
            }
            else
            {
              presentAheadLabel = v6->fields.presentAheadLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v23 = &StringLiteral_10571/*"PURCHASE_AFTER_USER_ITEM"*/;
            }
LABEL_12:
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)*v23, 0LL);
            if ( presentAheadLabel )
            {
              v24 = (System_String_o *)Instance;
              v25 = presentAheadLabel;
LABEL_14:
              UILabel__set_text(v25, v24, 0LL);
              return;
            }
            goto LABEL_58;
          }
          shopType = shopEntity->fields.shopType;
          v29 = v6->fields.presentAheadLabel;
          if ( shopType != 9 )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10570/*"PURCHASE_AFTER_QP"*/, 0LL);
            if ( v29 )
            {
              v24 = (System_String_o *)Instance;
              v25 = v29;
              goto LABEL_14;
            }
LABEL_58:
            sub_B0D97C(Instance);
          }
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8418/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/, 0LL);
          if ( !v29 )
            goto LABEL_58;
          UILabel__set_text(v29, (System_String_o *)Instance, 0LL);
          decideButtonImg = v6->fields.decideButtonImg;
          v32 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          if ( (BYTE3(ShopBuyItemConfirmMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
            v32 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          }
          ShopBuyItemConfirmMenu__SetSpriteName(
            v32,
            decideButtonImg,
            *(System_String_o **)&v32->fields.bandSprite->fields.m_CachedPtr,
            v30);
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
          v23 = &StringLiteral_10568/*"PURCHASE_AFTER_ITEM_SET"*/;
          goto LABEL_12;
        case 8:
          presentAheadLabel = v6->fields.presentAheadLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v23 = &StringLiteral_10567/*"PURCHASE_AFTER_EVENT_SVT_GET"*/;
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
          v23 = &StringLiteral_10566/*"PURCHASE_AFTER_COSTUME"*/;
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
      v23 = &StringLiteral_10569/*"PURCHASE_AFTER_PRESENT_BOX"*/;
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
  if ( (byte_4218AEB & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19803/*"img_txt_shop"*/, shopEntity);
    this = (ShopBuyItemConfirmMenu_o *)sub_B0D8A4(&StringLiteral_19791/*"img_txt_quest"*/, v6);
    byte_4218AEB = 1;
  }
  if ( !shopEntity )
    sub_B0D97C(this);
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
      v10 = &StringLiteral_19791/*"img_txt_quest"*/;
      goto LABEL_7;
    case 7:
    case 9:
LABEL_5:
      ShopBuyItemConfirmMenu__SetSpriteActive(this, v5->fields.bandSprite, 1, v3);
      bandSprite = v5->fields.bandSprite;
      v10 = &StringLiteral_19803/*"img_txt_shop"*/;
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
  UISprite_o *iconSprite; // x19

  if ( (byte_4218AF1 & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu_o *)sub_B0D8A4(&AtlasManager_TypeInfo, itemIcon);
    byte_4218AF1 = 1;
  }
  if ( !commonConsumeEntity )
    goto LABEL_15;
  if ( CommonConsumeEntity__get_IsItem(commonConsumeEntity, 0LL) )
  {
    this = (ShopBuyItemConfirmMenu_o *)CommonConsumeEntity__GetItemEntity(commonConsumeEntity, 0LL);
    if ( this )
    {
      if ( itemIcon )
      {
        ItemIconComponent__SetItem(itemIcon, (int32_t)this->fields.baseWindow, -1, 0LL);
        return;
      }
LABEL_15:
      sub_B0D97C(this);
    }
  }
  else
  {
    this = (ShopBuyItemConfirmMenu_o *)CommonConsumeEntity__get_IsAp(commonConsumeEntity, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
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
  System_String_o *shopEntity; // x0
  ShopBuyItemConfirmMenu_c *v20; // x0
  int32_t PriceIcon; // w0
  int32_t v22; // w22
  int32_t v23; // w23
  ShopBuyItemConfirmMenu_o *v24; // x0
  const MethodInfo *v25; // x3
  int32_t num; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4218AF0 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, priceDataLabel);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&ShopBuyItemConfirmMenu_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_5656/*"EVENT_ITEM_NEED_INFO"*/, v14);
    byte_4218AF0 = 1;
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
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5656/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
        num = commonConsumeEnt->fields.num;
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
        Name = (Il2CppObject *)CommonConsumeEntity__GetName(commonConsumeEnt, 0LL);
        shopEntity = System_String__Format_43845440(v16, v17, Name, 0LL);
        if ( !priceDataLabel )
          goto LABEL_27;
        UILabel__set_text(priceDataLabel, shopEntity, 0LL);
        v20 = ShopBuyItemConfirmMenu_TypeInfo;
        if ( (BYTE3(ShopBuyItemConfirmMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
          v20 = ShopBuyItemConfirmMenu_TypeInfo;
        }
        UILabel__SetCondensedScale(priceDataLabel, v20->static_fields->PRICE_DATA_LABEL_MAX_WIDTH, 0LL);
        shopEntity = (System_String_o *)this->fields.shopEntity;
        if ( !shopEntity
          || (PriceIcon = ShopEntity__GetPriceIcon((ShopEntity_o *)shopEntity, 0LL),
              v22 = commonConsumeEnt->fields.num,
              v23 = PriceIcon,
              shopEntity = (System_String_o *)CommonConsumeEntity__GetUserHasNum(commonConsumeEnt, 0LL),
              !priceIconLabel) )
        {
LABEL_27:
          sub_B0D97C(shopEntity);
        }
        UIIconLabel__SetPurchaseDecision(priceIconLabel, v23, v22, (int32_t)shopEntity, 0LL);
        ShopBuyItemConfirmMenu__SetCommonConsumeIcon(v24, itemIcon, commonConsumeEnt, v25);
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
  ShopBuyItemConfirmMenu_o *v7; // x19
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
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  v7 = this;
  v19 = buttonSpriteId;
  if ( (byte_4218AF2 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, shopEntity);
    sub_B0D8A4(&EventRewardRootComponent_TypeInfo, v8);
    sub_B0D8A4(&ShopBuyItemConfirmMenu_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v10);
    this = (ShopBuyItemConfirmMenu_o *)sub_B0D8A4(&StringLiteral_17154/*"btn_txt_trade"*/, v11);
    byte_4218AF2 = 1;
  }
  if ( !shopEntity )
    goto LABEL_20;
  if ( shopEntity->fields.payType == 6 )
  {
    if ( !buttonSpriteId )
      goto LABEL_13;
    deceideBtnSprite = v7->fields.deceideBtnSprite;
    v13 = ShopBuyItemConfirmMenu_TypeInfo;
    if ( (BYTE3(ShopBuyItemConfirmMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
      v13 = ShopBuyItemConfirmMenu_TypeInfo;
    }
    VALENTINE_BTN_NAME = v13->static_fields->VALENTINE_BTN_NAME;
    v15 = System_Int32__ToString((int)shopEntity + 24, 0LL);
    v16 = System_Int32__ToString((int32_t)&v19, 0LL);
    v17 = System_String__Concat_43853316(VALENTINE_BTN_NAME, v15, (System_String_o *)StringLiteral_15952/*"_"*/, v16, 0LL);
    if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    }
    if ( !EventRewardRootComponent__setRewardInfoImg(deceideBtnSprite, v17, 0LL) )
    {
LABEL_13:
      v18 = v7->fields.deceideBtnSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetCommon(v18, 0LL);
      this = (ShopBuyItemConfirmMenu_o *)v7->fields.deceideBtnSprite;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17154/*"btn_txt_trade"*/, 0LL);
        this = (ShopBuyItemConfirmMenu_o *)v7->fields.deceideBtnSprite;
        if ( this )
        {
          ((void (__fastcall *)(ShopBuyItemConfirmMenu_o *, const char *))this->klass[2]._1.gc_desc)(
            this,
            this->klass[2]._1.name);
          return;
        }
      }
LABEL_20:
      sub_B0D97C(this);
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
  if ( (byte_4218AEE & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, shopEntity);
    this = (ShopBuyItemConfirmMenu_o *)sub_B0D8A4(&StringLiteral_9363/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/, v7);
    byte_4218AEE = 1;
  }
  if ( !shopEntity )
    sub_B0D97C(this);
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
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9363/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/, 0LL);
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
  ShopBuyItemConfirmMenu_o *v6; // x19
  bool v7; // w1
  int32_t purchaseType; // w8

  v6 = this;
  if ( (byte_4218AE3 & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu_o *)sub_B0D8A4(&StringLiteral_9333/*"NONE"*/, shopEntity);
    byte_4218AE3 = 1;
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
    this = (ShopBuyItemConfirmMenu_o *)v6->fields.infoButton;
    if ( this )
    {
      this = (ShopBuyItemConfirmMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        v7 = 1;
        goto LABEL_21;
      }
    }
LABEL_22:
    sub_B0D97C(this);
  }
  if ( purchaseType == 1 || purchaseType == 4 )
    goto LABEL_18;
LABEL_16:
  if ( !System_String__IsNullOrEmpty(shopEntity->fields.infoMessage, 0LL)
    && System_String__op_Inequality(shopEntity->fields.infoMessage, (System_String_o *)StringLiteral_9333/*"NONE"*/, 0LL) )
  {
    goto LABEL_18;
  }
LABEL_5:
  this = (ShopBuyItemConfirmMenu_o *)v6->fields.infoButton;
  if ( !this )
    goto LABEL_22;
  this = (ShopBuyItemConfirmMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_22;
  v7 = 0;
LABEL_21:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7, 0LL);
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
  sub_B0D840(
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
  UnityEngine_Component_o *gameObject; // x0
  ItemIconComponent_o *itemIcon; // x21
  int32_t purchaseType; // w22
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  UnityEngine_Object_o *v15; // x20
  UnityEngine_GameObject_o *v16; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  int32_t imageId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4218AE4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, shopEntity);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4218AE4 = 1;
  }
  imageId = 0;
  entity = 0LL;
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.chocolateSprite;
    if ( !gameObject )
      goto LABEL_34;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  if ( isInPreparation )
  {
    if ( !shopEntity )
      goto LABEL_34;
    if ( ShopEntity__checkFlag(shopEntity, 2, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( gameObject )
      {
        ItemIconComponent__SetItemImage((ItemIconComponent_o *)gameObject, 8007, 0LL);
        return;
      }
LABEL_34:
      sub_B0D97C(gameObject);
    }
    imageId = 0;
  }
  else
  {
    imageId = 0;
    if ( !shopEntity )
      goto LABEL_34;
  }
  gameObject = (UnityEngine_Component_o *)ShopEntity__CheckEquipItem(shopEntity, &imageId, 0LL);
  itemIcon = this->fields.itemIcon;
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !itemIcon )
      goto LABEL_34;
    ItemIconComponent__SetEquipItemImage(this->fields.itemIcon, imageId, 0LL);
  }
  else
  {
    purchaseType = shopEntity->fields.purchaseType;
    gameObject = (UnityEngine_Component_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
    if ( !itemIcon )
      goto LABEL_34;
    ItemIconComponent__SetPurchase(itemIcon, purchaseType, (int32_t)gameObject, shopEntity->fields.imageId, 0LL);
    gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_34;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)gameObject,
                                                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    gameObject = (UnityEngine_Component_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_34;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           MasterData_WarQuestSelectionMaster,
           &entity,
           (int32_t)gameObject,
           (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      v15 = (UnityEngine_Object_o *)this->fields.chocolateSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.chocolateSprite;
        if ( !gameObject )
          goto LABEL_34;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( !entity )
          goto LABEL_34;
        v16 = (UnityEngine_GameObject_o *)gameObject;
        gameObject = (UnityEngine_Component_o *)ServantEntity__get_IsChocolateSvtEquip((ServantEntity_o *)entity, 0LL);
        if ( !v16 )
          goto LABEL_34;
        UnityEngine_GameObject__SetActive(v16, (unsigned __int8)gameObject & 1, 0LL);
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

  if ( (byte_4218ADF & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, label);
    byte_4218ADF = 1;
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
      sub_B0D97C(gameObject);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


void __fastcall ShopBuyItemConfirmMenu__SetLabelText(
        ShopBuyItemConfirmMenu_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0

  if ( (byte_4218AE0 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, label);
    byte_4218AE0 = 1;
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
      sub_B0D97C(v6);
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
  ShopBuyItemConfirmMenu_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x0
  const MethodInfo *v12; // x3
  UILabel_o *messageLabel; // x19
  UILabel_o *v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x1
  System_String_o *detail; // x20
  System_String_o *v18; // x0
  System_String_o *itemName; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-28h] BYREF

  message = preparationMessage;
  v8 = this;
  if ( (byte_4218AE8 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, shopEntity);
    sub_B0D8A4(&StringLiteral_15708/*"[000000]"*/, v9);
    this = (ShopBuyItemConfirmMenu_o *)sub_B0D8A4(&StringLiteral_15709/*"[000000]？"*/, v10);
    byte_4218AE8 = 1;
  }
  itemName = 0LL;
  if ( !shopEntity )
    sub_B0D97C(this);
  if ( !isInPreparation )
  {
    if ( shopEntity->fields.purchaseType != 14
      || !ShopEntity__IsSoldOut(shopEntity, 0LL)
      || !ShopEntity__TryGetClosedMessage(shopEntity, &message, &itemName, 0LL) )
    {
      messageLabel = v8->fields.messageLabel;
      detail = shopEntity->fields.detail;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v16 = LocalizationManager__ReplaceCommonTag(detail, 0, 0LL);
      v18 = (System_String_o *)StringLiteral_15708/*"[000000]"*/;
      goto LABEL_17;
    }
    messageLabel = v8->fields.messageLabel;
    v16 = message;
LABEL_16:
    v18 = (System_String_o *)StringLiteral_15708/*"[000000]"*/;
LABEL_17:
    v11 = System_String__Concat_43849904(v18, v16, 0LL);
    v14 = messageLabel;
    v15 = v11;
    goto LABEL_18;
  }
  v11 = (System_String_o *)ShopEntity__checkFlag(shopEntity, 8, 0LL);
  messageLabel = v8->fields.messageLabel;
  if ( ((unsigned __int8)v11 & 1) == 0 )
  {
    v16 = preparationMessage;
    goto LABEL_16;
  }
  v14 = messageLabel;
  v15 = (System_String_o *)StringLiteral_15709/*"[000000]？"*/;
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
  System_String_o *IsNullOrEmpty; // x0
  System_String_o *v13; // x1
  struct UICrossNarrowLabel_o *nameTextLabel; // x19

  if ( (byte_4218AE5 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, shopEntity);
    sub_B0D8A4(&StringLiteral_24046/*"？"*/, v11);
    byte_4218AE5 = 1;
  }
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(preparationItemName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    nameTextLabel = this->fields.nameTextLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    IsNullOrEmpty = LocalizationManager__ReplaceCommonTag(preparationItemName, 0, 0LL);
    if ( nameTextLabel )
    {
      v13 = IsNullOrEmpty;
      IsNullOrEmpty = (System_String_o *)nameTextLabel;
      goto LABEL_16;
    }
LABEL_17:
    sub_B0D97C(IsNullOrEmpty);
  }
  if ( !isInPreparation )
    goto LABEL_14;
  if ( !shopEntity )
    goto LABEL_17;
  if ( !ShopEntity__checkFlag(shopEntity, 4, 0LL) )
  {
LABEL_14:
    IsNullOrEmpty = (System_String_o *)this->fields.nameTextLabel;
    if ( IsNullOrEmpty )
    {
      v13 = replacedName;
      goto LABEL_16;
    }
    goto LABEL_17;
  }
  IsNullOrEmpty = (System_String_o *)this->fields.nameTextLabel;
  if ( !IsNullOrEmpty )
    goto LABEL_17;
  v13 = (System_String_o *)StringLiteral_24046/*"？"*/;
LABEL_16:
  UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)IsNullOrEmpty, v13, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__SetNumText(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v6; // x19
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

  v6 = this;
  if ( (byte_4218AED & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, shopEntity);
    this = (ShopBuyItemConfirmMenu_o *)sub_B0D8A4(&StringLiteral_12155/*"SHOP_BUY_ITEM_HOLD"*/, v7);
    byte_4218AED = 1;
  }
  if ( !isInPreparation )
  {
    if ( shopEntity )
      goto LABEL_8;
LABEL_14:
    sub_B0D97C(this);
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
    ShopBuyItemConfirmMenu__SetLabelActive((ShopBuyItemConfirmMenu_o *)v8, v6->fields.numTitleLabel, 0, v9);
    ShopBuyItemConfirmMenu__SetLabelActive(v19, v6->fields.numTextLabel, 0, v20);
    return;
  }
  ShopBuyItemConfirmMenu__SetLabelActive((ShopBuyItemConfirmMenu_o *)v8, v6->fields.numTitleLabel, 1, v9);
  numTitleLabel = v6->fields.numTitleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12155/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)v11, numTitleLabel, v11, v12);
  ShopBuyItemConfirmMenu__SetLabelActive(v13, v6->fields.numTextLabel, 1, v14);
  numTextLabel = v6->fields.numTextLabel;
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
  __int64 eventItemIcon; // x0
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x5
  __int64 v27; // x21
  const MethodInfo *v28; // x1
  unsigned __int64 i; // x23
  struct System_Int32_array *itemIds; // x8
  __int64 v31; // x24
  struct UILabel_array *priceDataLabels; // x8
  struct UIIconLabel_array *priceIconLabels; // x8
  struct UILabel_array *v34; // x8
  struct ItemIconComponent_array *eventItemIcons; // x8
  struct UILabel_array *v36; // x8
  UILabel_o *v37; // x25
  System_String_o *v38; // x26
  struct UIIconLabel_array *v39; // x8
  UIIconLabel_o *v40; // x25
  int32_t v41; // w26
  struct UILabel_o *priceDataLabel; // x22
  __int64 *v43; // x8
  System_String_o *v44; // x0
  System_String_o *v45; // x1
  UILabel_o *v46; // x0
  struct System_Int32_array *v47; // x8
  WarEntity_o *v48; // x0
  UILabel_o *v49; // x23
  WarEntity_o *v50; // x22
  __int64 *v51; // x8
  struct System_Int32_array *v52; // x8
  WarEntity_o *v53; // x0
  UIIconLabel_o *v54; // x23
  int32_t v55; // w24
  struct System_Int32_array *v56; // x8
  UIIconLabel_o *v57; // x19
  int32_t v58; // w22
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  __int64 v60; // x9
  UILabel_o *v61; // x23
  UIIconLabel_o *v62; // x23
  int32_t v63; // w24
  int32_t Price; // w21
  double v65; // d0
  int v66; // w21
  UILabel_o *priceFreeDataLabel; // x19
  _BOOL8 IsSetStrikethrough; // x0
  const MethodInfo *v69; // x3
  __int64 v70; // x8
  __int64 v71; // x8
  __int64 v72; // x9
  __int64 v73; // x10
  __int64 j; // x20
  struct UILabel_array *v75; // x11
  unsigned __int64 max_length; // x12
  unsigned __int64 v77; // x10
  UILabel_o *v78; // x1
  struct UIIconLabel_array *v79; // x11
  unsigned __int64 v80; // x12
  UIIconLabel_o *v81; // x2
  struct ItemIconComponent_array *v82; // x11
  unsigned __int64 v83; // x12
  ItemIconComponent_o *v84; // x3
  __int64 v85; // x10
  int32_t v86; // w23
  WarEntity_o *Entity; // x23
  UILabel_o *v88; // x22
  System_String_o *v89; // x24
  UILabel_o *v90; // x22
  UIIconLabel_o *priceIconLabel; // x22
  int32_t PriceIcon; // w24
  __int64 v93; // x0
  int32_t v94; // [xsp+8h] [xbp-58h] BYREF
  int32_t Prices; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4218AEF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_B0D8A4(&int_TypeInfo, v10);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&System_Math_TypeInfo, v12);
    sub_B0D8A4(&ShopBuyItemConfirmMenu_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&StringLiteral_12415/*"STONE_FRAGMENTS_NEED_INFO"*/, v15);
    sub_B0D8A4(&StringLiteral_1687/*"ANONYMOUS_NEED_INFO"*/, v16);
    sub_B0D8A4(&StringLiteral_12421/*"STONE_NEED_INFO"*/, v17);
    sub_B0D8A4(&StringLiteral_10907/*"QP_NAME"*/, v18);
    sub_B0D8A4(&StringLiteral_11039/*"RARE_PRI_NEED_INFO"*/, v19);
    sub_B0D8A4(&StringLiteral_1530/*"?"*/, v20);
    sub_B0D8A4(&StringLiteral_5656/*"EVENT_ITEM_NEED_INFO"*/, v21);
    sub_B0D8A4(&StringLiteral_8642/*"MANA_NEED_INFO"*/, v22);
    sub_B0D8A4(&StringLiteral_12179/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, v23);
    byte_4218AEF = 1;
  }
  eventItemIcon = (__int64)this->fields.eventItemIcon;
  if ( !eventItemIcon )
    goto LABEL_191;
  ItemIconComponent__Clear((ItemIconComponent_o *)eventItemIcon, 0LL);
  eventItemIcon = (__int64)ShopBuyItemConfirmMenu__GetUserItemCounts(this, v25);
  if ( !shopEntity )
    goto LABEL_191;
  v27 = eventItemIcon;
  switch ( shopEntity->fields.payType )
  {
    case 1:
      priceDataLabel = this->fields.priceDataLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v43 = &StringLiteral_12421/*"STONE_NEED_INFO"*/;
      goto LABEL_54;
    case 2:
      priceDataLabel = this->fields.priceDataLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v43 = &StringLiteral_10907/*"QP_NAME"*/;
LABEL_54:
      v44 = (System_String_o *)*v43;
      goto LABEL_59;
    case 4:
      priceDataLabel = this->fields.priceDataLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v44 = (System_String_o *)StringLiteral_8642/*"MANA_NEED_INFO"*/;
LABEL_59:
      eventItemIcon = (__int64)LocalizationManager__Get(v44, 0LL);
      if ( !priceDataLabel )
        goto LABEL_191;
      v45 = (System_String_o *)eventItemIcon;
      v46 = priceDataLabel;
      goto LABEL_91;
    case 6:
    case 0xB:
      if ( ShopEntity__GetItemCount(shopEntity, 0LL) < 2 )
      {
        if ( isNotHavingShopItemReceived )
          return;
        if ( ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v28) )
        {
          eventItemIcon = (__int64)ShopEntity__GetAnotherPayItemIds(shopEntity, 0LL);
          if ( !eventItemIcon )
            goto LABEL_191;
        }
        else
        {
          eventItemIcon = (__int64)shopEntity->fields.itemIds;
          if ( !eventItemIcon )
            goto LABEL_191;
        }
        if ( *(_DWORD *)(eventItemIcon + 24) )
        {
          v86 = *(_DWORD *)(eventItemIcon + 32);
          eventItemIcon = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !eventItemIcon )
            goto LABEL_191;
          eventItemIcon = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)eventItemIcon,
                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !eventItemIcon )
            goto LABEL_191;
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)eventItemIcon,
                     v86,
                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( isInPreparation )
          {
            if ( ShopEntity__checkFlag(shopEntity, 64, 0LL) )
            {
              eventItemIcon = (__int64)this->fields.priceDataLabel;
              if ( eventItemIcon )
              {
                UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1530/*"?"*/, 0LL);
                eventItemIcon = (__int64)this->fields.priceIconLabel;
                if ( eventItemIcon )
                {
                  UIIconLabel__SetEventQuestion((UIIconLabel_o *)eventItemIcon, 0LL);
                  return;
                }
              }
              goto LABEL_191;
            }
            if ( ShopEntity__checkFlag(shopEntity, 32, 0LL) )
            {
              eventItemIcon = (__int64)this->fields.priceDataLabel;
              if ( eventItemIcon )
              {
                UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1530/*"?"*/, 0LL);
                eventItemIcon = (__int64)this->fields.eventItemIcon;
                if ( eventItemIcon )
                {
                  ItemIconComponent__SetItemImage((ItemIconComponent_o *)eventItemIcon, 8007, 0LL);
                  return;
                }
              }
              goto LABEL_191;
            }
          }
          v88 = this->fields.priceDataLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v89 = LocalizationManager__Get((System_String_o *)StringLiteral_5656/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
          Prices = ShopEntity__GetPrices(shopEntity, 0, 0LL);
          eventItemIcon = j_il2cpp_value_box_0(int_TypeInfo, &Prices);
          if ( !Entity )
            goto LABEL_191;
          eventItemIcon = (__int64)System_String__Format_43845440(
                                     v89,
                                     (Il2CppObject *)eventItemIcon,
                                     (Il2CppObject *)Entity->fields.age,
                                     0LL);
          if ( !v88 )
            goto LABEL_191;
          UILabel__set_text(v88, (System_String_o *)eventItemIcon, 0LL);
          v90 = this->fields.priceDataLabel;
          eventItemIcon = (__int64)ShopBuyItemConfirmMenu_TypeInfo;
          if ( (BYTE3(ShopBuyItemConfirmMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
          }
          if ( !v90 )
            goto LABEL_191;
          UILabel__SetCondensedScale(
            v90,
            ShopBuyItemConfirmMenu_TypeInfo->static_fields->PRICE_DATA_LABEL_MAX_WIDTH,
            0LL);
          priceIconLabel = this->fields.priceIconLabel;
          PriceIcon = ShopEntity__GetPriceIcon(shopEntity, 0LL);
          eventItemIcon = ShopEntity__GetPrices(shopEntity, 0, 0LL);
          if ( !v27 )
            goto LABEL_191;
          if ( *(_DWORD *)(v27 + 24) )
          {
            if ( priceIconLabel )
            {
              UIIconLabel__SetPurchaseDecision(priceIconLabel, PriceIcon, eventItemIcon, *(_DWORD *)(v27 + 32), 0LL);
              eventItemIcon = (__int64)this->fields.eventItemIcon;
              if ( eventItemIcon )
              {
                ItemIconComponent__SetItem(
                  (ItemIconComponent_o *)eventItemIcon,
                  (int32_t)Entity->fields.longName,
                  -1,
                  0LL);
                return;
              }
            }
LABEL_191:
            sub_B0D97C(eventItemIcon);
          }
        }
LABEL_192:
        v93 = sub_B0D9A8(eventItemIcon);
        sub_B0D948(v93, 0LL);
      }
      if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 1 )
      {
        for ( i = 0LL; (__int64)i < ShopEntity__GetItemCount(shopEntity, 0LL); ++i )
        {
          eventItemIcon = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !eventItemIcon )
            goto LABEL_191;
          eventItemIcon = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)eventItemIcon,
                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
          itemIds = shopEntity->fields.itemIds;
          if ( !itemIds )
            goto LABEL_191;
          if ( i >= itemIds->max_length )
            goto LABEL_192;
          if ( !eventItemIcon )
            goto LABEL_191;
          eventItemIcon = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)eventItemIcon,
                                     itemIds->m_Items[i + 1],
                                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          v31 = eventItemIcon;
          if ( !isInPreparation )
            goto LABEL_30;
          eventItemIcon = ShopEntity__checkFlag(shopEntity, 64, 0LL);
          if ( (eventItemIcon & 1) != 0 )
          {
            priceDataLabels = this->fields.priceDataLabels;
            if ( !priceDataLabels )
              goto LABEL_191;
            if ( i >= priceDataLabels->max_length )
              goto LABEL_192;
            eventItemIcon = (__int64)priceDataLabels->m_Items[i];
            if ( !eventItemIcon )
              goto LABEL_191;
            UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1530/*"?"*/, 0LL);
            priceIconLabels = this->fields.priceIconLabels;
            if ( !priceIconLabels )
              goto LABEL_191;
            if ( i >= priceIconLabels->max_length )
              goto LABEL_192;
            eventItemIcon = (__int64)priceIconLabels->m_Items[i];
            if ( !eventItemIcon )
              goto LABEL_191;
            UIIconLabel__SetEventQuestion((UIIconLabel_o *)eventItemIcon, 0LL);
            continue;
          }
          eventItemIcon = ShopEntity__checkFlag(shopEntity, 32, 0LL);
          if ( (eventItemIcon & 1) != 0 )
          {
            v34 = this->fields.priceDataLabels;
            if ( !v34 )
              goto LABEL_191;
            if ( i >= v34->max_length )
              goto LABEL_192;
            eventItemIcon = (__int64)v34->m_Items[i];
            if ( !eventItemIcon )
              goto LABEL_191;
            UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1530/*"?"*/, 0LL);
            eventItemIcons = this->fields.eventItemIcons;
            if ( !eventItemIcons )
              goto LABEL_191;
            if ( i >= eventItemIcons->max_length )
              goto LABEL_192;
            eventItemIcon = (__int64)eventItemIcons->m_Items[i];
            if ( !eventItemIcon )
              goto LABEL_191;
            ItemIconComponent__SetItemImage((ItemIconComponent_o *)eventItemIcon, 8007, 0LL);
          }
          else
          {
LABEL_30:
            v36 = this->fields.priceDataLabels;
            if ( !v36 )
              goto LABEL_191;
            if ( i >= v36->max_length )
              goto LABEL_192;
            v37 = v36->m_Items[i];
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v38 = LocalizationManager__Get((System_String_o *)StringLiteral_5656/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
            v94 = ShopEntity__GetPrices(shopEntity, i, 0LL);
            eventItemIcon = j_il2cpp_value_box_0(int_TypeInfo, &v94);
            if ( !v31 )
              goto LABEL_191;
            eventItemIcon = (__int64)System_String__Format_43845440(
                                       v38,
                                       (Il2CppObject *)eventItemIcon,
                                       *(Il2CppObject **)(v31 + 24),
                                       0LL);
            if ( !v37 )
              goto LABEL_191;
            UILabel__set_text(v37, (System_String_o *)eventItemIcon, 0LL);
            v39 = this->fields.priceIconLabels;
            if ( !v39 )
              goto LABEL_191;
            if ( i >= v39->max_length )
              goto LABEL_192;
            v40 = v39->m_Items[i];
            v41 = ShopEntity__GetPriceIcon(shopEntity, 0LL);
            eventItemIcon = ShopEntity__GetPrices(shopEntity, i, 0LL);
            if ( !v27 )
              goto LABEL_191;
            if ( i >= *(unsigned int *)(v27 + 24) )
              goto LABEL_192;
            if ( !v40 )
              goto LABEL_191;
            UIIconLabel__SetPurchaseDecision(v40, v41, eventItemIcon, *(_DWORD *)(v27 + 32 + 4 * i), 0LL);
            eventItemIcon = (__int64)this->fields.eventItemIcon;
            if ( !eventItemIcon )
              goto LABEL_191;
            ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, *(_DWORD *)(v31 + 40), -1, 0LL);
          }
        }
      }
      return;
    case 8:
      eventItemIcon = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_191;
      eventItemIcon = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
      v47 = shopEntity->fields.itemIds;
      if ( !v47 )
        goto LABEL_191;
      if ( !v47->max_length )
        goto LABEL_192;
      if ( !eventItemIcon )
        goto LABEL_191;
      v48 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)eventItemIcon,
              v47->m_Items[1],
              (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v49 = this->fields.priceDataLabel;
      v50 = v48;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v51 = &StringLiteral_12415/*"STONE_FRAGMENTS_NEED_INFO"*/;
      goto LABEL_77;
    case 9:
      eventItemIcon = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_191;
      eventItemIcon = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
      v52 = shopEntity->fields.itemIds;
      if ( !v52 )
        goto LABEL_191;
      if ( !v52->max_length )
        goto LABEL_192;
      if ( !eventItemIcon )
        goto LABEL_191;
      v53 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)eventItemIcon,
              v52->m_Items[1],
              (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v49 = this->fields.priceDataLabel;
      v50 = v53;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v51 = &StringLiteral_1687/*"ANONYMOUS_NEED_INFO"*/;
LABEL_77:
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)*v51, 0LL);
      if ( !v49 )
        goto LABEL_191;
      UILabel__set_text(v49, (System_String_o *)eventItemIcon, 0LL);
      v54 = this->fields.priceIconLabel;
      v55 = ShopEntity__GetPriceIcon(shopEntity, 0LL);
      eventItemIcon = ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !v27 )
        goto LABEL_191;
      if ( !*(_DWORD *)(v27 + 24) )
        goto LABEL_192;
      if ( !v54 )
        goto LABEL_191;
      UIIconLabel__SetPurchaseDecision(v54, v55, eventItemIcon, *(_DWORD *)(v27 + 32), 0LL);
      if ( !v50 )
        goto LABEL_191;
      eventItemIcon = (__int64)this->fields.eventItemIcon;
      if ( !eventItemIcon )
        goto LABEL_191;
      ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, (int32_t)v50->fields.longName, -1, 0LL);
      return;
    case 0xA:
      v61 = this->fields.priceDataLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11039/*"RARE_PRI_NEED_INFO"*/, 0LL);
      if ( !v61 )
        goto LABEL_191;
      UILabel__set_text(v61, (System_String_o *)eventItemIcon, 0LL);
      v62 = this->fields.priceIconLabel;
      v63 = ShopEntity__GetPriceIcon(shopEntity, 0LL);
      eventItemIcon = ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !v27 )
        goto LABEL_191;
      if ( !*(_DWORD *)(v27 + 24) )
        goto LABEL_192;
      if ( !v62 )
        goto LABEL_191;
      UIIconLabel__SetPurchaseDecision(v62, v63, eventItemIcon, *(_DWORD *)(v27 + 32), 0LL);
      if ( ShopEntity__GetPrice(shopEntity, 0LL) )
      {
        Price = ShopEntity__GetPrice(shopEntity, 0LL);
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        v65 = log10((double)Price);
        if ( v65 == INFINITY )
          v65 = -v65;
        v66 = (int)v65 + 1;
      }
      else
      {
        v66 = 1;
      }
      IsSetStrikethrough = ShopEntity__IsSetStrikethrough(shopEntity, isInPreparation, 0LL);
      if ( IsSetStrikethrough )
      {
        v70 = 344LL;
        if ( v66 == 1 )
          v70 = 336LL;
        ShopBuyItemConfirmMenu__SetLabelActive(
          (ShopBuyItemConfirmMenu_o *)IsSetStrikethrough,
          *(UILabel_o **)((char *)&this->klass + v70),
          1,
          v69);
      }
      if ( !ShopEntity__IsAfterTheFreeShopReleaseDate(shopEntity, 0LL)
        || !ShopEntity__IsFulFilledFreeExchangeCondition(shopEntity, 0LL) )
      {
        return;
      }
      eventItemIcon = (__int64)this->fields.freeLabel;
      if ( !eventItemIcon )
        goto LABEL_191;
      eventItemIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventItemIcon, 0LL);
      if ( !eventItemIcon )
        goto LABEL_191;
      eventItemIcon = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)eventItemIcon, 0LL);
      if ( !eventItemIcon )
        goto LABEL_191;
      v71 = 376LL;
      if ( v66 == 1 )
        v71 = 364LL;
      v72 = v66 == 1 ? 360LL : 372LL;
      v73 = v66 == 1 ? 356LL : 368LL;
      v96.fields.y = *(float *)((char *)&this->klass + v72);
      v96.fields.x = *(float *)((char *)&this->klass + v73);
      v96.fields.z = *(float *)((char *)&this->klass + v71);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventItemIcon, v96, 0LL);
      eventItemIcon = (__int64)this->fields.freeLabel;
      if ( !eventItemIcon )
        goto LABEL_191;
      eventItemIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventItemIcon, 0LL);
      if ( !eventItemIcon )
        goto LABEL_191;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventItemIcon, 1, 0LL);
      return;
    case 0xC:
      eventItemIcon = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_191;
      eventItemIcon = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
      v56 = shopEntity->fields.itemIds;
      if ( !v56 )
        goto LABEL_191;
      if ( !v56->max_length )
        goto LABEL_192;
      if ( !eventItemIcon )
        goto LABEL_191;
      eventItemIcon = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)eventItemIcon,
                                 v56->m_Items[1],
                                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !eventItemIcon || !this->fields.priceDataLabel )
        goto LABEL_191;
      v45 = *(System_String_o **)(eventItemIcon + 24);
      v46 = this->fields.priceDataLabel;
LABEL_91:
      UILabel__set_text(v46, v45, 0LL);
      v57 = this->fields.priceIconLabel;
      v58 = ShopEntity__GetPriceIcon(shopEntity, 0LL);
      eventItemIcon = ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !v27 )
        goto LABEL_191;
      if ( !*(_DWORD *)(v27 + 24) )
        goto LABEL_192;
      if ( !v57 )
        goto LABEL_191;
      UIIconLabel__SetPurchaseDecision(v57, v58, eventItemIcon, *(_DWORD *)(v27 + 32), 0LL);
      return;
    case 0xD:
      priceFreeDataLabel = this->fields.priceFreeDataLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12179/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, 0LL);
      if ( !priceFreeDataLabel )
        goto LABEL_191;
      UILabel__set_text(priceFreeDataLabel, (System_String_o *)eventItemIcon, 0LL);
      return;
    case 0xE:
      commonConsumeEntities = this->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        return;
      v60 = *(_QWORD *)&commonConsumeEntities->max_length;
      if ( (_DWORD)v60 == 1 )
      {
        ShopBuyItemConfirmMenu__SetCommonConsumePriceText(
          this,
          this->fields.priceDataLabel,
          this->fields.priceIconLabel,
          this->fields.eventItemIcon,
          commonConsumeEntities->m_Items[0],
          v26);
        return;
      }
      if ( (int)v60 < 2 )
        return;
      for ( j = 4LL; ; ++j )
      {
        v75 = this->fields.priceDataLabels;
        if ( !v75 )
          break;
        max_length = v75->max_length;
        v77 = j - 4;
        if ( j - 4 >= (int)max_length )
        {
          v78 = 0LL;
        }
        else
        {
          if ( v77 >= max_length )
            goto LABEL_192;
          v78 = (UILabel_o *)*((_QWORD *)&v75->obj.klass + j);
        }
        v79 = this->fields.priceIconLabels;
        if ( !v79 )
          break;
        v80 = v79->max_length;
        if ( (__int64)v77 >= (int)v80 )
        {
          v81 = 0LL;
        }
        else
        {
          if ( v77 >= v80 )
            goto LABEL_192;
          v81 = (UIIconLabel_o *)*((_QWORD *)&v79->obj.klass + j);
        }
        v82 = this->fields.eventItemIcons;
        if ( !v82 )
          break;
        v83 = v82->max_length;
        if ( (__int64)v77 >= (int)v83 )
        {
          v84 = 0LL;
        }
        else
        {
          if ( v77 >= v83 )
            goto LABEL_192;
          v84 = (ItemIconComponent_o *)*((_QWORD *)&v82->obj.klass + j);
        }
        if ( v77 >= (unsigned int)v60 )
          goto LABEL_192;
        ShopBuyItemConfirmMenu__SetCommonConsumePriceText(
          this,
          v78,
          v81,
          v84,
          *((CommonConsumeEntity_o **)&commonConsumeEntities->obj.klass + j),
          v26);
        commonConsumeEntities = this->fields.commonConsumeEntities;
        if ( !commonConsumeEntities )
          goto LABEL_191;
        LODWORD(v60) = commonConsumeEntities->max_length;
        v85 = j - 3;
        if ( v85 >= (int)v60 )
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
  __int64 v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x4

  v6 = isNotHavingShopItemReceived;
  ShopBuyItemConfirmMenu__SetPriceInfoActive(
    this,
    shopEntity,
    isNotHavingShopItemReceived,
    *(const MethodInfo **)&buttonSpriteId);
  ShopBuyItemConfirmMenu__SetPriceDataText(this, shopEntity, isInPreparation, v6, v11);
  if ( !shopEntity )
    sub_B0D97C(v12);
  ShopBuyItemConfirmMenu__SetDecideButtonSprite(this, shopEntity, v13, buttonSpriteId, v14);
}


void __fastcall ShopBuyItemConfirmMenu__SetPriceInfoActive(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isNotHavingShopItemReceived,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v4; // x19
  char v5; // w1
  char v6; // w1
  int v8; // w21
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  struct CommonConsumeEntity_array *v10; // x8

  if ( !shopEntity )
    goto LABEL_26;
  v4 = this;
  switch ( shopEntity->fields.payType )
  {
    case 1:
    case 4:
    case 8:
    case 9:
    case 0xA:
      this = (ShopBuyItemConfirmMenu_o *)this->fields.priceInfoFree;
      if ( !this )
        goto LABEL_26;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (ShopBuyItemConfirmMenu_o *)v4->fields.priceInfo1;
      if ( !this )
        goto LABEL_26;
      v5 = 1;
      goto LABEL_6;
    case 6:
    case 0xB:
      this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetItemCount(shopEntity, 0LL);
      if ( !v4->fields.priceInfoFree )
        goto LABEL_26;
      v8 = (int)this;
      UnityEngine_GameObject__SetActive(v4->fields.priceInfoFree, 0, 0LL);
      this = (ShopBuyItemConfirmMenu_o *)v4->fields.priceInfo1;
      if ( !this )
        goto LABEL_26;
      if ( v8 > 1 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (ShopBuyItemConfirmMenu_o *)v4->fields.priceInfo2;
        if ( this )
        {
          v6 = 1;
          goto LABEL_8;
        }
LABEL_26:
        sub_B0D97C(this);
      }
      v5 = !isNotHavingShopItemReceived;
LABEL_6:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v5, 0LL);
      this = (ShopBuyItemConfirmMenu_o *)v4->fields.priceInfo2;
      if ( !this )
        goto LABEL_26;
      v6 = 0;
LABEL_8:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v6, 0LL);
      return;
    case 0xD:
      this = (ShopBuyItemConfirmMenu_o *)this->fields.priceInfoFree;
      if ( !this )
        goto LABEL_26;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (ShopBuyItemConfirmMenu_o *)v4->fields.priceInfo1;
      if ( !this )
        goto LABEL_26;
      v5 = 0;
      goto LABEL_6;
    case 0xE:
      if ( !this->fields.commonConsumeEntities )
        return;
      this = (ShopBuyItemConfirmMenu_o *)this->fields.priceInfoFree;
      if ( !this )
        goto LABEL_26;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      commonConsumeEntities = v4->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        goto LABEL_26;
      this = (ShopBuyItemConfirmMenu_o *)v4->fields.priceInfo1;
      if ( !this )
        goto LABEL_26;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, commonConsumeEntities->max_length == 1, 0LL);
      v10 = v4->fields.commonConsumeEntities;
      if ( !v10 )
        goto LABEL_26;
      this = (ShopBuyItemConfirmMenu_o *)v4->fields.priceInfo2;
      if ( !this )
        goto LABEL_26;
      v6 = (signed int)v10->max_length > 1;
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

  if ( (byte_4218AE1 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, sprite);
    byte_4218AE1 = 1;
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
      sub_B0D97C(gameObject);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


void __fastcall ShopBuyItemConfirmMenu__SetSpriteName(
        ShopBuyItemConfirmMenu_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0

  if ( (byte_4218AE2 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, sprite);
    byte_4218AE2 = 1;
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
      sub_B0D97C(v6);
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
  __int64 v16; // x1
  __int64 v17; // x1
  ShopReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  ShopReleaseMaster_o *v19; // x22
  _BOOL4 isExistCondType; // w23
  _BOOL4 v21; // w24
  _BOOL4 v22; // w25
  _BOOL4 v23; // w27
  System_String_o *IsServant; // x0
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x3
  char v27; // w26
  struct UILabel_o *v28; // x19
  __int64 *v29; // x8
  struct System_Int32_array *targetIds; // x8
  __int64 *v31; // x8
  UILabel_o *textOnMask; // x1
  System_String_o *v33; // x2
  UILabel_o *v34; // x19
  unsigned int shopType; // w8
  __int64 v36; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4218AEC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, shopEntity);
    sub_B0D8A4(&Method_DataManager_GetMaster_ShopReleaseMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&StringLiteral_12175/*"SHOP_CANT_BUY"*/, v12);
    sub_B0D8A4(&StringLiteral_12212/*"SHOP_QUEST_OPEN"*/, v13);
    sub_B0D8A4(&StringLiteral_12210/*"SHOP_QUEST_ALREADY_CLEARED"*/, v14);
    sub_B0D8A4(&StringLiteral_12208/*"SHOP_NOT_RELEASE_SET_ITEM"*/, v15);
    sub_B0D8A4(&StringLiteral_1/*""*/, v16);
    sub_B0D8A4(&StringLiteral_12127/*"SHOP_ALREADY_GET"*/, v17);
    byte_4218AEC = 1;
  }
  questId = 0;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  if ( !shopEntity )
    goto LABEL_74;
  v19 = Master_WarQuestSelectionMaster;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_74;
  isExistCondType = ShopReleaseMaster__isExistCondType(Master_WarQuestSelectionMaster, shopEntity->fields.id, 38, 0LL);
  v21 = ShopReleaseMaster__isExistCondType(v19, shopEntity->fields.id, 41, 0LL);
  v22 = ShopReleaseMaster__isExistCondType(v19, shopEntity->fields.id, 40, 0LL);
  v23 = ShopReleaseMaster__isExistCondType(v19, shopEntity->fields.id, 78, 0LL)
     || ShopReleaseMaster__isExistCondType(v19, shopEntity->fields.id, 79, 0LL);
  IsServant = (System_String_o *)ShopReleaseMaster__isExistCondType(v19, shopEntity->fields.id, 108, 0LL);
  v27 = (char)IsServant;
  switch ( shopEntity->fields.purchaseType )
  {
    case 4:
      Master_WarQuestSelectionMaster = (ShopReleaseMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_74;
      Master_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Master_WarQuestSelectionMaster,
                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
      targetIds = shopEntity->fields.targetIds;
      if ( !targetIds )
        goto LABEL_74;
      if ( !targetIds->max_length )
      {
        v36 = sub_B0D9A8(Master_WarQuestSelectionMaster);
        sub_B0D948(v36, 0LL);
      }
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_74;
      IsServant = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                       &entity,
                                       targetIds->m_Items[1],
                                       (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_64;
      if ( isInPreparation )
      {
        Master_WarQuestSelectionMaster = (ShopReleaseMaster_o *)entity;
        if ( entity )
        {
          IsServant = (System_String_o *)ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL);
          if ( ((unsigned __int8)IsServant & 1) != 0 && this->fields.shopKind != 6 )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v31 = &StringLiteral_12175/*"SHOP_CANT_BUY"*/;
            goto LABEL_71;
          }
          if ( (isExistCondType || v21 || v22 || v23) | v27 & 1 )
          {
            IsServant = (System_String_o *)ShopReleaseMaster__CondClearCheck(v19, shopEntity->fields.id, 40, 0LL);
            if ( ((unsigned __int8)IsServant & 1) == 0 )
            {
              v33 = (System_String_o *)StringLiteral_1/*""*/;
              goto LABEL_73;
            }
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v31 = &StringLiteral_12127/*"SHOP_ALREADY_GET"*/;
LABEL_71:
            IsServant = LocalizationManager__Get((System_String_o *)*v31, 0LL);
            v33 = IsServant;
LABEL_73:
            textOnMask = this->fields.textOnMask;
            goto LABEL_65;
          }
          goto LABEL_64;
        }
LABEL_74:
        sub_B0D97C(Master_WarQuestSelectionMaster);
      }
      shopType = shopEntity->fields.shopType;
      if ( shopType > 0x10 || ((1 << shopType) & 0x1000C) == 0 )
        goto LABEL_64;
      Master_WarQuestSelectionMaster = (ShopReleaseMaster_o *)entity;
      if ( !entity )
        goto LABEL_74;
      IsServant = (System_String_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_64;
      IsServant = (System_String_o *)ShopBuyItemConfirmMenu__GetIsShowMask(
                                       (ShopBuyItemConfirmMenu_o *)IsServant,
                                       this->fields.shopEntity,
                                       0,
                                       v26);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_64;
      IsServant = (System_String_o *)ShopEntity__IsAnotherItemBuyable(shopEntity, 0LL);
      if ( ((unsigned __int8)IsServant & 1) != 0 )
        goto LABEL_64;
LABEL_13:
      v28 = this->fields.textOnMask;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v29 = &StringLiteral_12127/*"SHOP_ALREADY_GET"*/;
      goto LABEL_51;
    case 5:
      IsServant = (System_String_o *)ShopBuyItemConfirmMenu__GetIsSetItemEventShop(
                                       (ShopBuyItemConfirmMenu_o *)IsServant,
                                       shopEntity->fields.targetIds,
                                       v25);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_41;
      if ( !isInPreparation )
        goto LABEL_64;
      v28 = this->fields.textOnMask;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v29 = &StringLiteral_12208/*"SHOP_NOT_RELEASE_SET_ITEM"*/;
      goto LABEL_51;
    case 6:
      if ( !isInPreparation )
      {
        if ( ShopEntity__isQuestNotClear(shopEntity, &questId, 0, 0LL) )
        {
          IsServant = (System_String_o *)ShopEntity__isQuestNotClearItemClosedSub(shopEntity, questId, 0, 0LL);
          if ( ((unsigned __int8)IsServant & 1) != 0 )
            goto LABEL_47;
        }
        else
        {
          IsServant = (System_String_o *)ShopEntity__isExpireItemClosed(shopEntity, 0LL);
          if ( ((unsigned __int8)IsServant & 1) != 0 )
          {
            v34 = this->fields.textOnMask;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (ShopReleaseMaster_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_12212/*"SHOP_QUEST_OPEN"*/,
                                                                      0LL);
            if ( v34 )
            {
              UILabel__set_text(v34, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
              return;
            }
            goto LABEL_74;
          }
        }
LABEL_64:
        textOnMask = this->fields.textOnMask;
        v33 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_65;
      }
      IsServant = (System_String_o *)ShopEntity__isQuestNotClearItemClosed(shopEntity, 0, 0LL);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_64;
LABEL_47:
      v28 = this->fields.textOnMask;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v29 = &StringLiteral_12210/*"SHOP_QUEST_ALREADY_CLEARED"*/;
LABEL_51:
      IsServant = LocalizationManager__Get((System_String_o *)*v29, 0LL);
      textOnMask = v28;
      v33 = IsServant;
LABEL_65:
      ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)IsServant, textOnMask, v33, v26);
      return;
    case 7:
    case 9:
      if ( isInPreparation )
        goto LABEL_13;
      goto LABEL_64;
    default:
LABEL_41:
      if ( !isInPreparation )
        goto LABEL_64;
      if ( !((isExistCondType || v21 || v23) | v27 & 1) )
        goto LABEL_64;
      IsServant = (System_String_o *)ShopReleaseMaster__CondClearCheck(v19, shopEntity->fields.id, 1, 0LL);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_64;
      goto LABEL_13;
  }
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
  int64_t Price; // x0
  ShopBuyItemConfirmMenu_o *v40; // x0
  const MethodInfo *v41; // x3
  UILabel_o *v42; // x19
  __int64 *v43; // x8
  const MethodInfo *v44; // x1
  System_Int32_array *UserItemCounts; // x22
  __int64 v46; // x21
  System_String_o *v47; // x0
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x1
  struct ShopEntity_o *v50; // x8
  __int64 *v51; // x8
  UILabel_o *v52; // x21
  System_String_o *v53; // x22
  Il2CppObject *v54; // x0
  System_String_o *v55; // x0
  const MethodInfo *v56; // x3
  __int64 *v57; // x8
  System_String_o *v58; // x20
  struct ShopEntity_o *v59; // x8
  struct System_Int32_array *itemIds; // x8
  Il2CppObject *age; // x1
  BalanceConfig_c *v62; // x8
  int v63; // w22
  UILabel_o *v64; // x22
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  __int64 v66; // x9
  CommonConsumeEntity_o *v67; // x21
  int32_t num; // w22
  int32_t v69; // w19
  struct System_String_o *Empty; // x22
  int v71; // w26
  Il2CppClass **v72; // x8
  CommonConsumeEntity_o *v73; // x23
  int v74; // w28
  Il2CppObject *Name; // x0
  System_String_o *v76; // x0
  int m_stringLength; // w8
  System_String_o *v78; // x0
  Il2CppObject *v79; // x20
  int32_t purchaseType; // w8
  int32_t v81; // w19
  int32_t v82; // w20
  BalanceConfig_c *v83; // x0
  int32_t PresentBoxMax; // w8
  UILabel_o *v85; // x19
  __int64 *v86; // x8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x19
  int32_t Sum; // w0
  BalanceConfig_c *v89; // x8
  int32_t v90; // w19
  int32_t UserItemMax; // w9
  int v92; // w20
  __int64 v93; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  int32_t recordNum; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t buyQuestNum[2]; // [xsp+18h] [xbp-68h] BYREF
  int32_t buyServantEquipNum[2]; // [xsp+20h] [xbp-60h] BYREF
  __int64 buyItemNum; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4218AE9 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, shopEntity);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v13);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v14);
    sub_B0D8A4(&NetworkManager_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&string_TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_12160/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/, v18);
    sub_B0D8A4(&StringLiteral_12152/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/, v19);
    sub_B0D8A4(&StringLiteral_12161/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/, v20);
    sub_B0D8A4(&StringLiteral_12163/*"SHOP_BUY_RARE_PRI_CONFIRM_WARNING"*/, v21);
    sub_B0D8A4(&StringLiteral_12157/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/, v22);
    sub_B0D8A4(&StringLiteral_10907/*"QP_NAME"*/, v23);
    sub_B0D8A4(&StringLiteral_12148/*"SHOP_BUY_CONFIRM_SOLD_OUT_WARNING"*/, v24);
    sub_B0D8A4(&StringLiteral_12141/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/, v25);
    sub_B0D8A4(&StringLiteral_12144/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/, v26);
    sub_B0D8A4(&StringLiteral_12143/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, v27);
    sub_B0D8A4(&StringLiteral_12145/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, v28);
    sub_B0D8A4(&StringLiteral_12146/*"SHOP_BUY_CONFIRM_QUEST_CLAER"*/, v29);
    sub_B0D8A4(&StringLiteral_23743/*"{0}、"*/, v30);
    sub_B0D8A4(&StringLiteral_12151/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, v31);
    sub_B0D8A4(&StringLiteral_12169/*"SHOP_BUY_STONE_FRAGMENTS_CONFIRM_WARNING"*/, v32);
    sub_B0D8A4(&StringLiteral_12154/*"SHOP_BUY_ITEM_FULL_WARNING"*/, v33);
    sub_B0D8A4(&StringLiteral_12156/*"SHOP_BUY_ITEM_OVER_WARNING"*/, v34);
    sub_B0D8A4(&StringLiteral_1/*""*/, v35);
    sub_B0D8A4(&StringLiteral_12147/*"SHOP_BUY_CONFIRM_QUEST_HOLD"*/, v36);
    byte_4218AE9 = 1;
  }
  *(_QWORD *)buyServantEquipNum = 0LL;
  buyItemNum = 0LL;
  *(_QWORD *)buyQuestNum = 0LL;
  recordNum = 0;
  entity = 0LL;
  p_warningLabel = &this->fields.warningLabel;
  warningLabel = this->fields.warningLabel;
  Price = (int64_t)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !warningLabel )
    goto LABEL_202;
  UILabel__set_fontSize(warningLabel, BalanceConfig_TypeInfo->static_fields->DefaultFontSize, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText(v40, *p_warningLabel, (System_String_o *)StringLiteral_1/*""*/, v41);
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
        v42 = *p_warningLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v43 = &StringLiteral_12147/*"SHOP_BUY_CONFIRM_QUEST_HOLD"*/;
        goto LABEL_50;
      }
      goto LABEL_24;
    }
LABEL_15:
    v42 = *p_warningLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v43 = &StringLiteral_12146/*"SHOP_BUY_CONFIRM_QUEST_CLAER"*/;
    goto LABEL_50;
  }
  if ( ShopEntity__isQuestNotClearItemClosed(shopEntity, 0, 0LL) )
    goto LABEL_15;
LABEL_24:
  if ( ShopEntity__IsSoldOut(shopEntity, 0LL)
    && !ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0LL)
    && !ShopEntity__IsAnotherItemBuyable(shopEntity, 0LL) )
  {
    v42 = *p_warningLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v43 = &StringLiteral_12148/*"SHOP_BUY_CONFIRM_SOLD_OUT_WARNING"*/;
    goto LABEL_50;
  }
  if ( isInPreparation )
  {
    v42 = *p_warningLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v43 = &StringLiteral_12144/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/;
LABEL_50:
    v47 = LocalizationManager__Get((System_String_o *)*v43, 0LL);
LABEL_51:
    ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)v47, v42, v47, v48);
    return;
  }
  if ( !ShopEntity__IsEnable(shopEntity, 0LL, 0LL) )
  {
    v42 = *p_warningLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v43 = &StringLiteral_12145/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/;
    goto LABEL_50;
  }
  UserItemCounts = ShopBuyItemConfirmMenu__GetUserItemCounts(this, v44);
  switch ( shopEntity->fields.payType )
  {
    case 2:
      Price = ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_202;
      if ( !UserItemCounts->max_length )
        goto LABEL_203;
      if ( (int)Price <= UserItemCounts->m_Items[1] )
        goto LABEL_154;
      v52 = *p_warningLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v53 = LocalizationManager__Get((System_String_o *)StringLiteral_12151/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, 0LL);
      v54 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10907/*"QP_NAME"*/, 0LL);
      v55 = System_String__Format(v53, v54, 0LL);
      goto LABEL_106;
    case 4:
      Price = ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_202;
      if ( !UserItemCounts->max_length )
        goto LABEL_203;
      if ( (int)Price <= UserItemCounts->m_Items[1] )
        goto LABEL_154;
      v52 = *p_warningLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v57 = &StringLiteral_12157/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/;
      goto LABEL_105;
    case 6:
    case 0xB:
    case 0xC:
      if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 2 )
      {
        if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 1 )
        {
          v46 = 0LL;
          while ( 1 )
          {
            Price = ShopEntity__GetPrices(shopEntity, v46, 0LL);
            if ( !UserItemCounts )
              goto LABEL_202;
            if ( (unsigned int)v46 >= UserItemCounts->max_length )
              goto LABEL_203;
            if ( (int)Price > UserItemCounts->m_Items[v46 + 1] )
              break;
            if ( (int)++v46 >= ShopEntity__GetItemCount(shopEntity, 0LL) )
              goto LABEL_154;
          }
          v42 = *p_warningLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v43 = &StringLiteral_12152/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/;
          goto LABEL_50;
        }
        goto LABEL_154;
      }
      Price = ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_202;
      if ( !UserItemCounts->max_length )
        goto LABEL_203;
      if ( (int)Price <= UserItemCounts->m_Items[1] )
        goto LABEL_154;
      Price = ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v49);
      v50 = this->fields.shopEntity;
      if ( !v50 )
        goto LABEL_202;
      if ( (Price & 1) != 0 )
      {
        Price = (int64_t)ShopEntity__GetAnotherPayItemIds(this->fields.shopEntity, 0LL);
        if ( !Price )
          goto LABEL_202;
      }
      else
      {
        Price = (int64_t)v50->fields.itemIds;
        if ( !Price )
          goto LABEL_202;
      }
      if ( !*(_DWORD *)(Price + 24) )
      {
LABEL_203:
        v93 = sub_B0D9A8(Price);
        sub_B0D948(v93, 0LL);
      }
      v69 = *(_DWORD *)(Price + 32);
      Price = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Price )
        goto LABEL_202;
      Price = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)Price,
                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Price )
        goto LABEL_202;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)Price,
              &entity,
              v69,
              (const MethodInfo_2669C30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        return;
      v42 = *p_warningLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Price = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12151/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, 0LL);
      if ( !entity )
        goto LABEL_202;
      age = (Il2CppObject *)entity->fields.age;
      goto LABEL_153;
    case 8:
      Price = ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_202;
      if ( !UserItemCounts->max_length )
        goto LABEL_203;
      if ( (int)Price <= UserItemCounts->m_Items[1] )
        goto LABEL_154;
      v42 = *p_warningLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v51 = &StringLiteral_12169/*"SHOP_BUY_STONE_FRAGMENTS_CONFIRM_WARNING"*/;
      goto LABEL_88;
    case 9:
      Price = ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_202;
      if ( !UserItemCounts->max_length )
        goto LABEL_203;
      if ( (int)Price <= UserItemCounts->m_Items[1] )
        goto LABEL_154;
      v42 = *p_warningLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v51 = &StringLiteral_12141/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/;
LABEL_88:
      v58 = LocalizationManager__Get((System_String_o *)*v51, 0LL);
      Price = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Price )
        goto LABEL_202;
      Price = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)Price,
                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
      v59 = this->fields.shopEntity;
      if ( !v59 )
        goto LABEL_202;
      itemIds = v59->fields.itemIds;
      if ( !itemIds )
        goto LABEL_202;
      if ( !itemIds->max_length )
        goto LABEL_203;
      if ( !Price )
        goto LABEL_202;
      Price = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                         (DataMasterBase_WarMaster__WarEntity__int__o *)Price,
                         itemIds->m_Items[1],
                         (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Price )
        goto LABEL_202;
      age = *(Il2CppObject **)(Price + 24);
      goto LABEL_95;
    case 0xA:
      Price = ShopEntity__GetPrice(shopEntity, 0LL);
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
      v52 = *p_warningLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v57 = &StringLiteral_12163/*"SHOP_BUY_RARE_PRI_CONFIRM_WARNING"*/;
LABEL_105:
      v55 = LocalizationManager__Get((System_String_o *)*v57, 0LL);
LABEL_106:
      ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)v55, v52, v55, v56);
      goto LABEL_154;
    case 0xE:
      if ( !this->fields.commonConsumeEntities )
        goto LABEL_154;
      Price = ShopEntity__get_TargetId(shopEntity, 0LL);
      v62 = BalanceConfig_TypeInfo;
      v63 = Price;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v62 = BalanceConfig_TypeInfo;
      }
      if ( v63 != v62->static_fields->ApSeedExchangeTargetItemId )
        goto LABEL_117;
      v64 = *p_warningLabel;
      if ( (BYTE3(v62->vtable._0_Equals.methodPtr) & 4) != 0 && !v62->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v62);
      if ( !v64 )
        goto LABEL_202;
      UILabel__set_fontSize(v64, BalanceConfig_TypeInfo->static_fields->TradeApDialogWarningLabelFontSize, 0LL);
LABEL_117:
      commonConsumeEntities = this->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        goto LABEL_202;
      v66 = *(_QWORD *)&commonConsumeEntities->max_length;
      if ( (_DWORD)v66 == 1 )
      {
        v67 = commonConsumeEntities->m_Items[0];
        if ( !v67 )
          goto LABEL_202;
        num = v67->fields.num;
        if ( num > CommonConsumeEntity__GetUserHasNum(commonConsumeEntities->m_Items[0], 0LL) )
        {
          v42 = *p_warningLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v58 = LocalizationManager__Get((System_String_o *)StringLiteral_12143/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, 0LL);
          age = (Il2CppObject *)CommonConsumeEntity__GetName(v67, 0LL);
LABEL_95:
          Price = (int64_t)v58;
          goto LABEL_153;
        }
      }
      else if ( (int)v66 > 1 )
      {
        Empty = string_TypeInfo->static_fields->Empty;
        v71 = 0;
        do
        {
          if ( v71 >= (unsigned int)v66 )
            goto LABEL_203;
          v72 = &commonConsumeEntities->obj.klass + v71;
          v73 = (CommonConsumeEntity_o *)v72[4];
          if ( !v73 )
            goto LABEL_202;
          v74 = v73->fields.num;
          Price = CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)v72[4], 0LL);
          if ( v74 > (int)Price )
          {
            Name = (Il2CppObject *)CommonConsumeEntity__GetName(v73, 0LL);
            v76 = System_String__Format((System_String_o *)StringLiteral_23743/*"{0}、"*/, Name, 0LL);
            Price = (int64_t)System_String__Concat_43849904(Empty, v76, 0LL);
            Empty = (struct System_String_o *)Price;
          }
          commonConsumeEntities = this->fields.commonConsumeEntities;
          if ( !commonConsumeEntities )
            goto LABEL_202;
          LODWORD(v66) = commonConsumeEntities->max_length;
          ++v71;
        }
        while ( v71 < (int)v66 );
        if ( !Empty )
          goto LABEL_202;
        m_stringLength = Empty->fields.m_stringLength;
        if ( m_stringLength >= 1 )
        {
          v78 = System_String__Remove_43928260(Empty, m_stringLength - 1, 0LL);
          v42 = *p_warningLabel;
          v79 = (Il2CppObject *)v78;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Price = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12143/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, 0LL);
          age = v79;
LABEL_153:
          v47 = System_String__Format((System_String_o *)Price, age, 0LL);
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
        Price = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Price )
          goto LABEL_202;
        Price = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)Price,
                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
        if ( !userGameEntity )
          goto LABEL_202;
        if ( !Price )
          goto LABEL_202;
        Price = (int64_t)UserPresentBoxMaster__getVaildList(
                           (UserPresentBoxMaster_o *)Price,
                           userGameEntity->fields.userId,
                           0LL);
        if ( !Price )
          goto LABEL_202;
        purchaseType = shopEntity->fields.purchaseType;
        v81 = *(_DWORD *)(Price + 24);
        if ( purchaseType == 5 )
          v82 = recordNum;
        else
          v82 = buyServantEquipNum[0] + buyServantEquipNum[1] + buyQuestNum[1];
        v83 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v83 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v83->static_fields->PresentBoxMax;
        if ( PresentBoxMax <= v81 )
        {
          v85 = *p_warningLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v86 = &StringLiteral_12160/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/;
LABEL_200:
          Price = (int64_t)LocalizationManager__Get((System_String_o *)*v86, 0LL);
          if ( v85 )
          {
            UILabel__set_text(v85, (System_String_o *)Price, 0LL);
            return;
          }
LABEL_202:
          sub_B0D97C(Price);
        }
        if ( (BYTE3(v83->vtable._0_Equals.methodPtr) & 4) != 0 && !v83->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v83);
          PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
        }
        if ( v82 + v81 > PresentBoxMax )
        {
          v85 = *p_warningLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v86 = &StringLiteral_12161/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/;
          goto LABEL_200;
        }
      }
      if ( (int)buyItemNum < 1 )
        return;
      Price = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Price )
        goto LABEL_202;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Price,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Price = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_202;
      Sum = UserItemMaster__getSum(MasterData_WarQuestSelectionMaster, Price, 0LL);
      v89 = BalanceConfig_TypeInfo;
      v90 = Sum;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v89 = BalanceConfig_TypeInfo;
      }
      UserItemMax = v89->static_fields->UserItemMax;
      if ( v90 >= UserItemMax )
      {
        v85 = *p_warningLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v86 = &StringLiteral_12154/*"SHOP_BUY_ITEM_FULL_WARNING"*/;
        goto LABEL_200;
      }
      v92 = buyItemNum;
      if ( (BYTE3(v89->vtable._0_Equals.methodPtr) & 4) != 0 && !v89->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v89);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      if ( v92 + v90 > UserItemMax )
      {
        v85 = *p_warningLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v86 = &StringLiteral_12156/*"SHOP_BUY_ITEM_OVER_WARNING"*/;
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
  DataManager_o *Instance; // x0
  WebViewManager_o *v11; // x0
  CommandCodeEntity_o *v12; // x20
  CommonUI_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  ServantStatusDialog_EndDelegate_o *v16; // x22
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4218AFC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&commandCodeId);
    sub_B0D8A4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v6);
    sub_B0D8A4(&Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_4218AFC = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_9;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         commandCodeId,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
  {
    v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (CommandCodeEntity_o *)entity;
    v13 = (CommonUI_o *)v11;
    v16 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v14, v15);
    ServantStatusDialog_EndDelegate___ctor(
      v16,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v13 )
    {
      CommonUI__OpenServantEquipStatusDialog_17033196(v13, 25, v12, 0, v16, 0LL, 0LL);
      return 0;
    }
LABEL_9:
    sub_B0D97C(Instance);
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
  DataManager_o *Instance; // x0
  int32_t itemDetailDialogOverwriteDepth; // w23
  WebViewManager_o *v12; // x0
  ItemEntity_o *v13; // x20
  CommonUI_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  ItemDetailInfoComponent_CallbackFunc_o *v17; // x22
  int32_t v18; // w3
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4218AFB & 1) == 0 )
  {
    sub_B0D8A4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, *(_QWORD *)&itemId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v6);
    sub_B0D8A4(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_4218AFB = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_13;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         itemId,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    itemDetailDialogOverwriteDepth = this->fields.itemDetailDialogOverwriteDepth;
    v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (ItemEntity_o *)entity;
    v14 = (CommonUI_o *)v12;
    v17 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B0D974(ItemDetailInfoComponent_CallbackFunc_TypeInfo, v15, v16);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__,
      0LL);
    if ( itemDetailDialogOverwriteDepth == 0x80000000 )
    {
      if ( v14 )
      {
        v18 = 50;
LABEL_11:
        CommonUI__OpenItemDetailDialog(v14, v13, v17, v18, 0LL);
        return 0;
      }
    }
    else if ( v14 )
    {
      v18 = this->fields.itemDetailDialogOverwriteDepth;
      goto LABEL_11;
    }
LABEL_13:
    sub_B0D97C(Instance);
  }
  return 0;
}


int32_t __fastcall ShopBuyItemConfirmMenu__ShowOtherInfomation(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  System_String_o *name; // x21
  System_String_o *infoMessage; // x20
  CommonUI_o *v11; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  ItemDetailInfoComponent_CallbackFunc_o *v14; // x23

  v4 = (Il2CppObject *)this;
  if ( (byte_4218AFD & 1) == 0 )
  {
    sub_B0D8A4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, shopEntity);
    sub_B0D8A4(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    this = (ShopBuyItemConfirmMenu_o *)sub_B0D8A4(&StringLiteral_9333/*"NONE"*/, v7);
    byte_4218AFD = 1;
  }
  if ( !shopEntity )
    goto LABEL_9;
  if ( !System_String__IsNullOrEmpty(shopEntity->fields.infoMessage, 0LL)
    && System_String__op_Inequality(shopEntity->fields.infoMessage, (System_String_o *)StringLiteral_9333/*"NONE"*/, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    name = shopEntity->fields.name;
    infoMessage = shopEntity->fields.infoMessage;
    v11 = (CommonUI_o *)Instance;
    v14 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B0D974(ItemDetailInfoComponent_CallbackFunc_TypeInfo, v12, v13);
    ItemDetailInfoComponent_CallbackFunc___ctor(v14, v4, Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__, 0LL);
    if ( v11 )
    {
      CommonUI__OpenItemDetailDialog_17082384(v11, name, infoMessage, v14, 0LL);
      return 0;
    }
LABEL_9:
    sub_B0D97C(this);
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
  DataManager_o *Instance; // x0
  CommonUI_o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  ServantLeaderInfo_o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  ServantStatusDialog_EndDelegate_o *v24; // x20
  CommonUI_o *v26; // x23
  __int64 v27; // x1
  __int64 v28; // x2
  EquipTargetInfo_o *v29; // x24
  __int64 v30; // x1
  __int64 v31; // x2
  ServantStatusDialog_EndDelegate_o *v32; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4218AFA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v10);
    sub_B0D8A4(&EquipTargetInfo_TypeInfo, v11);
    sub_B0D8A4(&ServantLeaderInfo_TypeInfo, v12);
    sub_B0D8A4(&Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__, v13);
    sub_B0D8A4(&Method_ShopBuyItemConfirmMenu_EndShowServantStatusDialog__, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    byte_4218AFA = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_24;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          servantId,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return -1;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_24;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) )
    goto LABEL_14;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_24;
  if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)entity, 0LL) )
    goto LABEL_14;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_24;
  if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)entity, 0LL) )
    goto LABEL_14;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_24;
  if ( ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)entity, 0LL) )
  {
LABEL_14:
    v18 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = (ServantLeaderInfo_o *)sub_B0D974(ServantLeaderInfo_TypeInfo, v19, v20);
    ServantLeaderInfo___ctor_28142536(v21, servantId, 0, 1, 0LL);
    v24 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v22, v23);
    ServantStatusDialog_EndDelegate___ctor(
      v24,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantStatusDialog__,
      0LL);
    if ( v18 )
    {
      CommonUI__OpenServantStatusDialog_17029768(v18, 7, v21, v24, 0LL);
      return 0;
    }
    goto LABEL_24;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_24;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL) )
  {
    v26 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v29 = (EquipTargetInfo_o *)sub_B0D974(EquipTargetInfo_TypeInfo, v27, v28);
    EquipTargetInfo___ctor_28810548(v29, servantId, limitCount, level, 0, 0LL);
    v32 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v30, v31);
    ServantStatusDialog_EndDelegate___ctor(
      v32,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v26 )
    {
      CommonUI__OpenServantEquipStatusDialog_17032132(v26, 7, v29, v32, 0LL, 0LL);
      return 0;
    }
LABEL_24:
    sub_B0D97C(Instance);
  }
  return 2;
}


System_String_o *__fastcall ShopBuyItemConfirmMenu__get_closeBtnPath(
        ShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4218B04 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15524/*"Window/CancelButton"*/, method);
    byte_4218B04 = 1;
  }
  return (System_String_o *)StringLiteral_15524/*"Window/CancelButton"*/;
}


bool __fastcall ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  EventRewardRootComponent_c *v3; // x0
  ShopEntity_o *shopEntity; // x0

  if ( (byte_4218ADC & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardRootComponent_TypeInfo, method);
    byte_4218ADC = 1;
  }
  if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  }
  if ( !byte_4211437 )
  {
    sub_B0D8A4(&EventRewardRootComponent_TypeInfo, method);
    byte_4211437 = 1;
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
    sub_B0D97C(0LL);
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
  ShopBuyItemConfirmMenu___c__DisplayClass93_0_o *v2; // x19
  struct ShopBuyItemConfirmMenu_o *_4__this; // x8
  System_Action_o *onChecked; // x20
  struct ShopBuyItemConfirmMenu_o *v5; // x8
  System_Action_T__o *onCloseReturnWarning; // x21

  v2 = this;
  if ( (byte_421228B & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu___c__DisplayClass93_0_o *)sub_B0D8A4(&Method_ActionExtensions_Call_int___, method);
    byte_421228B = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (onChecked = _4__this->fields.onChecked,
        _4__this->fields.onChecked = 0LL,
        sub_B0D840(&_4__this->fields.onChecked, 0LL),
        (v5 = v2->fields.__4__this) == 0LL) )
  {
    sub_B0D97C(this);
  }
  onCloseReturnWarning = (System_Action_T__o *)v5->fields.onCloseReturnWarning;
  v5->fields.onCloseReturnWarning = 0LL;
  sub_B0D840(&v5->fields.onCloseReturnWarning, 0LL);
  if ( v2->fields.isDecide )
    ActionExtensions__Call(onChecked, 0LL);
  else
    ActionExtensions__Call_int_(
      onCloseReturnWarning,
      0,
      (const MethodInfo_2D96680 *)Method_ActionExtensions_Call_int___);
}