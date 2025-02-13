void __fastcall ShopBuyItemConfirmMenu___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  int64_t v7; // x1
  struct ShopBuyItemConfirmMenu_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x1
  struct ShopBuyItemConfirmMenu_StaticFields *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct ShopBuyItemConfirmMenu_StaticFields *v23; // x8

  if ( (byte_4BD894D & 1) == 0 )
  {
    sub_1C21E38(&ShopBuyItemConfirmMenu_TypeInfo);
    sub_1C21E38(&StringLiteral_17870/*"btn_txt_event_"*/);
    sub_1C21E38(&StringLiteral_17923/*"btn_txt_trade"*/);
    sub_1C21E38(&StringLiteral_17903/*"btn_txt_sale"*/);
    byte_4BD894D = 1;
  }
  ShopBuyItemConfirmMenu_TypeInfo->static_fields->VALENTINE_BTN_NAME = (struct System_String_o *)StringLiteral_17870/*"btn_txt_event_"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ShopBuyItemConfirmMenu_TypeInfo->static_fields,
    StringLiteral_17870/*"btn_txt_event_"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_17923/*"btn_txt_trade"*/;
  static_fields = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  static_fields->DECIED_BTN_NAME_DEFAULT = (struct System_String_o *)StringLiteral_17923/*"btn_txt_trade"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->DECIED_BTN_NAME_DEFAULT, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_17903/*"btn_txt_sale"*/;
  v16 = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v16->DECIED_BTN_NAME_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_17903/*"btn_txt_sale"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->DECIED_BTN_NAME_LIMIT_MATERIAL, v15, v17, v18, v19, v20, v21, v22);
  v23 = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  *(_OWORD *)&v23->PRICE_DATA_LABEL_MAX_WIDTH = xmmword_BFD7F0;
  *(_QWORD *)&v23->DEFAULT_PRICE_INFO_POS_Y = 0xFFFFFF86FFFFFFECLL;
  v23->RESET_LAYOUT_OFFSET_Y = 34;
}


void __fastcall ShopBuyItemConfirmMenu___ctor(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4BD894C & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BD894C = 1;
  }
  this->fields.itemDetailDialogOverwriteDepth = 0x80000000;
  *(_OWORD *)&this->fields.freeLabelPos.fields.x = xmmword_BFDCF0;
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
    sub_1C21DDC(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_1C21DDC(p_onDecide, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall ShopBuyItemConfirmMenu__Close(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ShopBuyItemConfirmMenu__Close_33875828(this, 0LL, v2);
}


void __fastcall ShopBuyItemConfirmMenu__Close_33875828(
        ShopBuyItemConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4BD8937 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ShopBuyItemConfirmMenu_EndClose__);
    byte_4BD8937 = 1;
  }
  this->fields.onClose = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.onClose,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__EndClose(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  ShopBuyItemConfirmMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C22094(0LL, v4);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4BD8944 & 1) == 0 )
  {
    sub_1C21E38(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD8944 = 1;
  }
  v3 = Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__;
  if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v6);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__EndShowServantEquipStatusDialog(
        ShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BD8943 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD8943 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__EndShowServantStatusDialog(
        ShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BD8942 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD8942 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
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
  bool isQuestNotClearItemClosedSub; // w8
  bool result; // w0
  const MethodInfo *v11; // x1
  System_Int32_array *UserItemCounts; // x22
  int32_t v13; // w19
  __int64 v14; // x21
  int m_CancellationTokenSource; // w20
  BalanceConfig_c *v16; // x8
  int32_t PresentBoxMax; // w9
  Il2CppObject *MasterData_object; // x19
  int32_t Sum; // w19
  BalanceConfig_c *v20; // x8
  int32_t UserItemMax; // w9
  int32_t v22; // w21
  struct CommonConsumeEntity_array *commonConsumeEntities; // x21
  int max_length; // w8
  __int64 v25; // x22
  int basePanel; // w24
  int32_t questId; // [xsp+Ch] [xbp-54h] BYREF
  int32_t recordNum[2]; // [xsp+10h] [xbp-50h] BYREF
  __int64 buyCmdCodeNum; // [xsp+18h] [xbp-48h] BYREF
  int32_t buyServantNum[2]; // [xsp+28h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_4BD892B & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD892B = 1;
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
      UserItemCounts = ShopBuyItemConfirmMenu__GetUserItemCounts(v8, v11);
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
              sub_1C2209C(this, shopEntity);
            if ( (int)this > UserItemCounts->m_Items[1] )
              return 0;
          }
          else if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 1 )
          {
            v14 = 0LL;
            while ( 1 )
            {
              this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetPrices(shopEntity, v14, 0LL);
              if ( !UserItemCounts )
                break;
              if ( (unsigned int)v14 >= UserItemCounts->max_length )
                goto LABEL_74;
              if ( (int)this > UserItemCounts->m_Items[v14 + 1] )
                return 0;
              if ( (int)++v14 >= ShopEntity__GetItemCount(shopEntity, 0LL) )
                goto LABEL_17;
            }
LABEL_73:
            sub_1C22094(this, shopEntity);
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
          this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_73;
          this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
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
            v13 = recordNum[0];
          else
            v13 = HIDWORD(buyCmdCodeNum) + buyServantNum[0] + buyCmdCodeNum;
          m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
          v16 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v16 = BalanceConfig_TypeInfo;
          }
          PresentBoxMax = v16->static_fields->PresentBoxMax;
          if ( PresentBoxMax > m_CancellationTokenSource )
          {
            if ( !v16->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v16);
              PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
            }
            if ( v13 + m_CancellationTokenSource <= PresentBoxMax )
            {
LABEL_55:
              if ( buyServantNum[1] < 1 )
                return 1;
              this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_73;
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4BD6FF5 )
              {
                sub_1C21E38(&NetworkManager_TypeInfo);
                byte_4BD6FF5 = 1;
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
              v20 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v20 = BalanceConfig_TypeInfo;
              }
              UserItemMax = v20->static_fields->UserItemMax;
              if ( Sum < UserItemMax )
              {
                v22 = buyServantNum[1];
                if ( !v20->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v20);
                  UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
                }
                if ( v22 + Sum <= UserItemMax )
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
          v25 = 0LL;
          while ( 2 )
          {
            if ( (unsigned int)v25 >= max_length )
              goto LABEL_74;
            this = (ShopBuyItemConfirmMenu_o *)commonConsumeEntities->m_Items[v25];
            if ( !this )
              goto LABEL_73;
            basePanel = (int)this->fields.basePanel;
            this = (ShopBuyItemConfirmMenu_o *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0LL);
            if ( basePanel <= (int)this )
            {
              max_length = commonConsumeEntities->max_length;
              if ( (int)++v25 >= max_length )
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
  __int64 v4; // x8
  SetItemMaster_o *v5; // x20
  unsigned __int64 v6; // x21
  int m_CancellationTokenSource; // w8
  int v8; // w9
  __int64 v9; // x10

  if ( (byte_4BD8945 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_SetItemMaster___);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8945 = 1;
  }
  if ( !ids )
    goto LABEL_20;
  if ( !*(_QWORD *)&ids->max_length )
    return 0;
  this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_1C22094(this, ids);
  this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SetItemMaster___);
  v4 = *(_QWORD *)&ids->max_length;
  if ( (int)v4 < 1 )
    return 0;
  v5 = (SetItemMaster_o *)this;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
LABEL_21:
      sub_1C2209C(this, ids);
    if ( !v5 )
      goto LABEL_20;
    this = (ShopBuyItemConfirmMenu_o *)SetItemMaster__GetList(v5, ids->m_Items[v6 + 1], 0LL);
    if ( !this )
      goto LABEL_20;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource >= 1 )
      break;
LABEL_17:
    LODWORD(v4) = ids->max_length;
    if ( (__int64)++v6 >= (int)v4 )
      return 0;
  }
  v8 = 0;
  while ( 1 )
  {
    if ( m_CancellationTokenSource == v8 )
      goto LABEL_21;
    v9 = *((_QWORD *)&this->fields.basePanel + v8);
    if ( !v9 )
      goto LABEL_20;
    if ( *(_DWORD *)(v9 + 20) == 7 )
      return 1;
    if ( m_CancellationTokenSource == ++v8 )
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
    sub_1C22094(this, 0LL);
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
  System_String_o **v4; // x8

  if ( (byte_4BD893A & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_8436/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/);
    sub_1C21E38(&StringLiteral_12288/*"SHOP_MAX_ALERT"*/);
    byte_4BD893A = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( shopType == 9 )
    v4 = (System_String_o **)&StringLiteral_8436/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/;
  else
    v4 = (System_String_o **)&StringLiteral_12288/*"SHOP_MAX_ALERT"*/;
  return LocalizationManager__Get(*v4, 0LL);
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


System_String_o *__fastcall ShopBuyItemConfirmMenu__GetMaxOverItemName(
        ShopBuyItemConfirmMenu_o *this,
        int32_t itemType,
        const MethodInfo *method)
{
  __int64 *v4; // x8

  if ( (byte_4BD8939 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11027/*"QP_NAME"*/);
    sub_1C21E38(&StringLiteral_8690/*"MANA_NAME"*/);
    sub_1C21E38(&StringLiteral_11163/*"RARE_PRI_NAME"*/);
    sub_1C21E38(&StringLiteral_6687/*"FRIEND_POINT_NAME"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8939 = 1;
  }
  if ( itemType <= 5 )
  {
    if ( itemType == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11027/*"QP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v4, 0LL);
    }
    if ( itemType == 5 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_8690/*"MANA_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v4, 0LL);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( itemType == 13 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = &StringLiteral_6687/*"FRIEND_POINT_NAME"*/;
    return LocalizationManager__Get((System_String_o *)*v4, 0LL);
  }
  if ( itemType != 22 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = &StringLiteral_11163/*"RARE_PRI_NAME"*/;
  return LocalizationManager__Get((System_String_o *)*v4, 0LL);
}


System_Int32_array *__fastcall ShopBuyItemConfirmMenu__GetUserItemCounts(
        ShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 SelfUserGame; // x0
  __int64 v4; // x1
  struct ShopEntity_o *shopEntity; // x8
  _DWORD *v6; // x20
  System_Int32_array *v7; // x19
  Il2CppObject *MasterData_object; // x20
  struct ShopEntity_o *v9; // x8
  struct System_Int32_array *v10; // x8
  int32_t v11; // w8
  Il2CppObject *Master_object; // x20
  const MethodInfo *v13; // x1
  __int64 itemIds; // x21
  unsigned int ItemCount; // w0
  struct ShopEntity_o *v17; // x8
  unsigned __int64 v18; // x23

  if ( (byte_4BD892A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&EventRewardRootComponent_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD892A = 1;
  }
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_68;
  v6 = (_DWORD *)SelfUserGame;
  switch ( shopEntity->fields.payType )
  {
    case 1:
      SelfUserGame = sub_1C21EE0(int___TypeInfo, 1LL);
      if ( !v6 )
        goto LABEL_68;
      v7 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_68;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_69;
      v11 = v6[44];
      goto LABEL_49;
    case 2:
      SelfUserGame = sub_1C21EE0(int___TypeInfo, 1LL);
      if ( !v6 )
        goto LABEL_68;
      v7 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_68;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_69;
      v11 = v6[24];
      goto LABEL_49;
    case 4:
      SelfUserGame = sub_1C21EE0(int___TypeInfo, 1LL);
      if ( !v6 )
        goto LABEL_68;
      v7 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_68;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_69;
      v11 = v6[46];
      goto LABEL_49;
    case 6:
    case 0xB:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserItemMaster___);
      SelfUserGame = ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v13);
      if ( (SelfUserGame & 1) == 0 )
      {
        v17 = this->fields.shopEntity;
        if ( v17 )
        {
          itemIds = (__int64)v17->fields.itemIds;
          if ( itemIds )
            goto LABEL_53;
        }
LABEL_68:
        sub_1C22094(SelfUserGame, v4);
      }
      itemIds = sub_1C21EE0(int___TypeInfo, 1LL);
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      if ( !byte_4BD7366 )
      {
        sub_1C21E38(&EventRewardRootComponent_TypeInfo);
        byte_4BD7366 = 1;
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
      v7 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, *(unsigned int *)(itemIds + 24));
      if ( *(int *)(itemIds + 24) >= 1 )
      {
        v18 = 0LL;
        while ( 1 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BD6FF5 )
          {
            sub_1C21E38(&NetworkManager_TypeInfo);
            byte_4BD6FF5 = 1;
          }
          SelfUserGame = (__int64)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            SelfUserGame = (__int64)NetworkManager_TypeInfo;
          }
          if ( v18 >= *(unsigned int *)(itemIds + 24) )
            break;
          if ( !Master_object )
            goto LABEL_68;
          SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                                    (UserItemMaster_o *)Master_object,
                                    *(_QWORD *)(*(_QWORD *)(SelfUserGame + 184) + 64LL),
                                    *(_DWORD *)(itemIds + 32 + 4 * v18),
                                    0LL);
          if ( !SelfUserGame || !v7 )
            goto LABEL_68;
          if ( v18 >= v7->max_length )
            break;
          v7->m_Items[++v18] = *(_DWORD *)(SelfUserGame + 28);
          if ( (__int64)v18 >= *(int *)(itemIds + 24) )
            return v7;
        }
LABEL_69:
        sub_1C2209C(SelfUserGame, v4);
      }
      return v7;
    case 8:
    case 9:
    case 0xC:
      v7 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 1LL);
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_68;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD6FF5 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD6FF5 = 1;
      }
      SelfUserGame = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        SelfUserGame = (__int64)NetworkManager_TypeInfo;
      }
      v9 = this->fields.shopEntity;
      if ( !v9 )
        goto LABEL_68;
      v10 = v9->fields.itemIds;
      if ( !v10 )
        goto LABEL_68;
      if ( !v10->max_length )
        goto LABEL_69;
      if ( !MasterData_object )
        goto LABEL_68;
      SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)MasterData_object,
                                *(_QWORD *)(*(_QWORD *)(SelfUserGame + 184) + 64LL),
                                v10->m_Items[1],
                                0LL);
      if ( !SelfUserGame || !v7 )
        goto LABEL_68;
      if ( !v7->max_length )
        goto LABEL_69;
      v11 = *(_DWORD *)(SelfUserGame + 28);
