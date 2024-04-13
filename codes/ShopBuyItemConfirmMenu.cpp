void __fastcall ShopBuyItemConfirmMenu___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v18; // x1
  struct ShopBuyItemConfirmMenu_StaticFields *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct ShopBuyItemConfirmMenu_StaticFields *v27; // x0
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_42ECF95 & 1) == 0 )
  {
    sub_B5D5C4(&ShopBuyItemConfirmMenu_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_17262/*"btn_txt_event_"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17312/*"btn_txt_trade"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17295/*"btn_txt_sale"*/, v14, v15, v16);
    byte_42ECF95 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_17262/*"btn_txt_event_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17262/*"btn_txt_event_"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v20 = (System_Int32_array **)StringLiteral_17312/*"btn_txt_trade"*/;
  v19->DECIED_BTN_NAME_DEFAULT = (struct System_String_o *)StringLiteral_17312/*"btn_txt_trade"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v19->DECIED_BTN_NAME_DEFAULT, v20, v21, v22, v23, v24, v25, v26);
  v27 = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v28 = (System_Int32_array **)StringLiteral_17295/*"btn_txt_sale"*/;
  v27->DECIED_BTN_NAME_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_17295/*"btn_txt_sale"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v27->DECIED_BTN_NAME_LIMIT_MATERIAL, v28, v29, v30, v31, v32, v33, v34);
  ShopBuyItemConfirmMenu_TypeInfo->static_fields->PRICE_DATA_LABEL_MAX_WIDTH = 320;
}


void __fastcall ShopBuyItemConfirmMenu___ctor(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ECF94 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECF94 = 1;
  }
  this->fields.itemDetailDialogOverwriteDepth = 0x80000000;
  *(_OWORD *)&this->fields.freeLabelPos.fields.x = xmmword_32B5B30;
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
    sub_B5D560(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(onClose, 0LL);
  }
}


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

  if ( (byte_42ECF83 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__Invoke__, result, (_DWORD)method, v3);
    byte_42ECF83 = 1;
  }
  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    this->fields.onDecide = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_int___Invoke(onDecide, result, (const MethodInfo_2589DA4 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall ShopBuyItemConfirmMenu__Close(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ShopBuyItemConfirmMenu__Close_33936248(this, 0LL, v2);
}


void __fastcall ShopBuyItemConfirmMenu__Close_33936248(
        ShopBuyItemConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42ECF82 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ShopBuyItemConfirmMenu_EndClose__, v10, v11, v12);
    byte_42ECF82 = 1;
  }
  this->fields.onClose = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__EndClose(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  ShopBuyItemConfirmMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ShopBuyItemConfirmMenu__CallOnClose(this, v5);
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


void __fastcall ShopBuyItemConfirmMenu__EndShowItemDetailDialog(
        ShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v4; // w1
  int v5; // w2
  __int64 v6; // x3
  CommonUI_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42ECF90 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v4, v5, v6);
    byte_42ECF90 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__EndShowServantEquipStatusDialog(
        ShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42ECF8F & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42ECF8F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseServantEquipStatusDialog(Instance, 0LL, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__EndShowServantStatusDialog(
        ShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42ECF8E & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42ECF8E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
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
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  bool isQuestNotClearItemClosedSub; // w8
  bool result; // w0
  const MethodInfo *v23; // x1
  System_Int32_array *UserItemCounts; // x22
  int32_t purchaseType; // w8
  int basePanel; // w19
  int32_t v27; // w20
  __int64 v28; // x21
  BalanceConfig_c *v29; // x0
  int32_t PresentBoxMax; // w8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x19
  int32_t Sum; // w19
  BalanceConfig_c *v33; // x8
  int32_t UserItemMax; // w9
  int v35; // w21
  struct CommonConsumeEntity_array *commonConsumeEntities; // x21
  int max_length; // w8
  __int64 v38; // x22
  int basePanelList; // w24
  __int64 v40; // x0
  int32_t questId; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t recordNum[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t buyCmdCodeNum[2]; // [xsp+10h] [xbp-40h] BYREF
  __int64 buyServantNum; // [xsp+18h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_42ECF76 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)shopEntity, isInPreparation, userGameEntity);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v12, v13, v14);
    sub_B5D5C4(&NetworkManager_TypeInfo, v15, v16, v17);
    this = (ShopBuyItemConfirmMenu_o *)sub_B5D5C4(
                                         &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                         v18,
                                         v19,
                                         v20);
    byte_42ECF76 = 1;
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
      UserItemCounts = ShopBuyItemConfirmMenu__GetUserItemCounts(v8, v23);
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
              v40 = sub_B5D6C8(this);
              sub_B5D668(v40, 0LL);
            }
            if ( (int)this > UserItemCounts->m_Items[1] )
              return 0;
          }
          else if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 1 )
          {
            v28 = 0LL;
            while ( 1 )
            {
              this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetPrices(shopEntity, v28, 0LL);
              if ( !UserItemCounts )
                break;
              if ( (unsigned int)v28 >= UserItemCounts->max_length )
                goto LABEL_76;
              if ( (int)this > UserItemCounts->m_Items[v28 + 1] )
                return 0;
              if ( (int)++v28 >= ShopEntity__GetItemCount(shopEntity, 0LL) )
                goto LABEL_17;
            }
LABEL_75:
            sub_B5D69C(this, shopEntity);
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
          this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_75;
          this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
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
            v27 = recordNum[0];
          else
            v27 = buyCmdCodeNum[1] + buyServantNum + buyCmdCodeNum[0];
          v29 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v29 = BalanceConfig_TypeInfo;
          }
          PresentBoxMax = v29->static_fields->PresentBoxMax;
          if ( PresentBoxMax > basePanel )
          {
            if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v29);
              PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
            }
            if ( v27 + basePanel <= PresentBoxMax )
            {
LABEL_56:
              if ( SHIDWORD(buyServantNum) < 1 )
                return 1;
              this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_75;
              MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)this,
                                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              this = (ShopBuyItemConfirmMenu_o *)NetworkManager__get_UserId(0LL);
              if ( !MasterData_WarQuestSelectionMaster )
                goto LABEL_75;
              Sum = UserItemMaster__getSum(MasterData_WarQuestSelectionMaster, (int64_t)this, 0LL);
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
          v38 = 0LL;
          while ( 2 )
          {
            if ( (unsigned int)v38 >= max_length )
              goto LABEL_76;
            this = (ShopBuyItemConfirmMenu_o *)commonConsumeEntities->m_Items[v38];
            if ( !this )
              goto LABEL_75;
            basePanelList = (int)this->fields.basePanelList;
            this = (ShopBuyItemConfirmMenu_o *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0LL);
            if ( basePanelList <= (int)this )
            {
              max_length = commonConsumeEntities->max_length;
              if ( (int)++v38 >= max_length )
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x8
  SetItemMaster_o *v9; // x20
  unsigned __int64 v10; // x21
  int basePanel; // w8
  unsigned int v12; // w9
  __int64 v13; // x10
  __int64 v15; // x0

  if ( (byte_42ECF91 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SetItemMaster___, (_DWORD)ids, (_DWORD)method, v3);
    this = (ShopBuyItemConfirmMenu_o *)sub_B5D5C4(
                                         &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                         v5,
                                         v6,
                                         v7);
    byte_42ECF91 = 1;
  }
  if ( !ids )
    goto LABEL_20;
  if ( !*(_QWORD *)&ids->max_length )
    return 0;
  this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_B5D69C(this, ids);
  this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SetItemMaster___);
  v8 = *(_QWORD *)&ids->max_length;
  if ( (int)v8 < 1 )
    return 0;
  v9 = (SetItemMaster_o *)this;
  v10 = 0LL;
  while ( 1 )
  {
    if ( v10 >= (unsigned int)v8 )
    {
LABEL_21:
      v15 = sub_B5D6C8(this);
      sub_B5D668(v15, 0LL);
    }
    if ( !v9 )
      goto LABEL_20;
    this = (ShopBuyItemConfirmMenu_o *)SetItemMaster__GetList(v9, ids->m_Items[v10 + 1], 0LL);
    if ( !this )
      goto LABEL_20;
    basePanel = (int)this->fields.basePanel;
    if ( basePanel >= 1 )
      break;
LABEL_17:
    LODWORD(v8) = ids->max_length;
    if ( (__int64)++v10 >= (int)v8 )
      return 0;
  }
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= basePanel )
      goto LABEL_21;
    v13 = *((_QWORD *)&this->fields.basePanelList + (int)v12);
    if ( !v13 )
      goto LABEL_20;
    if ( *(_DWORD *)(v13 + 20) == 7 )
      return 1;
    if ( (int)++v12 >= basePanel )
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
    sub_B5D69C(this, 0LL);
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


System_String_o *__fastcall ShopBuyItemConfirmMenu__GetMaxAlertBase(
        ShopBuyItemConfirmMenu_o *this,
        int32_t shopType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 *v11; // x8

  if ( (byte_42ECF86 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, shopType, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_8482/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12314/*"SHOP_MAX_ALERT"*/, v8, v9, v10);
    byte_42ECF86 = 1;
  }
  if ( shopType == 9 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v11 = &StringLiteral_8482/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v11 = &StringLiteral_12314/*"SHOP_MAX_ALERT"*/;
  }
  return LocalizationManager__Get((System_String_o *)*v11, 0LL);
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


System_String_o *__fastcall ShopBuyItemConfirmMenu__GetMaxOverItemName(
        ShopBuyItemConfirmMenu_o *this,
        int32_t itemType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 *v20; // x8

  if ( (byte_42ECF85 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, itemType, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_11011/*"QP_NAME"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_8706/*"MANA_NAME"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_11144/*"RARE_PRI_NAME"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6564/*"FRIEND_POINT_NAME"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_1/*""*/, v17, v18, v19);
    byte_42ECF85 = 1;
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
      v20 = &StringLiteral_6564/*"FRIEND_POINT_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v20, 0LL);
    }
    if ( itemType == 22 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v20 = &StringLiteral_11144/*"RARE_PRI_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v20, 0LL);
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
    v20 = &StringLiteral_11011/*"QP_NAME"*/;
    return LocalizationManager__Get((System_String_o *)*v20, 0LL);
  }
  if ( itemType != 5 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v20 = &StringLiteral_8706/*"MANA_NAME"*/;
  return LocalizationManager__Get((System_String_o *)*v20, 0LL);
}


System_Int32_array *__fastcall ShopBuyItemConfirmMenu__GetUserItemCounts(
        ShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 SelfUserGame; // x0
  const MethodInfo *v15; // x1
  struct ShopEntity_o *shopEntity; // x8
  _DWORD *v17; // x21
  System_Int32_array *v18; // x20
  UserItemMaster_o *v19; // x21
  struct ShopEntity_o *v20; // x8
  struct System_Int32_array *itemIds; // x8
  int32_t v22; // w8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v24; // x1
  int32_t ItemCount; // w22
  __int64 v27; // x23
  __int64 v28; // x24
  struct ShopEntity_o *v29; // x8
  unsigned __int64 v30; // x26
  int32_t v31; // w22
  bool v32; // cc
  unsigned int v33; // w0
  __int64 v34; // x0

  if ( (byte_42ECF75 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42ECF75 = 1;
  }
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_59;
  v17 = (_DWORD *)SelfUserGame;
  switch ( shopEntity->fields.payType )
  {
    case 1:
      SelfUserGame = sub_B5D5DC(int___TypeInfo, 1LL);
      if ( !v17 )
        goto LABEL_59;
      v18 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_59;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_60;
      v22 = v17[42];
      goto LABEL_38;
    case 2:
      SelfUserGame = sub_B5D5DC(int___TypeInfo, 1LL);
      if ( !v17 )
        goto LABEL_59;
      v18 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_59;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_60;
      v22 = v17[24];
      goto LABEL_38;
    case 4:
      SelfUserGame = sub_B5D5DC(int___TypeInfo, 1LL);
      if ( !v17 )
        goto LABEL_59;
      v18 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_59;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_60;
      v22 = v17[44];
      goto LABEL_38;
    case 6:
    case 0xB:
      SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_59;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)SelfUserGame,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
      SelfUserGame = ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v24);
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
      v18 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)ItemCount);
      if ( ItemCount >= 1 )
      {
        v27 = ItemCount;
        v28 = 8LL;
        while ( 1 )
        {
          SelfUserGame = ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v15);
          v29 = this->fields.shopEntity;
          if ( !v29 )
            break;
          v30 = v28 - 8;
          if ( (SelfUserGame & 1) != 0 )
          {
            SelfUserGame = (__int64)ShopEntity__GetAnotherPayItemIds(this->fields.shopEntity, 0LL);
            if ( !SelfUserGame )
              break;
          }
          else
          {
            SelfUserGame = (__int64)v29->fields.itemIds;
            if ( !SelfUserGame )
              break;
          }
          if ( v30 >= *(unsigned int *)(SelfUserGame + 24) )
          {
LABEL_60:
            v34 = sub_B5D6C8(SelfUserGame);
            sub_B5D668(v34, 0LL);
          }
          v31 = *(_DWORD *)(SelfUserGame + 4 * v28);
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
                                    v31,
                                    0LL);
          if ( !SelfUserGame || !v18 )
            break;
          if ( v30 >= v18->max_length )
            goto LABEL_60;
          v32 = v28 - 7 < v27;
          *((_DWORD *)&v18->obj.klass + v28++) = *(_DWORD *)(SelfUserGame + 28);
          if ( !v32 )
            return v18;
        }
