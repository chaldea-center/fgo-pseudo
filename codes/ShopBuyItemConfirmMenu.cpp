void __fastcall ShopBuyItemConfirmMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  struct ShopBuyItemConfirmMenu_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct ShopBuyItemConfirmMenu_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49F8A60 & 1) == 0 )
  {
    sub_1B640C8(&ShopBuyItemConfirmMenu_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_17506/*"btn_txt_event_"*/, v4);
    sub_1B640C8(&StringLiteral_17556/*"btn_txt_trade"*/, v5);
    sub_1B640C8(&StringLiteral_17539/*"btn_txt_sale"*/, v6);
    byte_49F8A60 = 1;
  }
  ShopBuyItemConfirmMenu_TypeInfo->static_fields->VALENTINE_BTN_NAME = (struct System_String_o *)StringLiteral_17506/*"btn_txt_event_"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ShopBuyItemConfirmMenu_TypeInfo->static_fields,
    StringLiteral_17506/*"btn_txt_event_"*/,
    v2,
    v3);
  v7 = StringLiteral_17556/*"btn_txt_trade"*/;
  static_fields = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  static_fields->DECIED_BTN_NAME_DEFAULT = (struct System_String_o *)StringLiteral_17556/*"btn_txt_trade"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->DECIED_BTN_NAME_DEFAULT, v7, v9, v10);
  v11 = StringLiteral_17539/*"btn_txt_sale"*/;
  v12 = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v12->DECIED_BTN_NAME_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_17539/*"btn_txt_sale"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v12->DECIED_BTN_NAME_LIMIT_MATERIAL, v11, v13, v14);
  ShopBuyItemConfirmMenu_TypeInfo->static_fields->PRICE_DATA_LABEL_MAX_WIDTH = 320;
}


void __fastcall ShopBuyItemConfirmMenu___ctor(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_o *p_freeLabelPos; // x20

  p_freeLabelPos = &this->fields.freeLabelPos;
  if ( (byte_49F8A5F & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49F8A5F = 1;
  }
  this->fields.itemDetailDialogOverwriteDepth = 0x80000000;
  *(_OWORD *)&p_freeLabelPos->fields.x = xmmword_BA2970;
  *(_QWORD *)&p_freeLabelPos[1].fields.y = 3250585600LL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__CallOnClose(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_Action_o *onClose; // x19
  ServantStatusBattleListViewItem_o *p_onClose; // x0

  onClose = this->fields.onClose;
  if ( onClose )
  {
    p_onClose = (ServantStatusBattleListViewItem_o *)&this->fields.onClose;
    p_onClose->klass = 0LL;
    sub_1B6406C(p_onClose, 0, v2, v3);
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
  int32_t v3; // w3
  struct System_Action_int__o *onDecide; // x20
  ServantStatusBattleListViewItem_o *p_onDecide; // x0

  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    p_onDecide = (ServantStatusBattleListViewItem_o *)&this->fields.onDecide;
    p_onDecide->klass = 0LL;
    sub_1B6406C(p_onDecide, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall ShopBuyItemConfirmMenu__Close(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ShopBuyItemConfirmMenu__Close_32571608(this, 0LL, v2);
}


void __fastcall ShopBuyItemConfirmMenu__Close_32571608(
        ShopBuyItemConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_49F8A4E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_ShopBuyItemConfirmMenu_EndClose__, v6);
    byte_49F8A4E = 1;
  }
  this->fields.onClose = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onClose, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__EndClose(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  ShopBuyItemConfirmMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
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
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_49F8A5B & 1) == 0 )
  {
    sub_1B640C8(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_49F8A5B = 1;
  }
  v4 = Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__;
  if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B640E0(Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__EndShowServantEquipStatusDialog(
        ShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F8A5A & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49F8A5A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__EndShowServantStatusDialog(
        ShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F8A59 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49F8A59 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  __int64 v17; // x1
  int32_t v18; // w19
  __int64 v19; // x21
  int m_CancellationTokenSource; // w20
  BalanceConfig_c *v21; // x8
  int32_t PresentBoxMax; // w9
  Il2CppObject *MasterData_object; // x19
  int32_t Sum; // w19
  BalanceConfig_c *v25; // x8
  int32_t UserItemMax; // w9
  int32_t v27; // w21
  struct CommonConsumeEntity_array *commonConsumeEntities; // x21
  int max_length; // w8
  __int64 v30; // x22
  int basePanel; // w24
  int32_t questId; // [xsp+Ch] [xbp-54h] BYREF
  int32_t recordNum[2]; // [xsp+10h] [xbp-50h] BYREF
  __int64 buyCmdCodeNum; // [xsp+18h] [xbp-48h] BYREF
  int32_t buyServantNum[2]; // [xsp+28h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_49F8A42 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, shopEntity);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v10);
    sub_1B640C8(&NetworkManager_TypeInfo, v11);
    this = (ShopBuyItemConfirmMenu_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49F8A42 = 1;
  }
  *(_QWORD *)buyServantNum = 0LL;
  *(_QWORD *)recordNum = 0LL;
  buyCmdCodeNum = 0LL;
  questId = 0;
  if ( !shopEntity )
    goto LABEL_69;
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
              goto LABEL_69;
            if ( !UserItemCounts->max_length )
LABEL_70:
              sub_1B6432C(this, v17);
            if ( (int)this > UserItemCounts->m_Items[1] )
              return 0;
          }
          else if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 1 )
          {
            v19 = 0LL;
            while ( 1 )
            {
              this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetPrices(shopEntity, v19, 0LL);
              if ( !UserItemCounts )
                break;
              if ( (unsigned int)v19 >= UserItemCounts->max_length )
                goto LABEL_70;
              if ( (int)this > UserItemCounts->m_Items[v19 + 1] )
                return 0;
              if ( (int)++v19 >= ShopEntity__GetItemCount(shopEntity, 0LL) )
                goto LABEL_17;
            }
LABEL_69:
            sub_1B64324(this);
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
            goto LABEL_51;
          this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_69;
          this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
          if ( !userGameEntity )
            goto LABEL_69;
          if ( !this )
            goto LABEL_69;
          this = (ShopBuyItemConfirmMenu_o *)UserPresentBoxMaster__getVaildList(
                                               (UserPresentBoxMaster_o *)this,
                                               userGameEntity->fields.userId,
                                               0LL);
          if ( !this )
            goto LABEL_69;
          if ( shopEntity->fields.purchaseType == 5 )
            v18 = recordNum[0];
          else
            v18 = HIDWORD(buyCmdCodeNum) + buyServantNum[0] + buyCmdCodeNum;
          m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
          v21 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v21 = BalanceConfig_TypeInfo;
          }
          PresentBoxMax = v21->static_fields->PresentBoxMax;
          if ( PresentBoxMax > m_CancellationTokenSource )
          {
            if ( !v21->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v21);
              PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
            }
            if ( v18 + m_CancellationTokenSource <= PresentBoxMax )
            {
LABEL_51:
              if ( buyServantNum[1] < 1 )
                return 1;
              this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_69;
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              this = (ShopBuyItemConfirmMenu_o *)NetworkManager__get_UserId(0LL);
              if ( !MasterData_object )
                goto LABEL_69;
              Sum = UserItemMaster__getSum((UserItemMaster_o *)MasterData_object, (int64_t)this, 0LL);
              v25 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v25 = BalanceConfig_TypeInfo;
              }
              UserItemMax = v25->static_fields->UserItemMax;
              if ( Sum < UserItemMax )
              {
                v27 = buyServantNum[1];
                if ( !v25->_2.cctor_finished )
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
            goto LABEL_69;
          if ( !UserItemCounts->max_length )
            goto LABEL_70;
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
              goto LABEL_70;
            this = (ShopBuyItemConfirmMenu_o *)commonConsumeEntities->m_Items[v30];
            if ( !this )
              goto LABEL_69;
            basePanel = (int)this->fields.basePanel;
            this = (ShopBuyItemConfirmMenu_o *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0LL);
            if ( basePanel <= (int)this )
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
  __int64 v5; // x1
  __int64 v6; // x8
  SetItemMaster_o *v7; // x20
  unsigned __int64 v8; // x21
  int m_CancellationTokenSource; // w8
  int v10; // w9
  __int64 v11; // x10

  if ( (byte_49F8A5C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SetItemMaster___, ids);
    this = (ShopBuyItemConfirmMenu_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49F8A5C = 1;
  }
  if ( !ids )
    goto LABEL_20;
  if ( !*(_QWORD *)&ids->max_length )
    return 0;
  this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_1B64324(this);
  this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SetItemMaster___);
  v6 = *(_QWORD *)&ids->max_length;
  if ( (int)v6 < 1 )
    return 0;
  v7 = (SetItemMaster_o *)this;
  v8 = 0LL;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)v6 )
LABEL_21:
      sub_1B6432C(this, v5);
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
    sub_1B64324(this);
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

  if ( (byte_49F8A51 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&shopType);
    sub_1B640C8(&StringLiteral_8219/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/, v4);
    sub_1B640C8(&StringLiteral_12007/*"SHOP_MAX_ALERT"*/, v5);
    byte_49F8A51 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( shopType == 9 )
    v6 = (System_String_o **)&StringLiteral_8219/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/;
  else
    v6 = (System_String_o **)&StringLiteral_12007/*"SHOP_MAX_ALERT"*/;
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

  if ( (byte_49F8A50 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&itemType);
    sub_1B640C8(&StringLiteral_10765/*"QP_NAME"*/, v4);
    sub_1B640C8(&StringLiteral_8466/*"MANA_NAME"*/, v5);
    sub_1B640C8(&StringLiteral_10898/*"RARE_PRI_NAME"*/, v6);
    sub_1B640C8(&StringLiteral_6491/*"FRIEND_POINT_NAME"*/, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    byte_49F8A50 = 1;
  }
  if ( itemType <= 5 )
  {
    if ( itemType == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_10765/*"QP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v9, 0LL);
    }
    if ( itemType == 5 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_8466/*"MANA_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v9, 0LL);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( itemType == 13 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = &StringLiteral_6491/*"FRIEND_POINT_NAME"*/;
    return LocalizationManager__Get((System_String_o *)*v9, 0LL);
  }
  if ( itemType != 22 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = &StringLiteral_10898/*"RARE_PRI_NAME"*/;
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
  Il2CppObject *v10; // x21
  const MethodInfo *v11; // x1
  struct ShopEntity_o *v12; // x8
  struct System_Int32_array *itemIds; // x8
  int32_t v14; // w8
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v16; // x1
  int32_t ItemCount; // w22
  unsigned int v18; // w0
  unsigned __int64 v20; // x23
  __int64 v21; // x24
  struct ShopEntity_o *v22; // x8
  int32_t v23; // w22

  if ( (byte_49F8A41 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_1B640C8(&int___TypeInfo, v3);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49F8A41 = 1;
  }
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_57;
  v8 = (_DWORD *)SelfUserGame;
  switch ( shopEntity->fields.payType )
  {
    case 1:
      SelfUserGame = sub_1B64170(int___TypeInfo, 1LL);
      if ( !v8 )
        goto LABEL_57;
      v9 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_57;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_58;
      v14 = v8[44];
      goto LABEL_38;
    case 2:
      SelfUserGame = sub_1B64170(int___TypeInfo, 1LL);
      if ( !v8 )
        goto LABEL_57;
      v9 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_57;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_58;
      v14 = v8[24];
      goto LABEL_38;
    case 4:
      SelfUserGame = sub_1B64170(int___TypeInfo, 1LL);
      if ( !v8 )
        goto LABEL_57;
      v9 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_57;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_58;
      v14 = v8[46];
      goto LABEL_38;
    case 6:
    case 0xB:
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_57;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
      SelfUserGame = ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v16);
      if ( !this->fields.shopEntity )
        goto LABEL_57;
      if ( (SelfUserGame & 1) != 0 )
      {
        SelfUserGame = (__int64)ShopEntity__GetAnotherPayItemIds(this->fields.shopEntity, 0LL);
        if ( !SelfUserGame )
          goto LABEL_57;
        ItemCount = *(_DWORD *)(SelfUserGame + 24);
      }
      else
      {
        ItemCount = ShopEntity__GetItemCount(this->fields.shopEntity, 0LL);
      }
      v9 = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)ItemCount);
      if ( ItemCount >= 1 )
      {
        v20 = 0LL;
        v21 = (unsigned int)ItemCount;
        while ( 1 )
        {
          SelfUserGame = ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v11);
          v22 = this->fields.shopEntity;
          if ( !v22 )
            break;
          if ( (SelfUserGame & 1) != 0 )
          {
            SelfUserGame = (__int64)ShopEntity__GetAnotherPayItemIds(this->fields.shopEntity, 0LL);
            if ( !SelfUserGame )
              break;
          }
          else
          {
            SelfUserGame = (__int64)v22->fields.itemIds;
            if ( !SelfUserGame )
              break;
          }
          if ( v20 >= *(unsigned int *)(SelfUserGame + 24) )
LABEL_58:
            sub_1B6432C(SelfUserGame, v11);
          v23 = *(_DWORD *)(SelfUserGame + 4 * v20 + 32);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          SelfUserGame = NetworkManager__get_UserId(0LL);
          if ( !MasterData_object )
            break;
          SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                                    (UserItemMaster_o *)MasterData_object,
                                    SelfUserGame,
                                    v23,
                                    0LL);
          if ( !SelfUserGame || !v9 )
            break;
          if ( v20 >= v9->max_length )
            goto LABEL_58;
          v9->m_Items[++v20] = *(_DWORD *)(SelfUserGame + 28);
          if ( v21 == v20 )
            return v9;
        }
LABEL_57:
        sub_1B64324(SelfUserGame);
      }
      return v9;
    case 8:
    case 9:
    case 0xC:
      v9 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_57;
      v10 = DataManager__GetMasterData_object_(
              (DataManager_o *)SelfUserGame,
              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      SelfUserGame = NetworkManager__get_UserId(0LL);
      v12 = this->fields.shopEntity;
      if ( !v12 )
        goto LABEL_57;
      itemIds = v12->fields.itemIds;
      if ( !itemIds )
        goto LABEL_57;
      if ( !itemIds->max_length )
        goto LABEL_58;
      if ( !v10 )
        goto LABEL_57;
      SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)v10,
                                SelfUserGame,
                                itemIds->m_Items[1],
                                0LL);
      if ( !SelfUserGame || !v9 )
        goto LABEL_57;
      if ( !v9->max_length )
        goto LABEL_58;
      v14 = *(_DWORD *)(SelfUserGame + 28);
