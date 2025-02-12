void __fastcall ShopBuyItemConfirmMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t v11; // x1
  struct ShopBuyItemConfirmMenu_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  struct ShopBuyItemConfirmMenu_StaticFields *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct ShopBuyItemConfirmMenu_StaticFields *v27; // x8

  if ( (byte_4BC3EC9 & 1) == 0 )
  {
    sub_1C1ABD4(&ShopBuyItemConfirmMenu_TypeInfo, v1);
    sub_1C1ABD4(&StringLiteral_17857/*"btn_txt_event_"*/, v8);
    sub_1C1ABD4(&StringLiteral_17910/*"btn_txt_trade"*/, v9);
    sub_1C1ABD4(&StringLiteral_17890/*"btn_txt_sale"*/, v10);
    byte_4BC3EC9 = 1;
  }
  ShopBuyItemConfirmMenu_TypeInfo->static_fields->VALENTINE_BTN_NAME = (struct System_String_o *)StringLiteral_17857/*"btn_txt_event_"*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)ShopBuyItemConfirmMenu_TypeInfo->static_fields,
    StringLiteral_17857/*"btn_txt_event_"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = StringLiteral_17910/*"btn_txt_trade"*/;
  static_fields = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  static_fields->DECIED_BTN_NAME_DEFAULT = (struct System_String_o *)StringLiteral_17910/*"btn_txt_trade"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->DECIED_BTN_NAME_DEFAULT, v11, v13, v14, v15, v16, v17, v18);
  v19 = StringLiteral_17890/*"btn_txt_sale"*/;
  v20 = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v20->DECIED_BTN_NAME_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_17890/*"btn_txt_sale"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v20->DECIED_BTN_NAME_LIMIT_MATERIAL, v19, v21, v22, v23, v24, v25, v26);
  v27 = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  *(_OWORD *)&v27->PRICE_DATA_LABEL_MAX_WIDTH = xmmword_BF9890;
  *(_QWORD *)&v27->DEFAULT_PRICE_INFO_POS_Y = 0xFFFFFF86FFFFFFECLL;
  v27->RESET_LAYOUT_OFFSET_Y = 34;
}


void __fastcall ShopBuyItemConfirmMenu___ctor(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4BC3EC8 & 1) == 0 )
  {
    sub_1C1ABD4(&BaseDialog_TypeInfo, method);
    byte_4BC3EC8 = 1;
  }
  this->fields.itemDetailDialogOverwriteDepth = 0x80000000;
  *(_OWORD *)&this->fields.freeLabelPos.fields.x = xmmword_BF9D90;
  *(_QWORD *)&this->fields.freeLabelPos2digit.fields.y = 3250585600LL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__CallOnClose(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_o *onClose; // x19
  PartyOrganizationUtility_o *p_onClose; // x0

  onClose = this->fields.onClose;
  if ( onClose )
  {
    p_onClose = (PartyOrganizationUtility_o *)&this->fields.onClose;
    p_onClose->klass = 0LL;
    sub_1C1AB78(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_int__o *onDecide; // x20
  PartyOrganizationUtility_o *p_onDecide; // x0

  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    p_onDecide = (PartyOrganizationUtility_o *)&this->fields.onDecide;
    p_onDecide->klass = 0LL;
    sub_1C1AB78(p_onDecide, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall ShopBuyItemConfirmMenu__Close(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ShopBuyItemConfirmMenu__Close_33837028(this, 0LL, v2);
}


void __fastcall ShopBuyItemConfirmMenu__Close_33837028(
        ShopBuyItemConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4BC3EB3 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, callback);
    sub_1C1ABD4(&Method_ShopBuyItemConfirmMenu_EndClose__, v10);
    byte_4BC3EB3 = 1;
  }
  this->fields.onClose = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.onClose,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__EndClose(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  ShopBuyItemConfirmMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C1AE30(0LL, v4);
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

  if ( (byte_4BC3EC0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__, isDecide);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4BC3EC0 = 1;
  }
  v4 = Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__;
  if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C1ABEC(Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v7);
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

  if ( (byte_4BC3EBF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4BC3EBF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v4);
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

  if ( (byte_4BC3EBE & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4BC3EBE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v4);
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
  if ( (byte_4BC3EA7 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, shopEntity);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserItemMaster___, v9);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v10);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v11);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4BC3EA7 = 1;
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
              sub_1C1AE38(this, shopEntity);
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
            sub_1C1AE30(this, shopEntity);
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
          this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_73;
          this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
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
              this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_73;
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserItemMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4BC2585 )
              {
                sub_1C1ABD4(&NetworkManager_TypeInfo, shopEntity);
                byte_4BC2585 = 1;
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
                      *(_QWORD *)&this->fields.decideButtonImg->fields.updateAnchors,
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

  if ( (byte_4BC3EC1 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SetItemMaster___, ids);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BC3EC1 = 1;
  }
  if ( !ids )
    goto LABEL_20;
  if ( !*(_QWORD *)&ids->max_length )
    return 0;
  this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_1C1AE30(this, ids);
  this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SetItemMaster___);
  v5 = *(_QWORD *)&ids->max_length;
  if ( (int)v5 < 1 )
    return 0;
  v6 = (SetItemMaster_o *)this;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v5 )
LABEL_21:
      sub_1C1AE38(this, ids);
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
    sub_1C1AE30(this, 0LL);
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

  if ( (byte_4BC3EB6 & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, *(_QWORD *)&shopType);
    sub_1C1ABD4(&StringLiteral_8426/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/, v4);
    sub_1C1ABD4(&StringLiteral_12278/*"SHOP_MAX_ALERT"*/, v5);
    byte_4BC3EB6 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( shopType == 9 )
    v6 = (System_String_o **)&StringLiteral_8426/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/;
  else
    v6 = (System_String_o **)&StringLiteral_12278/*"SHOP_MAX_ALERT"*/;
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

  if ( (byte_4BC3EB5 & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, *(_QWORD *)&itemType);
    sub_1C1ABD4(&StringLiteral_11017/*"QP_NAME"*/, v4);
    sub_1C1ABD4(&StringLiteral_8680/*"MANA_NAME"*/, v5);
    sub_1C1ABD4(&StringLiteral_11153/*"RARE_PRI_NAME"*/, v6);
    sub_1C1ABD4(&StringLiteral_6677/*"FRIEND_POINT_NAME"*/, v7);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v8);
    byte_4BC3EB5 = 1;
  }
  if ( itemType <= 5 )
  {
    if ( itemType == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_11017/*"QP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v9, 0LL);
    }
    if ( itemType == 5 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_8680/*"MANA_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v9, 0LL);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( itemType == 13 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = &StringLiteral_6677/*"FRIEND_POINT_NAME"*/;
    return LocalizationManager__Get((System_String_o *)*v9, 0LL);
  }
  if ( itemType != 22 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = &StringLiteral_11153/*"RARE_PRI_NAME"*/;
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
  const MethodInfo *v7; // x1
  struct ShopEntity_o *shopEntity; // x8
  _DWORD *v9; // x21
  System_Int32_array *v10; // x20
  Il2CppObject *v11; // x21
  struct ShopEntity_o *v12; // x8
  struct System_Int32_array *itemIds; // x8
  int32_t v14; // w8
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v16; // x1
  int32_t ItemCount; // w22
  unsigned int v18; // w0
  unsigned __int64 v20; // x24
  struct ShopEntity_o *v21; // x8
  int32_t v22; // w23

  if ( (byte_4BC3EA6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_1C1ABD4(&int___TypeInfo, v3);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BC3EA6 = 1;
  }
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_65;
  v9 = (_DWORD *)SelfUserGame;
  switch ( shopEntity->fields.payType )
  {
    case 1:
      SelfUserGame = sub_1C1AC7C(int___TypeInfo, 1LL);
      if ( !v9 )
        goto LABEL_65;
      v10 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_65;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_66;
      v14 = v9[44];
      goto LABEL_42;
    case 2:
      SelfUserGame = sub_1C1AC7C(int___TypeInfo, 1LL);
      if ( !v9 )
        goto LABEL_65;
      v10 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_65;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_66;
      v14 = v9[24];
      goto LABEL_42;
    case 4:
      SelfUserGame = sub_1C1AC7C(int___TypeInfo, 1LL);
      if ( !v9 )
        goto LABEL_65;
      v10 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_65;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_66;
      v14 = v9[46];
      goto LABEL_42;
    case 6:
    case 0xB:
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_65;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserItemMaster___);
      SelfUserGame = ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v16);
      if ( !this->fields.shopEntity )
        goto LABEL_65;
      if ( (SelfUserGame & 1) != 0 )
      {
        SelfUserGame = (__int64)ShopEntity__GetAnotherPayItemIds(this->fields.shopEntity, 0LL);
        if ( !SelfUserGame )
          goto LABEL_65;
        ItemCount = *(_DWORD *)(SelfUserGame + 24);
      }
      else
      {
        ItemCount = ShopEntity__GetItemCount(this->fields.shopEntity, 0LL);
      }
      v10 = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, (unsigned int)ItemCount);
      if ( ItemCount >= 1 )
      {
        v20 = 0LL;
        while ( 1 )
        {
          SelfUserGame = ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v7);
          v21 = this->fields.shopEntity;
          if ( !v21 )
            break;
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
          if ( v20 >= *(unsigned int *)(SelfUserGame + 24) )
LABEL_66:
            sub_1C1AE38(SelfUserGame, v7);
          v22 = *(_DWORD *)(SelfUserGame + 4 * v20 + 32);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BC2585 )
          {
            sub_1C1ABD4(&NetworkManager_TypeInfo, v7);
            byte_4BC2585 = 1;
          }
          SelfUserGame = (__int64)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            SelfUserGame = (__int64)NetworkManager_TypeInfo;
          }
          if ( !MasterData_object )
            break;
          SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                                    (UserItemMaster_o *)MasterData_object,
                                    *(_QWORD *)(*(_QWORD *)(SelfUserGame + 184) + 64LL),
                                    v22,
                                    0LL);
          if ( !SelfUserGame || !v10 )
            break;
          if ( v20 >= v10->max_length )
            goto LABEL_66;
          v10->m_Items[++v20] = *(_DWORD *)(SelfUserGame + 28);
          if ( ItemCount == v20 )
            return v10;
        }
LABEL_65:
        sub_1C1AE30(SelfUserGame, v7);
      }
      return v10;
    case 8:
    case 9:
    case 0xC:
      v10 = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 1LL);
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_65;
      v11 = DataManager__GetMasterData_object_(
              (DataManager_o *)SelfUserGame,
              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BC2585 )
      {
        sub_1C1ABD4(&NetworkManager_TypeInfo, v7);
        byte_4BC2585 = 1;
      }
      SelfUserGame = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        SelfUserGame = (__int64)NetworkManager_TypeInfo;
      }
      v12 = this->fields.shopEntity;
      if ( !v12 )
        goto LABEL_65;
      itemIds = v12->fields.itemIds;
      if ( !itemIds )
        goto LABEL_65;
      if ( !itemIds->max_length )
        goto LABEL_66;
      if ( !v11 )
        goto LABEL_65;
      SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)v11,
                                *(_QWORD *)(*(_QWORD *)(SelfUserGame + 184) + 64LL),
                                itemIds->m_Items[1],
                                0LL);
      if ( !SelfUserGame || !v10 )
        goto LABEL_65;
      if ( !v10->max_length )
        goto LABEL_66;
      v14 = *(_DWORD *)(SelfUserGame + 28);
