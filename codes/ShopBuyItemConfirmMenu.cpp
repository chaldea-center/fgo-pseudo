void ShopBuyItemConfirmMenu___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct ShopBuyItemConfirmMenu_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct ShopBuyItemConfirmMenu_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct ShopBuyItemConfirmMenu_StaticFields *v11; // x8

  if ( (byte_4C234D4 & 1) == 0 )
  {
    sub_1C2D490(&ShopBuyItemConfirmMenu_TypeInfo);
    sub_1C2D490(&StringLiteral_17558/*"btn_txt_event_"*/);
    sub_1C2D490(&StringLiteral_17613/*"btn_txt_trade"*/);
    sub_1C2D490(&StringLiteral_17591/*"btn_txt_sale"*/);
    byte_4C234D4 = 1;
  }
  ShopBuyItemConfirmMenu_TypeInfo->static_fields->VALENTINE_BTN_NAME = (struct System_String_o *)StringLiteral_17558/*"btn_txt_event_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)ShopBuyItemConfirmMenu_TypeInfo->static_fields, StringLiteral_17558/*"btn_txt_event_"*/, v1, v2);
  v3 = StringLiteral_17613/*"btn_txt_trade"*/;
  static_fields = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  static_fields->DECIED_BTN_NAME_DEFAULT = (struct System_String_o *)StringLiteral_17613/*"btn_txt_trade"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->DECIED_BTN_NAME_DEFAULT, v3, v5, v6);
  v7 = StringLiteral_17591/*"btn_txt_sale"*/;
  v8 = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v8->DECIED_BTN_NAME_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_17591/*"btn_txt_sale"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->DECIED_BTN_NAME_LIMIT_MATERIAL, v7, v9, v10);
  v11 = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  *(_OWORD *)&v11->PRICE_DATA_LABEL_MAX_WIDTH = xmmword_C08C20;
  *(_QWORD *)&v11->DEFAULT_PRICE_INFO_POS_Y = 0xFFFFFF86FFFFFFECLL;
  *(_QWORD *)&v11->PurePriWarningLabelPosY = 0xC28E0000C2900000LL;
  v11->RESET_LAYOUT_OFFSET_Y = 34;
  *(_QWORD *)&v11->PurePriWarningLabelSize = 0x1400000016LL;
}


void ShopBuyItemConfirmMenu___ctor(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C234D3 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C234D3 = 1;
  }
  this->fields.itemDetailDialogOverwriteDepth = 0x80000000;
  *(_OWORD *)&this->fields.freeLabelPos.fields.x = xmmword_C09150;
  *(_QWORD *)&this->fields.freeLabelPos2digit.fields.y = 3250585600LL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ShopBuyItemConfirmMenu__CallOnClose(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
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
    sub_1C2D434(p_onClose, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))onClose->fields.invoke_impl)(
      onClose->fields.method_code,
      onClose->fields.method);
  }
}


void ShopBuyItemConfirmMenu__CallOnDecide(ShopBuyItemConfirmMenu_o *this, int32_t result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Action_int__o *onDecide; // x20
  CGThumbnailListItem_o *p_onDecide; // x0

  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    p_onDecide = (CGThumbnailListItem_o *)&this->fields.onDecide;
    p_onDecide->klass = 0;
    sub_1C2D434(p_onDecide, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onDecide->fields.invoke_impl)(
      onDecide->fields.method_code,
      (unsigned int)result,
      onDecide->fields.method);
  }
}


void ShopBuyItemConfirmMenu__Close(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ShopBuyItemConfirmMenu__Close_34947696(this, 0, v2);
}


void ShopBuyItemConfirmMenu__Close_34947696(
        ShopBuyItemConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C234BE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ShopBuyItemConfirmMenu_EndClose__);
    byte_4C234BE = 1;
  }
  this->fields.onClose = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onClose, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void ShopBuyItemConfirmMenu__EndClose(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  ShopBuyItemConfirmMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  ShopBuyItemConfirmMenu__CallOnClose(this, v5);
}


void ShopBuyItemConfirmMenu__EndMaxErrorDialog(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  this->fields.state = 3;
  ShopBuyItemConfirmMenu__CallOnDecide(this, 0, v2);
}


void ShopBuyItemConfirmMenu__EndOpen(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void ShopBuyItemConfirmMenu__EndShowItemDetailDialog(
        ShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C234CB & 1) == 0 )
  {
    sub_1C2D490(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C234CB = 1;
  }
  v3 = Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__;
  if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v6);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
}


void ShopBuyItemConfirmMenu__EndShowServantEquipStatusDialog(
        ShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C234CA & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C234CA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0, 0);
}


void ShopBuyItemConfirmMenu__EndShowServantStatusDialog(
        ShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C234C9 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C234C9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
}


bool ShopBuyItemConfirmMenu__GetIsBuyable(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v8; // x21
  bool isQuestNotClearItemClosedSub; // w8
  bool result; // w0
  const MethodInfo *v11; // x1
  System_Int32_array *UserItemCounts; // x22
  const MethodInfo *v13; // x1
  System_Int64_array *UserItemCountsLong; // x0
  __int64 v15; // x2
  int v16; // w19
  __int64 v17; // x21
  int32_t m_CancellationTokenSource; // w20
  BalanceConfig_c *v19; // x8
  int32_t PresentBoxMax; // w9
  Il2CppObject *MasterData_object; // x19
  int32_t Sum; // w19
  BalanceConfig_c *v23; // x8
  int32_t UserItemMax; // w9
  int32_t v25; // w21
  System_Int64_array *v26; // x23
  struct CommonConsumeEntity_array *commonConsumeEntities; // x21
  int max_length; // w8
  __int64 v29; // x22
  int basePanel; // w24
  int32_t questId; // [xsp+Ch] [xbp-54h] BYREF
  int32_t recordNum[2]; // [xsp+10h] [xbp-50h] BYREF
  int32_t buyCmdCodeNum[2]; // [xsp+18h] [xbp-48h] BYREF
  int32_t buyServantNum[2]; // [xsp+28h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_4C234B2 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C234B2 = 1;
  }
  *(_QWORD *)buyServantNum = 0;
  *(_QWORD *)recordNum = 0;
  *(_QWORD *)buyCmdCodeNum = 0;
  questId = 0;
  if ( !shopEntity )
    goto LABEL_77;
  if ( !ShopEntity__IsSoldOut(shopEntity, 0) || ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0) )
  {
    if ( shopEntity->fields.purchaseType == 6 )
    {
      if ( isInPreparation )
        return 0;
      if ( ShopEntity__isQuestNotClear(shopEntity, &questId, 0, 0) )
      {
        isQuestNotClearItemClosedSub = ShopEntity__isQuestNotClearItemClosedSub(shopEntity, questId, 0, 0);
        result = 0;
        if ( isQuestNotClearItemClosedSub )
          return result;
      }
      else if ( ShopEntity__isExpireItemClosed(shopEntity, 0) )
      {
        return 0;
      }
    }
    else if ( isInPreparation )
    {
      return 0;
    }
    if ( ShopEntity__IsEnable(shopEntity, 0, 0) )
    {
      UserItemCounts = ShopBuyItemConfirmMenu__GetUserItemCounts(v8, v11);
      UserItemCountsLong = ShopBuyItemConfirmMenu__GetUserItemCountsLong(
                             (ShopBuyItemConfirmMenu_o *)UserItemCounts,
                             v13);
      switch ( shopEntity->fields.payType )
      {
        case 2:
          v26 = UserItemCountsLong;
          this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetPrice(shopEntity, 0);
          if ( !v26 )
            goto LABEL_77;
          if ( !LODWORD(v26->max_length) )
            goto LABEL_78;
          if ( v26->m_Items[0] < (int)this )
            return 0;
          goto LABEL_19;
        case 4:
        case 8:
        case 9:
        case 0xC:
          goto LABEL_16;
        case 6:
        case 0xB:
          if ( ShopEntity__GetItemCount(shopEntity, 0) < 2 )
          {
LABEL_16:
            this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetPrice(shopEntity, 0);
            if ( !UserItemCounts )
              goto LABEL_77;
            if ( !LODWORD(UserItemCounts->max_length) )
LABEL_78:
              sub_1C2D6F4(this, shopEntity, v15);
            if ( (int)this > UserItemCounts->m_Items[0] )
              return 0;
          }
          else if ( ShopEntity__GetItemCount(shopEntity, 0) >= 1 )
          {
            v17 = 0;
            while ( 1 )
            {
              this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetPrices(shopEntity, v17, 0);
              if ( !UserItemCounts )
                break;
              if ( (unsigned int)v17 >= LODWORD(UserItemCounts->max_length) )
                goto LABEL_78;
              if ( (int)this > UserItemCounts->m_Items[v17] )
                return 0;
              if ( (int)++v17 >= ShopEntity__GetItemCount(shopEntity, 0) )
                goto LABEL_19;
            }
LABEL_77:
            sub_1C2D6EC(this, shopEntity);
          }
LABEL_19:
          *(_QWORD *)buyServantNum = 0;
          *(_QWORD *)recordNum = 0;
          *(_QWORD *)buyCmdCodeNum = 0;
          ShopEntity__GetSum(
            shopEntity,
            &buyServantNum[1],
            buyServantNum,
            &buyCmdCodeNum[1],
            buyCmdCodeNum,
            &recordNum[1],
            recordNum,
            0);
          if ( buyCmdCodeNum[1] + buyServantNum[0] + buyCmdCodeNum[0] < 1 )
            goto LABEL_55;
          this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_77;
          this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
          if ( !userGameEntity )
            goto LABEL_77;
          if ( !this )
            goto LABEL_77;
          this = (ShopBuyItemConfirmMenu_o *)UserPresentBoxMaster__getVaildList(
                                               (UserPresentBoxMaster_o *)this,
                                               userGameEntity->fields.userId,
                                               0);
          if ( !this )
            goto LABEL_77;
          if ( shopEntity->fields.purchaseType == 5 )
            v16 = recordNum[0];
          else
            v16 = buyCmdCodeNum[1] + buyServantNum[0] + buyCmdCodeNum[0];
          m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
          v19 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v19 = BalanceConfig_TypeInfo;
          }
          PresentBoxMax = v19->static_fields->PresentBoxMax;
          if ( PresentBoxMax > m_CancellationTokenSource )
          {
            if ( !v19->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v19);
              PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
            }
            if ( v16 + m_CancellationTokenSource <= PresentBoxMax )
            {
LABEL_55:
              if ( buyServantNum[1] < 1 )
                return 1;
              this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_77;
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4C211E1 )
              {
                sub_1C2D490(&NetworkManager_TypeInfo);
                byte_4C211E1 = 1;
              }
              this = (ShopBuyItemConfirmMenu_o *)NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                this = (ShopBuyItemConfirmMenu_o *)NetworkManager_TypeInfo;
              }
              if ( !MasterData_object )
                goto LABEL_77;
              Sum = UserItemMaster__getSum(
                      (UserItemMaster_o *)MasterData_object,
                      *(_QWORD *)&this->fields.decideButton->fields.specifyHoverColor.fields.r,
                      0);
              v23 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v23 = BalanceConfig_TypeInfo;
              }
              UserItemMax = v23->static_fields->UserItemMax;
              if ( Sum < UserItemMax )
              {
                v25 = buyServantNum[1];
                if ( !v23->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v23);
                  UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
                }
                if ( v25 + Sum <= UserItemMax )
                  return 1;
              }
            }
          }
          break;
        case 0xA:
          this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetPrice(shopEntity, 0);
          if ( !UserItemCounts )
            goto LABEL_77;
          if ( !LODWORD(UserItemCounts->max_length) )
            goto LABEL_78;
          if ( (int)this > UserItemCounts->m_Items[0]
            && (!ShopEntity__IsAfterTheFreeShopReleaseDate(shopEntity, 0)
             || !ShopEntity__IsFulFilledFreeExchangeCondition(shopEntity, 0)) )
          {
            return 0;
          }
          goto LABEL_19;
        case 0xE:
          this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetItemCount(shopEntity, 0);
          if ( (int)this < 1 )
            goto LABEL_19;
          commonConsumeEntities = v8->fields.commonConsumeEntities;
          if ( !commonConsumeEntities )
            goto LABEL_19;
          max_length = commonConsumeEntities->max_length;
          if ( max_length < 1 )
            goto LABEL_19;
          v29 = 0;
          while ( 2 )
          {
            if ( (unsigned int)v29 >= max_length )
              goto LABEL_78;
            this = (ShopBuyItemConfirmMenu_o *)commonConsumeEntities->m_Items[v29];
            if ( !this )
              goto LABEL_77;
            basePanel = (int)this->fields.basePanel;
            this = (ShopBuyItemConfirmMenu_o *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0);
            if ( basePanel <= (int)this )
            {
              max_length = commonConsumeEntities->max_length;
              if ( (int)++v29 >= max_length )
                goto LABEL_19;
              continue;
            }
            return 0;
          }
        default:
          goto LABEL_19;
      }
    }
  }
  return 0;
}


bool ShopBuyItemConfirmMenu__GetIsSetItemEventShop(
        ShopBuyItemConfirmMenu_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  __int64 v4; // x2
  il2cpp_array_size_t max_length; // x8
  SetItemMaster_o *v6; // x20
  unsigned __int64 v7; // x21
  int m_CancellationTokenSource; // w8
  int v9; // w9
  __int64 v10; // x10

  if ( (byte_4C234CC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_SetItemMaster___);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C234CC = 1;
  }
  if ( !ids )
    goto LABEL_20;
  if ( !ids->max_length )
    return 0;
  this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_1C2D6EC(this, ids);
  this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SetItemMaster___);
  max_length = ids->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v6 = (SetItemMaster_o *)this;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)max_length )
LABEL_21:
      sub_1C2D6F4(this, ids, v4);
    if ( !v6 )
      goto LABEL_20;
    this = (ShopBuyItemConfirmMenu_o *)SetItemMaster__GetList(v6, ids->m_Items[v7], 0);
    if ( !this )
      goto LABEL_20;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource >= 1 )
      break;
LABEL_17:
    LODWORD(max_length) = ids->max_length;
    if ( (__int64)++v7 >= (int)max_length )
      return 0;
  }
  v9 = 0;
  while ( 1 )
  {
    if ( m_CancellationTokenSource == v9 )
      goto LABEL_21;
    v10 = *((_QWORD *)&this->fields.basePanel + v9);
    if ( !v10 )
      goto LABEL_20;
    if ( *(_DWORD *)(v10 + 20) == 7 )
      return 1;
    if ( m_CancellationTokenSource == ++v9 )
      goto LABEL_17;
  }
}


bool ShopBuyItemConfirmMenu__GetIsShowMask(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        const MethodInfo *method)
{
  int32_t questId; // [xsp+Ch] [xbp-14h] BYREF

  questId = 0;
  if ( !shopEntity )
    sub_1C2D6EC(this, 0);
  if ( ShopEntity__IsSoldOut(shopEntity, 0) && ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0) )
    return 0;
  if ( shopEntity->fields.purchaseType != 6 )
  {
    if ( isInPreparation )
      return 1;
    return ShopEntity__IsSoldOut(shopEntity, 0) && !ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0);
  }
  if ( !isInPreparation )
  {
    if ( ShopEntity__isQuestNotClear(shopEntity, &questId, 0, 0) )
    {
      if ( ShopEntity__isQuestNotClearItemClosedSub(shopEntity, questId, 0, 0) )
        return 1;
      return ShopEntity__IsSoldOut(shopEntity, 0) && !ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0);
    }
    if ( !ShopEntity__isExpireItemClosed(shopEntity, 0) )
      return ShopEntity__IsSoldOut(shopEntity, 0) && !ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0);
  }
  return 1;
}


System_String_o *ShopBuyItemConfirmMenu__GetMaxAlertBase(
        ShopBuyItemConfirmMenu_o *this,
        int32_t shopType,
        const MethodInfo *method)
{
  System_String_o **v4; // x8

  if ( (byte_4C234C1 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_8277/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/);
    sub_1C2D490(&StringLiteral_12126/*"SHOP_MAX_ALERT"*/);
    byte_4C234C1 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( shopType == 9 )
    v4 = (System_String_o **)&StringLiteral_8277/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/;
  else
    v4 = (System_String_o **)&StringLiteral_12126/*"SHOP_MAX_ALERT"*/;
  return LocalizationManager__Get(*v4, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ShopBuyItemConfirmMenu__GetMaxAlertMessage(
        ShopBuyItemConfirmMenu_o *this,
        int32_t shopType,
        int32_t itemType,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *MaxAlertBase; // x20
  const MethodInfo *v6; // x2
  Il2CppObject *MaxOverItemName; // x1

  MaxAlertBase = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu__GetMaxAlertBase(
                                               this,
                                               shopType,
                                               *(const MethodInfo **)&itemType);
  MaxOverItemName = (Il2CppObject *)ShopBuyItemConfirmMenu__GetMaxOverItemName(MaxAlertBase, itemType, v6);
  return System_String__Format((System_String_o *)MaxAlertBase, MaxOverItemName, 0);
}


System_String_o *ShopBuyItemConfirmMenu__GetMaxOverItemName(
        ShopBuyItemConfirmMenu_o *this,
        int32_t itemType,
        const MethodInfo *method)
{
  __int64 *v4; // x8

  if ( (byte_4C234C0 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10808/*"QP_NAME"*/);
    sub_1C2D490(&StringLiteral_8528/*"MANA_NAME"*/);
    sub_1C2D490(&StringLiteral_10951/*"RARE_PRI_NAME"*/);
    sub_1C2D490(&StringLiteral_6545/*"FRIEND_POINT_NAME"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C234C0 = 1;
  }
  if ( itemType <= 5 )
  {
    if ( itemType == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10808/*"QP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v4, 0);
    }
    if ( itemType == 5 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_8528/*"MANA_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v4, 0);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( itemType == 13 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = &StringLiteral_6545/*"FRIEND_POINT_NAME"*/;
    return LocalizationManager__Get((System_String_o *)*v4, 0);
  }
  if ( itemType != 22 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = &StringLiteral_10951/*"RARE_PRI_NAME"*/;
  return LocalizationManager__Get((System_String_o *)*v4, 0);
}


System_Int32_array *ShopBuyItemConfirmMenu__GetUserItemCounts(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 SelfUserGame; // x0
  __int64 v4; // x1
  struct ShopEntity_o *shopEntity; // x8
  _DWORD *v6; // x20
  __int64 v7; // x19
  __int64 v8; // x2
  Il2CppObject *MasterData_object; // x20
  struct ShopEntity_o *v10; // x8
  struct System_Int32_array *v11; // x8
  int v12; // w8
  Il2CppObject *Master_object; // x20
  const MethodInfo *v14; // x1
  __int64 itemIds; // x21
  unsigned int ItemCount; // w0
  struct ShopEntity_o *v18; // x8
  unsigned __int64 v19; // x23

  if ( (byte_4C234B0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&EventRewardRootComponent_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C234B0 = 1;
  }
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_64;
  v6 = (_DWORD *)SelfUserGame;
  switch ( shopEntity->fields.payType )
  {
    case 1:
      SelfUserGame = sub_1C2D538(int___TypeInfo, 1);
      if ( !v6 )
        goto LABEL_64;
      v7 = SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_64;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_65;
      v12 = v6[46];
      goto LABEL_45;
    case 4:
      SelfUserGame = sub_1C2D538(int___TypeInfo, 1);
      if ( !v6 )
        goto LABEL_64;
      v7 = SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_64;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_65;
      v12 = v6[48];
      goto LABEL_45;
    case 6:
    case 0xB:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserItemMaster___);
      SelfUserGame = ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v14);
      if ( (SelfUserGame & 1) == 0 )
      {
        v18 = this->fields.shopEntity;
        if ( v18 )
        {
          itemIds = (__int64)v18->fields.itemIds;
          if ( itemIds )
            goto LABEL_49;
        }
LABEL_64:
        sub_1C2D6EC(SelfUserGame, v4);
      }
      itemIds = sub_1C2D538(int___TypeInfo, 1);
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      if ( !byte_4C21AC9 )
      {
        sub_1C2D490(&EventRewardRootComponent_TypeInfo);
        byte_4C21AC9 = 1;
      }
      SelfUserGame = (__int64)EventRewardRootComponent_TypeInfo;
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
        SelfUserGame = (__int64)EventRewardRootComponent_TypeInfo;
      }
      if ( !itemIds )
        goto LABEL_64;
      if ( !*(_DWORD *)(itemIds + 24) )
        goto LABEL_65;
      *(_DWORD *)(itemIds + 32) = *(_DWORD *)(*(_QWORD *)(SelfUserGame + 184) + 268LL);
LABEL_49:
      v7 = sub_1C2D538(int___TypeInfo, *(unsigned int *)(itemIds + 24));
      if ( *(int *)(itemIds + 24) >= 1 )
      {
        v19 = 0;
        while ( 1 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C211E1 )
          {
            sub_1C2D490(&NetworkManager_TypeInfo);
            byte_4C211E1 = 1;
          }
          SelfUserGame = (__int64)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            SelfUserGame = (__int64)NetworkManager_TypeInfo;
          }
          if ( v19 >= *(unsigned int *)(itemIds + 24) )
            break;
          if ( !Master_object )
            goto LABEL_64;
          SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                                    (UserItemMaster_o *)Master_object,
                                    *(_QWORD *)(*(_QWORD *)(SelfUserGame + 184) + 64LL),
                                    *(_DWORD *)(itemIds + 32 + 4 * v19),
                                    0);
          if ( !SelfUserGame || !v7 )
            goto LABEL_64;
          if ( v19 >= *(unsigned int *)(v7 + 24) )
            break;
          *(_DWORD *)(v7 + 32 + 4 * v19++) = *(_DWORD *)(SelfUserGame + 28);
          if ( (__int64)v19 >= *(int *)(itemIds + 24) )
            return (System_Int32_array *)v7;
        }
LABEL_65:
        sub_1C2D6F4(SelfUserGame, v4, v8);
      }
      return (System_Int32_array *)v7;
    case 8:
    case 9:
    case 0xC:
      v7 = sub_1C2D538(int___TypeInfo, 1);
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_64;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C211E1 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C211E1 = 1;
      }
      SelfUserGame = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        SelfUserGame = (__int64)NetworkManager_TypeInfo;
      }
      v10 = this->fields.shopEntity;
      if ( !v10 )
        goto LABEL_64;
      v11 = v10->fields.itemIds;
      if ( !v11 )
        goto LABEL_64;
      if ( !LODWORD(v11->max_length) )
        goto LABEL_65;
      if ( !MasterData_object )
        goto LABEL_64;
      SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)MasterData_object,
                                *(_QWORD *)(*(_QWORD *)(SelfUserGame + 184) + 64LL),
                                v11->m_Items[0],
                                0);
      if ( !SelfUserGame || !v7 )
        goto LABEL_64;
      if ( !*(_DWORD *)(v7 + 24) )
        goto LABEL_65;
      v12 = *(_DWORD *)(SelfUserGame + 28);