LABEL_49:
      v7->m_Items[1] = v11;
      return v7;
    case 0xA:
      SelfUserGame = sub_1C21EE0(int___TypeInfo, 1LL);
      if ( !v6 )
        goto LABEL_68;
      v7 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_68;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_69;
      v11 = v6[47];
      goto LABEL_49;
    default:
      ItemCount = ShopEntity__GetItemCount(this->fields.shopEntity, 0LL);
      return (System_Int32_array *)sub_1C21EE0(int___TypeInfo, ItemCount);
  }
}


void __fastcall ShopBuyItemConfirmMenu__Init(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *nameLabel; // x0
  UILabel_o *messageLabel; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  ShopBuyItemConfirmMenu_o *v11; // x0
  const MethodInfo *v12; // x3
  ShopBuyItemConfirmMenu_o *v13; // x0
  const MethodInfo *v14; // x3
  ShopBuyItemConfirmMenu_o *v15; // x0
  const MethodInfo *v16; // x3

  if ( (byte_4BD8921 & 1) == 0 )
  {
    sub_1C21E38(&ShopBuyItemUtility_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8921 = 1;
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
        sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.shopEntity, 0LL, v5, v6, v7, v8, v9, v10),
        (nameLabel = (UILabel_o *)this->fields.infoButton) == 0LL)
    || (nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL)) == 0LL )
  {
LABEL_14:
    sub_1C22094(nameLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText(v11, this->fields.presentAheadLabel, (System_String_o *)StringLiteral_1/*""*/, v12);
  ShopBuyItemConfirmMenu__SetLabelActive(v13, this->fields.LineText, 0, v14);
  ShopBuyItemConfirmMenu__SetLabelActive(v15, this->fields.LineText2digit, 0, v16);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__OnClickCancel(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BD893B & 1) == 0 )
  {
    sub_1C21E38(&Method_ShopBuyItemConfirmMenu_OnClickCancel__);
    byte_4BD893B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ShopBuyItemConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_ShopBuyItemConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    ShopBuyItemConfirmMenu__CallOnDecide(this, 0, v5);
  }
}


void __fastcall ShopBuyItemConfirmMenu__OnClickDecide(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  struct ShopEntity_o *shopEntity; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  NoTitleDialog_o *noTitleDialog; // x20
  System_String_o *v8; // x21
  Il2CppObject *Name; // x0
  System_String_o *v10; // x21
  System_String_o *v11; // x22
  System_String_o *v12; // x23
  System_Action_bool__o *v13; // x24
  const MethodInfo *v14; // x3
  struct ShopEntity_o *v15; // x8
  System_String_o *MaxAlertMessage; // x20
  Il2CppObject *v17; // x21
  System_Action_o *v18; // x22
  UILabel_o *warningLabel; // x20
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  const MethodInfo *v24; // x2
  int32_t check; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_4BD8938 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_ShopBuyItemConfirmMenu_EndMaxErrorDialog__);
    sub_1C21E38(&Method_ShopBuyItemConfirmMenu_OnClickDecide__);
    sub_1C21E38(&Method_ShopBuyItemConfirmMenu_ReturnWarning__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_9496/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/);
    sub_1C21E38(&StringLiteral_12223/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/);
    sub_1C21E38(&StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8938 = 1;
  }
  check = 0;
  if ( this->fields.state != 2 )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ShopMaster___);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_35;
  if ( shopEntity->fields.purchaseType != 17 )
  {
    if ( !Instance )
      goto LABEL_35;
    if ( ShopMaster__PurchaseCloseEventShop((ShopMaster_o *)Instance, shopEntity, 0LL) )
    {
      v5 = Method_ShopBuyItemConfirmMenu_OnClickDecide__;
      if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C21E50(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0LL);
      Instance = this->fields.shopEntity;
      if ( Instance )
      {
        noTitleDialog = this->fields.noTitleDialog;
        v8 = (System_String_o *)*((_QWORD *)Instance + 21);
        Name = (Il2CppObject *)ShopEntity__getName((ShopEntity_o *)Instance, 0LL);
        v10 = System_String__Format(v8, Name, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9496/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, 0LL);
        v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
        v13 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(v13, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_ReturnWarning__, 0LL);
        if ( noTitleDialog )
        {
          NoTitleDialog__Open(noTitleDialog, v10, v11, v12, v13, 0LL);
          return;
        }
      }
LABEL_35:
      sub_1C22094(Instance, shopEntity);
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
      v15 = this->fields.shopEntity;
      if ( !v15 )
        goto LABEL_35;
      MaxAlertMessage = ShopBuyItemConfirmMenu__GetMaxAlertMessage(this, v15->fields.shopType, check, v14);
      v17 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v18 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndMaxErrorDialog__, 0LL);
      if ( !v17 )
        goto LABEL_35;
      CommonUI__OpenNotificationDialog(
        (CommonUI_o *)v17,
        (System_String_o *)StringLiteral_1/*""*/,
        MaxAlertMessage,
        v18,
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
    v22 = Method_ShopBuyItemConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v22 = (_QWORD *)sub_1C21E50(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
    v23 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v22, v22[4]);
    OverwriteAssetSoundName__PlaySystemSe(v23, this->fields.decideSe, 0, 0LL);
    ShopBuyItemConfirmMenu__CallOnDecide(this, 1, v24);
    return;
  }
  Instance = this->fields.presentAheadLabel;
  if ( !Instance )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  warningLabel = this->fields.warningLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12223/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_35;
  UILabel__set_text(warningLabel, (System_String_o *)Instance, 0LL);
  v20 = Method_ShopBuyItemConfirmMenu_OnClickDecide__;
  if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1C21E50(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
  v21 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0, 0LL);
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
    sub_1C22094(this, shopEntity);
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

  if ( (byte_4BD894A & 1) == 0 )
  {
    sub_1C21E38(&Method_ShopBuyItemConfirmMenu_OnClickReset__);
    byte_4BD894A = 1;
  }
  v3 = Method_ShopBuyItemConfirmMenu_OnClickReset__;
  if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickReset__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_ShopBuyItemConfirmMenu_OnClickReset__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
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
  struct ShopEntity_o **p_shopEntity; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct ShopEntity_o *v38; // x8
  struct CommonConsumeEntity_array *CommonConsumeEntities; // x1
  struct CommonConsumeEntity_array **p_commonConsumeEntities; // x0
  System_String_o *Name; // x23
  System_String_o *v42; // x23
  const MethodInfo *v43; // x3
  UISprite_o *decideButtonImg; // x24
  ShopBuyItemConfirmMenu_o *v45; // x0
  bool IsPreparation; // w0
  bool v47; // w26
  bool v48; // w25
  const MethodInfo *v49; // x4
  UserGameEntity_o *SelfUserGame; // x24
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x3
  ShopEntity_o *v53; // x27
  UILabel_o *textOnMask; // x28
  const MethodInfo *v55; // x3
  ShopEntity_o *v56; // x26
  UISprite_o *possessionSprite; // x27
  bool v58; // w0
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x3
  bool IsNotHavingShopItemReceived; // w0
  bool v62; // w22
  const MethodInfo *v63; // x5
  const MethodInfo *v64; // x4
  bool IsBuyable; // w20
  const MethodInfo *v66; // x2
  const MethodInfo *v67; // x3
  const MethodInfo *v68; // x1
  const MethodInfo *v69; // x4
  const MethodInfo *v70; // x3
  const MethodInfo *v71; // x5
  UISprite_o *itemMaskeSprite; // x20
  ShopBuyItemConfirmMenu_o *v73; // x0
  const MethodInfo *v74; // x3
  _BOOL8 IsShowMask; // x0
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x3
  System_Action_o *v78; // x20
  System_String_o *itemName; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4BD8922 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_ShopBuyItemConfirmMenu_EndOpen__);
    sub_1C21E38(&ShopBuyItemConfirmMenu_TypeInfo);
    sub_1C21E38(&ShopBuyItemUtility_TypeInfo);
    byte_4BD8922 = 1;
  }
  message = 0LL;
  itemName = 0LL;
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1C21DDC(
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
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.shopEntity,
      (int64_t)shopEntity,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    this->fields.onReset = onReset;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.onReset, (int64_t)onReset, v24, v25, v26, v27, v28, v29);
    v38 = this->fields.shopEntity;
    this->fields.shopState = shopState;
    this->fields.decideSe = se;
    if ( !v38 )
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
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)p_commonConsumeEntities,
      (int64_t)CommonConsumeEntities,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
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
          v42 = (System_String_o *)gameObject;
          UICrossNarrowLabel__SetCrossNarrowText(this->fields.nameLabel, (System_String_o *)gameObject, 0LL);
          decideButtonImg = this->fields.decideButtonImg;
          v45 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
            v45 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          }
          ShopBuyItemConfirmMenu__SetSpriteName(
            v45,
            decideButtonImg,
            (System_String_o *)v45->fields.decideButtonImg->monitor,
            v43);
          gameObject = (UnityEngine_GameObject_o *)*p_shopEntity;
          if ( *p_shopEntity )
          {
            IsPreparation = ShopEntity__IsPreparation((ShopEntity_o *)gameObject, &message, &itemName, 0LL);
            v47 = IsPreparation;
            v48 = IsPreparation;
            ShopBuyItemConfirmMenu__SetMessageLabel(this, this->fields.shopEntity, IsPreparation, message, v49);
            SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
            ShopBuyItemConfirmMenu__SetBandSprite(this, this->fields.shopEntity, v51);
            ShopBuyItemConfirmMenu__SetTextOnMask(this, this->fields.shopEntity, v47, v52);
            v53 = this->fields.shopEntity;
            textOnMask = this->fields.textOnMask;
            if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
            ShopBuyItemUtility__SetAddTextOnMask(v53, textOnMask, 0LL);
            ShopBuyItemConfirmMenu__SetNumText(this, this->fields.shopEntity, v47, v55);
            v56 = this->fields.shopEntity;
            if ( v56 )
            {
              possessionSprite = this->fields.possessionSprite;
              v58 = ShopEntity__checkFlag(this->fields.shopEntity, 0x4000, 0LL);
              ShopBuyItemUtility__SetShopHaveStatusIcon(v56, possessionSprite, v58, 0LL);
              ShopBuyItemConfirmMenu__SetPossessionInfo(this, shopEntity, v59);
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
                  v62 = IsNotHavingShopItemReceived;
                  ShopBuyItemConfirmMenu__SetExtensionText(
                    this,
                    this->fields.shopEntity,
                    IsNotHavingShopItemReceived,
                    v60);
                  ShopBuyItemConfirmMenu__SetPriceInfo(this, this->fields.shopEntity, v48, buttonSpriteId, v62, v63);
                  IsBuyable = ShopBuyItemConfirmMenu__GetIsBuyable(
                                this,
                                this->fields.shopEntity,
                                v48,
                                SelfUserGame,
                                v64);
                  ShopBuyItemConfirmMenu__SetDefaultButton(this, IsBuyable, v66);
                  ShopBuyItemConfirmMenu__SetAheadText(this, this->fields.shopEntity, IsBuyable, v67);
                  ShopBuyItemConfirmMenu__SetWindowSize(this, v68);
                  ShopBuyItemConfirmMenu__SetWarningLabel(this, this->fields.shopEntity, v48, SelfUserGame, v69);
                  ShopBuyItemConfirmMenu__SetItemIcon(this, this->fields.shopEntity, v48, v70);
                  ShopBuyItemConfirmMenu__SetNameText(this, this->fields.shopEntity, v48, v42, itemName, v71);
                  itemMaskeSprite = this->fields.itemMaskeSprite;
                  IsShowMask = ShopBuyItemConfirmMenu__GetIsShowMask(v73, this->fields.shopEntity, v48, v74);
                  ShopBuyItemConfirmMenu__SetSpriteActive(
                    (ShopBuyItemConfirmMenu_o *)IsShowMask,
                    itemMaskeSprite,
                    IsShowMask,
                    v76);
                  ShopBuyItemConfirmMenu__SetInfoButton(this, this->fields.shopEntity, v48, v77);
                  this->fields.state = 1;
                  v78 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                  System_Action___ctor(v78, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndOpen__, 0LL);
                  BaseDialog__Open((BaseDialog_o *)this, v78, 0, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_1C22094(gameObject, v31);
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
  struct ShopEntity_o *Shop_k__BackingField; // x23
  int v10; // w24
  ShopEntity_o *v11; // x0
  Il2CppObject *Instance; // x0
  System_String_o *warningMessage; // x24
  CommonUI_o *v14; // x22
  Il2CppObject *Name; // x0
  System_String_o *v16; // x23
  System_String_o *v17; // x24
  System_String_o *v18; // x25
  System_Action_bool__o *v19; // x26
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_String_o *itemName; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4BD8946 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_ShopBuyItemConfirmMenu_ReturnWarningRarePri__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C21E38(&StringLiteral_19959/*"freeShopCondId"*/);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C21E38(&StringLiteral_11329/*"RETURN_RARE_PRI_SHOP_DECIDE_BUTTON"*/);
    byte_4BD8946 = 1;
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
          v10 = (int)this;
          if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                  (System_Collections_Generic_Dictionary_object__object__o *)Shop_k__BackingField->fields.script,
                  (Il2CppObject *)StringLiteral_19959/*"freeShopCondId"*/,
                  (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
            goto LABEL_13;
          v11 = item->fields._Shop_k__BackingField;
          if ( v11 )
            LODWORD(v11) = ShopEntity__IsSoldOut(v11, 0LL);
          if ( ((v10 | (unsigned int)v11) & 1) != 0
            || !ShopEntity__IsAfterTheFreeShopReleaseDate(Shop_k__BackingField, 0LL)
            || ShopEntity__IsFulFilledFreeExchangeCondition(Shop_k__BackingField, 0LL) )
          {
LABEL_13:
            ActionExtensions__Call(onChecked, 0LL);
            return;
          }
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          warningMessage = Shop_k__BackingField->fields.warningMessage;
          v14 = (CommonUI_o *)Instance;
          Name = (Il2CppObject *)ShopEntity__getName(Shop_k__BackingField, 0LL);
          v16 = System_String__Format(warningMessage, Name, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11329/*"RETURN_RARE_PRI_SHOP_DECIDE_BUTTON"*/, 0LL);
          v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
          v19 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo);
          System_Action_bool____ctor(v19, (Il2CppObject *)v8, Method_ShopBuyItemConfirmMenu_ReturnWarningRarePri__, 0LL);
          if ( v14 )
          {
            CommonUI__OpenNoTitleDialog(v14, v16, v17, v18, v19, 0LL);
            v8->fields.onChecked = onChecked;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v8->fields.onChecked,
              (int64_t)onChecked,
              v20,
              v21,
              v22,
              v23,
              v24,
              v25);
            v8->fields.onCloseReturnWarning = onCloseReturnWarning;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v8->fields.onCloseReturnWarning,
              (int64_t)onCloseReturnWarning,
              v26,
              v27,
              v28,
              v29,
              v30,
              v31);
            return;
          }
        }
      }
    }
    sub_1C22094(this, item);
  }
}