LABEL_42:
      v10->m_Items[1] = v14;
      return v10;
    case 0xA:
      SelfUserGame = sub_1C1AC7C(int___TypeInfo, 1LL);
      if ( !v9 )
        goto LABEL_65;
      v10 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_65;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_66;
      v14 = v9[47];
      goto LABEL_42;
    default:
      v18 = ShopEntity__GetItemCount(this->fields.shopEntity, 0LL);
      return (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, v18);
  }
}


void __fastcall ShopBuyItemConfirmMenu__Init(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *nameLabel; // x0
  UILabel_o *messageLabel; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  ShopBuyItemConfirmMenu_o *v12; // x0
  const MethodInfo *v13; // x3
  ShopBuyItemConfirmMenu_o *v14; // x0
  const MethodInfo *v15; // x3
  ShopBuyItemConfirmMenu_o *v16; // x0
  const MethodInfo *v17; // x3

  if ( (byte_4BC3E9D & 1) == 0 )
  {
    sub_1C1ABD4(&ShopBuyItemUtility_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v3);
    byte_4BC3E9D = 1;
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
        sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.shopEntity, 0LL, v6, v7, v8, v9, v10, v11),
        (nameLabel = (UILabel_o *)this->fields.infoButton) == 0LL)
    || (nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL)) == 0LL )
  {
LABEL_14:
    sub_1C1AE30(nameLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText(v12, this->fields.presentAheadLabel, (System_String_o *)StringLiteral_1/*""*/, v13);
  ShopBuyItemConfirmMenu__SetLabelActive(v14, this->fields.LineText, 0, v15);
  ShopBuyItemConfirmMenu__SetLabelActive(v16, this->fields.LineText2digit, 0, v17);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__OnClickCancel(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BC3EB7 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_ShopBuyItemConfirmMenu_OnClickCancel__, method);
    byte_4BC3EB7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ShopBuyItemConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_ShopBuyItemConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
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

  if ( (byte_4BC3EB4 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_bool__TypeInfo, method);
    sub_1C1ABD4(&System_Action_TypeInfo, v3);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ShopMaster___, v4);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v5);
    sub_1C1ABD4(&Method_ShopBuyItemConfirmMenu_EndMaxErrorDialog__, v6);
    sub_1C1ABD4(&Method_ShopBuyItemConfirmMenu_OnClickDecide__, v7);
    sub_1C1ABD4(&Method_ShopBuyItemConfirmMenu_ReturnWarning__, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1C1ABD4(&StringLiteral_9486/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, v11);
    sub_1C1ABD4(&StringLiteral_12213/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, v12);
    sub_1C1ABD4(&StringLiteral_3801/*"COMMON_CONFIRM_CANCEL"*/, v13);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v14);
    byte_4BC3EB4 = 1;
  }
  check = 0;
  if ( this->fields.state != 2 )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ShopMaster___);
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
        v17 = (_QWORD *)sub_1C1ABEC(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
      v18 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v17, v17[4]);
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
        v23 = LocalizationManager__Get((System_String_o *)StringLiteral_9486/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, 0LL);
        v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3801/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
        v25 = (System_Action_bool__o *)sub_1C1AE20(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(v25, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_ReturnWarning__, 0LL);
        if ( noTitleDialog )
        {
          NoTitleDialog__Open(noTitleDialog, v22, v23, v24, v25, 0LL);
          return;
        }
      }