LABEL_59:
        sub_B5D69C(SelfUserGame, v15);
      }
      return v18;
    case 8:
    case 9:
    case 0xC:
      v18 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
      SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_59;
      v19 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)SelfUserGame,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      SelfUserGame = NetworkManager__get_UserId(0LL);
      v20 = this->fields.shopEntity;
      if ( !v20 )
        goto LABEL_59;
      itemIds = v20->fields.itemIds;
      if ( !itemIds )
        goto LABEL_59;
      if ( !itemIds->max_length )
        goto LABEL_60;
      if ( !v19 )
        goto LABEL_59;
      SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(v19, SelfUserGame, itemIds->m_Items[1], 0LL);
      if ( !SelfUserGame || !v18 )
        goto LABEL_59;
      if ( !v18->max_length )
        goto LABEL_60;
      v22 = *(_DWORD *)(SelfUserGame + 28);
LABEL_38:
      v18->m_Items[1] = v22;
      return v18;
    case 0xA:
      SelfUserGame = sub_B5D5DC(int___TypeInfo, 1LL);
      if ( !v17 )
        goto LABEL_59;
      v18 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_59;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_60;
      v22 = v17[45];
      goto LABEL_38;
    default:
      v33 = ShopEntity__GetItemCount(this->fields.shopEntity, 0LL);
      return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, v33);
  }
}


void __fastcall ShopBuyItemConfirmMenu__Init(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UILabel_o *nameLabel; // x0
  UILabel_o *messageLabel; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  ShopBuyItemConfirmMenu_o *v16; // x0
  const MethodInfo *v17; // x3
  ShopBuyItemConfirmMenu_o *v18; // x0
  const MethodInfo *v19; // x3
  ShopBuyItemConfirmMenu_o *v20; // x0
  const MethodInfo *v21; // x3

  if ( (byte_42ECF6C & 1) == 0 )
  {
    sub_B5D5C4(&ShopBuyItemUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42ECF6C = 1;
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
        sub_B5D560((BattleServantConfConponent_o *)&this->fields.shopEntity, 0LL, v10, v11, v12, v13, v14, v15),
        (nameLabel = (UILabel_o *)this->fields.infoButton) == 0LL)
    || (nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B5D69C(nameLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText(v16, this->fields.presentAheadLabel, (System_String_o *)StringLiteral_1/*""*/, v17);
  ShopBuyItemConfirmMenu__SetLabelActive(v18, this->fields.LineText, 0, v19);
  ShopBuyItemConfirmMenu__SetLabelActive(v20, this->fields.LineText2digit, 0, v21);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__OnClickCancel(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42ECF87 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECF87 = 1;
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
    ShopBuyItemConfirmMenu__CallOnDecide(this, 0, v5);
  }
}


void __fastcall ShopBuyItemConfirmMenu__OnClickDecide(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  DataManager_o *Instance; // x0
  struct ShopEntity_o *shopEntity; // x1
  NoTitleDialog_o *noTitleDialog; // x20
  System_String_o *lookup; // x21
  Il2CppObject *Name; // x0
  System_String_o *v49; // x21
  System_String_o *v50; // x22
  System_String_o *v51; // x23
  System_Action_bool__o *v52; // x24
  const MethodInfo *v53; // x3
  struct ShopEntity_o *v54; // x8
  System_String_o *MaxAlertMessage; // x20
  CommonUI_o *v56; // x21
  System_Action_o *v57; // x22
  UILabel_o *warningLabel; // x20
  const MethodInfo *v59; // x2
  int32_t check; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_42ECF84 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Action_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_ShopBuyItemConfirmMenu_EndMaxErrorDialog__, v17, v18, v19);
    sub_B5D5C4(&Method_ShopBuyItemConfirmMenu_ReturnWarning__, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&SoundManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_9454/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_12254/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_1/*""*/, v41, v42, v43);
    byte_42ECF84 = 1;
  }
  check = 0;
  if ( this->fields.state != 2 )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
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
        v49 = System_String__Format(lookup, Name, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v50 = LocalizationManager__Get((System_String_o *)StringLiteral_9454/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, 0LL);
        v51 = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
        v52 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(
          v52,
          (Il2CppObject *)this,
          Method_ShopBuyItemConfirmMenu_ReturnWarning__,
          (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
        if ( noTitleDialog )
        {
          NoTitleDialog__Open(noTitleDialog, v49, v50, v51, v52, 0LL);
          return;
        }
      }
LABEL_40:
      sub_B5D69C(Instance, shopEntity);
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
      v54 = this->fields.shopEntity;
      if ( !v54 )
        goto LABEL_40;
      MaxAlertMessage = ShopBuyItemConfirmMenu__GetMaxAlertMessage(this, v54->fields.shopType, check, v53);
      v56 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v57 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v57, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndMaxErrorDialog__, 0LL);
      if ( !v56 )
        goto LABEL_40;
      CommonUI__OpenNotificationDialog(
        v56,
        (System_String_o *)StringLiteral_1/*""*/,
        MaxAlertMessage,
        v57,
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
    ShopBuyItemConfirmMenu__CallOnDecide(this, 1, v59);
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
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12254/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, 0LL);
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
    sub_B5D69C(this, shopEntity);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  struct ShopEntity_o **p_shopEntity; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct CommonConsumeEntity_array *CommonConsumeEntities; // x1
  struct CommonConsumeEntity_array **p_commonConsumeEntities; // x0
  System_String_o *Name; // x22
  System_String_o *v43; // x22
  const MethodInfo *v44; // x3
  UISprite_o *decideButtonImg; // x23
  ShopBuyItemConfirmMenu_o *v46; // x0
  bool IsPreparation; // w0
  bool v48; // w25
  bool v49; // w23
  const MethodInfo *v50; // x4
  UserGameEntity_o *SelfUserGame; // x24
  const MethodInfo *v52; // x4
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x3
  ShopEntity_o *v55; // x26
  UILabel_o *textOnMask; // x27
  const MethodInfo *v57; // x3
  ShopEntity_o *v58; // x25
  UISprite_o *possessionSprite; // x26
  bool v60; // w0
  const MethodInfo *v61; // x3
  bool IsNotHavingShopItemReceived; // w0
  bool v63; // w25
  bool v64; // w21
  const MethodInfo *v65; // x5
  const MethodInfo *v66; // x4
  struct UICommonButton_o *decideButton; // x8
  char v68; // w20
  __int64 v69; // x1
  const MethodInfo *v70; // x3
  const MethodInfo *v71; // x3
  const MethodInfo *v72; // x5
  UISprite_o *itemMaskeSprite; // x20
  ShopBuyItemConfirmMenu_o *v74; // x0
  const MethodInfo *v75; // x3
  _BOOL8 IsShowMask; // x0
  const MethodInfo *v77; // x3
  const MethodInfo *v78; // x3
  System_Action_o *v79; // x20
  System_String_o *itemName; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_42ECF6D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)shopEntity, shopKind, onDecide);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_ShopBuyItemConfirmMenu_EndOpen__, v16, v17, v18);
    sub_B5D5C4(&ShopBuyItemConfirmMenu_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&ShopBuyItemUtility_TypeInfo, v22, v23, v24);
    byte_42ECF6D = 1;
  }
  message = 0LL;
  itemName = 0LL;
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_B5D560(
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.shopEntity,
      (System_Int32_array **)shopEntity,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
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
    sub_B5D560(
      (BattleServantConfConponent_o *)p_commonConsumeEntities,
      (System_Int32_array **)CommonConsumeEntities,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
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
          v43 = (System_String_o *)gameObject;
          UICrossNarrowLabel__SetCrossNarrowText(this->fields.nameLabel, (System_String_o *)gameObject, 0LL);
          decideButtonImg = this->fields.decideButtonImg;
          v46 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          if ( (BYTE3(ShopBuyItemConfirmMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
            v46 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          }
          ShopBuyItemConfirmMenu__SetSpriteName(
            v46,
            decideButtonImg,
            (System_String_o *)v46->fields.bandSprite->monitor,
            v44);
          gameObject = (UnityEngine_GameObject_o *)*p_shopEntity;
          if ( *p_shopEntity )
          {
            IsPreparation = ShopEntity__IsPreparation((ShopEntity_o *)gameObject, &message, &itemName, 0LL);
            v48 = IsPreparation;
            v49 = IsPreparation;
            ShopBuyItemConfirmMenu__SetMessageLabel(this, this->fields.shopEntity, IsPreparation, message, v50);
            SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
            ShopBuyItemConfirmMenu__SetWarningLabel(this, this->fields.shopEntity, v48, SelfUserGame, v52);
            ShopBuyItemConfirmMenu__SetBandSprite(this, this->fields.shopEntity, v53);
            ShopBuyItemConfirmMenu__SetTextOnMask(this, this->fields.shopEntity, v48, v54);
            v55 = this->fields.shopEntity;
            textOnMask = this->fields.textOnMask;
            if ( (BYTE3(ShopBuyItemUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
            }
            ShopBuyItemUtility__SetAddTextOnMask(v55, textOnMask, 0LL);
            ShopBuyItemConfirmMenu__SetNumText(this, this->fields.shopEntity, v48, v57);
            v58 = this->fields.shopEntity;
            if ( v58 )
            {
              possessionSprite = this->fields.possessionSprite;
              v60 = ShopEntity__checkFlag(this->fields.shopEntity, 0x4000, 0LL);
              ShopBuyItemUtility__SetShopHaveStatusIcon(v58, possessionSprite, v60, 0LL);
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
                v63 = IsNotHavingShopItemReceived;
                ShopBuyItemConfirmMenu__SetExtensionText(
                  this,
                  this->fields.shopEntity,
                  IsNotHavingShopItemReceived,
                  v61);
                v64 = v49;
                ShopBuyItemConfirmMenu__SetPriceInfo(this, this->fields.shopEntity, v49, buttonSpriteId, v63, v65);
                gameObject = (UnityEngine_GameObject_o *)ShopBuyItemConfirmMenu__GetIsBuyable(
                                                           this,
                                                           this->fields.shopEntity,
                                                           v49,
                                                           SelfUserGame,
                                                           v66);
                decideButton = this->fields.decideButton;
                if ( decideButton )
                {
                  v68 = (char)gameObject;
                  if ( ((unsigned __int8)gameObject & 1) != 0 )
                    v69 = 0LL;
                  else
                    v69 = 3LL;
                  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))decideButton->klass->vtable._14_SetState.method)(
                    this->fields.decideButton,
                    v69,
                    1LL,
                    decideButton->klass->vtable._15_OnPress.methodPtr);
                  ShopBuyItemConfirmMenu__SetAheadText(this, this->fields.shopEntity, v68 & 1, v70);
                  ShopBuyItemConfirmMenu__SetItemIcon(this, this->fields.shopEntity, v64, v71);
                  ShopBuyItemConfirmMenu__SetNameText(this, this->fields.shopEntity, v64, v43, itemName, v72);
                  itemMaskeSprite = this->fields.itemMaskeSprite;
                  IsShowMask = ShopBuyItemConfirmMenu__GetIsShowMask(v74, this->fields.shopEntity, v64, v75);
                  ShopBuyItemConfirmMenu__SetSpriteActive(
                    (ShopBuyItemConfirmMenu_o *)IsShowMask,
                    itemMaskeSprite,
                    IsShowMask,
                    v77);
                  ShopBuyItemConfirmMenu__SetInfoButton(this, this->fields.shopEntity, v64, v78);
                  this->fields.state = 1;
                  v79 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                  System_Action___ctor(v79, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndOpen__, 0LL);
                  BaseDialog__Open((BaseDialog_o *)this, v79, 0, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_34:
    sub_B5D69C(gameObject, v33);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  struct ShopEntity_o *Shop_k__BackingField; // x23
  int v34; // w24
  WebViewManager_o *Instance; // x0
  System_String_o *warningMessage; // x24
  CommonUI_o *v37; // x22
  Il2CppObject *Name; // x0
  System_String_o *v39; // x23
  System_String_o *v40; // x24
  System_String_o *v41; // x25
  System_Action_bool__o *v42; // x26
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_o *v55; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *message; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_42ECF92 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)item, (_DWORD)onChecked, onCloseReturnWarning);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_ShopBuyItemConfirmMenu_ReturnWarningRarePri__, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_19125/*"freeShopCondId"*/, v27, v28, v29);
    this = (ShopBuyItemConfirmMenu_o *)sub_B5D5C4(&StringLiteral_11266/*"RETURN_RARE_PRI_SHOP_DECIDE_BUTTON"*/, v30, v31, v32);
    byte_42ECF92 = 1;
  }
  v55 = 0LL;
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
                                             &v55,
                                             0LL);
        if ( Shop_k__BackingField->fields.script )
        {
          v34 = (int)this;
          if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                  (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Shop_k__BackingField->fields.script,
                  (System_Xml_XmlQualifiedName_o *)StringLiteral_19125/*"freeShopCondId"*/,
                  (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
            || ((v34 | ShopBuyItemListViewItem__get_IsSoldOut(item, 0LL)) & 1) != 0
            || !ShopEntity__IsAfterTheFreeShopReleaseDate(Shop_k__BackingField, 0LL)
            || ShopEntity__IsFulFilledFreeExchangeCondition(Shop_k__BackingField, 0LL) )
          {
            ActionExtensions__Call(onChecked, 0LL);
            return;
          }
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          warningMessage = Shop_k__BackingField->fields.warningMessage;
          v37 = (CommonUI_o *)Instance;
          Name = (Il2CppObject *)ShopEntity__getName(Shop_k__BackingField, 0LL);
          v39 = System_String__Format(warningMessage, Name, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v40 = LocalizationManager__Get((System_String_o *)StringLiteral_11266/*"RETURN_RARE_PRI_SHOP_DECIDE_BUTTON"*/, 0LL);
          v41 = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
          v42 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
          System_Action_bool____ctor(
            v42,
            (Il2CppObject *)v8,
            Method_ShopBuyItemConfirmMenu_ReturnWarningRarePri__,
            (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
          if ( v37 )
          {
            CommonUI__OpenNoTitleDialog(v37, v39, v40, v41, v42, 0LL);
            v8->fields.onChecked = onChecked;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v8->fields.onChecked,
              (System_Int32_array **)onChecked,
              v43,
              v44,
              v45,
              v46,
              v47,
              v48);
            v8->fields.onCloseReturnWarning = onCloseReturnWarning;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v8->fields.onCloseReturnWarning,
              (System_Int32_array **)onCloseReturnWarning,
              v49,
              v50,
              v51,
              v52,
              v53,
              v54);
            return;
          }
        }
      }
    }
    sub_B5D69C(this, item);
  }
}