void __fastcall ShopBuyItemConfirmMenu__PlayShowInfomationSound(
        ShopBuyItemConfirmMenu_o *this,
        int32_t seKind,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4BD8941 & 1) == 0 )
  {
    sub_1C21E38(&Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__);
    byte_4BD8941 = 1;
  }
  if ( (seKind & 0x80000000) == 0 )
  {
    v4 = Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__;
    if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C21E50(Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
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
    sub_1C22094(0LL, isDecide);
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
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  Il2CppObject *Instance; // x19
  System_Action_o *v15; // x20

  if ( (byte_4BD893C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_ShopBuyItemConfirmMenu___c__DisplayClass115_0__ReturnWarningRarePri_b__0__);
    sub_1C21E38(&ShopBuyItemConfirmMenu___c__DisplayClass115_0_TypeInfo);
    byte_4BD893C = 1;
  }
  v5 = sub_1C22084(ShopBuyItemConfirmMenu___c__DisplayClass115_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13),
        *(_BYTE *)(v5 + 24) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_ShopBuyItemConfirmMenu___c__DisplayClass115_0__ReturnWarningRarePri_b__0__,
          0LL),
        !Instance) )
  {
    sub_1C22094(v6, v7);
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
  if ( (byte_4BD892E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&ShopBuyItemConfirmMenu_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_10691/*"PURCHASE_AFTER_COSTUME"*/);
    sub_1C21E38(&StringLiteral_10696/*"PURCHASE_AFTER_USER_ITEM"*/);
    sub_1C21E38(&StringLiteral_10693/*"PURCHASE_AFTER_ITEM_SET"*/);
    sub_1C21E38(&StringLiteral_8435/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/);
    sub_1C21E38(&StringLiteral_10694/*"PURCHASE_AFTER_PRESENT_BOX"*/);
    sub_1C21E38(&StringLiteral_10692/*"PURCHASE_AFTER_EVENT_SVT_GET"*/);
    sub_1C21E38(&StringLiteral_10698/*"PURCHASE_AFTER_USER_SVT_COIN_PERIOD"*/);
    sub_1C21E38(&StringLiteral_10695/*"PURCHASE_AFTER_QP"*/);
    sub_1C21E38(&StringLiteral_10697/*"PURCHASE_AFTER_USER_SVT_COIN"*/);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD892E = 1;
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_49;
          MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
          Instance = (DataManager_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
          if ( !MasterData_object )
            goto LABEL_49;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        &entity,
                                        (int32_t)Instance,
                                        (const MethodInfo_325BE14 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
                v11 = &StringLiteral_10698/*"PURCHASE_AFTER_USER_SVT_COIN_PERIOD"*/;
              else
                v11 = &StringLiteral_10697/*"PURCHASE_AFTER_USER_SVT_COIN"*/;
            }
            else
            {
              presentAheadLabel = v6->fields.presentAheadLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v11 = &StringLiteral_10696/*"PURCHASE_AFTER_USER_ITEM"*/;
            }
LABEL_11:
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)*v11, 0LL);
            if ( presentAheadLabel )
            {
              v12 = (System_String_o *)Instance;
              v13 = presentAheadLabel;
LABEL_13:
              UILabel__set_text(v13, v12, 0LL);
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
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10695/*"PURCHASE_AFTER_QP"*/, 0LL);
            if ( v18 )
            {
              v12 = (System_String_o *)Instance;
              v13 = v18;
              goto LABEL_13;
            }
LABEL_49:
            sub_1C22094(Instance, v8);
          }
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8435/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/, 0LL);
          if ( !v18 )
            goto LABEL_49;
          UILabel__set_text(v18, (System_String_o *)Instance, 0LL);
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
            *(System_String_o **)&v21->fields.decideButtonImg->fields.m_CachedPtr,
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
          v11 = &StringLiteral_10693/*"PURCHASE_AFTER_ITEM_SET"*/;
          goto LABEL_11;
        case 8:
          presentAheadLabel = v6->fields.presentAheadLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v11 = &StringLiteral_10692/*"PURCHASE_AFTER_EVENT_SVT_GET"*/;
          goto LABEL_11;
        default:
          if ( purchaseType != 14 )
            return;
          presentAheadLabel = v6->fields.presentAheadLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v11 = &StringLiteral_10691/*"PURCHASE_AFTER_COSTUME"*/;
          goto LABEL_11;
      }
    }
    else if ( (unsigned int)purchaseType <= 0x15 && ((1 << purchaseType) & 0x290000) != 0 )
    {
LABEL_8:
      presentAheadLabel = v6->fields.presentAheadLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = &StringLiteral_10694/*"PURCHASE_AFTER_PRESENT_BOX"*/;
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
  ShopBuyItemConfirmMenu_o *v6; // x0
  const MethodInfo *v7; // x3
  UISprite_o *bandSprite; // x1
  __int64 *v9; // x8

  v5 = this;
  if ( (byte_4BD892F & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_20958/*"img_txt_shop"*/);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C21E38(&StringLiteral_20943/*"img_txt_quest"*/);
    byte_4BD892F = 1;
  }
  if ( !shopEntity )
    sub_1C22094(this, shopEntity);
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
      v9 = &StringLiteral_20943/*"img_txt_quest"*/;
      goto LABEL_9;
    case 7:
    case 9:
LABEL_6:
      ShopBuyItemConfirmMenu__SetSpriteActive(this, v5->fields.bandSprite, 1, v3);
      bandSprite = v5->fields.bandSprite;
      v9 = &StringLiteral_20958/*"img_txt_shop"*/;
LABEL_9:
      ShopBuyItemConfirmMenu__SetSpriteName(v6, bandSprite, (System_String_o *)*v9, v7);
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

  if ( (byte_4BD8935 & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu_o *)sub_1C21E38(&AtlasManager_TypeInfo);
    byte_4BD8935 = 1;
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
      sub_1C22094(this, itemIcon);
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

  if ( (byte_4BD8934 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ShopBuyItemConfirmMenu_TypeInfo);
    sub_1C21E38(&StringLiteral_5759/*"EVENT_ITEM_NEED_INFO"*/);
    byte_4BD8934 = 1;
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
      v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)itemIcon, 0LL, 0LL);
      if ( commonConsumeEnt && !v11 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5759/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
        num = commonConsumeEnt->fields.num;
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v13, v14, v15);
        Name = (Il2CppObject *)CommonConsumeEntity__GetName(commonConsumeEnt, 0LL);
        shopEntity = System_String__Format_63129848(v12, v16, Name, 0LL);
        if ( !priceDataLabel )
          goto LABEL_22;
        UILabel__set_text(priceDataLabel, shopEntity, 0LL);
        v20 = ShopBuyItemConfirmMenu_TypeInfo;
        if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
          v20 = ShopBuyItemConfirmMenu_TypeInfo;
        }
        UILabel__SetCondensedScale(priceDataLabel, v20->static_fields->PRICE_DATA_LABEL_MAX_WIDTH, 0, 0LL);
        shopEntity = (System_String_o *)this->fields.shopEntity;
        if ( !shopEntity
          || (PriceIcon = ShopEntity__GetPriceIcon((ShopEntity_o *)shopEntity, 0LL),
              v22 = commonConsumeEnt->fields.num,
              v23 = PriceIcon,
              shopEntity = (System_String_o *)CommonConsumeEntity__GetUserHasNum(commonConsumeEnt, 0LL),
              !priceIconLabel) )
        {
LABEL_22:
          sub_1C22094(shopEntity, v19);
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
  UISprite_o *deceideBtnSprite; // x21
  ShopBuyItemConfirmMenu_c *v9; // x0
  System_String_o *VALENTINE_BTN_NAME; // x22
  System_String_o *v11; // x20
  System_String_o *v12; // x0
  System_String_o *v13; // x20
  UISprite_o *v14; // x20
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  v7 = this;
  v15 = buttonSpriteId;
  if ( (byte_4BD8936 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&EventRewardRootComponent_TypeInfo);
    sub_1C21E38(&ShopBuyItemConfirmMenu_TypeInfo);
    sub_1C21E38(&StringLiteral_16399/*"_"*/);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C21E38(&StringLiteral_17923/*"btn_txt_trade"*/);
    byte_4BD8936 = 1;
  }
  if ( !shopEntity )
    goto LABEL_17;
  if ( shopEntity->fields.payType == 6 )
  {
    if ( !buttonSpriteId )
      goto LABEL_11;
    deceideBtnSprite = v7->fields.deceideBtnSprite;
    v9 = ShopBuyItemConfirmMenu_TypeInfo;
    if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
      v9 = ShopBuyItemConfirmMenu_TypeInfo;
    }
    VALENTINE_BTN_NAME = v9->static_fields->VALENTINE_BTN_NAME;
    v11 = System_Int32__ToString((int)shopEntity + 24, 0LL);
    v12 = System_Int32__ToString((int32_t)&v15, 0LL);
    v13 = System_String__Concat_63128740(VALENTINE_BTN_NAME, v11, (System_String_o *)StringLiteral_16399/*"_"*/, v12, 0LL);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    if ( !EventRewardRootComponent__setRewardInfoImg(deceideBtnSprite, v13, 0LL) )
    {
LABEL_11:
      v14 = v7->fields.deceideBtnSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCommon(v14, 0LL);
      this = (ShopBuyItemConfirmMenu_o *)v7->fields.deceideBtnSprite;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17923/*"btn_txt_trade"*/, 0LL);
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
      sub_1C22094(this, shopEntity);
    }
  }
}