LABEL_35:
      sub_1C1AE30(Instance, shopEntity);
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
      v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v30 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
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
      v34 = (_QWORD *)sub_1C1ABEC(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
    v35 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v34, v34[4]);
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
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12213/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_35;
  UILabel__set_text(warningLabel, (System_String_o *)Instance, 0LL);
  v32 = Method_ShopBuyItemConfirmMenu_OnClickDecide__;
  if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
    v32 = (_QWORD *)sub_1C1ABEC(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
  v33 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v32, v32[4]);
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
    sub_1C1AE30(this, shopEntity);
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

  if ( (byte_4BC3EC6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_ShopBuyItemConfirmMenu_OnClickReset__, method);
    byte_4BC3EC6 = 1;
  }
  v3 = Method_ShopBuyItemConfirmMenu_OnClickReset__;
  if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickReset__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C1ABEC(Method_ShopBuyItemConfirmMenu_OnClickReset__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  ActionExtensions__Call(this->fields.onReset, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct ShopEntity_o *v42; // x8
  struct CommonConsumeEntity_array *CommonConsumeEntities; // x1
  struct CommonConsumeEntity_array **p_commonConsumeEntities; // x0
  System_String_o *Name; // x23
  System_String_o *v46; // x23
  const MethodInfo *v47; // x3
  UISprite_o *decideButtonImg; // x24
  ShopBuyItemConfirmMenu_o *v49; // x0
  bool IsPreparation; // w0
  bool v51; // w26
  bool v52; // w25
  const MethodInfo *v53; // x4
  UserGameEntity_o *SelfUserGame; // x24
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x3
  ShopEntity_o *v57; // x27
  UILabel_o *textOnMask; // x28
  const MethodInfo *v59; // x3
  ShopEntity_o *v60; // x26
  UISprite_o *possessionSprite; // x27
  bool v62; // w0
  const MethodInfo *v63; // x2
  const MethodInfo *v64; // x3
  bool IsNotHavingShopItemReceived; // w0
  bool v66; // w22
  const MethodInfo *v67; // x5
  const MethodInfo *v68; // x4
  bool IsBuyable; // w20
  const MethodInfo *v70; // x2
  const MethodInfo *v71; // x3
  const MethodInfo *v72; // x1
  const MethodInfo *v73; // x4
  const MethodInfo *v74; // x3
  const MethodInfo *v75; // x5
  UISprite_o *itemMaskeSprite; // x20
  ShopBuyItemConfirmMenu_o *v77; // x0
  const MethodInfo *v78; // x3
  _BOOL8 IsShowMask; // x0
  const MethodInfo *v80; // x3
  const MethodInfo *v81; // x3
  System_Action_o *v82; // x20
  System_String_o *itemName; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4BC3E9E & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, shopEntity);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v17);
    sub_1C1ABD4(&Method_ShopBuyItemConfirmMenu_EndOpen__, v18);
    sub_1C1ABD4(&ShopBuyItemConfirmMenu_TypeInfo, v19);
    sub_1C1ABD4(&ShopBuyItemUtility_TypeInfo, v20);
    byte_4BC3E9E = 1;
  }
  message = 0LL;
  itemName = 0LL;
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.onDecide,
      (int64_t)onDecide,
      *(int64_t *)&shopKind,
      (int32_t)onDecide,
      *(System_String_o **)&buttonSpriteId,
      *(BattleSetupInfo_o **)&shopState,
      (FollowerInfo_o *)onReset,
      *(PartyListViewItem_o **)&se);
    p_shopEntity = &this->fields.shopEntity;
    this->fields.shopEntity = shopEntity;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.shopEntity,
      (int64_t)shopEntity,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    this->fields.onReset = onReset;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.onReset, (int64_t)onReset, v28, v29, v30, v31, v32, v33);
    v42 = this->fields.shopEntity;
    this->fields.shopState = shopState;
    this->fields.decideSe = se;
    if ( !v42 )
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
      CommonConsumeEntities = 0LL;
      this->fields.commonConsumeEntities = 0LL;
    }
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)p_commonConsumeEntities,
      (int64_t)CommonConsumeEntities,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
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
          v46 = (System_String_o *)gameObject;
          UICrossNarrowLabel__SetCrossNarrowText(this->fields.nameLabel, (System_String_o *)gameObject, 0LL);
          decideButtonImg = this->fields.decideButtonImg;
          v49 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
            v49 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          }
          ShopBuyItemConfirmMenu__SetSpriteName(
            v49,
            decideButtonImg,
            (System_String_o *)v49->fields.decideButtonImg->monitor,
            v47);
          gameObject = (UnityEngine_GameObject_o *)*p_shopEntity;
          if ( *p_shopEntity )
          {
            IsPreparation = ShopEntity__IsPreparation((ShopEntity_o *)gameObject, &message, &itemName, 0LL);
            v51 = IsPreparation;
            v52 = IsPreparation;
            ShopBuyItemConfirmMenu__SetMessageLabel(this, this->fields.shopEntity, IsPreparation, message, v53);
            SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
            ShopBuyItemConfirmMenu__SetBandSprite(this, this->fields.shopEntity, v55);
            ShopBuyItemConfirmMenu__SetTextOnMask(this, this->fields.shopEntity, v51, v56);
            v57 = this->fields.shopEntity;
            textOnMask = this->fields.textOnMask;
            if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
            ShopBuyItemUtility__SetAddTextOnMask(v57, textOnMask, 0LL);
            ShopBuyItemConfirmMenu__SetNumText(this, this->fields.shopEntity, v51, v59);
            v60 = this->fields.shopEntity;
            if ( v60 )
            {
              possessionSprite = this->fields.possessionSprite;
              v62 = ShopEntity__checkFlag(this->fields.shopEntity, 0x4000, 0LL);
              ShopBuyItemUtility__SetShopHaveStatusIcon(v60, possessionSprite, v62, 0LL);
              ShopBuyItemConfirmMenu__SetPossessionInfo(this, shopEntity, v63);
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
                  v66 = IsNotHavingShopItemReceived;
                  ShopBuyItemConfirmMenu__SetExtensionText(
                    this,
                    this->fields.shopEntity,
                    IsNotHavingShopItemReceived,
                    v64);
                  ShopBuyItemConfirmMenu__SetPriceInfo(this, this->fields.shopEntity, v52, buttonSpriteId, v66, v67);
                  IsBuyable = ShopBuyItemConfirmMenu__GetIsBuyable(
                                this,
                                this->fields.shopEntity,
                                v52,
                                SelfUserGame,
                                v68);
                  ShopBuyItemConfirmMenu__SetDefaultButton(this, IsBuyable, v70);
                  ShopBuyItemConfirmMenu__SetAheadText(this, this->fields.shopEntity, IsBuyable, v71);
                  ShopBuyItemConfirmMenu__SetWindowSize(this, v72);
                  ShopBuyItemConfirmMenu__SetWarningLabel(this, this->fields.shopEntity, v52, SelfUserGame, v73);
                  ShopBuyItemConfirmMenu__SetItemIcon(this, this->fields.shopEntity, v52, v74);
                  ShopBuyItemConfirmMenu__SetNameText(this, this->fields.shopEntity, v52, v46, itemName, v75);
                  itemMaskeSprite = this->fields.itemMaskeSprite;
                  IsShowMask = ShopBuyItemConfirmMenu__GetIsShowMask(v77, this->fields.shopEntity, v52, v78);
                  ShopBuyItemConfirmMenu__SetSpriteActive(
                    (ShopBuyItemConfirmMenu_o *)IsShowMask,
                    itemMaskeSprite,
                    IsShowMask,
                    v80);
                  ShopBuyItemConfirmMenu__SetInfoButton(this, this->fields.shopEntity, v52, v81);
                  this->fields.state = 1;
                  v82 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
                  System_Action___ctor(v82, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndOpen__, 0LL);
                  BaseDialog__Open((BaseDialog_o *)this, v82, 0, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_1C1AE30(gameObject, v35);
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
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_String_o *itemName; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4BC3EC2 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_bool__TypeInfo, item);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v9);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v10);
    sub_1C1ABD4(&Method_ShopBuyItemConfirmMenu_ReturnWarningRarePri__, v11);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1C1ABD4(&StringLiteral_3801/*"COMMON_CONFIRM_CANCEL"*/, v13);
    sub_1C1ABD4(&StringLiteral_19944/*"freeShopCondId"*/, v14);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C1ABD4(&StringLiteral_11319/*"RETURN_RARE_PRI_SHOP_DECIDE_BUTTON"*/, v15);
    byte_4BC3EC2 = 1;
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
                  (Il2CppObject *)StringLiteral_19944/*"freeShopCondId"*/,
                  (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          warningMessage = Shop_k__BackingField->fields.warningMessage;
          v21 = (CommonUI_o *)Instance;
          Name = (Il2CppObject *)ShopEntity__getName(Shop_k__BackingField, 0LL);
          v23 = System_String__Format(warningMessage, Name, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11319/*"RETURN_RARE_PRI_SHOP_DECIDE_BUTTON"*/, 0LL);
          v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3801/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
          v26 = (System_Action_bool__o *)sub_1C1AE20(System_Action_bool__TypeInfo);
          System_Action_bool____ctor(v26, (Il2CppObject *)v8, Method_ShopBuyItemConfirmMenu_ReturnWarningRarePri__, 0LL);
          if ( v21 )
          {
            CommonUI__OpenNoTitleDialog(v21, v23, v24, v25, v26, 0LL);
            v8->fields.onChecked = onChecked;
            sub_1C1AB78(
              (PartyOrganizationUtility_o *)&v8->fields.onChecked,
              (int64_t)onChecked,
              v27,
              v28,
              v29,
              v30,
              v31,
              v32);
            v8->fields.onCloseReturnWarning = onCloseReturnWarning;
            sub_1C1AB78(
              (PartyOrganizationUtility_o *)&v8->fields.onCloseReturnWarning,
              (int64_t)onCloseReturnWarning,
              v33,
              v34,
              v35,
              v36,
              v37,
              v38);
            return;
          }
        }
      }
    }
    sub_1C1AE30(this, item);
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

  if ( (byte_4BC3EBD & 1) == 0 )
  {
    sub_1C1ABD4(&Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__, *(_QWORD *)&seKind);
    byte_4BC3EBD = 1;
  }
  if ( (seKind & 0x80000000) == 0 )
  {
    v4 = Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__;
    if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C1ABEC(Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v4, v4[4]);
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
    sub_1C1AE30(0LL, isDecide);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *Instance; // x19
  System_Action_o *v18; // x20

  if ( (byte_4BC3EB8 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, isDecide);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C1ABD4(&Method_ShopBuyItemConfirmMenu___c__DisplayClass115_0__ReturnWarningRarePri_b__0__, v6);
    sub_1C1ABD4(&ShopBuyItemConfirmMenu___c__DisplayClass115_0_TypeInfo, v7);
    byte_4BC3EB8 = 1;
  }
  v8 = sub_1C1AE20(ShopBuyItemConfirmMenu___c__DisplayClass115_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = this,
        sub_1C1AB78((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)this, v11, v12, v13, v14, v15, v16),
        *(_BYTE *)(v8 + 24) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v8,
          Method_ShopBuyItemConfirmMenu___c__DisplayClass115_0__ReturnWarningRarePri_b__0__,
          0LL),
        !Instance) )
  {
    sub_1C1AE30(v9, v10);
  }
  CommonUI__CloseNoTitleDialog((CommonUI_o *)Instance, v18, 0LL);
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
  if ( (byte_4BC3EAA & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity);
    sub_1C1ABD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v8);
    sub_1C1ABD4(&ShopBuyItemConfirmMenu_TypeInfo, v9);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1C1ABD4(&StringLiteral_10681/*"PURCHASE_AFTER_COSTUME"*/, v11);
    sub_1C1ABD4(&StringLiteral_10686/*"PURCHASE_AFTER_USER_ITEM"*/, v12);
    sub_1C1ABD4(&StringLiteral_10683/*"PURCHASE_AFTER_ITEM_SET"*/, v13);
    sub_1C1ABD4(&StringLiteral_8425/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/, v14);
    sub_1C1ABD4(&StringLiteral_10684/*"PURCHASE_AFTER_PRESENT_BOX"*/, v15);
    sub_1C1ABD4(&StringLiteral_10682/*"PURCHASE_AFTER_EVENT_SVT_GET"*/, v16);
    sub_1C1ABD4(&StringLiteral_10688/*"PURCHASE_AFTER_USER_SVT_COIN_PERIOD"*/, v17);
    sub_1C1ABD4(&StringLiteral_10685/*"PURCHASE_AFTER_QP"*/, v18);
    sub_1C1ABD4(&StringLiteral_10687/*"PURCHASE_AFTER_USER_SVT_COIN"*/, v19);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C1ABD4(&StringLiteral_1/*""*/, v20);
    byte_4BC3EAA = 1;
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_49;
          MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ItemMaster___);
          Instance = (DataManager_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
          if ( !MasterData_object )
            goto LABEL_49;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        &entity,
                                        (int32_t)Instance,
                                        (const MethodInfo_32486C4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
                v25 = &StringLiteral_10688/*"PURCHASE_AFTER_USER_SVT_COIN_PERIOD"*/;
              else
                v25 = &StringLiteral_10687/*"PURCHASE_AFTER_USER_SVT_COIN"*/;
            }
            else
            {
              presentAheadLabel = v6->fields.presentAheadLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v25 = &StringLiteral_10686/*"PURCHASE_AFTER_USER_ITEM"*/;
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
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10685/*"PURCHASE_AFTER_QP"*/, 0LL);
            if ( v32 )
            {
              v26 = (System_String_o *)Instance;
              v27 = v32;
              goto LABEL_13;
            }
LABEL_49:
            sub_1C1AE30(Instance, v22);
          }
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8425/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/, 0LL);
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
            *(System_String_o **)&v35->fields.decideButtonImg->fields.m_CachedPtr,
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
          v25 = &StringLiteral_10683/*"PURCHASE_AFTER_ITEM_SET"*/;
          goto LABEL_11;
        case 8:
          presentAheadLabel = v6->fields.presentAheadLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v25 = &StringLiteral_10682/*"PURCHASE_AFTER_EVENT_SVT_GET"*/;
          goto LABEL_11;
        default:
          if ( purchaseType != 14 )
            return;
          presentAheadLabel = v6->fields.presentAheadLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v25 = &StringLiteral_10681/*"PURCHASE_AFTER_COSTUME"*/;
          goto LABEL_11;
      }
    }
    else if ( (unsigned int)purchaseType <= 0x15 && ((1 << purchaseType) & 0x290000) != 0 )
    {
LABEL_8:
      presentAheadLabel = v6->fields.presentAheadLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = &StringLiteral_10684/*"PURCHASE_AFTER_PRESENT_BOX"*/;
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
  if ( (byte_4BC3EAB & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_20940/*"img_txt_shop"*/, shopEntity);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C1ABD4(&StringLiteral_20925/*"img_txt_quest"*/, v6);
    byte_4BC3EAB = 1;
  }
  if ( !shopEntity )
    sub_1C1AE30(this, shopEntity);
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
      v10 = &StringLiteral_20925/*"img_txt_quest"*/;
      goto LABEL_9;
    case 7:
    case 9:
LABEL_6:
      ShopBuyItemConfirmMenu__SetSpriteActive(this, v5->fields.bandSprite, 1, v3);
      bandSprite = v5->fields.bandSprite;
      v10 = &StringLiteral_20940/*"img_txt_shop"*/;
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

  if ( (byte_4BC3EB1 & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu_o *)sub_1C1ABD4(&AtlasManager_TypeInfo, itemIcon);
    byte_4BC3EB1 = 1;
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
      sub_1C1AE30(this, itemIcon);
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

  if ( (byte_4BC3EB0 & 1) == 0 )
  {
    sub_1C1ABD4(&int_TypeInfo, priceDataLabel);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v11);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v12);
    sub_1C1ABD4(&ShopBuyItemConfirmMenu_TypeInfo, v13);
    sub_1C1ABD4(&StringLiteral_5749/*"EVENT_ITEM_NEED_INFO"*/, v14);
    byte_4BC3EB0 = 1;
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
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5749/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
        num = commonConsumeEnt->fields.num;
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v17, v18, v19);
        Name = (Il2CppObject *)CommonConsumeEntity__GetName(commonConsumeEnt, 0LL);
        shopEntity = System_String__Format_63054740(v16, v20, Name, 0LL);
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
          sub_1C1AE30(shopEntity, v23);
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
  if ( (byte_4BC3EB2 & 1) == 0 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, shopEntity);
    sub_1C1ABD4(&EventRewardRootComponent_TypeInfo, v8);
    sub_1C1ABD4(&ShopBuyItemConfirmMenu_TypeInfo, v9);
    sub_1C1ABD4(&StringLiteral_16388/*"_"*/, v10);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C1ABD4(&StringLiteral_17910/*"btn_txt_trade"*/, v11);
    byte_4BC3EB2 = 1;
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
    v17 = System_String__Concat_63053632(VALENTINE_BTN_NAME, v15, (System_String_o *)StringLiteral_16388/*"_"*/, v16, 0LL);
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
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17910/*"btn_txt_trade"*/, 0LL);
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
      sub_1C1AE30(this, shopEntity);
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

  if ( (byte_4BC3EC4 & 1) == 0 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, isCan);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ItemMaster___, v5);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ShopResetMaster___, v6);
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserItemMaster___, v7);
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserShopMaster___, v8);
    sub_1C1ABD4(&DataManager_TypeInfo, v9);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v10);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v11);
    sub_1C1ABD4(&StringLiteral_17904/*"btn_txt_stock_reset"*/, v12);
    byte_4BC3EC4 = 1;
  }
  entity = 0LL;
  shopResetButton = (UnityEngine_Object_o *)this->fields.shopResetButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shopResetButton, 0LL, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ShopEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ItemMaster___);
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
    Master_object = (ShopEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ShopResetMaster___);
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
      v18 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserShopMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BC2585 )
      {
        sub_1C1ABD4(&NetworkManager_TypeInfo, v14);
        byte_4BC2585 = 1;
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
        v21 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BC2585 )
        {
          sub_1C1ABD4(&NetworkManager_TypeInfo, v14);
          byte_4BC2585 = 1;
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
    AtlasManager__SetDownloadCommonSprite(shopResetButtonSprite, (System_String_o *)StringLiteral_17904/*"btn_txt_stock_reset"*/, 0LL);
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
    sub_1C1AE30(Master_object, v14);
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
  if ( (byte_4BC3EAE & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, shopEntity);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C1ABD4(&StringLiteral_9468/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/, v7);
    byte_4BC3EAE = 1;
  }
  if ( !shopEntity )
    sub_1C1AE30(this, shopEntity);
  if ( shopEntity->fields.payType != 6 )
    goto LABEL_10;
  this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetItemCount(shopEntity, 0LL);
  v8 = (int)this < 2 && isNotHavingShopItemReceived;
  if ( (int)this <= 1 && isNotHavingShopItemReceived )
  {
    extensionInfoLabel = v6->fields.extensionInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9468/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/, 0LL);
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
  if ( (byte_4BC3EA3 & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu_o *)sub_1C1ABD4(&StringLiteral_9434/*"NONE"*/, shopEntity);
    byte_4BC3EA3 = 1;
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
    sub_1C1AE30(this, shopEntity);
  }
  if ( purchaseType == 1 || purchaseType == 4 )
    goto LABEL_18;
LABEL_16:
  if ( !System_String__IsNullOrEmpty(shopEntity->fields.infoMessage, 0LL)
    && System_String__op_Inequality(shopEntity->fields.infoMessage, (System_String_o *)StringLiteral_9434/*"NONE"*/, 0LL) )
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.state = 2;
  this->fields.onDecide = onDecide;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.onDecide,
    (int64_t)onDecide,
    (int64_t)method,
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
  __int64 v12; // x1
  ItemIconComponent_o *itemIcon; // x21
  int32_t purchaseType; // w22
  Il2CppObject *MasterData_object; // x21
  UnityEngine_Object_o *v16; // x20
  UnityEngine_GameObject_o *v17; // x19
  ServantEntity_o *v18; // [xsp+0h] [xbp-40h] BYREF
  int32_t imageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BC3EA4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, shopEntity);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v7);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BC3EA4 = 1;
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
      sub_1C1AE30(gameObject, v12);
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
    gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_32;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
    gameObject = (UnityEngine_Component_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
    if ( !MasterData_object )
      goto LABEL_32;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
           (Il2CppObject **)&v18,
           (int32_t)gameObject,
           (const MethodInfo_32486C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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

  if ( (byte_4BC3E9F & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, label);
    byte_4BC3E9F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_1C1AE30(gameObject, v7);
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

  if ( (byte_4BC3EA0 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, label);
    byte_4BC3EA0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1C1AE30(v6, v7);
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
  if ( (byte_4BC3EA8 & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, shopEntity);
    sub_1C1ABD4(&StringLiteral_16111/*"[000000]"*/, v9);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C1ABD4(&StringLiteral_16112/*"[000000]？"*/, v10);
    byte_4BC3EA8 = 1;
  }
  v19 = 0LL;
  if ( !shopEntity )
    sub_1C1AE30(this, shopEntity);
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
      v18 = (System_String_o *)StringLiteral_16111/*"[000000]"*/;
      goto LABEL_16;
    }
    messageLabel = v8->fields.messageLabel;
    v16 = message;
LABEL_15:
    v18 = (System_String_o *)StringLiteral_16111/*"[000000]"*/;
LABEL_16:
    v11 = System_String__Concat_63040368(v18, v16, 0LL);
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
  v15 = (System_String_o *)StringLiteral_16112/*"[000000]？"*/;
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

  if ( (byte_4BC3EA5 & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, shopEntity);
    sub_1C1ABD4(&StringLiteral_25894/*"？"*/, v11);
    byte_4BC3EA5 = 1;
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
    sub_1C1AE30(IsNullOrEmpty, v13);
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
  v14 = (System_String_o *)StringLiteral_25894/*"？"*/;
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
  if ( (byte_4BC3EAD & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, shopEntity);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C1ABD4(&StringLiteral_12223/*"SHOP_BUY_ITEM_HOLD"*/, v7);
    byte_4BC3EAD = 1;
  }
  if ( !isInPreparation )
  {
    if ( shopEntity )
      goto LABEL_8;
LABEL_13:
    sub_1C1AE30(this, shopEntity);
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
  v11 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12223/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
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

  if ( (byte_4BC3EC5 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_ServantMaster___, shopEntity);
    sub_1C1ABD4(&DataManager_TypeInfo, v5);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v7);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1C1ABD4(&ShopBuyItemUtility_TypeInfo, v9);
    byte_4BC3EC5 = 1;
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
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ServantMaster___);
                  TargetId = (Il2CppObject *)ShopEntity__get_TargetId(shopEntity, 0LL);
                  if ( !Master_object )
                    goto LABEL_42;
                  if ( DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                         &entity,
                         (int32_t)TargetId,
                         (const MethodInfo_32486C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
                        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v33, 0LL);
                        goto LABEL_38;
                      }
LABEL_42:
                      sub_1C1AE30(TargetId, v18);
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
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  struct UIIconLabel_array *v42; // x8
  UIIconLabel_o *v43; // x25
  int32_t v44; // w26
  struct UILabel_o *priceDataLabel; // x22
  __int64 *v46; // x8
  System_String_o *v47; // x0
  System_String_o *v48; // x1
  UILabel_o *v49; // x0
  struct System_Int32_array *v50; // x8
  Il2CppObject *v51; // x0
  UILabel_o *v52; // x23
  Il2CppObject *v53; // x22
  __int64 *v54; // x8
  struct System_Int32_array *v55; // x8
  Il2CppObject *v56; // x0
  UIIconLabel_o *v57; // x23
  int32_t v58; // w24
  UILabel_o *v59; // x23
  UIIconLabel_o *v60; // x23
  int32_t v61; // w24
  int32_t Price; // w21
  double v63; // d0
  int v64; // w21
  struct System_Int32_array *v65; // x8
  UIIconLabel_o *v66; // x19
  int32_t v67; // w22
  UILabel_o *priceFreeDataLabel; // x19
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  __int64 v70; // x9
  _BOOL8 IsSetStrikethrough; // x0
  const MethodInfo *v72; // x3
  __int64 v73; // x8
  __int64 v74; // x8
  __int64 v75; // x9
  __int64 v76; // x10
  __int64 j; // x20
  struct UILabel_array *v78; // x11
  unsigned __int64 max_length; // x12
  unsigned __int64 v80; // x10
  struct UIIconLabel_array *v81; // x11
  unsigned __int64 v82; // x12
  UIIconLabel_o *v83; // x2
  struct ItemIconComponent_array *v84; // x11
  unsigned __int64 v85; // x12
  ItemIconComponent_o *v86; // x3
  __int64 v87; // x10
  int32_t v88; // w23
  Il2CppObject *Entity; // x23
  UILabel_o *v90; // x22
  System_String_o *v91; // x24
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  UILabel_o *v95; // x22
  UIIconLabel_o *priceIconLabel; // x22
  int32_t PriceIcon; // w24
  int32_t v98; // [xsp+8h] [xbp-68h] BYREF
  int32_t Prices; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4

  v7 = shopEntity;
  if ( (byte_4BC3EAF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity);
    sub_1C1ABD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_1C1ABD4(&int_TypeInfo, v10);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v11);
    sub_1C1ABD4(&System_Math_TypeInfo, v12);
    sub_1C1ABD4(&ShopBuyItemConfirmMenu_TypeInfo, v13);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1C1ABD4(&StringLiteral_12498/*"STONE_FRAGMENTS_NEED_INFO"*/, v15);
    sub_1C1ABD4(&StringLiteral_2080/*"ANONYMOUS_NEED_INFO"*/, v16);
    sub_1C1ABD4(&StringLiteral_12504/*"STONE_NEED_INFO"*/, v17);
    sub_1C1ABD4(&StringLiteral_11017/*"QP_NAME"*/, v18);
    sub_1C1ABD4(&StringLiteral_11154/*"RARE_PRI_NEED_INFO"*/, v19);
    sub_1C1ABD4(&StringLiteral_1879/*"?"*/, v20);
    sub_1C1ABD4(&StringLiteral_5749/*"EVENT_ITEM_NEED_INFO"*/, v21);
    sub_1C1ABD4(&StringLiteral_8681/*"MANA_NEED_INFO"*/, v22);
    sub_1C1ABD4(&StringLiteral_12252/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, v23);
    byte_4BC3EAF = 1;
  }
  eventItemIcon = (__int64)this->fields.eventItemIcon;
  if ( !eventItemIcon )
    goto LABEL_180;
  ItemIconComponent__Clear((ItemIconComponent_o *)eventItemIcon, 0LL);
  eventItemIcon = (__int64)ShopBuyItemConfirmMenu__GetUserItemCounts(this, v25);
  if ( !v7 )
    goto LABEL_180;
  v27 = eventItemIcon;
  switch ( v7->fields.payType )
  {
    case 1:
      priceDataLabel = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v46 = &StringLiteral_12504/*"STONE_NEED_INFO"*/;
      goto LABEL_51;
    case 2:
      priceDataLabel = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v46 = &StringLiteral_11017/*"QP_NAME"*/;
LABEL_51:
      v47 = (System_String_o *)*v46;
      goto LABEL_55;
    case 4:
      priceDataLabel = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v47 = (System_String_o *)StringLiteral_8681/*"MANA_NEED_INFO"*/;
LABEL_55:
      eventItemIcon = (__int64)LocalizationManager__Get(v47, 0LL);
      if ( !priceDataLabel )
        goto LABEL_180;
      v48 = (System_String_o *)eventItemIcon;
      v49 = priceDataLabel;
      goto LABEL_97;
    case 6:
    case 0xB:
      if ( ShopEntity__GetItemCount(v7, 0LL) < 2 )
      {
        if ( isNotHavingShopItemReceived )
          return;
        if ( ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v28) )
        {
          eventItemIcon = (__int64)ShopEntity__GetAnotherPayItemIds(v7, 0LL);
          if ( !eventItemIcon )
            goto LABEL_180;
        }
        else
        {
          eventItemIcon = (__int64)v7->fields.itemIds;
          if ( !eventItemIcon )
            goto LABEL_180;
        }
        if ( *(_DWORD *)(eventItemIcon + 24) )
        {
          v88 = *(_DWORD *)(eventItemIcon + 32);
          eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !eventItemIcon )
            goto LABEL_180;
          eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)eventItemIcon,
                                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !eventItemIcon )
            goto LABEL_180;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
                     v88,
                     (const MethodInfo_3248678 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( isInPreparation )
          {
            if ( ShopEntity__checkFlag(v7, 64, 0LL) )
            {
              eventItemIcon = (__int64)this->fields.priceDataLabel;
              if ( eventItemIcon )
              {
                UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1879/*"?"*/, 0LL);
                eventItemIcon = (__int64)this->fields.priceIconLabel;
                if ( eventItemIcon )
                {
                  UIIconLabel__SetEventQuestion((UIIconLabel_o *)eventItemIcon, 0LL);
                  return;
                }
              }
              goto LABEL_180;
            }
            if ( ShopEntity__checkFlag(v7, 32, 0LL) )
            {
              eventItemIcon = (__int64)this->fields.priceDataLabel;
              if ( eventItemIcon )
              {
                UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1879/*"?"*/, 0LL);
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
          v90 = this->fields.priceDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v91 = LocalizationManager__Get((System_String_o *)StringLiteral_5749/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
          Prices = ShopEntity__GetPrices(v7, 0, 0LL);
          eventItemIcon = j_il2cpp_value_box_0(int_TypeInfo, &Prices, v92, v93, v94);
          if ( !Entity )
            goto LABEL_180;
          eventItemIcon = (__int64)System_String__Format_63054740(
                                     v91,
                                     (Il2CppObject *)eventItemIcon,
                                     (Il2CppObject *)Entity[1].monitor,
                                     0LL);
          if ( !v90 )
            goto LABEL_180;
          UILabel__set_text(v90, (System_String_o *)eventItemIcon, 0LL);
          v95 = this->fields.priceDataLabel;
          eventItemIcon = (__int64)ShopBuyItemConfirmMenu_TypeInfo;
          if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
          if ( !v95 )
            goto LABEL_180;
          UILabel__SetCondensedScale(
            v95,
            ShopBuyItemConfirmMenu_TypeInfo->static_fields->PRICE_DATA_LABEL_MAX_WIDTH,
            0,
            0LL);
          priceIconLabel = this->fields.priceIconLabel;
          PriceIcon = ShopEntity__GetPriceIcon(v7, 0LL);
          eventItemIcon = ShopEntity__GetPrices(v7, 0, 0LL);
          if ( !v27 )
            goto LABEL_180;
          if ( *(_DWORD *)(v27 + 24) )
          {
            if ( priceIconLabel )
            {
              UIIconLabel__SetPurchaseDecision(priceIconLabel, PriceIcon, eventItemIcon, *(_DWORD *)(v27 + 32), 0LL);
              eventItemIcon = (__int64)this->fields.eventItemIcon;
              if ( eventItemIcon )
              {
                ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, (int32_t)Entity[2].monitor, -1, 1, 0LL);
                return;
              }
            }
LABEL_180:
            sub_1C1AE30(eventItemIcon, shopEntity);
          }
        }
LABEL_181:
        sub_1C1AE38(eventItemIcon, shopEntity);
      }
      if ( ShopEntity__GetItemCount(v7, 0LL) >= 1 )
      {
        for ( i = 0LL; (__int64)i < ShopEntity__GetItemCount(v7, 0LL); ++i )
        {
          eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !eventItemIcon )
            goto LABEL_180;
          eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)eventItemIcon,
                                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ItemMaster___);
          itemIds = v7->fields.itemIds;
          if ( !itemIds )
            goto LABEL_180;
          if ( i >= itemIds->max_length )
            goto LABEL_181;
          if ( !eventItemIcon )
            goto LABEL_180;
          eventItemIcon = (__int64)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
                                     itemIds->m_Items[i + 1],
                                     (const MethodInfo_3248678 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          v31 = eventItemIcon;
          if ( !isInPreparation )
            goto LABEL_30;
          eventItemIcon = ShopEntity__checkFlag(v7, 64, 0LL);
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
            UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1879/*"?"*/, 0LL);
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
          eventItemIcon = ShopEntity__checkFlag(v7, 32, 0LL);
          if ( (eventItemIcon & 1) != 0 )
          {
            v34 = this->fields.priceDataLabels;
            if ( !v34 )
              goto LABEL_180;
            if ( i >= v34->max_length )
              goto LABEL_181;
            eventItemIcon = (__int64)v34->m_Items[i];
            if ( !eventItemIcon )
              goto LABEL_180;
            UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1879/*"?"*/, 0LL);
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
            v36 = this->fields.priceDataLabels;
            if ( !v36 )
              goto LABEL_180;
            if ( i >= v36->max_length )
              goto LABEL_181;
            v37 = v36->m_Items[i];
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v38 = LocalizationManager__Get((System_String_o *)StringLiteral_5749/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
            v98 = ShopEntity__GetPrices(v7, i, 0LL);
            eventItemIcon = j_il2cpp_value_box_0(int_TypeInfo, &v98, v39, v40, v41);
            if ( !v31 )
              goto LABEL_180;
            eventItemIcon = (__int64)System_String__Format_63054740(
                                       v38,
                                       (Il2CppObject *)eventItemIcon,
                                       *(Il2CppObject **)(v31 + 24),
                                       0LL);
            if ( !v37 )
              goto LABEL_180;
            UILabel__set_text(v37, (System_String_o *)eventItemIcon, 0LL);
            v42 = this->fields.priceIconLabels;
            if ( !v42 )
              goto LABEL_180;
            if ( i >= v42->max_length )
              goto LABEL_181;
            v43 = v42->m_Items[i];
            v44 = ShopEntity__GetPriceIcon(v7, 0LL);
            eventItemIcon = ShopEntity__GetPrices(v7, i, 0LL);
            if ( !v27 )
              goto LABEL_180;
            if ( i >= *(unsigned int *)(v27 + 24) )
              goto LABEL_181;
            if ( !v43 )
              goto LABEL_180;
            UIIconLabel__SetPurchaseDecision(v43, v44, eventItemIcon, *(_DWORD *)(v27 + 32 + 4 * i), 0LL);
            eventItemIcon = (__int64)this->fields.eventItemIcon;
            if ( !eventItemIcon )
              goto LABEL_180;
            ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, *(_DWORD *)(v31 + 40), -1, 1, 0LL);
          }
        }
      }
      return;
    case 8:
      eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_180;
      eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ItemMaster___);
      v50 = v7->fields.itemIds;
      if ( !v50 )
        goto LABEL_180;
      if ( !v50->max_length )
        goto LABEL_181;
      if ( !eventItemIcon )
        goto LABEL_180;
      v51 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
              v50->m_Items[1],
              (const MethodInfo_3248678 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v52 = this->fields.priceDataLabel;
      v53 = v51;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v54 = &StringLiteral_12498/*"STONE_FRAGMENTS_NEED_INFO"*/;
      goto LABEL_71;
    case 9:
      eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_180;
      eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ItemMaster___);
      v55 = v7->fields.itemIds;
      if ( !v55 )
        goto LABEL_180;
      if ( !v55->max_length )
        goto LABEL_181;
      if ( !eventItemIcon )
        goto LABEL_180;
      v56 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
              v55->m_Items[1],
              (const MethodInfo_3248678 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v52 = this->fields.priceDataLabel;
      v53 = v56;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v54 = &StringLiteral_2080/*"ANONYMOUS_NEED_INFO"*/;
LABEL_71:
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)*v54, 0LL);
      if ( !v52 )
        goto LABEL_180;
      UILabel__set_text(v52, (System_String_o *)eventItemIcon, 0LL);
      v57 = this->fields.priceIconLabel;
      v58 = ShopEntity__GetPriceIcon(v7, 0LL);
      eventItemIcon = ShopEntity__GetPrice(v7, 0LL);
      if ( !v27 )
        goto LABEL_180;
      if ( !*(_DWORD *)(v27 + 24) )
        goto LABEL_181;
      if ( !v57 )
        goto LABEL_180;
      UIIconLabel__SetPurchaseDecision(v57, v58, eventItemIcon, *(_DWORD *)(v27 + 32), 0LL);
      if ( !v53 )
        goto LABEL_180;
      eventItemIcon = (__int64)this->fields.eventItemIcon;
      if ( !eventItemIcon )
        goto LABEL_180;
      ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, (int32_t)v53[2].monitor, -1, 1, 0LL);
      return;
    case 0xA:
      v59 = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11154/*"RARE_PRI_NEED_INFO"*/, 0LL);
      if ( !v59 )
        goto LABEL_180;
      UILabel__set_text(v59, (System_String_o *)eventItemIcon, 0LL);
      v60 = this->fields.priceIconLabel;
      v61 = ShopEntity__GetPriceIcon(v7, 0LL);
      eventItemIcon = ShopEntity__GetPrice(v7, 0LL);
      if ( !v27 )
        goto LABEL_180;
      if ( !*(_DWORD *)(v27 + 24) )
        goto LABEL_181;
      if ( !v60 )
        goto LABEL_180;
      UIIconLabel__SetPurchaseDecision(v60, v61, eventItemIcon, *(_DWORD *)(v27 + 32), 0LL);
      if ( ShopEntity__GetPrice(v7, 0LL) )
      {
        Price = ShopEntity__GetPrice(v7, 0LL);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v63 = log10((double)Price);
        if ( v63 == INFINITY )
          v64 = -2147483647;
        else
          v64 = (int)v63 + 1;
      }
      else
      {
        v64 = 1;
      }
      IsSetStrikethrough = ShopEntity__IsSetStrikethrough(v7, isInPreparation, 0LL);
      if ( IsSetStrikethrough )
      {
        v73 = 384LL;
        if ( v64 == 1 )
          v73 = 376LL;
        ShopBuyItemConfirmMenu__SetLabelActive(
          (ShopBuyItemConfirmMenu_o *)IsSetStrikethrough,
          *(UILabel_o **)((char *)&this->klass + v73),
          1,
          v72);
      }
      if ( !ShopEntity__IsAfterTheFreeShopReleaseDate(v7, 0LL) || !ShopEntity__IsFulFilledFreeExchangeCondition(v7, 0LL) )
        return;
      eventItemIcon = (__int64)this->fields.freeLabel;
      if ( !eventItemIcon )
        goto LABEL_180;
      eventItemIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventItemIcon, 0LL);
      if ( !eventItemIcon )
        goto LABEL_180;
      eventItemIcon = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)eventItemIcon, 0LL);
      if ( !eventItemIcon )
        goto LABEL_180;
      v74 = 492LL;
      if ( v64 == 1 )
        v74 = 480LL;
      v75 = v64 == 1 ? 476LL : 488LL;
      v76 = v64 == 1 ? 472LL : 484LL;
      v100.fields.z = *(float *)((char *)&this->klass + v74);
      v100.fields.y = *(float *)((char *)&this->klass + v75);
      v100.fields.x = *(float *)((char *)&this->klass + v76);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventItemIcon, v100, 0LL);
      eventItemIcon = (__int64)this->fields.freeLabel;
      if ( !eventItemIcon )
        goto LABEL_180;
      eventItemIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventItemIcon, 0LL);
      if ( !eventItemIcon )
        goto LABEL_180;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventItemIcon, 1, 0LL);
      return;
    case 0xC:
      eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_180;
      eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ItemMaster___);
      v65 = v7->fields.itemIds;
      if ( !v65 )
        goto LABEL_180;
      if ( !v65->max_length )
        goto LABEL_181;
      if ( !eventItemIcon )
        goto LABEL_180;
      eventItemIcon = (__int64)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
                                 v65->m_Items[1],
                                 (const MethodInfo_3248678 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !eventItemIcon || !this->fields.priceDataLabel )
        goto LABEL_180;
      v48 = *(System_String_o **)(eventItemIcon + 24);
      v49 = this->fields.priceDataLabel;
