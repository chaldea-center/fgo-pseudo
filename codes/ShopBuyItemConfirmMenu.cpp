void __fastcall ShopBuyItemConfirmMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  struct ShopBuyItemConfirmMenu_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct ShopBuyItemConfirmMenu_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct ShopBuyItemConfirmMenu_StaticFields *v15; // x8

  if ( (byte_4B40D28 & 1) == 0 )
  {
    sub_1BDB878(&ShopBuyItemConfirmMenu_TypeInfo, v1);
    sub_1BDB878(&StringLiteral_17576/*"btn_txt_event_"*/, v4);
    sub_1BDB878(&StringLiteral_17629/*"btn_txt_trade"*/, v5);
    sub_1BDB878(&StringLiteral_17609/*"btn_txt_sale"*/, v6);
    byte_4B40D28 = 1;
  }
  ShopBuyItemConfirmMenu_TypeInfo->static_fields->VALENTINE_BTN_NAME = (struct System_String_o *)StringLiteral_17576/*"btn_txt_event_"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)ShopBuyItemConfirmMenu_TypeInfo->static_fields, StringLiteral_17576/*"btn_txt_event_"*/, v2, v3);
  v7 = StringLiteral_17629/*"btn_txt_trade"*/;
  static_fields = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  static_fields->DECIED_BTN_NAME_DEFAULT = (struct System_String_o *)StringLiteral_17629/*"btn_txt_trade"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->DECIED_BTN_NAME_DEFAULT, v7, v9, v10);
  v11 = StringLiteral_17609/*"btn_txt_sale"*/;
  v12 = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v12->DECIED_BTN_NAME_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_17609/*"btn_txt_sale"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v12->DECIED_BTN_NAME_LIMIT_MATERIAL, v11, v13, v14);
  v15 = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  *(_OWORD *)&v15->PRICE_DATA_LABEL_MAX_WIDTH = xmmword_BEA1F0;
  *(_QWORD *)&v15->DEFAULT_PRICE_INFO_POS_Y = 0xFFFFFF86FFFFFFECLL;
  *(_QWORD *)&v15->PurePriWarningLabelPosY = 0xC28E0000C2900000LL;
  v15->RESET_LAYOUT_OFFSET_Y = 34;
  *(_QWORD *)&v15->PurePriWarningLabelSize = 0x1400000016LL;
}


void __fastcall ShopBuyItemConfirmMenu___ctor(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4B40D27 & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    byte_4B40D27 = 1;
  }
  this->fields.itemDetailDialogOverwriteDepth = 0x80000000;
  *(_OWORD *)&this->fields.freeLabelPos.fields.x = xmmword_BEA700;
  *(_QWORD *)&this->fields.freeLabelPos2digit.fields.y = 3250585600LL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__CallOnClose(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Action_o *onClose; // x19
  CGThumbnailListItem_o *p_onClose; // x0

  onClose = this->fields.onClose;
  if ( onClose )
  {
    p_onClose = (CGThumbnailListItem_o *)&this->fields.onClose;
    p_onClose->klass = 0LL;
    sub_1BDB81C(p_onClose, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClose->fields.m_target)(
      onClose->fields.original_method_info,
      *(_QWORD *)&onClose->fields.extra_arg);
  }
}


void __fastcall ShopBuyItemConfirmMenu__CallOnDecide(
        ShopBuyItemConfirmMenu_o *this,
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
    p_onDecide->klass = 0LL;
    sub_1BDB81C(p_onDecide, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall ShopBuyItemConfirmMenu__Close(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ShopBuyItemConfirmMenu__Close_34256476(this, 0LL, v2);
}


void __fastcall ShopBuyItemConfirmMenu__Close_34256476(
        ShopBuyItemConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4B40D12 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, callback);
    sub_1BDB878(&Method_ShopBuyItemConfirmMenu_EndClose__, v6);
    byte_4B40D12 = 1;
  }
  this->fields.onClose = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.onClose, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__EndClose(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  ShopBuyItemConfirmMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BDBAD4(0LL, v4);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__EndShowItemDetailDialog(
        ShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B40D1F & 1) == 0 )
  {
    sub_1BDB878(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__, isDecide);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4B40D1F = 1;
  }
  v4 = Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__;
  if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BDB890(Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v7);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__EndShowServantEquipStatusDialog(
        ShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B40D1E & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B40D1E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v4);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__EndShowServantStatusDialog(
        ShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B40D1D & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B40D1D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
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
  const MethodInfo *v17; // x1
  System_Int64_array *UserItemCountsLong; // x0
  __int64 v19; // x2
  int32_t v20; // w19
  __int64 v21; // x21
  int m_CancellationTokenSource; // w20
  BalanceConfig_c *v23; // x8
  int32_t PresentBoxMax; // w9
  Il2CppObject *MasterData_object; // x19
  int32_t Sum; // w19
  BalanceConfig_c *v27; // x8
  int32_t UserItemMax; // w9
  int32_t v29; // w21
  System_Int64_array *v30; // x23
  struct CommonConsumeEntity_array *commonConsumeEntities; // x21
  int max_length; // w8
  __int64 v33; // x22
  int basePanel; // w24
  int32_t questId; // [xsp+Ch] [xbp-54h] BYREF
  int32_t recordNum[2]; // [xsp+10h] [xbp-50h] BYREF
  __int64 buyCmdCodeNum; // [xsp+18h] [xbp-48h] BYREF
  int32_t buyServantNum[2]; // [xsp+28h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_4B40D06 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, shopEntity);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserItemMaster___, v9);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v10);
    sub_1BDB878(&NetworkManager_TypeInfo, v11);
    this = (ShopBuyItemConfirmMenu_o *)sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B40D06 = 1;
  }
  *(_QWORD *)buyServantNum = 0LL;
  *(_QWORD *)recordNum = 0LL;
  buyCmdCodeNum = 0LL;
  questId = 0;
  if ( !shopEntity )
    goto LABEL_77;
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
      UserItemCountsLong = ShopBuyItemConfirmMenu__GetUserItemCountsLong(
                             (ShopBuyItemConfirmMenu_o *)UserItemCounts,
                             v17);
      switch ( shopEntity->fields.payType )
      {
        case 2:
          v30 = UserItemCountsLong;
          this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetPrice(shopEntity, 0LL);
          if ( !v30 )
            goto LABEL_77;
          if ( !v30->max_length )
            goto LABEL_78;
          if ( v30->m_Items[0] < (int)this )
            return 0;
          goto LABEL_19;
        case 4:
        case 8:
        case 9:
        case 0xC:
          goto LABEL_16;
        case 6:
        case 0xB:
          if ( ShopEntity__GetItemCount(shopEntity, 0LL) < 2 )
          {
LABEL_16:
            this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetPrice(shopEntity, 0LL);
            if ( !UserItemCounts )
              goto LABEL_77;
            if ( !UserItemCounts->max_length )
LABEL_78:
              sub_1BDBADC(this, shopEntity, v19);
            if ( (int)this > UserItemCounts->m_Items[1] )
              return 0;
          }
          else if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 1 )
          {
            v21 = 0LL;
            while ( 1 )
            {
              this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetPrices(shopEntity, v21, 0LL);
              if ( !UserItemCounts )
                break;
              if ( (unsigned int)v21 >= UserItemCounts->max_length )
                goto LABEL_78;
              if ( (int)this > UserItemCounts->m_Items[v21 + 1] )
                return 0;
              if ( (int)++v21 >= ShopEntity__GetItemCount(shopEntity, 0LL) )
                goto LABEL_19;
            }
LABEL_77:
            sub_1BDBAD4(this, shopEntity);
          }
LABEL_19:
          *(_QWORD *)buyServantNum = 0LL;
          *(_QWORD *)recordNum = 0LL;
          buyCmdCodeNum = 0LL;
          ShopEntity__GetSum(
            shopEntity,
            &buyServantNum[1],
            buyServantNum,
            (int32_t *)&buyCmdCodeNum + 1,
            (int32_t *)&buyCmdCodeNum,
            &recordNum[1],
            recordNum,
            0LL);
          if ( HIDWORD(buyCmdCodeNum) + buyServantNum[0] + (int)buyCmdCodeNum < 1 )
            goto LABEL_55;
          this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_77;
          this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
          if ( !userGameEntity )
            goto LABEL_77;
          if ( !this )
            goto LABEL_77;
          this = (ShopBuyItemConfirmMenu_o *)UserPresentBoxMaster__getVaildList(
                                               (UserPresentBoxMaster_o *)this,
                                               userGameEntity->fields.userId,
                                               0LL);
          if ( !this )
            goto LABEL_77;
          if ( shopEntity->fields.purchaseType == 5 )
            v20 = recordNum[0];
          else
            v20 = HIDWORD(buyCmdCodeNum) + buyServantNum[0] + buyCmdCodeNum;
          m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
          v23 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v23 = BalanceConfig_TypeInfo;
          }
          PresentBoxMax = v23->static_fields->PresentBoxMax;
          if ( PresentBoxMax > m_CancellationTokenSource )
          {
            if ( !v23->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v23);
              PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
            }
            if ( v20 + m_CancellationTokenSource <= PresentBoxMax )
            {
LABEL_55:
              if ( buyServantNum[1] < 1 )
                return 1;
              this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_77;
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserItemMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4B3ED56 )
              {
                sub_1BDB878(&NetworkManager_TypeInfo, shopEntity);
                byte_4B3ED56 = 1;
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
                      0LL);
              v27 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v27 = BalanceConfig_TypeInfo;
              }
              UserItemMax = v27->static_fields->UserItemMax;
              if ( Sum < UserItemMax )
              {
                v29 = buyServantNum[1];
                if ( !v27->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v27);
                  UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
                }
                if ( v29 + Sum <= UserItemMax )
                  return 1;
              }
            }
          }
          break;
        case 0xA:
          this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetPrice(shopEntity, 0LL);
          if ( !UserItemCounts )
            goto LABEL_77;
          if ( !UserItemCounts->max_length )
            goto LABEL_78;
          if ( (int)this > UserItemCounts->m_Items[1]
            && (!ShopEntity__IsAfterTheFreeShopReleaseDate(shopEntity, 0LL)
             || !ShopEntity__IsFulFilledFreeExchangeCondition(shopEntity, 0LL)) )
          {
            return 0;
          }
          goto LABEL_19;
        case 0xE:
          this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetItemCount(shopEntity, 0LL);
          if ( (int)this < 1 )
            goto LABEL_19;
          commonConsumeEntities = v8->fields.commonConsumeEntities;
          if ( !commonConsumeEntities )
            goto LABEL_19;
          max_length = commonConsumeEntities->max_length;
          if ( max_length < 1 )
            goto LABEL_19;
          v33 = 0LL;
          while ( 2 )
          {
            if ( (unsigned int)v33 >= max_length )
              goto LABEL_78;
            this = (ShopBuyItemConfirmMenu_o *)commonConsumeEntities->m_Items[v33];
            if ( !this )
              goto LABEL_77;
            basePanel = (int)this->fields.basePanel;
            this = (ShopBuyItemConfirmMenu_o *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0LL);
            if ( basePanel <= (int)this )
            {
              max_length = commonConsumeEntities->max_length;
              if ( (int)++v33 >= max_length )
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


bool __fastcall ShopBuyItemConfirmMenu__GetIsSetItemEventShop(
        ShopBuyItemConfirmMenu_o *this,
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

  if ( (byte_4B40D20 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_SetItemMaster___, ids);
    this = (ShopBuyItemConfirmMenu_o *)sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B40D20 = 1;
  }
  if ( !ids )
    goto LABEL_20;
  if ( !*(_QWORD *)&ids->max_length )
    return 0;
  this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_1BDBAD4(this, ids);
  this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SetItemMaster___);
  v6 = *(_QWORD *)&ids->max_length;
  if ( (int)v6 < 1 )
    return 0;
  v7 = (SetItemMaster_o *)this;
  v8 = 0LL;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)v6 )
LABEL_21:
      sub_1BDBADC(this, ids, v5);
    if ( !v7 )
      goto LABEL_20;
    this = (ShopBuyItemConfirmMenu_o *)SetItemMaster__GetList(v7, ids->m_Items[v8 + 1], 0LL);
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
    v11 = *((_QWORD *)&this->fields.basePanel + v10);
    if ( !v11 )
      goto LABEL_20;
    if ( *(_DWORD *)(v11 + 20) == 7 )
      return 1;
    if ( m_CancellationTokenSource == ++v10 )
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
    sub_1BDBAD4(this, 0LL);
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
  System_String_o **v6; // x8

  if ( (byte_4B40D15 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, *(_QWORD *)&shopType);
    sub_1BDB878(&StringLiteral_8273/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/, v4);
    sub_1BDB878(&StringLiteral_12100/*"SHOP_MAX_ALERT"*/, v5);
    byte_4B40D15 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( shopType == 9 )
    v6 = (System_String_o **)&StringLiteral_8273/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/;
  else
    v6 = (System_String_o **)&StringLiteral_12100/*"SHOP_MAX_ALERT"*/;
  return LocalizationManager__Get(*v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ShopBuyItemConfirmMenu__GetMaxAlertMessage(
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
  return System_String__Format((System_String_o *)MaxAlertBase, MaxOverItemName, 0LL);
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

  if ( (byte_4B40D14 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, *(_QWORD *)&itemType);
    sub_1BDB878(&StringLiteral_10811/*"QP_NAME"*/, v4);
    sub_1BDB878(&StringLiteral_8526/*"MANA_NAME"*/, v5);
    sub_1BDB878(&StringLiteral_10954/*"RARE_PRI_NAME"*/, v6);
    sub_1BDB878(&StringLiteral_6563/*"FRIEND_POINT_NAME"*/, v7);
    sub_1BDB878(&StringLiteral_1/*""*/, v8);
    byte_4B40D14 = 1;
  }
  if ( itemType <= 5 )
  {
    if ( itemType == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_10811/*"QP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v9, 0LL);
    }
    if ( itemType == 5 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_8526/*"MANA_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v9, 0LL);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( itemType == 13 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = &StringLiteral_6563/*"FRIEND_POINT_NAME"*/;
    return LocalizationManager__Get((System_String_o *)*v9, 0LL);
  }
  if ( itemType != 22 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = &StringLiteral_10954/*"RARE_PRI_NAME"*/;
  return LocalizationManager__Get((System_String_o *)*v9, 0LL);
}


System_Int32_array *__fastcall ShopBuyItemConfirmMenu__GetUserItemCounts(
        ShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 SelfUserGame; // x0
  __int64 v10; // x1
  struct ShopEntity_o *shopEntity; // x8
  _DWORD *v12; // x20
  System_Int32_array *v13; // x19
  __int64 v14; // x2
  Il2CppObject *MasterData_object; // x20
  struct ShopEntity_o *v16; // x8
  struct System_Int32_array *v17; // x8
  int32_t v18; // w8
  Il2CppObject *Master_object; // x20
  const MethodInfo *v20; // x1
  __int64 itemIds; // x21
  unsigned int ItemCount; // w0
  struct ShopEntity_o *v24; // x8
  unsigned __int64 v25; // x23

  if ( (byte_4B40D04 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_1BDB878(&Method_DataManager_GetMaster_UserItemMaster___, v3);
    sub_1BDB878(&DataManager_TypeInfo, v4);
    sub_1BDB878(&EventRewardRootComponent_TypeInfo, v5);
    sub_1BDB878(&int___TypeInfo, v6);
    sub_1BDB878(&NetworkManager_TypeInfo, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B40D04 = 1;
  }
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_64;
  v12 = (_DWORD *)SelfUserGame;
  switch ( shopEntity->fields.payType )
  {
    case 1:
      SelfUserGame = sub_1BDB920(int___TypeInfo, 1LL);
      if ( !v12 )
        goto LABEL_64;
      v13 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_64;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_65;
      v18 = v12[46];
      goto LABEL_45;
    case 4:
      SelfUserGame = sub_1BDB920(int___TypeInfo, 1LL);
      if ( !v12 )
        goto LABEL_64;
      v13 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_64;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_65;
      v18 = v12[48];
      goto LABEL_45;
    case 6:
    case 0xB:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserItemMaster___);
      SelfUserGame = ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v20);
      if ( (SelfUserGame & 1) == 0 )
      {
        v24 = this->fields.shopEntity;
        if ( v24 )
        {
          itemIds = (__int64)v24->fields.itemIds;
          if ( itemIds )
            goto LABEL_49;
        }
LABEL_64:
        sub_1BDBAD4(SelfUserGame, v10);
      }
      itemIds = sub_1BDB920(int___TypeInfo, 1LL);
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      if ( !byte_4B3F3B3 )
      {
        sub_1BDB878(&EventRewardRootComponent_TypeInfo, v10);
        byte_4B3F3B3 = 1;
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
      v13 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, *(unsigned int *)(itemIds + 24));
      if ( *(int *)(itemIds + 24) >= 1 )
      {
        v25 = 0LL;
        while ( 1 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4B3ED56 )
          {
            sub_1BDB878(&NetworkManager_TypeInfo, v10);
            byte_4B3ED56 = 1;
          }
          SelfUserGame = (__int64)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            SelfUserGame = (__int64)NetworkManager_TypeInfo;
          }
          if ( v25 >= *(unsigned int *)(itemIds + 24) )
            break;
          if ( !Master_object )
            goto LABEL_64;
          SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                                    (UserItemMaster_o *)Master_object,
                                    *(_QWORD *)(*(_QWORD *)(SelfUserGame + 184) + 64LL),
                                    *(_DWORD *)(itemIds + 32 + 4 * v25),
                                    0LL);
          if ( !SelfUserGame || !v13 )
            goto LABEL_64;
          if ( v25 >= v13->max_length )
            break;
          v13->m_Items[++v25] = *(_DWORD *)(SelfUserGame + 28);
          if ( (__int64)v25 >= *(int *)(itemIds + 24) )
            return v13;
        }
LABEL_65:
        sub_1BDBADC(SelfUserGame, v10, v14);
      }
      return v13;
    case 8:
    case 9:
    case 0xC:
      v13 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 1LL);
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_64;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B3ED56 )
      {
        sub_1BDB878(&NetworkManager_TypeInfo, v10);
        byte_4B3ED56 = 1;
      }
      SelfUserGame = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        SelfUserGame = (__int64)NetworkManager_TypeInfo;
      }
      v16 = this->fields.shopEntity;
      if ( !v16 )
        goto LABEL_64;
      v17 = v16->fields.itemIds;
      if ( !v17 )
        goto LABEL_64;
      if ( !v17->max_length )
        goto LABEL_65;
      if ( !MasterData_object )
        goto LABEL_64;
      SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)MasterData_object,
                                *(_QWORD *)(*(_QWORD *)(SelfUserGame + 184) + 64LL),
                                v17->m_Items[1],
                                0LL);
      if ( !SelfUserGame || !v13 )
        goto LABEL_64;
      if ( !v13->max_length )
        goto LABEL_65;
      v18 = *(_DWORD *)(SelfUserGame + 28);