void __fastcall ShopBuyItemConfirmMenu__SetDefaultButton(
        ShopBuyItemConfirmMenu_o *this,
        bool isCan,
        const MethodInfo *method)
{
  UnityEngine_Object_o *shopResetButton; // x21
  __int64 v6; // x1
  ShopEntity_o *Master_object; // x0
  int32_t v8; // w21
  struct ShopEntity_o *shopEntity; // x8
  Il2CppObject *v10; // x22
  struct ShopEntity_o *v11; // x8
  int32_t resetLimitNum; // w8
  Il2CppObject *v13; // x22
  unsigned int v14; // w21
  UISprite_o *shopResetButtonSprite; // x22
  __int64 v16; // x1
  ShopResetEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BD8948 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ShopResetMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserShopMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_17917/*"btn_txt_stock_reset"*/);
    byte_4BD8948 = 1;
  }
  entity = 0LL;
  shopResetButton = (UnityEngine_Object_o *)this->fields.shopResetButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shopResetButton, 0LL, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ShopEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !Master_object )
      goto LABEL_65;
    if ( this->fields.shopState != 18 )
      goto LABEL_50;
    if ( !this->fields.shopEntity )
      goto LABEL_65;
    v8 = *(&Master_object->fields.defaultLimitCount + 1);
    if ( !ShopEntity__IsSoldOut(this->fields.shopEntity, 0LL) )
      goto LABEL_50;
    Master_object = this->fields.shopEntity;
    if ( !Master_object )
      goto LABEL_65;
    if ( ShopEntity__GetIsNotHavingShopItemReceived(Master_object, 0LL) )
      goto LABEL_50;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ShopEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ShopResetMaster___);
    shopEntity = this->fields.shopEntity;
    if ( !shopEntity || !Master_object )
      goto LABEL_65;
    if ( ShopResetMaster__TryGetEntity(
           (ShopResetMaster_o *)Master_object,
           &entity,
           shopEntity->fields.baseShopId,
           v8,
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
      v10 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserShopMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD6FF5 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD6FF5 = 1;
      }
      Master_object = (ShopEntity_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = (ShopEntity_o *)NetworkManager_TypeInfo;
      }
      v11 = this->fields.shopEntity;
      if ( !v11 )
        goto LABEL_65;
      if ( !v10 )
        goto LABEL_65;
      Master_object = (ShopEntity_o *)UserShopMaster__GetEntityDefinitely(
                                        (UserShopMaster_o *)v10,
                                        *((_QWORD *)Master_object[1].monitor + 8),
                                        v11->fields.baseShopId,
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
        v13 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BD6FF5 )
        {
          sub_1C21E38(&NetworkManager_TypeInfo);
          byte_4BD6FF5 = 1;
        }
        Master_object = (ShopEntity_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Master_object = (ShopEntity_o *)NetworkManager_TypeInfo;
        }
        if ( !v13 )
          goto LABEL_65;
        Master_object = (ShopEntity_o *)UserItemMaster__GetEntityDefinitely(
                                          (UserItemMaster_o *)v13,
                                          *((_QWORD *)Master_object[1].monitor + 8),
                                          v8,
                                          0LL);
        if ( !Master_object )
          goto LABEL_65;
        if ( *(&Master_object->fields.eventId + 1) <= 0 )
          v14 = 3;
        else
          v14 = 0;
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
    v14 = 3;
LABEL_56:
    shopResetButtonSprite = this->fields.shopResetButtonSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(shopResetButtonSprite, (System_String_o *)StringLiteral_17917/*"btn_txt_stock_reset"*/, 0LL);
    Master_object = (ShopEntity_o *)this->fields.shopResetButton;
    if ( Master_object )
    {
      ((void (__fastcall *)(ShopEntity_o *, _QWORD, __int64, void *))Master_object->klass[1]._1.events)(
        Master_object,
        v14,
        1LL,
        Master_object->klass[1]._1.properties);
      goto LABEL_60;
    }
LABEL_65:
    sub_1C22094(Master_object, v6);
  }