void __fastcall ShopBuyItemConfirmMenu__PlayShowInfomationSound(
        ShopBuyItemConfirmMenu_o *this,
        int32_t seKind,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42ECF8D & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, seKind, (_DWORD)method, v3);
    byte_42ECF8D = 1;
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
    sub_B5D69C(0LL, isDecide);
  NoTitleDialog__Close(noTitleDialog, 0LL);
  if ( isDecide )
  {
    this->fields.state = 3;
    ShopBuyItemConfirmMenu__CallOnDecide(this, 1, v6);
  }
}


void __fastcall ShopBuyItemConfirmMenu__ReturnWarningRarePri(
        ShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  CommonUI_o *Instance; // x19
  System_Action_o *v25; // x20

  if ( (byte_42ECF88 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_ShopBuyItemConfirmMenu___c__DisplayClass93_0__ReturnWarningRarePri_b__0__, v9, v10, v11);
    sub_B5D5C4(&ShopBuyItemConfirmMenu___c__DisplayClass93_0_TypeInfo, v12, v13, v14);
    byte_42ECF88 = 1;
  }
  v15 = sub_B5D694(ShopBuyItemConfirmMenu___c__DisplayClass93_0_TypeInfo);
  ShopBuyItemConfirmMenu___c__DisplayClass93_0___ctor((ShopBuyItemConfirmMenu___c__DisplayClass93_0_o *)v15, 0LL);
  if ( !v15
    || (*(_QWORD *)(v15 + 16) = this,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v15 + 16),
          (System_Int32_array **)this,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23),
        *(_BYTE *)(v15 + 24) = isDecide,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v25 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v25,
          (Il2CppObject *)v15,
          Method_ShopBuyItemConfirmMenu___c__DisplayClass93_0__ReturnWarningRarePri_b__0__,
          0LL),
        !Instance) )
  {
    sub_B5D69C(v16, v17);
  }
  CommonUI__CloseNoTitleDialog(Instance, v25, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__SetAheadText(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isBuyable,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v6; // x19
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  int v37; // w1
  char v38; // w2
  __int64 v39; // x3
  int v40; // w1
  char v41; // w2
  __int64 v42; // x3
  int v43; // w1
  char v44; // w2
  __int64 v45; // x3
  DataManager_o *Instance; // x0
  __int64 v47; // x1
  int32_t purchaseType; // w8
  UILabel_o *presentAheadLabel; // x19
  __int64 *v50; // x8
  System_String_o *v51; // x1
  UILabel_o *v52; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  int32_t bannerId; // w8
  int32_t shopType; // w9
  UILabel_o *v56; // x20
  const MethodInfo *v57; // x3
  UISprite_o *decideButtonImg; // x19
  ShopBuyItemConfirmMenu_o *v59; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_42ECF79 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, (_DWORD)shopEntity, isBuyable, method);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7, v8, v9);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&ShopBuyItemConfirmMenu_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_10660/*"PURCHASE_AFTER_COSTUME"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_10665/*"PURCHASE_AFTER_USER_ITEM"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_10662/*"PURCHASE_AFTER_ITEM_SET"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_8481/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_10663/*"PURCHASE_AFTER_PRESENT_BOX"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_10661/*"PURCHASE_AFTER_EVENT_SVT_GET"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_10664/*"PURCHASE_AFTER_QP"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_10666/*"PURCHASE_AFTER_USER_SVT_COIN"*/, v40, v41, v42);
    this = (ShopBuyItemConfirmMenu_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v43, v44, v45);
    byte_42ECF79 = 1;
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_58;
          MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                Instance,
                                                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
          Instance = (DataManager_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_58;
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        &entity,
                                        (int32_t)Instance,
                                        (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
              v50 = &StringLiteral_10666/*"PURCHASE_AFTER_USER_SVT_COIN"*/;
            }
            else
            {
              presentAheadLabel = v6->fields.presentAheadLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v50 = &StringLiteral_10665/*"PURCHASE_AFTER_USER_ITEM"*/;
            }
LABEL_12:
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)*v50, 0LL);
            if ( presentAheadLabel )
            {
              v51 = (System_String_o *)Instance;
              v52 = presentAheadLabel;
LABEL_14:
              UILabel__set_text(v52, v51, 0LL);
              return;
            }
            goto LABEL_58;
          }
          shopType = shopEntity->fields.shopType;
          v56 = v6->fields.presentAheadLabel;
          if ( shopType != 9 )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10664/*"PURCHASE_AFTER_QP"*/, 0LL);
            if ( v56 )
            {
              v51 = (System_String_o *)Instance;
              v52 = v56;
              goto LABEL_14;
            }
LABEL_58:
            sub_B5D69C(Instance, v47);
          }
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8481/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/, 0LL);
          if ( !v56 )
            goto LABEL_58;
          UILabel__set_text(v56, (System_String_o *)Instance, 0LL);
          decideButtonImg = v6->fields.decideButtonImg;
          v59 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          if ( (BYTE3(ShopBuyItemConfirmMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
            v59 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          }
          ShopBuyItemConfirmMenu__SetSpriteName(
            v59,
            decideButtonImg,
            *(System_String_o **)&v59->fields.bandSprite->fields.m_CachedPtr,
            v57);
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
          v50 = &StringLiteral_10662/*"PURCHASE_AFTER_ITEM_SET"*/;
          goto LABEL_12;
        case 8:
          presentAheadLabel = v6->fields.presentAheadLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v50 = &StringLiteral_10661/*"PURCHASE_AFTER_EVENT_SVT_GET"*/;
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
          v50 = &StringLiteral_10660/*"PURCHASE_AFTER_COSTUME"*/;
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
      v50 = &StringLiteral_10663/*"PURCHASE_AFTER_PRESENT_BOX"*/;
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  ShopBuyItemConfirmMenu_o *v9; // x0
  const MethodInfo *v10; // x3
  UISprite_o *bandSprite; // x1
  __int64 *v12; // x8

  v5 = this;
  if ( (byte_42ECF7A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19990/*"img_txt_shop"*/, (_DWORD)shopEntity, (_DWORD)method, v3);
    this = (ShopBuyItemConfirmMenu_o *)sub_B5D5C4(&StringLiteral_19978/*"img_txt_quest"*/, v6, v7, v8);
    byte_42ECF7A = 1;
  }
  if ( !shopEntity )
    sub_B5D69C(this, shopEntity);
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
      v12 = &StringLiteral_19978/*"img_txt_quest"*/;
      goto LABEL_7;
    case 7:
    case 9:
LABEL_5:
      ShopBuyItemConfirmMenu__SetSpriteActive(this, v5->fields.bandSprite, 1, v3);
      bandSprite = v5->fields.bandSprite;
      v12 = &StringLiteral_19990/*"img_txt_shop"*/;
LABEL_7:
      ShopBuyItemConfirmMenu__SetSpriteName(v9, bandSprite, (System_String_o *)*v12, v10);
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

  if ( (byte_42ECF80 & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu_o *)sub_B5D5C4(
                                         &AtlasManager_TypeInfo,
                                         (_DWORD)itemIcon,
                                         (_DWORD)commonConsumeEntity,
                                         method);
    byte_42ECF80 = 1;
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
      sub_B5D69C(this, itemIcon);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  bool v23; // w0
  System_String_o *v24; // x24
  Il2CppObject *v25; // x25
  Il2CppObject *Name; // x0
  System_String_o *shopEntity; // x0
  __int64 v28; // x1
  ShopBuyItemConfirmMenu_c *v29; // x0
  int32_t PriceIcon; // w0
  int32_t v31; // w22
  int32_t v32; // w23
  ShopBuyItemConfirmMenu_o *v33; // x0
  const MethodInfo *v34; // x3
  int32_t num; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42ECF7F & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)priceDataLabel, (_DWORD)priceIconLabel, itemIcon);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&ShopBuyItemConfirmMenu_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_5717/*"EVENT_ITEM_NEED_INFO"*/, v20, v21, v22);
    byte_42ECF7F = 1;
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
      v23 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)itemIcon, 0LL, 0LL);
      if ( commonConsumeEnt && !v23 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5717/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
        num = commonConsumeEnt->fields.num;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
        Name = (Il2CppObject *)CommonConsumeEntity__GetName(commonConsumeEnt, 0LL);
        shopEntity = System_String__Format_44573324(v24, v25, Name, 0LL);
        if ( !priceDataLabel )
          goto LABEL_27;
        UILabel__set_text(priceDataLabel, shopEntity, 0LL);
        v29 = ShopBuyItemConfirmMenu_TypeInfo;
        if ( (BYTE3(ShopBuyItemConfirmMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
          v29 = ShopBuyItemConfirmMenu_TypeInfo;
        }
        UILabel__SetCondensedScale(priceDataLabel, v29->static_fields->PRICE_DATA_LABEL_MAX_WIDTH, 0LL);
        shopEntity = (System_String_o *)this->fields.shopEntity;
        if ( !shopEntity
          || (PriceIcon = ShopEntity__GetPriceIcon((ShopEntity_o *)shopEntity, 0LL),
              v31 = commonConsumeEnt->fields.num,
              v32 = PriceIcon,
              shopEntity = (System_String_o *)CommonConsumeEntity__GetUserHasNum(commonConsumeEnt, 0LL),
              !priceIconLabel) )
        {
LABEL_27:
          sub_B5D69C(shopEntity, v28);
        }
        UIIconLabel__SetPurchaseDecision(priceIconLabel, v32, v31, (int32_t)shopEntity, 0LL);
        ShopBuyItemConfirmMenu__SetCommonConsumeIcon(v33, itemIcon, commonConsumeEnt, v34);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__SetDecideButtonSprite(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        int32_t eventId,
        int32_t buttonSpriteId,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v7; // x19
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UISprite_o *deceideBtnSprite; // x21
  ShopBuyItemConfirmMenu_c *v21; // x0
  System_String_o *VALENTINE_BTN_NAME; // x22
  System_String_o *v23; // x20
  System_String_o *v24; // x0
  System_String_o *v25; // x20
  UISprite_o *v26; // x20
  int32_t v27; // [xsp+Ch] [xbp-24h] BYREF

  v7 = this;
  v27 = buttonSpriteId;
  if ( (byte_42ECF81 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)shopEntity, eventId, *(_QWORD *)&buttonSpriteId);
    sub_B5D5C4(&EventRewardRootComponent_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&ShopBuyItemConfirmMenu_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v14, v15, v16);
    this = (ShopBuyItemConfirmMenu_o *)sub_B5D5C4(&StringLiteral_17312/*"btn_txt_trade"*/, v17, v18, v19);
    byte_42ECF81 = 1;
  }
  if ( !shopEntity )
    goto LABEL_20;
  if ( shopEntity->fields.payType == 6 )
  {
    if ( !buttonSpriteId )
      goto LABEL_13;
    deceideBtnSprite = v7->fields.deceideBtnSprite;
    v21 = ShopBuyItemConfirmMenu_TypeInfo;
    if ( (BYTE3(ShopBuyItemConfirmMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
      v21 = ShopBuyItemConfirmMenu_TypeInfo;
    }
    VALENTINE_BTN_NAME = v21->static_fields->VALENTINE_BTN_NAME;
    v23 = System_Int32__ToString((int)shopEntity + 24, 0LL);
    v24 = System_Int32__ToString((int32_t)&v27, 0LL);
    v25 = System_String__Concat_44581200(VALENTINE_BTN_NAME, v23, (System_String_o *)StringLiteral_16096/*"_"*/, v24, 0LL);
    if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    }
    if ( !EventRewardRootComponent__setRewardInfoImg(deceideBtnSprite, v25, 0LL) )
    {
LABEL_13:
      v26 = v7->fields.deceideBtnSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetCommon(v26, 0LL);
      this = (ShopBuyItemConfirmMenu_o *)v7->fields.deceideBtnSprite;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17312/*"btn_txt_trade"*/, 0LL);
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
      sub_B5D69C(this, shopEntity);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  UILabel_o *v10; // x1
  bool v11; // w2
  UILabel_o *extensionInfoLabel; // x21
  System_String_o *v13; // x0
  const MethodInfo *v14; // x3

  v6 = this;
  if ( (byte_42ECF7D & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)shopEntity, isNotHavingShopItemReceived, method);
    this = (ShopBuyItemConfirmMenu_o *)sub_B5D5C4(&StringLiteral_9436/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/, v7, v8, v9);
    byte_42ECF7D = 1;
  }
  if ( !shopEntity )
    sub_B5D69C(this, shopEntity);
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
      v13 = LocalizationManager__Get((System_String_o *)StringLiteral_9436/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/, 0LL);
      ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)v13, extensionInfoLabel, v13, v14);
    }
LABEL_12:
    v10 = v6->fields.extensionInfoLabel;
    v11 = isNotHavingShopItemReceived;
    goto LABEL_13;
  }
  v10 = v6->fields.extensionInfoLabel;
  v11 = 0;