LABEL_45:
      v13->m_Items[1] = v18;
      return v13;
    case 0xA:
      SelfUserGame = sub_1BDB920(int___TypeInfo, 1LL);
      if ( !v12 )
        goto LABEL_64;
      v13 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_64;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_65;
      v18 = v12[49];
      goto LABEL_45;
    default:
      ItemCount = ShopEntity__GetItemCount(this->fields.shopEntity, 0LL);
      return (System_Int32_array *)sub_1BDB920(int___TypeInfo, ItemCount);
  }
}


System_Int64_array *__fastcall ShopBuyItemConfirmMenu__GetUserItemCountsLong(
        ShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x19
  System_Int64_array *result; // x0
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_4B40D05 & 1) == 0 )
  {
    sub_1BDB878(&long___TypeInfo, method);
    byte_4B40D05 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  result = (System_Int64_array *)sub_1BDB920(long___TypeInfo, 1LL);
  if ( !SelfUserGame || !result )
    sub_1BDBAD4(result, v4);
  if ( !result->max_length )
    sub_1BDBADC(result, v4, v5);
  result->m_Items[0] = SelfUserGame->fields.qp;
  return result;
}


void __fastcall ShopBuyItemConfirmMenu__Init(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *nameLabel; // x0
  UILabel_o *messageLabel; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  ShopBuyItemConfirmMenu_o *v8; // x0
  const MethodInfo *v9; // x3
  ShopBuyItemConfirmMenu_o *v10; // x0
  const MethodInfo *v11; // x3
  ShopBuyItemConfirmMenu_o *v12; // x0
  const MethodInfo *v13; // x3

  if ( (byte_4B40CFB & 1) == 0 )
  {
    sub_1BDB878(&ShopBuyItemUtility_TypeInfo, method);
    sub_1BDB878(&StringLiteral_1/*""*/, v3);
    byte_4B40CFB = 1;
  }
  nameLabel = (UILabel_o *)this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_14;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
  ShopBuyItemUtility__SetDefaultMessageLabel(messageLabel, 0LL);
  nameLabel = this->fields.warningLabel;
  if ( !nameLabel )
    goto LABEL_14;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.freeLabel;
  if ( !nameLabel )
    goto LABEL_14;
  nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL);
  if ( !nameLabel )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0LL);
  nameLabel = (UILabel_o *)this->fields.itemIcon;
  if ( !nameLabel )
    goto LABEL_14;
  ItemIconComponent__Clear((ItemIconComponent_o *)nameLabel, 0LL);
  nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !nameLabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0LL),
        this->fields.state = 0,
        this->fields.shopEntity = 0LL,
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.shopEntity, 0, v6, v7),
        (nameLabel = (UILabel_o *)this->fields.infoButton) == 0LL)
    || (nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL)) == 0LL )
  {
LABEL_14:
    sub_1BDBAD4(nameLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText(v8, this->fields.presentAheadLabel, (System_String_o *)StringLiteral_1/*""*/, v9);
  ShopBuyItemConfirmMenu__SetLabelActive(v10, this->fields.LineText, 0, v11);
  ShopBuyItemConfirmMenu__SetLabelActive(v12, this->fields.LineText2digit, 0, v13);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__OnClickCancel(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B40D16 & 1) == 0 )
  {
    sub_1BDB878(&Method_ShopBuyItemConfirmMenu_OnClickCancel__, method);
    byte_4B40D16 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ShopBuyItemConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ShopBuyItemConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    ShopBuyItemConfirmMenu__CallOnDecide(this, 0, v5);
  }
}


void __fastcall ShopBuyItemConfirmMenu__OnClickDecide(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v2; // x19
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
  struct ShopEntity_o *shopEntity; // x8
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  NoTitleDialog_o *noTitleDialog; // x20
  struct UILabel_o *presentAheadLabel; // x21
  Il2CppObject *Name; // x0
  System_String_o *v23; // x21
  System_String_o *v24; // x22
  System_String_o *v25; // x23
  System_Action_bool__o *v26; // x24
  const MethodInfo *v27; // x3
  struct ShopEntity_o *v28; // x8
  System_String_o *MaxAlertMessage; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v31; // x22
  UILabel_o *warningLabel; // x20
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  const MethodInfo *v37; // x2
  int32_t check; // [xsp+4Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4B40D13 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_bool__TypeInfo, method);
    sub_1BDB878(&System_Action_TypeInfo, v3);
    sub_1BDB878(&Method_DataManager_GetMasterData_ShopMaster___, v4);
    sub_1BDB878(&LocalizationManager_TypeInfo, v5);
    sub_1BDB878(&Method_ShopBuyItemConfirmMenu_EndMaxErrorDialog__, v6);
    sub_1BDB878(&Method_ShopBuyItemConfirmMenu_OnClickDecide__, v7);
    sub_1BDB878(&Method_ShopBuyItemConfirmMenu_ReturnWarning__, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BDB878(&StringLiteral_9327/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, v11);
    sub_1BDB878(&StringLiteral_12034/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, v12);
    sub_1BDB878(&StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/, v13);
    this = (ShopBuyItemConfirmMenu_o *)sub_1BDB878(&StringLiteral_1/*""*/, v14);
    byte_4B40D13 = 1;
  }
  check = 0;
  if ( v2->fields.state == 2 )
  {
    shopEntity = v2->fields.shopEntity;
    if ( shopEntity )
    {
      if ( shopEntity->fields.shopType == 18 )
      {
        v16 = Method_ShopBuyItemConfirmMenu_OnClickDecide__;
        if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
          v16 = (_QWORD *)sub_1BDB890(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
        v17 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v16, v16[4]);
        OverwriteAssetSoundName__PlaySystemSe(v17, v2->fields.decideSe, 0, 0LL);
        ActionExtensions__Call(v2->fields.onReset, 0LL);
        return;
      }
      this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ShopMaster___);
        method = (const MethodInfo *)v2->fields.shopEntity;
        if ( method )
        {
          if ( LODWORD(method->parameters) != 17 )
          {
            if ( !this )
              goto LABEL_40;
            if ( ShopMaster__PurchaseCloseEventShop((ShopMaster_o *)this, (ShopEntity_o *)method, 0LL) )
            {
              v18 = Method_ShopBuyItemConfirmMenu_OnClickDecide__;
              if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
                v18 = (_QWORD *)sub_1BDB890(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
              v19 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v18, v18[4]);
              OverwriteAssetSoundName__PlaySystemSe(v19, 8, 0, 0LL);
              this = (ShopBuyItemConfirmMenu_o *)v2->fields.shopEntity;
              if ( this )
              {
                noTitleDialog = v2->fields.noTitleDialog;
                presentAheadLabel = this->fields.presentAheadLabel;
                Name = (Il2CppObject *)ShopEntity__getName((ShopEntity_o *)this, 0LL);
                v23 = System_String__Format((System_String_o *)presentAheadLabel, Name, 0LL);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v24 = LocalizationManager__Get((System_String_o *)StringLiteral_9327/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, 0LL);
                v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
                v26 = (System_Action_bool__o *)sub_1BDBAC4(System_Action_bool__TypeInfo);
                System_Action_bool____ctor(v26, (Il2CppObject *)v2, Method_ShopBuyItemConfirmMenu_ReturnWarning__, 0LL);
                if ( noTitleDialog )
                {
                  NoTitleDialog__Open(noTitleDialog, v23, v24, v25, v26, 0LL);
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
              v35 = Method_ShopBuyItemConfirmMenu_OnClickDecide__;
              if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
                v35 = (_QWORD *)sub_1BDB890(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
              v36 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v35, v35[4]);
              OverwriteAssetSoundName__PlaySystemSe(v36, v2->fields.decideSe, 0, 0LL);
              ShopBuyItemConfirmMenu__CallOnDecide(v2, 1, v37);
              return;
            }
          }
          if ( ShopEntity__IsEnable((ShopEntity_o *)method, 0LL, 0LL) )
          {
            this = (ShopBuyItemConfirmMenu_o *)v2->fields.shopEntity;
            if ( !this )
              goto LABEL_40;
            this = (ShopBuyItemConfirmMenu_o *)ShopEntity__isMaxOver((ShopEntity_o *)this, 1LL, &check, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v28 = v2->fields.shopEntity;
              if ( v28 )
              {
                MaxAlertMessage = ShopBuyItemConfirmMenu__GetMaxAlertMessage(v2, v28->fields.shopType, check, v27);
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v31 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                System_Action___ctor(v31, (Il2CppObject *)v2, Method_ShopBuyItemConfirmMenu_EndMaxErrorDialog__, 0LL);
                if ( Instance )
                {
                  CommonUI__OpenNotificationDialog(
                    (CommonUI_o *)Instance,
                    (System_String_o *)StringLiteral_1/*""*/,
                    MaxAlertMessage,
                    v31,
                    -1,
                    0,
                    0,
                    0,
                    0,
                    0,
                    0,
                    0,
                    0LL,
                    0.0,
                    0,
                    0LL);
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
            UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            warningLabel = v2->fields.warningLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12034/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, 0LL);
            if ( warningLabel )
            {
              UILabel__set_text(warningLabel, (System_String_o *)this, 0LL);
              v33 = Method_ShopBuyItemConfirmMenu_OnClickDecide__;
              if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
                v33 = (_QWORD *)sub_1BDB890(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
              v34 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v33, v33[4]);
              OverwriteAssetSoundName__PlaySystemSe(v34, 2, 0, 0LL);
              this = (ShopBuyItemConfirmMenu_o *)v2->fields.decideButton;
              if ( this )
              {
                ((void (__fastcall *)(ShopBuyItemConfirmMenu_o *, __int64, _QWORD, void *))this->klass[1]._1.klass)(
                  this,
                  3LL,
                  0LL,
                  this->klass[1]._1.fields);
                return;
              }
            }
          }
        }
      }
    }
LABEL_40:
    sub_1BDBAD4(this, method);
  }
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
    sub_1BDBAD4(this, shopEntity);
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


void __fastcall ShopBuyItemConfirmMenu__OnClickReset(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4B40D25 & 1) == 0 )
  {
    sub_1BDB878(&Method_ShopBuyItemConfirmMenu_OnClickReset__, method);
    byte_4B40D25 = 1;
  }
  v3 = Method_ShopBuyItemConfirmMenu_OnClickReset__;
  if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickReset__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BDB890(Method_ShopBuyItemConfirmMenu_OnClickReset__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  ActionExtensions__Call(this->fields.onReset, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__Open(
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  struct ShopEntity_o **p_shopEntity; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct ShopEntity_o *v30; // x8
  struct CommonConsumeEntity_array *CommonConsumeEntities; // x1
  struct CommonConsumeEntity_array **p_commonConsumeEntities; // x0
  System_String_o *Name; // x23
  System_String_o *v34; // x23
  const MethodInfo *v35; // x3
  UISprite_o *decideButtonImg; // x24
  ShopBuyItemConfirmMenu_o *v37; // x0
  bool IsPreparation; // w0
  bool v39; // w26
  bool v40; // w25
  const MethodInfo *v41; // x4
  UserGameEntity_o *SelfUserGame; // x24
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x3
  ShopEntity_o *v45; // x27
  UILabel_o *textOnMask; // x28
  const MethodInfo *v47; // x3
  ShopEntity_o *v48; // x26
  UISprite_o *possessionSprite; // x27
  bool v50; // w0
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x3
  bool IsNotHavingShopItemReceived; // w0
  bool v54; // w22
  const MethodInfo *v55; // x5
  const MethodInfo *v56; // x4
  bool IsBuyable; // w20
  const MethodInfo *v58; // x2
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x1
  const MethodInfo *v61; // x4
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x5
  UISprite_o *itemMaskeSprite; // x20
  ShopBuyItemConfirmMenu_o *v65; // x0
  const MethodInfo *v66; // x3
  _BOOL8 IsShowMask; // x0
  const MethodInfo *v68; // x3
  const MethodInfo *v69; // x3
  System_Action_o *v70; // x20
  System_String_o *itemName; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4B40CFC & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, shopEntity);
    sub_1BDB878(&LocalizationManager_TypeInfo, v17);
    sub_1BDB878(&Method_ShopBuyItemConfirmMenu_EndOpen__, v18);
    sub_1BDB878(&ShopBuyItemConfirmMenu_TypeInfo, v19);
    sub_1BDB878(&ShopBuyItemUtility_TypeInfo, v20);
    byte_4B40CFC = 1;
  }
  message = 0LL;
  itemName = 0LL;
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1BDB81C(
      (CGThumbnailListItem_o *)&this->fields.onDecide,
      (int32_t)onDecide,
      shopKind,
      (const MethodInfo *)onDecide);
    p_shopEntity = &this->fields.shopEntity;
    this->fields.shopEntity = shopEntity;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.shopEntity, (int32_t)shopEntity, v22, v23);
    this->fields.onReset = onReset;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.onReset, (int32_t)onReset, v24, v25);
    v30 = this->fields.shopEntity;
    this->fields.shopState = shopState;
    this->fields.decideSe = se;
    if ( !v30 )
      goto LABEL_8;
    if ( !shopEntity )
      goto LABEL_27;
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
      LODWORD(CommonConsumeEntities) = 0;
      this->fields.commonConsumeEntities = 0LL;
    }
    sub_1BDB81C((CGThumbnailListItem_o *)p_commonConsumeEntities, (int32_t)CommonConsumeEntities, v28, v29);
    this->fields.shopKind = shopKind;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)*p_shopEntity;
      if ( *p_shopEntity )
      {
        Name = ShopEntity__getName((ShopEntity_o *)gameObject, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__ReplaceCommonTag(Name, 0, 0LL);
        if ( this->fields.nameLabel )
        {
          v34 = (System_String_o *)gameObject;
          UICrossNarrowLabel__SetCrossNarrowText(this->fields.nameLabel, (System_String_o *)gameObject, 0LL);
          decideButtonImg = this->fields.decideButtonImg;
          v37 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
            v37 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          }
          ShopBuyItemConfirmMenu__SetSpriteName(
            v37,
            decideButtonImg,
            (System_String_o *)v37->fields.decideButton->monitor,
            v35);
          gameObject = (UnityEngine_GameObject_o *)*p_shopEntity;
          if ( *p_shopEntity )
          {
            IsPreparation = ShopEntity__IsPreparation((ShopEntity_o *)gameObject, &message, &itemName, 0LL);
            v39 = IsPreparation;
            v40 = IsPreparation;
            ShopBuyItemConfirmMenu__SetMessageLabel(this, this->fields.shopEntity, IsPreparation, message, v41);
            SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
            ShopBuyItemConfirmMenu__SetBandSprite(this, this->fields.shopEntity, v43);
            ShopBuyItemConfirmMenu__SetTextOnMask(this, this->fields.shopEntity, v39, v44);
            v45 = this->fields.shopEntity;
            textOnMask = this->fields.textOnMask;
            if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
            ShopBuyItemUtility__SetAddTextOnMask(v45, textOnMask, 0LL);
            ShopBuyItemConfirmMenu__SetNumText(this, this->fields.shopEntity, v39, v47);
            v48 = this->fields.shopEntity;
            if ( v48 )
            {
              possessionSprite = this->fields.possessionSprite;
              v50 = ShopEntity__checkFlag(this->fields.shopEntity, 0x4000, 0LL);
              ShopBuyItemUtility__SetShopHaveStatusIcon(v48, possessionSprite, v50, 0LL);
              ShopBuyItemConfirmMenu__SetPossessionInfo(this, shopEntity, v51);
              gameObject = (UnityEngine_GameObject_o *)this->fields.shopEntity;
              if ( gameObject )
              {
                if ( !ShopEntity__IsSoldOut((ShopEntity_o *)gameObject, 0LL) )
                {
                  IsNotHavingShopItemReceived = 0;
                  goto LABEL_25;
                }
                gameObject = (UnityEngine_GameObject_o *)*p_shopEntity;
                if ( *p_shopEntity )
                {
                  IsNotHavingShopItemReceived = ShopEntity__GetIsNotHavingShopItemReceived(
                                                  (ShopEntity_o *)gameObject,
                                                  0LL);
LABEL_25:
                  v54 = IsNotHavingShopItemReceived;
                  ShopBuyItemConfirmMenu__SetExtensionText(
                    this,
                    this->fields.shopEntity,
                    IsNotHavingShopItemReceived,
                    v52);
                  ShopBuyItemConfirmMenu__SetPriceInfo(this, this->fields.shopEntity, v40, buttonSpriteId, v54, v55);
                  IsBuyable = ShopBuyItemConfirmMenu__GetIsBuyable(
                                this,
                                this->fields.shopEntity,
                                v40,
                                SelfUserGame,
                                v56);
                  ShopBuyItemConfirmMenu__SetDefaultButton(this, IsBuyable, v58);
                  ShopBuyItemConfirmMenu__SetAheadText(this, this->fields.shopEntity, IsBuyable, v59);
                  ShopBuyItemConfirmMenu__SetWindowSize(this, v60);
                  ShopBuyItemConfirmMenu__SetWarningLabel(this, this->fields.shopEntity, v40, SelfUserGame, v61);
                  ShopBuyItemConfirmMenu__SetItemIcon(this, this->fields.shopEntity, v40, v62);
                  ShopBuyItemConfirmMenu__SetNameText(this, this->fields.shopEntity, v40, v34, itemName, v63);
                  itemMaskeSprite = this->fields.itemMaskeSprite;
                  IsShowMask = ShopBuyItemConfirmMenu__GetIsShowMask(v65, this->fields.shopEntity, v40, v66);
                  ShopBuyItemConfirmMenu__SetSpriteActive(
                    (ShopBuyItemConfirmMenu_o *)IsShowMask,
                    itemMaskeSprite,
                    IsShowMask,
                    v68);
                  ShopBuyItemConfirmMenu__SetInfoButton(this, this->fields.shopEntity, v40, v69);
                  this->fields.state = 1;
                  v70 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                  System_Action___ctor(v70, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndOpen__, 0LL);
                  BaseDialog__Open((BaseDialog_o *)this, v70, 0, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_1BDBAD4(gameObject, v27);
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
  struct ShopEntity_o *Shop_k__BackingField; // x23
  int v17; // w24
  ShopEntity_o *v18; // x0
  Il2CppObject *Instance; // x0
  System_String_o *warningMessage; // x24
  CommonUI_o *v21; // x22
  Il2CppObject *Name; // x0
  System_String_o *v23; // x23
  System_String_o *v24; // x24
  System_String_o *v25; // x25
  System_Action_bool__o *v26; // x26
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_String_o *itemName; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4B40D21 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_bool__TypeInfo, item);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v9);
    sub_1BDB878(&LocalizationManager_TypeInfo, v10);
    sub_1BDB878(&Method_ShopBuyItemConfirmMenu_ReturnWarningRarePri__, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1BDB878(&StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/, v13);
    sub_1BDB878(&StringLiteral_19675/*"freeShopCondId"*/, v14);
    this = (ShopBuyItemConfirmMenu_o *)sub_1BDB878(&StringLiteral_11123/*"RETURN_RARE_PRI_SHOP_DECIDE_BUTTON"*/, v15);
    byte_4B40D21 = 1;
  }
  message = 0LL;
  itemName = 0LL;
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
                                             0LL);
        if ( Shop_k__BackingField->fields.script )
        {
          v17 = (int)this;
          if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                  (System_Collections_Generic_Dictionary_object__object__o *)Shop_k__BackingField->fields.script,
                  (Il2CppObject *)StringLiteral_19675/*"freeShopCondId"*/,
                  (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
            goto LABEL_13;
          v18 = item->fields._Shop_k__BackingField;
          if ( v18 )
            LODWORD(v18) = ShopEntity__IsSoldOut(v18, 0LL);
          if ( ((v17 | (unsigned int)v18) & 1) != 0
            || !ShopEntity__IsAfterTheFreeShopReleaseDate(Shop_k__BackingField, 0LL)
            || ShopEntity__IsFulFilledFreeExchangeCondition(Shop_k__BackingField, 0LL) )
          {
LABEL_13:
            ActionExtensions__Call(onChecked, 0LL);
            return;
          }
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          warningMessage = Shop_k__BackingField->fields.warningMessage;
          v21 = (CommonUI_o *)Instance;
          Name = (Il2CppObject *)ShopEntity__getName(Shop_k__BackingField, 0LL);
          v23 = System_String__Format(warningMessage, Name, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11123/*"RETURN_RARE_PRI_SHOP_DECIDE_BUTTON"*/, 0LL);
          v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
          v26 = (System_Action_bool__o *)sub_1BDBAC4(System_Action_bool__TypeInfo);
          System_Action_bool____ctor(v26, (Il2CppObject *)v8, Method_ShopBuyItemConfirmMenu_ReturnWarningRarePri__, 0LL);
          if ( v21 )
          {
            CommonUI__OpenNoTitleDialog(v21, v23, v24, v25, v26, 0LL);
            v8->fields.onChecked = onChecked;
            sub_1BDB81C((CGThumbnailListItem_o *)&v8->fields.onChecked, (int32_t)onChecked, v27, v28);
            v8->fields.onCloseReturnWarning = onCloseReturnWarning;
            sub_1BDB81C(
              (CGThumbnailListItem_o *)&v8->fields.onCloseReturnWarning,
              (int32_t)onCloseReturnWarning,
              v29,
              v30);
            return;
          }
        }
      }
    }
    sub_1BDBAD4(this, item);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__PlayShowInfomationSound(
        ShopBuyItemConfirmMenu_o *this,
        int32_t seKind,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B40D1C & 1) == 0 )
  {
    sub_1BDB878(&Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__, *(_QWORD *)&seKind);
    byte_4B40D1C = 1;
  }
  if ( (seKind & 0x80000000) == 0 )
  {
    v4 = Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__;
    if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BDB890(Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, seKind, 0, 0LL);
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
    sub_1BDBAD4(0LL, isDecide);
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
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v14; // x20

  if ( (byte_4B40D17 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, isDecide);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BDB878(&Method_ShopBuyItemConfirmMenu___c__DisplayClass121_0__ReturnWarningRarePri_b__0__, v6);
    sub_1BDB878(&ShopBuyItemConfirmMenu___c__DisplayClass121_0_TypeInfo, v7);
    byte_4B40D17 = 1;
  }
  v8 = sub_1BDBAC4(ShopBuyItemConfirmMenu___c__DisplayClass121_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = this,
        sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)this, v11, v12),
        *(_BYTE *)(v8 + 24) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v14 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v8,
          Method_ShopBuyItemConfirmMenu___c__DisplayClass121_0__ReturnWarningRarePri_b__0__,
          0LL),
        !Instance) )
  {
    sub_1BDBAD4(v9, v10);
  }
  CommonUI__CloseNoTitleDialog((CommonUI_o *)Instance, v14, 0LL);
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
  __int64 v20; // x1
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  int32_t purchaseType; // w8
  UILabel_o *presentAheadLabel; // x19
  __int64 *v25; // x8
  System_String_o *v26; // x1
  UILabel_o *v27; // x0
  Il2CppObject *MasterData_object; // x21
  int klass; // w8
  int32_t shopType; // w20
  int32_t v31; // w21
  UILabel_o *v32; // x20
  const MethodInfo *v33; // x3
  UISprite_o *decideButtonImg; // x19
  ShopBuyItemConfirmMenu_o *v35; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v6 = this;
  if ( (byte_4B40D09 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity);
    sub_1BDB878(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_1BDB878(&LocalizationManager_TypeInfo, v8);
    sub_1BDB878(&ShopBuyItemConfirmMenu_TypeInfo, v9);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BDB878(&StringLiteral_10480/*"PURCHASE_AFTER_COSTUME"*/, v11);
    sub_1BDB878(&StringLiteral_10485/*"PURCHASE_AFTER_USER_ITEM"*/, v12);
    sub_1BDB878(&StringLiteral_10482/*"PURCHASE_AFTER_ITEM_SET"*/, v13);
    sub_1BDB878(&StringLiteral_8272/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/, v14);
    sub_1BDB878(&StringLiteral_10483/*"PURCHASE_AFTER_PRESENT_BOX"*/, v15);
    sub_1BDB878(&StringLiteral_10481/*"PURCHASE_AFTER_EVENT_SVT_GET"*/, v16);
    sub_1BDB878(&StringLiteral_10487/*"PURCHASE_AFTER_USER_SVT_COIN_PERIOD"*/, v17);
    sub_1BDB878(&StringLiteral_10484/*"PURCHASE_AFTER_QP"*/, v18);
    sub_1BDB878(&StringLiteral_10486/*"PURCHASE_AFTER_USER_SVT_COIN"*/, v19);
    this = (ShopBuyItemConfirmMenu_o *)sub_1BDB878(&StringLiteral_1/*""*/, v20);
    byte_4B40D09 = 1;
  }
  entity = 0LL;
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_49;
          MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
          Instance = (DataManager_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
          if ( !MasterData_object )
            goto LABEL_49;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        &entity,
                                        (int32_t)Instance,
                                        (const MethodInfo_32E1E88 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
                v25 = &StringLiteral_10487/*"PURCHASE_AFTER_USER_SVT_COIN_PERIOD"*/;
              else
                v25 = &StringLiteral_10486/*"PURCHASE_AFTER_USER_SVT_COIN"*/;
            }
            else
            {
              presentAheadLabel = v6->fields.presentAheadLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v25 = &StringLiteral_10485/*"PURCHASE_AFTER_USER_ITEM"*/;
            }
LABEL_11:
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)*v25, 0LL);
            if ( presentAheadLabel )
            {
              v26 = (System_String_o *)Instance;
              v27 = presentAheadLabel;
LABEL_13:
              UILabel__set_text(v27, v26, 0LL);
              return;
            }
            goto LABEL_49;
          }
          v31 = shopEntity->fields.shopType;
          v32 = v6->fields.presentAheadLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( v31 != 9 )
          {
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10484/*"PURCHASE_AFTER_QP"*/, 0LL);
            if ( v32 )
            {
              v26 = (System_String_o *)Instance;
              v27 = v32;
              goto LABEL_13;
            }
