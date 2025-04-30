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

  if ( (byte_4A4A75B & 1) == 0 )
  {
    sub_1B863B8(&ShopBuyItemConfirmMenu_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_17339/*"btn_txt_event_"*/, v4);
    sub_1B863B8(&StringLiteral_17392/*"btn_txt_trade"*/, v5);
    sub_1B863B8(&StringLiteral_17372/*"btn_txt_sale"*/, v6);
    byte_4A4A75B = 1;
  }
  ShopBuyItemConfirmMenu_TypeInfo->static_fields->VALENTINE_BTN_NAME = (struct System_String_o *)StringLiteral_17339/*"btn_txt_event_"*/;
  sub_1B8635C((CGThumbnailListItem_o *)ShopBuyItemConfirmMenu_TypeInfo->static_fields, StringLiteral_17339/*"btn_txt_event_"*/, v2, v3);
  v7 = StringLiteral_17392/*"btn_txt_trade"*/;
  static_fields = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  static_fields->DECIED_BTN_NAME_DEFAULT = (struct System_String_o *)StringLiteral_17392/*"btn_txt_trade"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->DECIED_BTN_NAME_DEFAULT, v7, v9, v10);
  v11 = StringLiteral_17372/*"btn_txt_sale"*/;
  v12 = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v12->DECIED_BTN_NAME_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_17372/*"btn_txt_sale"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v12->DECIED_BTN_NAME_LIMIT_MATERIAL, v11, v13, v14);
  v15 = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  *(_OWORD *)&v15->PRICE_DATA_LABEL_MAX_WIDTH = xmmword_BC21C0;
  *(_QWORD *)&v15->DEFAULT_PRICE_INFO_POS_Y = 0xFFFFFF86FFFFFFECLL;
  v15->RESET_LAYOUT_OFFSET_Y = 34;
}


void __fastcall ShopBuyItemConfirmMenu___ctor(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4A4A75A & 1) == 0 )
  {
    sub_1B863B8(&BaseDialog_TypeInfo, method);
    byte_4A4A75A = 1;
  }
  this->fields.itemDetailDialogOverwriteDepth = 0x80000000;
  *(_OWORD *)&this->fields.freeLabelPos.fields.x = xmmword_BC26C0;
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
    sub_1B8635C(p_onClose, 0, v2, v3);
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
    sub_1B8635C(p_onDecide, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall ShopBuyItemConfirmMenu__Close(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ShopBuyItemConfirmMenu__Close_33438872(this, 0LL, v2);
}


void __fastcall ShopBuyItemConfirmMenu__Close_33438872(
        ShopBuyItemConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A4A745 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, callback);
    sub_1B863B8(&Method_ShopBuyItemConfirmMenu_EndClose__, v6);
    byte_4A4A745 = 1;
  }
  this->fields.onClose = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.onClose, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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
    sub_1B86614(0LL, v4);
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

  if ( (byte_4A4A752 & 1) == 0 )
  {
    sub_1B863B8(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__, isDecide);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4A4A752 = 1;
  }
  v4 = Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__;
  if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B863D0(Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B8639C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v7);
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

  if ( (byte_4A4A751 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4A4A751 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v4);
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

  if ( (byte_4A4A750 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4A4A750 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v4);
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
  int32_t v17; // w19
  __int64 v18; // x21
  int m_CancellationTokenSource; // w20
  BalanceConfig_c *v20; // x8
  int32_t PresentBoxMax; // w9
  Il2CppObject *MasterData_object; // x19
  int32_t Sum; // w19
  BalanceConfig_c *v24; // x8
  int32_t UserItemMax; // w9
  int32_t v26; // w21
  struct CommonConsumeEntity_array *commonConsumeEntities; // x21
  int max_length; // w8
  __int64 v29; // x22
  int basePanel; // w24
  int32_t questId; // [xsp+Ch] [xbp-54h] BYREF
  int32_t recordNum[2]; // [xsp+10h] [xbp-50h] BYREF
  __int64 buyCmdCodeNum; // [xsp+18h] [xbp-48h] BYREF
  int32_t buyServantNum[2]; // [xsp+28h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_4A4A739 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, shopEntity);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserItemMaster___, v9);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v10);
    sub_1B863B8(&NetworkManager_TypeInfo, v11);
    this = (ShopBuyItemConfirmMenu_o *)sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4A4A739 = 1;
  }
  *(_QWORD *)buyServantNum = 0LL;
  *(_QWORD *)recordNum = 0LL;
  buyCmdCodeNum = 0LL;
  questId = 0;
  if ( !shopEntity )
    goto LABEL_73;
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
              goto LABEL_73;
            if ( !UserItemCounts->max_length )
LABEL_74:
              sub_1B8661C(this, shopEntity);
            if ( (int)this > UserItemCounts->m_Items[1] )
              return 0;
          }
          else if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 1 )
          {
            v18 = 0LL;
            while ( 1 )
            {
              this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetPrices(shopEntity, v18, 0LL);
              if ( !UserItemCounts )
                break;
              if ( (unsigned int)v18 >= UserItemCounts->max_length )
                goto LABEL_74;
              if ( (int)this > UserItemCounts->m_Items[v18 + 1] )
                return 0;
              if ( (int)++v18 >= ShopEntity__GetItemCount(shopEntity, 0LL) )
                goto LABEL_17;
            }
LABEL_73:
            sub_1B86614(this, shopEntity);
          }
LABEL_17:
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
          this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_73;
          this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
          if ( !userGameEntity )
            goto LABEL_73;
          if ( !this )
            goto LABEL_73;
          this = (ShopBuyItemConfirmMenu_o *)UserPresentBoxMaster__getVaildList(
                                               (UserPresentBoxMaster_o *)this,
                                               userGameEntity->fields.userId,
                                               0LL);
          if ( !this )
            goto LABEL_73;
          if ( shopEntity->fields.purchaseType == 5 )
            v17 = recordNum[0];
          else
            v17 = HIDWORD(buyCmdCodeNum) + buyServantNum[0] + buyCmdCodeNum;
          m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
          v20 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v20 = BalanceConfig_TypeInfo;
          }
          PresentBoxMax = v20->static_fields->PresentBoxMax;
          if ( PresentBoxMax > m_CancellationTokenSource )
          {
            if ( !v20->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v20);
              PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
            }
            if ( v17 + m_CancellationTokenSource <= PresentBoxMax )
            {
LABEL_55:
              if ( buyServantNum[1] < 1 )
                return 1;
              this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_73;
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserItemMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4A48C25 )
              {
                sub_1B863B8(&NetworkManager_TypeInfo, shopEntity);
                byte_4A48C25 = 1;
              }
              this = (ShopBuyItemConfirmMenu_o *)NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                this = (ShopBuyItemConfirmMenu_o *)NetworkManager_TypeInfo;
              }
              if ( !MasterData_object )
                goto LABEL_73;
              Sum = UserItemMaster__getSum(
                      (UserItemMaster_o *)MasterData_object,
                      *(_QWORD *)&this->fields.decideButton->fields.specifyHoverColor.fields.r,
                      0LL);
              v24 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v24 = BalanceConfig_TypeInfo;
              }
              UserItemMax = v24->static_fields->UserItemMax;
              if ( Sum < UserItemMax )
              {
                v26 = buyServantNum[1];
                if ( !v24->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v24);
                  UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
                }
                if ( v26 + Sum <= UserItemMax )
                  return 1;
              }
            }
          }
          break;
        case 0xA:
          this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetPrice(shopEntity, 0LL);
          if ( !UserItemCounts )
            goto LABEL_73;
          if ( !UserItemCounts->max_length )
            goto LABEL_74;
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
          v29 = 0LL;
          while ( 2 )
          {
            if ( (unsigned int)v29 >= max_length )
              goto LABEL_74;
            this = (ShopBuyItemConfirmMenu_o *)commonConsumeEntities->m_Items[v29];
            if ( !this )
              goto LABEL_73;
            basePanel = (int)this->fields.basePanel;
            this = (ShopBuyItemConfirmMenu_o *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0LL);
            if ( basePanel <= (int)this )
            {
              max_length = commonConsumeEntities->max_length;
              if ( (int)++v29 >= max_length )
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
  int m_CancellationTokenSource; // w8
  int v9; // w9
  __int64 v10; // x10

  if ( (byte_4A4A753 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_SetItemMaster___, ids);
    this = (ShopBuyItemConfirmMenu_o *)sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A4A753 = 1;
  }
  if ( !ids )
    goto LABEL_20;
  if ( !*(_QWORD *)&ids->max_length )
    return 0;
  this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_1B86614(this, ids);
  this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_SetItemMaster___);
  v5 = *(_QWORD *)&ids->max_length;
  if ( (int)v5 < 1 )
    return 0;
  v6 = (SetItemMaster_o *)this;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v5 )
LABEL_21:
      sub_1B8661C(this, ids);
    if ( !v6 )
      goto LABEL_20;
    this = (ShopBuyItemConfirmMenu_o *)SetItemMaster__GetList(v6, ids->m_Items[v7 + 1], 0LL);
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
    v10 = *((_QWORD *)&this->fields.basePanel + v9);
    if ( !v10 )
      goto LABEL_20;
    if ( *(_DWORD *)(v10 + 20) == 7 )
      return 1;
    if ( m_CancellationTokenSource == ++v9 )
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
    sub_1B86614(this, 0LL);
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

  if ( (byte_4A4A748 & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, *(_QWORD *)&shopType);
    sub_1B863B8(&StringLiteral_8132/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/, v4);
    sub_1B863B8(&StringLiteral_11921/*"SHOP_MAX_ALERT"*/, v5);
    byte_4A4A748 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( shopType == 9 )
    v6 = (System_String_o **)&StringLiteral_8132/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/;
  else
    v6 = (System_String_o **)&StringLiteral_11921/*"SHOP_MAX_ALERT"*/;
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

  if ( (byte_4A4A747 & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, *(_QWORD *)&itemType);
    sub_1B863B8(&StringLiteral_10655/*"QP_NAME"*/, v4);
    sub_1B863B8(&StringLiteral_8382/*"MANA_NAME"*/, v5);
    sub_1B863B8(&StringLiteral_10794/*"RARE_PRI_NAME"*/, v6);
    sub_1B863B8(&StringLiteral_6483/*"FRIEND_POINT_NAME"*/, v7);
    sub_1B863B8(&StringLiteral_1/*""*/, v8);
    byte_4A4A747 = 1;
  }
  if ( itemType <= 5 )
  {
    if ( itemType == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_10655/*"QP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v9, 0LL);
    }
    if ( itemType == 5 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_8382/*"MANA_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v9, 0LL);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( itemType == 13 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = &StringLiteral_6483/*"FRIEND_POINT_NAME"*/;
    return LocalizationManager__Get((System_String_o *)*v9, 0LL);
  }
  if ( itemType != 22 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = &StringLiteral_10794/*"RARE_PRI_NAME"*/;
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
  Il2CppObject *MasterData_object; // x20
  struct ShopEntity_o *v15; // x8
  struct System_Int32_array *v16; // x8
  int32_t v17; // w8
  Il2CppObject *Master_object; // x20
  const MethodInfo *v19; // x1
  __int64 itemIds; // x21
  unsigned int ItemCount; // w0
  struct ShopEntity_o *v23; // x8
  unsigned __int64 v24; // x23

  if ( (byte_4A4A738 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_1B863B8(&Method_DataManager_GetMaster_UserItemMaster___, v3);
    sub_1B863B8(&DataManager_TypeInfo, v4);
    sub_1B863B8(&EventRewardRootComponent_TypeInfo, v5);
    sub_1B863B8(&int___TypeInfo, v6);
    sub_1B863B8(&NetworkManager_TypeInfo, v7);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A4A738 = 1;
  }
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_68;
  v12 = (_DWORD *)SelfUserGame;
  switch ( shopEntity->fields.payType )
  {
    case 1:
      SelfUserGame = sub_1B86460(int___TypeInfo, 1LL);
      if ( !v12 )
        goto LABEL_68;
      v13 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_68;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_69;
      v17 = v12[44];
      goto LABEL_49;
    case 2:
      SelfUserGame = sub_1B86460(int___TypeInfo, 1LL);
      if ( !v12 )
        goto LABEL_68;
      v13 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_68;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_69;
      v17 = v12[24];
      goto LABEL_49;
    case 4:
      SelfUserGame = sub_1B86460(int___TypeInfo, 1LL);
      if ( !v12 )
        goto LABEL_68;
      v13 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_68;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_69;
      v17 = v12[46];
      goto LABEL_49;
    case 6:
    case 0xB:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserItemMaster___);
      SelfUserGame = ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v19);
      if ( (SelfUserGame & 1) == 0 )
      {
        v23 = this->fields.shopEntity;
        if ( v23 )
        {
          itemIds = (__int64)v23->fields.itemIds;
          if ( itemIds )
            goto LABEL_53;
        }
LABEL_68:
        sub_1B86614(SelfUserGame, v10);
      }
      itemIds = sub_1B86460(int___TypeInfo, 1LL);
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      if ( !byte_4A4907A )
      {
        sub_1B863B8(&EventRewardRootComponent_TypeInfo, v10);
        byte_4A4907A = 1;
      }
      SelfUserGame = (__int64)EventRewardRootComponent_TypeInfo;
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
        SelfUserGame = (__int64)EventRewardRootComponent_TypeInfo;
      }
      if ( !itemIds )
        goto LABEL_68;
      if ( !*(_DWORD *)(itemIds + 24) )
        goto LABEL_69;
      *(_DWORD *)(itemIds + 32) = *(_DWORD *)(*(_QWORD *)(SelfUserGame + 184) + 268LL);
LABEL_53:
      v13 = (System_Int32_array *)sub_1B86460(int___TypeInfo, *(unsigned int *)(itemIds + 24));
      if ( *(int *)(itemIds + 24) >= 1 )
      {
        v24 = 0LL;
        while ( 1 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4A48C25 )
          {
            sub_1B863B8(&NetworkManager_TypeInfo, v10);
            byte_4A48C25 = 1;
          }
          SelfUserGame = (__int64)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            SelfUserGame = (__int64)NetworkManager_TypeInfo;
          }
          if ( v24 >= *(unsigned int *)(itemIds + 24) )
            break;
          if ( !Master_object )
            goto LABEL_68;
          SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                                    (UserItemMaster_o *)Master_object,
                                    *(_QWORD *)(*(_QWORD *)(SelfUserGame + 184) + 64LL),
                                    *(_DWORD *)(itemIds + 32 + 4 * v24),
                                    0LL);
          if ( !SelfUserGame || !v13 )
            goto LABEL_68;
          if ( v24 >= v13->max_length )
            break;
          v13->m_Items[++v24] = *(_DWORD *)(SelfUserGame + 28);
          if ( (__int64)v24 >= *(int *)(itemIds + 24) )
            return v13;
        }