LABEL_38:
      v9->m_Items[1] = v14;
      return v9;
    case 0xA:
      SelfUserGame = sub_1B64170(int___TypeInfo, 1LL);
      if ( !v8 )
        goto LABEL_57;
      v9 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_57;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_58;
      v14 = v8[47];
      goto LABEL_38;
    default:
      v18 = ShopEntity__GetItemCount(this->fields.shopEntity, 0LL);
      return (System_Int32_array *)sub_1B64170(int___TypeInfo, v18);
  }
}


void __fastcall ShopBuyItemConfirmMenu__Init(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *nameLabel; // x0
  UILabel_o *messageLabel; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  ShopBuyItemConfirmMenu_o *v8; // x0
  const MethodInfo *v9; // x3
  ShopBuyItemConfirmMenu_o *v10; // x0
  const MethodInfo *v11; // x3
  ShopBuyItemConfirmMenu_o *v12; // x0
  const MethodInfo *v13; // x3

  if ( (byte_49F8A38 & 1) == 0 )
  {
    sub_1B640C8(&ShopBuyItemUtility_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49F8A38 = 1;
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
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.shopEntity, 0, v6, v7),
        (nameLabel = (UILabel_o *)this->fields.infoButton) == 0LL)
    || (nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL)) == 0LL )
  {
LABEL_14:
    sub_1B64324(nameLabel);
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

  if ( (byte_49F8A52 & 1) == 0 )
  {
    sub_1B640C8(&Method_ShopBuyItemConfirmMenu_OnClickCancel__, method);
    byte_49F8A52 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ShopBuyItemConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_ShopBuyItemConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
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
  __int64 v25; // x1
  __int64 v26; // x2
  System_Action_bool__o *v27; // x24
  const MethodInfo *v28; // x3
  struct ShopEntity_o *v29; // x8
  System_String_o *MaxAlertMessage; // x20
  Il2CppObject *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  System_Action_o *v34; // x22
  UILabel_o *warningLabel; // x20
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  const MethodInfo *v40; // x2
  int32_t check; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_49F8A4F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__TypeInfo, method);
    sub_1B640C8(&System_Action_TypeInfo, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopMaster___, v4);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&Method_ShopBuyItemConfirmMenu_EndMaxErrorDialog__, v6);
    sub_1B640C8(&Method_ShopBuyItemConfirmMenu_OnClickDecide__, v7);
    sub_1B640C8(&Method_ShopBuyItemConfirmMenu_ReturnWarning__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B640C8(&StringLiteral_9260/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, v11);
    sub_1B640C8(&StringLiteral_11947/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, v12);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v13);
    sub_1B640C8(&StringLiteral_1/*""*/, v14);
    byte_49F8A4F = 1;
  }
  check = 0;
  if ( this->fields.state != 2 )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopMaster___);
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
        v17 = (_QWORD *)sub_1B640E0(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
      v18 = (System_Reflection_MethodBase_o *)sub_1B640AC(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 8, 0LL);
      Instance = this->fields.shopEntity;
      if ( Instance )
      {
        noTitleDialog = this->fields.noTitleDialog;
        v20 = (System_String_o *)*((_QWORD *)Instance + 21);
        Name = (Il2CppObject *)ShopEntity__getName((ShopEntity_o *)Instance, 0LL);
        v22 = System_String__Format(v20, Name, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v23 = LocalizationManager__Get((System_String_o *)StringLiteral_9260/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, 0LL);
        v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
        v27 = (System_Action_bool__o *)sub_1B64314(System_Action_bool__TypeInfo, v25, v26);
        System_Action_bool____ctor(v27, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_ReturnWarning__, 0LL);
        if ( noTitleDialog )
        {
          NoTitleDialog__Open(noTitleDialog, v22, v23, v24, v27, 0LL);
          return;
        }
      }
LABEL_35:
      sub_1B64324(Instance);
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
      v29 = this->fields.shopEntity;
      if ( !v29 )
        goto LABEL_35;
      MaxAlertMessage = ShopBuyItemConfirmMenu__GetMaxAlertMessage(this, v29->fields.shopType, check, v28);
      v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v34 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v32, v33);
      System_Action___ctor(v34, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndMaxErrorDialog__, 0LL);
      if ( !v31 )
        goto LABEL_35;
      CommonUI__OpenNotificationDialog(
        (CommonUI_o *)v31,
        (System_String_o *)StringLiteral_1/*""*/,
        MaxAlertMessage,
        v34,
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
    v38 = Method_ShopBuyItemConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v38 = (_QWORD *)sub_1B640E0(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
    v39 = (System_Reflection_MethodBase_o *)sub_1B640AC(v38, v38[4]);
    OverwriteAssetSoundName__PlaySystemSe(v39, 8, 0LL);
    ShopBuyItemConfirmMenu__CallOnDecide(this, 1, v40);
    return;
  }
  Instance = this->fields.presentAheadLabel;
  if ( !Instance )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  warningLabel = this->fields.warningLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11947/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_35;
  UILabel__set_text(warningLabel, (System_String_o *)Instance, 0LL);
  v36 = Method_ShopBuyItemConfirmMenu_OnClickDecide__;
  if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
    v36 = (_QWORD *)sub_1B640E0(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
  v37 = (System_Reflection_MethodBase_o *)sub_1B640AC(v36, v36[4]);
  OverwriteAssetSoundName__PlaySystemSe(v37, 2, 0LL);
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
    sub_1B64324(this);
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


void __fastcall ShopBuyItemConfirmMenu__Open(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        int32_t shopKind,
        System_Action_int__o *onDecide,
        int32_t buttonSpriteId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct ShopEntity_o **p_shopEntity; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct CommonConsumeEntity_array *CommonConsumeEntities; // x1
  struct CommonConsumeEntity_array **p_commonConsumeEntities; // x0
  System_String_o *Name; // x22
  System_String_o *v24; // x22
  const MethodInfo *v25; // x3
  UISprite_o *decideButtonImg; // x23
  ShopBuyItemConfirmMenu_o *v27; // x0
  bool IsPreparation; // w0
  bool v29; // w25
  bool v30; // w23
  const MethodInfo *v31; // x4
  UserGameEntity_o *SelfUserGame; // x24
  const MethodInfo *v33; // x4
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x3
  ShopEntity_o *v36; // x26
  UILabel_o *textOnMask; // x27
  const MethodInfo *v38; // x3
  ShopEntity_o *v39; // x25
  UISprite_o *possessionSprite; // x26
  bool v41; // w0
  const MethodInfo *v42; // x3
  bool IsNotHavingShopItemReceived; // w0
  bool v44; // w25
  bool v45; // w21
  const MethodInfo *v46; // x5
  const MethodInfo *v47; // x4
  struct UICommonButton_o *decideButton; // x8
  bool v49; // w20
  __int64 v50; // x1
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x5
  UISprite_o *itemMaskeSprite; // x20
  ShopBuyItemConfirmMenu_o *v55; // x0
  const MethodInfo *v56; // x3
  _BOOL8 IsShowMask; // x0
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x3
  __int64 v60; // x1
  __int64 v61; // x2
  System_Action_o *v62; // x20
  System_String_o *preparationItemName; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *message; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49F8A39 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, shopEntity);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&Method_ShopBuyItemConfirmMenu_EndOpen__, v12);
    sub_1B640C8(&ShopBuyItemConfirmMenu_TypeInfo, v13);
    sub_1B640C8(&ShopBuyItemUtility_TypeInfo, v14);
    byte_49F8A39 = 1;
  }
  preparationItemName = 0LL;
  message = 0LL;
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.onDecide,
      (int32_t)onDecide,
      shopKind,
      (int32_t)onDecide);
    p_shopEntity = &this->fields.shopEntity;
    this->fields.shopEntity = shopEntity;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.shopEntity, (int32_t)shopEntity, v16, v17);
    if ( !this->fields.shopEntity )
      goto LABEL_8;
    if ( !shopEntity )
      goto LABEL_31;
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_commonConsumeEntities, (int32_t)CommonConsumeEntities, v19, v20);
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
          v24 = (System_String_o *)gameObject;
          UICrossNarrowLabel__SetCrossNarrowText(this->fields.nameLabel, (System_String_o *)gameObject, 0LL);
          decideButtonImg = this->fields.decideButtonImg;
          v27 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
            v27 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          }
          ShopBuyItemConfirmMenu__SetSpriteName(
            v27,
            decideButtonImg,
            (System_String_o *)v27->fields.itemMaskeSprite->monitor,
            v25);
          gameObject = (UnityEngine_GameObject_o *)*p_shopEntity;
          if ( *p_shopEntity )
          {
            IsPreparation = ShopEntity__IsPreparation((ShopEntity_o *)gameObject, &message, &preparationItemName, 0LL);
            v29 = IsPreparation;
            v30 = IsPreparation;
            ShopBuyItemConfirmMenu__SetMessageLabel(this, this->fields.shopEntity, IsPreparation, message, v31);
            SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
            ShopBuyItemConfirmMenu__SetWarningLabel(this, this->fields.shopEntity, v29, SelfUserGame, v33);
            ShopBuyItemConfirmMenu__SetBandSprite(this, this->fields.shopEntity, v34);
            ShopBuyItemConfirmMenu__SetTextOnMask(this, this->fields.shopEntity, v29, v35);
            v36 = this->fields.shopEntity;
            textOnMask = this->fields.textOnMask;
            if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
            ShopBuyItemUtility__SetAddTextOnMask(v36, textOnMask, 0LL);
            ShopBuyItemConfirmMenu__SetNumText(this, this->fields.shopEntity, v29, v38);
            v39 = this->fields.shopEntity;
            if ( v39 )
            {
              possessionSprite = this->fields.possessionSprite;
              v41 = ShopEntity__checkFlag(this->fields.shopEntity, 0x4000, 0LL);
              ShopBuyItemUtility__SetShopHaveStatusIcon(v39, possessionSprite, v41, 0LL);
              gameObject = (UnityEngine_GameObject_o *)this->fields.shopEntity;
              if ( gameObject )
              {
                if ( ShopEntity__IsSoldOut((ShopEntity_o *)gameObject, 0LL) )
                {
                  gameObject = (UnityEngine_GameObject_o *)*p_shopEntity;
                  if ( !*p_shopEntity )
                    goto LABEL_31;
                  IsNotHavingShopItemReceived = ShopEntity__GetIsNotHavingShopItemReceived(
                                                  (ShopEntity_o *)gameObject,
                                                  0LL);
                }
                else
                {
                  IsNotHavingShopItemReceived = 0;
                }
                v44 = IsNotHavingShopItemReceived;
                ShopBuyItemConfirmMenu__SetExtensionText(
                  this,
                  this->fields.shopEntity,
                  IsNotHavingShopItemReceived,
                  v42);
                v45 = v30;
                ShopBuyItemConfirmMenu__SetPriceInfo(this, this->fields.shopEntity, v30, buttonSpriteId, v44, v46);
                gameObject = (UnityEngine_GameObject_o *)ShopBuyItemConfirmMenu__GetIsBuyable(
                                                           this,
                                                           this->fields.shopEntity,
                                                           v30,
                                                           SelfUserGame,
                                                           v47);
                decideButton = this->fields.decideButton;
                if ( decideButton )
                {
                  v49 = (unsigned __int8)gameObject & 1;
                  if ( ((unsigned __int8)gameObject & 1) != 0 )
                    v50 = 0LL;
                  else
                    v50 = 3LL;
                  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))decideButton->klass->vtable._14_SetState.method)(
                    this->fields.decideButton,
                    v50,
                    1LL,
                    decideButton->klass->vtable._15_OnPress.methodPtr);
                  ShopBuyItemConfirmMenu__SetAheadText(this, this->fields.shopEntity, v49, v51);
                  ShopBuyItemConfirmMenu__SetItemIcon(this, this->fields.shopEntity, v45, v52);
                  ShopBuyItemConfirmMenu__SetNameText(this, this->fields.shopEntity, v45, v24, preparationItemName, v53);
                  itemMaskeSprite = this->fields.itemMaskeSprite;
                  IsShowMask = ShopBuyItemConfirmMenu__GetIsShowMask(v55, this->fields.shopEntity, v45, v56);
                  ShopBuyItemConfirmMenu__SetSpriteActive(
                    (ShopBuyItemConfirmMenu_o *)IsShowMask,
                    itemMaskeSprite,
                    IsShowMask,
                    v58);
                  ShopBuyItemConfirmMenu__SetInfoButton(this, this->fields.shopEntity, v45, v59);
                  this->fields.state = 1;
                  v62 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v60, v61);
                  System_Action___ctor(v62, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndOpen__, 0LL);
                  BaseDialog__Open((BaseDialog_o *)this, v62, 0, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_1B64324(gameObject);
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
  Il2CppObject *Instance; // x0
  System_String_o *warningMessage; // x24
  CommonUI_o *v20; // x22
  Il2CppObject *Name; // x0
  System_String_o *v22; // x23
  System_String_o *v23; // x24
  System_String_o *v24; // x25
  __int64 v25; // x1
  __int64 v26; // x2
  System_Action_bool__o *v27; // x26
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *itemName; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_49F8A5D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__TypeInfo, item);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v9);
    sub_1B640C8(&LocalizationManager_TypeInfo, v10);
    sub_1B640C8(&Method_ShopBuyItemConfirmMenu_ReturnWarningRarePri__, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v13);
    sub_1B640C8(&StringLiteral_19546/*"freeShopCondId"*/, v14);
    this = (ShopBuyItemConfirmMenu_o *)sub_1B640C8(&StringLiteral_11060/*"RETURN_RARE_PRI_SHOP_DECIDE_BUTTON"*/, v15);
    byte_49F8A5D = 1;
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
                  (Il2CppObject *)StringLiteral_19546/*"freeShopCondId"*/,
                  (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
            || ((v17 | ShopBuyItemListViewItem__get_IsSoldOut(item, 0LL)) & 1) != 0
            || !ShopEntity__IsAfterTheFreeShopReleaseDate(Shop_k__BackingField, 0LL)
            || ShopEntity__IsFulFilledFreeExchangeCondition(Shop_k__BackingField, 0LL) )
          {
            ActionExtensions__Call(onChecked, 0LL);
            return;
          }
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          warningMessage = Shop_k__BackingField->fields.warningMessage;
          v20 = (CommonUI_o *)Instance;
          Name = (Il2CppObject *)ShopEntity__getName(Shop_k__BackingField, 0LL);
          v22 = System_String__Format(warningMessage, Name, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11060/*"RETURN_RARE_PRI_SHOP_DECIDE_BUTTON"*/, 0LL);
          v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
          v27 = (System_Action_bool__o *)sub_1B64314(System_Action_bool__TypeInfo, v25, v26);
          System_Action_bool____ctor(v27, (Il2CppObject *)v8, Method_ShopBuyItemConfirmMenu_ReturnWarningRarePri__, 0LL);
          if ( v20 )
          {
            CommonUI__OpenNoTitleDialog(v20, v22, v23, v24, v27, 0LL);
            v8->fields.onChecked = onChecked;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->fields.onChecked, (int32_t)onChecked, v28, v29);
            v8->fields.onCloseReturnWarning = onCloseReturnWarning;
            sub_1B6406C(
              (ServantStatusBattleListViewItem_o *)&v8->fields.onCloseReturnWarning,
              (int32_t)onCloseReturnWarning,
              v30,
              v31);
            return;
          }
        }
      }
    }
    sub_1B64324(this);
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

  if ( (byte_49F8A58 & 1) == 0 )
  {
    sub_1B640C8(&Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__, *(_QWORD *)&seKind);
    byte_49F8A58 = 1;
  }
  if ( (seKind & 0x80000000) == 0 )
  {
    v4 = Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__;
    if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B640E0(Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, seKind, 0LL);
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
    sub_1B64324(0LL);
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
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *Instance; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x20

  if ( (byte_49F8A53 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_ShopBuyItemConfirmMenu___c__DisplayClass93_0__ReturnWarningRarePri_b__0__, v6);
    sub_1B640C8(&ShopBuyItemConfirmMenu___c__DisplayClass93_0_TypeInfo, v7);
    byte_49F8A53 = 1;
  }
  v8 = sub_1B64314(ShopBuyItemConfirmMenu___c__DisplayClass93_0_TypeInfo, isDecide, method);
  ShopBuyItemConfirmMenu___c__DisplayClass93_0___ctor((ShopBuyItemConfirmMenu___c__DisplayClass93_0_o *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v10, v11),
        *(_BYTE *)(v8 + 24) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v8,
          Method_ShopBuyItemConfirmMenu___c__DisplayClass93_0__ReturnWarningRarePri_b__0__,
          0LL),
        !Instance) )
  {
    sub_1B64324(v9);
  }
  CommonUI__CloseNoTitleDialog((CommonUI_o *)Instance, v15, 0LL);
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
  Il2CppObject *MasterData_object; // x21
  int klass; // w8
  int32_t shopType; // w21
  UILabel_o *v29; // x20
  const MethodInfo *v30; // x3
  UISprite_o *decideButtonImg; // x19
  ShopBuyItemConfirmMenu_o *v32; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v6 = this;
  if ( (byte_49F8A45 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&ShopBuyItemConfirmMenu_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B640C8(&StringLiteral_10438/*"PURCHASE_AFTER_COSTUME"*/, v11);
    sub_1B640C8(&StringLiteral_10443/*"PURCHASE_AFTER_USER_ITEM"*/, v12);
    sub_1B640C8(&StringLiteral_10440/*"PURCHASE_AFTER_ITEM_SET"*/, v13);
    sub_1B640C8(&StringLiteral_8218/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/, v14);
    sub_1B640C8(&StringLiteral_10441/*"PURCHASE_AFTER_PRESENT_BOX"*/, v15);
    sub_1B640C8(&StringLiteral_10439/*"PURCHASE_AFTER_EVENT_SVT_GET"*/, v16);
    sub_1B640C8(&StringLiteral_10442/*"PURCHASE_AFTER_QP"*/, v17);
    sub_1B640C8(&StringLiteral_10444/*"PURCHASE_AFTER_USER_SVT_COIN"*/, v18);
    this = (ShopBuyItemConfirmMenu_o *)sub_1B640C8(&StringLiteral_1/*""*/, v19);
    byte_49F8A45 = 1;
  }
  entity = 0LL;
  ShopBuyItemConfirmMenu__SetLabelText(this, v6->fields.presentAheadLabel, (System_String_o *)StringLiteral_1/*""*/, method);
  if ( isBuyable )
  {
    if ( !shopEntity )
      goto LABEL_47;
    purchaseType = shopEntity->fields.purchaseType;
    if ( purchaseType <= 14 )
    {
      switch ( purchaseType )
      {
        case 1:
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_47;
          MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
          Instance = (DataManager_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
          if ( !MasterData_object )
            goto LABEL_47;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        &entity,
                                        (int32_t)Instance,
                                        (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return;
          if ( !entity )
            goto LABEL_47;
          klass = (int)entity[3].klass;
          if ( klass != 1 )
          {
            if ( klass == 29 )
            {
              presentAheadLabel = v6->fields.presentAheadLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v23 = &StringLiteral_10444/*"PURCHASE_AFTER_USER_SVT_COIN"*/;
            }
            else
            {
              presentAheadLabel = v6->fields.presentAheadLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v23 = &StringLiteral_10443/*"PURCHASE_AFTER_USER_ITEM"*/;
            }
LABEL_11:
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)*v23, 0LL);
            if ( presentAheadLabel )
            {
              v24 = (System_String_o *)Instance;
              v25 = presentAheadLabel;
LABEL_13:
              UILabel__set_text(v25, v24, 0LL);
              return;
            }
            goto LABEL_47;
          }
          shopType = shopEntity->fields.shopType;
          v29 = v6->fields.presentAheadLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( shopType != 9 )
          {
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10442/*"PURCHASE_AFTER_QP"*/, 0LL);
            if ( v29 )
            {
              v24 = (System_String_o *)Instance;
              v25 = v29;
              goto LABEL_13;
            }
LABEL_47:
            sub_1B64324(Instance);
          }
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8218/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/, 0LL);
          if ( !v29 )
            goto LABEL_47;
          UILabel__set_text(v29, (System_String_o *)Instance, 0LL);
          decideButtonImg = v6->fields.decideButtonImg;
          v32 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
            v32 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          }
          ShopBuyItemConfirmMenu__SetSpriteName(
            v32,
            decideButtonImg,
            *(System_String_o **)&v32->fields.itemMaskeSprite->fields.m_CachedPtr,
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
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v23 = &StringLiteral_10440/*"PURCHASE_AFTER_ITEM_SET"*/;
          goto LABEL_11;
        case 8:
          presentAheadLabel = v6->fields.presentAheadLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v23 = &StringLiteral_10439/*"PURCHASE_AFTER_EVENT_SVT_GET"*/;
          goto LABEL_11;
        default:
          if ( purchaseType != 14 )
            return;
          presentAheadLabel = v6->fields.presentAheadLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v23 = &StringLiteral_10438/*"PURCHASE_AFTER_COSTUME"*/;
          goto LABEL_11;
      }
    }
    else if ( (unsigned int)purchaseType <= 0x15 && ((1 << purchaseType) & 0x290000) != 0 )
    {
LABEL_8:
      presentAheadLabel = v6->fields.presentAheadLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v23 = &StringLiteral_10441/*"PURCHASE_AFTER_PRESENT_BOX"*/;
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
  if ( (byte_49F8A46 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20504/*"img_txt_shop"*/, shopEntity);
    this = (ShopBuyItemConfirmMenu_o *)sub_1B640C8(&StringLiteral_20490/*"img_txt_quest"*/, v6);
    byte_49F8A46 = 1;
  }
  if ( !shopEntity )
    sub_1B64324(this);
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
      v10 = &StringLiteral_20490/*"img_txt_quest"*/;
      goto LABEL_9;
    case 7:
    case 9:
LABEL_6:
      ShopBuyItemConfirmMenu__SetSpriteActive(this, v5->fields.bandSprite, 1, v3);
      bandSprite = v5->fields.bandSprite;
      v10 = &StringLiteral_20504/*"img_txt_shop"*/;
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

  if ( (byte_49F8A4C & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu_o *)sub_1B640C8(&AtlasManager_TypeInfo, itemIcon);
    byte_49F8A4C = 1;
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
        ItemIconComponent__SetItem(itemIcon, (int32_t)this->fields.basePanelList, -1, 0LL);
        return;
      }
LABEL_14:
      sub_1B64324(this);
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
  Il2CppObject *v17; // x25
  Il2CppObject *Name; // x0
  System_String_o *shopEntity; // x0
  ShopBuyItemConfirmMenu_c *v20; // x0
  int32_t PriceIcon; // w0
  int32_t v22; // w22
  int32_t v23; // w23
  ShopBuyItemConfirmMenu_o *v24; // x0
  const MethodInfo *v25; // x3
  int32_t num; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49F8A4B & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, priceDataLabel);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&ShopBuyItemConfirmMenu_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_5606/*"EVENT_ITEM_NEED_INFO"*/, v14);
    byte_49F8A4B = 1;
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
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5606/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
        num = commonConsumeEnt->fields.num;
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
        Name = (Il2CppObject *)CommonConsumeEntity__GetName(commonConsumeEnt, 0LL);
        shopEntity = System_String__Format_61389768(v16, v17, Name, 0LL);
        if ( !priceDataLabel )
          goto LABEL_22;
        UILabel__set_text(priceDataLabel, shopEntity, 0LL);
        v20 = ShopBuyItemConfirmMenu_TypeInfo;
        if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
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
LABEL_22:
          sub_1B64324(shopEntity);
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
  if ( (byte_49F8A4D & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, shopEntity);
    sub_1B640C8(&EventRewardRootComponent_TypeInfo, v8);
    sub_1B640C8(&ShopBuyItemConfirmMenu_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v10);
    this = (ShopBuyItemConfirmMenu_o *)sub_1B640C8(&StringLiteral_17556/*"btn_txt_trade"*/, v11);
    byte_49F8A4D = 1;
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
    v17 = System_String__Concat_61388660(VALENTINE_BTN_NAME, v15, (System_String_o *)StringLiteral_16054/*"_"*/, v16, 0LL);
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
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17556/*"btn_txt_trade"*/, 0LL);
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
      sub_1B64324(this);
    }
  }
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
  if ( (byte_49F8A49 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, shopEntity);
    this = (ShopBuyItemConfirmMenu_o *)sub_1B640C8(&StringLiteral_9242/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/, v7);
    byte_49F8A49 = 1;
  }
  if ( !shopEntity )
    sub_1B64324(this);
  if ( shopEntity->fields.payType != 6 )
    goto LABEL_10;
  this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetItemCount(shopEntity, 0LL);
  v8 = (int)this < 2 && isNotHavingShopItemReceived;
  if ( (int)this <= 1 && isNotHavingShopItemReceived )
  {
    extensionInfoLabel = v6->fields.extensionInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9242/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/, 0LL);
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
  if ( (byte_49F8A3E & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu_o *)sub_1B640C8(&StringLiteral_9209/*"NONE"*/, shopEntity);
    byte_49F8A3E = 1;
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
    sub_1B64324(this);
  }
  if ( purchaseType == 1 || purchaseType == 4 )
    goto LABEL_18;