LABEL_49:
            sub_1BDBAD4(Instance, v22);
          }
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8272/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/, 0LL);
          if ( !v32 )
            goto LABEL_49;
          UILabel__set_text(v32, (System_String_o *)Instance, 0LL);
          decideButtonImg = v6->fields.decideButtonImg;
          v35 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
            v35 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          }
          ShopBuyItemConfirmMenu__SetSpriteName(
            v35,
            decideButtonImg,
            *(System_String_o **)&v35->fields.decideButton->fields.m_CachedPtr,
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
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v25 = &StringLiteral_10482/*"PURCHASE_AFTER_ITEM_SET"*/;
          goto LABEL_11;
        case 8:
          presentAheadLabel = v6->fields.presentAheadLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v25 = &StringLiteral_10481/*"PURCHASE_AFTER_EVENT_SVT_GET"*/;
          goto LABEL_11;
        default:
          if ( purchaseType != 14 )
            return;
          presentAheadLabel = v6->fields.presentAheadLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v25 = &StringLiteral_10480/*"PURCHASE_AFTER_COSTUME"*/;
          goto LABEL_11;
      }
    }
    else if ( (unsigned int)purchaseType <= 0x15 && ((1 << purchaseType) & 0x290000) != 0 )
    {
LABEL_8:
      presentAheadLabel = v6->fields.presentAheadLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = &StringLiteral_10483/*"PURCHASE_AFTER_PRESENT_BOX"*/;
      goto LABEL_11;
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
  if ( (byte_4B40D0A & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_20724/*"img_txt_shop"*/, shopEntity);
    this = (ShopBuyItemConfirmMenu_o *)sub_1BDB878(&StringLiteral_20708/*"img_txt_quest"*/, v6);
    byte_4B40D0A = 1;
  }
  if ( !shopEntity )
    sub_1BDBAD4(this, shopEntity);
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
      v10 = &StringLiteral_20708/*"img_txt_quest"*/;
      goto LABEL_9;
    case 7:
    case 9:
LABEL_6:
      ShopBuyItemConfirmMenu__SetSpriteActive(this, v5->fields.bandSprite, 1, v3);
      bandSprite = v5->fields.bandSprite;
      v10 = &StringLiteral_20724/*"img_txt_shop"*/;
LABEL_9:
      ShopBuyItemConfirmMenu__SetSpriteName(v7, bandSprite, (System_String_o *)*v10, v8);
      break;
    default:
LABEL_7:
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

  if ( (byte_4B40D10 & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu_o *)sub_1BDB878(&AtlasManager_TypeInfo, itemIcon);
    byte_4B40D10 = 1;
  }
  if ( !commonConsumeEntity )
    goto LABEL_14;
  if ( CommonConsumeEntity__get_IsItem(commonConsumeEntity, 0LL) )
  {
    this = (ShopBuyItemConfirmMenu_o *)CommonConsumeEntity__GetItemEntity(commonConsumeEntity, 0LL);
    if ( this )
    {
      if ( itemIcon )
      {
        ItemIconComponent__SetItem(itemIcon, (int32_t)this->fields.basePanelList, -1, 1, 0LL);
        return;
      }
LABEL_14:
      sub_1BDBAD4(this, itemIcon);
    }
  }
  else
  {
    this = (ShopBuyItemConfirmMenu_o *)CommonConsumeEntity__get_IsAp(commonConsumeEntity, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !itemIcon )
        goto LABEL_14;
      iconSprite = itemIcon->fields.iconSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
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
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x25
  Il2CppObject *Name; // x0
  System_String_o *shopEntity; // x0
  __int64 v23; // x1
  ShopBuyItemConfirmMenu_c *v24; // x0
  int32_t PriceIcon; // w0
  int32_t v26; // w22
  int32_t v27; // w23
  ShopBuyItemConfirmMenu_o *v28; // x0
  const MethodInfo *v29; // x3
  int32_t num; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B40D0F & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, priceDataLabel);
    sub_1BDB878(&LocalizationManager_TypeInfo, v11);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v12);
    sub_1BDB878(&ShopBuyItemConfirmMenu_TypeInfo, v13);
    sub_1BDB878(&StringLiteral_5651/*"EVENT_ITEM_NEED_INFO"*/, v14);
    byte_4B40D0F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)priceDataLabel, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)priceIconLabel, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)itemIcon, 0LL, 0LL);
      if ( commonConsumeEnt && !v15 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5651/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
        num = commonConsumeEnt->fields.num;
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v17, v18, v19);
        Name = (Il2CppObject *)CommonConsumeEntity__GetName(commonConsumeEnt, 0LL);
        shopEntity = System_String__Format_62613552(v16, v20, Name, 0LL);
        if ( !priceDataLabel )
          goto LABEL_22;
        UILabel__set_text(priceDataLabel, shopEntity, 0LL);
        v24 = ShopBuyItemConfirmMenu_TypeInfo;
        if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
          v24 = ShopBuyItemConfirmMenu_TypeInfo;
        }
        UILabel__SetCondensedScale(priceDataLabel, v24->static_fields->PRICE_DATA_LABEL_MAX_WIDTH, 0, 0LL);
        shopEntity = (System_String_o *)this->fields.shopEntity;
        if ( !shopEntity
          || (PriceIcon = ShopEntity__GetPriceIcon((ShopEntity_o *)shopEntity, 0LL),
              v26 = commonConsumeEnt->fields.num,
              v27 = PriceIcon,
              shopEntity = (System_String_o *)CommonConsumeEntity__GetUserHasNum(commonConsumeEnt, 0LL),
              !priceIconLabel) )
        {
LABEL_22:
          sub_1BDBAD4(shopEntity, v23);
        }
        UIIconLabel__SetPurchaseDecision(priceIconLabel, v27, v26, (int32_t)shopEntity, 0LL);
        ShopBuyItemConfirmMenu__SetCommonConsumeIcon(v28, itemIcon, commonConsumeEnt, v29);
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
  if ( (byte_4B40D11 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, shopEntity);
    sub_1BDB878(&EventRewardRootComponent_TypeInfo, v8);
    sub_1BDB878(&ShopBuyItemConfirmMenu_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_16088/*"_"*/, v10);
    this = (ShopBuyItemConfirmMenu_o *)sub_1BDB878(&StringLiteral_17629/*"btn_txt_trade"*/, v11);
    byte_4B40D11 = 1;
  }
  if ( !shopEntity )
    goto LABEL_17;
  if ( shopEntity->fields.payType == 6 )
  {
    if ( !buttonSpriteId )
      goto LABEL_11;
    deceideBtnSprite = v7->fields.deceideBtnSprite;
    v13 = ShopBuyItemConfirmMenu_TypeInfo;
    if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
      v13 = ShopBuyItemConfirmMenu_TypeInfo;
    }
    VALENTINE_BTN_NAME = v13->static_fields->VALENTINE_BTN_NAME;
    v15 = System_Int32__ToString((int)shopEntity + 24, 0LL);
    v16 = System_Int32__ToString((int32_t)&v19, 0LL);
    v17 = System_String__Concat_62612512(VALENTINE_BTN_NAME, v15, (System_String_o *)StringLiteral_16088/*"_"*/, v16, 0LL);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    if ( !EventRewardRootComponent__setRewardInfoImg(deceideBtnSprite, v17, 0LL) )
    {
LABEL_11:
      v18 = v7->fields.deceideBtnSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCommon(v18, 0LL);
      this = (ShopBuyItemConfirmMenu_o *)v7->fields.deceideBtnSprite;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17629/*"btn_txt_trade"*/, 0LL);
        this = (ShopBuyItemConfirmMenu_o *)v7->fields.deceideBtnSprite;
        if ( this )
        {
          ((void (__fastcall *)(ShopBuyItemConfirmMenu_o *, const char *))this->klass[2]._1.gc_desc)(
            this,
            this->klass[2]._1.name);
          return;
        }
      }
LABEL_17:
      sub_1BDBAD4(this, shopEntity);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__SetDefaultButton(
        ShopBuyItemConfirmMenu_o *this,
        bool isCan,
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
  UnityEngine_Object_o *shopResetButton; // x21
  __int64 v15; // x1
  void *Master_object; // x0
  const MethodInfo *v17; // x3
  int32_t shopState; // w8
  int32_t v19; // w21
  struct ShopEntity_o *shopEntity; // x8
  Il2CppObject *v21; // x22
  struct ShopEntity_o *v22; // x8
  int32_t resetLimitNum; // w8
  Il2CppObject *v24; // x22
  unsigned int v25; // w21
  UISprite_o *exclusiveDecideButtonImg; // x1
  ShopBuyItemConfirmMenu_o *v27; // x0
  const MethodInfo *v28; // x3
  UISprite_o *v29; // x21
  ShopBuyItemConfirmMenu_o *v30; // x0
  const MethodInfo *v31; // x3
  UISprite_o *shopResetButtonSprite; // x22
  __int64 v33; // x1
  ShopResetEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B40D23 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, isCan);
    sub_1BDB878(&Method_DataManager_GetMaster_ItemMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMaster_ShopResetMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMaster_UserItemMaster___, v7);
    sub_1BDB878(&Method_DataManager_GetMaster_UserShopMaster___, v8);
    sub_1BDB878(&DataManager_TypeInfo, v9);
    sub_1BDB878(&NetworkManager_TypeInfo, v10);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v11);
    sub_1BDB878(&StringLiteral_17623/*"btn_txt_stock_reset"*/, v12);
    sub_1BDB878(&StringLiteral_20358/*"img_btn_text_reset"*/, v13);
    byte_4B40D23 = 1;
  }
  entity = 0LL;
  shopResetButton = (UnityEngine_Object_o *)this->fields.shopResetButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shopResetButton, 0LL, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !Master_object )
      goto LABEL_71;
    shopState = this->fields.shopState;
    if ( shopState == 18 )
    {
      if ( !this->fields.shopEntity )
        goto LABEL_71;
      v19 = *((_DWORD *)Master_object + 25);
      Master_object = (void *)ShopEntity__IsSoldOut(this->fields.shopEntity, 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        Master_object = this->fields.shopEntity;
        if ( !Master_object )
          goto LABEL_71;
        Master_object = (void *)ShopEntity__GetIsNotHavingShopItemReceived((ShopEntity_o *)Master_object, 0LL);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ShopResetMaster___);
          shopEntity = this->fields.shopEntity;
          if ( !shopEntity || !Master_object )
            goto LABEL_71;
          Master_object = (void *)ShopResetMaster__TryGetEntity(
                                    (ShopResetMaster_o *)Master_object,
                                    &entity,
                                    shopEntity->fields.baseShopId,
                                    v19,
                                    0LL);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            Master_object = this->fields.decideButton;
            if ( !Master_object )
              goto LABEL_71;
            Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
            if ( !Master_object )
              goto LABEL_71;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
            Master_object = this->fields.shopResetButton;
            if ( !Master_object )
              goto LABEL_71;
            Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
            if ( !Master_object )
              goto LABEL_71;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v21 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserShopMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4B3ED56 )
            {
              sub_1BDB878(&NetworkManager_TypeInfo, v15);
              byte_4B3ED56 = 1;
            }
            Master_object = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Master_object = NetworkManager_TypeInfo;
            }
            v22 = this->fields.shopEntity;
            if ( !v22 )
              goto LABEL_71;
            if ( !v21 )
              goto LABEL_71;
            Master_object = UserShopMaster__GetEntityDefinitely(
                              (UserShopMaster_o *)v21,
                              *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
                              v22->fields.baseShopId,
                              0LL);
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
              v24 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserItemMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4B3ED56 )
              {
                sub_1BDB878(&NetworkManager_TypeInfo, v15);
                byte_4B3ED56 = 1;
              }
              Master_object = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                Master_object = NetworkManager_TypeInfo;
              }
              if ( !v24 )
                goto LABEL_71;
              Master_object = UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)v24,
                                *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
                                v19,
                                0LL);
              if ( !Master_object )
                goto LABEL_71;
              if ( *((int *)Master_object + 7) <= 0 )
                v25 = 3;
              else
                v25 = 0;
              goto LABEL_62;
            }