LABEL_97:
      UILabel__set_text(v49, v48, 0LL);
      v66 = this->fields.priceIconLabel;
      v67 = ShopEntity__GetPriceIcon(v7, 0LL);
      eventItemIcon = ShopEntity__GetPrice(v7, 0LL);
      if ( !v27 )
        goto LABEL_180;
      if ( !*(_DWORD *)(v27 + 24) )
        goto LABEL_181;
      if ( !v66 )
        goto LABEL_180;
      UIIconLabel__SetPurchaseDecision(v66, v67, eventItemIcon, *(_DWORD *)(v27 + 32), 0LL);
      return;
    case 0xD:
      priceFreeDataLabel = this->fields.priceFreeDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12252/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, 0LL);
      if ( !priceFreeDataLabel )
        goto LABEL_180;
      UILabel__set_text(priceFreeDataLabel, (System_String_o *)eventItemIcon, 0LL);
      return;
    case 0xE:
      commonConsumeEntities = this->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        return;
      v70 = *(_QWORD *)&commonConsumeEntities->max_length;
      if ( (_DWORD)v70 == 1 )
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
      if ( (int)v70 < 2 )
        return;
      for ( j = 4LL; ; ++j )
      {
        v78 = this->fields.priceDataLabels;
        if ( !v78 )
          break;
        max_length = v78->max_length;
        v80 = j - 4;
        if ( j - 4 >= (int)max_length )
        {
          shopEntity = 0LL;
        }
        else
        {
          if ( v80 >= max_length )
            goto LABEL_181;
          shopEntity = (ShopEntity_o *)*((_QWORD *)&v78->obj.klass + j);
        }
        v81 = this->fields.priceIconLabels;
        if ( !v81 )
          break;
        v82 = v81->max_length;
        if ( (__int64)v80 >= (int)v82 )
        {
          v83 = 0LL;
        }
        else
        {
          if ( v80 >= v82 )
            goto LABEL_181;
          v83 = (UIIconLabel_o *)*((_QWORD *)&v81->obj.klass + j);
        }
        v84 = this->fields.eventItemIcons;
        if ( !v84 )
          break;
        v85 = v84->max_length;
        if ( (__int64)v80 >= (int)v85 )
        {
          v86 = 0LL;
        }
        else
        {
          if ( v80 >= v85 )
            goto LABEL_181;
          v86 = (ItemIconComponent_o *)*((_QWORD *)&v84->obj.klass + j);
        }
        if ( v80 >= (unsigned int)v70 )
          goto LABEL_181;
        ShopBuyItemConfirmMenu__SetCommonConsumePriceText(
          this,
          (UILabel_o *)shopEntity,
          v83,
          v86,
          *((CommonConsumeEntity_o **)&commonConsumeEntities->obj.klass + j),
          v26);
        commonConsumeEntities = this->fields.commonConsumeEntities;
        if ( !commonConsumeEntities )
          goto LABEL_180;
        LODWORD(v70) = commonConsumeEntities->max_length;
        v87 = j - 3;
        if ( v87 >= (int)v70 )
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
    sub_1C1AE30(v12, v13);
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
        sub_1C1AE30(this, shopEntity);
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

  if ( (byte_4BC3EA1 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, sprite);
    byte_4BC3EA1 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_1C1AE30(gameObject, v7);
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

  if ( (byte_4BC3EA2 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, sprite);
    byte_4BC3EA2 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !sprite )
      sub_1C1AE30(v6, v7);
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
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4BC3EAC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, shopEntity);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ShopReleaseMaster___, v7);
    sub_1C1ABD4(&DataManager_TypeInfo, v8);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v10);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C1ABD4(&StringLiteral_12245/*"SHOP_CANT_BUY"*/, v12);
    sub_1C1ABD4(&StringLiteral_12285/*"SHOP_QUEST_OPEN"*/, v13);
    sub_1C1ABD4(&StringLiteral_12283/*"SHOP_QUEST_ALREADY_CLEARED"*/, v14);
    sub_1C1ABD4(&StringLiteral_12281/*"SHOP_NOT_RELEASE_SET_ITEM"*/, v15);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v16);
    sub_1C1ABD4(&StringLiteral_12191/*"SHOP_ALREADY_GET"*/, v17);
    byte_4BC3EAC = 1;
  }
  questId = 0;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ShopReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ShopReleaseMaster___);
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
      Master_object = (ShopReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (ShopReleaseMaster_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Master_object,
                                               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
      targetIds = shopEntity->fields.targetIds;
      if ( !targetIds )
        goto LABEL_67;
      if ( !targetIds->max_length )
        sub_1C1AE38(Master_object, v19);
      if ( !Master_object )
        goto LABEL_67;
      IsServant = (System_String_o *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                       &entity,
                                       targetIds->m_Items[1],
                                       (const MethodInfo_32486C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
            v34 = &StringLiteral_12245/*"SHOP_CANT_BUY"*/;
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
            v34 = &StringLiteral_12191/*"SHOP_ALREADY_GET"*/;
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
        sub_1C1AE30(Master_object, v19);
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
      IsServant = (System_String_o *)ShopEntity__IsAnotherItemBuyable(shopEntity, 0LL);
      if ( ((unsigned __int8)IsServant & 1) != 0 )
        goto LABEL_58;
LABEL_12:
      v29 = this->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = &StringLiteral_12191/*"SHOP_ALREADY_GET"*/;
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
      v30 = &StringLiteral_12281/*"SHOP_NOT_RELEASE_SET_ITEM"*/;
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
            Master_object = (ShopReleaseMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12285/*"SHOP_QUEST_OPEN"*/, 0LL);
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
      v30 = &StringLiteral_12283/*"SHOP_QUEST_ALREADY_CLEARED"*/;
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
  UILabel_o *warningLabel; // x23
  struct UILabel_o **p_warningLabel; // x24
  void *gameObject; // x0
  ShopBuyItemConfirmMenu_o *v51; // x0
  const MethodInfo *v52; // x3
  ShopBuyItemConfirmMenu_o *v53; // x0
  const MethodInfo *v54; // x3
  ShopBuyItemConfirmMenu_o *v55; // x0
  const MethodInfo *v56; // x3
  UILabel_o *v57; // x19
  __int64 *v58; // x8
  const MethodInfo *v59; // x1
  System_Int32_array *UserItemCounts; // x22
  __int64 v61; // x20
  UnityEngine_Object_o *resetWarningLabel; // x21
  UnityEngine_Object_o *shopResetButton; // x21
  ItemEntity_o *EntityByType; // x0
  struct System_String_StaticFields *p_name; // x8
  ShopBuyItemConfirmMenu_o *v66; // x0
  const MethodInfo *v67; // x3
  struct ShopEntity_o *v68; // x8
  UILabel_o *v69; // x20
  System_String_o *v70; // x22
  Il2CppObject *v71; // x0
  ShopBuyItemConfirmMenu_o *v72; // x0
  const MethodInfo *v73; // x3
  __int64 *v74; // x8
  __int64 *v75; // x8
  System_String_o *v76; // x21
  struct ShopEntity_o *v77; // x8
  struct System_Int32_array *itemIds; // x8
  Il2CppObject *monitor; // x1
  BalanceConfig_c *v80; // x8
  int v81; // w22
  UILabel_o *v82; // x22
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  __int64 v84; // x9
  CommonConsumeEntity_o *v85; // x20
  int32_t num; // w22
  int32_t v87; // w19
  struct System_String_o *v88; // x22
  int v89; // w26
  Il2CppClass **v90; // x8
  CommonConsumeEntity_o *v91; // x23
  int v92; // w28
  Il2CppObject *Name; // x0
  System_String_o *v94; // x0
  int stringLength; // w8
  System_String_o *v96; // x0
  Il2CppObject *v97; // x20
  int v98; // w19
  BalanceConfig_c *v99; // x8
  int32_t v100; // w20
  int32_t PresentBoxMax; // w9
  struct UILabel_o *v102; // x19
  __int64 *v103; // x8
  Il2CppObject *MasterData_object; // x19
  int32_t Sum; // w0
  BalanceConfig_c *v106; // x8
  int32_t v107; // w19
  int32_t UserItemMax; // w9
  int32_t v109; // w20
  System_String_o *v110; // x1
  Il2CppObject *Empty; // x21
  int32_t v112; // w22
  int32_t resetLimitNum; // w27
  System_String_o *v114; // x23
  __int64 v115; // x2
  __int64 v116; // x3
  __int64 v117; // x4
  Il2CppObject *v118; // x24
  __int64 v119; // x2
  __int64 v120; // x3
  __int64 v121; // x4
  Il2CppObject *v122; // x0
  System_String_o *v123; // x0
  System_String_o *v124; // x23
  __int64 v125; // x2
  __int64 v126; // x3
  __int64 v127; // x4
  Il2CppObject *v128; // x0
  System_String_o *v129; // x23
  Il2CppObject *Master_object; // x24
  Il2CppObject *v131; // x19
  const MethodInfo *v132; // x3
  System_String_o *v133; // x0
  System_String_o *v134; // x0
  int32_t v135; // [xsp+8h] [xbp-98h] BYREF
  int32_t limitNum; // [xsp+Ch] [xbp-94h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-90h] BYREF
  int32_t recordNum[2]; // [xsp+18h] [xbp-88h] BYREF
  int32_t buyCmdCodeNum[2]; // [xsp+20h] [xbp-80h] BYREF
  int32_t buyServantNum[2]; // [xsp+28h] [xbp-78h] BYREF
  ShopResetEntity_o *v141; // [xsp+30h] [xbp-70h] BYREF
  int32_t questId; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4BC3EA9 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, shopEntity);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ItemMaster___, v9);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserItemMaster___, v10);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v11);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ItemMaster___, v12);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ShopResetMaster___, v13);
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserItemMaster___, v14);
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserShopMaster___, v15);
    sub_1C1ABD4(&DataManager_TypeInfo, v16);
    sub_1C1ABD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v17);
    sub_1C1ABD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v18);
    sub_1C1ABD4(&int_TypeInfo, v19);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v20);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v21);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v22);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1C1ABD4(&string_TypeInfo, v24);
    sub_1C1ABD4(&StringLiteral_12228/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/, v25);
    sub_1C1ABD4(&StringLiteral_12220/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/, v26);
    sub_1C1ABD4(&StringLiteral_12209/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_SHORTAGE"*/, v27);
    sub_1C1ABD4(&StringLiteral_12229/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/, v28);
    sub_1C1ABD4(&StringLiteral_12210/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_MESSAGE"*/, v29);
    sub_1C1ABD4(&StringLiteral_12232/*"SHOP_BUY_RARE_PRI_CONFIRM_WARNING"*/, v30);
    sub_1C1ABD4(&StringLiteral_12225/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/, v31);
    sub_1C1ABD4(&StringLiteral_11017/*"QP_NAME"*/, v32);
    sub_1C1ABD4(&StringLiteral_12216/*"SHOP_BUY_CONFIRM_SOLD_OUT_WARNING"*/, v33);
    sub_1C1ABD4(&StringLiteral_12205/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/, v34);
    sub_1C1ABD4(&StringLiteral_12212/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/, v35);
    sub_1C1ABD4(&StringLiteral_12207/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, v36);
    sub_1C1ABD4(&StringLiteral_12213/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, v37);
    sub_1C1ABD4(&StringLiteral_12214/*"SHOP_BUY_CONFIRM_QUEST_CLAER"*/, v38);
    sub_1C1ABD4(&StringLiteral_25542/*"{0}、"*/, v39);
    sub_1C1ABD4(&StringLiteral_12219/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, v40);
    sub_1C1ABD4(&StringLiteral_12239/*"SHOP_BUY_STONE_FRAGMENTS_CONFIRM_WARNING"*/, v41);
    sub_1C1ABD4(&StringLiteral_12222/*"SHOP_BUY_ITEM_FULL_WARNING"*/, v42);
    sub_1C1ABD4(&StringLiteral_12224/*"SHOP_BUY_ITEM_OVER_WARNING"*/, v43);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v44);
    sub_1C1ABD4(&StringLiteral_12208/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_LIMIT"*/, v45);
    sub_1C1ABD4(&StringLiteral_12215/*"SHOP_BUY_CONFIRM_QUEST_HOLD"*/, v46);
    sub_1C1ABD4(&StringLiteral_12211/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_NO_LIMIT_MESSAGE"*/, v47);
    byte_4BC3EA9 = 1;
  }
  questId = 0;
  *(_QWORD *)buyServantNum = 0LL;
  v141 = 0LL;
  *(_QWORD *)recordNum = 0LL;
  *(_QWORD *)buyCmdCodeNum = 0LL;
  entity = 0LL;
  p_warningLabel = &this->fields.warningLabel;
  warningLabel = this->fields.warningLabel;
  gameObject = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !warningLabel )
    goto LABEL_241;
  UILabel__set_fontSize(warningLabel, BalanceConfig_TypeInfo->static_fields->DefaultFontSize, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText(v51, this->fields.warningLabel, (System_String_o *)StringLiteral_1/*""*/, v52);
  ShopBuyItemConfirmMenu__SetLabelText(v53, this->fields.resetWarningLabel, (System_String_o *)StringLiteral_1/*""*/, v54);
  ShopBuyItemConfirmMenu__SetLabelActive(v55, this->fields.resetWarningLabel, 0, v56);
  if ( !shopEntity )
    goto LABEL_241;
  if ( shopEntity->fields.purchaseType == 6 && shopEntity->fields.shopType == 3 )
  {
    if ( isInPreparation )
    {
      if ( !ShopEntity__isQuestNotClearItemClosed(shopEntity, 0, 0LL) )
        goto LABEL_21;
LABEL_14:
      v57 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v58 = &StringLiteral_12214/*"SHOP_BUY_CONFIRM_QUEST_CLAER"*/;
      goto LABEL_58;
    }
    if ( ShopEntity__isQuestNotClear(shopEntity, &questId, 0, 0LL)
      && ShopEntity__isQuestNotClearItemClosedSub(shopEntity, questId, 0, 0LL) )
    {
      goto LABEL_14;
    }
    if ( ShopEntity__IsQuestHold(shopEntity, 0LL) )
    {
      v57 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v58 = &StringLiteral_12215/*"SHOP_BUY_CONFIRM_QUEST_HOLD"*/;
      goto LABEL_58;
    }
  }
LABEL_21:
  if ( ShopEntity__IsSoldOut(shopEntity, 0LL)
    && !ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0LL)
    && !ShopEntity__IsAnotherItemBuyable(shopEntity, 0LL) )
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
      goto LABEL_241;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_241;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
    {
LABEL_55:
      v57 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v58 = &StringLiteral_12216/*"SHOP_BUY_CONFIRM_SOLD_OUT_WARNING"*/;
      goto LABEL_58;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    gameObject = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !gameObject )
      goto LABEL_241;
    EntityByType = ItemMaster__GetEntityByType((ItemMaster_o *)gameObject, 37, 0LL);
    if ( EntityByType )
      p_name = (struct System_String_StaticFields *)&EntityByType->fields.name;
    else
      p_name = string_TypeInfo->static_fields;
    Empty = (Il2CppObject *)p_name->Empty;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    gameObject = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !gameObject )
      goto LABEL_241;
    v112 = *((_DWORD *)gameObject + 25);
    gameObject = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ShopResetMaster___);
    if ( !gameObject )
      goto LABEL_241;
    gameObject = (void *)ShopResetMaster__TryGetEntity(
                           (ShopResetMaster_o *)gameObject,
                           &v141,
                           shopEntity->fields.baseShopId,
                           v112,
                           0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !v141 )
        goto LABEL_241;
      resetLimitNum = v141->fields.resetLimitNum;
    }
    else
    {
      resetLimitNum = 0;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( resetLimitNum < 1 )
    {
      v124 = LocalizationManager__Get((System_String_o *)StringLiteral_12211/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_NO_LIMIT_MESSAGE"*/, 0LL);
      limitNum = shopEntity->fields.limitNum;
      v128 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &limitNum, v125, v126, v127);
      v123 = System_String__Format_63054740(v124, Empty, v128, 0LL);
    }
    else
    {
      v114 = LocalizationManager__Get((System_String_o *)StringLiteral_12210/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_MESSAGE"*/, 0LL);
      limitNum = resetLimitNum;
      v118 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &limitNum, v115, v116, v117);
      v135 = shopEntity->fields.limitNum;
      v122 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v135, v119, v120, v121);
      v123 = System_String__Format_63054808(v114, Empty, v118, v122, 0LL);
    }
    v129 = v123;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserShopMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BC2585 )
    {
      sub_1C1ABD4(&NetworkManager_TypeInfo, shopEntity);
      byte_4BC2585 = 1;
    }
    gameObject = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      gameObject = NetworkManager_TypeInfo;
    }
    if ( !Master_object )