LABEL_45:
      *(_DWORD *)(v7 + 32) = v12;
      return (System_Int32_array *)v7;
    case 0xA:
      SelfUserGame = sub_1C2D538(int___TypeInfo, 1);
      if ( !v6 )
        goto LABEL_64;
      v7 = SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_64;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_65;
      v12 = v6[49];
      goto LABEL_45;
    default:
      ItemCount = ShopEntity__GetItemCount(this->fields.shopEntity, 0);
      return (System_Int32_array *)sub_1C2D538(int___TypeInfo, ItemCount);
  }
}


System_Int64_array *ShopBuyItemConfirmMenu__GetUserItemCountsLong(
        ShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x19
  System_Int64_array *result; // x0
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_4C234B1 & 1) == 0 )
  {
    sub_1C2D490(&long___TypeInfo);
    byte_4C234B1 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  result = (System_Int64_array *)sub_1C2D538(long___TypeInfo, 1);
  if ( !SelfUserGame || !result )
    sub_1C2D6EC(result, v4);
  if ( !LODWORD(result->max_length) )
    sub_1C2D6F4(result, v4, v5);
  result->m_Items[0] = SelfUserGame->fields.qp;
  return result;
}


void ShopBuyItemConfirmMenu__Init(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *nameLabel; // x0
  UILabel_o *messageLabel; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  ShopBuyItemConfirmMenu_o *v7; // x0
  const MethodInfo *v8; // x3
  ShopBuyItemConfirmMenu_o *v9; // x0
  const MethodInfo *v10; // x3
  ShopBuyItemConfirmMenu_o *v11; // x0
  const MethodInfo *v12; // x3

  if ( (byte_4C234A7 & 1) == 0 )
  {
    sub_1C2D490(&ShopBuyItemUtility_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C234A7 = 1;
  }
  nameLabel = (UILabel_o *)this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_14;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  messageLabel = this->fields.messageLabel;
  if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
  ShopBuyItemUtility__SetDefaultMessageLabel(messageLabel, 0);
  nameLabel = this->fields.warningLabel;
  if ( !nameLabel )
    goto LABEL_14;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.freeLabel;
  if ( !nameLabel )
    goto LABEL_14;
  nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0);
  if ( !nameLabel )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0);
  nameLabel = (UILabel_o *)this->fields.itemIcon;
  if ( !nameLabel )
    goto LABEL_14;
  ItemIconComponent__Clear((ItemIconComponent_o *)nameLabel, 0);
  nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !nameLabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0),
        this->fields.state = 0,
        this->fields.shopEntity = 0,
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.shopEntity, 0, v5, v6),
        (nameLabel = (UILabel_o *)this->fields.infoButton) == 0)
    || (nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0)) == 0 )
  {
LABEL_14:
    sub_1C2D6EC(nameLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0);
  ShopBuyItemConfirmMenu__SetLabelText(v7, this->fields.presentAheadLabel, (System_String_o *)StringLiteral_1/*""*/, v8);
  ShopBuyItemConfirmMenu__SetLabelActive(v9, this->fields.LineText, 0, v10);
  ShopBuyItemConfirmMenu__SetLabelActive(v11, this->fields.LineText2digit, 0, v12);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ShopBuyItemConfirmMenu__OnClickCancel(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C234C2 & 1) == 0 )
  {
    sub_1C2D490(&Method_ShopBuyItemConfirmMenu_OnClickCancel__);
    byte_4C234C2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ShopBuyItemConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_ShopBuyItemConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ShopBuyItemConfirmMenu__CallOnDecide(this, 0, v5);
  }
}


void ShopBuyItemConfirmMenu__OnClickDecide(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v2; // x19
  struct ShopEntity_o *shopEntity; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  NoTitleDialog_o *noTitleDialog; // x20
  struct UILabel_o *presentAheadLabel; // x21
  Il2CppObject *Name; // x0
  System_String_o *v11; // x21
  System_String_o *v12; // x22
  System_String_o *v13; // x23
  System_Action_bool__o *v14; // x24
  const MethodInfo *v15; // x3
  struct ShopEntity_o *v16; // x8
  System_String_o *MaxAlertMessage; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v19; // x22
  UILabel_o *warningLabel; // x20
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  const MethodInfo *v25; // x2
  int32_t check; // [xsp+4Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4C234BF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_bool__TypeInfo);
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_ShopBuyItemConfirmMenu_EndMaxErrorDialog__);
    sub_1C2D490(&Method_ShopBuyItemConfirmMenu_OnClickDecide__);
    sub_1C2D490(&Method_ShopBuyItemConfirmMenu_ReturnWarning__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_9326/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/);
    sub_1C2D490(&StringLiteral_12060/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/);
    sub_1C2D490(&StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C234BF = 1;
  }
  check = 0;
  if ( v2->fields.state == 2 )
  {
    shopEntity = v2->fields.shopEntity;
    if ( shopEntity )
    {
      if ( shopEntity->fields.shopType == 18 )
      {
        v4 = Method_ShopBuyItemConfirmMenu_OnClickDecide__;
        if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
          v4 = (_QWORD *)sub_1C2D4A8(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
        v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
        OverwriteAssetSoundName__PlaySystemSe(v5, v2->fields.decideSe, 0, 0);
        ActionExtensions__Call(v2->fields.onReset, 0);
        return;
      }
      this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ShopMaster___);
        method = (const MethodInfo *)v2->fields.shopEntity;
        if ( method )
        {
          if ( LODWORD(method->parameters) != 17 )
          {
            if ( !this )
              goto LABEL_40;
            if ( ShopMaster__PurchaseCloseEventShop((ShopMaster_o *)this, (ShopEntity_o *)method, 0) )
            {
              v6 = Method_ShopBuyItemConfirmMenu_OnClickDecide__;
              if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
                v6 = (_QWORD *)sub_1C2D4A8(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
              v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
              OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
              this = (ShopBuyItemConfirmMenu_o *)v2->fields.shopEntity;
              if ( this )
              {
                noTitleDialog = v2->fields.noTitleDialog;
                presentAheadLabel = this->fields.presentAheadLabel;
                Name = (Il2CppObject *)ShopEntity__getName((ShopEntity_o *)this, 0);
                v11 = System_String__Format((System_String_o *)presentAheadLabel, Name, 0);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v12 = LocalizationManager__Get((System_String_o *)StringLiteral_9326/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, 0);
                v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/, 0);
                v14 = (System_Action_bool__o *)sub_1C2D6DC(System_Action_bool__TypeInfo);
                System_Action_bool____ctor(v14, (Il2CppObject *)v2, Method_ShopBuyItemConfirmMenu_ReturnWarning__, 0);
                if ( noTitleDialog )
                {
                  NoTitleDialog__Open(noTitleDialog, v11, v12, v13, v14, 0);
                  return;
                }
              }
              goto LABEL_40;
            }
            method = (const MethodInfo *)v2->fields.shopEntity;
            if ( !method )
            {
LABEL_36:
              v2->fields.state = 3;
              v23 = Method_ShopBuyItemConfirmMenu_OnClickDecide__;
              if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
                v23 = (_QWORD *)sub_1C2D4A8(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
              v24 = (System_Reflection_MethodBase_o *)sub_1C2D474(v23, v23[4]);
              OverwriteAssetSoundName__PlaySystemSe(v24, v2->fields.decideSe, 0, 0);
              ShopBuyItemConfirmMenu__CallOnDecide(v2, 1, v25);
              return;
            }
          }
          if ( ShopEntity__IsEnable((ShopEntity_o *)method, 0, 0) )
          {
            this = (ShopBuyItemConfirmMenu_o *)v2->fields.shopEntity;
            if ( !this )
              goto LABEL_40;
            this = (ShopBuyItemConfirmMenu_o *)ShopEntity__isMaxOver((ShopEntity_o *)this, 1, &check, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v16 = v2->fields.shopEntity;
              if ( v16 )
              {
                MaxAlertMessage = ShopBuyItemConfirmMenu__GetMaxAlertMessage(v2, v16->fields.shopType, check, v15);
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v19 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                System_Action___ctor(v19, (Il2CppObject *)v2, Method_ShopBuyItemConfirmMenu_EndMaxErrorDialog__, 0);
                if ( Instance )
                {
                  CommonUI__OpenNotificationDialog(
                    (CommonUI_o *)Instance,
                    (System_String_o *)StringLiteral_1/*""*/,
                    MaxAlertMessage,
                    v19,
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
                  return;
                }
              }
              goto LABEL_40;
            }
            goto LABEL_36;
          }
          this = (ShopBuyItemConfirmMenu_o *)v2->fields.presentAheadLabel;
          if ( this )
          {
            UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
            warningLabel = v2->fields.warningLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12060/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, 0);
            if ( warningLabel )
            {
              UILabel__set_text(warningLabel, (System_String_o *)this, 0);
              v21 = Method_ShopBuyItemConfirmMenu_OnClickDecide__;
              if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
                v21 = (_QWORD *)sub_1C2D4A8(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
              v22 = (System_Reflection_MethodBase_o *)sub_1C2D474(v21, v21[4]);
              OverwriteAssetSoundName__PlaySystemSe(v22, 2, 0, 0);
              this = (ShopBuyItemConfirmMenu_o *)v2->fields.decideButton;
              if ( this )
              {
                ((void (__fastcall *)(ShopBuyItemConfirmMenu_o *, __int64, _QWORD, Il2CppClass *))this->klass[1]._1.interopData)(
                  this,
                  3,
                  0,
                  this->klass[1]._1.klass);
                return;
              }
            }
          }
        }
      }
    }
LABEL_40:
    sub_1C2D6EC(this, method);
  }
}


void ShopBuyItemConfirmMenu__OnClickInfo(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
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
      TargetId = ShopEntity__get_TargetId(this->fields.shopEntity, 0);
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
      v11 = ShopEntity__get_TargetId(this->fields.shopEntity, 0);
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
  this = (ShopBuyItemConfirmMenu_o *)ShopEntity__get_TargetId(this->fields.shopEntity, 0);
  v9 = v5->fields.shopEntity;
  if ( !v9 )
LABEL_14:
    sub_1C2D6EC(this, shopEntity);
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


void ShopBuyItemConfirmMenu__OnClickReset(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4C234D1 & 1) == 0 )
  {
    sub_1C2D490(&Method_ShopBuyItemConfirmMenu_OnClickReset__);
    byte_4C234D1 = 1;
  }
  v3 = Method_ShopBuyItemConfirmMenu_OnClickReset__;
  if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickReset__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_ShopBuyItemConfirmMenu_OnClickReset__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  ActionExtensions__Call(this->fields.onReset, 0);
}


void ShopBuyItemConfirmMenu__Open(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        int32_t shopKind,
        System_Action_int__o *onDecide,
        int32_t buttonSpriteId,
        int32_t shopState,
        System_Action_o *onReset,
        int32_t se,
        const MethodInfo *method)
{
  struct ShopEntity_o **p_shopEntity; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct ShopEntity_o *v26; // x8
  struct CommonConsumeEntity_array *CommonConsumeEntities; // x1
  struct CommonConsumeEntity_array **p_commonConsumeEntities; // x0
  System_String_o *Name; // x23
  System_String_o *v30; // x23
  const MethodInfo *v31; // x3
  UISprite_o *decideButtonImg; // x24
  ShopBuyItemConfirmMenu_o *v33; // x0
  bool IsPreparation; // w0
  bool v35; // w26
  bool v36; // w25
  const MethodInfo *v37; // x4
  UserGameEntity_o *SelfUserGame; // x24
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x3
  ShopEntity_o *v41; // x27
  UILabel_o *textOnMask; // x28
  const MethodInfo *v43; // x3
  ShopEntity_o *v44; // x26
  UISprite_o *possessionSprite; // x27
  bool v46; // w0
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x3
  bool IsNotHavingShopItemReceived; // w0
  bool v50; // w22
  const MethodInfo *v51; // x5
  const MethodInfo *v52; // x4
  bool IsBuyable; // w20
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x1
  const MethodInfo *v57; // x4
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x5
  UISprite_o *itemMaskeSprite; // x20
  ShopBuyItemConfirmMenu_o *v61; // x0
  const MethodInfo *v62; // x3
  _BOOL8 IsShowMask; // x0
  const MethodInfo *v64; // x3
  const MethodInfo *v65; // x3
  System_Action_o *v66; // x20
  System_String_o *itemName; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4C234A8 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_ShopBuyItemConfirmMenu_EndOpen__);
    sub_1C2D490(&ShopBuyItemConfirmMenu_TypeInfo);
    sub_1C2D490(&ShopBuyItemUtility_TypeInfo);
    byte_4C234A8 = 1;
  }
  message = 0;
  itemName = 0;
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1C2D434(
      (CGThumbnailListItem_o *)&this->fields.onDecide,
      (int32_t)onDecide,
      shopKind,
      (const MethodInfo *)onDecide);
    p_shopEntity = &this->fields.shopEntity;
    this->fields.shopEntity = shopEntity;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.shopEntity, (int32_t)shopEntity, v18, v19);
    this->fields.onReset = onReset;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onReset, (int32_t)onReset, v20, v21);
    v26 = this->fields.shopEntity;
    this->fields.shopState = shopState;
    this->fields.decideSe = se;
    if ( !v26 )
      goto LABEL_8;
    if ( !shopEntity )
      goto LABEL_27;
    if ( shopEntity->fields.payType == 14 )
    {
      CommonConsumeEntities = ShopEntity__GetCommonConsumeEntities(shopEntity, 0);
      p_commonConsumeEntities = &this->fields.commonConsumeEntities;
      this->fields.commonConsumeEntities = CommonConsumeEntities;
    }
    else
    {
LABEL_8:
      p_commonConsumeEntities = &this->fields.commonConsumeEntities;
      LODWORD(CommonConsumeEntities) = 0;
      this->fields.commonConsumeEntities = 0;
    }
    sub_1C2D434((CGThumbnailListItem_o *)p_commonConsumeEntities, (int32_t)CommonConsumeEntities, v24, v25);
    this->fields.shopKind = shopKind;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)*p_shopEntity;
      if ( *p_shopEntity )
      {
        Name = ShopEntity__getName((ShopEntity_o *)gameObject, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__ReplaceCommonTag(Name, 0, 0);
        if ( this->fields.nameLabel )
        {
          v30 = (System_String_o *)gameObject;
          UICrossNarrowLabel__SetCrossNarrowText(this->fields.nameLabel, (System_String_o *)gameObject, 0);
          decideButtonImg = this->fields.decideButtonImg;
          v33 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
            v33 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          }
          ShopBuyItemConfirmMenu__SetSpriteName(
            v33,
            decideButtonImg,
            (System_String_o *)v33->fields.decideButton->monitor,
            v31);
          gameObject = (UnityEngine_GameObject_o *)*p_shopEntity;
          if ( *p_shopEntity )
          {
            IsPreparation = ShopEntity__IsPreparation((ShopEntity_o *)gameObject, &message, &itemName, 0);
            v35 = IsPreparation;
            v36 = IsPreparation;
            ShopBuyItemConfirmMenu__SetMessageLabel(this, this->fields.shopEntity, IsPreparation, message, v37);
            SelfUserGame = UserGameMaster__getSelfUserGame(0);
            ShopBuyItemConfirmMenu__SetBandSprite(this, this->fields.shopEntity, v39);
            ShopBuyItemConfirmMenu__SetTextOnMask(this, this->fields.shopEntity, v35, v40);
            v41 = this->fields.shopEntity;
            textOnMask = this->fields.textOnMask;
            if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
            ShopBuyItemUtility__SetAddTextOnMask(v41, textOnMask, 0);
            ShopBuyItemConfirmMenu__SetNumText(this, this->fields.shopEntity, v35, v43);
            v44 = this->fields.shopEntity;
            if ( v44 )
            {
              possessionSprite = this->fields.possessionSprite;
              v46 = ShopEntity__checkFlag(this->fields.shopEntity, 0x4000, 0);
              ShopBuyItemUtility__SetShopHaveStatusIcon(v44, possessionSprite, v46, 0);
              ShopBuyItemConfirmMenu__SetPossessionInfo(this, shopEntity, v47);
              gameObject = (UnityEngine_GameObject_o *)this->fields.shopEntity;
              if ( gameObject )
              {
                if ( !ShopEntity__IsSoldOut((ShopEntity_o *)gameObject, 0) )
                {
                  IsNotHavingShopItemReceived = 0;
                  goto LABEL_25;
                }
                gameObject = (UnityEngine_GameObject_o *)*p_shopEntity;
                if ( *p_shopEntity )
                {
                  IsNotHavingShopItemReceived = ShopEntity__GetIsNotHavingShopItemReceived(
                                                  (ShopEntity_o *)gameObject,
                                                  0);
LABEL_25:
                  v50 = IsNotHavingShopItemReceived;
                  ShopBuyItemConfirmMenu__SetExtensionText(
                    this,
                    this->fields.shopEntity,
                    IsNotHavingShopItemReceived,
                    v48);
                  ShopBuyItemConfirmMenu__SetPriceInfo(this, this->fields.shopEntity, v36, buttonSpriteId, v50, v51);
                  IsBuyable = ShopBuyItemConfirmMenu__GetIsBuyable(
                                this,
                                this->fields.shopEntity,
                                v36,
                                SelfUserGame,
                                v52);
                  ShopBuyItemConfirmMenu__SetDefaultButton(this, IsBuyable, v54);
                  ShopBuyItemConfirmMenu__SetAheadText(this, this->fields.shopEntity, IsBuyable, v55);
                  ShopBuyItemConfirmMenu__SetWindowSize(this, v56);
                  ShopBuyItemConfirmMenu__SetWarningLabel(this, this->fields.shopEntity, v36, SelfUserGame, v57);
                  ShopBuyItemConfirmMenu__SetItemIcon(this, this->fields.shopEntity, v36, v58);
                  ShopBuyItemConfirmMenu__SetNameText(this, this->fields.shopEntity, v36, v30, itemName, v59);
                  itemMaskeSprite = this->fields.itemMaskeSprite;
                  IsShowMask = ShopBuyItemConfirmMenu__GetIsShowMask(v61, this->fields.shopEntity, v36, v62);
                  ShopBuyItemConfirmMenu__SetSpriteActive(
                    (ShopBuyItemConfirmMenu_o *)IsShowMask,
                    itemMaskeSprite,
                    IsShowMask,
                    v64);
                  ShopBuyItemConfirmMenu__SetInfoButton(this, this->fields.shopEntity, v36, v65);
                  this->fields.state = 1;
                  v66 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                  System_Action___ctor(v66, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndOpen__, 0);
                  BaseDialog__Open((BaseDialog_o *)this, v66, 0, 0);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_1C2D6EC(gameObject, v23);
  }
}


void ShopBuyItemConfirmMenu__OpenAfterCheckedFree(
        ShopBuyItemConfirmMenu_o *this,
        ShopBuyItemListViewItem_o *item,
        System_Action_o *onChecked,
        System_Action_int__o *onCloseReturnWarning,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v8; // x21
  struct ShopEntity_o *Shop_k__BackingField; // x23
  int v10; // w24
  Il2CppObject *Instance; // x0
  System_String_o *warningMessage; // x24
  CommonUI_o *v13; // x22
  Il2CppObject *Name; // x0
  System_String_o *v15; // x23
  System_String_o *v16; // x24
  System_String_o *v17; // x25
  System_Action_bool__o *v18; // x26
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_String_o *itemName; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4C234CD & 1) == 0 )
  {
    sub_1C2D490(&System_Action_bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_ShopBuyItemConfirmMenu_ReturnWarningRarePri__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_19647/*"freeShopCondId"*/);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C2D490(&StringLiteral_11142/*"RETURN_RARE_PRI_SHOP_DECIDE_BUTTON"*/);
    byte_4C234CD = 1;
  }
  message = 0;
  itemName = 0;
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
                                             &itemName,
                                             0);
        if ( Shop_k__BackingField->fields.script )
        {
          v10 = (int)this;
          if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                  (System_Collections_Generic_Dictionary_object__object__o *)Shop_k__BackingField->fields.script,
                  (Il2CppObject *)StringLiteral_19647/*"freeShopCondId"*/,
                  (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
            || ((v10 | ShopBuyItemListViewItem__get_IsSoldOut(item, 0)) & 1) != 0
            || !ShopEntity__IsAfterTheFreeShopReleaseDate(Shop_k__BackingField, 0)
            || ShopEntity__IsFulFilledFreeExchangeCondition(Shop_k__BackingField, 0) )
          {
            ActionExtensions__Call(onChecked, 0);
            return;
          }
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          warningMessage = Shop_k__BackingField->fields.warningMessage;
          v13 = (CommonUI_o *)Instance;
          Name = (Il2CppObject *)ShopEntity__getName(Shop_k__BackingField, 0);
          v15 = System_String__Format(warningMessage, Name, 0);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v16 = LocalizationManager__Get((System_String_o *)StringLiteral_11142/*"RETURN_RARE_PRI_SHOP_DECIDE_BUTTON"*/, 0);
          v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/, 0);
          v18 = (System_Action_bool__o *)sub_1C2D6DC(System_Action_bool__TypeInfo);
          System_Action_bool____ctor(v18, (Il2CppObject *)v8, Method_ShopBuyItemConfirmMenu_ReturnWarningRarePri__, 0);
          if ( v13 )
          {
            CommonUI__OpenNoTitleDialog(v13, v15, v16, v17, v18, 0);
            v8->fields.onChecked = onChecked;
            sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.onChecked, (int32_t)onChecked, v19, v20);
            v8->fields.onCloseReturnWarning = onCloseReturnWarning;
            sub_1C2D434(
              (CGThumbnailListItem_o *)&v8->fields.onCloseReturnWarning,
              (int32_t)onCloseReturnWarning,
              v21,
              v22);
            return;
          }
        }
      }
    }
    sub_1C2D6EC(this, item);
  }
}