LABEL_60:
  Master_object = (ShopEntity_o *)this->fields.decideButton;
  if ( !Master_object )
    goto LABEL_65;
  if ( isCan )
    v16 = 0LL;
  else
    v16 = 3LL;
  ((void (__fastcall *)(ShopEntity_o *, __int64, __int64, void *))Master_object->klass[1]._1.events)(
    Master_object,
    v16,
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
  bool v7; // w8
  UILabel_o *extensionInfoLabel; // x21
  ShopBuyItemConfirmMenu_o *v9; // x0
  const MethodInfo *v10; // x3

  v6 = this;
  if ( (byte_4BD8932 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C21E38(&StringLiteral_9478/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/);
    byte_4BD8932 = 1;
  }
  if ( !shopEntity )
    sub_1C22094(this, shopEntity);
  if ( shopEntity->fields.payType != 6 )
    goto LABEL_10;
  this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetItemCount(shopEntity, 0LL);
  v7 = (int)this < 2 && isNotHavingShopItemReceived;
  if ( (int)this <= 1 && isNotHavingShopItemReceived )
  {
    extensionInfoLabel = v6->fields.extensionInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9478/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/, 0LL);
    ShopBuyItemConfirmMenu__SetLabelText(v9, extensionInfoLabel, (System_String_o *)v9, v10);
LABEL_10:
    v7 = isNotHavingShopItemReceived;
  }
  ShopBuyItemConfirmMenu__SetLabelActive(this, v6->fields.extensionInfoLabel, v7, method);
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
  if ( (byte_4BD8927 & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu_o *)sub_1C21E38(&StringLiteral_9444/*"NONE"*/);
    byte_4BD8927 = 1;
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
    sub_1C22094(this, shopEntity);
  }
  if ( purchaseType == 1 || purchaseType == 4 )
    goto LABEL_18;
LABEL_16:
  if ( !System_String__IsNullOrEmpty(shopEntity->fields.infoMessage, 0LL)
    && System_String__op_Inequality(shopEntity->fields.infoMessage, (System_String_o *)StringLiteral_9444/*"NONE"*/, 0LL) )
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
  sub_1C21DDC(
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
  UnityEngine_Object_o *chocolateSprite; // x22
  UnityEngine_Component_o *gameObject; // x0
  __int64 v9; // x1
  ItemIconComponent_o *itemIcon; // x21
  int32_t purchaseType; // w22
  Il2CppObject *MasterData_object; // x21
  UnityEngine_Object_o *v13; // x20
  UnityEngine_GameObject_o *v14; // x19
  ServantEntity_o *v15; // [xsp+0h] [xbp-40h] BYREF
  int32_t imageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BD8928 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8928 = 1;
  }
  v15 = 0LL;
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
      sub_1C22094(gameObject, v9);
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
    gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_32;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
    gameObject = (UnityEngine_Component_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
    if ( !MasterData_object )
      goto LABEL_32;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
           (Il2CppObject **)&v15,
           (int32_t)gameObject,
           (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      v13 = (UnityEngine_Object_o *)this->fields.chocolateSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.chocolateSprite;
        if ( !gameObject )
          goto LABEL_32;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( !v15 )
          goto LABEL_32;
        v14 = (UnityEngine_GameObject_o *)gameObject;
        gameObject = (UnityEngine_Component_o *)ServantEntity__get_IsChocolateSvtEquip(v15, 0LL);
        if ( !v14 )
          goto LABEL_32;
        UnityEngine_GameObject__SetActive(v14, (unsigned __int8)gameObject & 1, 0LL);
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

  if ( (byte_4BD8923 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8923 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_1C22094(gameObject, v7);
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

  if ( (byte_4BD8924 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8924 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1C22094(v6, v7);
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
  System_String_o *v9; // x0
  const MethodInfo *v10; // x3
  UILabel_o *messageLabel; // x19
  UILabel_o *v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x1
  System_String_o *detail; // x20
  System_String_o *v16; // x0
  System_String_o *v17; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *message; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  message = preparationMessage;
  if ( (byte_4BD892C & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_16122/*"[000000]"*/);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C21E38(&StringLiteral_16123/*"[000000]？"*/);
    byte_4BD892C = 1;
  }
  v17 = 0LL;
  if ( !shopEntity )
    sub_1C22094(this, shopEntity);
  if ( !isInPreparation )
  {
    if ( shopEntity->fields.purchaseType != 14
      || !ShopEntity__IsSoldOut(shopEntity, 0LL)
      || !ShopEntity__TryGetClosedMessage(shopEntity, &message, &v17, 0LL) )
    {
      messageLabel = v8->fields.messageLabel;
      detail = shopEntity->fields.detail;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = LocalizationManager__ReplaceCommonTag(detail, 0, 0LL);
      v16 = (System_String_o *)StringLiteral_16122/*"[000000]"*/;
      goto LABEL_16;
    }
    messageLabel = v8->fields.messageLabel;
    v14 = message;
LABEL_15:
    v16 = (System_String_o *)StringLiteral_16122/*"[000000]"*/;
LABEL_16:
    v9 = System_String__Concat_63115476(v16, v14, 0LL);
    v12 = messageLabel;
    v13 = v9;
    goto LABEL_17;
  }
  v9 = (System_String_o *)ShopEntity__checkFlag(shopEntity, 8, 0LL);
  messageLabel = v8->fields.messageLabel;
  if ( ((unsigned __int8)v9 & 1) == 0 )
  {
    v14 = preparationMessage;
    goto LABEL_15;
  }
  v12 = messageLabel;
  v13 = (System_String_o *)StringLiteral_16123/*"[000000]？"*/;
LABEL_17:
  ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)v9, v12, v13, v10);
}


void __fastcall ShopBuyItemConfirmMenu__SetNameText(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        System_String_o *replacedName,
        System_String_o *preparationItemName,
        const MethodInfo *method)
{
  System_String_o *IsNullOrEmpty; // x0
  __int64 v12; // x1
  System_String_o *v13; // x1
  struct UICrossNarrowLabel_o *nameTextLabel; // x19

  if ( (byte_4BD8929 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_25917/*"？"*/);
    byte_4BD8929 = 1;
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
    sub_1C22094(IsNullOrEmpty, v12);
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
  v13 = (System_String_o *)StringLiteral_25917/*"？"*/;
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
  if ( (byte_4BD8931 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C21E38(&StringLiteral_12233/*"SHOP_BUY_ITEM_HOLD"*/);
    byte_4BD8931 = 1;
  }
  if ( !isInPreparation )
  {
    if ( shopEntity )
      goto LABEL_8;
LABEL_13:
    sub_1C22094(this, shopEntity);
  }
  if ( !shopEntity )
    goto LABEL_13;
  v7 = ShopEntity__checkFlag(shopEntity, 2, 0LL);
  if ( v7 )
    goto LABEL_12;
LABEL_8:
  v7 = ShopEntity__checkHoldDisp(shopEntity, 0LL);
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
  v10 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12233/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText(v10, numTitleLabel, (System_String_o *)v10, v11);
  ShopBuyItemConfirmMenu__SetLabelActive(v12, v6->fields.numTextLabel, 1, v13);
  numTextLabel = v6->fields.numTextLabel;
  HoldCount = ShopEntity__getHoldCount(shopEntity, 0LL);
  NumberFormat = (ShopBuyItemConfirmMenu_o *)LocalizationManager__GetNumberFormat(HoldCount, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText(NumberFormat, numTextLabel, (System_String_o *)NumberFormat, v17);
}


void __fastcall ShopBuyItemConfirmMenu__SetPossessionInfo(
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

  if ( (byte_4BD8949 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&ShopBuyItemUtility_TypeInfo);
    byte_4BD8949 = 1;
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
                v15 = 0;
                if ( purchaseType <= 0x15 && ((1 << purchaseType) & 0x200110) != 0 )
                {
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
                  TargetId = (Il2CppObject *)ShopEntity__get_TargetId(shopEntity, 0LL);
                  if ( !Master_object )
                    goto LABEL_42;
                  if ( DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                         &entity,
                         (int32_t)TargetId,
                         (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
                        *(_QWORD *)&v28.fields.currentCryptoKey = klass;
                        *(_QWORD *)&v28.fields.fakeValue = monitor;
                        v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v28, 0LL);
                        goto LABEL_38;
                      }
LABEL_42:
                      sub_1C22094(TargetId, v13);
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
                IsPossessionInfoDisp = ShopEntity__IsPossessionInfoDisp(shopEntity, 0LL);
                if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
                ShopBuyItemUtility__SetPossessionInfo(v15, v19, v20, v21, v24, v22, v23, v25, IsPossessionInfoDisp, 0LL);
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
  __int64 eventItemIcon; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x5
  __int64 v12; // x21
  const MethodInfo *v13; // x1
  unsigned __int64 i; // x23
  struct System_Int32_array *v15; // x8
  __int64 v16; // x24
  struct UILabel_array *priceDataLabels; // x8
  struct UIIconLabel_array *priceIconLabels; // x8
  struct UILabel_array *v19; // x8
  struct ItemIconComponent_array *eventItemIcons; // x8
  struct UILabel_array *v21; // x8
  UILabel_o *v22; // x25
  System_String_o *v23; // x26
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  struct UIIconLabel_array *v27; // x8
  UIIconLabel_o *v28; // x25
  int32_t v29; // w26
  struct UILabel_o *priceDataLabel; // x22
  __int64 *v31; // x8
  System_String_o *v32; // x0
  System_String_o *v33; // x1
  UILabel_o *v34; // x0
  struct System_Int32_array *v35; // x8
  Il2CppObject *v36; // x0
  UILabel_o *v37; // x23
  Il2CppObject *v38; // x22
  __int64 *v39; // x8
  struct System_Int32_array *v40; // x8
  Il2CppObject *v41; // x0
  UIIconLabel_o *v42; // x23
  int32_t v43; // w24
  UILabel_o *v44; // x23
  UIIconLabel_o *v45; // x23
  int32_t v46; // w24
  int32_t Price; // w21
  double v48; // d0
  int v49; // w21
  struct System_Int32_array *v50; // x8
  UIIconLabel_o *v51; // x19
  int32_t v52; // w22
  UILabel_o *priceFreeDataLabel; // x19
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  __int64 v55; // x9
  EventRewardRootComponent_c *v56; // x0
  int32_t *p_AnotherPayUsedItemId_k__BackingField; // x8
  _BOOL8 IsSetStrikethrough; // x0
  const MethodInfo *v59; // x3
  __int64 v60; // x8
  __int64 v61; // x8
  __int64 v62; // x9
  __int64 v63; // x10
  __int64 j; // x20
  struct UILabel_array *v65; // x11
  unsigned __int64 max_length; // x12
  unsigned __int64 v67; // x10
  struct UIIconLabel_array *v68; // x11
  unsigned __int64 v69; // x12
  UIIconLabel_o *v70; // x2
  struct ItemIconComponent_array *v71; // x11
  unsigned __int64 v72; // x12
  ItemIconComponent_o *v73; // x3
  __int64 v74; // x10
  struct System_Int32_array *itemIds; // x8
  int32_t v76; // w23
  Il2CppObject *Entity; // x23
  UILabel_o *v78; // x22
  System_String_o *v79; // x24
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  UILabel_o *v83; // x22
  UIIconLabel_o *priceIconLabel; // x22
  int32_t PriceIcon; // w24
  int32_t v86; // [xsp+8h] [xbp-68h] BYREF
  int32_t Prices; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4

  v7 = shopEntity;
  if ( (byte_4BD8933 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C21E38(&EventRewardRootComponent_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&ShopBuyItemConfirmMenu_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_12508/*"STONE_FRAGMENTS_NEED_INFO"*/);
    sub_1C21E38(&StringLiteral_2080/*"ANONYMOUS_NEED_INFO"*/);
    sub_1C21E38(&StringLiteral_12514/*"STONE_NEED_INFO"*/);
    sub_1C21E38(&StringLiteral_11027/*"QP_NAME"*/);
    sub_1C21E38(&StringLiteral_11164/*"RARE_PRI_NEED_INFO"*/);
    sub_1C21E38(&StringLiteral_1879/*"?"*/);
    sub_1C21E38(&StringLiteral_5759/*"EVENT_ITEM_NEED_INFO"*/);
    sub_1C21E38(&StringLiteral_8691/*"MANA_NEED_INFO"*/);
    sub_1C21E38(&StringLiteral_12262/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/);
    byte_4BD8933 = 1;
  }
  eventItemIcon = (__int64)this->fields.eventItemIcon;
  if ( !eventItemIcon )
    goto LABEL_186;
  ItemIconComponent__Clear((ItemIconComponent_o *)eventItemIcon, 0LL);
  eventItemIcon = (__int64)ShopBuyItemConfirmMenu__GetUserItemCounts(this, v10);
  if ( !v7 )
    goto LABEL_186;
  v12 = eventItemIcon;
  switch ( v7->fields.payType )
  {
    case 1:
      priceDataLabel = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v31 = &StringLiteral_12514/*"STONE_NEED_INFO"*/;
      goto LABEL_51;
    case 2:
      priceDataLabel = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v31 = &StringLiteral_11027/*"QP_NAME"*/;
LABEL_51:
      v32 = (System_String_o *)*v31;
      goto LABEL_55;
    case 4:
      priceDataLabel = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v32 = (System_String_o *)StringLiteral_8691/*"MANA_NEED_INFO"*/;
LABEL_55:
      eventItemIcon = (__int64)LocalizationManager__Get(v32, 0LL);
      if ( !priceDataLabel )
        goto LABEL_186;
      v33 = (System_String_o *)eventItemIcon;
      v34 = priceDataLabel;
      goto LABEL_97;
    case 6:
    case 0xB:
      if ( ShopEntity__GetItemCount(v7, 0LL) < 2 )
      {
        if ( isNotHavingShopItemReceived )
          return;
        eventItemIcon = ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v13);
        if ( (eventItemIcon & 1) != 0 )
        {
          if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          if ( !byte_4BD7366 )
          {
            sub_1C21E38(&EventRewardRootComponent_TypeInfo);
            byte_4BD7366 = 1;
          }
          v56 = EventRewardRootComponent_TypeInfo;
          if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            v56 = EventRewardRootComponent_TypeInfo;
          }
          p_AnotherPayUsedItemId_k__BackingField = &v56->static_fields->_AnotherPayUsedItemId_k__BackingField;
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
        v76 = *p_AnotherPayUsedItemId_k__BackingField;
        eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !eventItemIcon )
          goto LABEL_186;
        eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)eventItemIcon,
                                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !eventItemIcon )
          goto LABEL_186;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
                   v76,
                   (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
            goto LABEL_186;
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
            goto LABEL_186;
          }
        }
        v78 = this->fields.priceDataLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v79 = LocalizationManager__Get((System_String_o *)StringLiteral_5759/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
        Prices = ShopEntity__GetPrices(v7, 0, 0LL);
        eventItemIcon = j_il2cpp_value_box_0(int_TypeInfo, &Prices, v80, v81, v82);
        if ( !Entity )
          goto LABEL_186;
        eventItemIcon = (__int64)System_String__Format_63129848(
                                   v79,
                                   (Il2CppObject *)eventItemIcon,
                                   (Il2CppObject *)Entity[1].monitor,
                                   0LL);
        if ( !v78 )
          goto LABEL_186;
        UILabel__set_text(v78, (System_String_o *)eventItemIcon, 0LL);
        v83 = this->fields.priceDataLabel;
        eventItemIcon = (__int64)ShopBuyItemConfirmMenu_TypeInfo;
        if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo);
        if ( !v83 )
          goto LABEL_186;
        UILabel__SetCondensedScale(
          v83,
          ShopBuyItemConfirmMenu_TypeInfo->static_fields->PRICE_DATA_LABEL_MAX_WIDTH,
          0,
          0LL);
        priceIconLabel = this->fields.priceIconLabel;
        PriceIcon = ShopEntity__GetPriceIcon(v7, 0LL);
        eventItemIcon = ShopEntity__GetPrices(v7, 0, 0LL);
        if ( !v12 )
          goto LABEL_186;
        if ( *(_DWORD *)(v12 + 24) )
        {
          if ( priceIconLabel )
          {
            UIIconLabel__SetPurchaseDecision(priceIconLabel, PriceIcon, eventItemIcon, *(_DWORD *)(v12 + 32), 0LL);
            eventItemIcon = (__int64)this->fields.eventItemIcon;
            if ( eventItemIcon )
            {
              ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, (int32_t)Entity[2].monitor, -1, 1, 0LL);
              return;
            }
          }
LABEL_186:
          sub_1C22094(eventItemIcon, shopEntity);
        }
LABEL_187:
        sub_1C2209C(eventItemIcon, shopEntity);
      }
      if ( ShopEntity__GetItemCount(v7, 0LL) >= 1 )
      {
        for ( i = 0LL; (__int64)i < ShopEntity__GetItemCount(v7, 0LL); ++i )
        {
          eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !eventItemIcon )
            goto LABEL_186;
          eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)eventItemIcon,
                                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
          v15 = v7->fields.itemIds;
          if ( !v15 )
            goto LABEL_186;
          if ( i >= v15->max_length )
            goto LABEL_187;
          if ( !eventItemIcon )
            goto LABEL_186;
          eventItemIcon = (__int64)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
                                     v15->m_Items[i + 1],
                                     (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          v16 = eventItemIcon;
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
            UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1879/*"?"*/, 0LL);
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
            v19 = this->fields.priceDataLabels;
            if ( !v19 )
              goto LABEL_186;
            if ( i >= v19->max_length )
              goto LABEL_187;
            eventItemIcon = (__int64)v19->m_Items[i];
            if ( !eventItemIcon )
              goto LABEL_186;
            UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1879/*"?"*/, 0LL);
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
            v21 = this->fields.priceDataLabels;
            if ( !v21 )
              goto LABEL_186;
            if ( i >= v21->max_length )
              goto LABEL_187;
            v22 = v21->m_Items[i];
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5759/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
            v86 = ShopEntity__GetPrices(v7, i, 0LL);
            eventItemIcon = j_il2cpp_value_box_0(int_TypeInfo, &v86, v24, v25, v26);
            if ( !v16 )
              goto LABEL_186;
            eventItemIcon = (__int64)System_String__Format_63129848(
                                       v23,
                                       (Il2CppObject *)eventItemIcon,
                                       *(Il2CppObject **)(v16 + 24),
                                       0LL);
            if ( !v22 )
              goto LABEL_186;
            UILabel__set_text(v22, (System_String_o *)eventItemIcon, 0LL);
            v27 = this->fields.priceIconLabels;
            if ( !v27 )
              goto LABEL_186;
            if ( i >= v27->max_length )
              goto LABEL_187;
            v28 = v27->m_Items[i];
            v29 = ShopEntity__GetPriceIcon(v7, 0LL);
            eventItemIcon = ShopEntity__GetPrices(v7, i, 0LL);
            if ( !v12 )
              goto LABEL_186;
            if ( i >= *(unsigned int *)(v12 + 24) )
              goto LABEL_187;
            if ( !v28 )
              goto LABEL_186;
            UIIconLabel__SetPurchaseDecision(v28, v29, eventItemIcon, *(_DWORD *)(v12 + 32 + 4 * i), 0LL);
            eventItemIcon = (__int64)this->fields.eventItemIcon;
            if ( !eventItemIcon )
              goto LABEL_186;
            ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, *(_DWORD *)(v16 + 40), -1, 1, 0LL);
          }
        }
      }
      return;
    case 8:
      eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_186;
      eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
      v35 = v7->fields.itemIds;
      if ( !v35 )
        goto LABEL_186;
      if ( !v35->max_length )
        goto LABEL_187;
      if ( !eventItemIcon )
        goto LABEL_186;
      v36 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
              v35->m_Items[1],
              (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v37 = this->fields.priceDataLabel;
      v38 = v36;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v39 = &StringLiteral_12508/*"STONE_FRAGMENTS_NEED_INFO"*/;
      goto LABEL_71;
    case 9:
      eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_186;
      eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
      v40 = v7->fields.itemIds;
      if ( !v40 )
        goto LABEL_186;
      if ( !v40->max_length )
        goto LABEL_187;
      if ( !eventItemIcon )
        goto LABEL_186;
      v41 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
              v40->m_Items[1],
              (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v37 = this->fields.priceDataLabel;
      v38 = v41;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v39 = &StringLiteral_2080/*"ANONYMOUS_NEED_INFO"*/;
LABEL_71:
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)*v39, 0LL);
      if ( !v37 )
        goto LABEL_186;
      UILabel__set_text(v37, (System_String_o *)eventItemIcon, 0LL);
      v42 = this->fields.priceIconLabel;
      v43 = ShopEntity__GetPriceIcon(v7, 0LL);
      eventItemIcon = ShopEntity__GetPrice(v7, 0LL);
      if ( !v12 )
        goto LABEL_186;
      if ( !*(_DWORD *)(v12 + 24) )
        goto LABEL_187;
      if ( !v42 )
        goto LABEL_186;
      UIIconLabel__SetPurchaseDecision(v42, v43, eventItemIcon, *(_DWORD *)(v12 + 32), 0LL);
      if ( !v38 )
        goto LABEL_186;
      eventItemIcon = (__int64)this->fields.eventItemIcon;
      if ( !eventItemIcon )
        goto LABEL_186;
      ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, (int32_t)v38[2].monitor, -1, 1, 0LL);
      return;
    case 0xA:
      v44 = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11164/*"RARE_PRI_NEED_INFO"*/, 0LL);
      if ( !v44 )
        goto LABEL_186;
      UILabel__set_text(v44, (System_String_o *)eventItemIcon, 0LL);
      v45 = this->fields.priceIconLabel;
      v46 = ShopEntity__GetPriceIcon(v7, 0LL);
      eventItemIcon = ShopEntity__GetPrice(v7, 0LL);
      if ( !v12 )
        goto LABEL_186;
      if ( !*(_DWORD *)(v12 + 24) )
        goto LABEL_187;
      if ( !v45 )
        goto LABEL_186;
      UIIconLabel__SetPurchaseDecision(v45, v46, eventItemIcon, *(_DWORD *)(v12 + 32), 0LL);
      if ( ShopEntity__GetPrice(v7, 0LL) )
      {
        Price = ShopEntity__GetPrice(v7, 0LL);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v48 = log10((double)Price);
        if ( v48 == INFINITY )
          v49 = -2147483647;
        else
          v49 = (int)v48 + 1;
      }
      else
      {
        v49 = 1;
      }
      IsSetStrikethrough = ShopEntity__IsSetStrikethrough(v7, isInPreparation, 0LL);
      if ( IsSetStrikethrough )
      {
        v60 = 384LL;
        if ( v49 == 1 )
          v60 = 376LL;
        ShopBuyItemConfirmMenu__SetLabelActive(
          (ShopBuyItemConfirmMenu_o *)IsSetStrikethrough,
          *(UILabel_o **)((char *)&this->klass + v60),
          1,
          v59);
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
      v61 = 492LL;
      if ( v49 == 1 )
        v61 = 480LL;
      v62 = v49 == 1 ? 476LL : 488LL;
      v63 = v49 == 1 ? 472LL : 484LL;
      v88.fields.z = *(float *)((char *)&this->klass + v61);
      v88.fields.y = *(float *)((char *)&this->klass + v62);
      v88.fields.x = *(float *)((char *)&this->klass + v63);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventItemIcon, v88, 0LL);
      eventItemIcon = (__int64)this->fields.freeLabel;
      if ( !eventItemIcon )
        goto LABEL_186;
      eventItemIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventItemIcon, 0LL);
      if ( !eventItemIcon )
        goto LABEL_186;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventItemIcon, 1, 0LL);
      return;
    case 0xC:
      eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_186;
      eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
      v50 = v7->fields.itemIds;
      if ( !v50 )
        goto LABEL_186;
      if ( !v50->max_length )
        goto LABEL_187;
      if ( !eventItemIcon )
        goto LABEL_186;
      eventItemIcon = (__int64)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
                                 v50->m_Items[1],
                                 (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !eventItemIcon || !this->fields.priceDataLabel )
        goto LABEL_186;
      v33 = *(System_String_o **)(eventItemIcon + 24);
      v34 = this->fields.priceDataLabel;