LABEL_69:
        sub_1B8661C(SelfUserGame, v10);
      }
      return v13;
    case 8:
    case 9:
    case 0xC:
      v13 = (System_Int32_array *)sub_1B86460(int___TypeInfo, 1LL);
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_68;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, v10);
        byte_4A48C25 = 1;
      }
      SelfUserGame = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        SelfUserGame = (__int64)NetworkManager_TypeInfo;
      }
      v15 = this->fields.shopEntity;
      if ( !v15 )
        goto LABEL_68;
      v16 = v15->fields.itemIds;
      if ( !v16 )
        goto LABEL_68;
      if ( !v16->max_length )
        goto LABEL_69;
      if ( !MasterData_object )
        goto LABEL_68;
      SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)MasterData_object,
                                *(_QWORD *)(*(_QWORD *)(SelfUserGame + 184) + 64LL),
                                v16->m_Items[1],
                                0LL);
      if ( !SelfUserGame || !v13 )
        goto LABEL_68;
      if ( !v13->max_length )
        goto LABEL_69;
      v17 = *(_DWORD *)(SelfUserGame + 28);
LABEL_49:
      v13->m_Items[1] = v17;
      return v13;
    case 0xA:
      SelfUserGame = sub_1B86460(int___TypeInfo, 1LL);
      if ( !v12 )
        goto LABEL_68;
      v13 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_68;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_69;
      v17 = v12[47];
      goto LABEL_49;
    default:
      ItemCount = ShopEntity__GetItemCount(this->fields.shopEntity, 0LL);
      return (System_Int32_array *)sub_1B86460(int___TypeInfo, ItemCount);
  }
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

  if ( (byte_4A4A72F & 1) == 0 )
  {
    sub_1B863B8(&ShopBuyItemUtility_TypeInfo, method);
    sub_1B863B8(&StringLiteral_1/*""*/, v3);
    byte_4A4A72F = 1;
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
        sub_1B8635C((CGThumbnailListItem_o *)&this->fields.shopEntity, 0, v6, v7),
        (nameLabel = (UILabel_o *)this->fields.infoButton) == 0LL)
    || (nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL)) == 0LL )
  {
LABEL_14:
    sub_1B86614(nameLabel, method);
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

  if ( (byte_4A4A749 & 1) == 0 )
  {
    sub_1B863B8(&Method_ShopBuyItemConfirmMenu_OnClickCancel__, method);
    byte_4A4A749 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ShopBuyItemConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B863D0(Method_ShopBuyItemConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    ShopBuyItemConfirmMenu__CallOnDecide(this, 0, v5);
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
  void *Instance; // x0
  struct ShopEntity_o *shopEntity; // x1
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  NoTitleDialog_o *noTitleDialog; // x20
  System_String_o *v20; // x21
  Il2CppObject *Name; // x0
  System_String_o *v22; // x21
  System_String_o *v23; // x22
  System_String_o *v24; // x23
  System_Action_bool__o *v25; // x24
  const MethodInfo *v26; // x3
  struct ShopEntity_o *v27; // x8
  System_String_o *MaxAlertMessage; // x20
  Il2CppObject *v29; // x21
  System_Action_o *v30; // x22
  UILabel_o *warningLabel; // x20
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  const MethodInfo *v36; // x2
  int32_t check; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_4A4A746 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_bool__TypeInfo, method);
    sub_1B863B8(&System_Action_TypeInfo, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_ShopMaster___, v4);
    sub_1B863B8(&LocalizationManager_TypeInfo, v5);
    sub_1B863B8(&Method_ShopBuyItemConfirmMenu_EndMaxErrorDialog__, v6);
    sub_1B863B8(&Method_ShopBuyItemConfirmMenu_OnClickDecide__, v7);
    sub_1B863B8(&Method_ShopBuyItemConfirmMenu_ReturnWarning__, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B863B8(&StringLiteral_9180/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, v11);
    sub_1B863B8(&StringLiteral_11856/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, v12);
    sub_1B863B8(&StringLiteral_3675/*"COMMON_CONFIRM_CANCEL"*/, v13);
    sub_1B863B8(&StringLiteral_1/*""*/, v14);
    byte_4A4A746 = 1;
  }
  check = 0;
  if ( this->fields.state != 2 )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ShopMaster___);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_35;
  if ( shopEntity->fields.purchaseType != 17 )
  {
    if ( !Instance )
      goto LABEL_35;
    if ( ShopMaster__PurchaseCloseEventShop((ShopMaster_o *)Instance, shopEntity, 0LL) )
    {
      v17 = Method_ShopBuyItemConfirmMenu_OnClickDecide__;
      if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_1B863D0(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
      v18 = (System_Reflection_MethodBase_o *)sub_1B8639C(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 8, 0, 0LL);
      Instance = this->fields.shopEntity;
      if ( Instance )
      {
        noTitleDialog = this->fields.noTitleDialog;
        v20 = (System_String_o *)*((_QWORD *)Instance + 21);
        Name = (Il2CppObject *)ShopEntity__getName((ShopEntity_o *)Instance, 0LL);
        v22 = System_String__Format(v20, Name, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v23 = LocalizationManager__Get((System_String_o *)StringLiteral_9180/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, 0LL);
        v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3675/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
        v25 = (System_Action_bool__o *)sub_1B86604(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(v25, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_ReturnWarning__, 0LL);
        if ( noTitleDialog )
        {
          NoTitleDialog__Open(noTitleDialog, v22, v23, v24, v25, 0LL);
          return;
        }
      }
LABEL_35:
      sub_1B86614(Instance, shopEntity);
    }
    shopEntity = this->fields.shopEntity;
    if ( !shopEntity )
      goto LABEL_31;
  }
  if ( ShopEntity__IsEnable(shopEntity, 0LL, 0LL) )
  {
    Instance = this->fields.shopEntity;
    if ( !Instance )
      goto LABEL_35;
    Instance = (void *)ShopEntity__isMaxOver((ShopEntity_o *)Instance, 1LL, &check, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v27 = this->fields.shopEntity;
      if ( !v27 )
        goto LABEL_35;
      MaxAlertMessage = ShopBuyItemConfirmMenu__GetMaxAlertMessage(this, v27->fields.shopType, check, v26);
      v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v30 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v30, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndMaxErrorDialog__, 0LL);
      if ( !v29 )
        goto LABEL_35;
      CommonUI__OpenNotificationDialog(
        (CommonUI_o *)v29,
        (System_String_o *)StringLiteral_1/*""*/,
        MaxAlertMessage,
        v30,
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
        0LL);
      return;
    }
LABEL_31:
    this->fields.state = 3;
    v34 = Method_ShopBuyItemConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v34 = (_QWORD *)sub_1B863D0(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
    v35 = (System_Reflection_MethodBase_o *)sub_1B8639C(v34, v34[4]);
    OverwriteAssetSoundName__PlaySystemSe(v35, this->fields.decideSe, 0, 0LL);
    ShopBuyItemConfirmMenu__CallOnDecide(this, 1, v36);
    return;
  }
  Instance = this->fields.presentAheadLabel;
  if ( !Instance )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  warningLabel = this->fields.warningLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11856/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_35;
  UILabel__set_text(warningLabel, (System_String_o *)Instance, 0LL);
  v32 = Method_ShopBuyItemConfirmMenu_OnClickDecide__;
  if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
    v32 = (_QWORD *)sub_1B863D0(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
  v33 = (System_Reflection_MethodBase_o *)sub_1B8639C(v32, v32[4]);
  OverwriteAssetSoundName__PlaySystemSe(v33, 2, 0, 0LL);
  Instance = this->fields.decideButton;
  if ( !Instance )
    goto LABEL_35;
  (*(void (__fastcall **)(void *, __int64, _QWORD, _QWORD))(*(_QWORD *)Instance + 536LL))(
    Instance,
    3LL,
    0LL,
    *(_QWORD *)(*(_QWORD *)Instance + 544LL));
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
    sub_1B86614(this, shopEntity);
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

  if ( (byte_4A4A758 & 1) == 0 )
  {
    sub_1B863B8(&Method_ShopBuyItemConfirmMenu_OnClickReset__, method);
    byte_4A4A758 = 1;
  }
  v3 = Method_ShopBuyItemConfirmMenu_OnClickReset__;
  if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickReset__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B863D0(Method_ShopBuyItemConfirmMenu_OnClickReset__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
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

  if ( (byte_4A4A730 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, shopEntity);
    sub_1B863B8(&LocalizationManager_TypeInfo, v17);
    sub_1B863B8(&Method_ShopBuyItemConfirmMenu_EndOpen__, v18);
    sub_1B863B8(&ShopBuyItemConfirmMenu_TypeInfo, v19);
    sub_1B863B8(&ShopBuyItemUtility_TypeInfo, v20);
    byte_4A4A730 = 1;
  }
  message = 0LL;
  itemName = 0LL;
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1B8635C(
      (CGThumbnailListItem_o *)&this->fields.onDecide,
      (int32_t)onDecide,
      shopKind,
      (const MethodInfo *)onDecide);
    p_shopEntity = &this->fields.shopEntity;
    this->fields.shopEntity = shopEntity;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.shopEntity, (int32_t)shopEntity, v22, v23);
    this->fields.onReset = onReset;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.onReset, (int32_t)onReset, v24, v25);
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
    sub_1B8635C((CGThumbnailListItem_o *)p_commonConsumeEntities, (int32_t)CommonConsumeEntities, v28, v29);
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
                  v70 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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
    sub_1B86614(gameObject, v27);
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
  if ( (byte_4A4A754 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_bool__TypeInfo, item);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v9);
    sub_1B863B8(&LocalizationManager_TypeInfo, v10);
    sub_1B863B8(&Method_ShopBuyItemConfirmMenu_ReturnWarningRarePri__, v11);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1B863B8(&StringLiteral_3675/*"COMMON_CONFIRM_CANCEL"*/, v13);
    sub_1B863B8(&StringLiteral_19407/*"freeShopCondId"*/, v14);
    this = (ShopBuyItemConfirmMenu_o *)sub_1B863B8(&StringLiteral_10962/*"RETURN_RARE_PRI_SHOP_DECIDE_BUTTON"*/, v15);
    byte_4A4A754 = 1;
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
                  (Il2CppObject *)StringLiteral_19407/*"freeShopCondId"*/,
                  (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          warningMessage = Shop_k__BackingField->fields.warningMessage;
          v21 = (CommonUI_o *)Instance;
          Name = (Il2CppObject *)ShopEntity__getName(Shop_k__BackingField, 0LL);
          v23 = System_String__Format(warningMessage, Name, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v24 = LocalizationManager__Get((System_String_o *)StringLiteral_10962/*"RETURN_RARE_PRI_SHOP_DECIDE_BUTTON"*/, 0LL);
          v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3675/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
          v26 = (System_Action_bool__o *)sub_1B86604(System_Action_bool__TypeInfo);
          System_Action_bool____ctor(v26, (Il2CppObject *)v8, Method_ShopBuyItemConfirmMenu_ReturnWarningRarePri__, 0LL);
          if ( v21 )
          {
            CommonUI__OpenNoTitleDialog(v21, v23, v24, v25, v26, 0LL);
            v8->fields.onChecked = onChecked;
            sub_1B8635C((CGThumbnailListItem_o *)&v8->fields.onChecked, (int32_t)onChecked, v27, v28);
            v8->fields.onCloseReturnWarning = onCloseReturnWarning;
            sub_1B8635C(
              (CGThumbnailListItem_o *)&v8->fields.onCloseReturnWarning,
              (int32_t)onCloseReturnWarning,
              v29,
              v30);
            return;
          }
        }
      }
    }
    sub_1B86614(this, item);
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

  if ( (byte_4A4A74F & 1) == 0 )
  {
    sub_1B863B8(&Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__, *(_QWORD *)&seKind);
    byte_4A4A74F = 1;
  }
  if ( (seKind & 0x80000000) == 0 )
  {
    v4 = Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__;
    if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B863D0(Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B8639C(v4, v4[4]);
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
    sub_1B86614(0LL, isDecide);
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

  if ( (byte_4A4A74A & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, isDecide);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B863B8(&Method_ShopBuyItemConfirmMenu___c__DisplayClass115_0__ReturnWarningRarePri_b__0__, v6);
    sub_1B863B8(&ShopBuyItemConfirmMenu___c__DisplayClass115_0_TypeInfo, v7);
    byte_4A4A74A = 1;
  }
  v8 = sub_1B86604(ShopBuyItemConfirmMenu___c__DisplayClass115_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = this,
        sub_1B8635C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)this, v11, v12),
        *(_BYTE *)(v8 + 24) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v14 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v8,
          Method_ShopBuyItemConfirmMenu___c__DisplayClass115_0__ReturnWarningRarePri_b__0__,
          0LL),
        !Instance) )
  {
    sub_1B86614(v9, v10);
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
  if ( (byte_4A4A73C & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity);
    sub_1B863B8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_1B863B8(&LocalizationManager_TypeInfo, v8);
    sub_1B863B8(&ShopBuyItemConfirmMenu_TypeInfo, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B863B8(&StringLiteral_10330/*"PURCHASE_AFTER_COSTUME"*/, v11);
    sub_1B863B8(&StringLiteral_10335/*"PURCHASE_AFTER_USER_ITEM"*/, v12);
    sub_1B863B8(&StringLiteral_10332/*"PURCHASE_AFTER_ITEM_SET"*/, v13);
    sub_1B863B8(&StringLiteral_8131/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/, v14);
    sub_1B863B8(&StringLiteral_10333/*"PURCHASE_AFTER_PRESENT_BOX"*/, v15);
    sub_1B863B8(&StringLiteral_10331/*"PURCHASE_AFTER_EVENT_SVT_GET"*/, v16);
    sub_1B863B8(&StringLiteral_10337/*"PURCHASE_AFTER_USER_SVT_COIN_PERIOD"*/, v17);
    sub_1B863B8(&StringLiteral_10334/*"PURCHASE_AFTER_QP"*/, v18);
    sub_1B863B8(&StringLiteral_10336/*"PURCHASE_AFTER_USER_SVT_COIN"*/, v19);
    this = (ShopBuyItemConfirmMenu_o *)sub_1B863B8(&StringLiteral_1/*""*/, v20);
    byte_4A4A73C = 1;
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_49;
          MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ItemMaster___);
          Instance = (DataManager_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
          if ( !MasterData_object )
            goto LABEL_49;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        &entity,
                                        (int32_t)Instance,
                                        (const MethodInfo_32142CC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
                v25 = &StringLiteral_10337/*"PURCHASE_AFTER_USER_SVT_COIN_PERIOD"*/;
              else
                v25 = &StringLiteral_10336/*"PURCHASE_AFTER_USER_SVT_COIN"*/;
            }
            else
            {
              presentAheadLabel = v6->fields.presentAheadLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v25 = &StringLiteral_10335/*"PURCHASE_AFTER_USER_ITEM"*/;
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
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10334/*"PURCHASE_AFTER_QP"*/, 0LL);
            if ( v32 )
            {
              v26 = (System_String_o *)Instance;
              v27 = v32;
              goto LABEL_13;
            }
LABEL_49:
            sub_1B86614(Instance, v22);
          }
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8131/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/, 0LL);
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
          v25 = &StringLiteral_10332/*"PURCHASE_AFTER_ITEM_SET"*/;
          goto LABEL_11;
        case 8:
          presentAheadLabel = v6->fields.presentAheadLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v25 = &StringLiteral_10331/*"PURCHASE_AFTER_EVENT_SVT_GET"*/;
          goto LABEL_11;
        default:
          if ( purchaseType != 14 )
            return;
          presentAheadLabel = v6->fields.presentAheadLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v25 = &StringLiteral_10330/*"PURCHASE_AFTER_COSTUME"*/;
          goto LABEL_11;
      }
    }
    else if ( (unsigned int)purchaseType <= 0x15 && ((1 << purchaseType) & 0x290000) != 0 )
    {
LABEL_8:
      presentAheadLabel = v6->fields.presentAheadLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = &StringLiteral_10333/*"PURCHASE_AFTER_PRESENT_BOX"*/;
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
  if ( (byte_4A4A73D & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_20401/*"img_txt_shop"*/, shopEntity);
    this = (ShopBuyItemConfirmMenu_o *)sub_1B863B8(&StringLiteral_20386/*"img_txt_quest"*/, v6);
    byte_4A4A73D = 1;
  }
  if ( !shopEntity )
    sub_1B86614(this, shopEntity);
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
      v10 = &StringLiteral_20386/*"img_txt_quest"*/;
      goto LABEL_9;
    case 7:
    case 9:
LABEL_6:
      ShopBuyItemConfirmMenu__SetSpriteActive(this, v5->fields.bandSprite, 1, v3);
      bandSprite = v5->fields.bandSprite;
      v10 = &StringLiteral_20401/*"img_txt_shop"*/;
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

  if ( (byte_4A4A743 & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu_o *)sub_1B863B8(&AtlasManager_TypeInfo, itemIcon);
    byte_4A4A743 = 1;
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
      sub_1B86614(this, itemIcon);
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

  if ( (byte_4A4A742 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, priceDataLabel);
    sub_1B863B8(&LocalizationManager_TypeInfo, v11);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B863B8(&ShopBuyItemConfirmMenu_TypeInfo, v13);
    sub_1B863B8(&StringLiteral_5574/*"EVENT_ITEM_NEED_INFO"*/, v14);
    byte_4A4A742 = 1;
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
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5574/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
        num = commonConsumeEnt->fields.num;
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v17, v18, v19);
        Name = (Il2CppObject *)CommonConsumeEntity__GetName(commonConsumeEnt, 0LL);
        shopEntity = System_String__Format_61686468(v16, v20, Name, 0LL);
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
          sub_1B86614(shopEntity, v23);
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
  if ( (byte_4A4A744 & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, shopEntity);
    sub_1B863B8(&EventRewardRootComponent_TypeInfo, v8);
    sub_1B863B8(&ShopBuyItemConfirmMenu_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_15886/*"_"*/, v10);
    this = (ShopBuyItemConfirmMenu_o *)sub_1B863B8(&StringLiteral_17392/*"btn_txt_trade"*/, v11);
    byte_4A4A744 = 1;
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
    v17 = System_String__Concat_61685428(VALENTINE_BTN_NAME, v15, (System_String_o *)StringLiteral_15886/*"_"*/, v16, 0LL);
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
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17392/*"btn_txt_trade"*/, 0LL);
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
      sub_1B86614(this, shopEntity);
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
  UnityEngine_Object_o *shopResetButton; // x21
  __int64 v14; // x1
  ShopEntity_o *Master_object; // x0
  int32_t v16; // w21
  struct ShopEntity_o *shopEntity; // x8
  Il2CppObject *v18; // x22
  struct ShopEntity_o *v19; // x8
  int32_t resetLimitNum; // w8
  Il2CppObject *v21; // x22
  unsigned int v22; // w21
  UISprite_o *shopResetButtonSprite; // x22
  __int64 v24; // x1
  ShopResetEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A4A756 & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, isCan);
    sub_1B863B8(&Method_DataManager_GetMaster_ItemMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMaster_ShopResetMaster___, v6);
    sub_1B863B8(&Method_DataManager_GetMaster_UserItemMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMaster_UserShopMaster___, v8);
    sub_1B863B8(&DataManager_TypeInfo, v9);
    sub_1B863B8(&NetworkManager_TypeInfo, v10);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B863B8(&StringLiteral_17386/*"btn_txt_stock_reset"*/, v12);
    byte_4A4A756 = 1;
  }
  entity = 0LL;
  shopResetButton = (UnityEngine_Object_o *)this->fields.shopResetButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shopResetButton, 0LL, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ShopEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !Master_object )
      goto LABEL_65;
    if ( this->fields.shopState != 18 )
      goto LABEL_50;
    if ( !this->fields.shopEntity )
      goto LABEL_65;
    v16 = *(&Master_object->fields.defaultLimitCount + 1);
    if ( !ShopEntity__IsSoldOut(this->fields.shopEntity, 0LL) )
      goto LABEL_50;
    Master_object = this->fields.shopEntity;
    if ( !Master_object )
      goto LABEL_65;
    if ( ShopEntity__GetIsNotHavingShopItemReceived(Master_object, 0LL) )
      goto LABEL_50;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ShopEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ShopResetMaster___);
    shopEntity = this->fields.shopEntity;
    if ( !shopEntity || !Master_object )
      goto LABEL_65;
    if ( ShopResetMaster__TryGetEntity(
           (ShopResetMaster_o *)Master_object,
           &entity,
           shopEntity->fields.baseShopId,
           v16,
           0LL) )
    {
      Master_object = (ShopEntity_o *)this->fields.decideButton;
      if ( !Master_object )
        goto LABEL_65;
      Master_object = (ShopEntity_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)Master_object,
                                        0LL);
      if ( !Master_object )
        goto LABEL_65;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
      Master_object = (ShopEntity_o *)this->fields.shopResetButton;
      if ( !Master_object )
        goto LABEL_65;
      Master_object = (ShopEntity_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)Master_object,
                                        0LL);
      if ( !Master_object )
        goto LABEL_65;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v18 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserShopMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, v14);
        byte_4A48C25 = 1;
      }
      Master_object = (ShopEntity_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = (ShopEntity_o *)NetworkManager_TypeInfo;
      }
      v19 = this->fields.shopEntity;
      if ( !v19 )
        goto LABEL_65;
      if ( !v18 )
        goto LABEL_65;
      Master_object = (ShopEntity_o *)UserShopMaster__GetEntityDefinitely(
                                        (UserShopMaster_o *)v18,
                                        *((_QWORD *)Master_object[1].monitor + 8),
                                        v19->fields.baseShopId,
                                        0LL);
      if ( !entity )
        goto LABEL_65;
      resetLimitNum = entity->fields.resetLimitNum;
      if ( !resetLimitNum )
        goto LABEL_68;
      if ( !Master_object )
        goto LABEL_65;
      if ( resetLimitNum > Master_object->fields.slot )
      {
LABEL_68:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v21 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4A48C25 )
        {
          sub_1B863B8(&NetworkManager_TypeInfo, v14);
          byte_4A48C25 = 1;
        }
        Master_object = (ShopEntity_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Master_object = (ShopEntity_o *)NetworkManager_TypeInfo;
        }
        if ( !v21 )
          goto LABEL_65;
        Master_object = (ShopEntity_o *)UserItemMaster__GetEntityDefinitely(
                                          (UserItemMaster_o *)v21,
                                          *((_QWORD *)Master_object[1].monitor + 8),
                                          v16,
                                          0LL);
        if ( !Master_object )
          goto LABEL_65;
        if ( *(&Master_object->fields.eventId + 1) <= 0 )
          v22 = 3;
        else
          v22 = 0;
        goto LABEL_56;
      }
    }
    else
    {
LABEL_50:
      Master_object = (ShopEntity_o *)this->fields.decideButton;
      if ( !Master_object )
        goto LABEL_65;
      Master_object = (ShopEntity_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)Master_object,
                                        0LL);
      if ( !Master_object )
        goto LABEL_65;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
      Master_object = (ShopEntity_o *)this->fields.shopResetButton;
      if ( !Master_object )
        goto LABEL_65;
      Master_object = (ShopEntity_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)Master_object,
                                        0LL);
      if ( !Master_object )
        goto LABEL_65;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    }
    v22 = 3;