void ShopBuyItemConfirmMenu__PlayShowInfomationSound(
        ShopBuyItemConfirmMenu_o *this,
        int32_t seKind,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4C234C8 & 1) == 0 )
  {
    sub_1C2D490(&Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__);
    byte_4C234C8 = 1;
  }
  if ( (seKind & 0x80000000) == 0 )
  {
    v4 = Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__;
    if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C2D4A8(Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, seKind, 0, 0);
  }
}


void ShopBuyItemConfirmMenu__ReturnWarning(ShopBuyItemConfirmMenu_o *this, bool isDecide, const MethodInfo *method)
{
  NoTitleDialog_o *noTitleDialog; // x0
  const MethodInfo *v6; // x2

  noTitleDialog = this->fields.noTitleDialog;
  if ( !noTitleDialog )
    sub_1C2D6EC(0, isDecide);
  NoTitleDialog__Close(noTitleDialog, 0);
  if ( isDecide )
  {
    this->fields.state = 3;
    ShopBuyItemConfirmMenu__CallOnDecide(this, 1, v6);
  }
}


void ShopBuyItemConfirmMenu__ReturnWarningRarePri(
        ShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x20

  if ( (byte_4C234C3 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_ShopBuyItemConfirmMenu___c__DisplayClass121_0__ReturnWarningRarePri_b__0__);
    sub_1C2D490(&ShopBuyItemConfirmMenu___c__DisplayClass121_0_TypeInfo);
    byte_4C234C3 = 1;
  }
  v5 = sub_1C2D6DC(ShopBuyItemConfirmMenu___c__DisplayClass121_0_TypeInfo);
  ShopBuyItemConfirmMenu___c__DisplayClass121_0___ctor((ShopBuyItemConfirmMenu___c__DisplayClass121_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9),
        *(_BYTE *)(v5 + 24) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v5,
          Method_ShopBuyItemConfirmMenu___c__DisplayClass121_0__ReturnWarningRarePri_b__0__,
          0),
        !Instance) )
  {
    sub_1C2D6EC(v6, v7);
  }
  CommonUI__CloseNoTitleDialog((CommonUI_o *)Instance, v11, 0);
}


void ShopBuyItemConfirmMenu__SetAheadText(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isBuyable,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v6; // x19
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  int32_t purchaseType; // w8
  UILabel_o *presentAheadLabel; // x19
  __int64 *v11; // x8
  System_String_o *v12; // x1
  UILabel_o *v13; // x0
  Il2CppObject *MasterData_object; // x21
  int klass; // w8
  int32_t shopType; // w20
  int32_t v17; // w21
  UILabel_o *v18; // x20
  const MethodInfo *v19; // x3
  UISprite_o *decideButtonImg; // x19
  ShopBuyItemConfirmMenu_o *v21; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v6 = this;
  if ( (byte_4C234B5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&ShopBuyItemConfirmMenu_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_10477/*"PURCHASE_AFTER_COSTUME"*/);
    sub_1C2D490(&StringLiteral_10482/*"PURCHASE_AFTER_USER_ITEM"*/);
    sub_1C2D490(&StringLiteral_10479/*"PURCHASE_AFTER_ITEM_SET"*/);
    sub_1C2D490(&StringLiteral_8276/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/);
    sub_1C2D490(&StringLiteral_10480/*"PURCHASE_AFTER_PRESENT_BOX"*/);
    sub_1C2D490(&StringLiteral_10478/*"PURCHASE_AFTER_EVENT_SVT_GET"*/);
    sub_1C2D490(&StringLiteral_10484/*"PURCHASE_AFTER_USER_SVT_COIN_PERIOD"*/);
    sub_1C2D490(&StringLiteral_10481/*"PURCHASE_AFTER_QP"*/);
    sub_1C2D490(&StringLiteral_10483/*"PURCHASE_AFTER_USER_SVT_COIN"*/);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C234B5 = 1;
  }
  entity = 0;
  ShopBuyItemConfirmMenu__SetLabelText(this, v6->fields.presentAheadLabel, (System_String_o *)StringLiteral_1/*""*/, method);
  if ( isBuyable )
  {
    if ( !shopEntity )
      goto LABEL_49;
    purchaseType = shopEntity->fields.purchaseType;
    if ( purchaseType <= 14 )
    {
      switch ( purchaseType )
      {
        case 1:
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_49;
          MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
          Instance = (DataManager_o *)ShopEntity__get_TargetId(shopEntity, 0);
          if ( !MasterData_object )
            goto LABEL_49;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        &entity,
                                        (int32_t)Instance,
                                        (const MethodInfo_3387DE4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return;
          if ( !entity )
            goto LABEL_49;
          klass = (int)entity[3].klass;
          if ( klass != 1 )
          {
            if ( klass == 29 )
            {
              shopType = shopEntity->fields.shopType;
              presentAheadLabel = v6->fields.presentAheadLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              if ( shopType == 17 )
                v11 = &StringLiteral_10484/*"PURCHASE_AFTER_USER_SVT_COIN_PERIOD"*/;
              else
                v11 = &StringLiteral_10483/*"PURCHASE_AFTER_USER_SVT_COIN"*/;
            }
            else
            {
              presentAheadLabel = v6->fields.presentAheadLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v11 = &StringLiteral_10482/*"PURCHASE_AFTER_USER_ITEM"*/;
            }
LABEL_11:
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)*v11, 0);
            if ( presentAheadLabel )
            {
              v12 = (System_String_o *)Instance;
              v13 = presentAheadLabel;
LABEL_13:
              UILabel__set_text(v13, v12, 0);
              return;
            }
            goto LABEL_49;
          }
          v17 = shopEntity->fields.shopType;
          v18 = v6->fields.presentAheadLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( v17 != 9 )
          {
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10481/*"PURCHASE_AFTER_QP"*/, 0);
            if ( v18 )
            {
              v12 = (System_String_o *)Instance;
              v13 = v18;
              goto LABEL_13;
            }
LABEL_49:
            sub_1C2D6EC(Instance, v8);
          }
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8276/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/, 0);
          if ( !v18 )
            goto LABEL_49;
          UILabel__set_text(v18, (System_String_o *)Instance, 0);
          decideButtonImg = v6->fields.decideButtonImg;
          v21 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
            v21 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          }
          ShopBuyItemConfirmMenu__SetSpriteName(
            v21,
            decideButtonImg,
            (System_String_o *)v21->fields.decideButton->fields.m_CachedPtr,
            v19);
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
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v11 = &StringLiteral_10479/*"PURCHASE_AFTER_ITEM_SET"*/;
          goto LABEL_11;
        case 8:
          presentAheadLabel = v6->fields.presentAheadLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v11 = &StringLiteral_10478/*"PURCHASE_AFTER_EVENT_SVT_GET"*/;
          goto LABEL_11;
        default:
          if ( purchaseType != 14 )
            return;
          presentAheadLabel = v6->fields.presentAheadLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v11 = &StringLiteral_10477/*"PURCHASE_AFTER_COSTUME"*/;
          goto LABEL_11;
      }
    }
    else if ( (unsigned int)purchaseType <= 0x15 && ((1 << purchaseType) & 0x290000) != 0 )
    {
LABEL_8:
      presentAheadLabel = v6->fields.presentAheadLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = &StringLiteral_10480/*"PURCHASE_AFTER_PRESENT_BOX"*/;
      goto LABEL_11;
    }
  }
}


void ShopBuyItemConfirmMenu__SetBandSprite(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopBuyItemConfirmMenu_o *v5; // x19
  ShopBuyItemConfirmMenu_o *v6; // x0
  const MethodInfo *v7; // x3
  UISprite_o *bandSprite; // x1
  __int64 *v9; // x8

  v5 = this;
  if ( (byte_4C234B6 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20702/*"img_txt_shop"*/);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C2D490(&StringLiteral_20686/*"img_txt_quest"*/);
    byte_4C234B6 = 1;
  }
  if ( !shopEntity )
    sub_1C2D6EC(this, shopEntity);
  switch ( shopEntity->fields.purchaseType )
  {
    case 5:
      this = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu__GetIsSetItemEventShop(
                                           this,
                                           shopEntity->fields.targetIds,
                                           method);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_7;
      goto LABEL_6;
    case 6:
      ShopBuyItemConfirmMenu__SetSpriteActive(this, v5->fields.bandSprite, 1, v3);
      bandSprite = v5->fields.bandSprite;
      v9 = &StringLiteral_20686/*"img_txt_quest"*/;
      goto LABEL_9;
    case 7:
    case 9:
LABEL_6:
      ShopBuyItemConfirmMenu__SetSpriteActive(this, v5->fields.bandSprite, 1, v3);
      bandSprite = v5->fields.bandSprite;
      v9 = &StringLiteral_20702/*"img_txt_shop"*/;
LABEL_9:
      ShopBuyItemConfirmMenu__SetSpriteName(v6, bandSprite, (System_String_o *)*v9, v7);
      break;
    default:
LABEL_7:
      ShopBuyItemConfirmMenu__SetSpriteActive(this, v5->fields.bandSprite, 0, v3);
      break;
  }
}


void ShopBuyItemConfirmMenu__SetCommonConsumeIcon(
        ShopBuyItemConfirmMenu_o *this,
        ItemIconComponent_o *itemIcon,
        CommonConsumeEntity_o *commonConsumeEntity,
        const MethodInfo *method)
{
  UISprite_o *iconSprite; // x19

  if ( (byte_4C234BC & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu_o *)sub_1C2D490(&AtlasManager_TypeInfo);
    byte_4C234BC = 1;
  }
  if ( !commonConsumeEntity )
    goto LABEL_14;
  if ( CommonConsumeEntity__get_IsItem(commonConsumeEntity, 0) )
  {
    this = (ShopBuyItemConfirmMenu_o *)CommonConsumeEntity__GetItemEntity(commonConsumeEntity, 0);
    if ( this )
    {
      if ( itemIcon )
      {
        ItemIconComponent__SetItem(itemIcon, (int32_t)this->fields.basePanelList, -1, 1, 0);
        return;
      }
LABEL_14:
      sub_1C2D6EC(this, itemIcon);
    }
  }
  else
  {
    this = (ShopBuyItemConfirmMenu_o *)CommonConsumeEntity__get_IsAp(commonConsumeEntity, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !itemIcon )
        goto LABEL_14;
      iconSprite = itemIcon->fields.iconSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetItem(iconSprite, 47, 0);
    }
  }
}


void ShopBuyItemConfirmMenu__SetCommonConsumePriceText(
        ShopBuyItemConfirmMenu_o *this,
        UILabel_o *priceDataLabel,
        UIIconLabel_o *priceIconLabel,
        ItemIconComponent_o *itemIcon,
        CommonConsumeEntity_o *commonConsumeEnt,
        const MethodInfo *method)
{
  bool v11; // w0
  System_String_o *v12; // x24
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x25
  Il2CppObject *Name; // x0
  System_String_o *shopEntity; // x0
  __int64 v19; // x1
  ShopBuyItemConfirmMenu_c *v20; // x0
  int32_t PriceIcon; // w0
  int32_t v22; // w22
  int32_t v23; // w23
  ShopBuyItemConfirmMenu_o *v24; // x0
  const MethodInfo *v25; // x3
  int32_t num; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C234BB & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ShopBuyItemConfirmMenu_TypeInfo);
    sub_1C2D490(&StringLiteral_5618/*"EVENT_ITEM_NEED_INFO"*/);
    byte_4C234BB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)priceDataLabel, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)priceIconLabel, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)itemIcon, 0, 0);
      if ( commonConsumeEnt && !v11 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5618/*"EVENT_ITEM_NEED_INFO"*/, 0);
        num = commonConsumeEnt->fields.num;
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v13, v14, v15);
        Name = (Il2CppObject *)CommonConsumeEntity__GetName(commonConsumeEnt, 0);
        shopEntity = System_String__Format_63499156(v12, v16, Name, 0);
        if ( !priceDataLabel )
          goto LABEL_22;
        UILabel__set_text(priceDataLabel, shopEntity, 0);
        v20 = ShopBuyItemConfirmMenu_TypeInfo;
        if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
          v20 = ShopBuyItemConfirmMenu_TypeInfo;
        }
        UILabel__SetCondensedScale(priceDataLabel, v20->static_fields->PRICE_DATA_LABEL_MAX_WIDTH, 0, 0);
        shopEntity = (System_String_o *)this->fields.shopEntity;
        if ( !shopEntity
          || (PriceIcon = ShopEntity__GetPriceIcon((ShopEntity_o *)shopEntity, 0),
              v22 = commonConsumeEnt->fields.num,
              v23 = PriceIcon,
              shopEntity = (System_String_o *)CommonConsumeEntity__GetUserHasNum(commonConsumeEnt, 0),
              !priceIconLabel) )
        {
LABEL_22:
          sub_1C2D6EC(shopEntity, v19);
        }
        UIIconLabel__SetPurchaseDecision(priceIconLabel, v23, v22, (int32_t)shopEntity, 0);
        ShopBuyItemConfirmMenu__SetCommonConsumeIcon(v24, itemIcon, commonConsumeEnt, v25);
      }
    }
  }
}


void ShopBuyItemConfirmMenu__SetCommonConsumeWarningLabel(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  ;
}


void ShopBuyItemConfirmMenu__SetDecideButtonSprite(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        int32_t eventId,
        int32_t buttonSpriteId,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v7; // x19
  UISprite_o *v8; // x21
  ShopBuyItemConfirmMenu_c *v9; // x0
  System_String_o *VALENTINE_BTN_NAME; // x22
  System_String_o *v11; // x20
  System_String_o *v12; // x0
  System_String_o *v13; // x20
  UISprite_o *v14; // x20
  UISprite_o *deceideBtnSprite; // x20
  UISprite_o *v16; // x20
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  v7 = this;
  v17 = buttonSpriteId;
  if ( (byte_4C234BD & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&EventRewardRootComponent_TypeInfo);
    sub_1C2D490(&ShopBuyItemConfirmMenu_TypeInfo);
    sub_1C2D490(&StringLiteral_16105/*"_"*/);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C2D490(&StringLiteral_17613/*"btn_txt_trade"*/);
    byte_4C234BD = 1;
  }
  if ( !shopEntity )
    goto LABEL_24;
  if ( (shopEntity->fields.payType | 4) != 6 )
  {
    deceideBtnSprite = v7->fields.deceideBtnSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCommon(deceideBtnSprite, 0);
    v16 = v7->fields.deceideBtnSprite;
    this = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
    if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
    if ( v16 )
    {
      UISprite__set_spriteName(v16, ShopBuyItemConfirmMenu_TypeInfo->static_fields->DECIED_BTN_NAME_DEFAULT, 0);
      this = (ShopBuyItemConfirmMenu_o *)v7->fields.deceideBtnSprite;
      if ( this )
      {
        ((void (__fastcall *)(ShopBuyItemConfirmMenu_o *, void *))this->klass[1].vtable._6_get_closeBtnPath.method)(
          this,
          this->klass[2]._1.image);
        return;
      }
    }
    goto LABEL_24;
  }
  if ( !buttonSpriteId )
    goto LABEL_11;
  v8 = v7->fields.deceideBtnSprite;
  v9 = ShopBuyItemConfirmMenu_TypeInfo;
  if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
    v9 = ShopBuyItemConfirmMenu_TypeInfo;
  }
  VALENTINE_BTN_NAME = v9->static_fields->VALENTINE_BTN_NAME;
  v11 = System_Int32__ToString((int)shopEntity + 24, 0);
  v12 = System_Int32__ToString((int32_t)&v17, 0);
  v13 = System_String__Concat_63498116(VALENTINE_BTN_NAME, v11, (System_String_o *)StringLiteral_16105/*"_"*/, v12, 0);
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  if ( !EventRewardRootComponent__setRewardInfoImg(v8, v13, 0) )
  {
LABEL_11:
    v14 = v7->fields.deceideBtnSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCommon(v14, 0);
    this = (ShopBuyItemConfirmMenu_o *)v7->fields.deceideBtnSprite;
    if ( this )
    {
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17613/*"btn_txt_trade"*/, 0);
      this = (ShopBuyItemConfirmMenu_o *)v7->fields.deceideBtnSprite;
      if ( this )
      {
        ((void (__fastcall *)(ShopBuyItemConfirmMenu_o *, void *))this->klass[1].vtable._6_get_closeBtnPath.method)(
          this,
          this->klass[2]._1.image);
        return;
      }
    }