LABEL_241:
      sub_1C1AE30(gameObject, shopEntity);
    gameObject = UserShopMaster__GetEntityDefinitely(
                   (UserShopMaster_o *)Master_object,
                   *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                   shopEntity->fields.baseShopId,
                   0LL);
    if ( resetLimitNum < 1 )
      goto LABEL_245;
    if ( !gameObject )
      goto LABEL_241;
    if ( resetLimitNum <= *((_DWORD *)gameObject + 10) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v134 = LocalizationManager__Get((System_String_o *)StringLiteral_12208/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_LIMIT"*/, 0LL);
    }
    else
    {
LABEL_245:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v131 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BC2585 )
      {
        sub_1C1ABD4(&NetworkManager_TypeInfo, shopEntity);
        byte_4BC2585 = 1;
      }
      gameObject = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        gameObject = NetworkManager_TypeInfo;
      }
      if ( !v131 )
        goto LABEL_241;
      gameObject = UserItemMaster__GetEntityDefinitely(
                     (UserItemMaster_o *)v131,
                     *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                     v112,
                     0LL);
      if ( !gameObject )
        goto LABEL_241;
      if ( *((int *)gameObject + 7) > 0 )
        goto LABEL_239;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v133 = LocalizationManager__Get((System_String_o *)StringLiteral_12209/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_SHORTAGE"*/, 0LL);
      v134 = System_String__Format(v133, Empty, 0LL);
    }
    gameObject = System_String__Concat_63040368(v129, v134, 0LL);
    v129 = (System_String_o *)gameObject;