LABEL_56:
    shopResetButtonSprite = this->fields.shopResetButtonSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(shopResetButtonSprite, (System_String_o *)StringLiteral_17386/*"btn_txt_stock_reset"*/, 0LL);
    Master_object = (ShopEntity_o *)this->fields.shopResetButton;
    if ( Master_object )
    {
      ((void (__fastcall *)(ShopEntity_o *, _QWORD, __int64, void *))Master_object->klass[1]._1.events)(
        Master_object,
        v22,
        1LL,
        Master_object->klass[1]._1.properties);
      goto LABEL_60;
    }
LABEL_65:
    sub_1B86614(Master_object, v14);
  }
LABEL_60:
  Master_object = (ShopEntity_o *)this->fields.decideButton;
  if ( !Master_object )
    goto LABEL_65;
  if ( isCan )
    v24 = 0LL;
  else
    v24 = 3LL;
  ((void (__fastcall *)(ShopEntity_o *, __int64, __int64, void *))Master_object->klass[1]._1.events)(
    Master_object,
    v24,
    1LL,
    Master_object->klass[1]._1.properties);
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
  if ( (byte_4A4A740 & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, shopEntity);
    this = (ShopBuyItemConfirmMenu_o *)sub_1B863B8(&StringLiteral_9162/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/, v7);
    byte_4A4A740 = 1;
  }
  if ( !shopEntity )
    sub_1B86614(this, shopEntity);
  if ( shopEntity->fields.payType != 6 )
    goto LABEL_10;
  this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetItemCount(shopEntity, 0LL);
  v8 = (int)this < 2 && isNotHavingShopItemReceived;
  if ( (int)this <= 1 && isNotHavingShopItemReceived )
  {
    extensionInfoLabel = v6->fields.extensionInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9162/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/, 0LL);
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
  if ( (byte_4A4A735 & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu_o *)sub_1B863B8(&StringLiteral_9128/*"NONE"*/, shopEntity);
    byte_4A4A735 = 1;
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
    sub_1B86614(this, shopEntity);
  }
  if ( purchaseType == 1 || purchaseType == 4 )
    goto LABEL_18;