LABEL_24:
    sub_1C2D6EC(this, shopEntity);
  }
}


void ShopBuyItemConfirmMenu__SetDefaultButton(ShopBuyItemConfirmMenu_o *this, bool isCan, const MethodInfo *method)
{
  UnityEngine_Object_o *shopResetButton; // x21
  __int64 v6; // x1
  void *Master_object; // x0
  const MethodInfo *v8; // x3
  int32_t shopState; // w8
  int32_t v10; // w21
  struct ShopEntity_o *shopEntity; // x8
  Il2CppObject *v12; // x22
  struct ShopEntity_o *v13; // x8
  int32_t resetLimitNum; // w8
  Il2CppObject *v15; // x22
  unsigned int v16; // w21
  UISprite_o *exclusiveDecideButtonImg; // x1
  ShopBuyItemConfirmMenu_o *v18; // x0
  const MethodInfo *v19; // x3
  UISprite_o *v20; // x21
  ShopBuyItemConfirmMenu_o *v21; // x0
  const MethodInfo *v22; // x3
  UISprite_o *shopResetButtonSprite; // x22
  __int64 v24; // x1
  ShopResetEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C234CF & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ShopResetMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserShopMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_17605/*"btn_txt_stock_reset"*/);
    sub_1C2D490(&StringLiteral_20328/*"img_btn_text_reset"*/);
    byte_4C234CF = 1;
  }
  entity = 0;
  shopResetButton = (UnityEngine_Object_o *)this->fields.shopResetButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shopResetButton, 0, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !Master_object )
      goto LABEL_71;
    shopState = this->fields.shopState;
    if ( shopState == 18 )
    {
      if ( !this->fields.shopEntity )
        goto LABEL_71;
      v10 = *((_DWORD *)Master_object + 25);
      Master_object = (void *)ShopEntity__IsSoldOut(this->fields.shopEntity, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        Master_object = this->fields.shopEntity;
        if ( !Master_object )
          goto LABEL_71;
        Master_object = (void *)ShopEntity__GetIsNotHavingShopItemReceived((ShopEntity_o *)Master_object, 0);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ShopResetMaster___);
          shopEntity = this->fields.shopEntity;
          if ( !shopEntity || !Master_object )
            goto LABEL_71;
          Master_object = (void *)ShopResetMaster__TryGetEntity(
                                    (ShopResetMaster_o *)Master_object,
                                    &entity,
                                    shopEntity->fields.baseShopId,
                                    v10,
                                    0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            Master_object = this->fields.decideButton;
            if ( !Master_object )
              goto LABEL_71;
            Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
            if ( !Master_object )
              goto LABEL_71;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
            Master_object = this->fields.shopResetButton;
            if ( !Master_object )
              goto LABEL_71;
            Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
            if ( !Master_object )
              goto LABEL_71;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v12 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserShopMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C211E1 )
            {
              sub_1C2D490(&NetworkManager_TypeInfo);
              byte_4C211E1 = 1;
            }
            Master_object = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Master_object = NetworkManager_TypeInfo;
            }
            v13 = this->fields.shopEntity;
            if ( !v13 )
              goto LABEL_71;
            if ( !v12 )
              goto LABEL_71;
            Master_object = UserShopMaster__GetEntityDefinitely(
                              (UserShopMaster_o *)v12,
                              *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
                              v13->fields.baseShopId,
                              0);
            if ( !entity )
              goto LABEL_71;
            resetLimitNum = entity->fields.resetLimitNum;
            if ( !resetLimitNum )
              goto LABEL_74;
            if ( !Master_object )
              goto LABEL_71;
            if ( resetLimitNum > *((_DWORD *)Master_object + 10) )
            {
LABEL_74:
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              v15 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserItemMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4C211E1 )
              {
                sub_1C2D490(&NetworkManager_TypeInfo);
                byte_4C211E1 = 1;
              }
              Master_object = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                Master_object = NetworkManager_TypeInfo;
              }
              if ( !v15 )
                goto LABEL_71;
              Master_object = UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)v15,
                                *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
                                v10,
                                0);
              if ( !Master_object )
                goto LABEL_71;
              if ( *((int *)Master_object + 7) <= 0 )
                v16 = 3;
              else
                v16 = 0;
              goto LABEL_62;
            }
LABEL_61:
            v16 = 3;
LABEL_62:
            shopResetButtonSprite = this->fields.shopResetButtonSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetDownloadCommonSprite(shopResetButtonSprite, (System_String_o *)StringLiteral_17605/*"btn_txt_stock_reset"*/, 0);
            Master_object = this->fields.shopResetButton;
            if ( Master_object )
            {
              (*(void (__fastcall **)(void *, _QWORD, __int64, _QWORD))(*(_QWORD *)Master_object + 536LL))(
                Master_object,
                v16,
                1,
                *(_QWORD *)(*(_QWORD *)Master_object + 544LL));
              goto LABEL_66;
            }
LABEL_71:
            sub_1C2D6EC(Master_object, v6);
          }
        }
      }
      shopState = this->fields.shopState;
    }
    exclusiveDecideButtonImg = this->fields.exclusiveDecideButtonImg;
    if ( shopState == 22 )
    {
      ShopBuyItemConfirmMenu__SetSpriteActive(
        (ShopBuyItemConfirmMenu_o *)Master_object,
        exclusiveDecideButtonImg,
        1,
        v8);
      ShopBuyItemConfirmMenu__SetSpriteActive(v18, this->fields.decideButtonImg, 0, v19);
      v20 = this->fields.exclusiveDecideButtonImg;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetDownloadCommonSprite(v20, (System_String_o *)StringLiteral_20328/*"img_btn_text_reset"*/, 0);
    }
    else
    {
      ShopBuyItemConfirmMenu__SetSpriteActive(
        (ShopBuyItemConfirmMenu_o *)Master_object,
        exclusiveDecideButtonImg,
        0,
        v8);
      ShopBuyItemConfirmMenu__SetSpriteActive(v21, this->fields.decideButtonImg, 1, v22);
    }
    Master_object = this->fields.decideButton;
    if ( !Master_object )
      goto LABEL_71;
    Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
    if ( !Master_object )
      goto LABEL_71;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
    Master_object = this->fields.shopResetButton;
    if ( !Master_object )
      goto LABEL_71;
    Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
    if ( !Master_object )
      goto LABEL_71;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    goto LABEL_61;
  }
LABEL_66:
  Master_object = this->fields.decideButton;
  if ( !Master_object )
    goto LABEL_71;
  if ( isCan )
    v24 = 0;
  else
    v24 = 3;
  (*(void (__fastcall **)(void *, __int64, __int64, _QWORD))(*(_QWORD *)Master_object + 536LL))(
    Master_object,
    v24,
    1,
    *(_QWORD *)(*(_QWORD *)Master_object + 544LL));
}


void ShopBuyItemConfirmMenu__SetExtensionText(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isNotHavingShopItemReceived,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v6; // x19
  bool v7; // w8
  UILabel_o *extensionInfoLabel; // x21
  ShopBuyItemConfirmMenu_o *v9; // x0
  const MethodInfo *v10; // x3

  v6 = this;
  if ( (byte_4C234B9 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C2D490(&StringLiteral_9304/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/);
    byte_4C234B9 = 1;
  }
  if ( !shopEntity )
    sub_1C2D6EC(this, shopEntity);
  if ( shopEntity->fields.payType != 6 )
    goto LABEL_10;
  this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetItemCount(shopEntity, 0);
  v7 = (int)this < 2 && isNotHavingShopItemReceived;
  if ( (int)this <= 1 && isNotHavingShopItemReceived )
  {
    extensionInfoLabel = v6->fields.extensionInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9304/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/, 0);
    ShopBuyItemConfirmMenu__SetLabelText(v9, extensionInfoLabel, (System_String_o *)v9, v10);
LABEL_10:
    v7 = isNotHavingShopItemReceived;
  }
  ShopBuyItemConfirmMenu__SetLabelActive(this, v6->fields.extensionInfoLabel, v7, method);
}


void ShopBuyItemConfirmMenu__SetInfoButton(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v6; // x19
  bool v7; // w1
  int32_t purchaseType; // w8

  v6 = this;
  if ( (byte_4C234AD & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu_o *)sub_1C2D490(&StringLiteral_9269/*"NONE"*/);
    byte_4C234AD = 1;
  }
  if ( !shopEntity )
    goto LABEL_22;
  if ( ShopEntity__checkFlag(shopEntity, 0x8000, 0) || isInPreparation && !ShopEntity__IsSoldOut(shopEntity, 0) )
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
      this = (ShopBuyItemConfirmMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
        v7 = 1;
        goto LABEL_21;
      }
    }
LABEL_22:
    sub_1C2D6EC(this, shopEntity);
  }
  if ( purchaseType == 1 || purchaseType == 4 )
    goto LABEL_18;
LABEL_16:
  if ( !System_String__IsNullOrEmpty(shopEntity->fields.infoMessage, 0)
    && System_String__op_Inequality(shopEntity->fields.infoMessage, (System_String_o *)StringLiteral_9269/*"NONE"*/, 0) )
  {
    goto LABEL_18;
  }
LABEL_5:
  this = (ShopBuyItemConfirmMenu_o *)v6->fields.infoButton;
  if ( !this )
    goto LABEL_22;
  this = (ShopBuyItemConfirmMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_22;
  v7 = 0;
LABEL_21:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7, 0);
}


void ShopBuyItemConfirmMenu__SetInput(
        ShopBuyItemConfirmMenu_o *this,
        System_Action_int__o *onDecide,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.state = 2;
  this->fields.onDecide = onDecide;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onDecide, (int32_t)onDecide, (int32_t)method, v3);
}


void ShopBuyItemConfirmMenu__SetItemIcon(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        const MethodInfo *method)
{
  UnityEngine_Object_o *chocolateSprite; // x22
  void *gameObject; // x0
  __int64 v9; // x1
  int32_t purchaseType; // w21
  __int64 v11; // x2
  struct System_Int32_array *targetIds; // x8
  struct ItemIconComponent_o *itemIcon; // x9
  UISprite_o *iconSprite; // x19
  int32_t v15; // w20
  ItemIconComponent_o *v16; // x22
  Il2CppObject *MasterData_object; // x21
  UnityEngine_Object_o *v18; // x20
  UnityEngine_GameObject_o *v19; // x19
  ServantEntity_o *v20; // [xsp+0h] [xbp-40h] BYREF
  int32_t imageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C234AE & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_AssistMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C234AE = 1;
  }
  v20 = 0;
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (void *)UnityEngine_Object__op_Inequality(chocolateSprite, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    gameObject = this->fields.chocolateSprite;
    if ( !gameObject )
      goto LABEL_43;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  if ( isInPreparation )
  {
    if ( !shopEntity )
      goto LABEL_43;
    if ( ShopEntity__checkFlag(shopEntity, 2, 0) )
    {
      gameObject = this->fields.itemIcon;
      if ( gameObject )
      {
        ItemIconComponent__SetItemImage((ItemIconComponent_o *)gameObject, 8007, 0);
        return;
      }
LABEL_43:
      sub_1C2D6EC(gameObject, v9);
    }
    imageId = 0;
  }
  else
  {
    imageId = 0;
    if ( !shopEntity )
      goto LABEL_43;
  }
  if ( ShopEntity__CheckEquipItem(shopEntity, &imageId, 0) )
  {
    gameObject = this->fields.itemIcon;
    if ( !gameObject )
      goto LABEL_43;
    ItemIconComponent__SetEquipItemImage((ItemIconComponent_o *)gameObject, imageId, 0);
  }
  else
  {
    purchaseType = shopEntity->fields.purchaseType;
    if ( purchaseType == 24 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      gameObject = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_AssistMaster___);
      targetIds = shopEntity->fields.targetIds;
      if ( !targetIds )
        goto LABEL_43;
      if ( !LODWORD(targetIds->max_length) )
        sub_1C2D6F4(gameObject, v9, v11);
      if ( !gameObject )
        goto LABEL_43;
      gameObject = AssistMaster__GetNextPartsEntity(
                     (AssistMaster_o *)gameObject,
                     targetIds->m_Items[0],
                     shopEntity->fields.id,
                     0);
      itemIcon = this->fields.itemIcon;
      if ( !itemIcon || !gameObject )
        goto LABEL_43;
      iconSprite = itemIcon->fields.iconSprite;
      v15 = *((_DWORD *)gameObject + 10);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetSkillIcon(iconSprite, v15, 0);
    }
    else
    {
      v16 = this->fields.itemIcon;
      gameObject = (void *)ShopEntity__get_TargetId(shopEntity, 0);
      if ( !v16 )
        goto LABEL_43;
      ItemIconComponent__SetPurchase(v16, purchaseType, (int32_t)gameObject, shopEntity->fields.imageId, 0);
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_43;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
      gameObject = (void *)ShopEntity__get_TargetId(shopEntity, 0);
      if ( !MasterData_object )
        goto LABEL_43;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             (Il2CppObject **)&v20,
             (int32_t)gameObject,
             (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
      {
        v18 = (UnityEngine_Object_o *)this->fields.chocolateSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v18, 0, 0) )
        {
          gameObject = this->fields.chocolateSprite;
          if ( !gameObject )
            goto LABEL_43;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !v20 )
            goto LABEL_43;
          v19 = (UnityEngine_GameObject_o *)gameObject;
          gameObject = (void *)ServantEntity__get_IsChocolateSvtEquip(v20, 0);
          if ( !v19 )
            goto LABEL_43;
          UnityEngine_GameObject__SetActive(v19, (unsigned __int8)gameObject & 1, 0);
        }
      }
    }
  }
}


void ShopBuyItemConfirmMenu__SetLabelActive(
        ShopBuyItemConfirmMenu_o *this,
        UILabel_o *label,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4C234A9 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C234A9 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0)) == 0 )
      sub_1C2D6EC(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
  }
}


void ShopBuyItemConfirmMenu__SetLabelText(
        ShopBuyItemConfirmMenu_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C234AA & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C234AA = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( !v6 )
  {
    if ( !label )
      sub_1C2D6EC(v6, v7);
    WrapControlText__textAdjust(label, text, label->fields.mFontSize, 0, 0);
  }
}


void ShopBuyItemConfirmMenu__SetMessageLabel(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        System_String_o *preparationMessage,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v8; // x20
  System_String_o *v9; // x0
  const MethodInfo *v10; // x3
  UILabel_o *messageLabel; // x19
  UILabel_o *v12; // x1
  System_String_o *v13; // x2
  int32_t purchaseType; // w8
  UILabel_o *v15; // x20
  __int64 v16; // x2
  struct System_Int32_array *targetIds; // x8
  System_String_o *Detail; // x0
  System_String_o *v19; // x1
  System_String_o *v20; // x19
  System_String_o *v21; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *message; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  message = preparationMessage;
  if ( (byte_4C234B3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_AssistMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_15836/*"[000000]"*/);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C2D490(&StringLiteral_15837/*"[000000]？"*/);
    byte_4C234B3 = 1;
  }
  v21 = 0;
  if ( !shopEntity )
    goto LABEL_27;
  if ( !isInPreparation )
  {
    purchaseType = shopEntity->fields.purchaseType;
    if ( purchaseType == 14 )
    {
      if ( ShopEntity__IsSoldOut(shopEntity, 0) && ShopEntity__TryGetClosedMessage(shopEntity, &message, &v21, 0) )
      {
        messageLabel = v8->fields.messageLabel;
        v19 = message;
        goto LABEL_17;
      }
    }
    else if ( purchaseType == 24 )
    {
      v15 = v8->fields.messageLabel;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_AssistMaster___);
      targetIds = shopEntity->fields.targetIds;
      if ( targetIds )
      {
        if ( !LODWORD(targetIds->max_length) )
          sub_1C2D6F4(this, shopEntity, v16);
        if ( this )
        {
          this = (ShopBuyItemConfirmMenu_o *)AssistMaster__GetNextPartsEntity(
                                               (AssistMaster_o *)this,
                                               targetIds->m_Items[0],
                                               shopEntity->fields.id,
                                               0);
          if ( this )
          {
            Detail = AssistEntity__GetDetail((AssistEntity_o *)this, 0, 0);
LABEL_24:
            v9 = System_String__Concat_63457864((System_String_o *)StringLiteral_15836/*"[000000]"*/, Detail, 0);
            v12 = v15;
            goto LABEL_25;
          }
        }
      }
LABEL_27:
      sub_1C2D6EC(this, shopEntity);
    }
    v15 = v8->fields.messageLabel;
    v20 = shopEntity->fields.detail;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Detail = LocalizationManager__ReplaceCommonTag(v20, 0, 0);
    goto LABEL_24;
  }
  v9 = (System_String_o *)ShopEntity__checkFlag(shopEntity, 8, 0);
  messageLabel = v8->fields.messageLabel;
  if ( ((unsigned __int8)v9 & 1) == 0 )
  {
    v19 = preparationMessage;
LABEL_17:
    v9 = System_String__Concat_63457864((System_String_o *)StringLiteral_15836/*"[000000]"*/, v19, 0);
    v12 = messageLabel;
LABEL_25:
    v13 = v9;
    goto LABEL_26;
  }
  v12 = v8->fields.messageLabel;
  v13 = (System_String_o *)StringLiteral_15837/*"[000000]？"*/;
LABEL_26:
  ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)v9, v12, v13, v10);
}


void ShopBuyItemConfirmMenu__SetNameText(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        System_String_o *replacedName,
        System_String_o *preparationItemName,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v10; // x21
  ShopBuyItemConfirmMenu_o *v11; // x20
  __int64 v12; // x2
  struct System_Int32_array *targetIds; // x8
  System_String_o *m_CancellationTokenSource; // x1
  ShopBuyItemConfirmMenu_o *nameTextLabel; // x19

  v10 = this;
  if ( (byte_4C234AF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_AssistMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C2D490(&StringLiteral_25559/*"？"*/);
    byte_4C234AF = 1;
  }
  if ( !shopEntity )
    goto LABEL_25;
  if ( shopEntity->fields.purchaseType != 24 )
  {
    if ( System_String__IsNullOrEmpty(preparationItemName, 0) )
    {
      if ( isInPreparation && ShopEntity__checkFlag(shopEntity, 4, 0) )
      {
        this = (ShopBuyItemConfirmMenu_o *)v10->fields.nameTextLabel;
        if ( this )
        {
          m_CancellationTokenSource = (System_String_o *)StringLiteral_25559/*"？"*/;
          goto LABEL_24;
        }
      }
      else
      {
        this = (ShopBuyItemConfirmMenu_o *)v10->fields.nameTextLabel;
        if ( this )
        {
          m_CancellationTokenSource = replacedName;
          goto LABEL_24;
        }
      }
    }
    else
    {
      nameTextLabel = (ShopBuyItemConfirmMenu_o *)v10->fields.nameTextLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ShopBuyItemConfirmMenu_o *)LocalizationManager__ReplaceCommonTag(preparationItemName, 0, 0);
      if ( nameTextLabel )
      {
        m_CancellationTokenSource = (System_String_o *)this;
        this = nameTextLabel;
        goto LABEL_24;
      }
    }
LABEL_25:
    sub_1C2D6EC(this, shopEntity);
  }
  v11 = (ShopBuyItemConfirmMenu_o *)v10->fields.nameTextLabel;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_AssistMaster___);
  targetIds = shopEntity->fields.targetIds;
  if ( !targetIds )
    goto LABEL_25;
  if ( !LODWORD(targetIds->max_length) )
    sub_1C2D6F4(this, shopEntity, v12);
  if ( !this )
    goto LABEL_25;
  this = (ShopBuyItemConfirmMenu_o *)AssistMaster__GetNextPartsEntity(
                                       (AssistMaster_o *)this,
                                       targetIds->m_Items[0],
                                       shopEntity->fields.id,
                                       0);
  if ( !this || !v11 )
    goto LABEL_25;
  m_CancellationTokenSource = (System_String_o *)this->fields.m_CancellationTokenSource;
  this = v11;