LABEL_16:
  if ( !System_String__IsNullOrEmpty(shopEntity->fields.infoMessage, 0LL)
    && System_String__op_Inequality(shopEntity->fields.infoMessage, (System_String_o *)StringLiteral_9209/*"NONE"*/, 0LL) )
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
  int32_t v3; // w3

  this->fields.state = 2;
  this->fields.onDecide = onDecide;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onDecide, (int32_t)onDecide, (int32_t)method, v3);
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
  Il2CppObject *MasterData_object; // x21
  UnityEngine_Object_o *v15; // x20
  UnityEngine_GameObject_o *v16; // x19
  ServantEntity_o *v17; // [xsp+0h] [xbp-40h] BYREF
  int32_t imageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49F8A3F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, shopEntity);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49F8A3F = 1;
  }
  v17 = 0LL;
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
      sub_1B64324(gameObject);
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
    gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_32;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
    gameObject = (UnityEngine_Component_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
    if ( !MasterData_object )
      goto LABEL_32;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
           (Il2CppObject **)&v17,
           (int32_t)gameObject,
           (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      v15 = (UnityEngine_Object_o *)this->fields.chocolateSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.chocolateSprite;
        if ( !gameObject )
          goto LABEL_32;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( !v17 )
          goto LABEL_32;
        v16 = (UnityEngine_GameObject_o *)gameObject;
        gameObject = (UnityEngine_Component_o *)ServantEntity__get_IsChocolateSvtEquip(v17, 0LL);
        if ( !v16 )
          goto LABEL_32;
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

  if ( (byte_49F8A3A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, label);
    byte_49F8A3A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_1B64324(gameObject);
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

  if ( (byte_49F8A3B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, label);
    byte_49F8A3B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1B64324(v6);
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
  System_String_o *v19; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *message; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  message = preparationMessage;
  if ( (byte_49F8A43 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, shopEntity);
    sub_1B640C8(&StringLiteral_15780/*"[000000]"*/, v9);
    this = (ShopBuyItemConfirmMenu_o *)sub_1B640C8(&StringLiteral_15781/*"[000000]？"*/, v10);
    byte_49F8A43 = 1;
  }
  v19 = 0LL;
  if ( !shopEntity )
    sub_1B64324(this);
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
      v18 = (System_String_o *)StringLiteral_15780/*"[000000]"*/;
      goto LABEL_16;
    }
    messageLabel = v8->fields.messageLabel;
    v16 = message;
LABEL_15:
    v18 = (System_String_o *)StringLiteral_15780/*"[000000]"*/;
LABEL_16:
    v11 = System_String__Concat_61375396(v18, v16, 0LL);
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
  v15 = (System_String_o *)StringLiteral_15781/*"[000000]？"*/;
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
  System_String_o *v13; // x1
  struct UICrossNarrowLabel_o *nameTextLabel; // x19

  if ( (byte_49F8A40 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, shopEntity);
    sub_1B640C8(&StringLiteral_25364/*"？"*/, v11);
    byte_49F8A40 = 1;
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
      v13 = IsNullOrEmpty;
      IsNullOrEmpty = (System_String_o *)nameTextLabel;
      goto LABEL_15;
    }
LABEL_16:
    sub_1B64324(IsNullOrEmpty);
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
      v13 = replacedName;
      goto LABEL_15;
    }
    goto LABEL_16;
  }
  IsNullOrEmpty = (System_String_o *)this->fields.nameTextLabel;
  if ( !IsNullOrEmpty )
    goto LABEL_16;
  v13 = (System_String_o *)StringLiteral_25364/*"？"*/;
LABEL_15:
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
  if ( (byte_49F8A48 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, shopEntity);
    this = (ShopBuyItemConfirmMenu_o *)sub_1B640C8(&StringLiteral_11957/*"SHOP_BUY_ITEM_HOLD"*/, v7);
    byte_49F8A48 = 1;
  }
  if ( !isInPreparation )
  {
    if ( shopEntity )
      goto LABEL_8;
LABEL_13:
    sub_1B64324(this);
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
  v11 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11957/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText(v11, numTitleLabel, (System_String_o *)v11, v12);
  ShopBuyItemConfirmMenu__SetLabelActive(v13, v6->fields.numTextLabel, 1, v14);
  numTextLabel = v6->fields.numTextLabel;
  HoldCount = ShopEntity__getHoldCount(shopEntity, 0LL);
  NumberFormat = (ShopBuyItemConfirmMenu_o *)LocalizationManager__GetNumberFormat(HoldCount, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText(NumberFormat, numTextLabel, (System_String_o *)NumberFormat, v18);
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
  UILabel_o *v26; // x1
  const MethodInfo *v27; // x5
  __int64 v28; // x21
  const MethodInfo *v29; // x1
  unsigned __int64 i; // x23
  struct System_Int32_array *itemIds; // x8
  __int64 v32; // x24
  struct UILabel_array *priceDataLabels; // x8
  struct UIIconLabel_array *priceIconLabels; // x8
  struct UILabel_array *v35; // x8
  struct ItemIconComponent_array *eventItemIcons; // x8
  struct UILabel_array *v37; // x8
  UILabel_o *v38; // x25
  System_String_o *v39; // x26
  struct UIIconLabel_array *v40; // x8
  UIIconLabel_o *v41; // x25
  int32_t v42; // w26
  struct UILabel_o *priceDataLabel; // x22
  __int64 *v44; // x8
  System_String_o *v45; // x0
  System_String_o *v46; // x1
  UILabel_o *v47; // x0
  struct System_Int32_array *v48; // x8
  Il2CppObject *v49; // x0
  UILabel_o *v50; // x23
  Il2CppObject *v51; // x22
  __int64 *v52; // x8
  struct System_Int32_array *v53; // x8
  Il2CppObject *v54; // x0
  UIIconLabel_o *v55; // x23
  int32_t v56; // w24
  UILabel_o *v57; // x23
  UIIconLabel_o *v58; // x23
  int32_t v59; // w24
  int32_t Price; // w21
  double v61; // d0
  int v62; // w21
  struct System_Int32_array *v63; // x8
  UIIconLabel_o *v64; // x19
  int32_t v65; // w22
  UILabel_o *priceFreeDataLabel; // x19
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  __int64 v68; // x9
  _BOOL8 IsSetStrikethrough; // x0
  const MethodInfo *v70; // x3
  __int64 v71; // x8
  __int64 v72; // x8
  __int64 v73; // x9
  __int64 v74; // x10
  __int64 j; // x20
  struct UILabel_array *v76; // x11
  unsigned __int64 max_length; // x12
  unsigned __int64 v78; // x10
  struct UIIconLabel_array *v79; // x11
  unsigned __int64 v80; // x12
  UIIconLabel_o *v81; // x2
  struct ItemIconComponent_array *v82; // x11
  unsigned __int64 v83; // x12
  ItemIconComponent_o *v84; // x3
  __int64 v85; // x10
  int32_t v86; // w23
  Il2CppObject *Entity; // x23
  UILabel_o *v88; // x22
  System_String_o *v89; // x24
  UILabel_o *v90; // x22
  UIIconLabel_o *priceIconLabel; // x22
  int32_t PriceIcon; // w24
  int32_t v93; // [xsp+8h] [xbp-68h] BYREF
  int32_t Prices; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F8A4A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_1B640C8(&int_TypeInfo, v10);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&System_Math_TypeInfo, v12);
    sub_1B640C8(&ShopBuyItemConfirmMenu_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B640C8(&StringLiteral_12215/*"STONE_FRAGMENTS_NEED_INFO"*/, v15);
    sub_1B640C8(&StringLiteral_2076/*"ANONYMOUS_NEED_INFO"*/, v16);
    sub_1B640C8(&StringLiteral_12221/*"STONE_NEED_INFO"*/, v17);
    sub_1B640C8(&StringLiteral_10765/*"QP_NAME"*/, v18);
    sub_1B640C8(&StringLiteral_10899/*"RARE_PRI_NEED_INFO"*/, v19);
    sub_1B640C8(&StringLiteral_1875/*"?"*/, v20);
    sub_1B640C8(&StringLiteral_5606/*"EVENT_ITEM_NEED_INFO"*/, v21);
    sub_1B640C8(&StringLiteral_8467/*"MANA_NEED_INFO"*/, v22);
    sub_1B640C8(&StringLiteral_11981/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, v23);
    byte_49F8A4A = 1;
  }
  eventItemIcon = (__int64)this->fields.eventItemIcon;
  if ( !eventItemIcon )
    goto LABEL_180;
  ItemIconComponent__Clear((ItemIconComponent_o *)eventItemIcon, 0LL);
  eventItemIcon = (__int64)ShopBuyItemConfirmMenu__GetUserItemCounts(this, v25);
  if ( !shopEntity )
    goto LABEL_180;
  v28 = eventItemIcon;
  switch ( shopEntity->fields.payType )
  {
    case 1:
      priceDataLabel = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v44 = &StringLiteral_12221/*"STONE_NEED_INFO"*/;
      goto LABEL_51;
    case 2:
      priceDataLabel = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v44 = &StringLiteral_10765/*"QP_NAME"*/;
LABEL_51:
      v45 = (System_String_o *)*v44;
      goto LABEL_55;
    case 4:
      priceDataLabel = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v45 = (System_String_o *)StringLiteral_8467/*"MANA_NEED_INFO"*/;
LABEL_55:
      eventItemIcon = (__int64)LocalizationManager__Get(v45, 0LL);
      if ( !priceDataLabel )
        goto LABEL_180;
      v46 = (System_String_o *)eventItemIcon;
      v47 = priceDataLabel;
      goto LABEL_97;
    case 6:
    case 0xB:
      if ( ShopEntity__GetItemCount(shopEntity, 0LL) < 2 )
      {
        if ( isNotHavingShopItemReceived )
          return;
        if ( ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v29) )
        {
          eventItemIcon = (__int64)ShopEntity__GetAnotherPayItemIds(shopEntity, 0LL);
          if ( !eventItemIcon )
            goto LABEL_180;
        }
        else
        {
          eventItemIcon = (__int64)shopEntity->fields.itemIds;
          if ( !eventItemIcon )
            goto LABEL_180;
        }
        if ( *(_DWORD *)(eventItemIcon + 24) )
        {
          v86 = *(_DWORD *)(eventItemIcon + 32);
          eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !eventItemIcon )
            goto LABEL_180;
          eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)eventItemIcon,
                                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !eventItemIcon )
            goto LABEL_180;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
                     v86,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( isInPreparation )
          {
            if ( ShopEntity__checkFlag(shopEntity, 64, 0LL) )
            {
              eventItemIcon = (__int64)this->fields.priceDataLabel;
              if ( eventItemIcon )
              {
                UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1875/*"?"*/, 0LL);
                eventItemIcon = (__int64)this->fields.priceIconLabel;
                if ( eventItemIcon )
                {
                  UIIconLabel__SetEventQuestion((UIIconLabel_o *)eventItemIcon, 0LL);
                  return;
                }
              }
              goto LABEL_180;
            }
            if ( ShopEntity__checkFlag(shopEntity, 32, 0LL) )
            {
              eventItemIcon = (__int64)this->fields.priceDataLabel;
              if ( eventItemIcon )
              {
                UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1875/*"?"*/, 0LL);
                eventItemIcon = (__int64)this->fields.eventItemIcon;
                if ( eventItemIcon )
                {
                  ItemIconComponent__SetItemImage((ItemIconComponent_o *)eventItemIcon, 8007, 0LL);
                  return;
                }
              }
              goto LABEL_180;
            }
          }
          v88 = this->fields.priceDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v89 = LocalizationManager__Get((System_String_o *)StringLiteral_5606/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
          Prices = ShopEntity__GetPrices(shopEntity, 0, 0LL);
          eventItemIcon = j_il2cpp_value_box_0(int_TypeInfo, &Prices);
          if ( !Entity )
            goto LABEL_180;
          eventItemIcon = (__int64)System_String__Format_61389768(
                                     v89,
                                     (Il2CppObject *)eventItemIcon,
                                     (Il2CppObject *)Entity[1].monitor,
                                     0LL);
          if ( !v88 )
            goto LABEL_180;
          UILabel__set_text(v88, (System_String_o *)eventItemIcon, 0LL);
          v90 = this->fields.priceDataLabel;
          eventItemIcon = (__int64)ShopBuyItemConfirmMenu_TypeInfo;
          if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
          if ( !v90 )
            goto LABEL_180;
          UILabel__SetCondensedScale(
            v90,
            ShopBuyItemConfirmMenu_TypeInfo->static_fields->PRICE_DATA_LABEL_MAX_WIDTH,
            0LL);
          priceIconLabel = this->fields.priceIconLabel;
          PriceIcon = ShopEntity__GetPriceIcon(shopEntity, 0LL);
          eventItemIcon = ShopEntity__GetPrices(shopEntity, 0, 0LL);
          if ( !v28 )
            goto LABEL_180;
          if ( *(_DWORD *)(v28 + 24) )
          {
            if ( priceIconLabel )
            {
              UIIconLabel__SetPurchaseDecision(priceIconLabel, PriceIcon, eventItemIcon, *(_DWORD *)(v28 + 32), 0LL);
              eventItemIcon = (__int64)this->fields.eventItemIcon;
              if ( eventItemIcon )
              {
                ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, (int32_t)Entity[2].monitor, -1, 0LL);
                return;
              }
            }
LABEL_180:
            sub_1B64324(eventItemIcon);
          }
        }