LABEL_16:
  if ( !System_String__IsNullOrEmpty(shopEntity->fields.infoMessage, 0LL)
    && System_String__op_Inequality(shopEntity->fields.infoMessage, (System_String_o *)StringLiteral_9128/*"NONE"*/, 0LL) )
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.onDecide, (int32_t)onDecide, (int32_t)method, v3);
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

  if ( (byte_4A4A736 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, shopEntity);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v7);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A4A736 = 1;
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
      sub_1B86614(gameObject, v12);
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
    gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_32;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
    gameObject = (UnityEngine_Component_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
    if ( !MasterData_object )
      goto LABEL_32;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
           (Il2CppObject **)&v18,
           (int32_t)gameObject,
           (const MethodInfo_32142CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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

  if ( (byte_4A4A731 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, label);
    byte_4A4A731 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_1B86614(gameObject, v7);
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

  if ( (byte_4A4A732 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, label);
    byte_4A4A732 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1B86614(v6, v7);
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
  if ( (byte_4A4A73A & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, shopEntity);
    sub_1B863B8(&StringLiteral_15615/*"[000000]"*/, v9);
    this = (ShopBuyItemConfirmMenu_o *)sub_1B863B8(&StringLiteral_15616/*"[000000]？"*/, v10);
    byte_4A4A73A = 1;
  }
  v19 = 0LL;
  if ( !shopEntity )
    sub_1B86614(this, shopEntity);
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
      v18 = (System_String_o *)StringLiteral_15615/*"[000000]"*/;
      goto LABEL_16;
    }
    messageLabel = v8->fields.messageLabel;
    v16 = message;
LABEL_15:
    v18 = (System_String_o *)StringLiteral_15615/*"[000000]"*/;
LABEL_16:
    v11 = System_String__Concat_61645176(v18, v16, 0LL);
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
  v15 = (System_String_o *)StringLiteral_15616/*"[000000]？"*/;
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

  if ( (byte_4A4A737 & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, shopEntity);
    sub_1B863B8(&StringLiteral_25308/*"？"*/, v11);
    byte_4A4A737 = 1;
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
    sub_1B86614(IsNullOrEmpty, v13);
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
  v14 = (System_String_o *)StringLiteral_25308/*"？"*/;
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
  if ( (byte_4A4A73F & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, shopEntity);
    this = (ShopBuyItemConfirmMenu_o *)sub_1B863B8(&StringLiteral_11866/*"SHOP_BUY_ITEM_HOLD"*/, v7);
    byte_4A4A73F = 1;
  }
  if ( !isInPreparation )
  {
    if ( shopEntity )
      goto LABEL_8;
LABEL_13:
    sub_1B86614(this, shopEntity);
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
  v11 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11866/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
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

  if ( (byte_4A4A757 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_ServantMaster___, shopEntity);
    sub_1B863B8(&DataManager_TypeInfo, v5);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B863B8(&ShopBuyItemUtility_TypeInfo, v9);
    byte_4A4A757 = 1;
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
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantMaster___);
                  TargetId = (Il2CppObject *)ShopEntity__get_TargetId(shopEntity, 0LL);
                  if ( !Master_object )
                    goto LABEL_42;
                  if ( DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                         &entity,
                         (int32_t)TargetId,
                         (const MethodInfo_32142CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
                        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v33, 0LL);
                        goto LABEL_38;
                      }
LABEL_42:
                      sub_1B86614(TargetId, v18);
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
  const MethodInfo *v27; // x5
  __int64 v28; // x21
  const MethodInfo *v29; // x1
  unsigned __int64 i; // x23
  struct System_Int32_array *v31; // x8
  __int64 v32; // x24
  struct UILabel_array *priceDataLabels; // x8
  struct UIIconLabel_array *priceIconLabels; // x8
  struct UILabel_array *v35; // x8
  struct ItemIconComponent_array *eventItemIcons; // x8
  struct UILabel_array *v37; // x8
  UILabel_o *v38; // x25
  System_String_o *v39; // x26
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  struct UIIconLabel_array *v43; // x8
  UIIconLabel_o *v44; // x25
  int32_t v45; // w26
  struct UILabel_o *priceDataLabel; // x22
  __int64 *v47; // x8
  System_String_o *v48; // x0
  System_String_o *v49; // x1
  UILabel_o *v50; // x0
  struct System_Int32_array *v51; // x8
  Il2CppObject *v52; // x0
  UILabel_o *v53; // x23
  Il2CppObject *v54; // x22
  __int64 *v55; // x8
  struct System_Int32_array *v56; // x8
  Il2CppObject *v57; // x0
  UIIconLabel_o *v58; // x23
  int32_t v59; // w24
  UILabel_o *v60; // x23
  UIIconLabel_o *v61; // x23
  int32_t v62; // w24
  int32_t Price; // w21
  double v64; // d0
  int v65; // w21
  struct System_Int32_array *v66; // x8
  UIIconLabel_o *v67; // x19
  int32_t v68; // w22
  UILabel_o *priceFreeDataLabel; // x19
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  __int64 v71; // x9
  EventRewardRootComponent_c *v72; // x0
  int32_t *p_AnotherPayUsedItemId_k__BackingField; // x8
  _BOOL8 IsSetStrikethrough; // x0
  const MethodInfo *v75; // x3
  __int64 v76; // x8
  __int64 v77; // x8
  __int64 v78; // x9
  __int64 v79; // x10
  __int64 j; // x20
  struct UILabel_array *v81; // x11
  unsigned __int64 max_length; // x12
  unsigned __int64 v83; // x10
  struct UIIconLabel_array *v84; // x11
  unsigned __int64 v85; // x12
  UIIconLabel_o *v86; // x2
  struct ItemIconComponent_array *v87; // x11
  unsigned __int64 v88; // x12
  ItemIconComponent_o *v89; // x3
  __int64 v90; // x10
  struct System_Int32_array *itemIds; // x8
  int32_t v92; // w23
  Il2CppObject *Entity; // x23
  UILabel_o *v94; // x22
  System_String_o *v95; // x24
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  UILabel_o *v99; // x22
  UIIconLabel_o *priceIconLabel; // x22
  int32_t PriceIcon; // w24
  int32_t v102; // [xsp+8h] [xbp-68h] BYREF
  int32_t Prices; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4

  v7 = shopEntity;
  if ( (byte_4A4A741 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity);
    sub_1B863B8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_1B863B8(&EventRewardRootComponent_TypeInfo, v10);
    sub_1B863B8(&int_TypeInfo, v11);
    sub_1B863B8(&LocalizationManager_TypeInfo, v12);
    sub_1B863B8(&System_Math_TypeInfo, v13);
    sub_1B863B8(&ShopBuyItemConfirmMenu_TypeInfo, v14);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B863B8(&StringLiteral_12142/*"STONE_FRAGMENTS_NEED_INFO"*/, v16);
    sub_1B863B8(&StringLiteral_1961/*"ANONYMOUS_NEED_INFO"*/, v17);
    sub_1B863B8(&StringLiteral_12148/*"STONE_NEED_INFO"*/, v18);
    sub_1B863B8(&StringLiteral_10655/*"QP_NAME"*/, v19);
    sub_1B863B8(&StringLiteral_10795/*"RARE_PRI_NEED_INFO"*/, v20);
    sub_1B863B8(&StringLiteral_1768/*"?"*/, v21);
    sub_1B863B8(&StringLiteral_5574/*"EVENT_ITEM_NEED_INFO"*/, v22);
    sub_1B863B8(&StringLiteral_8383/*"MANA_NEED_INFO"*/, v23);
    sub_1B863B8(&StringLiteral_11895/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, v24);
    byte_4A4A741 = 1;
  }
  eventItemIcon = (__int64)this->fields.eventItemIcon;
  if ( !eventItemIcon )
    goto LABEL_186;
  ItemIconComponent__Clear((ItemIconComponent_o *)eventItemIcon, 0LL);
  eventItemIcon = (__int64)ShopBuyItemConfirmMenu__GetUserItemCounts(this, v26);
  if ( !v7 )
    goto LABEL_186;
  v28 = eventItemIcon;
  switch ( v7->fields.payType )
  {
    case 1:
      priceDataLabel = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v47 = &StringLiteral_12148/*"STONE_NEED_INFO"*/;
      goto LABEL_51;
    case 2:
      priceDataLabel = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v47 = &StringLiteral_10655/*"QP_NAME"*/;
LABEL_51:
      v48 = (System_String_o *)*v47;
      goto LABEL_55;
    case 4:
      priceDataLabel = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v48 = (System_String_o *)StringLiteral_8383/*"MANA_NEED_INFO"*/;
LABEL_55:
      eventItemIcon = (__int64)LocalizationManager__Get(v48, 0LL);
      if ( !priceDataLabel )
        goto LABEL_186;
      v49 = (System_String_o *)eventItemIcon;
      v50 = priceDataLabel;
      goto LABEL_97;
    case 6:
    case 0xB:
      if ( ShopEntity__GetItemCount(v7, 0LL) < 2 )
      {
        if ( isNotHavingShopItemReceived )
          return;
        eventItemIcon = ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v29);
        if ( (eventItemIcon & 1) != 0 )
        {
          if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          if ( !byte_4A4907A )
          {
            sub_1B863B8(&EventRewardRootComponent_TypeInfo, shopEntity);
            byte_4A4907A = 1;
          }
          v72 = EventRewardRootComponent_TypeInfo;
          if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            v72 = EventRewardRootComponent_TypeInfo;
          }
          p_AnotherPayUsedItemId_k__BackingField = &v72->static_fields->_AnotherPayUsedItemId_k__BackingField;
        }
        else
        {
          itemIds = v7->fields.itemIds;
          if ( !itemIds )
            goto LABEL_186;
          if ( !itemIds->max_length )
            goto LABEL_187;
          p_AnotherPayUsedItemId_k__BackingField = &itemIds->m_Items[1];
        }
        v92 = *p_AnotherPayUsedItemId_k__BackingField;
        eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !eventItemIcon )
          goto LABEL_186;
        eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)eventItemIcon,
                                   (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !eventItemIcon )
          goto LABEL_186;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
                   v92,
                   (const MethodInfo_3214280 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( isInPreparation )
        {
          if ( ShopEntity__checkFlag(v7, 64, 0LL) )
          {
            eventItemIcon = (__int64)this->fields.priceDataLabel;
            if ( eventItemIcon )
            {
              UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1768/*"?"*/, 0LL);
              eventItemIcon = (__int64)this->fields.priceIconLabel;
              if ( eventItemIcon )
              {
                UIIconLabel__SetEventQuestion((UIIconLabel_o *)eventItemIcon, 0LL);
                return;
              }
            }
            goto LABEL_186;
          }
          if ( ShopEntity__checkFlag(v7, 32, 0LL) )
          {
            eventItemIcon = (__int64)this->fields.priceDataLabel;
            if ( eventItemIcon )
            {
              UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1768/*"?"*/, 0LL);
              eventItemIcon = (__int64)this->fields.eventItemIcon;
              if ( eventItemIcon )
              {
                ItemIconComponent__SetItemImage((ItemIconComponent_o *)eventItemIcon, 8007, 0LL);
                return;
              }
            }
            goto LABEL_186;
          }
        }
        v94 = this->fields.priceDataLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v95 = LocalizationManager__Get((System_String_o *)StringLiteral_5574/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
        Prices = ShopEntity__GetPrices(v7, 0, 0LL);
        eventItemIcon = j_il2cpp_value_box_0(int_TypeInfo, &Prices, v96, v97, v98);
        if ( !Entity )
          goto LABEL_186;
        eventItemIcon = (__int64)System_String__Format_61686468(
                                   v95,
                                   (Il2CppObject *)eventItemIcon,
                                   (Il2CppObject *)Entity[1].monitor,
                                   0LL);
        if ( !v94 )
          goto LABEL_186;
        UILabel__set_text(v94, (System_String_o *)eventItemIcon, 0LL);
        v99 = this->fields.priceDataLabel;
        eventItemIcon = (__int64)ShopBuyItemConfirmMenu_TypeInfo;
        if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
        if ( !v99 )
          goto LABEL_186;
        UILabel__SetCondensedScale(
          v99,
          ShopBuyItemConfirmMenu_TypeInfo->static_fields->PRICE_DATA_LABEL_MAX_WIDTH,
          0,
          0LL);
        priceIconLabel = this->fields.priceIconLabel;
        PriceIcon = ShopEntity__GetPriceIcon(v7, 0LL);
        eventItemIcon = ShopEntity__GetPrices(v7, 0, 0LL);
        if ( !v28 )
          goto LABEL_186;
        if ( *(_DWORD *)(v28 + 24) )
        {
          if ( priceIconLabel )
          {
            UIIconLabel__SetPurchaseDecision(priceIconLabel, PriceIcon, eventItemIcon, *(_DWORD *)(v28 + 32), 0LL);
            eventItemIcon = (__int64)this->fields.eventItemIcon;
            if ( eventItemIcon )
            {
              ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, (int32_t)Entity[2].monitor, -1, 1, 0LL);
              return;
            }
          }
LABEL_186:
          sub_1B86614(eventItemIcon, shopEntity);
        }
LABEL_187:
        sub_1B8661C(eventItemIcon, shopEntity);
      }
      if ( ShopEntity__GetItemCount(v7, 0LL) >= 1 )
      {
        for ( i = 0LL; (__int64)i < ShopEntity__GetItemCount(v7, 0LL); ++i )
        {
          eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !eventItemIcon )
            goto LABEL_186;
          eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)eventItemIcon,
                                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ItemMaster___);
          v31 = v7->fields.itemIds;
          if ( !v31 )
            goto LABEL_186;
          if ( i >= v31->max_length )
            goto LABEL_187;
          if ( !eventItemIcon )
            goto LABEL_186;
          eventItemIcon = (__int64)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
                                     v31->m_Items[i + 1],
                                     (const MethodInfo_3214280 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          v32 = eventItemIcon;
          if ( !isInPreparation )
            goto LABEL_30;
          eventItemIcon = ShopEntity__checkFlag(v7, 64, 0LL);
          if ( (eventItemIcon & 1) != 0 )
          {
            priceDataLabels = this->fields.priceDataLabels;
            if ( !priceDataLabels )
              goto LABEL_186;
            if ( i >= priceDataLabels->max_length )
              goto LABEL_187;
            eventItemIcon = (__int64)priceDataLabels->m_Items[i];
            if ( !eventItemIcon )
              goto LABEL_186;
            UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1768/*"?"*/, 0LL);
            priceIconLabels = this->fields.priceIconLabels;
            if ( !priceIconLabels )
              goto LABEL_186;
            if ( i >= priceIconLabels->max_length )
              goto LABEL_187;
            eventItemIcon = (__int64)priceIconLabels->m_Items[i];
            if ( !eventItemIcon )
              goto LABEL_186;
            UIIconLabel__SetEventQuestion((UIIconLabel_o *)eventItemIcon, 0LL);
            continue;
          }
          eventItemIcon = ShopEntity__checkFlag(v7, 32, 0LL);
          if ( (eventItemIcon & 1) != 0 )
          {
            v35 = this->fields.priceDataLabels;
            if ( !v35 )
              goto LABEL_186;
            if ( i >= v35->max_length )
              goto LABEL_187;
            eventItemIcon = (__int64)v35->m_Items[i];
            if ( !eventItemIcon )
              goto LABEL_186;
            UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1768/*"?"*/, 0LL);
            eventItemIcons = this->fields.eventItemIcons;
            if ( !eventItemIcons )
              goto LABEL_186;
            if ( i >= eventItemIcons->max_length )
              goto LABEL_187;
            eventItemIcon = (__int64)eventItemIcons->m_Items[i];
            if ( !eventItemIcon )
              goto LABEL_186;
            ItemIconComponent__SetItemImage((ItemIconComponent_o *)eventItemIcon, 8007, 0LL);
          }
          else
          {
LABEL_30:
            v37 = this->fields.priceDataLabels;
            if ( !v37 )
              goto LABEL_186;
            if ( i >= v37->max_length )
              goto LABEL_187;
            v38 = v37->m_Items[i];
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v39 = LocalizationManager__Get((System_String_o *)StringLiteral_5574/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
            v102 = ShopEntity__GetPrices(v7, i, 0LL);
            eventItemIcon = j_il2cpp_value_box_0(int_TypeInfo, &v102, v40, v41, v42);
            if ( !v32 )
              goto LABEL_186;
            eventItemIcon = (__int64)System_String__Format_61686468(
                                       v39,
                                       (Il2CppObject *)eventItemIcon,
                                       *(Il2CppObject **)(v32 + 24),
                                       0LL);
            if ( !v38 )
              goto LABEL_186;
            UILabel__set_text(v38, (System_String_o *)eventItemIcon, 0LL);
            v43 = this->fields.priceIconLabels;
            if ( !v43 )
              goto LABEL_186;
            if ( i >= v43->max_length )
              goto LABEL_187;
            v44 = v43->m_Items[i];
            v45 = ShopEntity__GetPriceIcon(v7, 0LL);
            eventItemIcon = ShopEntity__GetPrices(v7, i, 0LL);
            if ( !v28 )
              goto LABEL_186;
            if ( i >= *(unsigned int *)(v28 + 24) )
              goto LABEL_187;
            if ( !v44 )
              goto LABEL_186;
            UIIconLabel__SetPurchaseDecision(v44, v45, eventItemIcon, *(_DWORD *)(v28 + 32 + 4 * i), 0LL);
            eventItemIcon = (__int64)this->fields.eventItemIcon;
            if ( !eventItemIcon )
              goto LABEL_186;
            ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, *(_DWORD *)(v32 + 40), -1, 1, 0LL);
          }
        }
      }
      return;
    case 8:
      eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_186;
      eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ItemMaster___);
      v51 = v7->fields.itemIds;
      if ( !v51 )
        goto LABEL_186;
      if ( !v51->max_length )
        goto LABEL_187;
      if ( !eventItemIcon )
        goto LABEL_186;
      v52 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
              v51->m_Items[1],
              (const MethodInfo_3214280 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v53 = this->fields.priceDataLabel;
      v54 = v52;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v55 = &StringLiteral_12142/*"STONE_FRAGMENTS_NEED_INFO"*/;
      goto LABEL_71;
    case 9:
      eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_186;
      eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ItemMaster___);
      v56 = v7->fields.itemIds;
      if ( !v56 )
        goto LABEL_186;
      if ( !v56->max_length )
        goto LABEL_187;
      if ( !eventItemIcon )
        goto LABEL_186;
      v57 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
              v56->m_Items[1],
              (const MethodInfo_3214280 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v53 = this->fields.priceDataLabel;
      v54 = v57;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v55 = &StringLiteral_1961/*"ANONYMOUS_NEED_INFO"*/;
LABEL_71:
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)*v55, 0LL);
      if ( !v53 )
        goto LABEL_186;
      UILabel__set_text(v53, (System_String_o *)eventItemIcon, 0LL);
      v58 = this->fields.priceIconLabel;
      v59 = ShopEntity__GetPriceIcon(v7, 0LL);
      eventItemIcon = ShopEntity__GetPrice(v7, 0LL);
      if ( !v28 )
        goto LABEL_186;
      if ( !*(_DWORD *)(v28 + 24) )
        goto LABEL_187;
      if ( !v58 )
        goto LABEL_186;
      UIIconLabel__SetPurchaseDecision(v58, v59, eventItemIcon, *(_DWORD *)(v28 + 32), 0LL);
      if ( !v54 )
        goto LABEL_186;
      eventItemIcon = (__int64)this->fields.eventItemIcon;
      if ( !eventItemIcon )
        goto LABEL_186;
      ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, (int32_t)v54[2].monitor, -1, 1, 0LL);
      return;
    case 0xA:
      v60 = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10795/*"RARE_PRI_NEED_INFO"*/, 0LL);
      if ( !v60 )
        goto LABEL_186;
      UILabel__set_text(v60, (System_String_o *)eventItemIcon, 0LL);
      v61 = this->fields.priceIconLabel;
      v62 = ShopEntity__GetPriceIcon(v7, 0LL);
      eventItemIcon = ShopEntity__GetPrice(v7, 0LL);
      if ( !v28 )
        goto LABEL_186;
      if ( !*(_DWORD *)(v28 + 24) )
        goto LABEL_187;
      if ( !v61 )
        goto LABEL_186;
      UIIconLabel__SetPurchaseDecision(v61, v62, eventItemIcon, *(_DWORD *)(v28 + 32), 0LL);
      if ( ShopEntity__GetPrice(v7, 0LL) )
      {
        Price = ShopEntity__GetPrice(v7, 0LL);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v64 = log10((double)Price);
        if ( v64 == INFINITY )
          v65 = -2147483647;
        else
          v65 = (int)v64 + 1;
      }
      else
      {
        v65 = 1;
      }
      IsSetStrikethrough = ShopEntity__IsSetStrikethrough(v7, isInPreparation, 0LL);
      if ( IsSetStrikethrough )
      {
        v76 = 392LL;
        if ( v65 == 1 )
          v76 = 384LL;
        ShopBuyItemConfirmMenu__SetLabelActive(
          (ShopBuyItemConfirmMenu_o *)IsSetStrikethrough,
          *(UILabel_o **)((char *)&this->klass + v76),
          1,
          v75);
      }
      if ( !ShopEntity__IsAfterTheFreeShopReleaseDate(v7, 0LL) || !ShopEntity__IsFulFilledFreeExchangeCondition(v7, 0LL) )
        return;
      eventItemIcon = (__int64)this->fields.freeLabel;
      if ( !eventItemIcon )
        goto LABEL_186;
      eventItemIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventItemIcon, 0LL);
      if ( !eventItemIcon )
        goto LABEL_186;
      eventItemIcon = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)eventItemIcon, 0LL);
      if ( !eventItemIcon )
        goto LABEL_186;
      v77 = 500LL;
      if ( v65 == 1 )
        v77 = 488LL;
      v78 = v65 == 1 ? 484LL : 496LL;
      v79 = v65 == 1 ? 480LL : 492LL;
      v104.fields.z = *(float *)((char *)&this->klass + v77);
      v104.fields.y = *(float *)((char *)&this->klass + v78);
      v104.fields.x = *(float *)((char *)&this->klass + v79);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventItemIcon, v104, 0LL);
      eventItemIcon = (__int64)this->fields.freeLabel;
      if ( !eventItemIcon )
        goto LABEL_186;
      eventItemIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventItemIcon, 0LL);
      if ( !eventItemIcon )
        goto LABEL_186;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventItemIcon, 1, 0LL);
      return;
    case 0xC:
      eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_186;
      eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ItemMaster___);
      v66 = v7->fields.itemIds;
      if ( !v66 )
        goto LABEL_186;
      if ( !v66->max_length )
        goto LABEL_187;
      if ( !eventItemIcon )
        goto LABEL_186;
      eventItemIcon = (__int64)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
                                 v66->m_Items[1],
                                 (const MethodInfo_3214280 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !eventItemIcon || !this->fields.priceDataLabel )
        goto LABEL_186;
      v49 = *(System_String_o **)(eventItemIcon + 24);
      v50 = this->fields.priceDataLabel;