LABEL_24:
  UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)this, m_CancellationTokenSource, 0);
}


void ShopBuyItemConfirmMenu__SetNumText(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v6; // x19
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x3
  UILabel_o *numTitleLabel; // x21
  ShopBuyItemConfirmMenu_o *v10; // x0
  const MethodInfo *v11; // x3
  ShopBuyItemConfirmMenu_o *v12; // x0
  const MethodInfo *v13; // x3
  UILabel_o *numTextLabel; // x19
  int32_t HoldCount; // w0
  ShopBuyItemConfirmMenu_o *NumberFormat; // x0
  const MethodInfo *v17; // x3
  ShopBuyItemConfirmMenu_o *v18; // x0
  const MethodInfo *v19; // x3

  v6 = this;
  if ( (byte_4C234B8 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C2D490(&StringLiteral_12070/*"SHOP_BUY_ITEM_HOLD"*/);
    byte_4C234B8 = 1;
  }
  if ( !isInPreparation )
  {
    if ( shopEntity )
      goto LABEL_8;
LABEL_13:
    sub_1C2D6EC(this, shopEntity);
  }
  if ( !shopEntity )
    goto LABEL_13;
  v7 = ShopEntity__checkFlag(shopEntity, 2, 0);
  if ( v7 )
    goto LABEL_12;
LABEL_8:
  v7 = ShopEntity__checkHoldDisp(shopEntity, 0);
  if ( !v7 )
  {
LABEL_12:
    ShopBuyItemConfirmMenu__SetLabelActive((ShopBuyItemConfirmMenu_o *)v7, v6->fields.numTitleLabel, 0, v8);
    ShopBuyItemConfirmMenu__SetLabelActive(v18, v6->fields.numTextLabel, 0, v19);
    return;
  }
  ShopBuyItemConfirmMenu__SetLabelActive((ShopBuyItemConfirmMenu_o *)v7, v6->fields.numTitleLabel, 1, v8);
  numTitleLabel = v6->fields.numTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12070/*"SHOP_BUY_ITEM_HOLD"*/, 0);
  ShopBuyItemConfirmMenu__SetLabelText(v10, numTitleLabel, (System_String_o *)v10, v11);
  ShopBuyItemConfirmMenu__SetLabelActive(v12, v6->fields.numTextLabel, 1, v13);
  numTextLabel = v6->fields.numTextLabel;
  HoldCount = ShopEntity__getHoldCount(shopEntity, 0);
  NumberFormat = (ShopBuyItemConfirmMenu_o *)LocalizationManager__GetNumberFormat(HoldCount, 0);
  ShopBuyItemConfirmMenu__SetLabelText(NumberFormat, numTextLabel, (System_String_o *)NumberFormat, v17);
}


void ShopBuyItemConfirmMenu__SetPossessionInfo(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *possessionGrid; // x21
  UnityEngine_Object_o *possessionNumLabel; // x21
  UnityEngine_Object_o *coinNumLabel; // x21
  UnityEngine_Object_o *coinIcon; // x21
  UnityEngine_Object_o *treasureDeviceLevelLabel; // x21
  UnityEngine_Object_o *summonedSprite; // x21
  UnityEngine_Object_o *possessionBGSprite; // x21
  Il2CppObject *TargetId; // x0
  __int64 v13; // x1
  unsigned int purchaseType; // w8
  int32_t v15; // w21
  Il2CppObject *Master_object; // x21
  void *monitor; // x21
  Il2CppClass *klass; // x22
  UIGrid_o *v19; // x22
  UILabel_o *v20; // x23
  UILabel_o *v21; // x24
  UILabel_o *v22; // x25
  UISprite_o *v23; // x26
  UISprite_o *v24; // x27
  UISprite_o *v25; // x20
  bool IsPossessionInfoDisp; // w19
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4C234D0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&ShopBuyItemUtility_TypeInfo);
    byte_4C234D0 = 1;
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
              TargetId = (Il2CppObject *)UnityEngine_Object__op_Equality(possessionBGSprite, 0, 0);
              if ( ((unsigned __int8)TargetId & 1) == 0 )
              {
                if ( !shopEntity )
                  goto LABEL_42;
                purchaseType = shopEntity->fields.purchaseType;
                v15 = 0;
                if ( purchaseType <= 0x15 && ((1 << purchaseType) & 0x200110) != 0 )
                {
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
                  TargetId = (Il2CppObject *)ShopEntity__get_TargetId(shopEntity, 0);
                  if ( !Master_object )
                    goto LABEL_42;
                  if ( DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                         &entity,
                         (int32_t)TargetId,
                         (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
                  {
                    TargetId = entity;
                    if ( !entity )
                      goto LABEL_42;
                    TargetId = (Il2CppObject *)ServantEntity__get_IsServant((ServantEntity_o *)entity, 0);
                    if ( ((unsigned __int8)TargetId & 1) != 0 )
                    {
                      if ( entity )
                      {
                        klass = entity[1].klass;
                        monitor = entity[1].monitor;
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        *(_QWORD *)&v28.fields.currentCryptoKey = klass;
                        *(_QWORD *)&v28.fields.fakeValue = monitor;
                        v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v28, 0);
                        goto LABEL_38;
                      }
LABEL_42:
                      sub_1C2D6EC(TargetId, v13);
                    }
                  }
                  v15 = 0;
                }
LABEL_38:
                v19 = this->fields.possessionGrid;
                v20 = this->fields.possessionNumLabel;
                v21 = this->fields.coinNumLabel;
                v22 = this->fields.treasureDeviceLevelLabel;
                v23 = this->fields.summonedSprite;
                v24 = this->fields.coinIcon;
                v25 = this->fields.possessionBGSprite;
                IsPossessionInfoDisp = ShopEntity__IsPossessionInfoDisp(shopEntity, 0);
                if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
                ShopBuyItemUtility__SetPossessionInfo(v15, v19, v20, v21, v24, v22, v23, v25, IsPossessionInfoDisp, 0);
              }
            }
          }
        }
      }
    }
  }
}


void ShopBuyItemConfirmMenu__SetPriceDataText(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        bool isNotHavingShopItemReceived,
        const MethodInfo *method)
{
  ShopEntity_o *v7; // x20
  __int64 eventItemIcon; // x0
  const MethodInfo *v10; // x1
  System_Int32_array *UserItemCounts; // x21
  const MethodInfo *v12; // x1
  UIIconLabel_o *v13; // x2
  const MethodInfo *v14; // x5
  const MethodInfo *v15; // x1
  unsigned __int64 i; // x23
  struct System_Int32_array *v17; // x8
  __int64 v18; // x24
  struct UILabel_array *priceDataLabels; // x8
  struct UIIconLabel_array *priceIconLabels; // x8
  struct UILabel_array *v21; // x8
  struct ItemIconComponent_array *eventItemIcons; // x8
  struct UILabel_array *v23; // x8
  UILabel_o *v24; // x25
  System_String_o *v25; // x26
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  struct UIIconLabel_array *v29; // x8
  UIIconLabel_o *v30; // x25
  int32_t v31; // w26
  struct UILabel_o *priceDataLabel; // x22
  __int64 *v33; // x8
  __int64 v34; // x24
  UILabel_o *v35; // x21
  UIIconLabel_o *priceIconLabel; // x19
  int32_t PriceIcon; // w21
  System_String_o *v38; // x1
  UILabel_o *v39; // x0
  struct System_Int32_array *v40; // x8
  Il2CppObject *v41; // x0
  UILabel_o *v42; // x23
  Il2CppObject *v43; // x22
  __int64 *v44; // x8
  struct System_Int32_array *v45; // x8
  Il2CppObject *v46; // x0
  UIIconLabel_o *v47; // x23
  int32_t v48; // w24
  UILabel_o *v49; // x23
  UIIconLabel_o *v50; // x23
  int32_t v51; // w24
  int32_t Price; // w21
  double v53; // d0
  int v54; // w21
  struct System_Int32_array *v55; // x8
  UIIconLabel_o *v56; // x19
  int32_t v57; // w22
  UILabel_o *priceFreeDataLabel; // x19
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  il2cpp_array_size_t max_length; // x9
  EventRewardRootComponent_c *v61; // x0
  int32_t *p_AnotherPayUsedItemId_k__BackingField; // x8
  _BOOL8 IsSetStrikethrough; // x0
  const MethodInfo *v64; // x3
  __int64 v65; // x8
  __int64 v66; // x8
  __int64 v67; // x9
  __int64 v68; // x10
  __int64 j; // x20
  struct UILabel_array *v70; // x11
  unsigned __int64 max_length_low; // x12
  unsigned __int64 v72; // x10
  struct UIIconLabel_array *v73; // x11
  unsigned __int64 v74; // x12
  struct ItemIconComponent_array *v75; // x11
  unsigned __int64 v76; // x12
  ItemIconComponent_o *v77; // x3
  __int64 v78; // x10
  struct System_Int32_array *itemIds; // x8
  int32_t v80; // w23
  Il2CppObject *Entity; // x23
  UILabel_o *v82; // x22
  System_String_o *v83; // x24
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  UILabel_o *v87; // x22
  UIIconLabel_o *v88; // x22
  int32_t v89; // w24
  int32_t v90; // [xsp+8h] [xbp-68h] BYREF
  int32_t Prices; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4

  v7 = shopEntity;
  if ( (byte_4C234BA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&EventRewardRootComponent_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&System_Math_TypeInfo);
    sub_1C2D490(&ShopBuyItemConfirmMenu_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_12358/*"STONE_FRAGMENTS_NEED_INFO"*/);
    sub_1C2D490(&StringLiteral_1948/*"ANONYMOUS_NEED_INFO"*/);
    sub_1C2D490(&StringLiteral_12364/*"STONE_NEED_INFO"*/);
    sub_1C2D490(&StringLiteral_10808/*"QP_NAME"*/);
    sub_1C2D490(&StringLiteral_10952/*"RARE_PRI_NEED_INFO"*/);
    sub_1C2D490(&StringLiteral_1755/*"?"*/);
    sub_1C2D490(&StringLiteral_5618/*"EVENT_ITEM_NEED_INFO"*/);
    sub_1C2D490(&StringLiteral_8529/*"MANA_NEED_INFO"*/);
    sub_1C2D490(&StringLiteral_12099/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/);
    byte_4C234BA = 1;
  }
  eventItemIcon = (__int64)this->fields.eventItemIcon;
  if ( !eventItemIcon )
    goto LABEL_187;
  ItemIconComponent__Clear((ItemIconComponent_o *)eventItemIcon, 0);
  UserItemCounts = ShopBuyItemConfirmMenu__GetUserItemCounts(this, v10);
  eventItemIcon = (__int64)ShopBuyItemConfirmMenu__GetUserItemCountsLong(
                             (ShopBuyItemConfirmMenu_o *)UserItemCounts,
                             v12);
  if ( !v7 )
    goto LABEL_187;
  switch ( v7->fields.payType )
  {
    case 1:
      priceDataLabel = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v33 = &StringLiteral_12364/*"STONE_NEED_INFO"*/;
      goto LABEL_58;
    case 2:
      v34 = eventItemIcon;
      v35 = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10808/*"QP_NAME"*/, 0);
      if ( !v35 )
        goto LABEL_187;
      UILabel__set_text(v35, (System_String_o *)eventItemIcon, 0);
      priceIconLabel = this->fields.priceIconLabel;
      PriceIcon = ShopEntity__GetPriceIcon(v7, 0);
      eventItemIcon = ShopEntity__GetPrice(v7, 0);
      if ( !v34 )
        goto LABEL_187;
      if ( !*(_DWORD *)(v34 + 24) )
        goto LABEL_188;
      if ( !priceIconLabel )
        goto LABEL_187;
      UIIconLabel__SetPurchaseDecisionLong(priceIconLabel, PriceIcon, eventItemIcon, *(_QWORD *)(v34 + 32), 0);
      return;
    case 4:
      priceDataLabel = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v33 = &StringLiteral_8529/*"MANA_NEED_INFO"*/;
LABEL_58:
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)*v33, 0);
      if ( !priceDataLabel )
        goto LABEL_187;
      v38 = (System_String_o *)eventItemIcon;
      v39 = priceDataLabel;
      goto LABEL_100;
    case 6:
    case 0xB:
      if ( ShopEntity__GetItemCount(v7, 0) < 2 )
      {
        if ( isNotHavingShopItemReceived )
          return;
        eventItemIcon = ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v15);
        if ( (eventItemIcon & 1) != 0 )
        {
          if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          if ( !byte_4C21AC9 )
          {
            sub_1C2D490(&EventRewardRootComponent_TypeInfo);
            byte_4C21AC9 = 1;
          }
          v61 = EventRewardRootComponent_TypeInfo;
          if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            v61 = EventRewardRootComponent_TypeInfo;
          }
          p_AnotherPayUsedItemId_k__BackingField = &v61->static_fields->_AnotherPayUsedItemId_k__BackingField;
        }
        else
        {
          itemIds = v7->fields.itemIds;
          if ( !itemIds )
            goto LABEL_187;
          if ( !LODWORD(itemIds->max_length) )
            goto LABEL_188;
          p_AnotherPayUsedItemId_k__BackingField = itemIds->m_Items;
        }
        v80 = *p_AnotherPayUsedItemId_k__BackingField;
        eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !eventItemIcon )
          goto LABEL_187;
        eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)eventItemIcon,
                                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !eventItemIcon )
          goto LABEL_187;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
                   v80,
                   (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( isInPreparation )
        {
          if ( ShopEntity__checkFlag(v7, 64, 0) )
          {
            eventItemIcon = (__int64)this->fields.priceDataLabel;
            if ( eventItemIcon )
            {
              UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1755/*"?"*/, 0);
              eventItemIcon = (__int64)this->fields.priceIconLabel;
              if ( eventItemIcon )
              {
                UIIconLabel__SetEventQuestion((UIIconLabel_o *)eventItemIcon, 0);
                return;
              }
            }
            goto LABEL_187;
          }
          if ( ShopEntity__checkFlag(v7, 32, 0) )
          {
            eventItemIcon = (__int64)this->fields.priceDataLabel;
            if ( eventItemIcon )
            {
              UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1755/*"?"*/, 0);
              eventItemIcon = (__int64)this->fields.eventItemIcon;
              if ( eventItemIcon )
              {
                ItemIconComponent__SetItemImage((ItemIconComponent_o *)eventItemIcon, 8007, 0);
                return;
              }
            }
            goto LABEL_187;
          }
        }
        v82 = this->fields.priceDataLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v83 = LocalizationManager__Get((System_String_o *)StringLiteral_5618/*"EVENT_ITEM_NEED_INFO"*/, 0);
        Prices = ShopEntity__GetPrices(v7, 0, 0);
        eventItemIcon = j_il2cpp_value_box_0(int_TypeInfo, &Prices, v84, v85, v86);
        if ( !Entity )
          goto LABEL_187;
        eventItemIcon = (__int64)System_String__Format_63499156(
                                   v83,
                                   (Il2CppObject *)eventItemIcon,
                                   (Il2CppObject *)Entity[1].monitor,
                                   0);
        if ( !v82 )
          goto LABEL_187;
        UILabel__set_text(v82, (System_String_o *)eventItemIcon, 0);
        v87 = this->fields.priceDataLabel;
        eventItemIcon = (__int64)ShopBuyItemConfirmMenu_TypeInfo;
        if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
        if ( !v87 )
          goto LABEL_187;
        UILabel__SetCondensedScale(
          v87,
          ShopBuyItemConfirmMenu_TypeInfo->static_fields->PRICE_DATA_LABEL_MAX_WIDTH,
          0,
          0);
        v88 = this->fields.priceIconLabel;
        v89 = ShopEntity__GetPriceIcon(v7, 0);
        eventItemIcon = ShopEntity__GetPrices(v7, 0, 0);
        if ( !UserItemCounts )
          goto LABEL_187;
        if ( LODWORD(UserItemCounts->max_length) )
        {
          if ( v88 )
          {
            UIIconLabel__SetPurchaseDecision(v88, v89, eventItemIcon, UserItemCounts->m_Items[0], 0);
            eventItemIcon = (__int64)this->fields.eventItemIcon;
            if ( eventItemIcon )
            {
              ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, (int32_t)Entity[2].monitor, -1, 1, 0);
              return;
            }
          }
LABEL_187:
          sub_1C2D6EC(eventItemIcon, shopEntity);
        }