LABEL_13:
  ShopBuyItemConfirmMenu__SetLabelActive(this, v10, v11, method);
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
  if ( (byte_42ECF72 & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu_o *)sub_B5D5C4(&StringLiteral_9405/*"NONE"*/, (_DWORD)shopEntity, isInPreparation, method);
    byte_42ECF72 = 1;
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
    sub_B5D69C(this, shopEntity);
  }
  if ( purchaseType == 1 || purchaseType == 4 )
    goto LABEL_18;
LABEL_16:
  if ( !System_String__IsNullOrEmpty(shopEntity->fields.infoMessage, 0LL)
    && System_String__op_Inequality(shopEntity->fields.infoMessage, (System_String_o *)StringLiteral_9405/*"NONE"*/, 0LL) )
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
  sub_B5D560(
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  UnityEngine_Object_o *chocolateSprite; // x22
  UnityEngine_Component_o *gameObject; // x0
  __int64 v18; // x1
  ItemIconComponent_o *itemIcon; // x21
  int32_t purchaseType; // w22
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  UnityEngine_Object_o *v22; // x20
  UnityEngine_GameObject_o *v23; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  int32_t imageId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42ECF73 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)shopEntity, isInPreparation, method);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    byte_42ECF73 = 1;
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
      sub_B5D69C(gameObject, v18);
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
    gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_34;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)gameObject,
                                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    gameObject = (UnityEngine_Component_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_34;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           MasterData_WarQuestSelectionMaster,
           &entity,
           (int32_t)gameObject,
           (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      v22 = (UnityEngine_Object_o *)this->fields.chocolateSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.chocolateSprite;
        if ( !gameObject )
          goto LABEL_34;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( !entity )
          goto LABEL_34;
        v23 = (UnityEngine_GameObject_o *)gameObject;
        gameObject = (UnityEngine_Component_o *)ServantEntity__get_IsChocolateSvtEquip((ServantEntity_o *)entity, 0LL);
        if ( !v23 )
          goto LABEL_34;
        UnityEngine_GameObject__SetActive(v23, (unsigned __int8)gameObject & 1, 0LL);
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
  __int64 v7; // x1

  if ( (byte_42ECF6E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)label, isActive, method);
    byte_42ECF6E = 1;
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
      sub_B5D69C(gameObject, v7);
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
  __int64 v7; // x1

  if ( (byte_42ECF6F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)label, (_DWORD)text, method);
    byte_42ECF6F = 1;
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
      sub_B5D69C(v6, v7);
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
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  System_String_o *v15; // x0
  const MethodInfo *v16; // x3
  UILabel_o *messageLabel; // x19
  UILabel_o *v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x1
  System_String_o *detail; // x20
  System_String_o *v22; // x0
  System_String_o *itemName; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-28h] BYREF

  message = preparationMessage;
  v8 = this;
  if ( (byte_42ECF77 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)shopEntity, isInPreparation, preparationMessage);
    sub_B5D5C4(&StringLiteral_15851/*"[000000]"*/, v9, v10, v11);
    this = (ShopBuyItemConfirmMenu_o *)sub_B5D5C4(&StringLiteral_15852/*"[000000]？"*/, v12, v13, v14);
    byte_42ECF77 = 1;
  }
  itemName = 0LL;
  if ( !shopEntity )
    sub_B5D69C(this, shopEntity);
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
      v20 = LocalizationManager__ReplaceCommonTag(detail, 0, 0LL);
      v22 = (System_String_o *)StringLiteral_15851/*"[000000]"*/;
      goto LABEL_17;
    }
    messageLabel = v8->fields.messageLabel;
    v20 = message;
LABEL_16:
    v22 = (System_String_o *)StringLiteral_15851/*"[000000]"*/;
LABEL_17:
    v15 = System_String__Concat_44577788(v22, v20, 0LL);
    v18 = messageLabel;
    v19 = v15;
    goto LABEL_18;
  }
  v15 = (System_String_o *)ShopEntity__checkFlag(shopEntity, 8, 0LL);
  messageLabel = v8->fields.messageLabel;
  if ( ((unsigned __int8)v15 & 1) == 0 )
  {
    v20 = preparationMessage;
    goto LABEL_16;
  }
  v18 = messageLabel;
  v19 = (System_String_o *)StringLiteral_15852/*"[000000]？"*/;
LABEL_18:
  ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)v15, v18, v19, v16);
}


void __fastcall ShopBuyItemConfirmMenu__SetNameText(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        System_String_o *replacedName,
        System_String_o *preparationItemName,
        const MethodInfo *method)
{
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  System_String_o *IsNullOrEmpty; // x0
  __int64 v15; // x1
  System_String_o *v16; // x1
  struct UICrossNarrowLabel_o *nameTextLabel; // x19

  if ( (byte_42ECF74 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)shopEntity, isInPreparation, replacedName);
    sub_B5D5C4(&StringLiteral_24287/*"？"*/, v11, v12, v13);
    byte_42ECF74 = 1;
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
      v16 = IsNullOrEmpty;
      IsNullOrEmpty = (System_String_o *)nameTextLabel;
      goto LABEL_16;
    }
LABEL_17:
    sub_B5D69C(IsNullOrEmpty, v15);
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
      v16 = replacedName;
      goto LABEL_16;
    }
    goto LABEL_17;
  }
  IsNullOrEmpty = (System_String_o *)this->fields.nameTextLabel;
  if ( !IsNullOrEmpty )
    goto LABEL_17;
  v16 = (System_String_o *)StringLiteral_24287/*"？"*/;
LABEL_16:
  UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)IsNullOrEmpty, v16, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__SetNumText(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v6; // x19
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x3
  UILabel_o *numTitleLabel; // x21
  System_String_o *v13; // x0
  const MethodInfo *v14; // x3
  ShopBuyItemConfirmMenu_o *v15; // x0
  const MethodInfo *v16; // x3
  UILabel_o *numTextLabel; // x19
  int32_t HoldCount; // w0
  System_String_o *NumberFormat; // x0
  const MethodInfo *v20; // x3
  ShopBuyItemConfirmMenu_o *v21; // x0
  const MethodInfo *v22; // x3

  v6 = this;
  if ( (byte_42ECF7C & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)shopEntity, isInPreparation, method);
    this = (ShopBuyItemConfirmMenu_o *)sub_B5D5C4(&StringLiteral_12264/*"SHOP_BUY_ITEM_HOLD"*/, v7, v8, v9);
    byte_42ECF7C = 1;
  }
  if ( !isInPreparation )
  {
    if ( shopEntity )
      goto LABEL_8;
LABEL_14:
    sub_B5D69C(this, shopEntity);
  }
  if ( !shopEntity )
    goto LABEL_14;
  v10 = ShopEntity__checkFlag(shopEntity, 2, 0LL);
  if ( v10 )
    goto LABEL_13;