LABEL_239:
    ShopBuyItemConfirmMenu__SetLabelActive(
      (ShopBuyItemConfirmMenu_o *)gameObject,
      this->fields.resetWarningLabel,
      1,
      v132);
    gameObject = this->fields.resetWarningLabel;
    if ( gameObject )
    {
      v110 = v129;
      goto LABEL_194;
    }
    goto LABEL_241;
  }
  if ( isInPreparation )
  {
    v57 = *p_warningLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v58 = &StringLiteral_12212/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/;
LABEL_58:
    v66 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v58, 0LL);
LABEL_59:
    ShopBuyItemConfirmMenu__SetLabelText(v66, v57, (System_String_o *)v66, v67);
    return;
  }
  if ( !ShopEntity__IsEnable(shopEntity, 0LL, 0LL) )
  {
    v57 = *p_warningLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v58 = &StringLiteral_12213/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/;
    goto LABEL_58;
  }
  UserItemCounts = ShopBuyItemConfirmMenu__GetUserItemCounts(this, v59);
  switch ( shopEntity->fields.payType )
  {
    case 2:
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_241;
      if ( !UserItemCounts->max_length )
        goto LABEL_242;
      if ( (int)gameObject <= UserItemCounts->m_Items[1] )
        goto LABEL_151;
      v69 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v70 = LocalizationManager__Get((System_String_o *)StringLiteral_12219/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, 0LL);
      v71 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_11017/*"QP_NAME"*/, 0LL);
      v72 = (ShopBuyItemConfirmMenu_o *)System_String__Format(v70, v71, 0LL);
      goto LABEL_109;
    case 4:
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_241;
      if ( !UserItemCounts->max_length )
        goto LABEL_242;
      if ( (int)gameObject <= UserItemCounts->m_Items[1] )
        goto LABEL_151;
      v69 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v74 = &StringLiteral_12225/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/;
      goto LABEL_108;
    case 6:
    case 0xB:
    case 0xC:
      if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 2 )
      {
        if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 1 )
        {
          v61 = 0LL;
          while ( 1 )
          {
            gameObject = (void *)ShopEntity__GetPrices(shopEntity, v61, 0LL);
            if ( !UserItemCounts )
              goto LABEL_241;
            if ( (unsigned int)v61 >= UserItemCounts->max_length )
              goto LABEL_242;
            if ( (int)gameObject > UserItemCounts->m_Items[v61 + 1] )
              break;
            if ( (int)++v61 >= ShopEntity__GetItemCount(shopEntity, 0LL) )
              goto LABEL_151;
          }
          v57 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v58 = &StringLiteral_12220/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/;
          goto LABEL_58;
        }
        goto LABEL_151;
      }
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_241;
      if ( !UserItemCounts->max_length )
        goto LABEL_242;
      if ( (int)gameObject <= UserItemCounts->m_Items[1] )
        goto LABEL_151;
      gameObject = (void *)ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, (const MethodInfo *)shopEntity);
      v68 = this->fields.shopEntity;
      if ( !v68 )
        goto LABEL_241;
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        gameObject = ShopEntity__GetAnotherPayItemIds(this->fields.shopEntity, 0LL);
        if ( !gameObject )
          goto LABEL_241;
      }
      else
      {
        gameObject = v68->fields.itemIds;
        if ( !gameObject )
          goto LABEL_241;
      }
      if ( !*((_DWORD *)gameObject + 6) )