LABEL_188:
        sub_1C2D6F4(eventItemIcon, shopEntity, v13);
      }
      if ( ShopEntity__GetItemCount(v7, 0) >= 1 )
      {
        for ( i = 0; (__int64)i < ShopEntity__GetItemCount(v7, 0); ++i )
        {
          eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !eventItemIcon )
            goto LABEL_187;
          eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)eventItemIcon,
                                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
          v17 = v7->fields.itemIds;
          if ( !v17 )
            goto LABEL_187;
          if ( i >= LODWORD(v17->max_length) )
            goto LABEL_188;
          if ( !eventItemIcon )
            goto LABEL_187;
          eventItemIcon = (__int64)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
                                     v17->m_Items[i],
                                     (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          v18 = eventItemIcon;
          if ( !isInPreparation )
            goto LABEL_30;
          eventItemIcon = ShopEntity__checkFlag(v7, 64, 0);
          if ( (eventItemIcon & 1) != 0 )
          {
            priceDataLabels = this->fields.priceDataLabels;
            if ( !priceDataLabels )
              goto LABEL_187;
            if ( i >= LODWORD(priceDataLabels->max_length) )
              goto LABEL_188;
            eventItemIcon = (__int64)priceDataLabels->m_Items[i];
            if ( !eventItemIcon )
              goto LABEL_187;
            UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1755/*"?"*/, 0);
            priceIconLabels = this->fields.priceIconLabels;
            if ( !priceIconLabels )
              goto LABEL_187;
            if ( i >= LODWORD(priceIconLabels->max_length) )
              goto LABEL_188;
            eventItemIcon = (__int64)priceIconLabels->m_Items[i];
            if ( !eventItemIcon )
              goto LABEL_187;
            UIIconLabel__SetEventQuestion((UIIconLabel_o *)eventItemIcon, 0);
            continue;
          }
          eventItemIcon = ShopEntity__checkFlag(v7, 32, 0);
          if ( (eventItemIcon & 1) != 0 )
          {
            v21 = this->fields.priceDataLabels;
            if ( !v21 )
              goto LABEL_187;
            if ( i >= LODWORD(v21->max_length) )
              goto LABEL_188;
            eventItemIcon = (__int64)v21->m_Items[i];
            if ( !eventItemIcon )
              goto LABEL_187;
            UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1755/*"?"*/, 0);
            eventItemIcons = this->fields.eventItemIcons;
            if ( !eventItemIcons )
              goto LABEL_187;
            if ( i >= LODWORD(eventItemIcons->max_length) )
              goto LABEL_188;
            eventItemIcon = (__int64)eventItemIcons->m_Items[i];
            if ( !eventItemIcon )
              goto LABEL_187;
            ItemIconComponent__SetItemImage((ItemIconComponent_o *)eventItemIcon, 8007, 0);
          }
          else
          {
LABEL_30:
            v23 = this->fields.priceDataLabels;
            if ( !v23 )
              goto LABEL_187;
            if ( i >= LODWORD(v23->max_length) )
              goto LABEL_188;
            v24 = v23->m_Items[i];
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5618/*"EVENT_ITEM_NEED_INFO"*/, 0);
            v90 = ShopEntity__GetPrices(v7, i, 0);
            eventItemIcon = j_il2cpp_value_box_0(int_TypeInfo, &v90, v26, v27, v28);
            if ( !v18 )
              goto LABEL_187;
            eventItemIcon = (__int64)System_String__Format_63499156(
                                       v25,
                                       (Il2CppObject *)eventItemIcon,
                                       *(Il2CppObject **)(v18 + 24),
                                       0);
            if ( !v24 )
              goto LABEL_187;
            UILabel__set_text(v24, (System_String_o *)eventItemIcon, 0);
            v29 = this->fields.priceIconLabels;
            if ( !v29 )
              goto LABEL_187;
            if ( i >= LODWORD(v29->max_length) )
              goto LABEL_188;
            v30 = v29->m_Items[i];
            v31 = ShopEntity__GetPriceIcon(v7, 0);
            eventItemIcon = ShopEntity__GetPrices(v7, i, 0);
            if ( !UserItemCounts )
              goto LABEL_187;
            if ( i >= LODWORD(UserItemCounts->max_length) )
              goto LABEL_188;
            if ( !v30 )
              goto LABEL_187;
            UIIconLabel__SetPurchaseDecision(v30, v31, eventItemIcon, UserItemCounts->m_Items[i], 0);
            eventItemIcon = (__int64)this->fields.eventItemIcon;
            if ( !eventItemIcon )
              goto LABEL_187;
            ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, *(_DWORD *)(v18 + 40), -1, 1, 0);
          }
        }
      }
      return;
    case 8:
      eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_187;
      eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
      v40 = v7->fields.itemIds;
      if ( !v40 )
        goto LABEL_187;
      if ( !LODWORD(v40->max_length) )
        goto LABEL_188;
      if ( !eventItemIcon )
        goto LABEL_187;
      v41 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
              v40->m_Items[0],
              (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v42 = this->fields.priceDataLabel;
      v43 = v41;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v44 = &StringLiteral_12358/*"STONE_FRAGMENTS_NEED_INFO"*/;
      goto LABEL_74;
    case 9:
      eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_187;
      eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
      v45 = v7->fields.itemIds;
      if ( !v45 )
        goto LABEL_187;
      if ( !LODWORD(v45->max_length) )
        goto LABEL_188;
      if ( !eventItemIcon )
        goto LABEL_187;
      v46 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
              v45->m_Items[0],
              (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v42 = this->fields.priceDataLabel;
      v43 = v46;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v44 = &StringLiteral_1948/*"ANONYMOUS_NEED_INFO"*/;
LABEL_74:
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)*v44, 0);
      if ( !v42 )
        goto LABEL_187;
      UILabel__set_text(v42, (System_String_o *)eventItemIcon, 0);
      v47 = this->fields.priceIconLabel;
      v48 = ShopEntity__GetPriceIcon(v7, 0);
      eventItemIcon = ShopEntity__GetPrice(v7, 0);
      if ( !UserItemCounts )
        goto LABEL_187;
      if ( !LODWORD(UserItemCounts->max_length) )
        goto LABEL_188;
      if ( !v47 )
        goto LABEL_187;
      UIIconLabel__SetPurchaseDecision(v47, v48, eventItemIcon, UserItemCounts->m_Items[0], 0);
      if ( !v43 )
        goto LABEL_187;
      eventItemIcon = (__int64)this->fields.eventItemIcon;
      if ( !eventItemIcon )
        goto LABEL_187;
      ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, (int32_t)v43[2].monitor, -1, 1, 0);
      return;
    case 0xA:
      v49 = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10952/*"RARE_PRI_NEED_INFO"*/, 0);
      if ( !v49 )
        goto LABEL_187;
      UILabel__set_text(v49, (System_String_o *)eventItemIcon, 0);
      v50 = this->fields.priceIconLabel;
      v51 = ShopEntity__GetPriceIcon(v7, 0);
      eventItemIcon = ShopEntity__GetPrice(v7, 0);
      if ( !UserItemCounts )
        goto LABEL_187;
      if ( !LODWORD(UserItemCounts->max_length) )
        goto LABEL_188;
      if ( !v50 )
        goto LABEL_187;
      UIIconLabel__SetPurchaseDecision(v50, v51, eventItemIcon, UserItemCounts->m_Items[0], 0);
      if ( ShopEntity__GetPrice(v7, 0) )
      {
        Price = ShopEntity__GetPrice(v7, 0);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v53 = log10((double)Price);
        if ( v53 == INFINITY )
          v54 = -2147483647;
        else
          v54 = (int)v53 + 1;
      }
      else
      {
        v54 = 1;
      }
      IsSetStrikethrough = ShopEntity__IsSetStrikethrough(v7, isInPreparation, 0);
      if ( IsSetStrikethrough )
      {
        v65 = 400;
        if ( v54 == 1 )
          v65 = 392;
        ShopBuyItemConfirmMenu__SetLabelActive(
          (ShopBuyItemConfirmMenu_o *)IsSetStrikethrough,
          *(UILabel_o **)((char *)&this->klass + v65),
          1,
          v64);
      }
      if ( !ShopEntity__IsAfterTheFreeShopReleaseDate(v7, 0) || !ShopEntity__IsFulFilledFreeExchangeCondition(v7, 0) )
        return;
      eventItemIcon = (__int64)this->fields.freeLabel;
      if ( !eventItemIcon )
        goto LABEL_187;
      eventItemIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventItemIcon, 0);
      if ( !eventItemIcon )
        goto LABEL_187;
      eventItemIcon = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)eventItemIcon, 0);
      if ( !eventItemIcon )
        goto LABEL_187;
      v66 = 508;
      if ( v54 == 1 )
      {
        v66 = 496;
        v67 = 492;
      }
      else
      {
        v67 = 504;
      }
      v68 = v54 == 1 ? 488LL : 500LL;
      v92.fields.z = *(float *)((char *)&this->klass + v66);
      v92.fields.y = *(float *)((char *)&this->klass + v67);
      v92.fields.x = *(float *)((char *)&this->klass + v68);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventItemIcon, v92, 0);
      eventItemIcon = (__int64)this->fields.freeLabel;
      if ( !eventItemIcon )
        goto LABEL_187;
      eventItemIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventItemIcon, 0);
      if ( !eventItemIcon )
        goto LABEL_187;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventItemIcon, 1, 0);
      return;
    case 0xC:
      eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_187;
      eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
      v55 = v7->fields.itemIds;
      if ( !v55 )
        goto LABEL_187;
      if ( !LODWORD(v55->max_length) )
        goto LABEL_188;
      if ( !eventItemIcon )
        goto LABEL_187;
      eventItemIcon = (__int64)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
                                 v55->m_Items[0],
                                 (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !eventItemIcon || !this->fields.priceDataLabel )
        goto LABEL_187;
      v38 = *(System_String_o **)(eventItemIcon + 24);
      v39 = this->fields.priceDataLabel;
LABEL_100:
      UILabel__set_text(v39, v38, 0);
      v56 = this->fields.priceIconLabel;
      v57 = ShopEntity__GetPriceIcon(v7, 0);
      eventItemIcon = ShopEntity__GetPrice(v7, 0);
      if ( !UserItemCounts )
        goto LABEL_187;
      if ( !LODWORD(UserItemCounts->max_length) )
        goto LABEL_188;
      if ( !v56 )
        goto LABEL_187;
      UIIconLabel__SetPurchaseDecision(v56, v57, eventItemIcon, UserItemCounts->m_Items[0], 0);
      return;
    case 0xD:
      priceFreeDataLabel = this->fields.priceFreeDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12099/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, 0);
      if ( !priceFreeDataLabel )
        goto LABEL_187;
      UILabel__set_text(priceFreeDataLabel, (System_String_o *)eventItemIcon, 0);
      return;
    case 0xE:
      commonConsumeEntities = this->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        return;
      max_length = commonConsumeEntities->max_length;
      if ( (_DWORD)max_length == 1 )
      {
        ShopBuyItemConfirmMenu__SetCommonConsumePriceText(
          this,
          this->fields.priceDataLabel,
          this->fields.priceIconLabel,
          this->fields.eventItemIcon,
          commonConsumeEntities->m_Items[0],
          v14);
        return;
      }
      if ( (int)max_length < 2 )
        return;
      for ( j = 4; ; ++j )
      {
        v70 = this->fields.priceDataLabels;
        if ( !v70 )
          break;
        max_length_low = LODWORD(v70->max_length);
        v72 = j - 4;
        if ( j - 4 >= (int)max_length_low )
        {
          shopEntity = 0;
        }
        else
        {
          if ( v72 >= max_length_low )
            goto LABEL_188;
          shopEntity = (ShopEntity_o *)*((_QWORD *)&v70->obj.klass + j);
        }
        v73 = this->fields.priceIconLabels;
        if ( !v73 )
          break;
        v74 = LODWORD(v73->max_length);
        if ( (__int64)v72 >= (int)v74 )
        {
          v13 = 0;
        }
        else
        {
          if ( v72 >= v74 )
            goto LABEL_188;
          v13 = (UIIconLabel_o *)*((_QWORD *)&v73->obj.klass + j);
        }
        v75 = this->fields.eventItemIcons;
        if ( !v75 )
          break;
        v76 = LODWORD(v75->max_length);
        if ( (__int64)v72 >= (int)v76 )
        {
          v77 = 0;
        }
        else
        {
          if ( v72 >= v76 )
            goto LABEL_188;
          v77 = (ItemIconComponent_o *)*((_QWORD *)&v75->obj.klass + j);
        }
        if ( v72 >= (unsigned int)max_length )
          goto LABEL_188;
        ShopBuyItemConfirmMenu__SetCommonConsumePriceText(
          this,
          (UILabel_o *)shopEntity,
          v13,
          v77,
          *((CommonConsumeEntity_o **)&commonConsumeEntities->obj.klass + j),
          v14);
        commonConsumeEntities = this->fields.commonConsumeEntities;
        if ( !commonConsumeEntities )
          goto LABEL_187;
        LODWORD(max_length) = commonConsumeEntities->max_length;
        v78 = j - 3;
        if ( v78 >= (int)max_length )
          return;
      }
      goto LABEL_187;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemConfirmMenu__SetPriceInfo(
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
    sub_1C2D6EC(v12, v13);
  ShopBuyItemConfirmMenu__SetDecideButtonSprite(this, shopEntity, v14, buttonSpriteId, v15);
}


void ShopBuyItemConfirmMenu__SetPriceInfoActive(
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (ShopBuyItemConfirmMenu_o *)v4->fields.priceInfo1;
      if ( !this )
        goto LABEL_26;
      v5 = 1;
      goto LABEL_6;
    case 6:
    case 0xB:
      this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetItemCount(shopEntity, 0);
      if ( !v4->fields.priceInfoFree )
        goto LABEL_26;
      v8 = (int)this;
      UnityEngine_GameObject__SetActive(v4->fields.priceInfoFree, 0, 0);
      this = (ShopBuyItemConfirmMenu_o *)v4->fields.priceInfo1;
      if ( !this )
        goto LABEL_26;
      if ( v8 > 1 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        this = (ShopBuyItemConfirmMenu_o *)v4->fields.priceInfo2;
        if ( this )
        {
          v6 = 1;
          goto LABEL_8;
        }
LABEL_26:
        sub_1C2D6EC(this, shopEntity);
      }
      v5 = !isNotHavingShopItemReceived;
LABEL_6:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v5, 0);
      this = (ShopBuyItemConfirmMenu_o *)v4->fields.priceInfo2;
      if ( !this )
        goto LABEL_26;
      v6 = 0;
LABEL_8:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v6, 0);
      return;
    case 0xD:
      this = (ShopBuyItemConfirmMenu_o *)this->fields.priceInfoFree;
      if ( !this )
        goto LABEL_26;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      commonConsumeEntities = v4->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        goto LABEL_26;
      this = (ShopBuyItemConfirmMenu_o *)v4->fields.priceInfo1;
      if ( !this )
        goto LABEL_26;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)this,
        LODWORD(commonConsumeEntities->max_length) == 1,
        0);
      v10 = v4->fields.commonConsumeEntities;
      if ( !v10 )
        goto LABEL_26;
      this = (ShopBuyItemConfirmMenu_o *)v4->fields.priceInfo2;
      if ( !this )
        goto LABEL_26;
      v6 = SLODWORD(v10->max_length) > 1;
      goto LABEL_8;
    default:
      return;
  }
}


void ShopBuyItemConfirmMenu__SetSpriteActive(
        ShopBuyItemConfirmMenu_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4C234AB & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C234AB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0)) == 0 )
      sub_1C2D6EC(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
  }
}


void ShopBuyItemConfirmMenu__SetSpriteName(
        ShopBuyItemConfirmMenu_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C234AC & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C234AC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( !v6 )
  {
    if ( !sprite )
      sub_1C2D6EC(v6, v7);
    UISprite__set_spriteName(sprite, spriteName, 0);
  }
}