LABEL_8:
  v10 = ShopEntity__checkHoldDisp(shopEntity, 0LL);
  if ( !v10 )
  {
LABEL_13:
    ShopBuyItemConfirmMenu__SetLabelActive((ShopBuyItemConfirmMenu_o *)v10, v6->fields.numTitleLabel, 0, v11);
    ShopBuyItemConfirmMenu__SetLabelActive(v21, v6->fields.numTextLabel, 0, v22);
    return;
  }
  ShopBuyItemConfirmMenu__SetLabelActive((ShopBuyItemConfirmMenu_o *)v10, v6->fields.numTitleLabel, 1, v11);
  numTitleLabel = v6->fields.numTitleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12264/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)v13, numTitleLabel, v13, v14);
  ShopBuyItemConfirmMenu__SetLabelActive(v15, v6->fields.numTextLabel, 1, v16);
  numTextLabel = v6->fields.numTextLabel;
  HoldCount = ShopEntity__getHoldCount(shopEntity, 0LL);
  NumberFormat = LocalizationManager__GetNumberFormat(HoldCount, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)NumberFormat, numTextLabel, NumberFormat, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__SetPriceDataText(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        bool isNotHavingShopItemReceived,
        const MethodInfo *method)
{
  ShopEntity_o *v7; // x20
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  int v30; // w1
  char v31; // w2
  __int64 v32; // x3
  int v33; // w1
  char v34; // w2
  __int64 v35; // x3
  int v36; // w1
  char v37; // w2
  __int64 v38; // x3
  int v39; // w1
  char v40; // w2
  __int64 v41; // x3
  int v42; // w1
  char v43; // w2
  __int64 v44; // x3
  int v45; // w1
  char v46; // w2
  __int64 v47; // x3
  int v48; // w1
  char v49; // w2
  __int64 v50; // x3
  int v51; // w1
  char v52; // w2
  __int64 v53; // x3
  __int64 eventItemIcon; // x0
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x5
  __int64 v57; // x21
  const MethodInfo *v58; // x1
  unsigned __int64 i; // x23
  struct System_Int32_array *itemIds; // x8
  __int64 v61; // x24
  struct UILabel_array *priceDataLabels; // x8
  struct UIIconLabel_array *priceIconLabels; // x8
  struct UILabel_array *v64; // x8
  struct ItemIconComponent_array *eventItemIcons; // x8
  struct UILabel_array *v66; // x8
  UILabel_o *v67; // x25
  System_String_o *v68; // x26
  struct UIIconLabel_array *v69; // x8
  UIIconLabel_o *v70; // x25
  int32_t v71; // w26
  struct UILabel_o *priceDataLabel; // x22
  __int64 *v73; // x8
  System_String_o *v74; // x0
  System_String_o *v75; // x1
  UILabel_o *v76; // x0
  struct System_Int32_array *v77; // x8
  WarEntity_o *v78; // x0
  UILabel_o *v79; // x23
  WarEntity_o *v80; // x22
  __int64 *v81; // x8
  struct System_Int32_array *v82; // x8
  WarEntity_o *v83; // x0
  UIIconLabel_o *v84; // x23
  int32_t v85; // w24
  struct System_Int32_array *v86; // x8
  UIIconLabel_o *v87; // x19
  int32_t v88; // w22
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  __int64 v90; // x9
  UILabel_o *v91; // x23
  UIIconLabel_o *v92; // x23
  int32_t v93; // w24
  int32_t Price; // w21
  double v95; // d0
  int v96; // w21
  UILabel_o *priceFreeDataLabel; // x19
  _BOOL8 IsSetStrikethrough; // x0
  const MethodInfo *v99; // x3
  __int64 v100; // x8
  __int64 v101; // x8
  __int64 v102; // x9
  __int64 v103; // x10
  __int64 j; // x20
  struct UILabel_array *v105; // x11
  unsigned __int64 max_length; // x12
  unsigned __int64 v107; // x10
  struct UIIconLabel_array *v108; // x11
  unsigned __int64 v109; // x12
  UIIconLabel_o *v110; // x2
  struct ItemIconComponent_array *v111; // x11
  unsigned __int64 v112; // x12
  ItemIconComponent_o *v113; // x3
  __int64 v114; // x10
  int32_t v115; // w23
  WarEntity_o *Entity; // x23
  UILabel_o *v117; // x22
  System_String_o *v118; // x24
  UILabel_o *v119; // x22
  UIIconLabel_o *priceIconLabel; // x22
  int32_t PriceIcon; // w24
  __int64 v122; // x0
  int32_t v123; // [xsp+8h] [xbp-58h] BYREF
  int32_t Prices; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v125; // 0:s0.4,4:s1.4,8:s2.4

  v7 = shopEntity;
  if ( (byte_42ECF7E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ItemMaster___,
      (_DWORD)shopEntity,
      isInPreparation,
      isNotHavingShopItemReceived);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&int_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Math_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&ShopBuyItemConfirmMenu_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_12525/*"STONE_FRAGMENTS_NEED_INFO"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_1704/*"ANONYMOUS_NEED_INFO"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_12531/*"STONE_NEED_INFO"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_11011/*"QP_NAME"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_11145/*"RARE_PRI_NEED_INFO"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_1547/*"?"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_5717/*"EVENT_ITEM_NEED_INFO"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_8707/*"MANA_NEED_INFO"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_12288/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, v51, v52, v53);
    byte_42ECF7E = 1;
  }
  eventItemIcon = (__int64)this->fields.eventItemIcon;
  if ( !eventItemIcon )
    goto LABEL_191;
  ItemIconComponent__Clear((ItemIconComponent_o *)eventItemIcon, 0LL);
  eventItemIcon = (__int64)ShopBuyItemConfirmMenu__GetUserItemCounts(this, v55);
  if ( !v7 )
    goto LABEL_191;
  v57 = eventItemIcon;
  switch ( v7->fields.payType )
  {
    case 1:
      priceDataLabel = this->fields.priceDataLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v73 = &StringLiteral_12531/*"STONE_NEED_INFO"*/;
      goto LABEL_54;
    case 2:
      priceDataLabel = this->fields.priceDataLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v73 = &StringLiteral_11011/*"QP_NAME"*/;
LABEL_54:
      v74 = (System_String_o *)*v73;
      goto LABEL_59;
    case 4:
      priceDataLabel = this->fields.priceDataLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v74 = (System_String_o *)StringLiteral_8707/*"MANA_NEED_INFO"*/;
LABEL_59:
      eventItemIcon = (__int64)LocalizationManager__Get(v74, 0LL);
      if ( !priceDataLabel )
        goto LABEL_191;
      v75 = (System_String_o *)eventItemIcon;
      v76 = priceDataLabel;
      goto LABEL_91;
    case 6:
    case 0xB:
      if ( ShopEntity__GetItemCount(v7, 0LL) < 2 )
      {
        if ( isNotHavingShopItemReceived )
          return;
        if ( ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v58) )
        {
          eventItemIcon = (__int64)ShopEntity__GetAnotherPayItemIds(v7, 0LL);
          if ( !eventItemIcon )
            goto LABEL_191;
        }
        else
        {
          eventItemIcon = (__int64)v7->fields.itemIds;
          if ( !eventItemIcon )
            goto LABEL_191;
        }
        if ( *(_DWORD *)(eventItemIcon + 24) )
        {
          v115 = *(_DWORD *)(eventItemIcon + 32);
          eventItemIcon = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !eventItemIcon )
            goto LABEL_191;
          eventItemIcon = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)eventItemIcon,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !eventItemIcon )
            goto LABEL_191;
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)eventItemIcon,
                     v115,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( isInPreparation )
          {
            if ( ShopEntity__checkFlag(v7, 64, 0LL) )
            {
              eventItemIcon = (__int64)this->fields.priceDataLabel;
              if ( eventItemIcon )
              {
                UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1547/*"?"*/, 0LL);
                eventItemIcon = (__int64)this->fields.priceIconLabel;
                if ( eventItemIcon )
                {
                  UIIconLabel__SetEventQuestion((UIIconLabel_o *)eventItemIcon, 0LL);
                  return;
                }
              }
              goto LABEL_191;
            }
            if ( ShopEntity__checkFlag(v7, 32, 0LL) )
            {
              eventItemIcon = (__int64)this->fields.priceDataLabel;
              if ( eventItemIcon )
              {
                UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1547/*"?"*/, 0LL);
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
          v117 = this->fields.priceDataLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v118 = LocalizationManager__Get((System_String_o *)StringLiteral_5717/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
          Prices = ShopEntity__GetPrices(v7, 0, 0LL);
          eventItemIcon = j_il2cpp_value_box_0(int_TypeInfo, &Prices);
          if ( !Entity )
            goto LABEL_191;
          eventItemIcon = (__int64)System_String__Format_44573324(
                                     v118,
                                     (Il2CppObject *)eventItemIcon,
                                     (Il2CppObject *)Entity->fields.age,
                                     0LL);
          if ( !v117 )
            goto LABEL_191;
          UILabel__set_text(v117, (System_String_o *)eventItemIcon, 0LL);
          v119 = this->fields.priceDataLabel;
          eventItemIcon = (__int64)ShopBuyItemConfirmMenu_TypeInfo;
          if ( (BYTE3(ShopBuyItemConfirmMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
          }
          if ( !v119 )
            goto LABEL_191;
          UILabel__SetCondensedScale(
            v119,
            ShopBuyItemConfirmMenu_TypeInfo->static_fields->PRICE_DATA_LABEL_MAX_WIDTH,
            0LL);
          priceIconLabel = this->fields.priceIconLabel;
          PriceIcon = ShopEntity__GetPriceIcon(v7, 0LL);
          eventItemIcon = ShopEntity__GetPrices(v7, 0, 0LL);
          if ( !v57 )
            goto LABEL_191;
          if ( *(_DWORD *)(v57 + 24) )
          {
            if ( priceIconLabel )
            {
              UIIconLabel__SetPurchaseDecision(priceIconLabel, PriceIcon, eventItemIcon, *(_DWORD *)(v57 + 32), 0LL);
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
            sub_B5D69C(eventItemIcon, shopEntity);
          }
        }
LABEL_192:
        v122 = sub_B5D6C8(eventItemIcon);
        sub_B5D668(v122, 0LL);
      }
      if ( ShopEntity__GetItemCount(v7, 0LL) >= 1 )
      {
        for ( i = 0LL; (__int64)i < ShopEntity__GetItemCount(v7, 0LL); ++i )
        {
          eventItemIcon = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !eventItemIcon )
            goto LABEL_191;
          eventItemIcon = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)eventItemIcon,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
          itemIds = v7->fields.itemIds;
          if ( !itemIds )
            goto LABEL_191;
          if ( i >= itemIds->max_length )
            goto LABEL_192;
          if ( !eventItemIcon )
            goto LABEL_191;
          eventItemIcon = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)eventItemIcon,
                                     itemIds->m_Items[i + 1],
                                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          v61 = eventItemIcon;
          if ( !isInPreparation )
            goto LABEL_30;
          eventItemIcon = ShopEntity__checkFlag(v7, 64, 0LL);
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
            UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1547/*"?"*/, 0LL);
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
          eventItemIcon = ShopEntity__checkFlag(v7, 32, 0LL);
          if ( (eventItemIcon & 1) != 0 )
          {
            v64 = this->fields.priceDataLabels;
            if ( !v64 )
              goto LABEL_191;
            if ( i >= v64->max_length )
              goto LABEL_192;
            eventItemIcon = (__int64)v64->m_Items[i];
            if ( !eventItemIcon )
              goto LABEL_191;
            UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1547/*"?"*/, 0LL);
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
            v66 = this->fields.priceDataLabels;
            if ( !v66 )
              goto LABEL_191;
            if ( i >= v66->max_length )
              goto LABEL_192;
            v67 = v66->m_Items[i];
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v68 = LocalizationManager__Get((System_String_o *)StringLiteral_5717/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
            v123 = ShopEntity__GetPrices(v7, i, 0LL);
            eventItemIcon = j_il2cpp_value_box_0(int_TypeInfo, &v123);
            if ( !v61 )
              goto LABEL_191;
            eventItemIcon = (__int64)System_String__Format_44573324(
                                       v68,
                                       (Il2CppObject *)eventItemIcon,
                                       *(Il2CppObject **)(v61 + 24),
                                       0LL);
            if ( !v67 )
              goto LABEL_191;
            UILabel__set_text(v67, (System_String_o *)eventItemIcon, 0LL);
            v69 = this->fields.priceIconLabels;
            if ( !v69 )
              goto LABEL_191;
            if ( i >= v69->max_length )
              goto LABEL_192;
            v70 = v69->m_Items[i];
            v71 = ShopEntity__GetPriceIcon(v7, 0LL);
            eventItemIcon = ShopEntity__GetPrices(v7, i, 0LL);
            if ( !v57 )
              goto LABEL_191;
            if ( i >= *(unsigned int *)(v57 + 24) )
              goto LABEL_192;
            if ( !v70 )
              goto LABEL_191;
            UIIconLabel__SetPurchaseDecision(v70, v71, eventItemIcon, *(_DWORD *)(v57 + 32 + 4 * i), 0LL);
            eventItemIcon = (__int64)this->fields.eventItemIcon;
            if ( !eventItemIcon )
              goto LABEL_191;
            ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, *(_DWORD *)(v61 + 40), -1, 0LL);
          }
        }
      }
      return;
    case 8:
      eventItemIcon = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_191;
      eventItemIcon = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
      v77 = v7->fields.itemIds;
      if ( !v77 )
        goto LABEL_191;
      if ( !v77->max_length )
        goto LABEL_192;
      if ( !eventItemIcon )
        goto LABEL_191;
      v78 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)eventItemIcon,
              v77->m_Items[1],
              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v79 = this->fields.priceDataLabel;
      v80 = v78;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v81 = &StringLiteral_12525/*"STONE_FRAGMENTS_NEED_INFO"*/;
      goto LABEL_77;
    case 9:
      eventItemIcon = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_191;
      eventItemIcon = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
      v82 = v7->fields.itemIds;
      if ( !v82 )
        goto LABEL_191;
      if ( !v82->max_length )
        goto LABEL_192;
      if ( !eventItemIcon )
        goto LABEL_191;
      v83 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)eventItemIcon,
              v82->m_Items[1],
              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v79 = this->fields.priceDataLabel;
      v80 = v83;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v81 = &StringLiteral_1704/*"ANONYMOUS_NEED_INFO"*/;