LABEL_97:
      UILabel__set_text(v34, v33, 0LL);
      v51 = this->fields.priceIconLabel;
      v52 = ShopEntity__GetPriceIcon(v7, 0LL);
      eventItemIcon = ShopEntity__GetPrice(v7, 0LL);
      if ( !v12 )
        goto LABEL_186;
      if ( !*(_DWORD *)(v12 + 24) )
        goto LABEL_187;
      if ( !v51 )
        goto LABEL_186;
      UIIconLabel__SetPurchaseDecision(v51, v52, eventItemIcon, *(_DWORD *)(v12 + 32), 0LL);
      return;
    case 0xD:
      priceFreeDataLabel = this->fields.priceFreeDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12262/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, 0LL);
      if ( !priceFreeDataLabel )
        goto LABEL_186;
      UILabel__set_text(priceFreeDataLabel, (System_String_o *)eventItemIcon, 0LL);
      return;
    case 0xE:
      commonConsumeEntities = this->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        return;
      v55 = *(_QWORD *)&commonConsumeEntities->max_length;
      if ( (_DWORD)v55 == 1 )
      {
        ShopBuyItemConfirmMenu__SetCommonConsumePriceText(
          this,
          this->fields.priceDataLabel,
          this->fields.priceIconLabel,
          this->fields.eventItemIcon,
          commonConsumeEntities->m_Items[0],
          v11);
        return;
      }
      if ( (int)v55 < 2 )
        return;
      for ( j = 4LL; ; ++j )
      {
        v65 = this->fields.priceDataLabels;
        if ( !v65 )
          break;
        max_length = v65->max_length;
        v67 = j - 4;
        if ( j - 4 >= (int)max_length )
        {
          shopEntity = 0LL;
        }
        else
        {
          if ( v67 >= max_length )
            goto LABEL_187;
          shopEntity = (ShopEntity_o *)*((_QWORD *)&v65->obj.klass + j);
        }
        v68 = this->fields.priceIconLabels;
        if ( !v68 )
          break;
        v69 = v68->max_length;
        if ( (__int64)v67 >= (int)v69 )
        {
          v70 = 0LL;
        }
        else
        {
          if ( v67 >= v69 )
            goto LABEL_187;
          v70 = (UIIconLabel_o *)*((_QWORD *)&v68->obj.klass + j);
        }
        v71 = this->fields.eventItemIcons;
        if ( !v71 )
          break;
        v72 = v71->max_length;
        if ( (__int64)v67 >= (int)v72 )
        {
          v73 = 0LL;
        }
        else
        {
          if ( v67 >= v72 )
            goto LABEL_187;
          v73 = (ItemIconComponent_o *)*((_QWORD *)&v71->obj.klass + j);
        }
        if ( v67 >= (unsigned int)v55 )
          goto LABEL_187;
        ShopBuyItemConfirmMenu__SetCommonConsumePriceText(
          this,
          (UILabel_o *)shopEntity,
          v70,
          v73,
          *((CommonConsumeEntity_o **)&commonConsumeEntities->obj.klass + j),
          v11);
        commonConsumeEntities = this->fields.commonConsumeEntities;
        if ( !commonConsumeEntities )
          goto LABEL_186;
        LODWORD(v55) = commonConsumeEntities->max_length;
        v74 = j - 3;
        if ( v74 >= (int)v55 )
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
    sub_1C22094(v12, v13);
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
        sub_1C22094(this, shopEntity);
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

  if ( (byte_4BD8925 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8925 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_1C22094(gameObject, v7);
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

  if ( (byte_4BD8926 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8926 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !sprite )
      sub_1C22094(v6, v7);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
  }
}


void __fastcall ShopBuyItemConfirmMenu__SetTextOnMask(
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
  struct System_Int32_array *targetIds; // x8
  __int64 *v23; // x8
  UILabel_o *v24; // x19
  unsigned int shopType; // w8
  System_Int32_array *v26; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4BD8930 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ShopReleaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_12255/*"SHOP_CANT_BUY"*/);
    sub_1C21E38(&StringLiteral_12295/*"SHOP_QUEST_OPEN"*/);
    sub_1C21E38(&StringLiteral_12293/*"SHOP_QUEST_ALREADY_CLEARED"*/);
    sub_1C21E38(&StringLiteral_12291/*"SHOP_NOT_RELEASE_SET_ITEM"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_12201/*"SHOP_ALREADY_GET"*/);
    byte_4BD8930 = 1;
  }
  questId = 0;
  v26 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ShopReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  if ( !shopEntity )
    goto LABEL_67;
  v9 = Master_object;
  if ( !Master_object )
    goto LABEL_67;
  isExistCondType = ShopReleaseMaster__isExistCondType(Master_object, shopEntity->fields.id, 38, 0LL);
  v11 = ShopReleaseMaster__isExistCondType(v9, shopEntity->fields.id, 41, 0LL);
  v12 = ShopReleaseMaster__isExistCondType(v9, shopEntity->fields.id, 40, 0LL);
  v13 = ShopReleaseMaster__isExistCondType(v9, shopEntity->fields.id, 78, 0LL)
     || ShopReleaseMaster__isExistCondType(v9, shopEntity->fields.id, 79, 0LL);
  IsServant = (System_String_o *)ShopReleaseMaster__isExistCondType(v9, shopEntity->fields.id, 108, 0LL);
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
      Master_object = (ShopReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (ShopReleaseMaster_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Master_object,
                                               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
      targetIds = shopEntity->fields.targetIds;
      if ( !targetIds )
        goto LABEL_67;
      if ( !targetIds->max_length )
        sub_1C2209C(Master_object, v8);
      if ( !Master_object )
        goto LABEL_67;
      IsServant = (System_String_o *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                       &entity,
                                       targetIds->m_Items[1],
                                       (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
            v23 = &StringLiteral_12255/*"SHOP_CANT_BUY"*/;
            goto LABEL_64;
          }
          if ( (isExistCondType || v11 || v12 || v13) | v17 & 1 )
          {
            IsServant = (System_String_o *)ShopReleaseMaster__CondClearCheck(v9, shopEntity->fields.id, 40, 0LL);
            if ( ((unsigned __int8)IsServant & 1) == 0 )
            {
              v21 = (System_String_o *)StringLiteral_1/*""*/;
              goto LABEL_66;
            }
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v23 = &StringLiteral_12201/*"SHOP_ALREADY_GET"*/;
LABEL_64:
            IsServant = LocalizationManager__Get((System_String_o *)*v23, 0LL);
            v21 = IsServant;
LABEL_66:
            textOnMask = this->fields.textOnMask;
            goto LABEL_59;
          }
          goto LABEL_58;
        }
LABEL_67:
        sub_1C22094(Master_object, v8);
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
                                       v16);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_58;
      IsServant = (System_String_o *)ShopEntity__IsAnotherItemBuyable(shopEntity, &v26, 0LL);
      if ( ((unsigned __int8)IsServant & 1) != 0 )
        goto LABEL_58;
LABEL_12:
      v18 = this->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_12201/*"SHOP_ALREADY_GET"*/;
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
      v19 = &StringLiteral_12291/*"SHOP_NOT_RELEASE_SET_ITEM"*/;
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
            v24 = this->fields.textOnMask;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Master_object = (ShopReleaseMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12295/*"SHOP_QUEST_OPEN"*/, 0LL);
            if ( v24 )
            {
              UILabel__set_text(v24, (System_String_o *)Master_object, 0LL);
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
      IsServant = (System_String_o *)ShopEntity__isQuestNotClearItemClosed(shopEntity, 0, 0LL);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_58;
LABEL_44:
      v18 = this->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_12293/*"SHOP_QUEST_ALREADY_CLEARED"*/;
LABEL_15:
      IsServant = LocalizationManager__Get((System_String_o *)*v19, 0LL);
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
      IsServant = (System_String_o *)ShopReleaseMaster__CondClearCheck(v9, shopEntity->fields.id, 1, 0LL);
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
  UILabel_o *warningLabel; // x23
  struct UILabel_o **p_warningLabel; // x24
  void *gameObject; // x0
  ShopBuyItemConfirmMenu_o *v12; // x0
  const MethodInfo *v13; // x3
  ShopBuyItemConfirmMenu_o *v14; // x0
  const MethodInfo *v15; // x3
  ShopBuyItemConfirmMenu_o *v16; // x0
  const MethodInfo *v17; // x3
  UILabel_o *v18; // x19
  __int64 *v19; // x8
  const MethodInfo *v20; // x1
  System_Int32_array *UserItemCounts; // x22
  __int64 v22; // x20
  UnityEngine_Object_o *resetWarningLabel; // x21
  UnityEngine_Object_o *shopResetButton; // x21
  ItemEntity_o *EntityByType; // x0
  struct System_String_StaticFields *p_name; // x8
  ShopBuyItemConfirmMenu_o *v27; // x0
  const MethodInfo *v28; // x3
  EventRewardRootComponent_c *v29; // x0
  int32_t *p_AnotherPayUsedItemId_k__BackingField; // x8
  UILabel_o *v31; // x20
  System_String_o *v32; // x22
  Il2CppObject *v33; // x0
  ShopBuyItemConfirmMenu_o *v34; // x0
  const MethodInfo *v35; // x3
  __int64 *v36; // x8
  __int64 *v37; // x8
  System_String_o *v38; // x21
  struct ShopEntity_o *v39; // x8
  struct System_Int32_array *v40; // x8
  Il2CppObject *monitor; // x1
  BalanceConfig_c *v42; // x8
  int v43; // w22
  UILabel_o *v44; // x22
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  __int64 v46; // x9
  CommonConsumeEntity_o *v47; // x20
  int32_t num; // w22
  struct ShopEntity_o *v49; // x8
  struct System_Int32_array *itemIds; // x8
  int32_t v51; // w19
  struct System_String_o *v52; // x22
  int v53; // w26
  Il2CppClass **v54; // x8
  CommonConsumeEntity_o *v55; // x23
  int v56; // w28
  Il2CppObject *Name; // x0
  System_String_o *v58; // x0
  int stringLength; // w8
  System_String_o *v60; // x0
  Il2CppObject *v61; // x20
  int32_t v62; // w19
  BalanceConfig_c *v63; // x8
  int32_t v64; // w20
  int32_t PresentBoxMax; // w9
  struct UILabel_o *v66; // x19
  __int64 *v67; // x8
  Il2CppObject *MasterData_object; // x19
  int32_t Sum; // w0
  BalanceConfig_c *v70; // x8
  int32_t v71; // w19
  int32_t UserItemMax; // w9
  int v73; // w20
  System_String_o *v74; // x1
  Il2CppObject *Empty; // x21
  int32_t v76; // w22
  int32_t resetLimitNum; // w27
  System_String_o *v78; // x23
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  Il2CppObject *v82; // x24
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  Il2CppObject *v86; // x0
  System_String_o *v87; // x0
  System_String_o *v88; // x23
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  Il2CppObject *v92; // x0
  System_String_o *v93; // x23
  Il2CppObject *Master_object; // x24
  Il2CppObject *v95; // x19
  const MethodInfo *v96; // x3
  System_String_o *v97; // x0
  System_String_o *v98; // x0
  int32_t v99; // [xsp+0h] [xbp-A0h] BYREF
  int32_t limitNum; // [xsp+4h] [xbp-9Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-98h] BYREF
  int32_t recordNum[2]; // [xsp+10h] [xbp-90h] BYREF
  int32_t buyCmdCodeNum[2]; // [xsp+18h] [xbp-88h] BYREF
  __int64 buyServantNum; // [xsp+20h] [xbp-80h] BYREF
  ShopResetEntity_o *v105; // [xsp+28h] [xbp-78h] BYREF
  System_Int32_array *possessionAnotherItemId; // [xsp+30h] [xbp-70h] BYREF
  int32_t questId; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4BD892D & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ShopResetMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserShopMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C21E38(&EventRewardRootComponent_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&StringLiteral_12238/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/);
    sub_1C21E38(&StringLiteral_12230/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/);
    sub_1C21E38(&StringLiteral_12219/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_SHORTAGE"*/);
    sub_1C21E38(&StringLiteral_12239/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/);
    sub_1C21E38(&StringLiteral_12220/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_12242/*"SHOP_BUY_RARE_PRI_CONFIRM_WARNING"*/);
    sub_1C21E38(&StringLiteral_12235/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/);
    sub_1C21E38(&StringLiteral_11027/*"QP_NAME"*/);
    sub_1C21E38(&StringLiteral_12226/*"SHOP_BUY_CONFIRM_SOLD_OUT_WARNING"*/);
    sub_1C21E38(&StringLiteral_12215/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/);
    sub_1C21E38(&StringLiteral_12222/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/);
    sub_1C21E38(&StringLiteral_12217/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/);
    sub_1C21E38(&StringLiteral_12223/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/);
    sub_1C21E38(&StringLiteral_12224/*"SHOP_BUY_CONFIRM_QUEST_CLAER"*/);
    sub_1C21E38(&StringLiteral_25564/*"{0}、"*/);
    sub_1C21E38(&StringLiteral_12229/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/);
    sub_1C21E38(&StringLiteral_12249/*"SHOP_BUY_STONE_FRAGMENTS_CONFIRM_WARNING"*/);
    sub_1C21E38(&StringLiteral_12232/*"SHOP_BUY_ITEM_FULL_WARNING"*/);
    sub_1C21E38(&StringLiteral_12234/*"SHOP_BUY_ITEM_OVER_WARNING"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_12218/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_LIMIT"*/);
    sub_1C21E38(&StringLiteral_12225/*"SHOP_BUY_CONFIRM_QUEST_HOLD"*/);
    sub_1C21E38(&StringLiteral_12221/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_NO_LIMIT_MESSAGE"*/);
    byte_4BD892D = 1;
  }
  questId = 0;
  v105 = 0LL;
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
  ShopBuyItemConfirmMenu__SetLabelText(v12, this->fields.warningLabel, (System_String_o *)StringLiteral_1/*""*/, v13);
  ShopBuyItemConfirmMenu__SetLabelText(v14, this->fields.resetWarningLabel, (System_String_o *)StringLiteral_1/*""*/, v15);
  ShopBuyItemConfirmMenu__SetLabelActive(v16, this->fields.resetWarningLabel, 0, v17);
  if ( !shopEntity )
    goto LABEL_248;
  if ( shopEntity->fields.purchaseType == 6 && shopEntity->fields.shopType == 3 )
  {
    if ( isInPreparation )
    {
      if ( !ShopEntity__isQuestNotClearItemClosed(shopEntity, 0, 0LL) )
        goto LABEL_21;
LABEL_14:
      v18 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_12224/*"SHOP_BUY_CONFIRM_QUEST_CLAER"*/;
      goto LABEL_58;
    }
    if ( ShopEntity__isQuestNotClear(shopEntity, &questId, 0, 0LL)
      && ShopEntity__isQuestNotClearItemClosedSub(shopEntity, questId, 0, 0LL) )
    {
      goto LABEL_14;
    }
    if ( ShopEntity__IsQuestHold(shopEntity, 0LL) )
    {
      v18 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_12225/*"SHOP_BUY_CONFIRM_QUEST_HOLD"*/;
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
      v18 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_12226/*"SHOP_BUY_CONFIRM_SOLD_OUT_WARNING"*/;
      goto LABEL_58;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    gameObject = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ItemMaster___);
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
    gameObject = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !gameObject )
      goto LABEL_248;
    v76 = *((_DWORD *)gameObject + 25);
    gameObject = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ShopResetMaster___);
    if ( !gameObject )
      goto LABEL_248;
    gameObject = (void *)ShopResetMaster__TryGetEntity(
                           (ShopResetMaster_o *)gameObject,
                           &v105,
                           shopEntity->fields.baseShopId,
                           v76,
                           0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !v105 )
        goto LABEL_248;
      resetLimitNum = v105->fields.resetLimitNum;
    }
    else
    {
      resetLimitNum = 0;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( resetLimitNum < 1 )
    {
      v88 = LocalizationManager__Get((System_String_o *)StringLiteral_12221/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_NO_LIMIT_MESSAGE"*/, 0LL);
      limitNum = shopEntity->fields.limitNum;
      v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &limitNum, v89, v90, v91);
      v87 = System_String__Format_63129848(v88, Empty, v92, 0LL);
    }
    else
    {
      v78 = LocalizationManager__Get((System_String_o *)StringLiteral_12220/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_MESSAGE"*/, 0LL);
      limitNum = resetLimitNum;
      v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &limitNum, v79, v80, v81);
      v99 = shopEntity->fields.limitNum;
      v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v99, v83, v84, v85);
      v87 = System_String__Format_63129916(v78, Empty, v82, v86, 0LL);
    }
    v93 = v87;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserShopMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    gameObject = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      gameObject = NetworkManager_TypeInfo;
    }
    if ( !Master_object )
LABEL_248:
      sub_1C22094(gameObject, shopEntity);
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
      v98 = LocalizationManager__Get((System_String_o *)StringLiteral_12218/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_LIMIT"*/, 0LL);
    }
    else
    {
LABEL_252:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v95 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD6FF5 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD6FF5 = 1;
      }
      gameObject = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        gameObject = NetworkManager_TypeInfo;
      }
      if ( !v95 )
        goto LABEL_248;
      gameObject = UserItemMaster__GetEntityDefinitely(
                     (UserItemMaster_o *)v95,
                     *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                     v76,
                     0LL);
      if ( !gameObject )
        goto LABEL_248;
      if ( *((int *)gameObject + 7) > 0 )
        goto LABEL_246;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v97 = LocalizationManager__Get((System_String_o *)StringLiteral_12219/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_SHORTAGE"*/, 0LL);
      v98 = System_String__Format(v97, Empty, 0LL);
    }
    gameObject = System_String__Concat_63115476(v93, v98, 0LL);
    v93 = (System_String_o *)gameObject;