LABEL_97:
      UILabel__set_text(v50, v49, 0LL);
      v67 = this->fields.priceIconLabel;
      v68 = ShopEntity__GetPriceIcon(v7, 0LL);
      eventItemIcon = ShopEntity__GetPrice(v7, 0LL);
      if ( !v28 )
        goto LABEL_186;
      if ( !*(_DWORD *)(v28 + 24) )
        goto LABEL_187;
      if ( !v67 )
        goto LABEL_186;
      UIIconLabel__SetPurchaseDecision(v67, v68, eventItemIcon, *(_DWORD *)(v28 + 32), 0LL);
      return;
    case 0xD:
      priceFreeDataLabel = this->fields.priceFreeDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11895/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, 0LL);
      if ( !priceFreeDataLabel )
        goto LABEL_186;
      UILabel__set_text(priceFreeDataLabel, (System_String_o *)eventItemIcon, 0LL);
      return;
    case 0xE:
      commonConsumeEntities = this->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        return;
      v71 = *(_QWORD *)&commonConsumeEntities->max_length;
      if ( (_DWORD)v71 == 1 )
      {
        ShopBuyItemConfirmMenu__SetCommonConsumePriceText(
          this,
          this->fields.priceDataLabel,
          this->fields.priceIconLabel,
          this->fields.eventItemIcon,
          commonConsumeEntities->m_Items[0],
          v27);
        return;
      }
      if ( (int)v71 < 2 )
        return;
      for ( j = 4LL; ; ++j )
      {
        v81 = this->fields.priceDataLabels;
        if ( !v81 )
          break;
        max_length = v81->max_length;
        v83 = j - 4;
        if ( j - 4 >= (int)max_length )
        {
          shopEntity = 0LL;
        }
        else
        {
          if ( v83 >= max_length )
            goto LABEL_187;
          shopEntity = (ShopEntity_o *)*((_QWORD *)&v81->obj.klass + j);
        }
        v84 = this->fields.priceIconLabels;
        if ( !v84 )
          break;
        v85 = v84->max_length;
        if ( (__int64)v83 >= (int)v85 )
        {
          v86 = 0LL;
        }
        else
        {
          if ( v83 >= v85 )
            goto LABEL_187;
          v86 = (UIIconLabel_o *)*((_QWORD *)&v84->obj.klass + j);
        }
        v87 = this->fields.eventItemIcons;
        if ( !v87 )
          break;
        v88 = v87->max_length;
        if ( (__int64)v83 >= (int)v88 )
        {
          v89 = 0LL;
        }
        else
        {
          if ( v83 >= v88 )
            goto LABEL_187;
          v89 = (ItemIconComponent_o *)*((_QWORD *)&v87->obj.klass + j);
        }
        if ( v83 >= (unsigned int)v71 )
          goto LABEL_187;
        ShopBuyItemConfirmMenu__SetCommonConsumePriceText(
          this,
          (UILabel_o *)shopEntity,
          v86,
          v89,
          *((CommonConsumeEntity_o **)&commonConsumeEntities->obj.klass + j),
          v27);
        commonConsumeEntities = this->fields.commonConsumeEntities;
        if ( !commonConsumeEntities )
          goto LABEL_186;
        LODWORD(v71) = commonConsumeEntities->max_length;
        v90 = j - 3;
        if ( v90 >= (int)v71 )
          return;
      }
      goto LABEL_186;
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
    sub_1B86614(v12, v13);
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
        sub_1B86614(this, shopEntity);
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

  if ( (byte_4A4A733 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, sprite);
    byte_4A4A733 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_1B86614(gameObject, v7);
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

  if ( (byte_4A4A734 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, sprite);
    byte_4A4A734 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !sprite )
      sub_1B86614(v6, v7);
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
  struct System_Int32_array *targetIds; // x8
  __int64 *v34; // x8
  UILabel_o *v35; // x19
  unsigned int shopType; // w8
  System_Int32_array *v37; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4A4A73E & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, shopEntity);
    sub_1B863B8(&Method_DataManager_GetMaster_ShopReleaseMaster___, v7);
    sub_1B863B8(&DataManager_TypeInfo, v8);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1B863B8(&LocalizationManager_TypeInfo, v10);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B863B8(&StringLiteral_11888/*"SHOP_CANT_BUY"*/, v12);
    sub_1B863B8(&StringLiteral_11928/*"SHOP_QUEST_OPEN"*/, v13);
    sub_1B863B8(&StringLiteral_11926/*"SHOP_QUEST_ALREADY_CLEARED"*/, v14);
    sub_1B863B8(&StringLiteral_11924/*"SHOP_NOT_RELEASE_SET_ITEM"*/, v15);
    sub_1B863B8(&StringLiteral_1/*""*/, v16);
    sub_1B863B8(&StringLiteral_11834/*"SHOP_ALREADY_GET"*/, v17);
    byte_4A4A73E = 1;
  }
  questId = 0;
  v37 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ShopReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
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
      Master_object = (ShopReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (ShopReleaseMaster_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Master_object,
                                               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
      targetIds = shopEntity->fields.targetIds;
      if ( !targetIds )
        goto LABEL_67;
      if ( !targetIds->max_length )
        sub_1B8661C(Master_object, v19);
      if ( !Master_object )
        goto LABEL_67;
      IsServant = (System_String_o *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                       &entity,
                                       targetIds->m_Items[1],
                                       (const MethodInfo_32142CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
            v34 = &StringLiteral_11888/*"SHOP_CANT_BUY"*/;
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
            v34 = &StringLiteral_11834/*"SHOP_ALREADY_GET"*/;
LABEL_64:
            IsServant = LocalizationManager__Get((System_String_o *)*v34, 0LL);
            v32 = IsServant;
LABEL_66:
            textOnMask = this->fields.textOnMask;
            goto LABEL_59;
          }
          goto LABEL_58;
        }
LABEL_67:
        sub_1B86614(Master_object, v19);
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
      IsServant = (System_String_o *)ShopEntity__IsAnotherItemBuyable(shopEntity, &v37, 0LL);
      if ( ((unsigned __int8)IsServant & 1) != 0 )
        goto LABEL_58;
LABEL_12:
      v29 = this->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = &StringLiteral_11834/*"SHOP_ALREADY_GET"*/;
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
      v30 = &StringLiteral_11924/*"SHOP_NOT_RELEASE_SET_ITEM"*/;
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
            v35 = this->fields.textOnMask;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Master_object = (ShopReleaseMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11928/*"SHOP_QUEST_OPEN"*/, 0LL);
            if ( v35 )
            {
              UILabel__set_text(v35, (System_String_o *)Master_object, 0LL);
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
      v30 = &StringLiteral_11926/*"SHOP_QUEST_ALREADY_CLEARED"*/;
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
  UILabel_o *warningLabel; // x23
  struct UILabel_o **p_warningLabel; // x24
  void *gameObject; // x0
  ShopBuyItemConfirmMenu_o *v52; // x0
  const MethodInfo *v53; // x3
  ShopBuyItemConfirmMenu_o *v54; // x0
  const MethodInfo *v55; // x3
  ShopBuyItemConfirmMenu_o *v56; // x0
  const MethodInfo *v57; // x3
  UILabel_o *v58; // x19
  __int64 *v59; // x8
  const MethodInfo *v60; // x1
  System_Int32_array *UserItemCounts; // x22
  __int64 v62; // x20
  UnityEngine_Object_o *resetWarningLabel; // x21
  UnityEngine_Object_o *shopResetButton; // x21
  ItemEntity_o *EntityByType; // x0
  struct System_String_StaticFields *p_name; // x8
  ShopBuyItemConfirmMenu_o *v67; // x0
  const MethodInfo *v68; // x3
  EventRewardRootComponent_c *v69; // x0
  int32_t *p_AnotherPayUsedItemId_k__BackingField; // x8
  UILabel_o *v71; // x20
  System_String_o *v72; // x22
  Il2CppObject *v73; // x0
  ShopBuyItemConfirmMenu_o *v74; // x0
  const MethodInfo *v75; // x3
  __int64 *v76; // x8
  __int64 *v77; // x8
  System_String_o *v78; // x21
  struct ShopEntity_o *v79; // x8
  struct System_Int32_array *v80; // x8
  Il2CppObject *monitor; // x1
  BalanceConfig_c *v82; // x8
  int v83; // w22
  UILabel_o *v84; // x22
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  __int64 v86; // x9
  CommonConsumeEntity_o *v87; // x20
  int32_t num; // w22
  struct ShopEntity_o *v89; // x8
  struct System_Int32_array *itemIds; // x8
  int32_t v91; // w19
  struct System_String_o *v92; // x22
  int v93; // w26
  Il2CppClass **v94; // x8
  CommonConsumeEntity_o *v95; // x23
  int v96; // w28
  Il2CppObject *Name; // x0
  System_String_o *v98; // x0
  int stringLength; // w8
  System_String_o *v100; // x0
  Il2CppObject *v101; // x20
  int32_t v102; // w19
  BalanceConfig_c *v103; // x8
  int32_t v104; // w20
  int32_t PresentBoxMax; // w9
  struct UILabel_o *v106; // x19
  __int64 *v107; // x8
  Il2CppObject *MasterData_object; // x19
  int32_t Sum; // w0
  BalanceConfig_c *v110; // x8
  int32_t v111; // w19
  int32_t UserItemMax; // w9
  int v113; // w20
  System_String_o *v114; // x1
  Il2CppObject *Empty; // x21
  int32_t v116; // w22
  int32_t resetLimitNum; // w27
  System_String_o *v118; // x23
  __int64 v119; // x2
  __int64 v120; // x3
  __int64 v121; // x4
  Il2CppObject *v122; // x24
  __int64 v123; // x2
  __int64 v124; // x3
  __int64 v125; // x4
  Il2CppObject *v126; // x0
  System_String_o *v127; // x0
  System_String_o *v128; // x23
  __int64 v129; // x2
  __int64 v130; // x3
  __int64 v131; // x4
  Il2CppObject *v132; // x0
  System_String_o *v133; // x23
  Il2CppObject *Master_object; // x24
  Il2CppObject *v135; // x19
  const MethodInfo *v136; // x3
  System_String_o *v137; // x0
  System_String_o *v138; // x0
  int32_t v139; // [xsp+0h] [xbp-A0h] BYREF
  int32_t limitNum; // [xsp+4h] [xbp-9Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-98h] BYREF
  int32_t recordNum[2]; // [xsp+10h] [xbp-90h] BYREF
  int32_t buyCmdCodeNum[2]; // [xsp+18h] [xbp-88h] BYREF
  __int64 buyServantNum; // [xsp+20h] [xbp-80h] BYREF
  ShopResetEntity_o *v145; // [xsp+28h] [xbp-78h] BYREF
  System_Int32_array *possessionAnotherItemId; // [xsp+30h] [xbp-70h] BYREF
  int32_t questId; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4A4A73B & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, shopEntity);
    sub_1B863B8(&Method_DataManager_GetMasterData_ItemMaster___, v9);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserItemMaster___, v10);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v11);
    sub_1B863B8(&Method_DataManager_GetMaster_ItemMaster___, v12);
    sub_1B863B8(&Method_DataManager_GetMaster_ShopResetMaster___, v13);
    sub_1B863B8(&Method_DataManager_GetMaster_UserItemMaster___, v14);
    sub_1B863B8(&Method_DataManager_GetMaster_UserShopMaster___, v15);
    sub_1B863B8(&DataManager_TypeInfo, v16);
    sub_1B863B8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v17);
    sub_1B863B8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v18);
    sub_1B863B8(&EventRewardRootComponent_TypeInfo, v19);
    sub_1B863B8(&int_TypeInfo, v20);
    sub_1B863B8(&LocalizationManager_TypeInfo, v21);
    sub_1B863B8(&NetworkManager_TypeInfo, v22);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v23);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1B863B8(&string_TypeInfo, v25);
    sub_1B863B8(&StringLiteral_11871/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/, v26);
    sub_1B863B8(&StringLiteral_11863/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/, v27);
    sub_1B863B8(&StringLiteral_11852/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_SHORTAGE"*/, v28);
    sub_1B863B8(&StringLiteral_11872/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/, v29);
    sub_1B863B8(&StringLiteral_11853/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_MESSAGE"*/, v30);
    sub_1B863B8(&StringLiteral_11875/*"SHOP_BUY_RARE_PRI_CONFIRM_WARNING"*/, v31);
    sub_1B863B8(&StringLiteral_11868/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/, v32);
    sub_1B863B8(&StringLiteral_10655/*"QP_NAME"*/, v33);
    sub_1B863B8(&StringLiteral_11859/*"SHOP_BUY_CONFIRM_SOLD_OUT_WARNING"*/, v34);
    sub_1B863B8(&StringLiteral_11848/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/, v35);
    sub_1B863B8(&StringLiteral_11855/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/, v36);
    sub_1B863B8(&StringLiteral_11850/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, v37);
    sub_1B863B8(&StringLiteral_11856/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, v38);
    sub_1B863B8(&StringLiteral_11857/*"SHOP_BUY_CONFIRM_QUEST_CLAER"*/, v39);
    sub_1B863B8(&StringLiteral_24947/*"{0}、"*/, v40);
    sub_1B863B8(&StringLiteral_11862/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, v41);
    sub_1B863B8(&StringLiteral_11882/*"SHOP_BUY_STONE_FRAGMENTS_CONFIRM_WARNING"*/, v42);
    sub_1B863B8(&StringLiteral_11865/*"SHOP_BUY_ITEM_FULL_WARNING"*/, v43);
    sub_1B863B8(&StringLiteral_11867/*"SHOP_BUY_ITEM_OVER_WARNING"*/, v44);
    sub_1B863B8(&StringLiteral_1/*""*/, v45);
    sub_1B863B8(&StringLiteral_11851/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_LIMIT"*/, v46);
    sub_1B863B8(&StringLiteral_11858/*"SHOP_BUY_CONFIRM_QUEST_HOLD"*/, v47);
    sub_1B863B8(&StringLiteral_11854/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_NO_LIMIT_MESSAGE"*/, v48);
    byte_4A4A73B = 1;
  }
  questId = 0;
  v145 = 0LL;
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
    goto LABEL_248;
  UILabel__set_fontSize(warningLabel, BalanceConfig_TypeInfo->static_fields->DefaultFontSize, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText(v52, this->fields.warningLabel, (System_String_o *)StringLiteral_1/*""*/, v53);
  ShopBuyItemConfirmMenu__SetLabelText(v54, this->fields.resetWarningLabel, (System_String_o *)StringLiteral_1/*""*/, v55);
  ShopBuyItemConfirmMenu__SetLabelActive(v56, this->fields.resetWarningLabel, 0, v57);
  if ( !shopEntity )
    goto LABEL_248;
  if ( shopEntity->fields.purchaseType == 6 && shopEntity->fields.shopType == 3 )
  {
    if ( isInPreparation )
    {
      if ( !ShopEntity__isQuestNotClearItemClosed(shopEntity, 0, 0LL) )
        goto LABEL_21;
LABEL_14:
      v58 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v59 = &StringLiteral_11857/*"SHOP_BUY_CONFIRM_QUEST_CLAER"*/;
      goto LABEL_58;
    }
    if ( ShopEntity__isQuestNotClear(shopEntity, &questId, 0, 0LL)
      && ShopEntity__isQuestNotClearItemClosedSub(shopEntity, questId, 0, 0LL) )
    {
      goto LABEL_14;
    }
    if ( ShopEntity__IsQuestHold(shopEntity, 0LL) )
    {
      v58 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v59 = &StringLiteral_11858/*"SHOP_BUY_CONFIRM_QUEST_HOLD"*/;
      goto LABEL_58;
    }
  }
LABEL_21:
  if ( ShopEntity__IsSoldOut(shopEntity, 0LL)
    && !ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0LL)
    && !ShopEntity__IsAnotherItemBuyable(shopEntity, &possessionAnotherItemId, 0LL) )
  {
    resetWarningLabel = (UnityEngine_Object_o *)this->fields.resetWarningLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(resetWarningLabel, 0LL, 0LL) )
      goto LABEL_55;
    shopResetButton = (UnityEngine_Object_o *)this->fields.shopResetButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(shopResetButton, 0LL, 0LL) )
      goto LABEL_55;
    gameObject = this->fields.shopResetButton;
    if ( !gameObject )
      goto LABEL_248;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_248;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
    {
LABEL_55:
      v58 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v59 = &StringLiteral_11859/*"SHOP_BUY_CONFIRM_SOLD_OUT_WARNING"*/;
      goto LABEL_58;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    gameObject = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !gameObject )
      goto LABEL_248;
    EntityByType = ItemMaster__GetEntityByType((ItemMaster_o *)gameObject, 37, 0LL);
    if ( EntityByType )
      p_name = (struct System_String_StaticFields *)&EntityByType->fields.name;
    else
      p_name = string_TypeInfo->static_fields;
    Empty = (Il2CppObject *)p_name->Empty;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    gameObject = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !gameObject )
      goto LABEL_248;
    v116 = *((_DWORD *)gameObject + 25);
    gameObject = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ShopResetMaster___);
    if ( !gameObject )
      goto LABEL_248;
    gameObject = (void *)ShopResetMaster__TryGetEntity(
                           (ShopResetMaster_o *)gameObject,
                           &v145,
                           shopEntity->fields.baseShopId,
                           v116,
                           0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !v145 )
        goto LABEL_248;
      resetLimitNum = v145->fields.resetLimitNum;
    }
    else
    {
      resetLimitNum = 0;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( resetLimitNum < 1 )
    {
      v128 = LocalizationManager__Get((System_String_o *)StringLiteral_11854/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_NO_LIMIT_MESSAGE"*/, 0LL);
      limitNum = shopEntity->fields.limitNum;
      v132 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &limitNum, v129, v130, v131);
      v127 = System_String__Format_61686468(v128, Empty, v132, 0LL);
    }
    else
    {
      v118 = LocalizationManager__Get((System_String_o *)StringLiteral_11853/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_MESSAGE"*/, 0LL);
      limitNum = resetLimitNum;
      v122 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &limitNum, v119, v120, v121);
      v139 = shopEntity->fields.limitNum;
      v126 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v139, v123, v124, v125);
      v127 = System_String__Format_61686536(v118, Empty, v122, v126, 0LL);
    }
    v133 = v127;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserShopMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4A48C25 )
    {
      sub_1B863B8(&NetworkManager_TypeInfo, shopEntity);
      byte_4A48C25 = 1;
    }
    gameObject = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      gameObject = NetworkManager_TypeInfo;
    }
    if ( !Master_object )