LABEL_181:
        sub_1B6432C(eventItemIcon, v26);
      }
      if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 1 )
      {
        for ( i = 0LL; (__int64)i < ShopEntity__GetItemCount(shopEntity, 0LL); ++i )
        {
          eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !eventItemIcon )
            goto LABEL_180;
          eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)eventItemIcon,
                                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
          itemIds = shopEntity->fields.itemIds;
          if ( !itemIds )
            goto LABEL_180;
          if ( i >= itemIds->max_length )
            goto LABEL_181;
          if ( !eventItemIcon )
            goto LABEL_180;
          eventItemIcon = (__int64)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
                                     itemIds->m_Items[i + 1],
                                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          v32 = eventItemIcon;
          if ( !isInPreparation )
            goto LABEL_30;
          eventItemIcon = ShopEntity__checkFlag(shopEntity, 64, 0LL);
          if ( (eventItemIcon & 1) != 0 )
          {
            priceDataLabels = this->fields.priceDataLabels;
            if ( !priceDataLabels )
              goto LABEL_180;
            if ( i >= priceDataLabels->max_length )
              goto LABEL_181;
            eventItemIcon = (__int64)priceDataLabels->m_Items[i];
            if ( !eventItemIcon )
              goto LABEL_180;
            UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1875/*"?"*/, 0LL);
            priceIconLabels = this->fields.priceIconLabels;
            if ( !priceIconLabels )
              goto LABEL_180;
            if ( i >= priceIconLabels->max_length )
              goto LABEL_181;
            eventItemIcon = (__int64)priceIconLabels->m_Items[i];
            if ( !eventItemIcon )
              goto LABEL_180;
            UIIconLabel__SetEventQuestion((UIIconLabel_o *)eventItemIcon, 0LL);
            continue;
          }
          eventItemIcon = ShopEntity__checkFlag(shopEntity, 32, 0LL);
          if ( (eventItemIcon & 1) != 0 )
          {
            v35 = this->fields.priceDataLabels;
            if ( !v35 )
              goto LABEL_180;
            if ( i >= v35->max_length )
              goto LABEL_181;
            eventItemIcon = (__int64)v35->m_Items[i];
            if ( !eventItemIcon )
              goto LABEL_180;
            UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1875/*"?"*/, 0LL);
            eventItemIcons = this->fields.eventItemIcons;
            if ( !eventItemIcons )
              goto LABEL_180;
            if ( i >= eventItemIcons->max_length )
              goto LABEL_181;
            eventItemIcon = (__int64)eventItemIcons->m_Items[i];
            if ( !eventItemIcon )
              goto LABEL_180;
            ItemIconComponent__SetItemImage((ItemIconComponent_o *)eventItemIcon, 8007, 0LL);
          }
          else
          {
LABEL_30:
            v37 = this->fields.priceDataLabels;
            if ( !v37 )
              goto LABEL_180;
            if ( i >= v37->max_length )
              goto LABEL_181;
            v38 = v37->m_Items[i];
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v39 = LocalizationManager__Get((System_String_o *)StringLiteral_5606/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
            v93 = ShopEntity__GetPrices(shopEntity, i, 0LL);
            eventItemIcon = j_il2cpp_value_box_0(int_TypeInfo, &v93);
            if ( !v32 )
              goto LABEL_180;
            eventItemIcon = (__int64)System_String__Format_61389768(
                                       v39,
                                       (Il2CppObject *)eventItemIcon,
                                       *(Il2CppObject **)(v32 + 24),
                                       0LL);
            if ( !v38 )
              goto LABEL_180;
            UILabel__set_text(v38, (System_String_o *)eventItemIcon, 0LL);
            v40 = this->fields.priceIconLabels;
            if ( !v40 )
              goto LABEL_180;
            if ( i >= v40->max_length )
              goto LABEL_181;
            v41 = v40->m_Items[i];
            v42 = ShopEntity__GetPriceIcon(shopEntity, 0LL);
            eventItemIcon = ShopEntity__GetPrices(shopEntity, i, 0LL);
            if ( !v28 )
              goto LABEL_180;
            if ( i >= *(unsigned int *)(v28 + 24) )
              goto LABEL_181;
            if ( !v41 )
              goto LABEL_180;
            UIIconLabel__SetPurchaseDecision(v41, v42, eventItemIcon, *(_DWORD *)(v28 + 32 + 4 * i), 0LL);
            eventItemIcon = (__int64)this->fields.eventItemIcon;
            if ( !eventItemIcon )
              goto LABEL_180;
            ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, *(_DWORD *)(v32 + 40), -1, 0LL);
          }
        }
      }
      return;
    case 8:
      eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_180;
      eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
      v48 = shopEntity->fields.itemIds;
      if ( !v48 )
        goto LABEL_180;
      if ( !v48->max_length )
        goto LABEL_181;
      if ( !eventItemIcon )
        goto LABEL_180;
      v49 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
              v48->m_Items[1],
              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v50 = this->fields.priceDataLabel;
      v51 = v49;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v52 = &StringLiteral_12215/*"STONE_FRAGMENTS_NEED_INFO"*/;
      goto LABEL_71;
    case 9:
      eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_180;
      eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
      v53 = shopEntity->fields.itemIds;
      if ( !v53 )
        goto LABEL_180;
      if ( !v53->max_length )
        goto LABEL_181;
      if ( !eventItemIcon )
        goto LABEL_180;
      v54 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
              v53->m_Items[1],
              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v50 = this->fields.priceDataLabel;
      v51 = v54;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v52 = &StringLiteral_2076/*"ANONYMOUS_NEED_INFO"*/;