LABEL_246:
    ShopBuyItemConfirmMenu__SetLabelActive(
      (ShopBuyItemConfirmMenu_o *)gameObject,
      this->fields.resetWarningLabel,
      1,
      v96);
    gameObject = this->fields.resetWarningLabel;
    if ( gameObject )
    {
      v74 = v93;
      goto LABEL_201;
    }
    goto LABEL_248;
  }
  if ( isInPreparation )
  {
    v18 = *p_warningLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = &StringLiteral_12222/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/;
LABEL_58:
    v27 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v19, 0LL);
LABEL_59:
    ShopBuyItemConfirmMenu__SetLabelText(v27, v18, (System_String_o *)v27, v28);
    return;
  }
  if ( !ShopEntity__IsEnable(shopEntity, 0LL, 0LL) )
  {
    v18 = *p_warningLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = &StringLiteral_12223/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/;
    goto LABEL_58;
  }
  UserItemCounts = ShopBuyItemConfirmMenu__GetUserItemCounts(this, v20);
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
      v31 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12229/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, 0LL);
      v33 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_11027/*"QP_NAME"*/, 0LL);
      v34 = (ShopBuyItemConfirmMenu_o *)System_String__Format(v32, v33, 0LL);
      goto LABEL_113;
    case 4:
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_248;
      if ( !UserItemCounts->max_length )
        goto LABEL_249;
      if ( (int)gameObject <= UserItemCounts->m_Items[1] )
        goto LABEL_158;
      v31 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v36 = &StringLiteral_12235/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/;
      goto LABEL_112;
    case 6:
    case 0xB:
    case 0xC:
      if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 2 )
      {
        if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 1 )
        {
          v22 = 0LL;
          while ( 1 )
          {
            gameObject = (void *)ShopEntity__GetPrices(shopEntity, v22, 0LL);
            if ( !UserItemCounts )
              goto LABEL_248;
            if ( (unsigned int)v22 >= UserItemCounts->max_length )
              goto LABEL_249;
            if ( (int)gameObject > UserItemCounts->m_Items[v22 + 1] )
              break;
            if ( (int)++v22 >= ShopEntity__GetItemCount(shopEntity, 0LL) )
              goto LABEL_158;
          }
          v18 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v19 = &StringLiteral_12230/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/;
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
        if ( !byte_4BD7366 )
        {
          sub_1C21E38(&EventRewardRootComponent_TypeInfo);
          byte_4BD7366 = 1;
        }
        v29 = EventRewardRootComponent_TypeInfo;
        if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          v29 = EventRewardRootComponent_TypeInfo;
        }
        p_AnotherPayUsedItemId_k__BackingField = &v29->static_fields->_AnotherPayUsedItemId_k__BackingField;
      }
      else
      {
        v49 = this->fields.shopEntity;
        if ( !v49 )
          goto LABEL_248;
        itemIds = v49->fields.itemIds;
        if ( !itemIds )
          goto LABEL_248;
        if ( !itemIds->max_length )
LABEL_249:
          sub_1C2209C(gameObject, shopEntity);
        p_AnotherPayUsedItemId_k__BackingField = &itemIds->m_Items[1];
      }
      v51 = *p_AnotherPayUsedItemId_k__BackingField;
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_248;
      gameObject = DataManager__GetMasterData_object_(
                     (DataManager_o *)gameObject,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !gameObject )
        goto LABEL_248;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
              &entity,
              v51,
              (const MethodInfo_325BE14 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        return;
      v18 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_12229/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, 0LL);
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
      v18 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v37 = &StringLiteral_12249/*"SHOP_BUY_STONE_FRAGMENTS_CONFIRM_WARNING"*/;
      goto LABEL_96;
    case 9:
      gameObject = (void *)ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_248;
      if ( !UserItemCounts->max_length )
        goto LABEL_249;
      if ( (int)gameObject <= UserItemCounts->m_Items[1] )
        goto LABEL_158;
      v18 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v37 = &StringLiteral_12215/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/;
LABEL_96:
      v38 = LocalizationManager__Get((System_String_o *)*v37, 0LL);
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_248;
      gameObject = DataManager__GetMasterData_object_(
                     (DataManager_o *)gameObject,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
      v39 = this->fields.shopEntity;
      if ( !v39 )
        goto LABEL_248;
      v40 = v39->fields.itemIds;
      if ( !v40 )
        goto LABEL_248;
      if ( !v40->max_length )
        goto LABEL_249;
      if ( !gameObject )
        goto LABEL_248;
      gameObject = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                     v40->m_Items[1],
                     (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
      v31 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v36 = &StringLiteral_12242/*"SHOP_BUY_RARE_PRI_CONFIRM_WARNING"*/;
LABEL_112:
      v34 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v36, 0LL);
LABEL_113:
      ShopBuyItemConfirmMenu__SetLabelText(v34, v31, (System_String_o *)v34, v35);
      goto LABEL_158;
    case 0xE:
      if ( !this->fields.commonConsumeEntities )
        goto LABEL_158;
      gameObject = (void *)ShopEntity__get_TargetId(shopEntity, 0LL);
      v42 = BalanceConfig_TypeInfo;
      v43 = (int)gameObject;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v42 = BalanceConfig_TypeInfo;
      }
      if ( v43 != v42->static_fields->ApSeedExchangeTargetItemId )
        goto LABEL_122;
      v44 = *p_warningLabel;
      if ( !v42->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v42);
      if ( !v44 )
        goto LABEL_248;
      UILabel__set_fontSize(v44, BalanceConfig_TypeInfo->static_fields->TradeApDialogWarningLabelFontSize, 0LL);