LABEL_248:
      sub_1B86614(gameObject, shopEntity);
    gameObject = UserShopMaster__GetEntityDefinitely(
                   (UserShopMaster_o *)Master_object,
                   *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                   shopEntity->fields.baseShopId,
                   0LL);
    if ( resetLimitNum < 1 )
      goto LABEL_252;
    if ( !gameObject )
      goto LABEL_248;
    if ( resetLimitNum <= *((_DWORD *)gameObject + 10) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v138 = LocalizationManager__Get((System_String_o *)StringLiteral_11851/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_LIMIT"*/, 0LL);
    }
    else
    {
LABEL_252:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v135 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, shopEntity);
        byte_4A48C25 = 1;
      }
      gameObject = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        gameObject = NetworkManager_TypeInfo;
      }
      if ( !v135 )
        goto LABEL_248;
      gameObject = UserItemMaster__GetEntityDefinitely(
                     (UserItemMaster_o *)v135,
                     *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                     v116,
                     0LL);
      if ( !gameObject )
        goto LABEL_248;
      if ( *((int *)gameObject + 7) > 0 )
        goto LABEL_246;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v137 = LocalizationManager__Get((System_String_o *)StringLiteral_11852/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_SHORTAGE"*/, 0LL);
      v138 = System_String__Format(v137, Empty, 0LL);
    }
    gameObject = System_String__Concat_61645176(v133, v138, 0LL);
    v133 = (System_String_o *)gameObject;