LABEL_242:
        sub_1C1AE38(gameObject, shopEntity);
      v87 = *((_DWORD *)gameObject + 8);
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_241;
      gameObject = DataManager__GetMasterData_object_(
                     (DataManager_o *)gameObject,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !gameObject )
        goto LABEL_241;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
              &entity,
              v87,
              (const MethodInfo_32486C4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        return;
      v57 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_12219/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, 0LL);
      if ( !entity )
        goto LABEL_241;
      monitor = (Il2CppObject *)entity[1].monitor;
      goto LABEL_150;
    case 8:
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_241;
      if ( !UserItemCounts->max_length )
        goto LABEL_242;
      if ( (int)gameObject <= UserItemCounts->m_Items[1] )
        goto LABEL_151;
      v57 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v75 = &StringLiteral_12239/*"SHOP_BUY_STONE_FRAGMENTS_CONFIRM_WARNING"*/;
      goto LABEL_92;
    case 9:
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_241;
      if ( !UserItemCounts->max_length )
        goto LABEL_242;
      if ( (int)gameObject <= UserItemCounts->m_Items[1] )
        goto LABEL_151;
      v57 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v75 = &StringLiteral_12205/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/;
LABEL_92:
      v76 = LocalizationManager__Get((System_String_o *)*v75, 0LL);
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_241;
      gameObject = DataManager__GetMasterData_object_(
                     (DataManager_o *)gameObject,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ItemMaster___);
      v77 = this->fields.shopEntity;
      if ( !v77 )
        goto LABEL_241;
      itemIds = v77->fields.itemIds;
      if ( !itemIds )
        goto LABEL_241;
      if ( !itemIds->max_length )
        goto LABEL_242;
      if ( !gameObject )
        goto LABEL_241;
      gameObject = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                     itemIds->m_Items[1],
                     (const MethodInfo_3248678 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !gameObject )
        goto LABEL_241;
      monitor = (Il2CppObject *)*((_QWORD *)gameObject + 3);
      goto LABEL_99;
    case 0xA:
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_241;
      if ( !UserItemCounts->max_length )
        goto LABEL_242;
      if ( (int)gameObject <= UserItemCounts->m_Items[1]
        || ShopEntity__IsAfterTheFreeShopReleaseDate(shopEntity, 0LL)
        && ShopEntity__IsFulFilledFreeExchangeCondition(shopEntity, 0LL) )
      {
        goto LABEL_151;
      }
      v69 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v74 = &StringLiteral_12232/*"SHOP_BUY_RARE_PRI_CONFIRM_WARNING"*/;
LABEL_108:
      v72 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v74, 0LL);
LABEL_109:
      ShopBuyItemConfirmMenu__SetLabelText(v72, v69, (System_String_o *)v72, v73);
      goto LABEL_151;
    case 0xE:
      if ( !this->fields.commonConsumeEntities )
        goto LABEL_151;
      gameObject = (void *)ShopEntity__get_TargetId(shopEntity, 0LL);
      v80 = BalanceConfig_TypeInfo;
      v81 = (int)gameObject;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v80 = BalanceConfig_TypeInfo;
      }
      if ( v81 != v80->static_fields->ApSeedExchangeTargetItemId )
        goto LABEL_118;
      v82 = *p_warningLabel;
      if ( !v80->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v80);
      if ( !v82 )
        goto LABEL_241;
      UILabel__set_fontSize(v82, BalanceConfig_TypeInfo->static_fields->TradeApDialogWarningLabelFontSize, 0LL);