LABEL_61:
            v25 = 3;
LABEL_62:
            shopResetButtonSprite = this->fields.shopResetButtonSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetDownloadCommonSprite(shopResetButtonSprite, (System_String_o *)StringLiteral_17623/*"btn_txt_stock_reset"*/, 0LL);
            Master_object = this->fields.shopResetButton;
            if ( Master_object )
            {
              (*(void (__fastcall **)(void *, _QWORD, __int64, _QWORD))(*(_QWORD *)Master_object + 536LL))(
                Master_object,
                v25,
                1LL,
                *(_QWORD *)(*(_QWORD *)Master_object + 544LL));
              goto LABEL_66;
            }
LABEL_71:
            sub_1BDBAD4(Master_object, v15);
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
        v17);
      ShopBuyItemConfirmMenu__SetSpriteActive(v27, this->fields.decideButtonImg, 0, v28);
      v29 = this->fields.exclusiveDecideButtonImg;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetDownloadCommonSprite(v29, (System_String_o *)StringLiteral_20358/*"img_btn_text_reset"*/, 0LL);
    }
    else
    {
      ShopBuyItemConfirmMenu__SetSpriteActive(
        (ShopBuyItemConfirmMenu_o *)Master_object,
        exclusiveDecideButtonImg,
        0,
        v17);
      ShopBuyItemConfirmMenu__SetSpriteActive(v30, this->fields.decideButtonImg, 1, v31);
    }
    Master_object = this->fields.decideButton;
    if ( !Master_object )
      goto LABEL_71;
    Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
    if ( !Master_object )
      goto LABEL_71;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
    Master_object = this->fields.shopResetButton;
    if ( !Master_object )
      goto LABEL_71;
    Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
    if ( !Master_object )
      goto LABEL_71;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    goto LABEL_61;
  }
LABEL_66:
  Master_object = this->fields.decideButton;
  if ( !Master_object )
    goto LABEL_71;
  if ( isCan )
    v33 = 0LL;
  else
    v33 = 3LL;
  (*(void (__fastcall **)(void *, __int64, __int64, _QWORD))(*(_QWORD *)Master_object + 536LL))(
    Master_object,
    v33,
    1LL,
    *(_QWORD *)(*(_QWORD *)Master_object + 544LL));
}


void __fastcall ShopBuyItemConfirmMenu__SetExtensionText(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isNotHavingShopItemReceived,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v6; // x19
  __int64 v7; // x1
  bool v8; // w8
  UILabel_o *extensionInfoLabel; // x21
  ShopBuyItemConfirmMenu_o *v10; // x0
  const MethodInfo *v11; // x3

  v6 = this;
  if ( (byte_4B40D0D & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, shopEntity);
    this = (ShopBuyItemConfirmMenu_o *)sub_1BDB878(&StringLiteral_9307/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/, v7);
    byte_4B40D0D = 1;
  }
  if ( !shopEntity )
    sub_1BDBAD4(this, shopEntity);
  if ( shopEntity->fields.payType != 6 )
    goto LABEL_10;
  this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetItemCount(shopEntity, 0LL);
  v8 = (int)this < 2 && isNotHavingShopItemReceived;
  if ( (int)this <= 1 && isNotHavingShopItemReceived )
  {
    extensionInfoLabel = v6->fields.extensionInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9307/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/, 0LL);
    ShopBuyItemConfirmMenu__SetLabelText(v10, extensionInfoLabel, (System_String_o *)v10, v11);
LABEL_10:
    v8 = isNotHavingShopItemReceived;
  }
  ShopBuyItemConfirmMenu__SetLabelActive(this, v6->fields.extensionInfoLabel, v8, method);
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
  if ( (byte_4B40D01 & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu_o *)sub_1BDB878(&StringLiteral_9273/*"NONE"*/, shopEntity);
    byte_4B40D01 = 1;
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
    sub_1BDBAD4(this, shopEntity);
  }
  if ( purchaseType == 1 || purchaseType == 4 )
    goto LABEL_18;
LABEL_16:
  if ( !System_String__IsNullOrEmpty(shopEntity->fields.infoMessage, 0LL)
    && System_String__op_Inequality(shopEntity->fields.infoMessage, (System_String_o *)StringLiteral_9273/*"NONE"*/, 0LL) )
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
  const MethodInfo *v3; // x3

  this->fields.state = 2;
  this->fields.onDecide = onDecide;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.onDecide, (int32_t)onDecide, (int32_t)method, v3);
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
  __int64 v12; // x1
  ItemIconComponent_o *itemIcon; // x21
  int32_t purchaseType; // w22
  Il2CppObject *MasterData_object; // x21
  UnityEngine_Object_o *v16; // x20
  UnityEngine_GameObject_o *v17; // x19
  ServantEntity_o *v18; // [xsp+0h] [xbp-40h] BYREF
  int32_t imageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B40D02 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, shopEntity);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v7);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B40D02 = 1;
  }
  v18 = 0LL;
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.chocolateSprite;
    if ( !gameObject )
      goto LABEL_32;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  if ( isInPreparation )
  {
    if ( !shopEntity )
      goto LABEL_32;
    if ( ShopEntity__checkFlag(shopEntity, 2, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( gameObject )
      {
        ItemIconComponent__SetItemImage((ItemIconComponent_o *)gameObject, 8007, 0LL);
        return;
      }
LABEL_32:
      sub_1BDBAD4(gameObject, v12);
    }
    imageId = 0;
  }
  else
  {
    imageId = 0;
    if ( !shopEntity )
      goto LABEL_32;
  }
  gameObject = (UnityEngine_Component_o *)ShopEntity__CheckEquipItem(shopEntity, &imageId, 0LL);
  itemIcon = this->fields.itemIcon;
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !itemIcon )
      goto LABEL_32;
    ItemIconComponent__SetEquipItemImage(this->fields.itemIcon, imageId, 0LL);
  }
  else
  {
    purchaseType = shopEntity->fields.purchaseType;
    gameObject = (UnityEngine_Component_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
    if ( !itemIcon )
      goto LABEL_32;
    ItemIconComponent__SetPurchase(itemIcon, purchaseType, (int32_t)gameObject, shopEntity->fields.imageId, 0LL);
    gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_32;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
    gameObject = (UnityEngine_Component_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
    if ( !MasterData_object )
      goto LABEL_32;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
           (Il2CppObject **)&v18,
           (int32_t)gameObject,
           (const MethodInfo_32E1E88 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      v16 = (UnityEngine_Object_o *)this->fields.chocolateSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.chocolateSprite;
        if ( !gameObject )
          goto LABEL_32;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( !v18 )
          goto LABEL_32;
        v17 = (UnityEngine_GameObject_o *)gameObject;
        gameObject = (UnityEngine_Component_o *)ServantEntity__get_IsChocolateSvtEquip(v18, 0LL);
        if ( !v17 )
          goto LABEL_32;
        UnityEngine_GameObject__SetActive(v17, (unsigned __int8)gameObject & 1, 0LL);
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

  if ( (byte_4B40CFD & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, label);
    byte_4B40CFD = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_1BDBAD4(gameObject, v7);
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

  if ( (byte_4B40CFE & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, label);
    byte_4B40CFE = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1BDBAD4(v6, v7);
    WrapControlText__textAdjust(label, text, label->fields.mFontSize, 0, 0LL);
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
  System_String_o *v19; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *message; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  message = preparationMessage;
  if ( (byte_4B40D07 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, shopEntity);
    sub_1BDB878(&StringLiteral_15817/*"[000000]"*/, v9);
    this = (ShopBuyItemConfirmMenu_o *)sub_1BDB878(&StringLiteral_15818/*"[000000]？"*/, v10);
    byte_4B40D07 = 1;
  }
  v19 = 0LL;
  if ( !shopEntity )
    sub_1BDBAD4(this, shopEntity);
  if ( !isInPreparation )
  {
    if ( shopEntity->fields.purchaseType != 14
      || !ShopEntity__IsSoldOut(shopEntity, 0LL)
      || !ShopEntity__TryGetClosedMessage(shopEntity, &message, &v19, 0LL) )
    {
      messageLabel = v8->fields.messageLabel;
      detail = shopEntity->fields.detail;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v16 = LocalizationManager__ReplaceCommonTag(detail, 0, 0LL);
      v18 = (System_String_o *)StringLiteral_15817/*"[000000]"*/;
      goto LABEL_16;
    }
    messageLabel = v8->fields.messageLabel;
    v16 = message;
LABEL_15:
    v18 = (System_String_o *)StringLiteral_15817/*"[000000]"*/;
LABEL_16:
    v11 = System_String__Concat_62572260(v18, v16, 0LL);
    v14 = messageLabel;
    v15 = v11;
    goto LABEL_17;
  }
  v11 = (System_String_o *)ShopEntity__checkFlag(shopEntity, 8, 0LL);
  messageLabel = v8->fields.messageLabel;
  if ( ((unsigned __int8)v11 & 1) == 0 )
  {
    v16 = preparationMessage;
    goto LABEL_15;
  }
  v14 = messageLabel;
  v15 = (System_String_o *)StringLiteral_15818/*"[000000]？"*/;
LABEL_17:
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
  __int64 v13; // x1
  System_String_o *v14; // x1
  struct UICrossNarrowLabel_o *nameTextLabel; // x19

  if ( (byte_4B40D03 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, shopEntity);
    sub_1BDB878(&StringLiteral_25666/*"？"*/, v11);
    byte_4B40D03 = 1;
  }
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(preparationItemName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    nameTextLabel = this->fields.nameTextLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__ReplaceCommonTag(preparationItemName, 0, 0LL);
    if ( nameTextLabel )
    {
      v14 = IsNullOrEmpty;
      IsNullOrEmpty = (System_String_o *)nameTextLabel;
      goto LABEL_15;
    }
LABEL_16:
    sub_1BDBAD4(IsNullOrEmpty, v13);
  }
  if ( !isInPreparation )
    goto LABEL_13;
  if ( !shopEntity )
    goto LABEL_16;
  if ( !ShopEntity__checkFlag(shopEntity, 4, 0LL) )
  {
LABEL_13:
    IsNullOrEmpty = (System_String_o *)this->fields.nameTextLabel;
    if ( IsNullOrEmpty )
    {
      v14 = replacedName;
      goto LABEL_15;
    }
    goto LABEL_16;
  }
  IsNullOrEmpty = (System_String_o *)this->fields.nameTextLabel;
  if ( !IsNullOrEmpty )
    goto LABEL_16;
  v14 = (System_String_o *)StringLiteral_25666/*"？"*/;
LABEL_15:
  UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)IsNullOrEmpty, v14, 0LL);
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
  ShopBuyItemConfirmMenu_o *v11; // x0
  const MethodInfo *v12; // x3
  ShopBuyItemConfirmMenu_o *v13; // x0
  const MethodInfo *v14; // x3
  UILabel_o *numTextLabel; // x19
  int32_t HoldCount; // w0
  ShopBuyItemConfirmMenu_o *NumberFormat; // x0
  const MethodInfo *v18; // x3
  ShopBuyItemConfirmMenu_o *v19; // x0
  const MethodInfo *v20; // x3

  v6 = this;
  if ( (byte_4B40D0C & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, shopEntity);
    this = (ShopBuyItemConfirmMenu_o *)sub_1BDB878(&StringLiteral_12044/*"SHOP_BUY_ITEM_HOLD"*/, v7);
    byte_4B40D0C = 1;
  }
  if ( !isInPreparation )
  {
    if ( shopEntity )
      goto LABEL_8;
LABEL_13:
    sub_1BDBAD4(this, shopEntity);
  }
  if ( !shopEntity )
    goto LABEL_13;
  v8 = ShopEntity__checkFlag(shopEntity, 2, 0LL);
  if ( v8 )
    goto LABEL_12;
LABEL_8:
  v8 = ShopEntity__checkHoldDisp(shopEntity, 0LL);
  if ( !v8 )
  {
LABEL_12:
    ShopBuyItemConfirmMenu__SetLabelActive((ShopBuyItemConfirmMenu_o *)v8, v6->fields.numTitleLabel, 0, v9);
    ShopBuyItemConfirmMenu__SetLabelActive(v19, v6->fields.numTextLabel, 0, v20);
    return;
  }
  ShopBuyItemConfirmMenu__SetLabelActive((ShopBuyItemConfirmMenu_o *)v8, v6->fields.numTitleLabel, 1, v9);
  numTitleLabel = v6->fields.numTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12044/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText(v11, numTitleLabel, (System_String_o *)v11, v12);
  ShopBuyItemConfirmMenu__SetLabelActive(v13, v6->fields.numTextLabel, 1, v14);
  numTextLabel = v6->fields.numTextLabel;
  HoldCount = ShopEntity__getHoldCount(shopEntity, 0LL);
  NumberFormat = (ShopBuyItemConfirmMenu_o *)LocalizationManager__GetNumberFormat(HoldCount, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText(NumberFormat, numTextLabel, (System_String_o *)NumberFormat, v18);
}


void __fastcall ShopBuyItemConfirmMenu__SetPossessionInfo(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
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
  Il2CppObject *TargetId; // x0
  __int64 v18; // x1
  unsigned int purchaseType; // w8
  int32_t v20; // w21
  Il2CppObject *Master_object; // x21
  void *monitor; // x21
  Il2CppClass *klass; // x22
  UIGrid_o *v24; // x22
  UILabel_o *v25; // x23
  UILabel_o *v26; // x24
  UILabel_o *v27; // x25
  UISprite_o *v28; // x26
  UISprite_o *v29; // x27
  UISprite_o *v30; // x20
  bool IsPossessionInfoDisp; // w19
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4B40D24 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ServantMaster___, shopEntity);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BDB878(&ShopBuyItemUtility_TypeInfo, v9);
    byte_4B40D24 = 1;
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
              TargetId = (Il2CppObject *)UnityEngine_Object__op_Equality(possessionBGSprite, 0LL, 0LL);
              if ( ((unsigned __int8)TargetId & 1) == 0 )
              {
                if ( !shopEntity )
                  goto LABEL_42;
                purchaseType = shopEntity->fields.purchaseType;
                v20 = 0;
                if ( purchaseType <= 0x15 && ((1 << purchaseType) & 0x200110) != 0 )
                {
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantMaster___);
                  TargetId = (Il2CppObject *)ShopEntity__get_TargetId(shopEntity, 0LL);
                  if ( !Master_object )
                    goto LABEL_42;
                  if ( DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                         &entity,
                         (int32_t)TargetId,
                         (const MethodInfo_32E1E88 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
                  {
                    TargetId = entity;
                    if ( !entity )
                      goto LABEL_42;
                    TargetId = (Il2CppObject *)ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL);
                    if ( ((unsigned __int8)TargetId & 1) != 0 )
                    {
                      if ( entity )
                      {
                        klass = entity[1].klass;
                        monitor = entity[1].monitor;
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        *(_QWORD *)&v33.fields.currentCryptoKey = klass;
                        *(_QWORD *)&v33.fields.fakeValue = monitor;
                        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v33, 0LL);
                        goto LABEL_38;
                      }
LABEL_42:
                      sub_1BDBAD4(TargetId, v18);
                    }
                  }
                  v20 = 0;
                }
LABEL_38:
                v24 = this->fields.possessionGrid;
                v25 = this->fields.possessionNumLabel;
                v26 = this->fields.coinNumLabel;
                v27 = this->fields.treasureDeviceLevelLabel;
                v28 = this->fields.summonedSprite;
                v29 = this->fields.coinIcon;
                v30 = this->fields.possessionBGSprite;
                IsPossessionInfoDisp = ShopEntity__IsPossessionInfoDisp(shopEntity, 0LL);
                if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
                ShopBuyItemUtility__SetPossessionInfo(v20, v24, v25, v26, v29, v27, v28, v30, IsPossessionInfoDisp, 0LL);
              }
            }
          }
        }
      }
    }
  }
}