LABEL_246:
    ShopBuyItemConfirmMenu__SetLabelActive(
      (ShopBuyItemConfirmMenu_o *)gameObject,
      this->fields.resetWarningLabel,
      1,
      v136);
    gameObject = this->fields.resetWarningLabel;
    if ( gameObject )
    {
      v114 = v133;
      goto LABEL_201;
    }
    goto LABEL_248;
  }
  if ( isInPreparation )
  {
    v58 = *p_warningLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v59 = &StringLiteral_11855/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/;
LABEL_58:
    v67 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v59, 0LL);
LABEL_59:
    ShopBuyItemConfirmMenu__SetLabelText(v67, v58, (System_String_o *)v67, v68);
    return;
  }
  if ( !ShopEntity__IsEnable(shopEntity, 0LL, 0LL) )
  {
    v58 = *p_warningLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v59 = &StringLiteral_11856/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/;
    goto LABEL_58;
  }
  UserItemCounts = ShopBuyItemConfirmMenu__GetUserItemCounts(this, v60);
  switch ( shopEntity->fields.payType )
  {
    case 2:
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_248;
      if ( !UserItemCounts->max_length )
        goto LABEL_249;
      if ( (int)gameObject <= UserItemCounts->m_Items[1] )
        goto LABEL_158;
      v71 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v72 = LocalizationManager__Get((System_String_o *)StringLiteral_11862/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, 0LL);
      v73 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10655/*"QP_NAME"*/, 0LL);
      v74 = (ShopBuyItemConfirmMenu_o *)System_String__Format(v72, v73, 0LL);
      goto LABEL_113;
    case 4:
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_248;
      if ( !UserItemCounts->max_length )
        goto LABEL_249;
      if ( (int)gameObject <= UserItemCounts->m_Items[1] )
        goto LABEL_158;
      v71 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v76 = &StringLiteral_11868/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/;
      goto LABEL_112;
    case 6:
    case 0xB:
    case 0xC:
      if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 2 )
      {
        if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 1 )
        {
          v62 = 0LL;
          while ( 1 )
          {
            gameObject = (void *)ShopEntity__GetPrices(shopEntity, v62, 0LL);
            if ( !UserItemCounts )
              goto LABEL_248;
            if ( (unsigned int)v62 >= UserItemCounts->max_length )
              goto LABEL_249;
            if ( (int)gameObject > UserItemCounts->m_Items[v62 + 1] )
              break;
            if ( (int)++v62 >= ShopEntity__GetItemCount(shopEntity, 0LL) )
              goto LABEL_158;
          }
          v58 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v59 = &StringLiteral_11863/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/;
          goto LABEL_58;
        }
        goto LABEL_158;
      }
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_248;
      if ( !UserItemCounts->max_length )
        goto LABEL_249;
      if ( (int)gameObject <= UserItemCounts->m_Items[1] )
        goto LABEL_158;
      gameObject = (void *)ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, (const MethodInfo *)shopEntity);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
        if ( !byte_4A4907A )
        {
          sub_1B863B8(&EventRewardRootComponent_TypeInfo, shopEntity);
          byte_4A4907A = 1;
        }
        v69 = EventRewardRootComponent_TypeInfo;
        if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          v69 = EventRewardRootComponent_TypeInfo;
        }
        p_AnotherPayUsedItemId_k__BackingField = &v69->static_fields->_AnotherPayUsedItemId_k__BackingField;
      }
      else
      {
        v89 = this->fields.shopEntity;
        if ( !v89 )
          goto LABEL_248;
        itemIds = v89->fields.itemIds;
        if ( !itemIds )
          goto LABEL_248;
        if ( !itemIds->max_length )
LABEL_249:
          sub_1B8661C(gameObject, shopEntity);
        p_AnotherPayUsedItemId_k__BackingField = &itemIds->m_Items[1];
      }
      v91 = *p_AnotherPayUsedItemId_k__BackingField;
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_248;
      gameObject = DataManager__GetMasterData_object_(
                     (DataManager_o *)gameObject,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !gameObject )
        goto LABEL_248;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
              &entity,
              v91,
              (const MethodInfo_32142CC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        return;
      v58 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11862/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, 0LL);
      if ( !entity )
        goto LABEL_248;
      monitor = (Il2CppObject *)entity[1].monitor;
      goto LABEL_157;
    case 8:
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_248;
      if ( !UserItemCounts->max_length )
        goto LABEL_249;
      if ( (int)gameObject <= UserItemCounts->m_Items[1] )
        goto LABEL_158;
      v58 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v77 = &StringLiteral_11882/*"SHOP_BUY_STONE_FRAGMENTS_CONFIRM_WARNING"*/;
      goto LABEL_96;
    case 9:
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_248;
      if ( !UserItemCounts->max_length )
        goto LABEL_249;
      if ( (int)gameObject <= UserItemCounts->m_Items[1] )
        goto LABEL_158;
      v58 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v77 = &StringLiteral_11848/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/;
LABEL_96:
      v78 = LocalizationManager__Get((System_String_o *)*v77, 0LL);
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_248;
      gameObject = DataManager__GetMasterData_object_(
                     (DataManager_o *)gameObject,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ItemMaster___);
      v79 = this->fields.shopEntity;
      if ( !v79 )
        goto LABEL_248;
      v80 = v79->fields.itemIds;
      if ( !v80 )
        goto LABEL_248;
      if ( !v80->max_length )
        goto LABEL_249;
      if ( !gameObject )
        goto LABEL_248;
      gameObject = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                     v80->m_Items[1],
                     (const MethodInfo_3214280 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !gameObject )
        goto LABEL_248;
      monitor = (Il2CppObject *)*((_QWORD *)gameObject + 3);
      goto LABEL_103;
    case 0xA:
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_248;
      if ( !UserItemCounts->max_length )
        goto LABEL_249;
      if ( (int)gameObject <= UserItemCounts->m_Items[1]
        || ShopEntity__IsAfterTheFreeShopReleaseDate(shopEntity, 0LL)
        && ShopEntity__IsFulFilledFreeExchangeCondition(shopEntity, 0LL) )
      {
        goto LABEL_158;
      }
      v71 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v76 = &StringLiteral_11875/*"SHOP_BUY_RARE_PRI_CONFIRM_WARNING"*/;
LABEL_112:
      v74 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v76, 0LL);
LABEL_113:
      ShopBuyItemConfirmMenu__SetLabelText(v74, v71, (System_String_o *)v74, v75);
      goto LABEL_158;
    case 0xE:
      if ( !this->fields.commonConsumeEntities )
        goto LABEL_158;
      gameObject = (void *)ShopEntity__get_TargetId(shopEntity, 0LL);
      v82 = BalanceConfig_TypeInfo;
      v83 = (int)gameObject;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v82 = BalanceConfig_TypeInfo;
      }
      if ( v83 != v82->static_fields->ApSeedExchangeTargetItemId )
        goto LABEL_122;
      v84 = *p_warningLabel;
      if ( !v82->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v82);
      if ( !v84 )
        goto LABEL_248;
      UILabel__set_fontSize(v84, BalanceConfig_TypeInfo->static_fields->TradeApDialogWarningLabelFontSize, 0LL);