void ShopBuyItemConfirmMenu__SetTextOnMask(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        const MethodInfo *method)
{
  ShopReleaseMaster_o *Master_object; // x0
  __int64 v8; // x1
  ShopReleaseMaster_o *v9; // x22
  _BOOL4 isExistCondType; // w23
  _BOOL4 v11; // w24
  _BOOL4 v12; // w25
  _BOOL4 v13; // w28
  System_String_o *IsServant; // x0
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x3
  char v17; // w26
  struct UILabel_o *v18; // x19
  __int64 *v19; // x8
  UILabel_o *textOnMask; // x1
  System_String_o *v21; // x2
  __int64 v22; // x2
  struct System_Int32_array *targetIds; // x8
  __int64 *v24; // x8
  UILabel_o *v25; // x19
  unsigned int shopType; // w8
  System_Int32_array *v27; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4C234B7 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ShopReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_12092/*"SHOP_CANT_BUY"*/);
    sub_1C2D490(&StringLiteral_12133/*"SHOP_QUEST_OPEN"*/);
    sub_1C2D490(&StringLiteral_12131/*"SHOP_QUEST_ALREADY_CLEARED"*/);
    sub_1C2D490(&StringLiteral_12129/*"SHOP_NOT_RELEASE_SET_ITEM"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_12038/*"SHOP_ALREADY_GET"*/);
    byte_4C234B7 = 1;
  }
  questId = 0;
  v27 = 0;
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ShopReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  if ( !shopEntity )
    goto LABEL_67;
  v9 = Master_object;
  if ( !Master_object )
    goto LABEL_67;
  isExistCondType = ShopReleaseMaster__isExistCondType(Master_object, shopEntity->fields.id, 38, 0);
  v11 = ShopReleaseMaster__isExistCondType(v9, shopEntity->fields.id, 41, 0);
  v12 = ShopReleaseMaster__isExistCondType(v9, shopEntity->fields.id, 40, 0);
  v13 = ShopReleaseMaster__isExistCondType(v9, shopEntity->fields.id, 78, 0)
     || ShopReleaseMaster__isExistCondType(v9, shopEntity->fields.id, 79, 0);
  IsServant = (System_String_o *)ShopReleaseMaster__isExistCondType(v9, shopEntity->fields.id, 108, 0);
  v17 = (char)IsServant;
  switch ( shopEntity->fields.purchaseType )
  {
    case 2:
    case 7:
    case 9:
      if ( isInPreparation )
        goto LABEL_12;
      goto LABEL_58;
    case 4:
      Master_object = (ShopReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (ShopReleaseMaster_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Master_object,
                                               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
      targetIds = shopEntity->fields.targetIds;
      if ( !targetIds )
        goto LABEL_67;
      if ( !LODWORD(targetIds->max_length) )
        sub_1C2D6F4(Master_object, v8, v22);
      if ( !Master_object )
        goto LABEL_67;
      IsServant = (System_String_o *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                       &entity,
                                       targetIds->m_Items[0],
                                       (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_58;
      if ( isInPreparation )
      {
        Master_object = (ShopReleaseMaster_o *)entity;
        if ( entity )
        {
          IsServant = (System_String_o *)ServantEntity__get_IsServant((ServantEntity_o *)entity, 0);
          if ( ((unsigned __int8)IsServant & 1) != 0 && this->fields.shopKind != 6 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v24 = &StringLiteral_12092/*"SHOP_CANT_BUY"*/;
            goto LABEL_64;
          }
          if ( (isExistCondType || v11 || v12 || v13) | v17 & 1 )
          {
            IsServant = (System_String_o *)ShopReleaseMaster__CondClearCheck(v9, shopEntity->fields.id, 40, 0);
            if ( ((unsigned __int8)IsServant & 1) == 0 )
            {
              v21 = (System_String_o *)StringLiteral_1/*""*/;
              goto LABEL_66;
            }
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v24 = &StringLiteral_12038/*"SHOP_ALREADY_GET"*/;
LABEL_64:
            IsServant = LocalizationManager__Get((System_String_o *)*v24, 0);
            v21 = IsServant;
LABEL_66:
            textOnMask = this->fields.textOnMask;
            goto LABEL_59;
          }
          goto LABEL_58;
        }
LABEL_67:
        sub_1C2D6EC(Master_object, v8);
      }
      shopType = shopEntity->fields.shopType;
      if ( shopType > 0x10 || ((1 << shopType) & 0x1000C) == 0 )
        goto LABEL_58;
      Master_object = (ShopReleaseMaster_o *)entity;
      if ( !entity )
        goto LABEL_67;
      IsServant = (System_String_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_58;
      IsServant = (System_String_o *)ShopBuyItemConfirmMenu__GetIsShowMask(
                                       (ShopBuyItemConfirmMenu_o *)IsServant,
                                       this->fields.shopEntity,
                                       0,
                                       v16);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_58;
      IsServant = (System_String_o *)ShopEntity__IsAnotherItemBuyable(shopEntity, &v27, 0);
      if ( ((unsigned __int8)IsServant & 1) != 0 )
        goto LABEL_58;
LABEL_12:
      v18 = this->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_12038/*"SHOP_ALREADY_GET"*/;
      goto LABEL_15;
    case 5:
      IsServant = (System_String_o *)ShopBuyItemConfirmMenu__GetIsSetItemEventShop(
                                       (ShopBuyItemConfirmMenu_o *)IsServant,
                                       shopEntity->fields.targetIds,
                                       v15);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_38;
      if ( !isInPreparation )
        goto LABEL_58;
      v18 = this->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_12129/*"SHOP_NOT_RELEASE_SET_ITEM"*/;
      goto LABEL_15;
    case 6:
      if ( !isInPreparation )
      {
        if ( ShopEntity__isQuestNotClear(shopEntity, &questId, 0, 0) )
        {
          IsServant = (System_String_o *)ShopEntity__isQuestNotClearItemClosedSub(shopEntity, questId, 0, 0);
          if ( ((unsigned __int8)IsServant & 1) != 0 )
            goto LABEL_44;
        }
        else
        {
          IsServant = (System_String_o *)ShopEntity__isExpireItemClosed(shopEntity, 0);
          if ( ((unsigned __int8)IsServant & 1) != 0 )
          {
            v25 = this->fields.textOnMask;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Master_object = (ShopReleaseMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12133/*"SHOP_QUEST_OPEN"*/, 0);
            if ( v25 )
            {
              UILabel__set_text(v25, (System_String_o *)Master_object, 0);
              return;
            }
            goto LABEL_67;
          }
        }
LABEL_58:
        textOnMask = this->fields.textOnMask;
        v21 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_59;
      }
      IsServant = (System_String_o *)ShopEntity__isQuestNotClearItemClosed(shopEntity, 0, 0);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_58;
LABEL_44:
      v18 = this->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_12131/*"SHOP_QUEST_ALREADY_CLEARED"*/;
LABEL_15:
      IsServant = LocalizationManager__Get((System_String_o *)*v19, 0);
      textOnMask = v18;
      v21 = IsServant;
LABEL_59:
      ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)IsServant, textOnMask, v21, v16);
      return;
    default:
LABEL_38:
      if ( !isInPreparation )
        goto LABEL_58;
      if ( !((isExistCondType || v11 || v13) | v17 & 1) )
        goto LABEL_58;
      IsServant = (System_String_o *)ShopReleaseMaster__CondClearCheck(v9, shopEntity->fields.id, 1, 0);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_58;
      goto LABEL_12;
  }
}


void ShopBuyItemConfirmMenu__SetWarningLabel(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  UILabel_o *warningLabel; // x23
  struct UILabel_o **p_warningLabel; // x24
  void *gameObject; // x0
  ShopBuyItemConfirmMenu_o *v12; // x0
  const MethodInfo *v13; // x3
  ShopBuyItemConfirmMenu_o *v14; // x0
  const MethodInfo *v15; // x3
  ShopBuyItemConfirmMenu_o *v16; // x0
  const MethodInfo *v17; // x3
  int32_t purchaseType; // w8
  UnityEngine_Object_o *resetWarningLabel; // x23
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x3
  UILabel_o *v22; // x20
  UILabel_o *v23; // x20
  UnityEngine_Component_o *v24; // x0
  float Shop18WarningLabelPosY; // s0
  UILabel_o *v26; // x19
  __int64 *v27; // x8
  const MethodInfo *v28; // x1
  System_Int32_array *UserItemCounts; // x22
  const MethodInfo *v30; // x1
  System_Int64_array *UserItemCountsLong; // x0
  __int64 v32; // x19
  __int64 v33; // x2
  UnityEngine_Object_o *v34; // x21
  UnityEngine_Object_o *shopResetButton; // x21
  ItemEntity_o *EntityByType; // x0
  struct System_String_StaticFields *p_name; // x8
  ShopBuyItemConfirmMenu_o *v38; // x0
  const MethodInfo *v39; // x3
  UILabel_o *v40; // x1
  EventRewardRootComponent_c *v41; // x0
  int32_t *p_AnotherPayUsedItemId_k__BackingField; // x8
  System_Int64_array *v43; // x23
  UILabel_o *v44; // x19
  System_String_o *v45; // x22
  Il2CppObject *v46; // x0
  ShopBuyItemConfirmMenu_o *v47; // x0
  const MethodInfo *v48; // x3
  __int64 *v49; // x8
  UILabel_o *v50; // x20
  __int64 *v51; // x8
  System_String_o *v52; // x21
  struct ShopEntity_o *v53; // x8
  struct System_Int32_array *v54; // x8
  Il2CppObject *Name; // x1
  BalanceConfig_c *v56; // x8
  int v57; // w22
  UILabel_o *v58; // x22
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  il2cpp_array_size_t max_length; // x9
  CommonConsumeEntity_o *v61; // x19
  int32_t num; // w22
  struct ShopEntity_o *v63; // x8
  struct System_Int32_array *itemIds; // x8
  int32_t v65; // w19
  Il2CppObject *monitor; // x1
  struct System_String_o *v67; // x22
  int v68; // w26
  Il2CppClass **v69; // x8
  CommonConsumeEntity_o *v70; // x23
  int v71; // w28
  Il2CppObject *v72; // x0
  System_String_o *v73; // x0
  int stringLength; // w8
  System_String_o *v75; // x0
  Il2CppObject *v76; // x20
  int v77; // w19
  BalanceConfig_c *v78; // x8
  int32_t v79; // w20
  int32_t PresentBoxMax; // w9
  UILabel_o *v81; // x19
  __int64 *v82; // x8
  Il2CppObject *MasterData_object; // x19
  int32_t Sum; // w0
  BalanceConfig_c *v85; // x8
  int32_t v86; // w19
  int32_t UserItemMax; // w9
  int32_t v88; // w20
  Il2CppObject *Empty; // x21
  int32_t v90; // w22
  int32_t resetLimitNum; // w27
  System_String_o *v92; // x23
  __int64 v93; // x2
  __int64 v94; // x3
  __int64 v95; // x4
  Il2CppObject *v96; // x24
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  Il2CppObject *v100; // x0
  System_String_o *v101; // x0
  System_String_o *v102; // x23
  __int64 v103; // x2
  __int64 v104; // x3
  __int64 v105; // x4
  Il2CppObject *v106; // x0
  System_String_o *v107; // x23
  Il2CppObject *Master_object; // x24
  Il2CppObject *v109; // x20
  const MethodInfo *v110; // x3
  System_String_o *v111; // x0
  System_String_o *v112; // x0
  UILabel_o *v113; // x20
  int32_t v114; // [xsp+0h] [xbp-A0h] BYREF
  int32_t limitNum; // [xsp+4h] [xbp-9Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-98h] BYREF
  int32_t recordNum[2]; // [xsp+10h] [xbp-90h] BYREF
  int32_t buyCmdCodeNum[2]; // [xsp+18h] [xbp-88h] BYREF
  int32_t buyServantNum[2]; // [xsp+20h] [xbp-80h] BYREF
  ShopResetEntity_o *v120; // [xsp+28h] [xbp-78h] BYREF
  System_Int32_array *possessionAnotherItemId; // [xsp+30h] [xbp-70h] BYREF
  int32_t questId; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4C234B4 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ShopResetMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserShopMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C2D490(&EventRewardRootComponent_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ShopBuyItemConfirmMenu_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&StringLiteral_12075/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/);
    sub_1C2D490(&StringLiteral_12067/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/);
    sub_1C2D490(&StringLiteral_12056/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_SHORTAGE"*/);
    sub_1C2D490(&StringLiteral_12076/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/);
    sub_1C2D490(&StringLiteral_12057/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_12079/*"SHOP_BUY_RARE_PRI_CONFIRM_WARNING"*/);
    sub_1C2D490(&StringLiteral_12072/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/);
    sub_1C2D490(&StringLiteral_10808/*"QP_NAME"*/);
    sub_1C2D490(&StringLiteral_12063/*"SHOP_BUY_CONFIRM_SOLD_OUT_WARNING"*/);
    sub_1C2D490(&StringLiteral_12052/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/);
    sub_1C2D490(&StringLiteral_10493/*"PURCHASE_SHOP18_WARNING_MSG"*/);
    sub_1C2D490(&StringLiteral_12059/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/);
    sub_1C2D490(&StringLiteral_12054/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/);
    sub_1C2D490(&StringLiteral_12060/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/);
    sub_1C2D490(&StringLiteral_12061/*"SHOP_BUY_CONFIRM_QUEST_CLAER"*/);
    sub_1C2D490(&StringLiteral_25193/*"{0}、"*/);
    sub_1C2D490(&StringLiteral_12066/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/);
    sub_1C2D490(&StringLiteral_12086/*"SHOP_BUY_STONE_FRAGMENTS_CONFIRM_WARNING"*/);
    sub_1C2D490(&StringLiteral_12069/*"SHOP_BUY_ITEM_FULL_WARNING"*/);
    sub_1C2D490(&StringLiteral_12071/*"SHOP_BUY_ITEM_OVER_WARNING"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_12055/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_LIMIT"*/);
    sub_1C2D490(&StringLiteral_12062/*"SHOP_BUY_CONFIRM_QUEST_HOLD"*/);
    sub_1C2D490(&StringLiteral_12058/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_NO_LIMIT_MESSAGE"*/);
    byte_4C234B4 = 1;
  }
  questId = 0;
  v120 = 0;
  possessionAnotherItemId = 0;
  *(_QWORD *)buyCmdCodeNum = 0;
  *(_QWORD *)buyServantNum = 0;
  entity = 0;
  *(_QWORD *)recordNum = 0;
  p_warningLabel = &this->fields.warningLabel;
  warningLabel = this->fields.warningLabel;
  gameObject = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !warningLabel )
    goto LABEL_263;
  UILabel__set_fontSize(warningLabel, BalanceConfig_TypeInfo->static_fields->DefaultFontSize, 0);
  ShopBuyItemConfirmMenu__SetLabelText(v12, this->fields.warningLabel, (System_String_o *)StringLiteral_1/*""*/, v13);
  ShopBuyItemConfirmMenu__SetLabelText(v14, this->fields.resetWarningLabel, (System_String_o *)StringLiteral_1/*""*/, v15);
  ShopBuyItemConfirmMenu__SetLabelActive(v16, this->fields.resetWarningLabel, 0, v17);
  if ( !shopEntity )
    goto LABEL_263;
  purchaseType = shopEntity->fields.purchaseType;
  if ( purchaseType == 23 )
  {
    resetWarningLabel = (UnityEngine_Object_o *)this->fields.resetWarningLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v20 = UnityEngine_Object__op_Inequality(resetWarningLabel, 0, 0);
    if ( v20 )
    {
      ShopBuyItemConfirmMenu__SetLabelActive((ShopBuyItemConfirmMenu_o *)v20, this->fields.resetWarningLabel, 1, v21);
      v22 = this->fields.resetWarningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10493/*"PURCHASE_SHOP18_WARNING_MSG"*/, 0);
      if ( !v22 )
        goto LABEL_263;
      UILabel__set_text(v22, (System_String_o *)gameObject, 0);
      v23 = this->fields.resetWarningLabel;
      gameObject = ShopBuyItemConfirmMenu_TypeInfo;
      if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
      if ( !v23 )
        goto LABEL_263;
      UILabel__set_fontSize(v23, ShopBuyItemConfirmMenu_TypeInfo->static_fields->Shop18WarningLabelSize, 0);
      v24 = (UnityEngine_Component_o *)this->fields.resetWarningLabel;
      Shop18WarningLabelPosY = ShopBuyItemConfirmMenu_TypeInfo->static_fields->Shop18WarningLabelPosY;
LABEL_23:
      ComponentHelper__SetLocalPositionY(v24, Shop18WarningLabelPosY, 0);
      return;
    }
  }
  else if ( purchaseType == 6 && shopEntity->fields.shopType == 3 )
  {
    if ( isInPreparation )
    {
      if ( !ShopEntity__isQuestNotClearItemClosed(shopEntity, 0, 0) )
        goto LABEL_33;
LABEL_26:
      v26 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = &StringLiteral_12061/*"SHOP_BUY_CONFIRM_QUEST_CLAER"*/;
      goto LABEL_70;
    }
    if ( ShopEntity__isQuestNotClear(shopEntity, &questId, 0, 0)
      && ShopEntity__isQuestNotClearItemClosedSub(shopEntity, questId, 0, 0) )
    {
      goto LABEL_26;
    }
    if ( ShopEntity__IsQuestHold(shopEntity, 0) )
    {
      v26 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = &StringLiteral_12062/*"SHOP_BUY_CONFIRM_QUEST_HOLD"*/;
      goto LABEL_70;
    }
  }
LABEL_33:
  if ( ShopEntity__IsSoldOut(shopEntity, 0)
    && !ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0)
    && !ShopEntity__IsAnotherItemBuyable(shopEntity, &possessionAnotherItemId, 0) )
  {
    v34 = (UnityEngine_Object_o *)this->fields.resetWarningLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v34, 0, 0) )
      goto LABEL_67;
    shopResetButton = (UnityEngine_Object_o *)this->fields.shopResetButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(shopResetButton, 0, 0) )
      goto LABEL_67;
    gameObject = this->fields.shopResetButton;
    if ( !gameObject )
      goto LABEL_263;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_263;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0) )
    {
LABEL_67:
      v26 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = &StringLiteral_12063/*"SHOP_BUY_CONFIRM_SOLD_OUT_WARNING"*/;
      goto LABEL_70;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    gameObject = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !gameObject )
      goto LABEL_263;
    EntityByType = ItemMaster__GetEntityByType((ItemMaster_o *)gameObject, 37, 0);
    if ( EntityByType )
      p_name = (struct System_String_StaticFields *)&EntityByType->fields.name;
    else
      p_name = string_TypeInfo->static_fields;
    Empty = (Il2CppObject *)p_name->Empty;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    gameObject = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !gameObject )
      goto LABEL_263;
    v90 = *((_DWORD *)gameObject + 25);
    gameObject = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ShopResetMaster___);
    if ( !gameObject )
      goto LABEL_263;
    gameObject = (void *)ShopResetMaster__TryGetEntity(
                           (ShopResetMaster_o *)gameObject,
                           &v120,
                           shopEntity->fields.baseShopId,
                           v90,
                           0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !v120 )
        goto LABEL_263;
      resetLimitNum = v120->fields.resetLimitNum;
    }
    else
    {
      resetLimitNum = 0;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( resetLimitNum < 1 )
    {
      v102 = LocalizationManager__Get((System_String_o *)StringLiteral_12058/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_NO_LIMIT_MESSAGE"*/, 0);
      limitNum = shopEntity->fields.limitNum;
      v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &limitNum, v103, v104, v105);
      v101 = System_String__Format_63499156(v102, Empty, v106, 0);
    }
    else
    {
      v92 = LocalizationManager__Get((System_String_o *)StringLiteral_12057/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_MESSAGE"*/, 0);
      limitNum = resetLimitNum;
      v96 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &limitNum, v93, v94, v95);
      v114 = shopEntity->fields.limitNum;
      v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v114, v97, v98, v99);
      v101 = System_String__Format_63499224(v92, Empty, v96, v100, 0);
    }
    v107 = v101;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserShopMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
    }
    gameObject = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      gameObject = NetworkManager_TypeInfo;
    }
    if ( !Master_object )
LABEL_263:
      sub_1C2D6EC(gameObject, shopEntity);
    gameObject = UserShopMaster__GetEntityDefinitely(
                   (UserShopMaster_o *)Master_object,
                   *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                   shopEntity->fields.baseShopId,
                   0);
    if ( resetLimitNum < 1 )
      goto LABEL_267;
    if ( !gameObject )
      goto LABEL_263;
    if ( resetLimitNum <= *((_DWORD *)gameObject + 10) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v112 = LocalizationManager__Get((System_String_o *)StringLiteral_12055/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_LIMIT"*/, 0);
    }
    else
    {
LABEL_267:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v109 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C211E1 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C211E1 = 1;
      }
      gameObject = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        gameObject = NetworkManager_TypeInfo;
      }
      if ( !v109 )
        goto LABEL_263;
      gameObject = UserItemMaster__GetEntityDefinitely(
                     (UserItemMaster_o *)v109,
                     *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                     v90,
                     0);
      if ( !gameObject )
        goto LABEL_263;
      if ( *((int *)gameObject + 7) > 0 )
        goto LABEL_258;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v111 = LocalizationManager__Get((System_String_o *)StringLiteral_12056/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_SHORTAGE"*/, 0);
      v112 = System_String__Format(v111, Empty, 0);
    }
    gameObject = System_String__Concat_63457864(v107, v112, 0);
    v107 = (System_String_o *)gameObject;
LABEL_258:
    ShopBuyItemConfirmMenu__SetLabelActive(
      (ShopBuyItemConfirmMenu_o *)gameObject,
      this->fields.resetWarningLabel,
      1,
      v110);
    gameObject = this->fields.resetWarningLabel;
    if ( !gameObject )
      goto LABEL_263;
    UILabel__set_text((UILabel_o *)gameObject, v107, 0);
    v113 = this->fields.resetWarningLabel;
    gameObject = ShopBuyItemConfirmMenu_TypeInfo;
    if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
    if ( !v113 )
      goto LABEL_263;
    UILabel__set_fontSize(v113, ShopBuyItemConfirmMenu_TypeInfo->static_fields->PurePriWarningLabelSize, 0);
    v24 = (UnityEngine_Component_o *)this->fields.resetWarningLabel;
    Shop18WarningLabelPosY = ShopBuyItemConfirmMenu_TypeInfo->static_fields->PurePriWarningLabelPosY;
    goto LABEL_23;
  }
  if ( isInPreparation )
  {
    v26 = *p_warningLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = &StringLiteral_12059/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/;
LABEL_70:
    v38 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v27, 0);
LABEL_71:
    v40 = v26;
LABEL_72:
    ShopBuyItemConfirmMenu__SetLabelText(v38, v40, (System_String_o *)v38, v39);
    return;
  }
  if ( !ShopEntity__IsEnable(shopEntity, 0, 0) )
  {
    v26 = *p_warningLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = &StringLiteral_12060/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/;
    goto LABEL_70;
  }
  UserItemCounts = ShopBuyItemConfirmMenu__GetUserItemCounts(this, v28);
  UserItemCountsLong = ShopBuyItemConfirmMenu__GetUserItemCountsLong((ShopBuyItemConfirmMenu_o *)UserItemCounts, v30);
  switch ( shopEntity->fields.payType )
  {
    case 2:
      v43 = UserItemCountsLong;
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0);
      if ( !v43 )
        goto LABEL_263;
      if ( !LODWORD(v43->max_length) )
        goto LABEL_264;
      if ( v43->m_Items[0] >= (int)gameObject )
        goto LABEL_171;
      v44 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v45 = LocalizationManager__Get((System_String_o *)StringLiteral_12066/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, 0);
      v46 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10808/*"QP_NAME"*/, 0);
      v47 = (ShopBuyItemConfirmMenu_o *)System_String__Format(v45, v46, 0);
      goto LABEL_126;
    case 4:
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0);
      if ( !UserItemCounts )
        goto LABEL_263;
      if ( !LODWORD(UserItemCounts->max_length) )
        goto LABEL_264;
      if ( (int)gameObject <= UserItemCounts->m_Items[0] )
        goto LABEL_171;
      v44 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v49 = &StringLiteral_12072/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/;
      goto LABEL_125;
    case 6:
    case 0xB:
    case 0xC:
      if ( ShopEntity__GetItemCount(shopEntity, 0) >= 2 )
      {
        if ( ShopEntity__GetItemCount(shopEntity, 0) >= 1 )
        {
          v32 = 0;
          while ( 1 )
          {
            gameObject = (void *)ShopEntity__GetPrices(shopEntity, v32, 0);
            if ( !UserItemCounts )
              goto LABEL_263;
            if ( (unsigned int)v32 >= LODWORD(UserItemCounts->max_length) )
              goto LABEL_264;
            if ( (int)gameObject > UserItemCounts->m_Items[v32] )
              break;
            if ( (int)++v32 >= ShopEntity__GetItemCount(shopEntity, 0) )
              goto LABEL_171;
          }
          v26 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v27 = &StringLiteral_12067/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/;
          goto LABEL_70;
        }
        goto LABEL_171;
      }
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0);
      if ( !UserItemCounts )
        goto LABEL_263;
      if ( !LODWORD(UserItemCounts->max_length) )
        goto LABEL_264;
      if ( (int)gameObject <= UserItemCounts->m_Items[0] )
        goto LABEL_171;
      gameObject = (void *)ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, (const MethodInfo *)shopEntity);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
        if ( !byte_4C21AC9 )
        {
          sub_1C2D490(&EventRewardRootComponent_TypeInfo);
          byte_4C21AC9 = 1;
        }
        v41 = EventRewardRootComponent_TypeInfo;
        if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          v41 = EventRewardRootComponent_TypeInfo;
        }
        p_AnotherPayUsedItemId_k__BackingField = &v41->static_fields->_AnotherPayUsedItemId_k__BackingField;
      }
      else
      {
        v63 = this->fields.shopEntity;
        if ( !v63 )
          goto LABEL_263;
        itemIds = v63->fields.itemIds;
        if ( !itemIds )
          goto LABEL_263;
        if ( !LODWORD(itemIds->max_length) )
LABEL_264:
          sub_1C2D6F4(gameObject, shopEntity, v33);
        p_AnotherPayUsedItemId_k__BackingField = itemIds->m_Items;
      }
      v65 = *p_AnotherPayUsedItemId_k__BackingField;
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_263;
      gameObject = DataManager__GetMasterData_object_(
                     (DataManager_o *)gameObject,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !gameObject )
        goto LABEL_263;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
              &entity,
              v65,
              (const MethodInfo_3387DE4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        return;
      v26 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_12066/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, 0);
      if ( !entity )
        goto LABEL_263;
      monitor = (Il2CppObject *)entity[1].monitor;
      goto LABEL_170;
    case 8:
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0);
      if ( !UserItemCounts )
        goto LABEL_263;
      if ( !LODWORD(UserItemCounts->max_length) )
        goto LABEL_264;
      if ( (int)gameObject <= UserItemCounts->m_Items[0] )
        goto LABEL_171;
      v50 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v51 = &StringLiteral_12086/*"SHOP_BUY_STONE_FRAGMENTS_CONFIRM_WARNING"*/;
      goto LABEL_109;
    case 9:
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0);
      if ( !UserItemCounts )
        goto LABEL_263;
      if ( !LODWORD(UserItemCounts->max_length) )
        goto LABEL_264;
      if ( (int)gameObject <= UserItemCounts->m_Items[0] )
        goto LABEL_171;
      v50 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v51 = &StringLiteral_12052/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/;