LABEL_118:
      commonConsumeEntities = this->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        goto LABEL_241;
      v84 = *(_QWORD *)&commonConsumeEntities->max_length;
      if ( (_DWORD)v84 == 1 )
      {
        v85 = commonConsumeEntities->m_Items[0];
        if ( !v85 )
          goto LABEL_241;
        num = v85->fields.num;
        if ( num > CommonConsumeEntity__GetUserHasNum(commonConsumeEntities->m_Items[0], 0LL) )
        {
          v57 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v76 = LocalizationManager__Get((System_String_o *)StringLiteral_12207/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, 0LL);
          monitor = (Il2CppObject *)CommonConsumeEntity__GetName(v85, 0LL);
LABEL_99:
          gameObject = v76;
          goto LABEL_150;
        }
      }
      else if ( (int)v84 > 1 )
      {
        v88 = string_TypeInfo->static_fields->Empty;
        v89 = 0;
        do
        {
          if ( v89 >= (unsigned int)v84 )
            goto LABEL_242;
          v90 = &commonConsumeEntities->obj.klass + v89;
          v91 = (CommonConsumeEntity_o *)v90[4];
          if ( !v91 )
            goto LABEL_241;
          v92 = v91->fields.num;
          gameObject = (void *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)v90[4], 0LL);
          if ( v92 > (int)gameObject )
          {
            Name = (Il2CppObject *)CommonConsumeEntity__GetName(v91, 0LL);
            v94 = System_String__Format((System_String_o *)StringLiteral_25542/*"{0}、"*/, Name, 0LL);
            gameObject = System_String__Concat_63040368(v88, v94, 0LL);
            v88 = (struct System_String_o *)gameObject;
          }
          commonConsumeEntities = this->fields.commonConsumeEntities;
          if ( !commonConsumeEntities )
            goto LABEL_241;
          LODWORD(v84) = commonConsumeEntities->max_length;
          ++v89;
        }
        while ( v89 < (int)v84 );
        if ( !v88 )
          goto LABEL_241;
        stringLength = v88->fields._stringLength;
        if ( stringLength >= 1 )
        {
          v96 = System_String__Remove_63059188(v88, stringLength - 1, 0LL);
          v57 = *p_warningLabel;
          v97 = (Il2CppObject *)v96;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_12207/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, 0LL);
          monitor = v97;
LABEL_150:
          v66 = (ShopBuyItemConfirmMenu_o *)System_String__Format((System_String_o *)gameObject, monitor, 0LL);
          goto LABEL_59;
        }
      }
LABEL_151:
      *(_QWORD *)buyCmdCodeNum = 0LL;
      *(_QWORD *)buyServantNum = 0LL;
      *(_QWORD *)recordNum = 0LL;
      ShopEntity__GetSum(
        shopEntity,
        &buyServantNum[1],
        buyServantNum,
        &buyCmdCodeNum[1],
        buyCmdCodeNum,
        &recordNum[1],
        recordNum,
        0LL);
      if ( buyCmdCodeNum[1] + buyServantNum[0] + buyCmdCodeNum[0] >= 1 )
      {
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_241;
        gameObject = DataManager__GetMasterData_object_(
                       (DataManager_o *)gameObject,
                       (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
        if ( !userGameEntity )
          goto LABEL_241;
        if ( !gameObject )
          goto LABEL_241;
        gameObject = UserPresentBoxMaster__getVaildList(
                       (UserPresentBoxMaster_o *)gameObject,
                       userGameEntity->fields.userId,
                       0LL);
        if ( !gameObject )
          goto LABEL_241;
        if ( shopEntity->fields.purchaseType == 5 )
          v98 = recordNum[0];
        else
          v98 = buyCmdCodeNum[1] + buyServantNum[0] + buyCmdCodeNum[0];
        v99 = BalanceConfig_TypeInfo;
        v100 = *((_DWORD *)gameObject + 6);
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v99 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v99->static_fields->PresentBoxMax;
        if ( PresentBoxMax <= v100 )
        {
          v102 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v103 = &StringLiteral_12228/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/;
LABEL_192:
          gameObject = LocalizationManager__Get((System_String_o *)*v103, 0LL);
          if ( v102 )
          {
            v110 = (System_String_o *)gameObject;
            gameObject = v102;
LABEL_194:
            UILabel__set_text((UILabel_o *)gameObject, v110, 0LL);
            return;
          }
          goto LABEL_241;
        }
        if ( !v99->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v99);
          PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
        }
        if ( v98 + v100 > PresentBoxMax )
        {
          v102 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v103 = &StringLiteral_12229/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/;
          goto LABEL_192;
        }
      }
      if ( buyServantNum[1] < 1 )
        return;
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_241;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BC2585 )
      {
        sub_1C1ABD4(&NetworkManager_TypeInfo, shopEntity);
        byte_4BC2585 = 1;
      }
      gameObject = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        gameObject = NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        goto LABEL_241;
      Sum = UserItemMaster__getSum(
              (UserItemMaster_o *)MasterData_object,
              *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
              0LL);
      v106 = BalanceConfig_TypeInfo;
      v107 = Sum;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v106 = BalanceConfig_TypeInfo;
      }
      UserItemMax = v106->static_fields->UserItemMax;
      if ( v107 >= UserItemMax )
      {
        v102 = *p_warningLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v103 = &StringLiteral_12222/*"SHOP_BUY_ITEM_FULL_WARNING"*/;
        goto LABEL_192;
      }
      v109 = buyServantNum[1];
      if ( !v106->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v106);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      if ( v109 + v107 > UserItemMax )
      {
        v102 = *p_warningLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v103 = &StringLiteral_12224/*"SHOP_BUY_ITEM_OVER_WARNING"*/;
        goto LABEL_192;
      }
      return;
    default:
      goto LABEL_151;
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

  if ( (byte_4BC3EC3 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    sub_1C1ABD4(&ShopBuyItemConfirmMenu_TypeInfo, v3);
    byte_4BC3EC3 = 1;
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
          sub_1C1AE30(gameObject, v8);
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

  if ( (byte_4BC3EBB & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&commandCodeId);
    sub_1C1ABD4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v5);
    sub_1C1ABD4(&ServantStatusDialog_EndDelegate_TypeInfo, v6);
    sub_1C1ABD4(&Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BC3EBB = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_9;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         commandCodeId,
         (const MethodInfo_32486C4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
  {
    v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = entity;
    v14 = (CommonUI_o *)v12;
    v15 = (ServantStatusDialog_EndDelegate_o *)sub_1C1AE20(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v15,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v14 )
    {
      CommonUI__OpenServantEquipStatusDialog_31115380(v14, 25, (CommandCodeEntity_o *)v13, 0, v15, 0LL, 0LL);
      return 0;
    }
LABEL_9:
    sub_1C1AE30(Instance, v11);
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

  if ( (byte_4BC3EBA & 1) == 0 )
  {
    sub_1C1ABD4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, *(_QWORD *)&itemId);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_1C1ABD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v6);
    sub_1C1ABD4(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BC3EBA = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_13;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         itemId,
         (const MethodInfo_32486C4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    itemDetailDialogOverwriteDepth = this->fields.itemDetailDialogOverwriteDepth;
    v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = entity;
    v15 = (CommonUI_o *)v13;
    v16 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C1AE20(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
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
    sub_1C1AE30(Instance, v11);
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
  if ( (byte_4BC3EBC & 1) == 0 )
  {
    sub_1C1ABD4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, shopEntity);
    sub_1C1ABD4(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C1ABD4(&StringLiteral_9434/*"NONE"*/, v7);
    byte_4BC3EBC = 1;
  }
  if ( !shopEntity )
    goto LABEL_9;
  if ( !System_String__IsNullOrEmpty(shopEntity->fields.infoMessage, 0LL)
    && System_String__op_Inequality(shopEntity->fields.infoMessage, (System_String_o *)StringLiteral_9434/*"NONE"*/, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    name = shopEntity->fields.name;
    infoMessage = shopEntity->fields.infoMessage;
    v11 = (CommonUI_o *)Instance;
    v12 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C1AE20(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v12,
      v4,
      (intptr_t)Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__,
      0LL);
    if ( v11 )
    {
      CommonUI__OpenItemDetailDialog_31175848(v11, name, infoMessage, v12, 0LL);
      return 0;
    }
LABEL_9:
    sub_1C1AE30(this, shopEntity);
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

  if ( (byte_4BC3EB9 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1C1ABD4(&ServantStatusDialog_EndDelegate_TypeInfo, v10);
    sub_1C1ABD4(&EquipTargetInfo_TypeInfo, v11);
    sub_1C1ABD4(&ServantLeaderInfo_TypeInfo, v12);
    sub_1C1ABD4(&Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__, v13);
    sub_1C1ABD4(&Method_ShopBuyItemConfirmMenu_EndShowServantStatusDialog__, v14);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4BC3EB9 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_23;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          servantId,
          (const MethodInfo_32486C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
    v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = (ServantLeaderInfo_o *)sub_1C1AE20(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_41717540(v20, servantId, 0, 1, 0LL);
    v21 = (ServantStatusDialog_EndDelegate_o *)sub_1C1AE20(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v21,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantStatusDialog__,
      0LL);
    if ( v19 )
    {
      CommonUI__OpenServantStatusDialog_31111300((CommonUI_o *)v19, 7, v20, v21, 0LL);
      return 0;
    }
    goto LABEL_23;
  }
  Instance = entity;
  if ( !entity )
    goto LABEL_23;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL) )
  {
    v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = (EquipTargetInfo_o *)sub_1C1AE20(EquipTargetInfo_TypeInfo);
    EquipTargetInfo___ctor_40095444(v24, servantId, limitCount, level, 0, 0LL);
    v25 = (ServantStatusDialog_EndDelegate_o *)sub_1C1AE20(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v25,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v23 )
    {
      CommonUI__OpenServantEquipStatusDialog_31114396((CommonUI_o *)v23, 7, v24, v25, 0LL, 0LL);
      return 0;
    }
LABEL_23:
    sub_1C1AE30(Instance, v18);
  }
  return 2;
}


System_String_o *__fastcall ShopBuyItemConfirmMenu__get_closeBtnPath(
        ShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC3EC7 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_15898/*"Window/CancelButton"*/, method);
    byte_4BC3EC7 = 1;
  }
  return (System_String_o *)StringLiteral_15898/*"Window/CancelButton"*/;
}


bool __fastcall ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  EventRewardRootComponent_c *v3; // x0
  ShopEntity_o *shopEntity; // x0

  if ( (byte_4BC3E9C & 1) == 0 )
  {
    sub_1C1ABD4(&EventRewardRootComponent_TypeInfo, method);
    byte_4BC3E9C = 1;
  }
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  if ( !byte_4BC28F1 )
  {
    sub_1C1ABD4(&EventRewardRootComponent_TypeInfo, method);
    byte_4BC28F1 = 1;
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
    sub_1C1AE30(0LL, method);
  return ShopEntity__IsAnotherItemBuyable(shopEntity, 0LL);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ShopBuyItemConfirmMenu___c__DisplayClass115_0_o *v8; // x19
  struct ShopBuyItemConfirmMenu_o *_4__this; // x8
  System_Action_o *onChecked; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct ShopBuyItemConfirmMenu_o *v17; // x8
  System_Action_T__o *onCloseReturnWarning; // x21

  v8 = this;
  if ( (byte_4BC3ECA & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu___c__DisplayClass115_0_o *)sub_1C1ABD4(&Method_ActionExtensions_Call_int___, method);
    byte_4BC3ECA = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this
    || (onChecked = _4__this->fields.onChecked,
        _4__this->fields.onChecked = 0LL,
        sub_1C1AB78((PartyOrganizationUtility_o *)&_4__this->fields.onChecked, 0LL, v2, v3, v4, v5, v6, v7),
        (v17 = v8->fields.__4__this) == 0LL) )
  {
    sub_1C1AE30(this, method);
  }
  onCloseReturnWarning = (System_Action_T__o *)v17->fields.onCloseReturnWarning;
  v17->fields.onCloseReturnWarning = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v17->fields.onCloseReturnWarning, 0LL, v11, v12, v13, v14, v15, v16);
  if ( v8->fields.isDecide )
    ActionExtensions__Call(onChecked, 0LL);
  else
    ActionExtensions__Call_int_(
      onCloseReturnWarning,
      0,
      (const MethodInfo_2EF1BFC *)Method_ActionExtensions_Call_int___);
}