void __fastcall ShopBuyItemConfirmMenu__SetPriceDataText(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        bool isNotHavingShopItemReceived,
        const MethodInfo *method)
{
  ShopEntity_o *v7; // x20
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
  __int64 eventItemIcon; // x0
  const MethodInfo *v26; // x1
  System_Int32_array *UserItemCounts; // x21
  const MethodInfo *v28; // x1
  UIIconLabel_o *v29; // x2
  const MethodInfo *v30; // x5
  const MethodInfo *v31; // x1
  unsigned __int64 i; // x23
  struct System_Int32_array *v33; // x8
  __int64 v34; // x24
  struct UILabel_array *priceDataLabels; // x8
  struct UIIconLabel_array *priceIconLabels; // x8
  struct UILabel_array *v37; // x8
  struct ItemIconComponent_array *eventItemIcons; // x8
  struct UILabel_array *v39; // x8
  UILabel_o *v40; // x25
  System_String_o *v41; // x26
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  struct UIIconLabel_array *v45; // x8
  UIIconLabel_o *v46; // x25
  int32_t v47; // w26
  struct UILabel_o *priceDataLabel; // x22
  __int64 *v49; // x8
  __int64 v50; // x24
  UILabel_o *v51; // x21
  UIIconLabel_o *priceIconLabel; // x19
  int32_t PriceIcon; // w21
  System_String_o *v54; // x1
  UILabel_o *v55; // x0
  struct System_Int32_array *v56; // x8
  Il2CppObject *v57; // x0
  UILabel_o *v58; // x23
  Il2CppObject *v59; // x22
  __int64 *v60; // x8
  struct System_Int32_array *v61; // x8
  Il2CppObject *v62; // x0
  UIIconLabel_o *v63; // x23
  int32_t v64; // w24
  UILabel_o *v65; // x23
  UIIconLabel_o *v66; // x23
  int32_t v67; // w24
  int32_t Price; // w21
  double v69; // d0
  int v70; // w21
  struct System_Int32_array *v71; // x8
  UIIconLabel_o *v72; // x19
  int32_t v73; // w22
  UILabel_o *priceFreeDataLabel; // x19
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  __int64 v76; // x9
  EventRewardRootComponent_c *v77; // x0
  int32_t *p_AnotherPayUsedItemId_k__BackingField; // x8
  _BOOL8 IsSetStrikethrough; // x0
  const MethodInfo *v80; // x3
  __int64 v81; // x8
  __int64 v82; // x8
  __int64 v83; // x9
  __int64 v84; // x10
  __int64 j; // x20
  struct UILabel_array *v86; // x11
  unsigned __int64 max_length; // x12
  unsigned __int64 v88; // x10
  struct UIIconLabel_array *v89; // x11
  unsigned __int64 v90; // x12
  struct ItemIconComponent_array *v91; // x11
  unsigned __int64 v92; // x12
  ItemIconComponent_o *v93; // x3
  __int64 v94; // x10
  struct System_Int32_array *itemIds; // x8
  int32_t v96; // w23
  Il2CppObject *Entity; // x23
  UILabel_o *v98; // x22
  System_String_o *v99; // x24
  __int64 v100; // x2
  __int64 v101; // x3
  __int64 v102; // x4
  UILabel_o *v103; // x22
  UIIconLabel_o *v104; // x22
  int32_t v105; // w24
  int32_t v106; // [xsp+8h] [xbp-68h] BYREF
  int32_t Prices; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v108; // 0:s0.4,4:s1.4,8:s2.4

  v7 = shopEntity;
  if ( (byte_4B40D0E & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity);
    sub_1BDB878(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_1BDB878(&EventRewardRootComponent_TypeInfo, v10);
    sub_1BDB878(&int_TypeInfo, v11);
    sub_1BDB878(&LocalizationManager_TypeInfo, v12);
    sub_1BDB878(&System_Math_TypeInfo, v13);
    sub_1BDB878(&ShopBuyItemConfirmMenu_TypeInfo, v14);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BDB878(&StringLiteral_12328/*"STONE_FRAGMENTS_NEED_INFO"*/, v16);
    sub_1BDB878(&StringLiteral_1972/*"ANONYMOUS_NEED_INFO"*/, v17);
    sub_1BDB878(&StringLiteral_12334/*"STONE_NEED_INFO"*/, v18);
    sub_1BDB878(&StringLiteral_10811/*"QP_NAME"*/, v19);
    sub_1BDB878(&StringLiteral_10955/*"RARE_PRI_NEED_INFO"*/, v20);
    sub_1BDB878(&StringLiteral_1779/*"?"*/, v21);
    sub_1BDB878(&StringLiteral_5651/*"EVENT_ITEM_NEED_INFO"*/, v22);
    sub_1BDB878(&StringLiteral_8527/*"MANA_NEED_INFO"*/, v23);
    sub_1BDB878(&StringLiteral_12073/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, v24);
    byte_4B40D0E = 1;
  }
  eventItemIcon = (__int64)this->fields.eventItemIcon;
  if ( !eventItemIcon )
    goto LABEL_189;
  ItemIconComponent__Clear((ItemIconComponent_o *)eventItemIcon, 0LL);
  UserItemCounts = ShopBuyItemConfirmMenu__GetUserItemCounts(this, v26);
  eventItemIcon = (__int64)ShopBuyItemConfirmMenu__GetUserItemCountsLong(
                             (ShopBuyItemConfirmMenu_o *)UserItemCounts,
                             v28);
  if ( !v7 )
    goto LABEL_189;
  switch ( v7->fields.payType )
  {
    case 1:
      priceDataLabel = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v49 = &StringLiteral_12334/*"STONE_NEED_INFO"*/;
      goto LABEL_58;
    case 2:
      v50 = eventItemIcon;
      v51 = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10811/*"QP_NAME"*/, 0LL);
      if ( !v51 )
        goto LABEL_189;
      UILabel__set_text(v51, (System_String_o *)eventItemIcon, 0LL);
      priceIconLabel = this->fields.priceIconLabel;
      PriceIcon = ShopEntity__GetPriceIcon(v7, 0LL);
      eventItemIcon = ShopEntity__GetPrice(v7, 0LL);
      if ( !v50 )
        goto LABEL_189;
      if ( !*(_DWORD *)(v50 + 24) )
        goto LABEL_190;
      if ( !priceIconLabel )
        goto LABEL_189;
      UIIconLabel__SetPurchaseDecisionLong(priceIconLabel, PriceIcon, eventItemIcon, *(_QWORD *)(v50 + 32), 0LL);
      return;
    case 4:
      priceDataLabel = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v49 = &StringLiteral_8527/*"MANA_NEED_INFO"*/;
LABEL_58:
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)*v49, 0LL);
      if ( !priceDataLabel )
        goto LABEL_189;
      v54 = (System_String_o *)eventItemIcon;
      v55 = priceDataLabel;
      goto LABEL_100;
    case 6:
    case 0xB:
      if ( ShopEntity__GetItemCount(v7, 0LL) < 2 )
      {
        if ( isNotHavingShopItemReceived )
          return;
        eventItemIcon = ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v31);
        if ( (eventItemIcon & 1) != 0 )
        {
          if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          if ( !byte_4B3F3B3 )
          {
            sub_1BDB878(&EventRewardRootComponent_TypeInfo, shopEntity);
            byte_4B3F3B3 = 1;
          }
          v77 = EventRewardRootComponent_TypeInfo;
          if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            v77 = EventRewardRootComponent_TypeInfo;
          }
          p_AnotherPayUsedItemId_k__BackingField = &v77->static_fields->_AnotherPayUsedItemId_k__BackingField;
        }
        else
        {
          itemIds = v7->fields.itemIds;
          if ( !itemIds )
            goto LABEL_189;
          if ( !itemIds->max_length )
            goto LABEL_190;
          p_AnotherPayUsedItemId_k__BackingField = &itemIds->m_Items[1];
        }
        v96 = *p_AnotherPayUsedItemId_k__BackingField;
        eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !eventItemIcon )
          goto LABEL_189;
        eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)eventItemIcon,
                                   (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !eventItemIcon )
          goto LABEL_189;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
                   v96,
                   (const MethodInfo_32E1E3C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( isInPreparation )
        {
          if ( ShopEntity__checkFlag(v7, 64, 0LL) )
          {
            eventItemIcon = (__int64)this->fields.priceDataLabel;
            if ( eventItemIcon )
            {
              UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1779/*"?"*/, 0LL);
              eventItemIcon = (__int64)this->fields.priceIconLabel;
              if ( eventItemIcon )
              {
                UIIconLabel__SetEventQuestion((UIIconLabel_o *)eventItemIcon, 0LL);
                return;
              }
            }
            goto LABEL_189;
          }
          if ( ShopEntity__checkFlag(v7, 32, 0LL) )
          {
            eventItemIcon = (__int64)this->fields.priceDataLabel;
            if ( eventItemIcon )
            {
              UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1779/*"?"*/, 0LL);
              eventItemIcon = (__int64)this->fields.eventItemIcon;
              if ( eventItemIcon )
              {
                ItemIconComponent__SetItemImage((ItemIconComponent_o *)eventItemIcon, 8007, 0LL);
                return;
              }
            }
            goto LABEL_189;
          }
        }
        v98 = this->fields.priceDataLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v99 = LocalizationManager__Get((System_String_o *)StringLiteral_5651/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
        Prices = ShopEntity__GetPrices(v7, 0, 0LL);
        eventItemIcon = j_il2cpp_value_box_0(int_TypeInfo, &Prices, v100, v101, v102);
        if ( !Entity )
          goto LABEL_189;
        eventItemIcon = (__int64)System_String__Format_62613552(
                                   v99,
                                   (Il2CppObject *)eventItemIcon,
                                   (Il2CppObject *)Entity[1].monitor,
                                   0LL);
        if ( !v98 )
          goto LABEL_189;
        UILabel__set_text(v98, (System_String_o *)eventItemIcon, 0LL);
        v103 = this->fields.priceDataLabel;
        eventItemIcon = (__int64)ShopBuyItemConfirmMenu_TypeInfo;
        if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
        if ( !v103 )
          goto LABEL_189;
        UILabel__SetCondensedScale(
          v103,
          ShopBuyItemConfirmMenu_TypeInfo->static_fields->PRICE_DATA_LABEL_MAX_WIDTH,
          0,
          0LL);
        v104 = this->fields.priceIconLabel;
        v105 = ShopEntity__GetPriceIcon(v7, 0LL);
        eventItemIcon = ShopEntity__GetPrices(v7, 0, 0LL);
        if ( !UserItemCounts )
          goto LABEL_189;
        if ( UserItemCounts->max_length )
        {
          if ( v104 )
          {
            UIIconLabel__SetPurchaseDecision(v104, v105, eventItemIcon, UserItemCounts->m_Items[1], 0LL);
            eventItemIcon = (__int64)this->fields.eventItemIcon;
            if ( eventItemIcon )
            {
              ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, (int32_t)Entity[2].monitor, -1, 1, 0LL);
              return;
            }
          }
LABEL_189:
          sub_1BDBAD4(eventItemIcon, shopEntity);
        }
LABEL_190:
        sub_1BDBADC(eventItemIcon, shopEntity, v29);
      }
      if ( ShopEntity__GetItemCount(v7, 0LL) >= 1 )
      {
        for ( i = 0LL; (__int64)i < ShopEntity__GetItemCount(v7, 0LL); ++i )
        {
          eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !eventItemIcon )
            goto LABEL_189;
          eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)eventItemIcon,
                                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
          v33 = v7->fields.itemIds;
          if ( !v33 )
            goto LABEL_189;
          if ( i >= v33->max_length )
            goto LABEL_190;
          if ( !eventItemIcon )
            goto LABEL_189;
          eventItemIcon = (__int64)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
                                     v33->m_Items[i + 1],
                                     (const MethodInfo_32E1E3C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          v34 = eventItemIcon;
          if ( !isInPreparation )
            goto LABEL_30;
          eventItemIcon = ShopEntity__checkFlag(v7, 64, 0LL);
          if ( (eventItemIcon & 1) != 0 )
          {
            priceDataLabels = this->fields.priceDataLabels;
            if ( !priceDataLabels )
              goto LABEL_189;
            if ( i >= priceDataLabels->max_length )
              goto LABEL_190;
            eventItemIcon = (__int64)priceDataLabels->m_Items[i];
            if ( !eventItemIcon )
              goto LABEL_189;
            UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1779/*"?"*/, 0LL);
            priceIconLabels = this->fields.priceIconLabels;
            if ( !priceIconLabels )
              goto LABEL_189;
            if ( i >= priceIconLabels->max_length )
              goto LABEL_190;
            eventItemIcon = (__int64)priceIconLabels->m_Items[i];
            if ( !eventItemIcon )
              goto LABEL_189;
            UIIconLabel__SetEventQuestion((UIIconLabel_o *)eventItemIcon, 0LL);
            continue;
          }
          eventItemIcon = ShopEntity__checkFlag(v7, 32, 0LL);
          if ( (eventItemIcon & 1) != 0 )
          {
            v37 = this->fields.priceDataLabels;
            if ( !v37 )
              goto LABEL_189;
            if ( i >= v37->max_length )
              goto LABEL_190;
            eventItemIcon = (__int64)v37->m_Items[i];
            if ( !eventItemIcon )
              goto LABEL_189;
            UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1779/*"?"*/, 0LL);
            eventItemIcons = this->fields.eventItemIcons;
            if ( !eventItemIcons )
              goto LABEL_189;
            if ( i >= eventItemIcons->max_length )
              goto LABEL_190;
            eventItemIcon = (__int64)eventItemIcons->m_Items[i];
            if ( !eventItemIcon )
              goto LABEL_189;
            ItemIconComponent__SetItemImage((ItemIconComponent_o *)eventItemIcon, 8007, 0LL);
          }
          else
          {
LABEL_30:
            v39 = this->fields.priceDataLabels;
            if ( !v39 )
              goto LABEL_189;
            if ( i >= v39->max_length )
              goto LABEL_190;
            v40 = v39->m_Items[i];
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v41 = LocalizationManager__Get((System_String_o *)StringLiteral_5651/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
            v106 = ShopEntity__GetPrices(v7, i, 0LL);
            eventItemIcon = j_il2cpp_value_box_0(int_TypeInfo, &v106, v42, v43, v44);
            if ( !v34 )
              goto LABEL_189;
            eventItemIcon = (__int64)System_String__Format_62613552(
                                       v41,
                                       (Il2CppObject *)eventItemIcon,
                                       *(Il2CppObject **)(v34 + 24),
                                       0LL);
            if ( !v40 )
              goto LABEL_189;
            UILabel__set_text(v40, (System_String_o *)eventItemIcon, 0LL);
            v45 = this->fields.priceIconLabels;
            if ( !v45 )
              goto LABEL_189;
            if ( i >= v45->max_length )
              goto LABEL_190;
            v46 = v45->m_Items[i];
            v47 = ShopEntity__GetPriceIcon(v7, 0LL);
            eventItemIcon = ShopEntity__GetPrices(v7, i, 0LL);
            if ( !UserItemCounts )
              goto LABEL_189;
            if ( i >= UserItemCounts->max_length )
              goto LABEL_190;
            if ( !v46 )
              goto LABEL_189;
            UIIconLabel__SetPurchaseDecision(v46, v47, eventItemIcon, UserItemCounts->m_Items[i + 1], 0LL);
            eventItemIcon = (__int64)this->fields.eventItemIcon;
            if ( !eventItemIcon )
              goto LABEL_189;
            ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, *(_DWORD *)(v34 + 40), -1, 1, 0LL);
          }
        }
      }
      return;
    case 8:
      eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_189;
      eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
      v56 = v7->fields.itemIds;
      if ( !v56 )
        goto LABEL_189;
      if ( !v56->max_length )
        goto LABEL_190;
      if ( !eventItemIcon )
        goto LABEL_189;
      v57 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
              v56->m_Items[1],
              (const MethodInfo_32E1E3C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v58 = this->fields.priceDataLabel;
      v59 = v57;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v60 = &StringLiteral_12328/*"STONE_FRAGMENTS_NEED_INFO"*/;
      goto LABEL_74;
    case 9:
      eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_189;
      eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
      v61 = v7->fields.itemIds;
      if ( !v61 )
        goto LABEL_189;
      if ( !v61->max_length )
        goto LABEL_190;
      if ( !eventItemIcon )
        goto LABEL_189;
      v62 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
              v61->m_Items[1],
              (const MethodInfo_32E1E3C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v58 = this->fields.priceDataLabel;
      v59 = v62;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v60 = &StringLiteral_1972/*"ANONYMOUS_NEED_INFO"*/;
LABEL_74:
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)*v60, 0LL);
      if ( !v58 )
        goto LABEL_189;
      UILabel__set_text(v58, (System_String_o *)eventItemIcon, 0LL);
      v63 = this->fields.priceIconLabel;
      v64 = ShopEntity__GetPriceIcon(v7, 0LL);
      eventItemIcon = ShopEntity__GetPrice(v7, 0LL);
      if ( !UserItemCounts )
        goto LABEL_189;
      if ( !UserItemCounts->max_length )
        goto LABEL_190;
      if ( !v63 )
        goto LABEL_189;
      UIIconLabel__SetPurchaseDecision(v63, v64, eventItemIcon, UserItemCounts->m_Items[1], 0LL);
      if ( !v59 )
        goto LABEL_189;
      eventItemIcon = (__int64)this->fields.eventItemIcon;
      if ( !eventItemIcon )
        goto LABEL_189;
      ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, (int32_t)v59[2].monitor, -1, 1, 0LL);
      return;
    case 0xA:
      v65 = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10955/*"RARE_PRI_NEED_INFO"*/, 0LL);
      if ( !v65 )
        goto LABEL_189;
      UILabel__set_text(v65, (System_String_o *)eventItemIcon, 0LL);
      v66 = this->fields.priceIconLabel;
      v67 = ShopEntity__GetPriceIcon(v7, 0LL);
      eventItemIcon = ShopEntity__GetPrice(v7, 0LL);
      if ( !UserItemCounts )
        goto LABEL_189;
      if ( !UserItemCounts->max_length )
        goto LABEL_190;
      if ( !v66 )
        goto LABEL_189;
      UIIconLabel__SetPurchaseDecision(v66, v67, eventItemIcon, UserItemCounts->m_Items[1], 0LL);
      if ( ShopEntity__GetPrice(v7, 0LL) )
      {
        Price = ShopEntity__GetPrice(v7, 0LL);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v69 = log10((double)Price);
        if ( v69 == INFINITY )
          v70 = -2147483647;
        else
          v70 = (int)v69 + 1;
      }
      else
      {
        v70 = 1;
      }
      IsSetStrikethrough = ShopEntity__IsSetStrikethrough(v7, isInPreparation, 0LL);
      if ( IsSetStrikethrough )
      {
        v81 = 400LL;
        if ( v70 == 1 )
          v81 = 392LL;
        ShopBuyItemConfirmMenu__SetLabelActive(
          (ShopBuyItemConfirmMenu_o *)IsSetStrikethrough,
          *(UILabel_o **)((char *)&this->klass + v81),
          1,
          v80);
      }
      if ( !ShopEntity__IsAfterTheFreeShopReleaseDate(v7, 0LL) || !ShopEntity__IsFulFilledFreeExchangeCondition(v7, 0LL) )
        return;
      eventItemIcon = (__int64)this->fields.freeLabel;
      if ( !eventItemIcon )
        goto LABEL_189;
      eventItemIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventItemIcon, 0LL);
      if ( !eventItemIcon )
        goto LABEL_189;
      eventItemIcon = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)eventItemIcon, 0LL);
      if ( !eventItemIcon )
        goto LABEL_189;
      v82 = 508LL;
      if ( v70 == 1 )
        v82 = 496LL;
      v83 = v70 == 1 ? 492LL : 504LL;
      v84 = v70 == 1 ? 488LL : 500LL;
      v108.fields.z = *(float *)((char *)&this->klass + v82);
      v108.fields.y = *(float *)((char *)&this->klass + v83);
      v108.fields.x = *(float *)((char *)&this->klass + v84);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventItemIcon, v108, 0LL);
      eventItemIcon = (__int64)this->fields.freeLabel;
      if ( !eventItemIcon )
        goto LABEL_189;
      eventItemIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventItemIcon, 0LL);
      if ( !eventItemIcon )
        goto LABEL_189;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventItemIcon, 1, 0LL);
      return;
    case 0xC:
      eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_189;
      eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
      v71 = v7->fields.itemIds;
      if ( !v71 )
        goto LABEL_189;
      if ( !v71->max_length )
        goto LABEL_190;
      if ( !eventItemIcon )
        goto LABEL_189;
      eventItemIcon = (__int64)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
                                 v71->m_Items[1],
                                 (const MethodInfo_32E1E3C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !eventItemIcon || !this->fields.priceDataLabel )
        goto LABEL_189;
      v54 = *(System_String_o **)(eventItemIcon + 24);
      v55 = this->fields.priceDataLabel;