LABEL_77:
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)*v81, 0LL);
      if ( !v79 )
        goto LABEL_191;
      UILabel__set_text(v79, (System_String_o *)eventItemIcon, 0LL);
      v84 = this->fields.priceIconLabel;
      v85 = ShopEntity__GetPriceIcon(v7, 0LL);
      eventItemIcon = ShopEntity__GetPrice(v7, 0LL);
      if ( !v57 )
        goto LABEL_191;
      if ( !*(_DWORD *)(v57 + 24) )
        goto LABEL_192;
      if ( !v84 )
        goto LABEL_191;
      UIIconLabel__SetPurchaseDecision(v84, v85, eventItemIcon, *(_DWORD *)(v57 + 32), 0LL);
      if ( !v80 )
        goto LABEL_191;
      eventItemIcon = (__int64)this->fields.eventItemIcon;
      if ( !eventItemIcon )
        goto LABEL_191;
      ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, (int32_t)v80->fields.longName, -1, 0LL);
      return;
    case 0xA:
      v91 = this->fields.priceDataLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11145/*"RARE_PRI_NEED_INFO"*/, 0LL);
      if ( !v91 )
        goto LABEL_191;
      UILabel__set_text(v91, (System_String_o *)eventItemIcon, 0LL);
      v92 = this->fields.priceIconLabel;
      v93 = ShopEntity__GetPriceIcon(v7, 0LL);
      eventItemIcon = ShopEntity__GetPrice(v7, 0LL);
      if ( !v57 )
        goto LABEL_191;
      if ( !*(_DWORD *)(v57 + 24) )
        goto LABEL_192;
      if ( !v92 )
        goto LABEL_191;
      UIIconLabel__SetPurchaseDecision(v92, v93, eventItemIcon, *(_DWORD *)(v57 + 32), 0LL);
      if ( ShopEntity__GetPrice(v7, 0LL) )
      {
        Price = ShopEntity__GetPrice(v7, 0LL);
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        v95 = log10((double)Price);
        if ( v95 == INFINITY )
          v95 = -v95;
        v96 = (int)v95 + 1;
      }
      else
      {
        v96 = 1;
      }
      IsSetStrikethrough = ShopEntity__IsSetStrikethrough(v7, isInPreparation, 0LL);
      if ( IsSetStrikethrough )
      {
        v100 = 344LL;
        if ( v96 == 1 )
          v100 = 336LL;
        ShopBuyItemConfirmMenu__SetLabelActive(
          (ShopBuyItemConfirmMenu_o *)IsSetStrikethrough,
          *(UILabel_o **)((char *)&this->klass + v100),
          1,
          v99);
      }
      if ( !ShopEntity__IsAfterTheFreeShopReleaseDate(v7, 0LL) || !ShopEntity__IsFulFilledFreeExchangeCondition(v7, 0LL) )
        return;
      eventItemIcon = (__int64)this->fields.freeLabel;
      if ( !eventItemIcon )
        goto LABEL_191;
      eventItemIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventItemIcon, 0LL);
      if ( !eventItemIcon )
        goto LABEL_191;
      eventItemIcon = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)eventItemIcon, 0LL);
      if ( !eventItemIcon )
        goto LABEL_191;
      v101 = 376LL;
      if ( v96 == 1 )
        v101 = 364LL;
      v102 = v96 == 1 ? 360LL : 372LL;
      v103 = v96 == 1 ? 356LL : 368LL;
      v125.fields.y = *(float *)((char *)&this->klass + v102);
      v125.fields.x = *(float *)((char *)&this->klass + v103);
      v125.fields.z = *(float *)((char *)&this->klass + v101);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventItemIcon, v125, 0LL);
      eventItemIcon = (__int64)this->fields.freeLabel;
      if ( !eventItemIcon )
        goto LABEL_191;
      eventItemIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventItemIcon, 0LL);
      if ( !eventItemIcon )
        goto LABEL_191;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventItemIcon, 1, 0LL);
      return;
    case 0xC:
      eventItemIcon = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_191;
      eventItemIcon = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
      v86 = v7->fields.itemIds;
      if ( !v86 )
        goto LABEL_191;
      if ( !v86->max_length )
        goto LABEL_192;
      if ( !eventItemIcon )
        goto LABEL_191;
      eventItemIcon = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)eventItemIcon,
                                 v86->m_Items[1],
                                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !eventItemIcon || !this->fields.priceDataLabel )
        goto LABEL_191;
      v75 = *(System_String_o **)(eventItemIcon + 24);
      v76 = this->fields.priceDataLabel;
LABEL_91:
      UILabel__set_text(v76, v75, 0LL);
      v87 = this->fields.priceIconLabel;
      v88 = ShopEntity__GetPriceIcon(v7, 0LL);
      eventItemIcon = ShopEntity__GetPrice(v7, 0LL);
      if ( !v57 )
        goto LABEL_191;
      if ( !*(_DWORD *)(v57 + 24) )
        goto LABEL_192;
      if ( !v87 )
        goto LABEL_191;
      UIIconLabel__SetPurchaseDecision(v87, v88, eventItemIcon, *(_DWORD *)(v57 + 32), 0LL);
      return;
    case 0xD:
      priceFreeDataLabel = this->fields.priceFreeDataLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12288/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, 0LL);
      if ( !priceFreeDataLabel )
        goto LABEL_191;
      UILabel__set_text(priceFreeDataLabel, (System_String_o *)eventItemIcon, 0LL);
      return;
    case 0xE:
      commonConsumeEntities = this->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        return;
      v90 = *(_QWORD *)&commonConsumeEntities->max_length;
      if ( (_DWORD)v90 == 1 )
      {
        ShopBuyItemConfirmMenu__SetCommonConsumePriceText(
          this,
          this->fields.priceDataLabel,
          this->fields.priceIconLabel,
          this->fields.eventItemIcon,
          commonConsumeEntities->m_Items[0],
          v56);
        return;
      }
      if ( (int)v90 < 2 )
        return;
      for ( j = 4LL; ; ++j )
      {
        v105 = this->fields.priceDataLabels;
        if ( !v105 )
          break;
        max_length = v105->max_length;
        v107 = j - 4;
        if ( j - 4 >= (int)max_length )
        {
          shopEntity = 0LL;
        }
        else
        {
          if ( v107 >= max_length )
            goto LABEL_192;
          shopEntity = (ShopEntity_o *)*((_QWORD *)&v105->obj.klass + j);
        }
        v108 = this->fields.priceIconLabels;
        if ( !v108 )
          break;
        v109 = v108->max_length;
        if ( (__int64)v107 >= (int)v109 )
        {
          v110 = 0LL;
        }
        else
        {
          if ( v107 >= v109 )
            goto LABEL_192;
          v110 = (UIIconLabel_o *)*((_QWORD *)&v108->obj.klass + j);
        }
        v111 = this->fields.eventItemIcons;
        if ( !v111 )
          break;
        v112 = v111->max_length;
        if ( (__int64)v107 >= (int)v112 )
        {
          v113 = 0LL;
        }
        else
        {
          if ( v107 >= v112 )
            goto LABEL_192;
          v113 = (ItemIconComponent_o *)*((_QWORD *)&v111->obj.klass + j);
        }
        if ( v107 >= (unsigned int)v90 )
          goto LABEL_192;
        ShopBuyItemConfirmMenu__SetCommonConsumePriceText(
          this,
          (UILabel_o *)shopEntity,
          v110,
          v113,
          *((CommonConsumeEntity_o **)&commonConsumeEntities->obj.klass + j),
          v56);
        commonConsumeEntities = this->fields.commonConsumeEntities;
        if ( !commonConsumeEntities )
          goto LABEL_191;
        LODWORD(v90) = commonConsumeEntities->max_length;
        v114 = j - 3;
        if ( v114 >= (int)v90 )
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
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x4

  v6 = isNotHavingShopItemReceived;
  ShopBuyItemConfirmMenu__SetPriceInfoActive(
    this,
    shopEntity,
    isNotHavingShopItemReceived,
    *(const MethodInfo **)&buttonSpriteId);
  ShopBuyItemConfirmMenu__SetPriceDataText(this, shopEntity, isInPreparation, v6, v11);
  if ( !shopEntity )
    sub_B5D69C(v12, v13);
  ShopBuyItemConfirmMenu__SetDecideButtonSprite(this, shopEntity, v14, buttonSpriteId, v15);
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
        sub_B5D69C(this, shopEntity);
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
  __int64 v7; // x1

  if ( (byte_42ECF70 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)sprite, isActive, method);
    byte_42ECF70 = 1;
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
      sub_B5D69C(gameObject, v7);
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
  __int64 v7; // x1

  if ( (byte_42ECF71 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)sprite, (_DWORD)spriteName, method);
    byte_42ECF71 = 1;
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
      sub_B5D69C(v6, v7);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
  }
}


void __fastcall ShopBuyItemConfirmMenu__SetTextOnMask(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  int v37; // w1
  char v38; // w2
  __int64 v39; // x3
  ShopReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v41; // x1
  ShopReleaseMaster_o *v42; // x22
  _BOOL4 isExistCondType; // w23
  _BOOL4 v44; // w24
  _BOOL4 v45; // w25
  _BOOL4 v46; // w27
  System_String_o *IsServant; // x0
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x3
  char v50; // w26
  struct UILabel_o *v51; // x19
  __int64 *v52; // x8
  struct System_Int32_array *targetIds; // x8
  __int64 *v54; // x8
  UILabel_o *textOnMask; // x1
  System_String_o *v56; // x2
  UILabel_o *v57; // x19
  unsigned int shopType; // w8
  __int64 v59; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_42ECF7B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)shopEntity, isInPreparation, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_ShopReleaseMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v13, v14, v15);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_12284/*"SHOP_CANT_BUY"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_12321/*"SHOP_QUEST_OPEN"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_12319/*"SHOP_QUEST_ALREADY_CLEARED"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_12317/*"SHOP_NOT_RELEASE_SET_ITEM"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_1/*""*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_12236/*"SHOP_ALREADY_GET"*/, v37, v38, v39);
    byte_42ECF7B = 1;
  }
  questId = 0;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  if ( !shopEntity )
    goto LABEL_74;
  v42 = Master_WarQuestSelectionMaster;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_74;
  isExistCondType = ShopReleaseMaster__isExistCondType(Master_WarQuestSelectionMaster, shopEntity->fields.id, 38, 0LL);
  v44 = ShopReleaseMaster__isExistCondType(v42, shopEntity->fields.id, 41, 0LL);
  v45 = ShopReleaseMaster__isExistCondType(v42, shopEntity->fields.id, 40, 0LL);
  v46 = ShopReleaseMaster__isExistCondType(v42, shopEntity->fields.id, 78, 0LL)
     || ShopReleaseMaster__isExistCondType(v42, shopEntity->fields.id, 79, 0LL);
  IsServant = (System_String_o *)ShopReleaseMaster__isExistCondType(v42, shopEntity->fields.id, 108, 0LL);
  v50 = (char)IsServant;
  switch ( shopEntity->fields.purchaseType )
  {
    case 4:
      Master_WarQuestSelectionMaster = (ShopReleaseMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_74;
      Master_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Master_WarQuestSelectionMaster,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      targetIds = shopEntity->fields.targetIds;
      if ( !targetIds )
        goto LABEL_74;
      if ( !targetIds->max_length )
      {
        v59 = sub_B5D6C8(Master_WarQuestSelectionMaster);
        sub_B5D668(v59, 0LL);
      }
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_74;
      IsServant = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                       &entity,
                                       targetIds->m_Items[1],
                                       (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
            v54 = &StringLiteral_12284/*"SHOP_CANT_BUY"*/;
            goto LABEL_71;
          }
          if ( (isExistCondType || v44 || v45 || v46) | v50 & 1 )
          {
            IsServant = (System_String_o *)ShopReleaseMaster__CondClearCheck(v42, shopEntity->fields.id, 40, 0LL);
            if ( ((unsigned __int8)IsServant & 1) == 0 )
            {
              v56 = (System_String_o *)StringLiteral_1/*""*/;
              goto LABEL_73;
            }
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v54 = &StringLiteral_12236/*"SHOP_ALREADY_GET"*/;
LABEL_71:
            IsServant = LocalizationManager__Get((System_String_o *)*v54, 0LL);
            v56 = IsServant;
LABEL_73:
            textOnMask = this->fields.textOnMask;
            goto LABEL_65;
          }
          goto LABEL_64;
        }
LABEL_74:
        sub_B5D69C(Master_WarQuestSelectionMaster, v41);
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
                                       v49);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_64;
      IsServant = (System_String_o *)ShopEntity__IsAnotherItemBuyable(shopEntity, 0LL);
      if ( ((unsigned __int8)IsServant & 1) != 0 )
        goto LABEL_64;