LABEL_71:
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)*v52, 0LL);
      if ( !v50 )
        goto LABEL_180;
      UILabel__set_text(v50, (System_String_o *)eventItemIcon, 0LL);
      v55 = this->fields.priceIconLabel;
      v56 = ShopEntity__GetPriceIcon(shopEntity, 0LL);
      eventItemIcon = ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !v28 )
        goto LABEL_180;
      if ( !*(_DWORD *)(v28 + 24) )
        goto LABEL_181;
      if ( !v55 )
        goto LABEL_180;
      UIIconLabel__SetPurchaseDecision(v55, v56, eventItemIcon, *(_DWORD *)(v28 + 32), 0LL);
      if ( !v51 )
        goto LABEL_180;
      eventItemIcon = (__int64)this->fields.eventItemIcon;
      if ( !eventItemIcon )
        goto LABEL_180;
      ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, (int32_t)v51[2].monitor, -1, 0LL);
      return;
    case 0xA:
      v57 = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10899/*"RARE_PRI_NEED_INFO"*/, 0LL);
      if ( !v57 )
        goto LABEL_180;
      UILabel__set_text(v57, (System_String_o *)eventItemIcon, 0LL);
      v58 = this->fields.priceIconLabel;
      v59 = ShopEntity__GetPriceIcon(shopEntity, 0LL);
      eventItemIcon = ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !v28 )
        goto LABEL_180;
      if ( !*(_DWORD *)(v28 + 24) )
        goto LABEL_181;
      if ( !v58 )
        goto LABEL_180;
      UIIconLabel__SetPurchaseDecision(v58, v59, eventItemIcon, *(_DWORD *)(v28 + 32), 0LL);
      if ( ShopEntity__GetPrice(shopEntity, 0LL) )
      {
        Price = ShopEntity__GetPrice(shopEntity, 0LL);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v61 = log10((double)Price);
        if ( v61 == INFINITY )
          v62 = -2147483647;
        else
          v62 = (int)v61 + 1;
      }
      else
      {
        v62 = 1;
      }
      IsSetStrikethrough = ShopEntity__IsSetStrikethrough(shopEntity, isInPreparation, 0LL);
      if ( IsSetStrikethrough )
      {
        v71 = 352LL;
        if ( v62 == 1 )
          v71 = 344LL;
        ShopBuyItemConfirmMenu__SetLabelActive(
          (ShopBuyItemConfirmMenu_o *)IsSetStrikethrough,
          *(UILabel_o **)((char *)&this->klass + v71),
          1,
          v70);
      }
      if ( !ShopEntity__IsAfterTheFreeShopReleaseDate(shopEntity, 0LL)
        || !ShopEntity__IsFulFilledFreeExchangeCondition(shopEntity, 0LL) )
      {
        return;
      }
      eventItemIcon = (__int64)this->fields.freeLabel;
      if ( !eventItemIcon )
        goto LABEL_180;
      eventItemIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventItemIcon, 0LL);
      if ( !eventItemIcon )
        goto LABEL_180;
      eventItemIcon = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)eventItemIcon, 0LL);
      if ( !eventItemIcon )
        goto LABEL_180;
      v72 = 384LL;
      if ( v62 == 1 )
        v72 = 372LL;
      v73 = v62 == 1 ? 368LL : 380LL;
      v74 = v62 == 1 ? 364LL : 376LL;
      v95.fields.z = *(float *)((char *)&this->klass + v72);
      v95.fields.y = *(float *)((char *)&this->klass + v73);
      v95.fields.x = *(float *)((char *)&this->klass + v74);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventItemIcon, v95, 0LL);
      eventItemIcon = (__int64)this->fields.freeLabel;
      if ( !eventItemIcon )
        goto LABEL_180;
      eventItemIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventItemIcon, 0LL);
      if ( !eventItemIcon )
        goto LABEL_180;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventItemIcon, 1, 0LL);
      return;
    case 0xC:
      eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_180;
      eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
      v63 = shopEntity->fields.itemIds;
      if ( !v63 )
        goto LABEL_180;
      if ( !v63->max_length )
        goto LABEL_181;
      if ( !eventItemIcon )
        goto LABEL_180;
      eventItemIcon = (__int64)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
                                 v63->m_Items[1],
                                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !eventItemIcon || !this->fields.priceDataLabel )
        goto LABEL_180;
      v46 = *(System_String_o **)(eventItemIcon + 24);
      v47 = this->fields.priceDataLabel;