LABEL_100:
      UILabel__set_text(v55, v54, 0LL);
      v72 = this->fields.priceIconLabel;
      v73 = ShopEntity__GetPriceIcon(v7, 0LL);
      eventItemIcon = ShopEntity__GetPrice(v7, 0LL);
      if ( !UserItemCounts )
        goto LABEL_189;
      if ( !UserItemCounts->max_length )
        goto LABEL_190;
      if ( !v72 )
        goto LABEL_189;
      UIIconLabel__SetPurchaseDecision(v72, v73, eventItemIcon, UserItemCounts->m_Items[1], 0LL);
      return;
    case 0xD:
      priceFreeDataLabel = this->fields.priceFreeDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12073/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, 0LL);
      if ( !priceFreeDataLabel )
        goto LABEL_189;
      UILabel__set_text(priceFreeDataLabel, (System_String_o *)eventItemIcon, 0LL);
      return;
    case 0xE:
      commonConsumeEntities = this->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        return;
      v76 = *(_QWORD *)&commonConsumeEntities->max_length;
      if ( (_DWORD)v76 == 1 )
      {
        ShopBuyItemConfirmMenu__SetCommonConsumePriceText(
          this,
          this->fields.priceDataLabel,
          this->fields.priceIconLabel,
          this->fields.eventItemIcon,
          commonConsumeEntities->m_Items[0],
          v30);
        return;
      }
      if ( (int)v76 < 2 )
        return;
      for ( j = 4LL; ; ++j )
      {
        v86 = this->fields.priceDataLabels;
        if ( !v86 )
          break;
        max_length = v86->max_length;
        v88 = j - 4;
        if ( j - 4 >= (int)max_length )
        {
          shopEntity = 0LL;
        }
        else
        {
          if ( v88 >= max_length )
            goto LABEL_190;
          shopEntity = (ShopEntity_o *)*((_QWORD *)&v86->obj.klass + j);
        }
        v89 = this->fields.priceIconLabels;
        if ( !v89 )
          break;
        v90 = v89->max_length;
        if ( (__int64)v88 >= (int)v90 )
        {
          v29 = 0LL;
        }
        else
        {
          if ( v88 >= v90 )
            goto LABEL_190;
          v29 = (UIIconLabel_o *)*((_QWORD *)&v89->obj.klass + j);
        }
        v91 = this->fields.eventItemIcons;
        if ( !v91 )
          break;
        v92 = v91->max_length;
        if ( (__int64)v88 >= (int)v92 )
        {
          v93 = 0LL;
        }
        else
        {
          if ( v88 >= v92 )
            goto LABEL_190;
          v93 = (ItemIconComponent_o *)*((_QWORD *)&v91->obj.klass + j);
        }
        if ( v88 >= (unsigned int)v76 )
          goto LABEL_190;
        ShopBuyItemConfirmMenu__SetCommonConsumePriceText(
          this,
          (UILabel_o *)shopEntity,
          v29,
          v93,
          *((CommonConsumeEntity_o **)&commonConsumeEntities->obj.klass + j),
          v30);
        commonConsumeEntities = this->fields.commonConsumeEntities;
        if ( !commonConsumeEntities )
          goto LABEL_189;
        LODWORD(v76) = commonConsumeEntities->max_length;
        v94 = j - 3;
        if ( v94 >= (int)v76 )
          return;
      }
      goto LABEL_189;
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
    sub_1BDBAD4(v12, v13);
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
        sub_1BDBAD4(this, shopEntity);
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

  if ( (byte_4B40CFF & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, sprite);
    byte_4B40CFF = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_1BDBAD4(gameObject, v7);
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

  if ( (byte_4B40D00 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, sprite);
    byte_4B40D00 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !sprite )
      sub_1BDBAD4(v6, v7);
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
  ShopReleaseMaster_o *Master_object; // x0
  __int64 v19; // x1
  ShopReleaseMaster_o *v20; // x22
  _BOOL4 isExistCondType; // w23
  _BOOL4 v22; // w24
  _BOOL4 v23; // w25
  _BOOL4 v24; // w28
  System_String_o *IsServant; // x0
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x3
  char v28; // w26
  struct UILabel_o *v29; // x19
  __int64 *v30; // x8
  UILabel_o *textOnMask; // x1
  System_String_o *v32; // x2
  __int64 v33; // x2
  struct System_Int32_array *targetIds; // x8
  __int64 *v35; // x8
  UILabel_o *v36; // x19
  unsigned int shopType; // w8
  System_Int32_array *v38; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4B40D0B & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, shopEntity);
    sub_1BDB878(&Method_DataManager_GetMaster_ShopReleaseMaster___, v7);
    sub_1BDB878(&DataManager_TypeInfo, v8);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1BDB878(&LocalizationManager_TypeInfo, v10);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BDB878(&StringLiteral_12066/*"SHOP_CANT_BUY"*/, v12);
    sub_1BDB878(&StringLiteral_12107/*"SHOP_QUEST_OPEN"*/, v13);
    sub_1BDB878(&StringLiteral_12105/*"SHOP_QUEST_ALREADY_CLEARED"*/, v14);
    sub_1BDB878(&StringLiteral_12103/*"SHOP_NOT_RELEASE_SET_ITEM"*/, v15);
    sub_1BDB878(&StringLiteral_1/*""*/, v16);
    sub_1BDB878(&StringLiteral_12012/*"SHOP_ALREADY_GET"*/, v17);
    byte_4B40D0B = 1;
  }
  questId = 0;
  v38 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ShopReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  if ( !shopEntity )
    goto LABEL_67;
  v20 = Master_object;
  if ( !Master_object )
    goto LABEL_67;
  isExistCondType = ShopReleaseMaster__isExistCondType(Master_object, shopEntity->fields.id, 38, 0LL);
  v22 = ShopReleaseMaster__isExistCondType(v20, shopEntity->fields.id, 41, 0LL);
  v23 = ShopReleaseMaster__isExistCondType(v20, shopEntity->fields.id, 40, 0LL);
  v24 = ShopReleaseMaster__isExistCondType(v20, shopEntity->fields.id, 78, 0LL)
     || ShopReleaseMaster__isExistCondType(v20, shopEntity->fields.id, 79, 0LL);
  IsServant = (System_String_o *)ShopReleaseMaster__isExistCondType(v20, shopEntity->fields.id, 108, 0LL);
  v28 = (char)IsServant;
  switch ( shopEntity->fields.purchaseType )
  {
    case 2:
    case 7:
    case 9:
      if ( isInPreparation )
        goto LABEL_12;
      goto LABEL_58;
    case 4:
      Master_object = (ShopReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (ShopReleaseMaster_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Master_object,
                                               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
      targetIds = shopEntity->fields.targetIds;
      if ( !targetIds )
        goto LABEL_67;
      if ( !targetIds->max_length )
        sub_1BDBADC(Master_object, v19, v33);
      if ( !Master_object )
        goto LABEL_67;
      IsServant = (System_String_o *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                       &entity,
                                       targetIds->m_Items[1],
                                       (const MethodInfo_32E1E88 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_58;
      if ( isInPreparation )
      {
        Master_object = (ShopReleaseMaster_o *)entity;
        if ( entity )
        {
          IsServant = (System_String_o *)ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL);
          if ( ((unsigned __int8)IsServant & 1) != 0 && this->fields.shopKind != 6 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v35 = &StringLiteral_12066/*"SHOP_CANT_BUY"*/;
            goto LABEL_64;
          }
          if ( (isExistCondType || v22 || v23 || v24) | v28 & 1 )
          {
            IsServant = (System_String_o *)ShopReleaseMaster__CondClearCheck(v20, shopEntity->fields.id, 40, 0LL);
            if ( ((unsigned __int8)IsServant & 1) == 0 )
            {
              v32 = (System_String_o *)StringLiteral_1/*""*/;
              goto LABEL_66;
            }
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v35 = &StringLiteral_12012/*"SHOP_ALREADY_GET"*/;
LABEL_64:
            IsServant = LocalizationManager__Get((System_String_o *)*v35, 0LL);
            v32 = IsServant;
LABEL_66:
            textOnMask = this->fields.textOnMask;
            goto LABEL_59;
          }
          goto LABEL_58;
        }
LABEL_67:
        sub_1BDBAD4(Master_object, v19);
      }
      shopType = shopEntity->fields.shopType;
      if ( shopType > 0x10 || ((1 << shopType) & 0x1000C) == 0 )
        goto LABEL_58;
      Master_object = (ShopReleaseMaster_o *)entity;
      if ( !entity )
        goto LABEL_67;
      IsServant = (System_String_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_58;
      IsServant = (System_String_o *)ShopBuyItemConfirmMenu__GetIsShowMask(
                                       (ShopBuyItemConfirmMenu_o *)IsServant,
                                       this->fields.shopEntity,
                                       0,
                                       v27);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_58;
      IsServant = (System_String_o *)ShopEntity__IsAnotherItemBuyable(shopEntity, &v38, 0LL);
      if ( ((unsigned __int8)IsServant & 1) != 0 )
        goto LABEL_58;
LABEL_12:
      v29 = this->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = &StringLiteral_12012/*"SHOP_ALREADY_GET"*/;
      goto LABEL_15;
    case 5:
      IsServant = (System_String_o *)ShopBuyItemConfirmMenu__GetIsSetItemEventShop(
                                       (ShopBuyItemConfirmMenu_o *)IsServant,
                                       shopEntity->fields.targetIds,
                                       v26);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_38;
      if ( !isInPreparation )
        goto LABEL_58;
      v29 = this->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = &StringLiteral_12103/*"SHOP_NOT_RELEASE_SET_ITEM"*/;
      goto LABEL_15;
    case 6:
      if ( !isInPreparation )
      {
        if ( ShopEntity__isQuestNotClear(shopEntity, &questId, 0, 0LL) )
        {
          IsServant = (System_String_o *)ShopEntity__isQuestNotClearItemClosedSub(shopEntity, questId, 0, 0LL);
          if ( ((unsigned __int8)IsServant & 1) != 0 )
            goto LABEL_44;
        }
        else
        {
          IsServant = (System_String_o *)ShopEntity__isExpireItemClosed(shopEntity, 0LL);
          if ( ((unsigned __int8)IsServant & 1) != 0 )
          {
            v36 = this->fields.textOnMask;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Master_object = (ShopReleaseMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12107/*"SHOP_QUEST_OPEN"*/, 0LL);
            if ( v36 )
            {
              UILabel__set_text(v36, (System_String_o *)Master_object, 0LL);
              return;
            }
            goto LABEL_67;
          }
        }
LABEL_58:
        textOnMask = this->fields.textOnMask;
        v32 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_59;
      }
      IsServant = (System_String_o *)ShopEntity__isQuestNotClearItemClosed(shopEntity, 0, 0LL);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_58;
LABEL_44:
      v29 = this->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = &StringLiteral_12105/*"SHOP_QUEST_ALREADY_CLEARED"*/;
LABEL_15:
      IsServant = LocalizationManager__Get((System_String_o *)*v30, 0LL);
      textOnMask = v29;
      v32 = IsServant;
LABEL_59:
      ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)IsServant, textOnMask, v32, v27);
      return;
    default:
LABEL_38:
      if ( !isInPreparation )
        goto LABEL_58;
      if ( !((isExistCondType || v22 || v24) | v28 & 1) )
        goto LABEL_58;
      IsServant = (System_String_o *)ShopReleaseMaster__CondClearCheck(v20, shopEntity->fields.id, 1, 0LL);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_58;
      goto LABEL_12;
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
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  UILabel_o *warningLabel; // x23
  struct UILabel_o **p_warningLabel; // x24
  void *gameObject; // x0
  ShopBuyItemConfirmMenu_o *v54; // x0
  const MethodInfo *v55; // x3
  ShopBuyItemConfirmMenu_o *v56; // x0
  const MethodInfo *v57; // x3
  ShopBuyItemConfirmMenu_o *v58; // x0
  const MethodInfo *v59; // x3
  int32_t purchaseType; // w8
  UnityEngine_Object_o *resetWarningLabel; // x23
  _BOOL8 v62; // x0
  const MethodInfo *v63; // x3
  UILabel_o *v64; // x20
  UILabel_o *v65; // x20
  UnityEngine_Component_o *v66; // x0
  float Shop18WarningLabelPosY; // s0
  UILabel_o *v68; // x19
  __int64 *v69; // x8
  const MethodInfo *v70; // x1
  System_Int32_array *UserItemCounts; // x22
  const MethodInfo *v72; // x1
  System_Int64_array *UserItemCountsLong; // x0
  __int64 v74; // x19
  __int64 v75; // x2
  UnityEngine_Object_o *v76; // x21
  UnityEngine_Object_o *shopResetButton; // x21
  ItemEntity_o *EntityByType; // x0
  struct System_String_StaticFields *p_name; // x8
  ShopBuyItemConfirmMenu_o *v80; // x0
  const MethodInfo *v81; // x3
  UILabel_o *v82; // x1
  EventRewardRootComponent_c *v83; // x0
  int32_t *p_AnotherPayUsedItemId_k__BackingField; // x8
  System_Int64_array *v85; // x23
  UILabel_o *v86; // x19
  System_String_o *v87; // x22
  Il2CppObject *v88; // x0
  ShopBuyItemConfirmMenu_o *v89; // x0
  const MethodInfo *v90; // x3
  __int64 *v91; // x8
  UILabel_o *v92; // x20
  __int64 *v93; // x8
  System_String_o *v94; // x21
  struct ShopEntity_o *v95; // x8
  struct System_Int32_array *v96; // x8
  Il2CppObject *Name; // x1
  BalanceConfig_c *v98; // x8
  int v99; // w22
  UILabel_o *v100; // x22
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  __int64 v102; // x9
  CommonConsumeEntity_o *v103; // x19
  int32_t num; // w22
  struct ShopEntity_o *v105; // x8
  struct System_Int32_array *itemIds; // x8
  int32_t v107; // w19
  Il2CppObject *monitor; // x1
  struct System_String_o *v109; // x22
  int v110; // w26
  Il2CppClass **v111; // x8
  CommonConsumeEntity_o *v112; // x23
  int v113; // w28
  Il2CppObject *v114; // x0
  System_String_o *v115; // x0
  int stringLength; // w8
  System_String_o *v117; // x0
  Il2CppObject *v118; // x20
  int32_t v119; // w19
  BalanceConfig_c *v120; // x8
  int32_t v121; // w20
  int32_t PresentBoxMax; // w9
  UILabel_o *v123; // x19
  __int64 *v124; // x8
  Il2CppObject *MasterData_object; // x19
  int32_t Sum; // w0
  BalanceConfig_c *v127; // x8
  int32_t v128; // w19
  int32_t UserItemMax; // w9
  int v130; // w20
  Il2CppObject *Empty; // x21
  int32_t v132; // w22
  int32_t resetLimitNum; // w27
  System_String_o *v134; // x23
  __int64 v135; // x2
  __int64 v136; // x3
  __int64 v137; // x4
  Il2CppObject *v138; // x24
  __int64 v139; // x2
  __int64 v140; // x3
  __int64 v141; // x4
  Il2CppObject *v142; // x0
  System_String_o *v143; // x0
  System_String_o *v144; // x23
  __int64 v145; // x2
  __int64 v146; // x3
  __int64 v147; // x4
  Il2CppObject *v148; // x0
  System_String_o *v149; // x23
  Il2CppObject *Master_object; // x24
  Il2CppObject *v151; // x20
  const MethodInfo *v152; // x3
  System_String_o *v153; // x0
  System_String_o *v154; // x0
  UILabel_o *v155; // x20
  int32_t v156; // [xsp+0h] [xbp-A0h] BYREF
  int32_t limitNum; // [xsp+4h] [xbp-9Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-98h] BYREF
  int32_t recordNum[2]; // [xsp+10h] [xbp-90h] BYREF
  int32_t buyCmdCodeNum[2]; // [xsp+18h] [xbp-88h] BYREF
  __int64 buyServantNum; // [xsp+20h] [xbp-80h] BYREF
  ShopResetEntity_o *v162; // [xsp+28h] [xbp-78h] BYREF
  System_Int32_array *possessionAnotherItemId; // [xsp+30h] [xbp-70h] BYREF
  int32_t questId; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4B40D08 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, shopEntity);
    sub_1BDB878(&Method_DataManager_GetMasterData_ItemMaster___, v9);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserItemMaster___, v10);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v11);
    sub_1BDB878(&Method_DataManager_GetMaster_ItemMaster___, v12);
    sub_1BDB878(&Method_DataManager_GetMaster_ShopResetMaster___, v13);
    sub_1BDB878(&Method_DataManager_GetMaster_UserItemMaster___, v14);
    sub_1BDB878(&Method_DataManager_GetMaster_UserShopMaster___, v15);
    sub_1BDB878(&DataManager_TypeInfo, v16);
    sub_1BDB878(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v17);
    sub_1BDB878(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v18);
    sub_1BDB878(&EventRewardRootComponent_TypeInfo, v19);
    sub_1BDB878(&int_TypeInfo, v20);
    sub_1BDB878(&LocalizationManager_TypeInfo, v21);
    sub_1BDB878(&NetworkManager_TypeInfo, v22);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v23);
    sub_1BDB878(&ShopBuyItemConfirmMenu_TypeInfo, v24);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1BDB878(&string_TypeInfo, v26);
    sub_1BDB878(&StringLiteral_12049/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/, v27);
    sub_1BDB878(&StringLiteral_12041/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/, v28);
    sub_1BDB878(&StringLiteral_12030/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_SHORTAGE"*/, v29);
    sub_1BDB878(&StringLiteral_12050/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/, v30);
    sub_1BDB878(&StringLiteral_12031/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_MESSAGE"*/, v31);
    sub_1BDB878(&StringLiteral_12053/*"SHOP_BUY_RARE_PRI_CONFIRM_WARNING"*/, v32);
    sub_1BDB878(&StringLiteral_12046/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/, v33);
    sub_1BDB878(&StringLiteral_10811/*"QP_NAME"*/, v34);
    sub_1BDB878(&StringLiteral_12037/*"SHOP_BUY_CONFIRM_SOLD_OUT_WARNING"*/, v35);
    sub_1BDB878(&StringLiteral_12026/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/, v36);
    sub_1BDB878(&StringLiteral_10496/*"PURCHASE_SHOP18_WARNING_MSG"*/, v37);
    sub_1BDB878(&StringLiteral_12033/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/, v38);
    sub_1BDB878(&StringLiteral_12028/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, v39);
    sub_1BDB878(&StringLiteral_12034/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, v40);
    sub_1BDB878(&StringLiteral_12035/*"SHOP_BUY_CONFIRM_QUEST_CLAER"*/, v41);
    sub_1BDB878(&StringLiteral_25305/*"{0}、"*/, v42);
    sub_1BDB878(&StringLiteral_12040/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, v43);
    sub_1BDB878(&StringLiteral_12060/*"SHOP_BUY_STONE_FRAGMENTS_CONFIRM_WARNING"*/, v44);
    sub_1BDB878(&StringLiteral_12043/*"SHOP_BUY_ITEM_FULL_WARNING"*/, v45);
    sub_1BDB878(&StringLiteral_12045/*"SHOP_BUY_ITEM_OVER_WARNING"*/, v46);
    sub_1BDB878(&StringLiteral_1/*""*/, v47);
    sub_1BDB878(&StringLiteral_12029/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_LIMIT"*/, v48);
    sub_1BDB878(&StringLiteral_12036/*"SHOP_BUY_CONFIRM_QUEST_HOLD"*/, v49);
    sub_1BDB878(&StringLiteral_12032/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_NO_LIMIT_MESSAGE"*/, v50);
    byte_4B40D08 = 1;
  }
  questId = 0;
  v162 = 0LL;
  possessionAnotherItemId = 0LL;
  *(_QWORD *)buyCmdCodeNum = 0LL;
  buyServantNum = 0LL;
  entity = 0LL;
  *(_QWORD *)recordNum = 0LL;
  p_warningLabel = &this->fields.warningLabel;
  warningLabel = this->fields.warningLabel;
  gameObject = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !warningLabel )
    goto LABEL_263;
  UILabel__set_fontSize(warningLabel, BalanceConfig_TypeInfo->static_fields->DefaultFontSize, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText(v54, this->fields.warningLabel, (System_String_o *)StringLiteral_1/*""*/, v55);
  ShopBuyItemConfirmMenu__SetLabelText(v56, this->fields.resetWarningLabel, (System_String_o *)StringLiteral_1/*""*/, v57);
  ShopBuyItemConfirmMenu__SetLabelActive(v58, this->fields.resetWarningLabel, 0, v59);
  if ( !shopEntity )
    goto LABEL_263;
  purchaseType = shopEntity->fields.purchaseType;
  if ( purchaseType == 23 )
  {
    resetWarningLabel = (UnityEngine_Object_o *)this->fields.resetWarningLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v62 = UnityEngine_Object__op_Inequality(resetWarningLabel, 0LL, 0LL);
    if ( v62 )
    {
      ShopBuyItemConfirmMenu__SetLabelActive((ShopBuyItemConfirmMenu_o *)v62, this->fields.resetWarningLabel, 1, v63);
      v64 = this->fields.resetWarningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10496/*"PURCHASE_SHOP18_WARNING_MSG"*/, 0LL);
      if ( !v64 )
        goto LABEL_263;
      UILabel__set_text(v64, (System_String_o *)gameObject, 0LL);
      v65 = this->fields.resetWarningLabel;
      gameObject = ShopBuyItemConfirmMenu_TypeInfo;
      if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
      if ( !v65 )
        goto LABEL_263;
      UILabel__set_fontSize(v65, ShopBuyItemConfirmMenu_TypeInfo->static_fields->Shop18WarningLabelSize, 0LL);
      v66 = (UnityEngine_Component_o *)this->fields.resetWarningLabel;
      Shop18WarningLabelPosY = ShopBuyItemConfirmMenu_TypeInfo->static_fields->Shop18WarningLabelPosY;
LABEL_23:
      ComponentHelper__SetLocalPositionY(v66, Shop18WarningLabelPosY, 0LL);
      return;
    }
  }
  else if ( purchaseType == 6 && shopEntity->fields.shopType == 3 )
  {
    if ( isInPreparation )
    {
      if ( !ShopEntity__isQuestNotClearItemClosed(shopEntity, 0, 0LL) )
        goto LABEL_33;
LABEL_26:
      v68 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v69 = &StringLiteral_12035/*"SHOP_BUY_CONFIRM_QUEST_CLAER"*/;
      goto LABEL_70;
    }
    if ( ShopEntity__isQuestNotClear(shopEntity, &questId, 0, 0LL)
      && ShopEntity__isQuestNotClearItemClosedSub(shopEntity, questId, 0, 0LL) )
    {
      goto LABEL_26;
    }
    if ( ShopEntity__IsQuestHold(shopEntity, 0LL) )
    {
      v68 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v69 = &StringLiteral_12036/*"SHOP_BUY_CONFIRM_QUEST_HOLD"*/;
      goto LABEL_70;
    }
  }
LABEL_33:
  if ( ShopEntity__IsSoldOut(shopEntity, 0LL)
    && !ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0LL)
    && !ShopEntity__IsAnotherItemBuyable(shopEntity, &possessionAnotherItemId, 0LL) )
  {
    v76 = (UnityEngine_Object_o *)this->fields.resetWarningLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v76, 0LL, 0LL) )
      goto LABEL_67;
    shopResetButton = (UnityEngine_Object_o *)this->fields.shopResetButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(shopResetButton, 0LL, 0LL) )
      goto LABEL_67;
    gameObject = this->fields.shopResetButton;
    if ( !gameObject )
      goto LABEL_263;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_263;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
    {
LABEL_67:
      v68 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v69 = &StringLiteral_12037/*"SHOP_BUY_CONFIRM_SOLD_OUT_WARNING"*/;
      goto LABEL_70;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    gameObject = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !gameObject )
      goto LABEL_263;
    EntityByType = ItemMaster__GetEntityByType((ItemMaster_o *)gameObject, 37, 0LL);
    if ( EntityByType )
      p_name = (struct System_String_StaticFields *)&EntityByType->fields.name;
    else
      p_name = string_TypeInfo->static_fields;
    Empty = (Il2CppObject *)p_name->Empty;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    gameObject = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !gameObject )
      goto LABEL_263;
    v132 = *((_DWORD *)gameObject + 25);
    gameObject = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ShopResetMaster___);
    if ( !gameObject )
      goto LABEL_263;
    gameObject = (void *)ShopResetMaster__TryGetEntity(
                           (ShopResetMaster_o *)gameObject,
                           &v162,
                           shopEntity->fields.baseShopId,
                           v132,
                           0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !v162 )
        goto LABEL_263;
      resetLimitNum = v162->fields.resetLimitNum;
    }
    else
    {
      resetLimitNum = 0;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( resetLimitNum < 1 )
    {
      v144 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_NO_LIMIT_MESSAGE"*/, 0LL);
      limitNum = shopEntity->fields.limitNum;
      v148 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &limitNum, v145, v146, v147);
      v143 = System_String__Format_62613552(v144, Empty, v148, 0LL);
    }
    else
    {
      v134 = LocalizationManager__Get((System_String_o *)StringLiteral_12031/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_MESSAGE"*/, 0LL);
      limitNum = resetLimitNum;
      v138 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &limitNum, v135, v136, v137);
      v156 = shopEntity->fields.limitNum;
      v142 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v156, v139, v140, v141);
      v143 = System_String__Format_62613620(v134, Empty, v138, v142, 0LL);
    }
    v149 = v143;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserShopMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B3ED56 )
    {
      sub_1BDB878(&NetworkManager_TypeInfo, shopEntity);
      byte_4B3ED56 = 1;
    }
    gameObject = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      gameObject = NetworkManager_TypeInfo;
    }
    if ( !Master_object )