LABEL_13:
      v51 = this->fields.textOnMask;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v52 = &StringLiteral_12236/*"SHOP_ALREADY_GET"*/;
      goto LABEL_51;
    case 5:
      IsServant = (System_String_o *)ShopBuyItemConfirmMenu__GetIsSetItemEventShop(
                                       (ShopBuyItemConfirmMenu_o *)IsServant,
                                       shopEntity->fields.targetIds,
                                       v48);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_41;
      if ( !isInPreparation )
        goto LABEL_64;
      v51 = this->fields.textOnMask;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v52 = &StringLiteral_12317/*"SHOP_NOT_RELEASE_SET_ITEM"*/;
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
            v57 = this->fields.textOnMask;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (ShopReleaseMaster_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_12321/*"SHOP_QUEST_OPEN"*/,
                                                                      0LL);
            if ( v57 )
            {
              UILabel__set_text(v57, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
              return;
            }
            goto LABEL_74;
          }
        }
LABEL_64:
        textOnMask = this->fields.textOnMask;
        v56 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_65;
      }
      IsServant = (System_String_o *)ShopEntity__isQuestNotClearItemClosed(shopEntity, 0, 0LL);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_64;
LABEL_47:
      v51 = this->fields.textOnMask;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v52 = &StringLiteral_12319/*"SHOP_QUEST_ALREADY_CLEARED"*/;
LABEL_51:
      IsServant = LocalizationManager__Get((System_String_o *)*v52, 0LL);
      textOnMask = v51;
      v56 = IsServant;
LABEL_65:
      ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)IsServant, textOnMask, v56, v49);
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
      if ( !((isExistCondType || v44 || v46) | v50 & 1) )
        goto LABEL_64;
      IsServant = (System_String_o *)ShopReleaseMaster__CondClearCheck(v42, shopEntity->fields.id, 1, 0LL);
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
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  int v30; // w1
  char v31; // w2
  __int64 v32; // x3
  int v33; // w1
  char v34; // w2
  __int64 v35; // x3
  int v36; // w1
  char v37; // w2
  __int64 v38; // x3
  int v39; // w1
  char v40; // w2
  __int64 v41; // x3
  int v42; // w1
  char v43; // w2
  __int64 v44; // x3
  int v45; // w1
  char v46; // w2
  __int64 v47; // x3
  int v48; // w1
  char v49; // w2
  __int64 v50; // x3
  int v51; // w1
  char v52; // w2
  __int64 v53; // x3
  int v54; // w1
  char v55; // w2
  __int64 v56; // x3
  int v57; // w1
  char v58; // w2
  __int64 v59; // x3
  int v60; // w1
  char v61; // w2
  __int64 v62; // x3
  int v63; // w1
  char v64; // w2
  __int64 v65; // x3
  int v66; // w1
  char v67; // w2
  __int64 v68; // x3
  int v69; // w1
  char v70; // w2
  __int64 v71; // x3
  int v72; // w1
  char v73; // w2
  __int64 v74; // x3
  int v75; // w1
  char v76; // w2
  __int64 v77; // x3
  int v78; // w1
  char v79; // w2
  __int64 v80; // x3
  int v81; // w1
  char v82; // w2
  __int64 v83; // x3
  int v84; // w1
  char v85; // w2
  __int64 v86; // x3
  int v87; // w1
  char v88; // w2
  __int64 v89; // x3
  int v90; // w1
  char v91; // w2
  __int64 v92; // x3
  UILabel_o *warningLabel; // x23
  UILabel_o **p_warningLabel; // x24
  int64_t Price; // x0
  ShopBuyItemConfirmMenu_o *v96; // x0
  const MethodInfo *v97; // x3
  UILabel_o *v98; // x19
  __int64 *v99; // x8
  const MethodInfo *v100; // x1
  System_Int32_array *UserItemCounts; // x22
  __int64 v102; // x21
  System_String_o *v103; // x0
  const MethodInfo *v104; // x3
  struct ShopEntity_o *v105; // x8
  __int64 *v106; // x8
  UILabel_o *v107; // x21
  System_String_o *v108; // x22
  Il2CppObject *v109; // x0
  System_String_o *v110; // x0
  const MethodInfo *v111; // x3
  __int64 *v112; // x8
  System_String_o *v113; // x20
  struct ShopEntity_o *v114; // x8
  struct System_Int32_array *itemIds; // x8
  Il2CppObject *age; // x1
  BalanceConfig_c *v117; // x8
  int v118; // w22
  UILabel_o *v119; // x22
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  __int64 v121; // x9
  CommonConsumeEntity_o *v122; // x21
  int32_t num; // w22
  int32_t v124; // w19
  struct System_String_o *Empty; // x22
  int v126; // w26
  Il2CppClass **v127; // x8
  CommonConsumeEntity_o *v128; // x23
  int v129; // w28
  Il2CppObject *Name; // x0
  System_String_o *v131; // x0
  int m_stringLength; // w8
  System_String_o *v133; // x0
  Il2CppObject *v134; // x20
  int32_t purchaseType; // w8
  int32_t v136; // w19
  int32_t v137; // w20
  BalanceConfig_c *v138; // x0
  int32_t PresentBoxMax; // w8
  UILabel_o *v140; // x19
  __int64 *v141; // x8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x19
  int32_t Sum; // w0
  BalanceConfig_c *v144; // x8
  int32_t v145; // w19
  int32_t UserItemMax; // w9
  int v147; // w20
  __int64 v148; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  int32_t recordNum; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t buyQuestNum[2]; // [xsp+18h] [xbp-68h] BYREF
  int32_t buyServantEquipNum[2]; // [xsp+20h] [xbp-60h] BYREF
  __int64 buyItemNum; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42ECF78 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)shopEntity, isInPreparation, userGameEntity);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v21, v22, v23);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&NetworkManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31, v32);
    sub_B5D5C4(&string_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_12269/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_12261/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_12270/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_12272/*"SHOP_BUY_RARE_PRI_CONFIRM_WARNING"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_12266/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_11011/*"QP_NAME"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_12257/*"SHOP_BUY_CONFIRM_SOLD_OUT_WARNING"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_12250/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_12253/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_12252/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_12254/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, v66, v67, v68);
    sub_B5D5C4(&StringLiteral_12255/*"SHOP_BUY_CONFIRM_QUEST_CLAER"*/, v69, v70, v71);
    sub_B5D5C4(&StringLiteral_23977/*"{0}、"*/, v72, v73, v74);
    sub_B5D5C4(&StringLiteral_12260/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, v75, v76, v77);
    sub_B5D5C4(&StringLiteral_12278/*"SHOP_BUY_STONE_FRAGMENTS_CONFIRM_WARNING"*/, v78, v79, v80);
    sub_B5D5C4(&StringLiteral_12263/*"SHOP_BUY_ITEM_FULL_WARNING"*/, v81, v82, v83);
    sub_B5D5C4(&StringLiteral_12265/*"SHOP_BUY_ITEM_OVER_WARNING"*/, v84, v85, v86);
    sub_B5D5C4(&StringLiteral_1/*""*/, v87, v88, v89);
    sub_B5D5C4(&StringLiteral_12256/*"SHOP_BUY_CONFIRM_QUEST_HOLD"*/, v90, v91, v92);
    byte_42ECF78 = 1;
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
  ShopBuyItemConfirmMenu__SetLabelText(v96, *p_warningLabel, (System_String_o *)StringLiteral_1/*""*/, v97);
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
        v98 = *p_warningLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v99 = &StringLiteral_12256/*"SHOP_BUY_CONFIRM_QUEST_HOLD"*/;
        goto LABEL_50;
      }
      goto LABEL_24;
    }
LABEL_15:
    v98 = *p_warningLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v99 = &StringLiteral_12255/*"SHOP_BUY_CONFIRM_QUEST_CLAER"*/;
    goto LABEL_50;
  }
  if ( ShopEntity__isQuestNotClearItemClosed(shopEntity, 0, 0LL) )
    goto LABEL_15;
LABEL_24:
  if ( ShopEntity__IsSoldOut(shopEntity, 0LL)
    && !ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0LL)
    && !ShopEntity__IsAnotherItemBuyable(shopEntity, 0LL) )
  {
    v98 = *p_warningLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v99 = &StringLiteral_12257/*"SHOP_BUY_CONFIRM_SOLD_OUT_WARNING"*/;
    goto LABEL_50;
  }
  if ( isInPreparation )
  {
    v98 = *p_warningLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v99 = &StringLiteral_12253/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/;
LABEL_50:
    v103 = LocalizationManager__Get((System_String_o *)*v99, 0LL);
LABEL_51:
    ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)v103, v98, v103, v104);
    return;
  }
  if ( !ShopEntity__IsEnable(shopEntity, 0LL, 0LL) )
  {
    v98 = *p_warningLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v99 = &StringLiteral_12254/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/;
    goto LABEL_50;
  }
  UserItemCounts = ShopBuyItemConfirmMenu__GetUserItemCounts(this, v100);
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
      v107 = *p_warningLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v108 = LocalizationManager__Get((System_String_o *)StringLiteral_12260/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, 0LL);
      v109 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_11011/*"QP_NAME"*/, 0LL);
      v110 = System_String__Format(v108, v109, 0LL);
      goto LABEL_106;
    case 4:
      Price = ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_202;
      if ( !UserItemCounts->max_length )
        goto LABEL_203;
      if ( (int)Price <= UserItemCounts->m_Items[1] )
        goto LABEL_154;
      v107 = *p_warningLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v112 = &StringLiteral_12266/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/;
      goto LABEL_105;
    case 6:
    case 0xB:
    case 0xC:
      if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 2 )
      {
        if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 1 )
        {
          v102 = 0LL;
          while ( 1 )
          {
            Price = ShopEntity__GetPrices(shopEntity, v102, 0LL);
            if ( !UserItemCounts )
              goto LABEL_202;
            if ( (unsigned int)v102 >= UserItemCounts->max_length )
              goto LABEL_203;
            if ( (int)Price > UserItemCounts->m_Items[v102 + 1] )
              break;
            if ( (int)++v102 >= ShopEntity__GetItemCount(shopEntity, 0LL) )
              goto LABEL_154;
          }
          v98 = *p_warningLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v99 = &StringLiteral_12261/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/;
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
      Price = ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, (const MethodInfo *)shopEntity);
      v105 = this->fields.shopEntity;
      if ( !v105 )
        goto LABEL_202;
      if ( (Price & 1) != 0 )
      {
        Price = (int64_t)ShopEntity__GetAnotherPayItemIds(this->fields.shopEntity, 0LL);
        if ( !Price )
          goto LABEL_202;
      }
      else
      {
        Price = (int64_t)v105->fields.itemIds;
        if ( !Price )
          goto LABEL_202;
      }
      if ( !*(_DWORD *)(Price + 24) )
      {
LABEL_203:
        v148 = sub_B5D6C8(Price);
        sub_B5D668(v148, 0LL);
      }
      v124 = *(_DWORD *)(Price + 32);
      Price = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Price )
        goto LABEL_202;
      Price = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)Price,
                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Price )
        goto LABEL_202;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)Price,
              &entity,
              v124,
              (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        return;
      v98 = *p_warningLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Price = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12260/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, 0LL);
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
      v98 = *p_warningLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v106 = &StringLiteral_12278/*"SHOP_BUY_STONE_FRAGMENTS_CONFIRM_WARNING"*/;
      goto LABEL_88;
    case 9:
      Price = ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_202;
      if ( !UserItemCounts->max_length )
        goto LABEL_203;
      if ( (int)Price <= UserItemCounts->m_Items[1] )
        goto LABEL_154;
      v98 = *p_warningLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v106 = &StringLiteral_12250/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/;
LABEL_88:
      v113 = LocalizationManager__Get((System_String_o *)*v106, 0LL);
      Price = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Price )
        goto LABEL_202;
      Price = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)Price,
                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
      v114 = this->fields.shopEntity;
      if ( !v114 )
        goto LABEL_202;
      itemIds = v114->fields.itemIds;
      if ( !itemIds )
        goto LABEL_202;
      if ( !itemIds->max_length )
        goto LABEL_203;
      if ( !Price )
        goto LABEL_202;
      Price = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                         (DataMasterBase_WarMaster__WarEntity__int__o *)Price,
                         itemIds->m_Items[1],
                         (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
      v107 = *p_warningLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v112 = &StringLiteral_12272/*"SHOP_BUY_RARE_PRI_CONFIRM_WARNING"*/;
LABEL_105:
      v110 = LocalizationManager__Get((System_String_o *)*v112, 0LL);
LABEL_106:
      ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)v110, v107, v110, v111);
      goto LABEL_154;
    case 0xE:
      if ( !this->fields.commonConsumeEntities )
        goto LABEL_154;
      Price = ShopEntity__get_TargetId(shopEntity, 0LL);
      v117 = BalanceConfig_TypeInfo;
      v118 = Price;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v117 = BalanceConfig_TypeInfo;
      }
      if ( v118 != v117->static_fields->ApSeedExchangeTargetItemId )
        goto LABEL_117;
      v119 = *p_warningLabel;
      if ( (BYTE3(v117->vtable._0_Equals.methodPtr) & 4) != 0 && !v117->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v117);
      if ( !v119 )
        goto LABEL_202;
      UILabel__set_fontSize(v119, BalanceConfig_TypeInfo->static_fields->TradeApDialogWarningLabelFontSize, 0LL);