LABEL_122:
      commonConsumeEntities = this->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        goto LABEL_248;
      v46 = *(_QWORD *)&commonConsumeEntities->max_length;
      if ( (_DWORD)v46 == 1 )
      {
        v47 = commonConsumeEntities->m_Items[0];
        if ( !v47 )
          goto LABEL_248;
        num = v47->fields.num;
        if ( num > CommonConsumeEntity__GetUserHasNum(commonConsumeEntities->m_Items[0], 0LL) )
        {
          v18 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12217/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, 0LL);
          monitor = (Il2CppObject *)CommonConsumeEntity__GetName(v47, 0LL);
LABEL_103:
          gameObject = v38;
          goto LABEL_157;
        }
      }
      else if ( (int)v46 > 1 )
      {
        v52 = string_TypeInfo->static_fields->Empty;
        v53 = 0;
        do
        {
          if ( v53 >= (unsigned int)v46 )
            goto LABEL_249;
          v54 = &commonConsumeEntities->obj.klass + v53;
          v55 = (CommonConsumeEntity_o *)v54[4];
          if ( !v55 )
            goto LABEL_248;
          v56 = v55->fields.num;
          gameObject = (void *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)v54[4], 0LL);
          if ( v56 > (int)gameObject )
          {
            Name = (Il2CppObject *)CommonConsumeEntity__GetName(v55, 0LL);
            v58 = System_String__Format((System_String_o *)StringLiteral_25564/*"{0}、"*/, Name, 0LL);
            gameObject = System_String__Concat_63115476(v52, v58, 0LL);
            v52 = (struct System_String_o *)gameObject;
          }
          commonConsumeEntities = this->fields.commonConsumeEntities;
          if ( !commonConsumeEntities )
            goto LABEL_248;
          LODWORD(v46) = commonConsumeEntities->max_length;
          ++v53;
        }
        while ( v53 < (int)v46 );
        if ( !v52 )
          goto LABEL_248;
        stringLength = v52->fields._stringLength;
        if ( stringLength >= 1 )
        {
          v60 = System_String__Remove_63134296(v52, stringLength - 1, 0LL);
          v18 = *p_warningLabel;
          v61 = (Il2CppObject *)v60;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_12217/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, 0LL);
          monitor = v61;
LABEL_157:
          v27 = (ShopBuyItemConfirmMenu_o *)System_String__Format((System_String_o *)gameObject, monitor, 0LL);
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
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_248;
        gameObject = DataManager__GetMasterData_object_(
                       (DataManager_o *)gameObject,
                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
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
          v62 = recordNum[0];
        else
          v62 = buyCmdCodeNum[1] + buyServantNum + buyCmdCodeNum[0];
        v63 = BalanceConfig_TypeInfo;
        v64 = *((_DWORD *)gameObject + 6);
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v63 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v63->static_fields->PresentBoxMax;
        if ( PresentBoxMax <= v64 )
        {
          v66 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v67 = &StringLiteral_12238/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/;
LABEL_199:
          gameObject = LocalizationManager__Get((System_String_o *)*v67, 0LL);
          if ( v66 )
          {
            v74 = (System_String_o *)gameObject;
            gameObject = v66;
LABEL_201:
            UILabel__set_text((UILabel_o *)gameObject, v74, 0LL);
            return;
          }
          goto LABEL_248;
        }
        if ( !v63->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v63);
          PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
        }
        if ( v62 + v64 > PresentBoxMax )
        {
          v66 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v67 = &StringLiteral_12239/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/;
          goto LABEL_199;
        }
      }
      if ( SHIDWORD(buyServantNum) < 1 )
        return;
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_248;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD6FF5 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD6FF5 = 1;
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
      v70 = BalanceConfig_TypeInfo;
      v71 = Sum;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v70 = BalanceConfig_TypeInfo;
      }
      UserItemMax = v70->static_fields->UserItemMax;
      if ( v71 >= UserItemMax )
      {
        v66 = *p_warningLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v67 = &StringLiteral_12232/*"SHOP_BUY_ITEM_FULL_WARNING"*/;
        goto LABEL_199;
      }
      v73 = HIDWORD(buyServantNum);
      if ( !v70->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v70);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      if ( v73 + v71 > UserItemMax )
      {
        v66 = *p_warningLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v67 = &StringLiteral_12234/*"SHOP_BUY_ITEM_OVER_WARNING"*/;
        goto LABEL_199;
      }
      return;
    default:
      goto LABEL_158;
  }
}


void __fastcall ShopBuyItemConfirmMenu__SetWindowSize(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
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
  float DEFAULT_BUTTON_POS_Y; // s0
  UnityEngine_GameObject_o *v16; // x0

  if ( (byte_4BD8947 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ShopBuyItemConfirmMenu_TypeInfo);
    byte_4BD8947 = 1;
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
                  UIWidget__set_height(v9, static_fields->RESET_LAYOUT_WINDOW_SIZE_Y, 0LL);
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
                    v13 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
                    GameObjectExtensions__SetLocalPositionY(
                      v13,
                      (float)(ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y
                            - ShopBuyItemConfirmMenu_TypeInfo->static_fields->RESET_LAYOUT_OFFSET_Y),
                      0LL);
                    gameObject = (UnityEngine_Component_o *)this->fields.shopResetButton;
                    if ( gameObject )
                    {
                      v14 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
                      DEFAULT_BUTTON_POS_Y = (float)(ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y
                                                   - ShopBuyItemConfirmMenu_TypeInfo->static_fields->RESET_LAYOUT_OFFSET_Y);
LABEL_29:
                      GameObjectExtensions__SetLocalPositionY(v14, DEFAULT_BUTTON_POS_Y, 0LL);
                      return;
                    }
                  }
                }
              }
              else if ( v9 )
              {
                UIWidget__set_height(v9, static_fields->DEFAULT_WINDOW_SIZE_Y, 0LL);
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
                  v16 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
                  GameObjectExtensions__SetLocalPositionY(
                    v16,
                    (float)ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y,
                    0LL);
                  gameObject = (UnityEngine_Component_o *)this->fields.shopResetButton;
                  if ( gameObject )
                  {
                    v14 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
                    DEFAULT_BUTTON_POS_Y = (float)ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y;
                    goto LABEL_29;
                  }
                }
              }
            }
          }
          sub_1C22094(gameObject, v7);
        }
      }
    }
  }
}


int32_t __fastcall ShopBuyItemConfirmMenu__ShowCommandCodeInfomation(
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

  if ( (byte_4BD893F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C21E38(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_1C21E38(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C21E38(&Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD893F = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_9;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         commandCodeId,
         (const MethodInfo_325BE14 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
  {
    v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = entity;
    v9 = (CommonUI_o *)v7;
    v10 = (ServantStatusDialog_EndDelegate_o *)sub_1C22084(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v10,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v9 )
    {
      CommonUI__OpenServantEquipStatusDialog_31144672(v9, 25, (CommandCodeEntity_o *)v8, 0, v10, 0LL, 0LL);
      return 0;
    }
LABEL_9:
    sub_1C22094(Instance, v6);
  }
  return 0;
}


int32_t __fastcall ShopBuyItemConfirmMenu__ShowItemInfomation(
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

  if ( (byte_4BD893E & 1) == 0 )
  {
    sub_1C21E38(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD893E = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_13;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         itemId,
         (const MethodInfo_325BE14 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    itemDetailDialogOverwriteDepth = this->fields.itemDetailDialogOverwriteDepth;
    v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = entity;
    v10 = (CommonUI_o *)v8;
    v11 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C22084(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      (intptr_t)Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__,
      0LL);
    if ( itemDetailDialogOverwriteDepth == 0x80000000 )
    {
      if ( v10 )
      {
        v12 = 50;
LABEL_11:
        CommonUI__OpenItemDetailDialog(v10, (ItemEntity_o *)v9, v11, v12, 0LL);
        return 0;
      }
    }
    else if ( v10 )
    {
      v12 = this->fields.itemDetailDialogOverwriteDepth;
      goto LABEL_11;
    }
LABEL_13:
    sub_1C22094(Instance, v6);
  }
  return 0;
}


int32_t __fastcall ShopBuyItemConfirmMenu__ShowOtherInfomation(
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
  if ( (byte_4BD8940 & 1) == 0 )
  {
    sub_1C21E38(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ShopBuyItemConfirmMenu_o *)sub_1C21E38(&StringLiteral_9444/*"NONE"*/);
    byte_4BD8940 = 1;
  }
  if ( !shopEntity )
    goto LABEL_9;
  if ( !System_String__IsNullOrEmpty(shopEntity->fields.infoMessage, 0LL)
    && System_String__op_Inequality(shopEntity->fields.infoMessage, (System_String_o *)StringLiteral_9444/*"NONE"*/, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    name = shopEntity->fields.name;
    infoMessage = shopEntity->fields.infoMessage;
    v8 = (CommonUI_o *)Instance;
    v9 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C22084(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v9,
      v4,
      (intptr_t)Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__,
      0LL);
    if ( v8 )
    {
      CommonUI__OpenItemDetailDialog_31205140(v8, name, infoMessage, v9, 0LL);
      return 0;
    }
LABEL_9:
    sub_1C22094(this, shopEntity);
  }
  return 0;
}


int32_t __fastcall ShopBuyItemConfirmMenu__ShowServantInfomation(
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

  if ( (byte_4BD893D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C21E38(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C21E38(&EquipTargetInfo_TypeInfo);
    sub_1C21E38(&ServantLeaderInfo_TypeInfo);
    sub_1C21E38(&Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__);
    sub_1C21E38(&Method_ShopBuyItemConfirmMenu_EndShowServantStatusDialog__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD893D = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_23;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          servantId,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (ServantLeaderInfo_o *)sub_1C22084(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_41768824(v12, servantId, 0, 1, 0LL);
    v13 = (ServantStatusDialog_EndDelegate_o *)sub_1C22084(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v13,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantStatusDialog__,
      0LL);
    if ( v11 )
    {
      CommonUI__OpenServantStatusDialog_31140592((CommonUI_o *)v11, 7, v12, v13, 0LL);
      return 0;
    }
    goto LABEL_23;
  }
  Instance = entity;
  if ( !entity )
    goto LABEL_23;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL) )
  {
    v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = (EquipTargetInfo_o *)sub_1C22084(EquipTargetInfo_TypeInfo);
    EquipTargetInfo___ctor_40142420(v16, servantId, limitCount, level, 0, 0LL);
    v17 = (ServantStatusDialog_EndDelegate_o *)sub_1C22084(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v17,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v15 )
    {
      CommonUI__OpenServantEquipStatusDialog_31143688((CommonUI_o *)v15, 7, v16, v17, 0LL, 0LL);
      return 0;
    }
LABEL_23:
    sub_1C22094(Instance, v10);
  }
  return 2;
}


System_String_o *__fastcall ShopBuyItemConfirmMenu__get_closeBtnPath(
        ShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BD894B & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_15909/*"Window/CancelButton"*/);
    byte_4BD894B = 1;
  }
  return (System_String_o *)StringLiteral_15909/*"Window/CancelButton"*/;
}


bool __fastcall ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  EventRewardRootComponent_c *v3; // x0
  ShopEntity_o *shopEntity; // x0
  System_Int32_array *possessionAnotherItemId; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD8920 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardRootComponent_TypeInfo);
    byte_4BD8920 = 1;
  }
  possessionAnotherItemId = 0LL;
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  if ( !byte_4BD7367 )
  {
    sub_1C21E38(&EventRewardRootComponent_TypeInfo);
    byte_4BD7367 = 1;
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
      sub_1C22094(0LL, method);
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
  if ( (byte_4BD894E & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu___c__DisplayClass115_0_o *)sub_1C21E38(&Method_ActionExtensions_Call_int___);
    byte_4BD894E = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this
    || (onChecked = _4__this->fields.onChecked,
        _4__this->fields.onChecked = 0LL,
        sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.onChecked, 0LL, v2, v3, v4, v5, v6, v7),
        (v17 = v8->fields.__4__this) == 0LL) )
  {
    sub_1C22094(this, method);
  }
  onCloseReturnWarning = (System_Action_T__o *)v17->fields.onCloseReturnWarning;
  v17->fields.onCloseReturnWarning = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v17->fields.onCloseReturnWarning, 0LL, v11, v12, v13, v14, v15, v16);
  if ( v8->fields.isDecide )
    ActionExtensions__Call(onChecked, 0LL);
  else
    ActionExtensions__Call_int_(
      onCloseReturnWarning,
      0,
      (const MethodInfo_2F02570 *)Method_ActionExtensions_Call_int___);
}