LABEL_97:
      UILabel__set_text(v47, v46, 0LL);
      v64 = this->fields.priceIconLabel;
      v65 = ShopEntity__GetPriceIcon(shopEntity, 0LL);
      eventItemIcon = ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !v28 )
        goto LABEL_180;
      if ( !*(_DWORD *)(v28 + 24) )
        goto LABEL_181;
      if ( !v64 )
        goto LABEL_180;
      UIIconLabel__SetPurchaseDecision(v64, v65, eventItemIcon, *(_DWORD *)(v28 + 32), 0LL);
      return;
    case 0xD:
      priceFreeDataLabel = this->fields.priceFreeDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11981/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, 0LL);
      if ( !priceFreeDataLabel )
        goto LABEL_180;
      UILabel__set_text(priceFreeDataLabel, (System_String_o *)eventItemIcon, 0LL);
      return;
    case 0xE:
      commonConsumeEntities = this->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        return;
      v68 = *(_QWORD *)&commonConsumeEntities->max_length;
      if ( (_DWORD)v68 == 1 )
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
      if ( (int)v68 < 2 )
        return;
      for ( j = 4LL; ; ++j )
      {
        v76 = this->fields.priceDataLabels;
        if ( !v76 )
          break;
        max_length = v76->max_length;
        v78 = j - 4;
        if ( j - 4 >= (int)max_length )
        {
          v26 = 0LL;
        }
        else
        {
          if ( v78 >= max_length )
            goto LABEL_181;
          v26 = (UILabel_o *)*((_QWORD *)&v76->obj.klass + j);
        }
        v79 = this->fields.priceIconLabels;
        if ( !v79 )
          break;
        v80 = v79->max_length;
        if ( (__int64)v78 >= (int)v80 )
        {
          v81 = 0LL;
        }
        else
        {
          if ( v78 >= v80 )
            goto LABEL_181;
          v81 = (UIIconLabel_o *)*((_QWORD *)&v79->obj.klass + j);
        }
        v82 = this->fields.eventItemIcons;
        if ( !v82 )
          break;
        v83 = v82->max_length;
        if ( (__int64)v78 >= (int)v83 )
        {
          v84 = 0LL;
        }
        else
        {
          if ( v78 >= v83 )
            goto LABEL_181;
          v84 = (ItemIconComponent_o *)*((_QWORD *)&v82->obj.klass + j);
        }
        if ( v78 >= (unsigned int)v68 )
          goto LABEL_181;
        ShopBuyItemConfirmMenu__SetCommonConsumePriceText(
          this,
          v26,
          v81,
          v84,
          *((CommonConsumeEntity_o **)&commonConsumeEntities->obj.klass + j),
          v27);
        commonConsumeEntities = this->fields.commonConsumeEntities;
        if ( !commonConsumeEntities )
          goto LABEL_180;
        LODWORD(v68) = commonConsumeEntities->max_length;
        v85 = j - 3;
        if ( v85 >= (int)v68 )
          return;
      }
      goto LABEL_180;
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
    sub_1B64324(v12);
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
        sub_1B64324(this);
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

  if ( (byte_49F8A3C & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, sprite);
    byte_49F8A3C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_1B64324(gameObject);
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

  if ( (byte_49F8A3D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, sprite);
    byte_49F8A3D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !sprite )
      sub_1B64324(v6);
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
  ShopReleaseMaster_o *v19; // x22
  _BOOL4 isExistCondType; // w23
  _BOOL4 v21; // w24
  _BOOL4 v22; // w25
  _BOOL4 v23; // w28
  System_String_o *IsServant; // x0
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x3
  char v27; // w26
  struct UILabel_o *v28; // x19
  __int64 *v29; // x8
  __int64 v30; // x1
  struct System_Int32_array *targetIds; // x8
  __int64 *v32; // x8
  UILabel_o *textOnMask; // x1
  System_String_o *v34; // x2
  UILabel_o *v35; // x19
  unsigned int shopType; // w8
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_49F8A47 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, shopEntity);
    sub_1B640C8(&Method_DataManager_GetMaster_ShopReleaseMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1B640C8(&LocalizationManager_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&StringLiteral_11977/*"SHOP_CANT_BUY"*/, v12);
    sub_1B640C8(&StringLiteral_12014/*"SHOP_QUEST_OPEN"*/, v13);
    sub_1B640C8(&StringLiteral_12012/*"SHOP_QUEST_ALREADY_CLEARED"*/, v14);
    sub_1B640C8(&StringLiteral_12010/*"SHOP_NOT_RELEASE_SET_ITEM"*/, v15);
    sub_1B640C8(&StringLiteral_1/*""*/, v16);
    sub_1B640C8(&StringLiteral_11929/*"SHOP_ALREADY_GET"*/, v17);
    byte_49F8A47 = 1;
  }
  questId = 0;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ShopReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  if ( !shopEntity )
    goto LABEL_67;
  v19 = Master_object;
  if ( !Master_object )
    goto LABEL_67;
  isExistCondType = ShopReleaseMaster__isExistCondType(Master_object, shopEntity->fields.id, 38, 0LL);
  v21 = ShopReleaseMaster__isExistCondType(v19, shopEntity->fields.id, 41, 0LL);
  v22 = ShopReleaseMaster__isExistCondType(v19, shopEntity->fields.id, 40, 0LL);
  v23 = ShopReleaseMaster__isExistCondType(v19, shopEntity->fields.id, 78, 0LL)
     || ShopReleaseMaster__isExistCondType(v19, shopEntity->fields.id, 79, 0LL);
  IsServant = (System_String_o *)ShopReleaseMaster__isExistCondType(v19, shopEntity->fields.id, 108, 0LL);
  v27 = (char)IsServant;
  switch ( shopEntity->fields.purchaseType )
  {
    case 4:
      Master_object = (ShopReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (ShopReleaseMaster_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Master_object,
                                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
      targetIds = shopEntity->fields.targetIds;
      if ( !targetIds )
        goto LABEL_67;
      if ( !targetIds->max_length )
        sub_1B6432C(Master_object, v30);
      if ( !Master_object )
        goto LABEL_67;
      IsServant = (System_String_o *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                       &entity,
                                       targetIds->m_Items[1],
                                       (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
            v32 = &StringLiteral_11977/*"SHOP_CANT_BUY"*/;
            goto LABEL_64;
          }
          if ( (isExistCondType || v21 || v22 || v23) | v27 & 1 )
          {
            IsServant = (System_String_o *)ShopReleaseMaster__CondClearCheck(v19, shopEntity->fields.id, 40, 0LL);
            if ( ((unsigned __int8)IsServant & 1) == 0 )
            {
              v34 = (System_String_o *)StringLiteral_1/*""*/;
              goto LABEL_66;
            }
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v32 = &StringLiteral_11929/*"SHOP_ALREADY_GET"*/;
LABEL_64:
            IsServant = LocalizationManager__Get((System_String_o *)*v32, 0LL);
            v34 = IsServant;
LABEL_66:
            textOnMask = this->fields.textOnMask;
            goto LABEL_59;
          }
          goto LABEL_58;
        }
LABEL_67:
        sub_1B64324(Master_object);
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
                                       v26);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_58;
      IsServant = (System_String_o *)ShopEntity__IsAnotherItemBuyable(shopEntity, 0LL);
      if ( ((unsigned __int8)IsServant & 1) != 0 )
        goto LABEL_58;
LABEL_12:
      v28 = this->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v29 = &StringLiteral_11929/*"SHOP_ALREADY_GET"*/;
      goto LABEL_46;
    case 5:
      IsServant = (System_String_o *)ShopBuyItemConfirmMenu__GetIsSetItemEventShop(
                                       (ShopBuyItemConfirmMenu_o *)IsServant,
                                       shopEntity->fields.targetIds,
                                       v25);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_37;
      if ( !isInPreparation )
        goto LABEL_58;
      v28 = this->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v29 = &StringLiteral_12010/*"SHOP_NOT_RELEASE_SET_ITEM"*/;
      goto LABEL_46;
    case 6:
      if ( !isInPreparation )
      {
        if ( ShopEntity__isQuestNotClear(shopEntity, &questId, 0, 0LL) )
        {
          IsServant = (System_String_o *)ShopEntity__isQuestNotClearItemClosedSub(shopEntity, questId, 0, 0LL);
          if ( ((unsigned __int8)IsServant & 1) != 0 )
            goto LABEL_43;
        }
        else
        {
          IsServant = (System_String_o *)ShopEntity__isExpireItemClosed(shopEntity, 0LL);
          if ( ((unsigned __int8)IsServant & 1) != 0 )
          {
            v35 = this->fields.textOnMask;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Master_object = (ShopReleaseMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12014/*"SHOP_QUEST_OPEN"*/, 0LL);
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
        v34 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_59;
      }
      IsServant = (System_String_o *)ShopEntity__isQuestNotClearItemClosed(shopEntity, 0, 0LL);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_58;
LABEL_43:
      v28 = this->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v29 = &StringLiteral_12012/*"SHOP_QUEST_ALREADY_CLEARED"*/;
LABEL_46:
      IsServant = LocalizationManager__Get((System_String_o *)*v29, 0LL);
      textOnMask = v28;
      v34 = IsServant;
LABEL_59:
      ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)IsServant, textOnMask, v34, v26);
      return;
    case 7:
    case 9:
      if ( isInPreparation )
        goto LABEL_12;
      goto LABEL_58;
    default:
LABEL_37:
      if ( !isInPreparation )
        goto LABEL_58;
      if ( !((isExistCondType || v21 || v23) | v27 & 1) )
        goto LABEL_58;
      IsServant = (System_String_o *)ShopReleaseMaster__CondClearCheck(v19, shopEntity->fields.id, 1, 0LL);
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
  const MethodInfo *v47; // x1
  ShopBuyItemConfirmMenu_o *v48; // x0
  const MethodInfo *v49; // x3
  struct ShopEntity_o *v50; // x8
  UILabel_o *v51; // x21
  System_String_o *v52; // x22
  Il2CppObject *v53; // x0
  ShopBuyItemConfirmMenu_o *v54; // x0
  const MethodInfo *v55; // x3
  __int64 *v56; // x8
  __int64 *v57; // x8
  System_String_o *v58; // x20
  struct ShopEntity_o *v59; // x8
  struct System_Int32_array *itemIds; // x8
  Il2CppObject *monitor; // x1
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
  int stringLength; // w8
  System_String_o *v78; // x0
  Il2CppObject *v79; // x20
  int32_t v80; // w19
  BalanceConfig_c *v81; // x8
  int32_t v82; // w20
  int32_t PresentBoxMax; // w9
  UILabel_o *v84; // x19
  __int64 *v85; // x8
  Il2CppObject *MasterData_object; // x19
  int32_t Sum; // w0
  BalanceConfig_c *v88; // x8
  int32_t v89; // w19
  int32_t UserItemMax; // w9
  int32_t v91; // w20
  Il2CppObject *v92; // [xsp+0h] [xbp-80h] BYREF
  int32_t recordNum; // [xsp+Ch] [xbp-74h] BYREF
  int32_t buyQuestNum[2]; // [xsp+10h] [xbp-70h] BYREF
  __int64 buyServantEquipNum; // [xsp+18h] [xbp-68h] BYREF
  int32_t questId[2]; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_49F8A44 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, shopEntity);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v11);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v13);
    sub_1B640C8(&LocalizationManager_TypeInfo, v14);
    sub_1B640C8(&NetworkManager_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&string_TypeInfo, v17);
    sub_1B640C8(&StringLiteral_11962/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/, v18);
    sub_1B640C8(&StringLiteral_11954/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/, v19);
    sub_1B640C8(&StringLiteral_11963/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/, v20);
    sub_1B640C8(&StringLiteral_11965/*"SHOP_BUY_RARE_PRI_CONFIRM_WARNING"*/, v21);
    sub_1B640C8(&StringLiteral_11959/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/, v22);
    sub_1B640C8(&StringLiteral_10765/*"QP_NAME"*/, v23);
    sub_1B640C8(&StringLiteral_11950/*"SHOP_BUY_CONFIRM_SOLD_OUT_WARNING"*/, v24);
    sub_1B640C8(&StringLiteral_11943/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/, v25);
    sub_1B640C8(&StringLiteral_11946/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/, v26);
    sub_1B640C8(&StringLiteral_11945/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, v27);
    sub_1B640C8(&StringLiteral_11947/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, v28);
    sub_1B640C8(&StringLiteral_11948/*"SHOP_BUY_CONFIRM_QUEST_CLAER"*/, v29);
    sub_1B640C8(&StringLiteral_25016/*"{0}、"*/, v30);
    sub_1B640C8(&StringLiteral_11953/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, v31);
    sub_1B640C8(&StringLiteral_11971/*"SHOP_BUY_STONE_FRAGMENTS_CONFIRM_WARNING"*/, v32);
    sub_1B640C8(&StringLiteral_11956/*"SHOP_BUY_ITEM_FULL_WARNING"*/, v33);
    sub_1B640C8(&StringLiteral_11958/*"SHOP_BUY_ITEM_OVER_WARNING"*/, v34);
    sub_1B640C8(&StringLiteral_1/*""*/, v35);
    sub_1B640C8(&StringLiteral_11949/*"SHOP_BUY_CONFIRM_QUEST_HOLD"*/, v36);
    byte_49F8A44 = 1;
  }
  *(_QWORD *)questId = 0LL;
  *(_QWORD *)buyQuestNum = 0LL;
  buyServantEquipNum = 0LL;
  recordNum = 0;
  v92 = 0LL;
  p_warningLabel = &this->fields.warningLabel;
  warningLabel = this->fields.warningLabel;
  Price = (int64_t)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !warningLabel )
    goto LABEL_176;
  UILabel__set_fontSize(warningLabel, BalanceConfig_TypeInfo->static_fields->DefaultFontSize, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText(v40, *p_warningLabel, (System_String_o *)StringLiteral_1/*""*/, v41);
  if ( !shopEntity )
    goto LABEL_176;
  if ( shopEntity->fields.purchaseType != 6 || shopEntity->fields.shopType != 3 )
    goto LABEL_21;
  if ( !isInPreparation )
  {
    if ( !ShopEntity__isQuestNotClear(shopEntity, &questId[1], 0, 0LL)
      || !ShopEntity__isQuestNotClearItemClosedSub(shopEntity, questId[1], 0, 0LL) )
    {
      if ( ShopEntity__IsQuestHold(shopEntity, 0LL) )
      {
        v42 = *p_warningLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v43 = &StringLiteral_11949/*"SHOP_BUY_CONFIRM_QUEST_HOLD"*/;
        goto LABEL_44;
      }
      goto LABEL_21;
    }
LABEL_14:
    v42 = *p_warningLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v43 = &StringLiteral_11948/*"SHOP_BUY_CONFIRM_QUEST_CLAER"*/;
    goto LABEL_44;
  }
  if ( ShopEntity__isQuestNotClearItemClosed(shopEntity, 0, 0LL) )
    goto LABEL_14;
LABEL_21:
  if ( ShopEntity__IsSoldOut(shopEntity, 0LL)
    && !ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0LL)
    && !ShopEntity__IsAnotherItemBuyable(shopEntity, 0LL) )
  {
    v42 = *p_warningLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v43 = &StringLiteral_11950/*"SHOP_BUY_CONFIRM_SOLD_OUT_WARNING"*/;
    goto LABEL_44;
  }
  if ( isInPreparation )
  {
    v42 = *p_warningLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v43 = &StringLiteral_11946/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/;
LABEL_44:
    v48 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v43, 0LL);