LABEL_263:
      sub_1BDBAD4(gameObject, shopEntity);
    gameObject = UserShopMaster__GetEntityDefinitely(
                   (UserShopMaster_o *)Master_object,
                   *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                   shopEntity->fields.baseShopId,
                   0LL);
    if ( resetLimitNum < 1 )
      goto LABEL_267;
    if ( !gameObject )
      goto LABEL_263;
    if ( resetLimitNum <= *((_DWORD *)gameObject + 10) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v154 = LocalizationManager__Get((System_String_o *)StringLiteral_12029/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_LIMIT"*/, 0LL);
    }
    else
    {
LABEL_267:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v151 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B3ED56 )
      {
        sub_1BDB878(&NetworkManager_TypeInfo, shopEntity);
        byte_4B3ED56 = 1;
      }
      gameObject = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        gameObject = NetworkManager_TypeInfo;
      }
      if ( !v151 )
        goto LABEL_263;
      gameObject = UserItemMaster__GetEntityDefinitely(
                     (UserItemMaster_o *)v151,
                     *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                     v132,
                     0LL);
      if ( !gameObject )
        goto LABEL_263;
      if ( *((int *)gameObject + 7) > 0 )
        goto LABEL_258;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v153 = LocalizationManager__Get((System_String_o *)StringLiteral_12030/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_SHORTAGE"*/, 0LL);
      v154 = System_String__Format(v153, Empty, 0LL);
    }
    gameObject = System_String__Concat_62572260(v149, v154, 0LL);
    v149 = (System_String_o *)gameObject;
LABEL_258:
    ShopBuyItemConfirmMenu__SetLabelActive(
      (ShopBuyItemConfirmMenu_o *)gameObject,
      this->fields.resetWarningLabel,
      1,
      v152);
    gameObject = this->fields.resetWarningLabel;
    if ( !gameObject )
      goto LABEL_263;
    UILabel__set_text((UILabel_o *)gameObject, v149, 0LL);
    v155 = this->fields.resetWarningLabel;
    gameObject = ShopBuyItemConfirmMenu_TypeInfo;
    if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
    if ( !v155 )
      goto LABEL_263;
    UILabel__set_fontSize(v155, ShopBuyItemConfirmMenu_TypeInfo->static_fields->PurePriWarningLabelSize, 0LL);
    v66 = (UnityEngine_Component_o *)this->fields.resetWarningLabel;
    Shop18WarningLabelPosY = ShopBuyItemConfirmMenu_TypeInfo->static_fields->PurePriWarningLabelPosY;
    goto LABEL_23;
  }
  if ( isInPreparation )
  {
    v68 = *p_warningLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v69 = &StringLiteral_12033/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/;
LABEL_70:
    v80 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v69, 0LL);
LABEL_71:
    v82 = v68;
LABEL_72:
    ShopBuyItemConfirmMenu__SetLabelText(v80, v82, (System_String_o *)v80, v81);
    return;
  }
  if ( !ShopEntity__IsEnable(shopEntity, 0LL, 0LL) )
  {
    v68 = *p_warningLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v69 = &StringLiteral_12034/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/;
    goto LABEL_70;
  }
  UserItemCounts = ShopBuyItemConfirmMenu__GetUserItemCounts(this, v70);
  UserItemCountsLong = ShopBuyItemConfirmMenu__GetUserItemCountsLong((ShopBuyItemConfirmMenu_o *)UserItemCounts, v72);
  switch ( shopEntity->fields.payType )
  {
    case 2:
      v85 = UserItemCountsLong;
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !v85 )
        goto LABEL_263;
      if ( !v85->max_length )
        goto LABEL_264;
      if ( v85->m_Items[0] >= (int)gameObject )
        goto LABEL_171;
      v86 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v87 = LocalizationManager__Get((System_String_o *)StringLiteral_12040/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, 0LL);
      v88 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10811/*"QP_NAME"*/, 0LL);
      v89 = (ShopBuyItemConfirmMenu_o *)System_String__Format(v87, v88, 0LL);
      goto LABEL_126;
    case 4:
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_263;
      if ( !UserItemCounts->max_length )
        goto LABEL_264;
      if ( (int)gameObject <= UserItemCounts->m_Items[1] )
        goto LABEL_171;
      v86 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v91 = &StringLiteral_12046/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/;
      goto LABEL_125;
    case 6:
    case 0xB:
    case 0xC:
      if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 2 )
      {
        if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 1 )
        {
          v74 = 0LL;
          while ( 1 )
          {
            gameObject = (void *)ShopEntity__GetPrices(shopEntity, v74, 0LL);
            if ( !UserItemCounts )
              goto LABEL_263;
            if ( (unsigned int)v74 >= UserItemCounts->max_length )
              goto LABEL_264;
            if ( (int)gameObject > UserItemCounts->m_Items[v74 + 1] )
              break;
            if ( (int)++v74 >= ShopEntity__GetItemCount(shopEntity, 0LL) )
              goto LABEL_171;
          }
          v68 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v69 = &StringLiteral_12041/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/;
          goto LABEL_70;
        }
        goto LABEL_171;
      }
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_263;
      if ( !UserItemCounts->max_length )
        goto LABEL_264;
      if ( (int)gameObject <= UserItemCounts->m_Items[1] )
        goto LABEL_171;
      gameObject = (void *)ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, (const MethodInfo *)shopEntity);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
        if ( !byte_4B3F3B3 )
        {
          sub_1BDB878(&EventRewardRootComponent_TypeInfo, shopEntity);
          byte_4B3F3B3 = 1;
        }
        v83 = EventRewardRootComponent_TypeInfo;
        if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          v83 = EventRewardRootComponent_TypeInfo;
        }
        p_AnotherPayUsedItemId_k__BackingField = &v83->static_fields->_AnotherPayUsedItemId_k__BackingField;
      }
      else
      {
        v105 = this->fields.shopEntity;
        if ( !v105 )
          goto LABEL_263;
        itemIds = v105->fields.itemIds;
        if ( !itemIds )
          goto LABEL_263;
        if ( !itemIds->max_length )
LABEL_264:
          sub_1BDBADC(gameObject, shopEntity, v75);
        p_AnotherPayUsedItemId_k__BackingField = &itemIds->m_Items[1];
      }
      v107 = *p_AnotherPayUsedItemId_k__BackingField;
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_263;
      gameObject = DataManager__GetMasterData_object_(
                     (DataManager_o *)gameObject,
                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !gameObject )
        goto LABEL_263;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
              &entity,
              v107,
              (const MethodInfo_32E1E88 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        return;
      v68 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_12040/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, 0LL);
      if ( !entity )
        goto LABEL_263;
      monitor = (Il2CppObject *)entity[1].monitor;
      goto LABEL_170;
    case 8:
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_263;
      if ( !UserItemCounts->max_length )
        goto LABEL_264;
      if ( (int)gameObject <= UserItemCounts->m_Items[1] )
        goto LABEL_171;
      v92 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v93 = &StringLiteral_12060/*"SHOP_BUY_STONE_FRAGMENTS_CONFIRM_WARNING"*/;
      goto LABEL_109;
    case 9:
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_263;
      if ( !UserItemCounts->max_length )
        goto LABEL_264;
      if ( (int)gameObject <= UserItemCounts->m_Items[1] )
        goto LABEL_171;
      v92 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v93 = &StringLiteral_12026/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/;
LABEL_109:
      v94 = LocalizationManager__Get((System_String_o *)*v93, 0LL);
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_263;
      gameObject = DataManager__GetMasterData_object_(
                     (DataManager_o *)gameObject,
                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
      v95 = this->fields.shopEntity;
      if ( !v95 )
        goto LABEL_263;
      v96 = v95->fields.itemIds;
      if ( !v96 )
        goto LABEL_263;
      if ( !v96->max_length )
        goto LABEL_264;
      if ( !gameObject )
        goto LABEL_263;
      gameObject = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                     v96->m_Items[1],
                     (const MethodInfo_32E1E3C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !gameObject )
        goto LABEL_263;
      Name = (Il2CppObject *)*((_QWORD *)gameObject + 3);
      goto LABEL_116;
    case 0xA:
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_263;
      if ( !UserItemCounts->max_length )
        goto LABEL_264;
      if ( (int)gameObject <= UserItemCounts->m_Items[1]
        || ShopEntity__IsAfterTheFreeShopReleaseDate(shopEntity, 0LL)
        && ShopEntity__IsFulFilledFreeExchangeCondition(shopEntity, 0LL) )
      {
        goto LABEL_171;
      }
      v86 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v91 = &StringLiteral_12053/*"SHOP_BUY_RARE_PRI_CONFIRM_WARNING"*/;
LABEL_125:
      v89 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v91, 0LL);
LABEL_126:
      ShopBuyItemConfirmMenu__SetLabelText(v89, v86, (System_String_o *)v89, v90);
      goto LABEL_171;
    case 0xE:
      if ( !this->fields.commonConsumeEntities )
        goto LABEL_171;
      gameObject = (void *)ShopEntity__get_TargetId(shopEntity, 0LL);
      v98 = BalanceConfig_TypeInfo;
      v99 = (int)gameObject;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v98 = BalanceConfig_TypeInfo;
      }
      if ( v99 != v98->static_fields->ApSeedExchangeTargetItemId )
        goto LABEL_135;
      v100 = *p_warningLabel;
      if ( !v98->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v98);
      if ( !v100 )
        goto LABEL_263;
      UILabel__set_fontSize(v100, BalanceConfig_TypeInfo->static_fields->TradeApDialogWarningLabelFontSize, 0LL);