LABEL_117:
      commonConsumeEntities = this->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        goto LABEL_202;
      v121 = *(_QWORD *)&commonConsumeEntities->max_length;
      if ( (_DWORD)v121 == 1 )
      {
        v122 = commonConsumeEntities->m_Items[0];
        if ( !v122 )
          goto LABEL_202;
        num = v122->fields.num;
        if ( num > CommonConsumeEntity__GetUserHasNum(commonConsumeEntities->m_Items[0], 0LL) )
        {
          v98 = *p_warningLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v113 = LocalizationManager__Get((System_String_o *)StringLiteral_12252/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, 0LL);
          age = (Il2CppObject *)CommonConsumeEntity__GetName(v122, 0LL);
LABEL_95:
          Price = (int64_t)v113;
          goto LABEL_153;
        }
      }
      else if ( (int)v121 > 1 )
      {
        Empty = string_TypeInfo->static_fields->Empty;
        v126 = 0;
        do
        {
          if ( v126 >= (unsigned int)v121 )
            goto LABEL_203;
          v127 = &commonConsumeEntities->obj.klass + v126;
          v128 = (CommonConsumeEntity_o *)v127[4];
          if ( !v128 )
            goto LABEL_202;
          v129 = v128->fields.num;
          Price = CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)v127[4], 0LL);
          if ( v129 > (int)Price )
          {
            Name = (Il2CppObject *)CommonConsumeEntity__GetName(v128, 0LL);
            v131 = System_String__Format((System_String_o *)StringLiteral_23977/*"{0}、"*/, Name, 0LL);
            Price = (int64_t)System_String__Concat_44577788(Empty, v131, 0LL);
            Empty = (struct System_String_o *)Price;
          }
          commonConsumeEntities = this->fields.commonConsumeEntities;
          if ( !commonConsumeEntities )
            goto LABEL_202;
          LODWORD(v121) = commonConsumeEntities->max_length;
          ++v126;
        }
        while ( v126 < (int)v121 );
        if ( !Empty )
          goto LABEL_202;
        m_stringLength = Empty->fields.m_stringLength;
        if ( m_stringLength >= 1 )
        {
          v133 = System_String__Remove_44656144(Empty, m_stringLength - 1, 0LL);
          v98 = *p_warningLabel;
          v134 = (Il2CppObject *)v133;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Price = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12252/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, 0LL);
          age = v134;
LABEL_153:
          v103 = System_String__Format((System_String_o *)Price, age, 0LL);
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
        Price = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Price )
          goto LABEL_202;
        Price = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)Price,
                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
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
        v136 = *(_DWORD *)(Price + 24);
        if ( purchaseType == 5 )
          v137 = recordNum;
        else
          v137 = buyServantEquipNum[0] + buyServantEquipNum[1] + buyQuestNum[1];
        v138 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v138 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v138->static_fields->PresentBoxMax;
        if ( PresentBoxMax <= v136 )
        {
          v140 = *p_warningLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v141 = &StringLiteral_12269/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/;
LABEL_200:
          Price = (int64_t)LocalizationManager__Get((System_String_o *)*v141, 0LL);
          if ( v140 )
          {
            UILabel__set_text(v140, (System_String_o *)Price, 0LL);
            return;
          }
LABEL_202:
          sub_B5D69C(Price, shopEntity);
        }
        if ( (BYTE3(v138->vtable._0_Equals.methodPtr) & 4) != 0 && !v138->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v138);
          PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
        }
        if ( v137 + v136 > PresentBoxMax )
        {
          v140 = *p_warningLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v141 = &StringLiteral_12270/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/;
          goto LABEL_200;
        }
      }
      if ( (int)buyItemNum < 1 )
        return;
      Price = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Price )
        goto LABEL_202;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Price,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Price = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_202;
      Sum = UserItemMaster__getSum(MasterData_WarQuestSelectionMaster, Price, 0LL);
      v144 = BalanceConfig_TypeInfo;
      v145 = Sum;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v144 = BalanceConfig_TypeInfo;
      }
      UserItemMax = v144->static_fields->UserItemMax;
      if ( v145 >= UserItemMax )
      {
        v140 = *p_warningLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v141 = &StringLiteral_12263/*"SHOP_BUY_ITEM_FULL_WARNING"*/;
        goto LABEL_200;
      }
      v147 = buyItemNum;
      if ( (BYTE3(v144->vtable._0_Equals.methodPtr) & 4) != 0 && !v144->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v144);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      if ( v147 + v145 > UserItemMax )
      {
        v140 = *p_warningLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v141 = &StringLiteral_12265/*"SHOP_BUY_ITEM_OVER_WARNING"*/;
        goto LABEL_200;
      }
      return;
    default:
      goto LABEL_154;
  }
}


int32_t __fastcall ShopBuyItemConfirmMenu__ShowCommandCodeInfomation(
        ShopBuyItemConfirmMenu_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  WebViewManager_o *v23; // x0
  CommandCodeEntity_o *v24; // x20
  CommonUI_o *v25; // x21
  ServantStatusDialog_EndDelegate_o *v26; // x22
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42ECF8B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeMaster___, commandCodeId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v6, v7, v8);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19, v20);
    byte_42ECF8B = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_9;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         commandCodeId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
  {
    v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = (CommandCodeEntity_o *)entity;
    v25 = (CommonUI_o *)v23;
    v26 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v26,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v25 )
    {
      CommonUI__OpenServantEquipStatusDialog_18218384(v25, 25, v24, 0, v26, 0LL, 0LL);
      return 0;
    }
LABEL_9:
    sub_B5D69C(Instance, v22);
  }
  return 0;
}


int32_t __fastcall ShopBuyItemConfirmMenu__ShowItemInfomation(
        ShopBuyItemConfirmMenu_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  int32_t itemDetailDialogOverwriteDepth; // w23
  WebViewManager_o *v24; // x0
  ItemEntity_o *v25; // x20
  CommonUI_o *v26; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v27; // x22
  int32_t v28; // w3
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42ECF8A & 1) == 0 )
  {
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, itemId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19, v20);
    byte_42ECF8A = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_13;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         itemId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    itemDetailDialogOverwriteDepth = this->fields.itemDetailDialogOverwriteDepth;
    v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v25 = (ItemEntity_o *)entity;
    v26 = (CommonUI_o *)v24;
    v27 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v27,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__,
      0LL);
    if ( itemDetailDialogOverwriteDepth == 0x80000000 )
    {
      if ( v26 )
      {
        v28 = 50;
LABEL_11:
        CommonUI__OpenItemDetailDialog(v26, v25, v27, v28, 0LL);
        return 0;
      }
    }
    else if ( v26 )
    {
      v28 = this->fields.itemDetailDialogOverwriteDepth;
      goto LABEL_11;
    }
LABEL_13:
    sub_B5D69C(Instance, v22);
  }
  return 0;
}


int32_t __fastcall ShopBuyItemConfirmMenu__ShowOtherInfomation(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  WebViewManager_o *Instance; // x0
  System_String_o *name; // x21
  System_String_o *infoMessage; // x20
  CommonUI_o *v18; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v19; // x23

  v5 = (Il2CppObject *)this;
  if ( (byte_42ECF8C & 1) == 0 )
  {
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, (_DWORD)shopEntity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    this = (ShopBuyItemConfirmMenu_o *)sub_B5D5C4(&StringLiteral_9405/*"NONE"*/, v12, v13, v14);
    byte_42ECF8C = 1;
  }
  if ( !shopEntity )
    goto LABEL_9;
  if ( !System_String__IsNullOrEmpty(shopEntity->fields.infoMessage, 0LL)
    && System_String__op_Inequality(shopEntity->fields.infoMessage, (System_String_o *)StringLiteral_9405/*"NONE"*/, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    name = shopEntity->fields.name;
    infoMessage = shopEntity->fields.infoMessage;
    v18 = (CommonUI_o *)Instance;
    v19 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(v19, v5, Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__, 0LL);
    if ( v18 )
    {
      CommonUI__OpenItemDetailDialog_18267660(v18, name, infoMessage, v19, 0LL);
      return 0;
    }
LABEL_9:
    sub_B5D69C(this, shopEntity);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  DataManager_o *Instance; // x0
  __int64 v34; // x1
  CommonUI_o *v35; // x21
  ServantLeaderInfo_o *v36; // x22
  ServantStatusDialog_EndDelegate_o *v37; // x20
  CommonUI_o *v39; // x23
  EquipTargetInfo_o *v40; // x24
  ServantStatusDialog_EndDelegate_o *v41; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42ECF89 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, servantId, limitCount, *(_QWORD *)&level);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9, v10, v11);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&EquipTargetInfo_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&ServantLeaderInfo_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__, v21, v22, v23);
    sub_B5D5C4(&Method_ShopBuyItemConfirmMenu_EndShowServantStatusDialog__, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v30, v31, v32);
    byte_42ECF89 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_24;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          servantId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
    v35 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v36 = (ServantLeaderInfo_o *)sub_B5D694(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_29348816(v36, servantId, 0, 1, 0LL);
    v37 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v37,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantStatusDialog__,
      0LL);
    if ( v35 )
    {
      CommonUI__OpenServantStatusDialog_18214956(v35, 7, v36, v37, 0LL);
      return 0;
    }
    goto LABEL_24;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_24;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL) )
  {
    v39 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v40 = (EquipTargetInfo_o *)sub_B5D694(EquipTargetInfo_TypeInfo);
    EquipTargetInfo___ctor_30730304(v40, servantId, limitCount, level, 0, 0LL);
    v41 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v41,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v39 )
    {
      CommonUI__OpenServantEquipStatusDialog_18217320(v39, 7, v40, v41, 0LL, 0LL);
      return 0;
    }
LABEL_24:
    sub_B5D69C(Instance, v34);
  }
  return 2;
}


System_String_o *__fastcall ShopBuyItemConfirmMenu__get_closeBtnPath(
        ShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ECF93 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15667/*"Window/CancelButton"*/, (_DWORD)method, v2, v3);
    byte_42ECF93 = 1;
  }
  return (System_String_o *)StringLiteral_15667/*"Window/CancelButton"*/;
}


bool __fastcall ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventRewardRootComponent_c *v5; // x0
  ShopEntity_o *shopEntity; // x0

  if ( (byte_42ECF6B & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardRootComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECF6B = 1;
  }
  if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  }
  if ( !byte_42E563F )
  {
    sub_B5D5C4(&EventRewardRootComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E563F = 1;
  }
  v5 = EventRewardRootComponent_TypeInfo;
  if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    v5 = EventRewardRootComponent_TypeInfo;
  }
  if ( !v5->static_fields->_IsAnotherPayFlag_k__BackingField )
    return 0;
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  ShopBuyItemConfirmMenu___c__DisplayClass93_0_o *v4; // x19
  struct ShopBuyItemConfirmMenu_o *_4__this; // x8
  System_Action_o *onChecked; // x20
  struct ShopBuyItemConfirmMenu_o *v7; // x8
  System_Action_T__o *onCloseReturnWarning; // x21

  v4 = this;
  if ( (byte_42E5DBE & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu___c__DisplayClass93_0_o *)sub_B5D5C4(
                                                               &Method_ActionExtensions_Call_int___,
                                                               (_DWORD)method,
                                                               v2,
                                                               v3);
    byte_42E5DBE = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (onChecked = _4__this->fields.onChecked,
        _4__this->fields.onChecked = 0LL,
        sub_B5D560(&_4__this->fields.onChecked),
        (v7 = v4->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(this, method);
  }
  onCloseReturnWarning = (System_Action_T__o *)v7->fields.onCloseReturnWarning;
  v7->fields.onCloseReturnWarning = 0LL;
  sub_B5D560(&v7->fields.onCloseReturnWarning);
  if ( v4->fields.isDecide )
    ActionExtensions__Call(onChecked, 0LL);
  else
    ActionExtensions__Call_int_(
      onCloseReturnWarning,
      0,
      (const MethodInfo_2CECD28 *)Method_ActionExtensions_Call_int___);
}