LABEL_45:
    ShopBuyItemConfirmMenu__SetLabelText(v48, v42, (System_String_o *)v48, v49);
    return;
  }
  if ( !ShopEntity__IsEnable(shopEntity, 0LL, 0LL) )
  {
    v42 = *p_warningLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v43 = &StringLiteral_11947/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/;
    goto LABEL_44;
  }
  UserItemCounts = ShopBuyItemConfirmMenu__GetUserItemCounts(this, v44);
  switch ( shopEntity->fields.payType )
  {
    case 2:
      Price = ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_176;
      if ( !UserItemCounts->max_length )
        goto LABEL_177;
      if ( (int)Price <= UserItemCounts->m_Items[1] )
        goto LABEL_137;
      v51 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v52 = LocalizationManager__Get((System_String_o *)StringLiteral_11953/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, 0LL);
      v53 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10765/*"QP_NAME"*/, 0LL);
      v54 = (ShopBuyItemConfirmMenu_o *)System_String__Format(v52, v53, 0LL);
      goto LABEL_95;
    case 4:
      Price = ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_176;
      if ( !UserItemCounts->max_length )
        goto LABEL_177;
      if ( (int)Price <= UserItemCounts->m_Items[1] )
        goto LABEL_137;
      v51 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v56 = &StringLiteral_11959/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/;
      goto LABEL_94;
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
              goto LABEL_176;
            if ( (unsigned int)v46 >= UserItemCounts->max_length )
              goto LABEL_177;
            if ( (int)Price > UserItemCounts->m_Items[v46 + 1] )
              break;
            if ( (int)++v46 >= ShopEntity__GetItemCount(shopEntity, 0LL) )
              goto LABEL_137;
          }
          v42 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v43 = &StringLiteral_11954/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/;
          goto LABEL_44;
        }
        goto LABEL_137;
      }
      Price = ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_176;
      if ( !UserItemCounts->max_length )
        goto LABEL_177;
      if ( (int)Price <= UserItemCounts->m_Items[1] )
        goto LABEL_137;
      Price = ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v47);
      v50 = this->fields.shopEntity;
      if ( !v50 )
        goto LABEL_176;
      if ( (Price & 1) != 0 )
      {
        Price = (int64_t)ShopEntity__GetAnotherPayItemIds(this->fields.shopEntity, 0LL);
        if ( !Price )
          goto LABEL_176;
      }
      else
      {
        Price = (int64_t)v50->fields.itemIds;
        if ( !Price )
          goto LABEL_176;
      }
      if ( !*(_DWORD *)(Price + 24) )
LABEL_177:
        sub_1B6432C(Price, v47);
      v69 = *(_DWORD *)(Price + 32);
      Price = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Price )
        goto LABEL_176;
      Price = (int64_t)DataManager__GetMasterData_object_(
                         (DataManager_o *)Price,
                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Price )
        goto LABEL_176;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Price,
              &v92,
              v69,
              (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        return;
      v42 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Price = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11953/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, 0LL);
      if ( !v92 )
        goto LABEL_176;
      monitor = (Il2CppObject *)v92[1].monitor;
      goto LABEL_136;
    case 8:
      Price = ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_176;
      if ( !UserItemCounts->max_length )
        goto LABEL_177;
      if ( (int)Price <= UserItemCounts->m_Items[1] )
        goto LABEL_137;
      v42 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v57 = &StringLiteral_11971/*"SHOP_BUY_STONE_FRAGMENTS_CONFIRM_WARNING"*/;
      goto LABEL_78;
    case 9:
      Price = ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_176;
      if ( !UserItemCounts->max_length )
        goto LABEL_177;
      if ( (int)Price <= UserItemCounts->m_Items[1] )
        goto LABEL_137;
      v42 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v57 = &StringLiteral_11943/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/;
LABEL_78:
      v58 = LocalizationManager__Get((System_String_o *)*v57, 0LL);
      Price = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Price )
        goto LABEL_176;
      Price = (int64_t)DataManager__GetMasterData_object_(
                         (DataManager_o *)Price,
                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
      v59 = this->fields.shopEntity;
      if ( !v59 )
        goto LABEL_176;
      itemIds = v59->fields.itemIds;
      if ( !itemIds )
        goto LABEL_176;
      if ( !itemIds->max_length )
        goto LABEL_177;
      if ( !Price )
        goto LABEL_176;
      Price = (int64_t)DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)Price,
                         itemIds->m_Items[1],
                         (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Price )
        goto LABEL_176;
      monitor = *(Il2CppObject **)(Price + 24);
      goto LABEL_85;
    case 0xA:
      Price = ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_176;
      if ( !UserItemCounts->max_length )
        goto LABEL_177;
      if ( (int)Price <= UserItemCounts->m_Items[1]
        || ShopEntity__IsAfterTheFreeShopReleaseDate(shopEntity, 0LL)
        && ShopEntity__IsFulFilledFreeExchangeCondition(shopEntity, 0LL) )
      {
        goto LABEL_137;
      }
      v51 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v56 = &StringLiteral_11965/*"SHOP_BUY_RARE_PRI_CONFIRM_WARNING"*/;
LABEL_94:
      v54 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v56, 0LL);
LABEL_95:
      ShopBuyItemConfirmMenu__SetLabelText(v54, v51, (System_String_o *)v54, v55);
      goto LABEL_137;
    case 0xE:
      if ( !this->fields.commonConsumeEntities )
        goto LABEL_137;
      Price = ShopEntity__get_TargetId(shopEntity, 0LL);
      v62 = BalanceConfig_TypeInfo;
      v63 = Price;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v62 = BalanceConfig_TypeInfo;
      }
      if ( v63 != v62->static_fields->ApSeedExchangeTargetItemId )
        goto LABEL_104;
      v64 = *p_warningLabel;
      if ( !v62->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v62);
      if ( !v64 )
        goto LABEL_176;
      UILabel__set_fontSize(v64, BalanceConfig_TypeInfo->static_fields->TradeApDialogWarningLabelFontSize, 0LL);