LABEL_135:
      commonConsumeEntities = this->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        goto LABEL_263;
      v102 = *(_QWORD *)&commonConsumeEntities->max_length;
      if ( (_DWORD)v102 == 1 )
      {
        v103 = commonConsumeEntities->m_Items[0];
        if ( !v103 )
          goto LABEL_263;
        num = v103->fields.num;
        if ( num > CommonConsumeEntity__GetUserHasNum(commonConsumeEntities->m_Items[0], 0LL) )
        {
          v92 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v94 = LocalizationManager__Get((System_String_o *)StringLiteral_12028/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, 0LL);
          Name = (Il2CppObject *)CommonConsumeEntity__GetName(v103, 0LL);
LABEL_116:
          v80 = (ShopBuyItemConfirmMenu_o *)System_String__Format(v94, Name, 0LL);
          v82 = v92;
          goto LABEL_72;
        }
      }
      else if ( (int)v102 > 1 )
      {
        v109 = string_TypeInfo->static_fields->Empty;
        v110 = 0;
        do
        {
          if ( v110 >= (unsigned int)v102 )
            goto LABEL_264;
          v111 = &commonConsumeEntities->obj.klass + v110;
          v112 = (CommonConsumeEntity_o *)v111[4];
          if ( !v112 )
            goto LABEL_263;
          v113 = v112->fields.num;
          gameObject = (void *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)v111[4], 0LL);
          if ( v113 > (int)gameObject )
          {
            v114 = (Il2CppObject *)CommonConsumeEntity__GetName(v112, 0LL);
            v115 = System_String__Format((System_String_o *)StringLiteral_25305/*"{0}、"*/, v114, 0LL);
            gameObject = System_String__Concat_62572260(v109, v115, 0LL);
            v109 = (struct System_String_o *)gameObject;
          }
          commonConsumeEntities = this->fields.commonConsumeEntities;
          if ( !commonConsumeEntities )
            goto LABEL_263;
          LODWORD(v102) = commonConsumeEntities->max_length;
          ++v110;
        }
        while ( v110 < (int)v102 );
        if ( !v109 )
          goto LABEL_263;
        stringLength = v109->fields._stringLength;
        if ( stringLength >= 1 )
        {
          v117 = System_String__Remove_62618000(v109, stringLength - 1, 0LL);
          v68 = *p_warningLabel;
          v118 = (Il2CppObject *)v117;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_12028/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, 0LL);
          monitor = v118;
LABEL_170:
          v80 = (ShopBuyItemConfirmMenu_o *)System_String__Format((System_String_o *)gameObject, monitor, 0LL);
          goto LABEL_71;
        }
      }
LABEL_171:
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
      if ( buyCmdCodeNum[1] + (int)buyServantNum + buyCmdCodeNum[0] >= 1 )
      {
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_263;
        gameObject = DataManager__GetMasterData_object_(
                       (DataManager_o *)gameObject,
                       (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
        if ( !userGameEntity )
          goto LABEL_263;
        if ( !gameObject )
          goto LABEL_263;
        gameObject = UserPresentBoxMaster__getVaildList(
                       (UserPresentBoxMaster_o *)gameObject,
                       userGameEntity->fields.userId,
                       0LL);
        if ( !gameObject )
          goto LABEL_263;
        if ( shopEntity->fields.purchaseType == 5 )
          v119 = recordNum[0];
        else
          v119 = buyCmdCodeNum[1] + buyServantNum + buyCmdCodeNum[0];
        v120 = BalanceConfig_TypeInfo;
        v121 = *((_DWORD *)gameObject + 6);
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v120 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v120->static_fields->PresentBoxMax;
        if ( PresentBoxMax <= v121 )
        {
          v123 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v124 = &StringLiteral_12049/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/;
LABEL_212:
          gameObject = LocalizationManager__Get((System_String_o *)*v124, 0LL);
          if ( v123 )
          {
            UILabel__set_text(v123, (System_String_o *)gameObject, 0LL);
            return;
          }
          goto LABEL_263;
        }
        if ( !v120->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v120);
          PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
        }
        if ( v119 + v121 > PresentBoxMax )
        {
          v123 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v124 = &StringLiteral_12050/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/;
          goto LABEL_212;
        }
      }
      if ( SHIDWORD(buyServantNum) < 1 )
        return;
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_263;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B3ED56 )
      {
        sub_1BDB878(&NetworkManager_TypeInfo, shopEntity);
        byte_4B3ED56 = 1;
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
              0LL);
      v127 = BalanceConfig_TypeInfo;
      v128 = Sum;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v127 = BalanceConfig_TypeInfo;
      }
      UserItemMax = v127->static_fields->UserItemMax;
      if ( v128 >= UserItemMax )
      {
        v123 = *p_warningLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v124 = &StringLiteral_12043/*"SHOP_BUY_ITEM_FULL_WARNING"*/;
        goto LABEL_212;
      }
      v130 = HIDWORD(buyServantNum);
      if ( !v127->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v127);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      if ( v130 + v128 > UserItemMax )
      {
        v123 = *p_warningLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v124 = &StringLiteral_12045/*"SHOP_BUY_ITEM_OVER_WARNING"*/;
        goto LABEL_212;
      }
      return;
    default:
      goto LABEL_171;
  }
}


void __fastcall ShopBuyItemConfirmMenu__SetWindowSize(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *windowSprite; // x20
  UnityEngine_Object_o *itemInfoBase; // x20
  UnityEngine_Object_o *priceInfoBase; // x20
  UnityEngine_Object_o *shopResetButton; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0
  UIWidget_o *v10; // x20
  char v11; // w21
  ShopBuyItemConfirmMenu_c *v12; // x8
  struct ShopBuyItemConfirmMenu_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  float DEFAULT_BUTTON_POS_Y; // s0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0

  if ( (byte_4B40D22 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    sub_1BDB878(&ShopBuyItemConfirmMenu_TypeInfo, v3);
    byte_4B40D22 = 1;
  }
  windowSprite = (UnityEngine_Object_o *)this->fields.windowSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(windowSprite, 0LL, 0LL) )
  {
    itemInfoBase = (UnityEngine_Object_o *)this->fields.itemInfoBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(itemInfoBase, 0LL, 0LL) )
    {
      priceInfoBase = (UnityEngine_Object_o *)this->fields.priceInfoBase;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(priceInfoBase, 0LL, 0LL) )
      {
        shopResetButton = (UnityEngine_Object_o *)this->fields.shopResetButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(shopResetButton, 0LL, 0LL) )
        {
          gameObject = (UnityEngine_Component_o *)this->fields.shopResetButton;
          if ( gameObject )
          {
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
            if ( gameObject )
            {
              gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                        (UnityEngine_GameObject_o *)gameObject,
                                                        0LL);
              v10 = (UIWidget_o *)this->fields.windowSprite;
              v11 = (char)gameObject;
              v12 = ShopBuyItemConfirmMenu_TypeInfo;
              if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
                v12 = ShopBuyItemConfirmMenu_TypeInfo;
              }
              static_fields = v12->static_fields;
              if ( (v11 & 1) != 0 )
              {
                if ( v10 )
                {
                  UIWidget__set_height(v10, static_fields->RESET_LAYOUT_WINDOW_SIZE_Y, 0LL);
                  GameObjectExtensions__SetLocalPositionY(
                    this->fields.itemInfoBase,
                    (float)(ShopBuyItemConfirmMenu_TypeInfo->static_fields->RESET_LAYOUT_OFFSET_Y
                          + ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_ITEM_INFO_POS_Y),
                    0LL);
                  GameObjectExtensions__SetLocalPositionY(
                    this->fields.priceInfoBase,
                    (float)(ShopBuyItemConfirmMenu_TypeInfo->static_fields->RESET_LAYOUT_OFFSET_Y
                          + ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_PRICE_INFO_POS_Y),
                    0LL);
                  gameObject = (UnityEngine_Component_o *)this->fields.decideButton;
                  if ( gameObject )
                  {
                    v14 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
                    GameObjectExtensions__SetLocalPositionY(
                      v14,
                      (float)(ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y
                            - ShopBuyItemConfirmMenu_TypeInfo->static_fields->RESET_LAYOUT_OFFSET_Y),
                      0LL);
                    gameObject = (UnityEngine_Component_o *)this->fields.cancelButton;
                    if ( gameObject )
                    {
                      v15 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
                      GameObjectExtensions__SetLocalPositionY(
                        v15,
                        (float)(ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y
                              - ShopBuyItemConfirmMenu_TypeInfo->static_fields->RESET_LAYOUT_OFFSET_Y),
                        0LL);
                      gameObject = (UnityEngine_Component_o *)this->fields.shopResetButton;
                      if ( gameObject )
                      {
                        v16 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
                        DEFAULT_BUTTON_POS_Y = (float)(ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y
                                                     - ShopBuyItemConfirmMenu_TypeInfo->static_fields->RESET_LAYOUT_OFFSET_Y);
LABEL_31:
                        GameObjectExtensions__SetLocalPositionY(v16, DEFAULT_BUTTON_POS_Y, 0LL);
                        return;
                      }
                    }
                  }
                }
              }
              else if ( v10 )
              {
                UIWidget__set_height(v10, static_fields->DEFAULT_WINDOW_SIZE_Y, 0LL);
                GameObjectExtensions__SetLocalPositionY(
                  this->fields.itemInfoBase,
                  (float)ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_ITEM_INFO_POS_Y,
                  0LL);
                GameObjectExtensions__SetLocalPositionY(
                  this->fields.priceInfoBase,
                  (float)ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_PRICE_INFO_POS_Y,
                  0LL);
                gameObject = (UnityEngine_Component_o *)this->fields.decideButton;
                if ( gameObject )
                {
                  v18 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
                  GameObjectExtensions__SetLocalPositionY(
                    v18,
                    (float)ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y,
                    0LL);
                  gameObject = (UnityEngine_Component_o *)this->fields.cancelButton;
                  if ( gameObject )
                  {
                    v19 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
                    GameObjectExtensions__SetLocalPositionY(
                      v19,
                      (float)ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y,
                      0LL);
                    gameObject = (UnityEngine_Component_o *)this->fields.shopResetButton;
                    if ( gameObject )
                    {
                      v16 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
                      DEFAULT_BUTTON_POS_Y = (float)ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y;
                      goto LABEL_31;
                    }
                  }
                }
              }
            }
          }
          sub_1BDBAD4(gameObject, v8);
        }
      }
    }
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
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x20
  CommonUI_o *v14; // x21
  ServantStatusDialog_EndDelegate_o *v15; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B40D1A & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&commandCodeId);
    sub_1BDB878(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v5);
    sub_1BDB878(&ServantStatusDialog_EndDelegate_TypeInfo, v6);
    sub_1BDB878(&Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B40D1A = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_9;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         commandCodeId,
         (const MethodInfo_32E1E88 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
  {
    v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = entity;
    v14 = (CommonUI_o *)v12;
    v15 = (ServantStatusDialog_EndDelegate_o *)sub_1BDBAC4(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v15,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v14 )
    {
      CommonUI__OpenServantEquipStatusDialog_30849996(v14, 25, (CommandCodeEntity_o *)v13, 0, v15, 0LL, 0LL);
      return 0;
    }
LABEL_9:
    sub_1BDBAD4(Instance, v11);
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
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  int32_t itemDetailDialogOverwriteDepth; // w23
  Il2CppObject *v13; // x0
  Il2CppObject *v14; // x20
  CommonUI_o *v15; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v16; // x22
  int32_t v17; // w3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B40D19 & 1) == 0 )
  {
    sub_1BDB878(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, *(_QWORD *)&itemId);
    sub_1BDB878(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_1BDB878(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v6);
    sub_1BDB878(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B40D19 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_13;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         itemId,
         (const MethodInfo_32E1E88 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    itemDetailDialogOverwriteDepth = this->fields.itemDetailDialogOverwriteDepth;
    v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = entity;
    v15 = (CommonUI_o *)v13;
    v16 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BDBAC4(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      (intptr_t)Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__,
      0LL);
    if ( itemDetailDialogOverwriteDepth == 0x80000000 )
    {
      if ( v15 )
      {
        v17 = 50;
LABEL_11:
        CommonUI__OpenItemDetailDialog(v15, (ItemEntity_o *)v14, v16, v17, 0LL);
        return 0;
      }
    }
    else if ( v15 )
    {
      v17 = this->fields.itemDetailDialogOverwriteDepth;
      goto LABEL_11;
    }
LABEL_13:
    sub_1BDBAD4(Instance, v11);
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
  Il2CppObject *Instance; // x0
  System_String_o *name; // x21
  System_String_o *infoMessage; // x20
  CommonUI_o *v11; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v12; // x23

  v4 = (Il2CppObject *)this;
  if ( (byte_4B40D1B & 1) == 0 )
  {
    sub_1BDB878(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, shopEntity);
    sub_1BDB878(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    this = (ShopBuyItemConfirmMenu_o *)sub_1BDB878(&StringLiteral_9273/*"NONE"*/, v7);
    byte_4B40D1B = 1;
  }
  if ( !shopEntity )
    goto LABEL_9;
  if ( !System_String__IsNullOrEmpty(shopEntity->fields.infoMessage, 0LL)
    && System_String__op_Inequality(shopEntity->fields.infoMessage, (System_String_o *)StringLiteral_9273/*"NONE"*/, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    name = shopEntity->fields.name;
    infoMessage = shopEntity->fields.infoMessage;
    v11 = (CommonUI_o *)Instance;
    v12 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BDBAC4(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v12,
      v4,
      (intptr_t)Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__,
      0LL);
    if ( v11 )
    {
      CommonUI__OpenItemDetailDialog_30911904(v11, name, infoMessage, v12, 0LL);
      return 0;
    }
LABEL_9:
    sub_1BDBAD4(this, shopEntity);
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
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x21
  ServantLeaderInfo_o *v20; // x22
  ServantStatusDialog_EndDelegate_o *v21; // x20
  Il2CppObject *v23; // x23
  EquipTargetInfo_o *v24; // x24
  ServantStatusDialog_EndDelegate_o *v25; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B40D18 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1BDB878(&ServantStatusDialog_EndDelegate_TypeInfo, v10);
    sub_1BDB878(&EquipTargetInfo_TypeInfo, v11);
    sub_1BDB878(&ServantLeaderInfo_TypeInfo, v12);
    sub_1BDB878(&Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__, v13);
    sub_1BDB878(&Method_ShopBuyItemConfirmMenu_EndShowServantStatusDialog__, v14);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4B40D18 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_23;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          servantId,
          (const MethodInfo_32E1E88 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return -1;
  Instance = entity;
  if ( !entity )
    goto LABEL_23;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) )
    goto LABEL_14;
  Instance = entity;
  if ( !entity )
    goto LABEL_23;
  if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)entity, 0LL) )
    goto LABEL_14;
  Instance = entity;
  if ( !entity )
    goto LABEL_23;
  if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)entity, 0LL) )
    goto LABEL_14;
  Instance = entity;
  if ( !entity )
    goto LABEL_23;
  if ( ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)entity, 0LL) )
  {
LABEL_14:
    v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = (ServantLeaderInfo_o *)sub_1BDBAC4(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_42410752(v20, servantId, 0, 1, 0LL);
    v21 = (ServantStatusDialog_EndDelegate_o *)sub_1BDBAC4(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v21,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantStatusDialog__,
      0LL);
    if ( v19 )
    {
      CommonUI__OpenServantStatusDialog_30845916((CommonUI_o *)v19, 7, v20, v21, 0LL);
      return 0;
    }
    goto LABEL_23;
  }
  Instance = entity;
  if ( !entity )
    goto LABEL_23;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL) )
  {
    v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = (EquipTargetInfo_o *)sub_1BDBAC4(EquipTargetInfo_TypeInfo);
    EquipTargetInfo___ctor_40710408(v24, servantId, limitCount, level, 0, 0LL);
    v25 = (ServantStatusDialog_EndDelegate_o *)sub_1BDBAC4(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v25,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v23 )
    {
      CommonUI__OpenServantEquipStatusDialog_30849012((CommonUI_o *)v23, 7, v24, v25, 0LL, 0LL);
      return 0;
    }
LABEL_23:
    sub_1BDBAD4(Instance, v18);
  }
  return 2;
}


System_String_o *__fastcall ShopBuyItemConfirmMenu__get_closeBtnPath(
        ShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B40D26 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_15616/*"Window/CancelButton"*/, method);
    byte_4B40D26 = 1;
  }
  return (System_String_o *)StringLiteral_15616/*"Window/CancelButton"*/;
}


bool __fastcall ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  EventRewardRootComponent_c *v3; // x0
  ShopEntity_o *shopEntity; // x0
  System_Int32_array *possessionAnotherItemId; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B40CFA & 1) == 0 )
  {
    sub_1BDB878(&EventRewardRootComponent_TypeInfo, method);
    byte_4B40CFA = 1;
  }
  possessionAnotherItemId = 0LL;
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  if ( !byte_4B3F3B4 )
  {
    sub_1BDB878(&EventRewardRootComponent_TypeInfo, method);
    byte_4B3F3B4 = 1;
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
      sub_1BDBAD4(0LL, method);
    return ShopEntity__IsAnotherItemBuyable(shopEntity, &possessionAnotherItemId, 0LL);
  }
  else
  {
    return 0;
  }
}


void __fastcall ShopBuyItemConfirmMenu___c__DisplayClass121_0___ctor(
        ShopBuyItemConfirmMenu___c__DisplayClass121_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu___c__DisplayClass121_0___ReturnWarningRarePri_b__0(
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
  CGThumbnailListItem_o *v9; // x8
  System_Action_T__o *klass; // x21

  v4 = this;
  if ( (byte_4B40D29 & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu___c__DisplayClass121_0_o *)sub_1BDB878(&Method_ActionExtensions_Call_int___, method);
    byte_4B40D29 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (onChecked = _4__this->fields.onChecked,
        _4__this->fields.onChecked = 0LL,
        sub_1BDB81C((CGThumbnailListItem_o *)&_4__this->fields.onChecked, 0, v2, v3),
        (v9 = (CGThumbnailListItem_o *)v4->fields.__4__this) == 0LL) )
  {
    sub_1BDBAD4(this, method);
  }
  klass = (System_Action_T__o *)v9[4].klass;
  v9[4].klass = 0LL;
  sub_1BDB81C(v9 + 4, 0, v7, v8);
  if ( v4->fields.isDecide )
    ActionExtensions__Call(onChecked, 0LL);
  else
    ActionExtensions__Call_int_(klass, 0, (const MethodInfo_2F82F2C *)Method_ActionExtensions_Call_int___);
}