LABEL_109:
      v52 = LocalizationManager__Get((System_String_o *)*v51, 0);
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_263;
      gameObject = DataManager__GetMasterData_object_(
                     (DataManager_o *)gameObject,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
      v53 = this->fields.shopEntity;
      if ( !v53 )
        goto LABEL_263;
      v54 = v53->fields.itemIds;
      if ( !v54 )
        goto LABEL_263;
      if ( !LODWORD(v54->max_length) )
        goto LABEL_264;
      if ( !gameObject )
        goto LABEL_263;
      gameObject = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                     v54->m_Items[0],
                     (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !gameObject )
        goto LABEL_263;
      Name = (Il2CppObject *)*((_QWORD *)gameObject + 3);
      goto LABEL_116;
    case 0xA:
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0);
      if ( !UserItemCounts )
        goto LABEL_263;
      if ( !LODWORD(UserItemCounts->max_length) )
        goto LABEL_264;
      if ( (int)gameObject <= UserItemCounts->m_Items[0]
        || ShopEntity__IsAfterTheFreeShopReleaseDate(shopEntity, 0)
        && ShopEntity__IsFulFilledFreeExchangeCondition(shopEntity, 0) )
      {
        goto LABEL_171;
      }
      v44 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v49 = &StringLiteral_12079/*"SHOP_BUY_RARE_PRI_CONFIRM_WARNING"*/;
LABEL_125:
      v47 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v49, 0);
LABEL_126:
      ShopBuyItemConfirmMenu__SetLabelText(v47, v44, (System_String_o *)v47, v48);
      goto LABEL_171;
    case 0xE:
      if ( !this->fields.commonConsumeEntities )
        goto LABEL_171;
      gameObject = (void *)ShopEntity__get_TargetId(shopEntity, 0);
      v56 = BalanceConfig_TypeInfo;
      v57 = (int)gameObject;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v56 = BalanceConfig_TypeInfo;
      }
      if ( v57 != v56->static_fields->ApSeedExchangeTargetItemId )
        goto LABEL_135;
      v58 = *p_warningLabel;
      if ( !v56->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v56);
      if ( !v58 )
        goto LABEL_263;
      UILabel__set_fontSize(v58, BalanceConfig_TypeInfo->static_fields->TradeApDialogWarningLabelFontSize, 0);
LABEL_135:
      commonConsumeEntities = this->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        goto LABEL_263;
      max_length = commonConsumeEntities->max_length;
      if ( (_DWORD)max_length == 1 )
      {
        v61 = commonConsumeEntities->m_Items[0];
        if ( !v61 )
          goto LABEL_263;
        num = v61->fields.num;
        if ( num > CommonConsumeEntity__GetUserHasNum(commonConsumeEntities->m_Items[0], 0) )
        {
          v50 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12054/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, 0);
          Name = (Il2CppObject *)CommonConsumeEntity__GetName(v61, 0);
LABEL_116:
          v38 = (ShopBuyItemConfirmMenu_o *)System_String__Format(v52, Name, 0);
          v40 = v50;
          goto LABEL_72;
        }
      }
      else if ( (int)max_length > 1 )
      {
        v67 = string_TypeInfo->static_fields->Empty;
        v68 = 0;
        do
        {
          if ( v68 >= (unsigned int)max_length )
            goto LABEL_264;
          v69 = &commonConsumeEntities->obj.klass + v68;
          v70 = (CommonConsumeEntity_o *)v69[4];
          if ( !v70 )
            goto LABEL_263;
          v71 = v70->fields.num;
          gameObject = (void *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)v69[4], 0);
          if ( v71 > (int)gameObject )
          {
            v72 = (Il2CppObject *)CommonConsumeEntity__GetName(v70, 0);
            v73 = System_String__Format((System_String_o *)StringLiteral_25193/*"{0}、"*/, v72, 0);
            gameObject = System_String__Concat_63457864(v67, v73, 0);
            v67 = (struct System_String_o *)gameObject;
          }
          commonConsumeEntities = this->fields.commonConsumeEntities;
          if ( !commonConsumeEntities )
            goto LABEL_263;
          LODWORD(max_length) = commonConsumeEntities->max_length;
          ++v68;
        }
        while ( v68 < (int)max_length );
        if ( !v67 )
          goto LABEL_263;
        stringLength = v67->fields._stringLength;
        if ( stringLength >= 1 )
        {
          v75 = System_String__Remove_63503604(v67, stringLength - 1, 0);
          v26 = *p_warningLabel;
          v76 = (Il2CppObject *)v75;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_12054/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, 0);
          monitor = v76;
LABEL_170:
          v38 = (ShopBuyItemConfirmMenu_o *)System_String__Format((System_String_o *)gameObject, monitor, 0);
          goto LABEL_71;
        }
      }
LABEL_171:
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
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_263;
        gameObject = DataManager__GetMasterData_object_(
                       (DataManager_o *)gameObject,
                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
        if ( !userGameEntity )
          goto LABEL_263;
        if ( !gameObject )
          goto LABEL_263;
        gameObject = UserPresentBoxMaster__getVaildList(
                       (UserPresentBoxMaster_o *)gameObject,
                       userGameEntity->fields.userId,
                       0);
        if ( !gameObject )
          goto LABEL_263;
        if ( shopEntity->fields.purchaseType == 5 )
          v77 = recordNum[0];
        else
          v77 = buyCmdCodeNum[1] + buyServantNum[0] + buyCmdCodeNum[0];
        v78 = BalanceConfig_TypeInfo;
        v79 = *((_DWORD *)gameObject + 6);
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v78 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v78->static_fields->PresentBoxMax;
        if ( PresentBoxMax <= v79 )
        {
          v81 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v82 = &StringLiteral_12075/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/;
LABEL_212:
          gameObject = LocalizationManager__Get((System_String_o *)*v82, 0);
          if ( v81 )
          {
            UILabel__set_text(v81, (System_String_o *)gameObject, 0);
            return;
          }
          goto LABEL_263;
        }
        if ( !v78->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v78);
          PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
        }
        if ( v77 + v79 > PresentBoxMax )
        {
          v81 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v82 = &StringLiteral_12076/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/;
          goto LABEL_212;
        }
      }
      if ( buyServantNum[1] < 1 )
        return;
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_263;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C211E1 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C211E1 = 1;
      }
      gameObject = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        gameObject = NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        goto LABEL_263;
      Sum = UserItemMaster__getSum(
              (UserItemMaster_o *)MasterData_object,
              *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
              0);
      v85 = BalanceConfig_TypeInfo;
      v86 = Sum;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v85 = BalanceConfig_TypeInfo;
      }
      UserItemMax = v85->static_fields->UserItemMax;
      if ( v86 >= UserItemMax )
      {
        v81 = *p_warningLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v82 = &StringLiteral_12069/*"SHOP_BUY_ITEM_FULL_WARNING"*/;
        goto LABEL_212;
      }
      v88 = buyServantNum[1];
      if ( !v85->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v85);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      if ( v88 + v86 > UserItemMax )
      {
        v81 = *p_warningLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v82 = &StringLiteral_12071/*"SHOP_BUY_ITEM_OVER_WARNING"*/;
        goto LABEL_212;
      }
      return;
    default:
      goto LABEL_171;
  }
}


void ShopBuyItemConfirmMenu__SetWindowSize(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *windowSprite; // x20
  UnityEngine_Object_o *itemInfoBase; // x20
  UnityEngine_Object_o *priceInfoBase; // x20
  UnityEngine_Object_o *shopResetButton; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  UIWidget_o *v9; // x20
  char v10; // w21
  ShopBuyItemConfirmMenu_c *v11; // x8
  struct ShopBuyItemConfirmMenu_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  float DEFAULT_BUTTON_POS_Y; // s0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0

  if ( (byte_4C234CE & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ShopBuyItemConfirmMenu_TypeInfo);
    byte_4C234CE = 1;
  }
  windowSprite = (UnityEngine_Object_o *)this->fields.windowSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(windowSprite, 0, 0) )
  {
    itemInfoBase = (UnityEngine_Object_o *)this->fields.itemInfoBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(itemInfoBase, 0, 0) )
    {
      priceInfoBase = (UnityEngine_Object_o *)this->fields.priceInfoBase;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(priceInfoBase, 0, 0) )
      {
        shopResetButton = (UnityEngine_Object_o *)this->fields.shopResetButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(shopResetButton, 0, 0) )
        {
          gameObject = (UnityEngine_Component_o *)this->fields.shopResetButton;
          if ( gameObject )
          {
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
            if ( gameObject )
            {
              gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                        (UnityEngine_GameObject_o *)gameObject,
                                                        0);
              v9 = (UIWidget_o *)this->fields.windowSprite;
              v10 = (char)gameObject;
              v11 = ShopBuyItemConfirmMenu_TypeInfo;
              if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
                v11 = ShopBuyItemConfirmMenu_TypeInfo;
              }
              static_fields = v11->static_fields;
              if ( (v10 & 1) != 0 )
              {
                if ( v9 )
                {
                  UIWidget__set_height(v9, static_fields->RESET_LAYOUT_WINDOW_SIZE_Y, 0);
                  GameObjectExtensions__SetLocalPositionY(
                    this->fields.itemInfoBase,
                    (float)(ShopBuyItemConfirmMenu_TypeInfo->static_fields->RESET_LAYOUT_OFFSET_Y
                          + ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_ITEM_INFO_POS_Y),
                    0);
                  GameObjectExtensions__SetLocalPositionY(
                    this->fields.priceInfoBase,
                    (float)(ShopBuyItemConfirmMenu_TypeInfo->static_fields->RESET_LAYOUT_OFFSET_Y
                          + ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_PRICE_INFO_POS_Y),
                    0);
                  gameObject = (UnityEngine_Component_o *)this->fields.decideButton;
                  if ( gameObject )
                  {
                    v13 = UnityEngine_Component__get_gameObject(gameObject, 0);
                    GameObjectExtensions__SetLocalPositionY(
                      v13,
                      (float)(ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y
                            - ShopBuyItemConfirmMenu_TypeInfo->static_fields->RESET_LAYOUT_OFFSET_Y),
                      0);
                    gameObject = (UnityEngine_Component_o *)this->fields.cancelButton;
                    if ( gameObject )
                    {
                      v14 = UnityEngine_Component__get_gameObject(gameObject, 0);
                      GameObjectExtensions__SetLocalPositionY(
                        v14,
                        (float)(ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y
                              - ShopBuyItemConfirmMenu_TypeInfo->static_fields->RESET_LAYOUT_OFFSET_Y),
                        0);
                      gameObject = (UnityEngine_Component_o *)this->fields.shopResetButton;
                      if ( gameObject )
                      {
                        v15 = UnityEngine_Component__get_gameObject(gameObject, 0);
                        DEFAULT_BUTTON_POS_Y = (float)(ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y
                                                     - ShopBuyItemConfirmMenu_TypeInfo->static_fields->RESET_LAYOUT_OFFSET_Y);
LABEL_31:
                        GameObjectExtensions__SetLocalPositionY(v15, DEFAULT_BUTTON_POS_Y, 0);
                        return;
                      }
                    }
                  }
                }
              }
              else if ( v9 )
              {
                UIWidget__set_height(v9, static_fields->DEFAULT_WINDOW_SIZE_Y, 0);
                GameObjectExtensions__SetLocalPositionY(
                  this->fields.itemInfoBase,
                  (float)ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_ITEM_INFO_POS_Y,
                  0);
                GameObjectExtensions__SetLocalPositionY(
                  this->fields.priceInfoBase,
                  (float)ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_PRICE_INFO_POS_Y,
                  0);
                gameObject = (UnityEngine_Component_o *)this->fields.decideButton;
                if ( gameObject )
                {
                  v17 = UnityEngine_Component__get_gameObject(gameObject, 0);
                  GameObjectExtensions__SetLocalPositionY(
                    v17,
                    (float)ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y,
                    0);
                  gameObject = (UnityEngine_Component_o *)this->fields.cancelButton;
                  if ( gameObject )
                  {
                    v18 = UnityEngine_Component__get_gameObject(gameObject, 0);
                    GameObjectExtensions__SetLocalPositionY(
                      v18,
                      (float)ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y,
                      0);
                    gameObject = (UnityEngine_Component_o *)this->fields.shopResetButton;
                    if ( gameObject )
                    {
                      v15 = UnityEngine_Component__get_gameObject(gameObject, 0);
                      DEFAULT_BUTTON_POS_Y = (float)ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y;
                      goto LABEL_31;
                    }
                  }
                }
              }
            }
          }
          sub_1C2D6EC(gameObject, v7);
        }
      }
    }
  }
}


int32_t ShopBuyItemConfirmMenu__ShowCommandCodeInfomation(
        ShopBuyItemConfirmMenu_o *this,
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

  if ( (byte_4C234C6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C2D490(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_1C2D490(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C2D490(&Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C234C6 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_9;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         commandCodeId,
         (const MethodInfo_3387DE4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
  {
    v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = entity;
    v9 = (CommonUI_o *)v7;
    v10 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v10,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0);
    if ( v9 )
    {
      CommonUI__OpenServantEquipStatusDialog_31184128(v9, 25, (CommandCodeEntity_o *)v8, 0, v10, 0, 0);
      return 0;
    }
LABEL_9:
    sub_1C2D6EC(Instance, v6);
  }
  return 0;
}


int32_t ShopBuyItemConfirmMenu__ShowItemInfomation(
        ShopBuyItemConfirmMenu_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t itemDetailDialogOverwriteDepth; // w23
  Il2CppObject *v8; // x0
  Il2CppObject *v9; // x20
  CommonUI_o *v10; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v11; // x22
  int32_t v12; // w3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C234C5 & 1) == 0 )
  {
    sub_1C2D490(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C234C5 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_13;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         itemId,
         (const MethodInfo_3387DE4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    itemDetailDialogOverwriteDepth = this->fields.itemDetailDialogOverwriteDepth;
    v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = entity;
    v10 = (CommonUI_o *)v8;
    v11 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C2D6DC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      (intptr_t)Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__,
      0);
    if ( itemDetailDialogOverwriteDepth == 0x80000000 )
    {
      if ( v10 )
      {
        v12 = 50;
LABEL_11:
        CommonUI__OpenItemDetailDialog(v10, (ItemEntity_o *)v9, v11, v12, 0);
        return 0;
      }
    }
    else if ( v10 )
    {
      v12 = this->fields.itemDetailDialogOverwriteDepth;
      goto LABEL_11;
    }
LABEL_13:
    sub_1C2D6EC(Instance, v6);
  }
  return 0;
}


int32_t ShopBuyItemConfirmMenu__ShowOtherInfomation(
        ShopBuyItemConfirmMenu_o *this,
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
  if ( (byte_4C234C7 & 1) == 0 )
  {
    sub_1C2D490(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C2D490(&StringLiteral_9269/*"NONE"*/);
    byte_4C234C7 = 1;
  }
  if ( !shopEntity )
    goto LABEL_9;
  if ( !System_String__IsNullOrEmpty(shopEntity->fields.infoMessage, 0)
    && System_String__op_Inequality(shopEntity->fields.infoMessage, (System_String_o *)StringLiteral_9269/*"NONE"*/, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    name = shopEntity->fields.name;
    infoMessage = shopEntity->fields.infoMessage;
    v8 = (CommonUI_o *)Instance;
    v9 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C2D6DC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v9,
      v4,
      (intptr_t)Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__,
      0);
    if ( v8 )
    {
      CommonUI__OpenItemDetailDialog_31246476(v8, name, infoMessage, v9, 0);
      return 0;
    }
LABEL_9:
    sub_1C2D6EC(this, shopEntity);
  }
  return 0;
}


int32_t ShopBuyItemConfirmMenu__ShowServantInfomation(
        ShopBuyItemConfirmMenu_o *this,
        int32_t servantId,
        int32_t limitCount,
        int32_t level,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x21
  ServantLeaderInfo_o *v12; // x22
  ServantStatusDialog_EndDelegate_o *v13; // x20
  Il2CppObject *v15; // x23
  EquipTargetInfo_o *v16; // x24
  ServantStatusDialog_EndDelegate_o *v17; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C234C4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C2D490(&EquipTargetInfo_TypeInfo);
    sub_1C2D490(&ServantLeaderInfo_TypeInfo);
    sub_1C2D490(&Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__);
    sub_1C2D490(&Method_ShopBuyItemConfirmMenu_EndShowServantStatusDialog__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C234C4 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_23;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          servantId,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return -1;
  Instance = entity;
  if ( !entity )
    goto LABEL_23;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0) )
    goto LABEL_14;
  Instance = entity;
  if ( !entity )
    goto LABEL_23;
  if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)entity, 0) )
    goto LABEL_14;
  Instance = entity;
  if ( !entity )
    goto LABEL_23;
  if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)entity, 0) )
    goto LABEL_14;
  Instance = entity;
  if ( !entity )
    goto LABEL_23;
  if ( ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)entity, 0) )
  {
LABEL_14:
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (ServantLeaderInfo_o *)sub_1C2D6DC(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_43240808(v12, servantId, 0, 1, 0);
    v13 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v13,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantStatusDialog__,
      0);
    if ( v11 )
    {
      CommonUI__OpenServantStatusDialog_31180036((CommonUI_o *)v11, 7, v12, v13, 0);
      return 0;
    }
    goto LABEL_23;
  }
  Instance = entity;
  if ( !entity )
    goto LABEL_23;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0) )
  {
    v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = (EquipTargetInfo_o *)sub_1C2D6DC(EquipTargetInfo_TypeInfo);
    EquipTargetInfo___ctor_41488412(v16, servantId, limitCount, level, 0, 0);
    v17 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v17,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0);
    if ( v15 )
    {
      CommonUI__OpenServantEquipStatusDialog_31183144((CommonUI_o *)v15, 7, v16, v17, 0, 0);
      return 0;
    }
LABEL_23:
    sub_1C2D6EC(Instance, v10);
  }
  return 2;
}


System_String_o *ShopBuyItemConfirmMenu__get_closeBtnPath(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C234D2 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15638/*"Window/CancelButton"*/);
    byte_4C234D2 = 1;
  }
  return (System_String_o *)StringLiteral_15638/*"Window/CancelButton"*/;
}


bool ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  EventRewardRootComponent_c *v3; // x0
  ShopEntity_o *shopEntity; // x0
  System_Int32_array *possessionAnotherItemId; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C234A6 & 1) == 0 )
  {
    sub_1C2D490(&EventRewardRootComponent_TypeInfo);
    byte_4C234A6 = 1;
  }
  possessionAnotherItemId = 0;
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  if ( !byte_4C21ACA )
  {
    sub_1C2D490(&EventRewardRootComponent_TypeInfo);
    byte_4C21ACA = 1;
  }
  v3 = EventRewardRootComponent_TypeInfo;
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    v3 = EventRewardRootComponent_TypeInfo;
  }
  if ( v3->static_fields->_IsAnotherPayFlag_k__BackingField )
  {
    shopEntity = this->fields.shopEntity;
    if ( !shopEntity )
      sub_1C2D6EC(0, method);
    return ShopEntity__IsAnotherItemBuyable(shopEntity, &possessionAnotherItemId, 0);
  }
  else
  {
    return 0;
  }
}


void ShopBuyItemConfirmMenu___c__DisplayClass121_0___ctor(
        ShopBuyItemConfirmMenu___c__DisplayClass121_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopBuyItemConfirmMenu___c__DisplayClass121_0___ReturnWarningRarePri_b__0(
        ShopBuyItemConfirmMenu___c__DisplayClass121_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  ShopBuyItemConfirmMenu___c__DisplayClass121_0_o *v4; // x19
  struct ShopBuyItemConfirmMenu_o *_4__this; // x8
  System_Action_o *onChecked; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct ShopBuyItemConfirmMenu_o *v9; // x8
  System_Action_T__o *onCloseReturnWarning; // x21

  v4 = this;
  if ( (byte_4C234D5 & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu___c__DisplayClass121_0_o *)sub_1C2D490(&Method_ActionExtensions_Call_int___);
    byte_4C234D5 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (onChecked = _4__this->fields.onChecked,
        _4__this->fields.onChecked = 0,
        sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.onChecked, 0, v2, v3),
        (v9 = v4->fields.__4__this) == 0) )
  {
    sub_1C2D6EC(this, method);
  }
  onCloseReturnWarning = (System_Action_T__o *)v9->fields.onCloseReturnWarning;
  v9->fields.onCloseReturnWarning = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->fields.onCloseReturnWarning, 0, v7, v8);
  if ( v4->fields.isDecide )
    ActionExtensions__Call(onChecked, 0);
  else
    ActionExtensions__Call_int_(
      onCloseReturnWarning,
      0,
      (const MethodInfo_301B1A0 *)Method_ActionExtensions_Call_int___);
}