LABEL_104:
      commonConsumeEntities = this->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        goto LABEL_176;
      v66 = *(_QWORD *)&commonConsumeEntities->max_length;
      if ( (_DWORD)v66 == 1 )
      {
        v67 = commonConsumeEntities->m_Items[0];
        if ( !v67 )
          goto LABEL_176;
        num = v67->fields.num;
        if ( num > CommonConsumeEntity__GetUserHasNum(commonConsumeEntities->m_Items[0], 0LL) )
        {
          v42 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v58 = LocalizationManager__Get((System_String_o *)StringLiteral_11945/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, 0LL);
          monitor = (Il2CppObject *)CommonConsumeEntity__GetName(v67, 0LL);
LABEL_85:
          Price = (int64_t)v58;
          goto LABEL_136;
        }
      }
      else if ( (int)v66 > 1 )
      {
        Empty = string_TypeInfo->static_fields->Empty;
        v71 = 0;
        do
        {
          if ( v71 >= (unsigned int)v66 )
            goto LABEL_177;
          v72 = &commonConsumeEntities->obj.klass + v71;
          v73 = (CommonConsumeEntity_o *)v72[4];
          if ( !v73 )
            goto LABEL_176;
          v74 = v73->fields.num;
          Price = CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)v72[4], 0LL);
          if ( v74 > (int)Price )
          {
            Name = (Il2CppObject *)CommonConsumeEntity__GetName(v73, 0LL);
            v76 = System_String__Format((System_String_o *)StringLiteral_25016/*"{0}、"*/, Name, 0LL);
            Price = (int64_t)System_String__Concat_61375396(Empty, v76, 0LL);
            Empty = (struct System_String_o *)Price;
          }
          commonConsumeEntities = this->fields.commonConsumeEntities;
          if ( !commonConsumeEntities )
            goto LABEL_176;
          LODWORD(v66) = commonConsumeEntities->max_length;
          ++v71;
        }
        while ( v71 < (int)v66 );
        if ( !Empty )
          goto LABEL_176;
        stringLength = Empty->fields._stringLength;
        if ( stringLength >= 1 )
        {
          v78 = System_String__Remove_61394208(Empty, stringLength - 1, 0LL);
          v42 = *p_warningLabel;
          v79 = (Il2CppObject *)v78;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Price = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11945/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, 0LL);
          monitor = v79;
LABEL_136:
          v48 = (ShopBuyItemConfirmMenu_o *)System_String__Format((System_String_o *)Price, monitor, 0LL);
          goto LABEL_45;
        }
      }
LABEL_137:
      questId[0] = 0;
      *(_QWORD *)buyQuestNum = 0LL;
      buyServantEquipNum = 0LL;
      recordNum = 0;
      ShopEntity__GetSum(
        shopEntity,
        questId,
        (int32_t *)&buyServantEquipNum + 1,
        (int32_t *)&buyServantEquipNum,
        &buyQuestNum[1],
        buyQuestNum,
        &recordNum,
        0LL);
      if ( (int)buyServantEquipNum + HIDWORD(buyServantEquipNum) + buyQuestNum[1] >= 1 )
      {
        Price = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Price )
          goto LABEL_176;
        Price = (int64_t)DataManager__GetMasterData_object_(
                           (DataManager_o *)Price,
                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
        if ( !userGameEntity )
          goto LABEL_176;
        if ( !Price )
          goto LABEL_176;
        Price = (int64_t)UserPresentBoxMaster__getVaildList(
                           (UserPresentBoxMaster_o *)Price,
                           userGameEntity->fields.userId,
                           0LL);
        if ( !Price )
          goto LABEL_176;
        if ( shopEntity->fields.purchaseType == 5 )
          v80 = recordNum;
        else
          v80 = buyServantEquipNum + HIDWORD(buyServantEquipNum) + buyQuestNum[1];
        v81 = BalanceConfig_TypeInfo;
        v82 = *(_DWORD *)(Price + 24);
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v81 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v81->static_fields->PresentBoxMax;
        if ( PresentBoxMax <= v82 )
        {
          v84 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v85 = &StringLiteral_11962/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/;
LABEL_174:
          Price = (int64_t)LocalizationManager__Get((System_String_o *)*v85, 0LL);
          if ( v84 )
          {
            UILabel__set_text(v84, (System_String_o *)Price, 0LL);
            return;
          }
LABEL_176:
          sub_1B64324(Price);
        }
        if ( !v81->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v81);
          PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
        }
        if ( v80 + v82 > PresentBoxMax )
        {
          v84 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v85 = &StringLiteral_11963/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/;
          goto LABEL_174;
        }
      }
      if ( questId[0] < 1 )
        return;
      Price = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Price )
        goto LABEL_176;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Price,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Price = NetworkManager__get_UserId(0LL);
      if ( !MasterData_object )
        goto LABEL_176;
      Sum = UserItemMaster__getSum((UserItemMaster_o *)MasterData_object, Price, 0LL);
      v88 = BalanceConfig_TypeInfo;
      v89 = Sum;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v88 = BalanceConfig_TypeInfo;
      }
      UserItemMax = v88->static_fields->UserItemMax;
      if ( v89 >= UserItemMax )
      {
        v84 = *p_warningLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v85 = &StringLiteral_11956/*"SHOP_BUY_ITEM_FULL_WARNING"*/;
        goto LABEL_174;
      }
      v91 = questId[0];
      if ( !v88->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v88);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      if ( v91 + v89 > UserItemMax )
      {
        v84 = *p_warningLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v85 = &StringLiteral_11958/*"SHOP_BUY_ITEM_OVER_WARNING"*/;
        goto LABEL_174;
      }
      return;
    default:
      goto LABEL_137;
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
  Il2CppObject *v11; // x0
  Il2CppObject *v12; // x20
  CommonUI_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  ServantStatusDialog_EndDelegate_o *v16; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F8A56 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&commandCodeId);
    sub_1B640C8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v5);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v6);
    sub_1B640C8(&Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49F8A56 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_9;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         commandCodeId,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
  {
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = entity;
    v13 = (CommonUI_o *)v11;
    v16 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v14, v15);
    ServantStatusDialog_EndDelegate___ctor(
      v16,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v13 )
    {
      CommonUI__OpenServantEquipStatusDialog_30361548(v13, 25, (CommandCodeEntity_o *)v12, 0, v16, 0LL, 0LL);
      return 0;
    }
LABEL_9:
    sub_1B64324(Instance);
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
  int32_t itemDetailDialogOverwriteDepth; // w23
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x20
  CommonUI_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  ItemDetailInfoComponent_CallbackFunc_o *v17; // x22
  int32_t v18; // w3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F8A55 & 1) == 0 )
  {
    sub_1B640C8(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, *(_QWORD *)&itemId);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49F8A55 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_13;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         itemId,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    itemDetailDialogOverwriteDepth = this->fields.itemDetailDialogOverwriteDepth;
    v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = entity;
    v14 = (CommonUI_o *)v12;
    v17 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B64314(ItemDetailInfoComponent_CallbackFunc_TypeInfo, v15, v16);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      (intptr_t)Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__,
      0LL);
    if ( itemDetailDialogOverwriteDepth == 0x80000000 )
    {
      if ( v14 )
      {
        v18 = 50;
LABEL_11:
        CommonUI__OpenItemDetailDialog(v14, (ItemEntity_o *)v13, v17, v18, 0LL);
        return 0;
      }
    }
    else if ( v14 )
    {
      v18 = this->fields.itemDetailDialogOverwriteDepth;
      goto LABEL_11;
    }
LABEL_13:
    sub_1B64324(Instance);
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
  __int64 v12; // x1
  __int64 v13; // x2
  ItemDetailInfoComponent_CallbackFunc_o *v14; // x23

  v4 = (Il2CppObject *)this;
  if ( (byte_49F8A57 & 1) == 0 )
  {
    sub_1B640C8(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, shopEntity);
    sub_1B640C8(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    this = (ShopBuyItemConfirmMenu_o *)sub_1B640C8(&StringLiteral_9209/*"NONE"*/, v7);
    byte_49F8A57 = 1;
  }
  if ( !shopEntity )
    goto LABEL_9;
  if ( !System_String__IsNullOrEmpty(shopEntity->fields.infoMessage, 0LL)
    && System_String__op_Inequality(shopEntity->fields.infoMessage, (System_String_o *)StringLiteral_9209/*"NONE"*/, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    name = shopEntity->fields.name;
    infoMessage = shopEntity->fields.infoMessage;
    v11 = (CommonUI_o *)Instance;
    v14 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B64314(ItemDetailInfoComponent_CallbackFunc_TypeInfo, v12, v13);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v14,
      v4,
      (intptr_t)Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__,
      0LL);
    if ( v11 )
    {
      CommonUI__OpenItemDetailDialog_30410016(v11, name, infoMessage, v14, 0LL);
      return 0;
    }
LABEL_9:
    sub_1B64324(this);
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
  Il2CppObject *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  ServantLeaderInfo_o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  ServantStatusDialog_EndDelegate_o *v24; // x20
  Il2CppObject *v26; // x23
  __int64 v27; // x1
  __int64 v28; // x2
  EquipTargetInfo_o *v29; // x24
  __int64 v30; // x1
  __int64 v31; // x2
  ServantStatusDialog_EndDelegate_o *v32; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F8A54 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v10);
    sub_1B640C8(&EquipTargetInfo_TypeInfo, v11);
    sub_1B640C8(&ServantLeaderInfo_TypeInfo, v12);
    sub_1B640C8(&Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__, v13);
    sub_1B640C8(&Method_ShopBuyItemConfirmMenu_EndShowServantStatusDialog__, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_49F8A54 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_23;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          servantId,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
    v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = (ServantLeaderInfo_o *)sub_1B64314(ServantLeaderInfo_TypeInfo, v19, v20);
    ServantLeaderInfo___ctor_40150640(v21, servantId, 0, 1, 0LL);
    v24 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v22, v23);
    ServantStatusDialog_EndDelegate___ctor(
      v24,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantStatusDialog__,
      0LL);
    if ( v18 )
    {
      CommonUI__OpenServantStatusDialog_30357468((CommonUI_o *)v18, 7, v21, v24, 0LL);
      return 0;
    }
    goto LABEL_23;
  }
  Instance = entity;
  if ( !entity )
    goto LABEL_23;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL) )
  {
    v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v29 = (EquipTargetInfo_o *)sub_1B64314(EquipTargetInfo_TypeInfo, v27, v28);
    EquipTargetInfo___ctor_38565608(v29, servantId, limitCount, level, 0, 0LL);
    v32 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v30, v31);
    ServantStatusDialog_EndDelegate___ctor(
      v32,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v26 )
    {
      CommonUI__OpenServantEquipStatusDialog_30360564((CommonUI_o *)v26, 7, v29, v32, 0LL, 0LL);
      return 0;
    }
LABEL_23:
    sub_1B64324(Instance);
  }
  return 2;
}


System_String_o *__fastcall ShopBuyItemConfirmMenu__get_closeBtnPath(
        ShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_49F8A5E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15573/*"Window/CancelButton"*/, method);
    byte_49F8A5E = 1;
  }
  return (System_String_o *)StringLiteral_15573/*"Window/CancelButton"*/;
}


bool __fastcall ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  EventRewardRootComponent_c *v3; // x0
  ShopEntity_o *shopEntity; // x0

  if ( (byte_49F8A37 & 1) == 0 )
  {
    sub_1B640C8(&EventRewardRootComponent_TypeInfo, method);
    byte_49F8A37 = 1;
  }
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  if ( !byte_49F8A61 )
  {
    sub_1B640C8(&EventRewardRootComponent_TypeInfo, method);
    byte_49F8A61 = 1;
  }
  v3 = EventRewardRootComponent_TypeInfo;
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    v3 = EventRewardRootComponent_TypeInfo;
  }
  if ( !v3->static_fields->_IsAnotherPayFlag_k__BackingField )
    return 0;
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    sub_1B64324(0LL);
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
  int32_t v2; // w2
  int32_t v3; // w3
  ShopBuyItemConfirmMenu___c__DisplayClass93_0_o *v4; // x19
  struct ShopBuyItemConfirmMenu_o *_4__this; // x8
  System_Action_o *onChecked; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  struct ShopBuyItemConfirmMenu_o *v9; // x8
  System_Action_T__o *onCloseReturnWarning; // x21

  v4 = this;
  if ( (byte_49F8A62 & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu___c__DisplayClass93_0_o *)sub_1B640C8(&Method_ActionExtensions_Call_int___, method);
    byte_49F8A62 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (onChecked = _4__this->fields.onChecked,
        _4__this->fields.onChecked = 0LL,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.onChecked, 0, v2, v3),
        (v9 = v4->fields.__4__this) == 0LL) )
  {
    sub_1B64324(this);
  }
  onCloseReturnWarning = (System_Action_T__o *)v9->fields.onCloseReturnWarning;
  v9->fields.onCloseReturnWarning = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v9->fields.onCloseReturnWarning, 0, v7, v8);
  if ( v4->fields.isDecide )
    ActionExtensions__Call(onChecked, 0LL);
  else
    ActionExtensions__Call_int_(
      onCloseReturnWarning,
      0,
      (const MethodInfo_2D909D8 *)Method_ActionExtensions_Call_int___);
}