LABEL_122:
      commonConsumeEntities = this->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        goto LABEL_248;
      v86 = *(_QWORD *)&commonConsumeEntities->max_length;
      if ( (_DWORD)v86 == 1 )
      {
        v87 = commonConsumeEntities->m_Items[0];
        if ( !v87 )
          goto LABEL_248;
        num = v87->fields.num;
        if ( num > CommonConsumeEntity__GetUserHasNum(commonConsumeEntities->m_Items[0], 0LL) )
        {
          v58 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v78 = LocalizationManager__Get((System_String_o *)StringLiteral_11850/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, 0LL);
          monitor = (Il2CppObject *)CommonConsumeEntity__GetName(v87, 0LL);
LABEL_103:
          gameObject = v78;
          goto LABEL_157;
        }
      }
      else if ( (int)v86 > 1 )
      {
        v92 = string_TypeInfo->static_fields->Empty;
        v93 = 0;
        do
        {
          if ( v93 >= (unsigned int)v86 )
            goto LABEL_249;
          v94 = &commonConsumeEntities->obj.klass + v93;
          v95 = (CommonConsumeEntity_o *)v94[4];
          if ( !v95 )
            goto LABEL_248;
          v96 = v95->fields.num;
          gameObject = (void *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)v94[4], 0LL);
          if ( v96 > (int)gameObject )
          {
            Name = (Il2CppObject *)CommonConsumeEntity__GetName(v95, 0LL);
            v98 = System_String__Format((System_String_o *)StringLiteral_24947/*"{0}、"*/, Name, 0LL);
            gameObject = System_String__Concat_61645176(v92, v98, 0LL);
            v92 = (struct System_String_o *)gameObject;
          }
          commonConsumeEntities = this->fields.commonConsumeEntities;
          if ( !commonConsumeEntities )
            goto LABEL_248;
          LODWORD(v86) = commonConsumeEntities->max_length;
          ++v93;
        }
        while ( v93 < (int)v86 );
        if ( !v92 )
          goto LABEL_248;
        stringLength = v92->fields._stringLength;
        if ( stringLength >= 1 )
        {
          v100 = System_String__Remove_61690916(v92, stringLength - 1, 0LL);
          v58 = *p_warningLabel;
          v101 = (Il2CppObject *)v100;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11850/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, 0LL);
          monitor = v101;
LABEL_157:
          v67 = (ShopBuyItemConfirmMenu_o *)System_String__Format((System_String_o *)gameObject, monitor, 0LL);
          goto LABEL_59;
        }
      }
LABEL_158:
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
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_248;
        gameObject = DataManager__GetMasterData_object_(
                       (DataManager_o *)gameObject,
                       (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
        if ( !userGameEntity )
          goto LABEL_248;
        if ( !gameObject )
          goto LABEL_248;
        gameObject = UserPresentBoxMaster__getVaildList(
                       (UserPresentBoxMaster_o *)gameObject,
                       userGameEntity->fields.userId,
                       0LL);
        if ( !gameObject )
          goto LABEL_248;
        if ( shopEntity->fields.purchaseType == 5 )
          v102 = recordNum[0];
        else
          v102 = buyCmdCodeNum[1] + buyServantNum + buyCmdCodeNum[0];
        v103 = BalanceConfig_TypeInfo;
        v104 = *((_DWORD *)gameObject + 6);
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v103 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v103->static_fields->PresentBoxMax;
        if ( PresentBoxMax <= v104 )
        {
          v106 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v107 = &StringLiteral_11871/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/;
LABEL_199:
          gameObject = LocalizationManager__Get((System_String_o *)*v107, 0LL);
          if ( v106 )
          {
            v114 = (System_String_o *)gameObject;
            gameObject = v106;
LABEL_201:
            UILabel__set_text((UILabel_o *)gameObject, v114, 0LL);
            return;
          }
          goto LABEL_248;
        }
        if ( !v103->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v103);
          PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
        }
        if ( v102 + v104 > PresentBoxMax )
        {
          v106 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v107 = &StringLiteral_11872/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/;
          goto LABEL_199;
        }
      }
      if ( SHIDWORD(buyServantNum) < 1 )
        return;
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_248;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, shopEntity);
        byte_4A48C25 = 1;
      }
      gameObject = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        gameObject = NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        goto LABEL_248;
      Sum = UserItemMaster__getSum(
              (UserItemMaster_o *)MasterData_object,
              *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
              0LL);
      v110 = BalanceConfig_TypeInfo;
      v111 = Sum;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v110 = BalanceConfig_TypeInfo;
      }
      UserItemMax = v110->static_fields->UserItemMax;
      if ( v111 >= UserItemMax )
      {
        v106 = *p_warningLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v107 = &StringLiteral_11865/*"SHOP_BUY_ITEM_FULL_WARNING"*/;
        goto LABEL_199;
      }
      v113 = HIDWORD(buyServantNum);
      if ( !v110->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v110);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      if ( v113 + v111 > UserItemMax )
      {
        v106 = *p_warningLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v107 = &StringLiteral_11867/*"SHOP_BUY_ITEM_OVER_WARNING"*/;
        goto LABEL_199;
      }
      return;
    default:
      goto LABEL_158;
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
  float DEFAULT_BUTTON_POS_Y; // s0
  UnityEngine_GameObject_o *v17; // x0

  if ( (byte_4A4A755 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    sub_1B863B8(&ShopBuyItemConfirmMenu_TypeInfo, v3);
    byte_4A4A755 = 1;
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
                  gameObject = (UnityEngine_Component_o *)this->fields.cancelButton;
                  if ( gameObject )
                  {
                    v14 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
                    GameObjectExtensions__SetLocalPositionY(
                      v14,
                      (float)(ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y
                            - ShopBuyItemConfirmMenu_TypeInfo->static_fields->RESET_LAYOUT_OFFSET_Y),
                      0LL);
                    gameObject = (UnityEngine_Component_o *)this->fields.shopResetButton;
                    if ( gameObject )
                    {
                      v15 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
                      DEFAULT_BUTTON_POS_Y = (float)(ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y
                                                   - ShopBuyItemConfirmMenu_TypeInfo->static_fields->RESET_LAYOUT_OFFSET_Y);
LABEL_29:
                      GameObjectExtensions__SetLocalPositionY(v15, DEFAULT_BUTTON_POS_Y, 0LL);
                      return;
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
                gameObject = (UnityEngine_Component_o *)this->fields.cancelButton;
                if ( gameObject )
                {
                  v17 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
                  GameObjectExtensions__SetLocalPositionY(
                    v17,
                    (float)ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y,
                    0LL);
                  gameObject = (UnityEngine_Component_o *)this->fields.shopResetButton;
                  if ( gameObject )
                  {
                    v15 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
                    DEFAULT_BUTTON_POS_Y = (float)ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y;
                    goto LABEL_29;
                  }
                }
              }
            }
          }
          sub_1B86614(gameObject, v8);
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

  if ( (byte_4A4A74D & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&commandCodeId);
    sub_1B863B8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v5);
    sub_1B863B8(&ServantStatusDialog_EndDelegate_TypeInfo, v6);
    sub_1B863B8(&Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__, v7);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A4A74D = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_9;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         commandCodeId,
         (const MethodInfo_32142CC *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
  {
    v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = entity;
    v14 = (CommonUI_o *)v12;
    v15 = (ServantStatusDialog_EndDelegate_o *)sub_1B86604(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v15,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v14 )
    {
      CommonUI__OpenServantEquipStatusDialog_30499608(v14, 25, (CommandCodeEntity_o *)v13, 0, v15, 0LL, 0LL);
      return 0;
    }
LABEL_9:
    sub_1B86614(Instance, v11);
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

  if ( (byte_4A4A74C & 1) == 0 )
  {
    sub_1B863B8(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, *(_QWORD *)&itemId);
    sub_1B863B8(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_1B863B8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v6);
    sub_1B863B8(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__, v7);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A4A74C = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_13;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         itemId,
         (const MethodInfo_32142CC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    itemDetailDialogOverwriteDepth = this->fields.itemDetailDialogOverwriteDepth;
    v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = entity;
    v15 = (CommonUI_o *)v13;
    v16 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B86604(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
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
    sub_1B86614(Instance, v11);
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
  if ( (byte_4A4A74E & 1) == 0 )
  {
    sub_1B863B8(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, shopEntity);
    sub_1B863B8(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    this = (ShopBuyItemConfirmMenu_o *)sub_1B863B8(&StringLiteral_9128/*"NONE"*/, v7);
    byte_4A4A74E = 1;
  }
  if ( !shopEntity )
    goto LABEL_9;
  if ( !System_String__IsNullOrEmpty(shopEntity->fields.infoMessage, 0LL)
    && System_String__op_Inequality(shopEntity->fields.infoMessage, (System_String_o *)StringLiteral_9128/*"NONE"*/, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    name = shopEntity->fields.name;
    infoMessage = shopEntity->fields.infoMessage;
    v11 = (CommonUI_o *)Instance;
    v12 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B86604(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v12,
      v4,
      (intptr_t)Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__,
      0LL);
    if ( v11 )
    {
      CommonUI__OpenItemDetailDialog_30561052(v11, name, infoMessage, v12, 0LL);
      return 0;
    }
LABEL_9:
    sub_1B86614(this, shopEntity);
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

  if ( (byte_4A4A74B & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1B863B8(&ServantStatusDialog_EndDelegate_TypeInfo, v10);
    sub_1B863B8(&EquipTargetInfo_TypeInfo, v11);
    sub_1B863B8(&ServantLeaderInfo_TypeInfo, v12);
    sub_1B863B8(&Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__, v13);
    sub_1B863B8(&Method_ShopBuyItemConfirmMenu_EndShowServantStatusDialog__, v14);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4A4A74B = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_23;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          servantId,
          (const MethodInfo_32142CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
    v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = (ServantLeaderInfo_o *)sub_1B86604(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_41537664(v20, servantId, 0, 1, 0LL);
    v21 = (ServantStatusDialog_EndDelegate_o *)sub_1B86604(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v21,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantStatusDialog__,
      0LL);
    if ( v19 )
    {
      CommonUI__OpenServantStatusDialog_30495528((CommonUI_o *)v19, 7, v20, v21, 0LL);
      return 0;
    }
    goto LABEL_23;
  }
  Instance = entity;
  if ( !entity )
    goto LABEL_23;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL) )
  {
    v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = (EquipTargetInfo_o *)sub_1B86604(EquipTargetInfo_TypeInfo);
    EquipTargetInfo___ctor_39862100(v24, servantId, limitCount, level, 0, 0LL);
    v25 = (ServantStatusDialog_EndDelegate_o *)sub_1B86604(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v25,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v23 )
    {
      CommonUI__OpenServantEquipStatusDialog_30498624((CommonUI_o *)v23, 7, v24, v25, 0LL, 0LL);
      return 0;
    }
LABEL_23:
    sub_1B86614(Instance, v18);
  }
  return 2;
}


System_String_o *__fastcall ShopBuyItemConfirmMenu__get_closeBtnPath(
        ShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A4A759 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_15414/*"Window/CancelButton"*/, method);
    byte_4A4A759 = 1;
  }
  return (System_String_o *)StringLiteral_15414/*"Window/CancelButton"*/;
}


bool __fastcall ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  EventRewardRootComponent_c *v3; // x0
  ShopEntity_o *shopEntity; // x0
  System_Int32_array *possessionAnotherItemId; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A4A72E & 1) == 0 )
  {
    sub_1B863B8(&EventRewardRootComponent_TypeInfo, method);
    byte_4A4A72E = 1;
  }
  possessionAnotherItemId = 0LL;
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  if ( !byte_4A4907B )
  {
    sub_1B863B8(&EventRewardRootComponent_TypeInfo, method);
    byte_4A4907B = 1;
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
      sub_1B86614(0LL, method);
    return ShopEntity__IsAnotherItemBuyable(shopEntity, &possessionAnotherItemId, 0LL);
  }
  else
  {
    return 0;
  }
}


void __fastcall ShopBuyItemConfirmMenu___c__DisplayClass115_0___ctor(
        ShopBuyItemConfirmMenu___c__DisplayClass115_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu___c__DisplayClass115_0___ReturnWarningRarePri_b__0(
        ShopBuyItemConfirmMenu___c__DisplayClass115_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  ShopBuyItemConfirmMenu___c__DisplayClass115_0_o *v4; // x19
  struct ShopBuyItemConfirmMenu_o *_4__this; // x8
  System_Action_o *onChecked; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct ShopBuyItemConfirmMenu_o *v9; // x8
  System_Action_T__o *onCloseReturnWarning; // x21

  v4 = this;
  if ( (byte_4A4A75C & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu___c__DisplayClass115_0_o *)sub_1B863B8(&Method_ActionExtensions_Call_int___, method);
    byte_4A4A75C = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (onChecked = _4__this->fields.onChecked,
        _4__this->fields.onChecked = 0LL,
        sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.onChecked, 0, v2, v3),
        (v9 = v4->fields.__4__this) == 0LL) )
  {
    sub_1B86614(this, method);
  }
  onCloseReturnWarning = (System_Action_T__o *)v9->fields.onCloseReturnWarning;
  v9->fields.onCloseReturnWarning = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v9->fields.onCloseReturnWarning, 0, v7, v8);
  if ( v4->fields.isDecide )
    ActionExtensions__Call(onChecked, 0LL);
  else
    ActionExtensions__Call_int_(
      onCloseReturnWarning,
      0,
      (const MethodInfo_2EBFB44 *)Method_ActionExtensions_Call_int___);
}