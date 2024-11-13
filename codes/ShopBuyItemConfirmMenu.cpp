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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t v14; // x1
  struct ShopBuyItemConfirmMenu_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  struct ShopBuyItemConfirmMenu_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct ShopBuyItemConfirmMenu_StaticFields *v30; // x8

  if ( (byte_4B1269C & 1) == 0 )
  {
    sub_1BCA7E0(&ShopBuyItemConfirmMenu_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_17753/*"btn_txt_event_"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17804/*"btn_txt_trade"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17786/*"btn_txt_sale"*/, v12, v13);
    byte_4B1269C = 1;
  }
  ShopBuyItemConfirmMenu_TypeInfo->static_fields->VALENTINE_BTN_NAME = (struct System_String_o *)StringLiteral_17753/*"btn_txt_event_"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ShopBuyItemConfirmMenu_TypeInfo->static_fields,
    StringLiteral_17753/*"btn_txt_event_"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = StringLiteral_17804/*"btn_txt_trade"*/;
  static_fields = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  static_fields->DECIED_BTN_NAME_DEFAULT = (struct System_String_o *)StringLiteral_17804/*"btn_txt_trade"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->DECIED_BTN_NAME_DEFAULT, v14, v16, v17, v18, v19, v20, v21);
  v22 = StringLiteral_17786/*"btn_txt_sale"*/;
  v23 = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v23->DECIED_BTN_NAME_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_17786/*"btn_txt_sale"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v23->DECIED_BTN_NAME_LIMIT_MATERIAL, v22, v24, v25, v26, v27, v28, v29);
  v30 = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  *(_OWORD *)&v30->PRICE_DATA_LABEL_MAX_WIDTH = xmmword_BD1E60;
  *(_QWORD *)&v30->DEFAULT_PRICE_INFO_POS_Y = 0xFFFFFF86FFFFFFECLL;
  v30->RESET_LAYOUT_OFFSET_Y = 34;
}


void __fastcall ShopBuyItemConfirmMenu___ctor(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1269B & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1269B = 1;
  }
  this->fields.itemDetailDialogOverwriteDepth = 0x80000000;
  *(_OWORD *)&this->fields.freeLabelPos.fields.x = xmmword_BD2350;
  *(_QWORD *)&this->fields.freeLabelPos2digit.fields.y = 3250585600LL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
    sub_1BCA784(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_1BCA784(p_onDecide, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall ShopBuyItemConfirmMenu__Close(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ShopBuyItemConfirmMenu__Close_33432592(this, 0LL, v2);
}


void __fastcall ShopBuyItemConfirmMenu__Close_33432592(
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B12686 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_ShopBuyItemConfirmMenu_EndClose__, v10, v11);
    byte_4B12686 = 1;
  }
  this->fields.onClose = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onClose,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__EndClose(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  ShopBuyItemConfirmMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
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
  __int64 v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B12693 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    byte_4B12693 = 1;
  }
  v5 = Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__;
  if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v8);
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

  if ( (byte_4B12692 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B12692 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
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

  if ( (byte_4B12691 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B12691 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopBuyItemConfirmMenu__GetIsBuyable(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  bool isQuestNotClearItemClosedSub; // w8
  bool result; // w0
  const MethodInfo *v19; // x1
  System_Int32_array *UserItemCounts; // x22
  int32_t v21; // w19
  __int64 v22; // x21
  int m_CancellationTokenSource; // w20
  BalanceConfig_c *v24; // x8
  int32_t PresentBoxMax; // w9
  __int64 v26; // x1
  Il2CppObject *MasterData_object; // x19
  __int64 v28; // x1
  int32_t Sum; // w19
  BalanceConfig_c *v30; // x8
  int32_t UserItemMax; // w9
  int32_t v32; // w21
  struct CommonConsumeEntity_array *commonConsumeEntities; // x21
  int max_length; // w8
  __int64 v35; // x22
  int basePanel; // w24
  int32_t questId; // [xsp+Ch] [xbp-54h] BYREF
  int32_t recordNum[2]; // [xsp+10h] [xbp-50h] BYREF
  __int64 buyCmdCodeNum; // [xsp+18h] [xbp-48h] BYREF
  int32_t buyServantNum[2]; // [xsp+28h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_4B1267A & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, shopEntity, isInPreparation);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    this = (ShopBuyItemConfirmMenu_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B1267A = 1;
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
      UserItemCounts = ShopBuyItemConfirmMenu__GetUserItemCounts(v8, v19);
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
              sub_1BCAA44(this, shopEntity);
            if ( (int)this > UserItemCounts->m_Items[1] )
              return 0;
          }
          else if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 1 )
          {
            v22 = 0LL;
            while ( 1 )
            {
              this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetPrices(shopEntity, v22, 0LL);
              if ( !UserItemCounts )
                break;
              if ( (unsigned int)v22 >= UserItemCounts->max_length )
                goto LABEL_70;
              if ( (int)this > UserItemCounts->m_Items[v22 + 1] )
                return 0;
              if ( (int)++v22 >= ShopEntity__GetItemCount(shopEntity, 0LL) )
                goto LABEL_17;
            }
LABEL_69:
            sub_1BCAA3C(this, shopEntity);
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
          this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_69;
          this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
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
            v21 = recordNum[0];
          else
            v21 = HIDWORD(buyCmdCodeNum) + buyServantNum[0] + buyCmdCodeNum;
          m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
          v24 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, shopEntity);
            v24 = BalanceConfig_TypeInfo;
          }
          PresentBoxMax = v24->static_fields->PresentBoxMax;
          if ( PresentBoxMax > m_CancellationTokenSource )
          {
            if ( !v24->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v24, shopEntity);
              PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
            }
            if ( v21 + m_CancellationTokenSource <= PresentBoxMax )
            {
LABEL_51:
              if ( buyServantNum[1] < 1 )
                return 1;
              this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_69;
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v26);
              this = (ShopBuyItemConfirmMenu_o *)NetworkManager__get_UserId(0LL);
              if ( !MasterData_object )
                goto LABEL_69;
              Sum = UserItemMaster__getSum((UserItemMaster_o *)MasterData_object, (int64_t)this, 0LL);
              v30 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v28);
                v30 = BalanceConfig_TypeInfo;
              }
              UserItemMax = v30->static_fields->UserItemMax;
              if ( Sum < UserItemMax )
              {
                v32 = buyServantNum[1];
                if ( !v30->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v30, v28);
                  UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
                }
                if ( v32 + Sum <= UserItemMax )
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
          v35 = 0LL;
          while ( 2 )
          {
            if ( (unsigned int)v35 >= max_length )
              goto LABEL_70;
            this = (ShopBuyItemConfirmMenu_o *)commonConsumeEntities->m_Items[v35];
            if ( !this )
              goto LABEL_69;
            basePanel = (int)this->fields.basePanel;
            this = (ShopBuyItemConfirmMenu_o *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0LL);
            if ( basePanel <= (int)this )
            {
              max_length = commonConsumeEntities->max_length;
              if ( (int)++v35 >= max_length )
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
  __int64 v5; // x2
  __int64 v6; // x8
  SetItemMaster_o *v7; // x20
  unsigned __int64 v8; // x21
  int m_CancellationTokenSource; // w8
  int v10; // w9
  __int64 v11; // x10

  if ( (byte_4B12694 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SetItemMaster___, ids, method);
    this = (ShopBuyItemConfirmMenu_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B12694 = 1;
  }
  if ( !ids )
    goto LABEL_20;
  if ( !*(_QWORD *)&ids->max_length )
    return 0;
  this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_1BCAA3C(this, ids);
  this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SetItemMaster___);
  v6 = *(_QWORD *)&ids->max_length;
  if ( (int)v6 < 1 )
    return 0;
  v7 = (SetItemMaster_o *)this;
  v8 = 0LL;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)v6 )
LABEL_21:
      sub_1BCAA44(this, ids);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o **v8; // x8

  if ( (byte_4B12689 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&shopType, method);
    sub_1BCA7E0(&StringLiteral_8383/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_12207/*"SHOP_MAX_ALERT"*/, v6, v7);
    byte_4B12689 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&shopType);
  if ( shopType == 9 )
    v8 = (System_String_o **)&StringLiteral_8383/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/;
  else
    v8 = (System_String_o **)&StringLiteral_12207/*"SHOP_MAX_ALERT"*/;
  return LocalizationManager__Get(*v8, 0LL);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 *v14; // x8

  if ( (byte_4B12688 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&itemType, method);
    sub_1BCA7E0(&StringLiteral_10953/*"QP_NAME"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_8632/*"MANA_NAME"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_11086/*"RARE_PRI_NAME"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_6638/*"FRIEND_POINT_NAME"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v12, v13);
    byte_4B12688 = 1;
  }
  if ( itemType <= 5 )
  {
    if ( itemType == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&itemType);
      v14 = &StringLiteral_10953/*"QP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v14, 0LL);
    }
    if ( itemType == 5 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&itemType);
      v14 = &StringLiteral_8632/*"MANA_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v14, 0LL);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( itemType == 13 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&itemType);
    v14 = &StringLiteral_6638/*"FRIEND_POINT_NAME"*/;
    return LocalizationManager__Get((System_String_o *)*v14, 0LL);
  }
  if ( itemType != 22 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&itemType);
  v14 = &StringLiteral_11086/*"RARE_PRI_NAME"*/;
  return LocalizationManager__Get((System_String_o *)*v14, 0LL);
}


System_Int32_array *__fastcall ShopBuyItemConfirmMenu__GetUserItemCounts(
        ShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 SelfUserGame; // x0
  const MethodInfo *v11; // x1
  struct ShopEntity_o *shopEntity; // x8
  _DWORD *v13; // x21
  System_Int32_array *v14; // x20
  __int64 v15; // x1
  Il2CppObject *v16; // x21
  struct ShopEntity_o *v17; // x8
  struct System_Int32_array *itemIds; // x8
  int32_t v19; // w8
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v21; // x1
  int32_t ItemCount; // w22
  unsigned int v23; // w0
  unsigned __int64 v25; // x23
  __int64 v26; // x24
  struct ShopEntity_o *v27; // x8
  int32_t v28; // w22

  if ( (byte_4B12679 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B12679 = 1;
  }
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_57;
  v13 = (_DWORD *)SelfUserGame;
  switch ( shopEntity->fields.payType )
  {
    case 1:
      SelfUserGame = sub_1BCA888(int___TypeInfo, 1LL);
      if ( !v13 )
        goto LABEL_57;
      v14 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_57;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_58;
      v19 = v13[44];
      goto LABEL_38;
    case 2:
      SelfUserGame = sub_1BCA888(int___TypeInfo, 1LL);
      if ( !v13 )
        goto LABEL_57;
      v14 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_57;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_58;
      v19 = v13[24];
      goto LABEL_38;
    case 4:
      SelfUserGame = sub_1BCA888(int___TypeInfo, 1LL);
      if ( !v13 )
        goto LABEL_57;
      v14 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_57;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_58;
      v19 = v13[46];
      goto LABEL_38;
    case 6:
    case 0xB:
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_57;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
      SelfUserGame = ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v21);
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
      v14 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)ItemCount);
      if ( ItemCount >= 1 )
      {
        v25 = 0LL;
        v26 = (unsigned int)ItemCount;
        while ( 1 )
        {
          SelfUserGame = ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v11);
          v27 = this->fields.shopEntity;
          if ( !v27 )
            break;
          if ( (SelfUserGame & 1) != 0 )
          {
            SelfUserGame = (__int64)ShopEntity__GetAnotherPayItemIds(this->fields.shopEntity, 0LL);
            if ( !SelfUserGame )
              break;
          }
          else
          {
            SelfUserGame = (__int64)v27->fields.itemIds;
            if ( !SelfUserGame )
              break;
          }
          if ( v25 >= *(unsigned int *)(SelfUserGame + 24) )
LABEL_58:
            sub_1BCAA44(SelfUserGame, v11);
          v28 = *(_DWORD *)(SelfUserGame + 4 * v25 + 32);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
          SelfUserGame = NetworkManager__get_UserId(0LL);
          if ( !MasterData_object )
            break;
          SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                                    (UserItemMaster_o *)MasterData_object,
                                    SelfUserGame,
                                    v28,
                                    0LL);
          if ( !SelfUserGame || !v14 )
            break;
          if ( v25 >= v14->max_length )
            goto LABEL_58;
          v14->m_Items[++v25] = *(_DWORD *)(SelfUserGame + 28);
          if ( v26 == v25 )
            return v14;
        }
LABEL_57:
        sub_1BCAA3C(SelfUserGame, v11);
      }
      return v14;
    case 8:
    case 9:
    case 0xC:
      v14 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_57;
      v16 = DataManager__GetMasterData_object_(
              (DataManager_o *)SelfUserGame,
              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
      SelfUserGame = NetworkManager__get_UserId(0LL);
      v17 = this->fields.shopEntity;
      if ( !v17 )
        goto LABEL_57;
      itemIds = v17->fields.itemIds;
      if ( !itemIds )
        goto LABEL_57;
      if ( !itemIds->max_length )
        goto LABEL_58;
      if ( !v16 )
        goto LABEL_57;
      SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)v16,
                                SelfUserGame,
                                itemIds->m_Items[1],
                                0LL);
      if ( !SelfUserGame || !v14 )
        goto LABEL_57;
      if ( !v14->max_length )
        goto LABEL_58;
      v19 = *(_DWORD *)(SelfUserGame + 28);
LABEL_38:
      v14->m_Items[1] = v19;
      return v14;
    case 0xA:
      SelfUserGame = sub_1BCA888(int___TypeInfo, 1LL);
      if ( !v13 )
        goto LABEL_57;
      v14 = (System_Int32_array *)SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_57;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_58;
      v19 = v13[47];
      goto LABEL_38;
    default:
      v23 = ShopEntity__GetItemCount(this->fields.shopEntity, 0LL);
      return (System_Int32_array *)sub_1BCA888(int___TypeInfo, v23);
  }
}


void __fastcall ShopBuyItemConfirmMenu__Init(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *nameLabel; // x0
  __int64 v7; // x1
  UILabel_o *messageLabel; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  ShopBuyItemConfirmMenu_o *v15; // x0
  const MethodInfo *v16; // x3
  ShopBuyItemConfirmMenu_o *v17; // x0
  const MethodInfo *v18; // x3
  ShopBuyItemConfirmMenu_o *v19; // x0
  const MethodInfo *v20; // x3

  if ( (byte_4B12670 & 1) == 0 )
  {
    sub_1BCA7E0(&ShopBuyItemUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B12670 = 1;
  }
  nameLabel = (UILabel_o *)this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_14;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo, v7);
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
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.shopEntity, 0LL, v9, v10, v11, v12, v13, v14),
        (nameLabel = (UILabel_o *)this->fields.infoButton) == 0LL)
    || (nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL)) == 0LL )
  {
LABEL_14:
    sub_1BCAA3C(nameLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText(v15, this->fields.presentAheadLabel, (System_String_o *)StringLiteral_1/*""*/, v16);
  ShopBuyItemConfirmMenu__SetLabelActive(v17, this->fields.LineText, 0, v18);
  ShopBuyItemConfirmMenu__SetLabelActive(v19, this->fields.LineText2digit, 0, v20);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu__OnClickCancel(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B1268A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ShopBuyItemConfirmMenu_OnClickCancel__, method, v2);
    byte_4B1268A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_ShopBuyItemConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ShopBuyItemConfirmMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    ShopBuyItemConfirmMenu__CallOnDecide(this, 0, v6);
  }
}


void __fastcall ShopBuyItemConfirmMenu__OnClickDecide(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  void *Instance; // x0
  struct ShopEntity_o *shopEntity; // x1
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  NoTitleDialog_o *noTitleDialog; // x20
  System_String_o *v33; // x21
  Il2CppObject *Name; // x0
  __int64 v35; // x1
  System_String_o *v36; // x21
  System_String_o *v37; // x22
  System_String_o *v38; // x23
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Action_bool__o *v42; // x24
  const MethodInfo *v43; // x3
  struct ShopEntity_o *v44; // x8
  System_String_o *MaxAlertMessage; // x20
  Il2CppObject *v46; // x21
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Action_o *v50; // x22
  __int64 v51; // x1
  UILabel_o *warningLabel; // x20
  _QWORD *v53; // x0
  System_Reflection_MethodBase_o *v54; // x0
  _QWORD *v55; // x0
  System_Reflection_MethodBase_o *v56; // x0
  const MethodInfo *v57; // x2
  int32_t check; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_4B12687 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_ShopBuyItemConfirmMenu_EndMaxErrorDialog__, v10, v11);
    sub_1BCA7E0(&Method_ShopBuyItemConfirmMenu_OnClickDecide__, v12, v13);
    sub_1BCA7E0(&Method_ShopBuyItemConfirmMenu_ReturnWarning__, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19);
    sub_1BCA7E0(&StringLiteral_9434/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_12142/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v26, v27);
    byte_4B12687 = 1;
  }
  check = 0;
  if ( this->fields.state != 2 )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_35;
  if ( shopEntity->fields.purchaseType != 17 )
  {
    if ( !Instance )
      goto LABEL_35;
    if ( ShopMaster__PurchaseCloseEventShop((ShopMaster_o *)Instance, shopEntity, 0LL) )
    {
      v30 = Method_ShopBuyItemConfirmMenu_OnClickDecide__;
      if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
        v30 = (_QWORD *)sub_1BCA7F8(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
      v31 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v30, v30[4]);
      OverwriteAssetSoundName__PlaySystemSe(v31, 8, 0LL);
      Instance = this->fields.shopEntity;
      if ( Instance )
      {
        noTitleDialog = this->fields.noTitleDialog;
        v33 = (System_String_o *)*((_QWORD *)Instance + 21);
        Name = (Il2CppObject *)ShopEntity__getName((ShopEntity_o *)Instance, 0LL);
        v36 = System_String__Format(v33, Name, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
        v37 = LocalizationManager__Get((System_String_o *)StringLiteral_9434/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, 0LL);
        v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
        v42 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v39, v40, v41);
        System_Action_bool____ctor(v42, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_ReturnWarning__, 0LL);
        if ( noTitleDialog )
        {
          NoTitleDialog__Open(noTitleDialog, v36, v37, v38, v42, 0LL);
          return;
        }
      }
LABEL_35:
      sub_1BCAA3C(Instance, shopEntity);
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
      v44 = this->fields.shopEntity;
      if ( !v44 )
        goto LABEL_35;
      MaxAlertMessage = ShopBuyItemConfirmMenu__GetMaxAlertMessage(this, v44->fields.shopType, check, v43);
      v46 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v50 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v47, v48, v49);
      System_Action___ctor(v50, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndMaxErrorDialog__, 0LL);
      if ( !v46 )
        goto LABEL_35;
      CommonUI__OpenNotificationDialog(
        (CommonUI_o *)v46,
        (System_String_o *)StringLiteral_1/*""*/,
        MaxAlertMessage,
        v50,
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
    v55 = Method_ShopBuyItemConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v55 = (_QWORD *)sub_1BCA7F8(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
    v56 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v55, v55[4]);
    OverwriteAssetSoundName__PlaySystemSe(v56, 8, 0LL);
    ShopBuyItemConfirmMenu__CallOnDecide(this, 1, v57);
    return;
  }
  Instance = this->fields.presentAheadLabel;
  if ( !Instance )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  warningLabel = this->fields.warningLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12142/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_35;
  UILabel__set_text(warningLabel, (System_String_o *)Instance, 0LL);
  v53 = Method_ShopBuyItemConfirmMenu_OnClickDecide__;
  if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
    v53 = (_QWORD *)sub_1BCA7F8(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
  v54 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v53, v53[4]);
  OverwriteAssetSoundName__PlaySystemSe(v54, 2, 0LL);
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
    sub_1BCAA3C(this, shopEntity);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B12699 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ShopBuyItemConfirmMenu_OnClickReset__, method, v2);
    byte_4B12699 = 1;
  }
  v4 = Method_ShopBuyItemConfirmMenu_OnClickReset__;
  if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickReset__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_ShopBuyItemConfirmMenu_OnClickReset__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
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
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  struct ShopEntity_o **p_shopEntity; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct ShopEntity_o *v44; // x8
  struct CommonConsumeEntity_array *CommonConsumeEntities; // x1
  struct CommonConsumeEntity_array **p_commonConsumeEntities; // x0
  __int64 v47; // x1
  System_String_o *Name; // x23
  System_String_o *v49; // x23
  __int64 v50; // x1
  const MethodInfo *v51; // x3
  UISprite_o *decideButtonImg; // x24
  ShopBuyItemConfirmMenu_o *v53; // x0
  bool IsPreparation; // w0
  bool v55; // w26
  bool v56; // w25
  const MethodInfo *v57; // x4
  UserGameEntity_o *SelfUserGame; // x24
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x3
  __int64 v61; // x1
  ShopEntity_o *v62; // x27
  UILabel_o *textOnMask; // x28
  const MethodInfo *v64; // x3
  ShopEntity_o *v65; // x26
  UISprite_o *possessionSprite; // x27
  bool v67; // w0
  const MethodInfo *v68; // x2
  const MethodInfo *v69; // x3
  bool IsNotHavingShopItemReceived; // w0
  bool v71; // w22
  const MethodInfo *v72; // x5
  const MethodInfo *v73; // x4
  bool IsBuyable; // w20
  const MethodInfo *v75; // x2
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x1
  const MethodInfo *v78; // x4
  const MethodInfo *v79; // x3
  const MethodInfo *v80; // x5
  UISprite_o *itemMaskeSprite; // x20
  ShopBuyItemConfirmMenu_o *v82; // x0
  const MethodInfo *v83; // x3
  _BOOL8 IsShowMask; // x0
  const MethodInfo *v85; // x3
  const MethodInfo *v86; // x3
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  System_Action_o *v90; // x20
  System_String_o *itemName; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4B12671 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, shopEntity, *(_QWORD *)&shopKind);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_ShopBuyItemConfirmMenu_EndOpen__, v17, v18);
    sub_1BCA7E0(&ShopBuyItemConfirmMenu_TypeInfo, v19, v20);
    sub_1BCA7E0(&ShopBuyItemUtility_TypeInfo, v21, v22);
    byte_4B12671 = 1;
  }
  message = 0LL;
  itemName = 0LL;
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.onDecide,
      (int64_t)onDecide,
      *(int64_t *)&shopKind,
      (int32_t)onDecide,
      *(System_String_o **)&buttonSpriteId,
      *(BattleSetupInfo_o **)&shopState,
      (FollowerInfo_o *)onReset,
      (PartyListViewItem_o *)method);
    p_shopEntity = &this->fields.shopEntity;
    this->fields.shopEntity = shopEntity;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.shopEntity,
      (int64_t)shopEntity,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    this->fields.onReset = onReset;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onReset, (int64_t)onReset, v30, v31, v32, v33, v34, v35);
    v44 = this->fields.shopEntity;
    this->fields.shopState = shopState;
    if ( !v44 )
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
    sub_1BCA784(
      (PartyOrganizationUtility_o *)p_commonConsumeEntities,
      (int64_t)CommonConsumeEntities,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
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
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__ReplaceCommonTag(Name, 0, 0LL);
        if ( this->fields.nameLabel )
        {
          v49 = (System_String_o *)gameObject;
          UICrossNarrowLabel__SetCrossNarrowText(this->fields.nameLabel, (System_String_o *)gameObject, 0LL);
          decideButtonImg = this->fields.decideButtonImg;
          v53 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo, v50);
            v53 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          }
          ShopBuyItemConfirmMenu__SetSpriteName(
            v53,
            decideButtonImg,
            (System_String_o *)v53->fields.decideButtonImg->monitor,
            v51);
          gameObject = (UnityEngine_GameObject_o *)*p_shopEntity;
          if ( *p_shopEntity )
          {
            IsPreparation = ShopEntity__IsPreparation((ShopEntity_o *)gameObject, &message, &itemName, 0LL);
            v55 = IsPreparation;
            v56 = IsPreparation;
            ShopBuyItemConfirmMenu__SetMessageLabel(this, this->fields.shopEntity, IsPreparation, message, v57);
            SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
            ShopBuyItemConfirmMenu__SetBandSprite(this, this->fields.shopEntity, v59);
            ShopBuyItemConfirmMenu__SetTextOnMask(this, this->fields.shopEntity, v55, v60);
            v62 = this->fields.shopEntity;
            textOnMask = this->fields.textOnMask;
            if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo, v61);
            ShopBuyItemUtility__SetAddTextOnMask(v62, textOnMask, 0LL);
            ShopBuyItemConfirmMenu__SetNumText(this, this->fields.shopEntity, v55, v64);
            v65 = this->fields.shopEntity;
            if ( v65 )
            {
              possessionSprite = this->fields.possessionSprite;
              v67 = ShopEntity__checkFlag(this->fields.shopEntity, 0x4000, 0LL);
              ShopBuyItemUtility__SetShopHaveStatusIcon(v65, possessionSprite, v67, 0LL);
              ShopBuyItemConfirmMenu__SetPossessionInfo(this, shopEntity, v68);
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
                  v71 = IsNotHavingShopItemReceived;
                  ShopBuyItemConfirmMenu__SetExtensionText(
                    this,
                    this->fields.shopEntity,
                    IsNotHavingShopItemReceived,
                    v69);
                  ShopBuyItemConfirmMenu__SetPriceInfo(this, this->fields.shopEntity, v56, buttonSpriteId, v71, v72);
                  IsBuyable = ShopBuyItemConfirmMenu__GetIsBuyable(
                                this,
                                this->fields.shopEntity,
                                v56,
                                SelfUserGame,
                                v73);
                  ShopBuyItemConfirmMenu__SetDefaultButton(this, IsBuyable, v75);
                  ShopBuyItemConfirmMenu__SetAheadText(this, this->fields.shopEntity, IsBuyable, v76);
                  ShopBuyItemConfirmMenu__SetWindowSize(this, v77);
                  ShopBuyItemConfirmMenu__SetWarningLabel(this, this->fields.shopEntity, v56, SelfUserGame, v78);
                  ShopBuyItemConfirmMenu__SetItemIcon(this, this->fields.shopEntity, v56, v79);
                  ShopBuyItemConfirmMenu__SetNameText(this, this->fields.shopEntity, v56, v49, itemName, v80);
                  itemMaskeSprite = this->fields.itemMaskeSprite;
                  IsShowMask = ShopBuyItemConfirmMenu__GetIsShowMask(v82, this->fields.shopEntity, v56, v83);
                  ShopBuyItemConfirmMenu__SetSpriteActive(
                    (ShopBuyItemConfirmMenu_o *)IsShowMask,
                    itemMaskeSprite,
                    IsShowMask,
                    v85);
                  ShopBuyItemConfirmMenu__SetInfoButton(this, this->fields.shopEntity, v56, v86);
                  this->fields.state = 1;
                  v90 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v87, v88, v89);
                  System_Action___ctor(v90, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndOpen__, 0LL);
                  BaseDialog__Open((BaseDialog_o *)this, v90, 0, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_1BCAA3C(gameObject, v37);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  struct ShopEntity_o *Shop_k__BackingField; // x23
  int v24; // w24
  Il2CppObject *Instance; // x0
  System_String_o *warningMessage; // x24
  CommonUI_o *v27; // x22
  Il2CppObject *Name; // x0
  __int64 v29; // x1
  System_String_o *v30; // x23
  System_String_o *v31; // x24
  System_String_o *v32; // x25
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Action_bool__o *v36; // x26
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_String_o *itemName; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4B12695 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, item, onChecked);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_ShopBuyItemConfirmMenu_ReturnWarningRarePri__, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_19827/*"freeShopCondId"*/, v19, v20);
    this = (ShopBuyItemConfirmMenu_o *)sub_1BCA7E0(&StringLiteral_11251/*"RETURN_RARE_PRI_SHOP_DECIDE_BUTTON"*/, v21, v22);
    byte_4B12695 = 1;
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
          v24 = (int)this;
          if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                  (System_Collections_Generic_Dictionary_object__object__o *)Shop_k__BackingField->fields.script,
                  (Il2CppObject *)StringLiteral_19827/*"freeShopCondId"*/,
                  (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
            || ((v24 | ShopBuyItemListViewItem__get_IsSoldOut(item, 0LL)) & 1) != 0
            || !ShopEntity__IsAfterTheFreeShopReleaseDate(Shop_k__BackingField, 0LL)
            || ShopEntity__IsFulFilledFreeExchangeCondition(Shop_k__BackingField, 0LL) )
          {
            ActionExtensions__Call(onChecked, 0LL);
            return;
          }
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          warningMessage = Shop_k__BackingField->fields.warningMessage;
          v27 = (CommonUI_o *)Instance;
          Name = (Il2CppObject *)ShopEntity__getName(Shop_k__BackingField, 0LL);
          v30 = System_String__Format(warningMessage, Name, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
          v31 = LocalizationManager__Get((System_String_o *)StringLiteral_11251/*"RETURN_RARE_PRI_SHOP_DECIDE_BUTTON"*/, 0LL);
          v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
          v36 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v33, v34, v35);
          System_Action_bool____ctor(v36, (Il2CppObject *)v8, Method_ShopBuyItemConfirmMenu_ReturnWarningRarePri__, 0LL);
          if ( v27 )
          {
            CommonUI__OpenNoTitleDialog(v27, v30, v31, v32, v36, 0LL);
            v8->fields.onChecked = onChecked;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v8->fields.onChecked,
              (int64_t)onChecked,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42);
            v8->fields.onCloseReturnWarning = onCloseReturnWarning;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v8->fields.onCloseReturnWarning,
              (int64_t)onCloseReturnWarning,
              v43,
              v44,
              v45,
              v46,
              v47,
              v48);
            return;
          }
        }
      }
    }
    sub_1BCAA3C(this, item);
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

  if ( (byte_4B12690 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__, *(_QWORD *)&seKind, method);
    byte_4B12690 = 1;
  }
  if ( (seKind & 0x80000000) == 0 )
  {
    v4 = Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__;
    if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, seKind, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__ReturnWarning(
        ShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  NoTitleDialog_o *noTitleDialog; // x0
  const MethodInfo *v6; // x2

  noTitleDialog = this->fields.noTitleDialog;
  if ( !noTitleDialog )
    sub_1BCAA3C(0LL, isDecide);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *Instance; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_o *v25; // x20

  if ( (byte_4B1268B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_ShopBuyItemConfirmMenu___c__DisplayClass114_0__ReturnWarningRarePri_b__0__, v8, v9);
    sub_1BCA7E0(&ShopBuyItemConfirmMenu___c__DisplayClass114_0_TypeInfo, v10, v11);
    byte_4B1268B = 1;
  }
  v12 = sub_1BCAA2C(ShopBuyItemConfirmMenu___c__DisplayClass114_0_TypeInfo, isDecide, method, v3);
  ShopBuyItemConfirmMenu___c__DisplayClass114_0___ctor((ShopBuyItemConfirmMenu___c__DisplayClass114_0_o *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = this,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20),
        *(_BYTE *)(v12 + 24) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24),
        System_Action___ctor(
          v25,
          (Il2CppObject *)v12,
          Method_ShopBuyItemConfirmMenu___c__DisplayClass114_0__ReturnWarningRarePri_b__0__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v13, v14);
  }
  CommonUI__CloseNoTitleDialog((CommonUI_o *)Instance, v25, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__SetAheadText(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isBuyable,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  DataManager_o *Instance; // x0
  __int64 v34; // x1
  int32_t purchaseType; // w8
  UILabel_o *presentAheadLabel; // x19
  __int64 *v37; // x8
  System_String_o *v38; // x1
  UILabel_o *v39; // x0
  Il2CppObject *MasterData_object; // x21
  int klass; // w8
  int32_t shopType; // w21
  UILabel_o *v43; // x20
  __int64 v44; // x1
  const MethodInfo *v45; // x3
  UISprite_o *decideButtonImg; // x19
  ShopBuyItemConfirmMenu_o *v47; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v6 = this;
  if ( (byte_4B1267D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity, isBuyable);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&ShopBuyItemConfirmMenu_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_10620/*"PURCHASE_AFTER_COSTUME"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_10625/*"PURCHASE_AFTER_USER_ITEM"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_10622/*"PURCHASE_AFTER_ITEM_SET"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_8382/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_10623/*"PURCHASE_AFTER_PRESENT_BOX"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_10621/*"PURCHASE_AFTER_EVENT_SVT_GET"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_10624/*"PURCHASE_AFTER_QP"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_10626/*"PURCHASE_AFTER_USER_SVT_COIN"*/, v29, v30);
    this = (ShopBuyItemConfirmMenu_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v31, v32);
    byte_4B1267D = 1;
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_47;
          MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
          Instance = (DataManager_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
          if ( !MasterData_object )
            goto LABEL_47;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        &entity,
                                        (int32_t)Instance,
                                        (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
              v37 = &StringLiteral_10626/*"PURCHASE_AFTER_USER_SVT_COIN"*/;
            }
            else
            {
              presentAheadLabel = v6->fields.presentAheadLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
              v37 = &StringLiteral_10625/*"PURCHASE_AFTER_USER_ITEM"*/;
            }
LABEL_11:
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)*v37, 0LL);
            if ( presentAheadLabel )
            {
              v38 = (System_String_o *)Instance;
              v39 = presentAheadLabel;
LABEL_13:
              UILabel__set_text(v39, v38, 0LL);
              return;
            }
            goto LABEL_47;
          }
          shopType = shopEntity->fields.shopType;
          v43 = v6->fields.presentAheadLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
          if ( shopType != 9 )
          {
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10624/*"PURCHASE_AFTER_QP"*/, 0LL);
            if ( v43 )
            {
              v38 = (System_String_o *)Instance;
              v39 = v43;
              goto LABEL_13;
            }
LABEL_47:
            sub_1BCAA3C(Instance, v34);
          }
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8382/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/, 0LL);
          if ( !v43 )
            goto LABEL_47;
          UILabel__set_text(v43, (System_String_o *)Instance, 0LL);
          decideButtonImg = v6->fields.decideButtonImg;
          v47 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo, v44);
            v47 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          }
          ShopBuyItemConfirmMenu__SetSpriteName(
            v47,
            decideButtonImg,
            *(System_String_o **)&v47->fields.decideButtonImg->fields.m_CachedPtr,
            v45);
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
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
          v37 = &StringLiteral_10622/*"PURCHASE_AFTER_ITEM_SET"*/;
          goto LABEL_11;
        case 8:
          presentAheadLabel = v6->fields.presentAheadLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
          v37 = &StringLiteral_10621/*"PURCHASE_AFTER_EVENT_SVT_GET"*/;
          goto LABEL_11;
        default:
          if ( purchaseType != 14 )
            return;
          presentAheadLabel = v6->fields.presentAheadLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
          v37 = &StringLiteral_10620/*"PURCHASE_AFTER_COSTUME"*/;
          goto LABEL_11;
      }
    }
    else if ( (unsigned int)purchaseType <= 0x15 && ((1 << purchaseType) & 0x290000) != 0 )
    {
LABEL_8:
      presentAheadLabel = v6->fields.presentAheadLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
      v37 = &StringLiteral_10623/*"PURCHASE_AFTER_PRESENT_BOX"*/;
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
  __int64 v7; // x2
  ShopBuyItemConfirmMenu_o *v8; // x0
  const MethodInfo *v9; // x3
  UISprite_o *bandSprite; // x1
  __int64 *v11; // x8

  v5 = this;
  if ( (byte_4B1267E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20808/*"img_txt_shop"*/, shopEntity, method);
    this = (ShopBuyItemConfirmMenu_o *)sub_1BCA7E0(&StringLiteral_20793/*"img_txt_quest"*/, v6, v7);
    byte_4B1267E = 1;
  }
  if ( !shopEntity )
    sub_1BCAA3C(this, shopEntity);
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
      v11 = &StringLiteral_20793/*"img_txt_quest"*/;
      goto LABEL_9;
    case 7:
    case 9:
LABEL_6:
      ShopBuyItemConfirmMenu__SetSpriteActive(this, v5->fields.bandSprite, 1, v3);
      bandSprite = v5->fields.bandSprite;
      v11 = &StringLiteral_20808/*"img_txt_shop"*/;
LABEL_9:
      ShopBuyItemConfirmMenu__SetSpriteName(v8, bandSprite, (System_String_o *)*v11, v9);
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

  if ( (byte_4B12684 & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu_o *)sub_1BCA7E0(&AtlasManager_TypeInfo, itemIcon, commonConsumeEntity);
    byte_4B12684 = 1;
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
      sub_1BCAA3C(this, itemIcon);
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
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, itemIcon);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x1
  bool v21; // w0
  __int64 v22; // x1
  System_String_o *v23; // x24
  Il2CppObject *v24; // x25
  Il2CppObject *Name; // x0
  System_String_o *shopEntity; // x0
  __int64 v27; // x1
  __int64 v28; // x1
  ShopBuyItemConfirmMenu_c *v29; // x0
  int32_t PriceIcon; // w0
  int32_t v31; // w22
  int32_t v32; // w23
  ShopBuyItemConfirmMenu_o *v33; // x0
  const MethodInfo *v34; // x3
  int32_t num; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B12683 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, priceDataLabel, priceIconLabel);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&ShopBuyItemConfirmMenu_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_5716/*"EVENT_ITEM_NEED_INFO"*/, v17, v18);
    byte_4B12683 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, priceDataLabel);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)priceDataLabel, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)priceIconLabel, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
      v21 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)itemIcon, 0LL, 0LL);
      if ( commonConsumeEnt && !v21 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
        v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5716/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
        num = commonConsumeEnt->fields.num;
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
        Name = (Il2CppObject *)CommonConsumeEntity__GetName(commonConsumeEnt, 0LL);
        shopEntity = System_String__Format_62415592(v23, v24, Name, 0LL);
        if ( !priceDataLabel )
          goto LABEL_22;
        UILabel__set_text(priceDataLabel, shopEntity, 0LL);
        v29 = ShopBuyItemConfirmMenu_TypeInfo;
        if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo, v28);
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
LABEL_22:
          sub_1BCAA3C(shopEntity, v27);
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
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UISprite_o *deceideBtnSprite; // x21
  ShopBuyItemConfirmMenu_c *v17; // x0
  System_String_o *VALENTINE_BTN_NAME; // x22
  System_String_o *v19; // x20
  System_String_o *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x20
  UISprite_o *v23; // x20
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  v7 = this;
  v24 = buttonSpriteId;
  if ( (byte_4B12685 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, shopEntity, *(_QWORD *)&eventId);
    sub_1BCA7E0(&EventRewardRootComponent_TypeInfo, v8, v9);
    sub_1BCA7E0(&ShopBuyItemConfirmMenu_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v12, v13);
    this = (ShopBuyItemConfirmMenu_o *)sub_1BCA7E0(&StringLiteral_17804/*"btn_txt_trade"*/, v14, v15);
    byte_4B12685 = 1;
  }
  if ( !shopEntity )
    goto LABEL_17;
  if ( shopEntity->fields.payType == 6 )
  {
    if ( !buttonSpriteId )
      goto LABEL_11;
    deceideBtnSprite = v7->fields.deceideBtnSprite;
    v17 = ShopBuyItemConfirmMenu_TypeInfo;
    if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo, shopEntity);
      v17 = ShopBuyItemConfirmMenu_TypeInfo;
    }
    VALENTINE_BTN_NAME = v17->static_fields->VALENTINE_BTN_NAME;
    v19 = System_Int32__ToString((int)shopEntity + 24, 0LL);
    v20 = System_Int32__ToString((int32_t)&v24, 0LL);
    v22 = System_String__Concat_62414484(VALENTINE_BTN_NAME, v19, (System_String_o *)StringLiteral_16290/*"_"*/, v20, 0LL);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v21);
    if ( !EventRewardRootComponent__setRewardInfoImg(deceideBtnSprite, v22, 0LL) )
    {
LABEL_11:
      v23 = v7->fields.deceideBtnSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, shopEntity);
      AtlasManager__SetCommon(v23, 0LL);
      this = (ShopBuyItemConfirmMenu_o *)v7->fields.deceideBtnSprite;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17804/*"btn_txt_trade"*/, 0LL);
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
      sub_1BCAA3C(this, shopEntity);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *shopResetButton; // x21
  __int64 v22; // x1
  int64_t Master_object; // x0
  int32_t v24; // w21
  struct ShopEntity_o *shopEntity; // x8
  __int64 v26; // x1
  __int64 v27; // x1
  Il2CppObject *v28; // x22
  struct ShopEntity_o *v29; // x8
  int32_t resetLimitNum; // w8
  __int64 v31; // x1
  Il2CppObject *v32; // x22
  unsigned int v33; // w21
  UISprite_o *shopResetButtonSprite; // x22
  __int64 v35; // x1
  ShopResetEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B12697 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, isCan, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopResetMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserShopMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_17800/*"btn_txt_stock_reset"*/, v19, v20);
    byte_4B12697 = 1;
  }
  entity = 0LL;
  shopResetButton = (UnityEngine_Object_o *)this->fields.shopResetButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isCan);
  if ( UnityEngine_Object__op_Inequality(shopResetButton, 0LL, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !Master_object )
      goto LABEL_57;
    if ( this->fields.shopState != 18 )
      goto LABEL_42;
    if ( !this->fields.shopEntity )
      goto LABEL_57;
    v24 = *(_DWORD *)(Master_object + 96);
    if ( !ShopEntity__IsSoldOut(this->fields.shopEntity, 0LL) )
      goto LABEL_42;
    Master_object = (int64_t)this->fields.shopEntity;
    if ( !Master_object )
      goto LABEL_57;
    if ( ShopEntity__GetIsNotHavingShopItemReceived((ShopEntity_o *)Master_object, 0LL) )
      goto LABEL_42;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopResetMaster___);
    shopEntity = this->fields.shopEntity;
    if ( !shopEntity || !Master_object )
      goto LABEL_57;
    if ( ShopResetMaster__TryGetEntity(
           (ShopResetMaster_o *)Master_object,
           &entity,
           shopEntity->fields.baseShopId,
           v24,
           0LL) )
    {
      Master_object = (int64_t)this->fields.decideButton;
      if ( !Master_object )
        goto LABEL_57;
      Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
      if ( !Master_object )
        goto LABEL_57;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
      Master_object = (int64_t)this->fields.shopResetButton;
      if ( !Master_object )
        goto LABEL_57;
      Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
      if ( !Master_object )
        goto LABEL_57;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v26);
      v28 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserShopMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27);
      Master_object = NetworkManager__get_UserId(0LL);
      v29 = this->fields.shopEntity;
      if ( !v29 )
        goto LABEL_57;
      if ( !v28 )
        goto LABEL_57;
      Master_object = (int64_t)UserShopMaster__GetEntityDefinitely(
                                 (UserShopMaster_o *)v28,
                                 Master_object,
                                 v29->fields.baseShopId,
                                 0LL);
      if ( !entity )
        goto LABEL_57;
      resetLimitNum = entity->fields.resetLimitNum;
      if ( !resetLimitNum )
        goto LABEL_60;
      if ( !Master_object )
        goto LABEL_57;
      if ( resetLimitNum > *(_DWORD *)(Master_object + 40) )
      {
LABEL_60:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
        v32 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v31);
        Master_object = NetworkManager__get_UserId(0LL);
        if ( !v32 )
          goto LABEL_57;
        Master_object = (int64_t)UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)v32, Master_object, v24, 0LL);
        if ( !Master_object )
          goto LABEL_57;
        if ( *(int *)(Master_object + 28) <= 0 )
          v33 = 3;
        else
          v33 = 0;
        goto LABEL_48;
      }
    }
    else
    {
LABEL_42:
      Master_object = (int64_t)this->fields.decideButton;
      if ( !Master_object )
        goto LABEL_57;
      Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
      if ( !Master_object )
        goto LABEL_57;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
      Master_object = (int64_t)this->fields.shopResetButton;
      if ( !Master_object )
        goto LABEL_57;
      Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
      if ( !Master_object )
        goto LABEL_57;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    }
    v33 = 3;
LABEL_48:
    shopResetButtonSprite = this->fields.shopResetButtonSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v22);
    AtlasManager__SetDownloadCommonSprite(shopResetButtonSprite, (System_String_o *)StringLiteral_17800/*"btn_txt_stock_reset"*/, 0LL);
    Master_object = (int64_t)this->fields.shopResetButton;
    if ( Master_object )
    {
      (*(void (__fastcall **)(int64_t, _QWORD, __int64, _QWORD))(*(_QWORD *)Master_object + 536LL))(
        Master_object,
        v33,
        1LL,
        *(_QWORD *)(*(_QWORD *)Master_object + 544LL));
      goto LABEL_52;
    }
LABEL_57:
    sub_1BCAA3C(Master_object, v22);
  }
LABEL_52:
  Master_object = (int64_t)this->fields.decideButton;
  if ( !Master_object )
    goto LABEL_57;
  if ( isCan )
    v35 = 0LL;
  else
    v35 = 3LL;
  (*(void (__fastcall **)(int64_t, __int64, __int64, _QWORD))(*(_QWORD *)Master_object + 536LL))(
    Master_object,
    v35,
    1LL,
    *(_QWORD *)(*(_QWORD *)Master_object + 544LL));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__SetExtensionText(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isNotHavingShopItemReceived,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  bool v10; // w8
  UILabel_o *extensionInfoLabel; // x21
  ShopBuyItemConfirmMenu_o *v12; // x0
  const MethodInfo *v13; // x3

  v6 = this;
  if ( (byte_4B12681 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, shopEntity, isNotHavingShopItemReceived);
    this = (ShopBuyItemConfirmMenu_o *)sub_1BCA7E0(&StringLiteral_9416/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/, v7, v8);
    byte_4B12681 = 1;
  }
  if ( !shopEntity )
    sub_1BCAA3C(this, shopEntity);
  if ( shopEntity->fields.payType != 6 )
    goto LABEL_10;
  this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetItemCount(shopEntity, 0LL);
  v10 = (int)this < 2 && isNotHavingShopItemReceived;
  if ( (int)this <= 1 && isNotHavingShopItemReceived )
  {
    extensionInfoLabel = v6->fields.extensionInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
    v12 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9416/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/, 0LL);
    ShopBuyItemConfirmMenu__SetLabelText(v12, extensionInfoLabel, (System_String_o *)v12, v13);
LABEL_10:
    v10 = isNotHavingShopItemReceived;
  }
  ShopBuyItemConfirmMenu__SetLabelActive(this, v6->fields.extensionInfoLabel, v10, method);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4B12676 & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu_o *)sub_1BCA7E0(&StringLiteral_9382/*"NONE"*/, shopEntity, isInPreparation);
    byte_4B12676 = 1;
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
    sub_1BCAA3C(this, shopEntity);
  }
  if ( purchaseType == 1 || purchaseType == 4 )
    goto LABEL_18;
LABEL_16:
  if ( !System_String__IsNullOrEmpty(shopEntity->fields.infoMessage, 0LL)
    && System_String__op_Inequality(shopEntity->fields.infoMessage, (System_String_o *)StringLiteral_9382/*"NONE"*/, 0LL) )
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onDecide,
    (int64_t)onDecide,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__SetItemIcon(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *chocolateSprite; // x22
  UnityEngine_Component_o *gameObject; // x0
  __int64 v15; // x1
  ItemIconComponent_o *itemIcon; // x21
  int32_t purchaseType; // w22
  Il2CppObject *MasterData_object; // x21
  __int64 v19; // x1
  UnityEngine_Object_o *v20; // x20
  UnityEngine_GameObject_o *v21; // x19
  ServantEntity_o *v22; // [xsp+0h] [xbp-40h] BYREF
  int32_t imageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B12677 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, shopEntity, isInPreparation);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B12677 = 1;
  }
  v22 = 0LL;
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, shopEntity);
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
      sub_1BCAA3C(gameObject, v15);
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
    gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_32;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    gameObject = (UnityEngine_Component_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
    if ( !MasterData_object )
      goto LABEL_32;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
           (Il2CppObject **)&v22,
           (int32_t)gameObject,
           (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      v20 = (UnityEngine_Object_o *)this->fields.chocolateSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
      if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.chocolateSprite;
        if ( !gameObject )
          goto LABEL_32;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( !v22 )
          goto LABEL_32;
        v21 = (UnityEngine_GameObject_o *)gameObject;
        gameObject = (UnityEngine_Component_o *)ServantEntity__get_IsChocolateSvtEquip(v22, 0LL);
        if ( !v21 )
          goto LABEL_32;
        UnityEngine_GameObject__SetActive(v21, (unsigned __int8)gameObject & 1, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__SetLabelActive(
        ShopBuyItemConfirmMenu_o *this,
        UILabel_o *label,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4B12672 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, label, isActive);
    byte_4B12672 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_1BCAA3C(gameObject, v7);
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

  if ( (byte_4B12673 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, label, text);
    byte_4B12673 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1BCAA3C(v6, v7);
    WrapControlText__textAdjust(label, text, label->fields.mFontSize, 0, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__SetMessageLabel(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        System_String_o *preparationMessage,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *v13; // x0
  const MethodInfo *v14; // x3
  UILabel_o *messageLabel; // x19
  UILabel_o *v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x1
  System_String_o *detail; // x20
  System_String_o *v20; // x0
  System_String_o *v21; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *message; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  message = preparationMessage;
  if ( (byte_4B1267B & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, shopEntity, isInPreparation);
    sub_1BCA7E0(&StringLiteral_16014/*"[000000]"*/, v9, v10);
    this = (ShopBuyItemConfirmMenu_o *)sub_1BCA7E0(&StringLiteral_16015/*"[000000]？"*/, v11, v12);
    byte_4B1267B = 1;
  }
  v21 = 0LL;
  if ( !shopEntity )
    sub_1BCAA3C(this, shopEntity);
  if ( !isInPreparation )
  {
    if ( shopEntity->fields.purchaseType != 14
      || !ShopEntity__IsSoldOut(shopEntity, 0LL)
      || !ShopEntity__TryGetClosedMessage(shopEntity, &message, &v21, 0LL) )
    {
      messageLabel = v8->fields.messageLabel;
      detail = shopEntity->fields.detail;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
      v18 = LocalizationManager__ReplaceCommonTag(detail, 0, 0LL);
      v20 = (System_String_o *)StringLiteral_16014/*"[000000]"*/;
      goto LABEL_16;
    }
    messageLabel = v8->fields.messageLabel;
    v18 = message;
LABEL_15:
    v20 = (System_String_o *)StringLiteral_16014/*"[000000]"*/;
LABEL_16:
    v13 = System_String__Concat_62401220(v20, v18, 0LL);
    v16 = messageLabel;
    v17 = v13;
    goto LABEL_17;
  }
  v13 = (System_String_o *)ShopEntity__checkFlag(shopEntity, 8, 0LL);
  messageLabel = v8->fields.messageLabel;
  if ( ((unsigned __int8)v13 & 1) == 0 )
  {
    v18 = preparationMessage;
    goto LABEL_15;
  }
  v16 = messageLabel;
  v17 = (System_String_o *)StringLiteral_16015/*"[000000]？"*/;
LABEL_17:
  ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)v13, v16, v17, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__SetNameText(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        System_String_o *replacedName,
        System_String_o *preparationItemName,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *IsNullOrEmpty; // x0
  __int64 v14; // x1
  System_String_o *v15; // x1
  struct UICrossNarrowLabel_o *nameTextLabel; // x19

  if ( (byte_4B12678 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, shopEntity, isInPreparation);
    sub_1BCA7E0(&StringLiteral_25721/*"？"*/, v11, v12);
    byte_4B12678 = 1;
  }
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(preparationItemName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    nameTextLabel = this->fields.nameTextLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
    IsNullOrEmpty = LocalizationManager__ReplaceCommonTag(preparationItemName, 0, 0LL);
    if ( nameTextLabel )
    {
      v15 = IsNullOrEmpty;
      IsNullOrEmpty = (System_String_o *)nameTextLabel;
      goto LABEL_15;
    }
LABEL_16:
    sub_1BCAA3C(IsNullOrEmpty, v14);
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
      v15 = replacedName;
      goto LABEL_15;
    }
    goto LABEL_16;
  }
  IsNullOrEmpty = (System_String_o *)this->fields.nameTextLabel;
  if ( !IsNullOrEmpty )
    goto LABEL_16;
  v15 = (System_String_o *)StringLiteral_25721/*"？"*/;
LABEL_15:
  UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)IsNullOrEmpty, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__SetNumText(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  UILabel_o *numTitleLabel; // x21
  ShopBuyItemConfirmMenu_o *v13; // x0
  const MethodInfo *v14; // x3
  ShopBuyItemConfirmMenu_o *v15; // x0
  const MethodInfo *v16; // x3
  UILabel_o *numTextLabel; // x19
  int32_t HoldCount; // w0
  ShopBuyItemConfirmMenu_o *NumberFormat; // x0
  const MethodInfo *v20; // x3
  ShopBuyItemConfirmMenu_o *v21; // x0
  const MethodInfo *v22; // x3

  v6 = this;
  if ( (byte_4B12680 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, shopEntity, isInPreparation);
    this = (ShopBuyItemConfirmMenu_o *)sub_1BCA7E0(&StringLiteral_12152/*"SHOP_BUY_ITEM_HOLD"*/, v7, v8);
    byte_4B12680 = 1;
  }
  if ( !isInPreparation )
  {
    if ( shopEntity )
      goto LABEL_8;
LABEL_13:
    sub_1BCAA3C(this, shopEntity);
  }
  if ( !shopEntity )
    goto LABEL_13;
  v9 = ShopEntity__checkFlag(shopEntity, 2, 0LL);
  if ( v9 )
    goto LABEL_12;
LABEL_8:
  v9 = ShopEntity__checkHoldDisp(shopEntity, 0LL);
  if ( !v9 )
  {
LABEL_12:
    ShopBuyItemConfirmMenu__SetLabelActive((ShopBuyItemConfirmMenu_o *)v9, v6->fields.numTitleLabel, 0, v10);
    ShopBuyItemConfirmMenu__SetLabelActive(v21, v6->fields.numTextLabel, 0, v22);
    return;
  }
  ShopBuyItemConfirmMenu__SetLabelActive((ShopBuyItemConfirmMenu_o *)v9, v6->fields.numTitleLabel, 1, v10);
  numTitleLabel = v6->fields.numTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
  v13 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12152/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText(v13, numTitleLabel, (System_String_o *)v13, v14);
  ShopBuyItemConfirmMenu__SetLabelActive(v15, v6->fields.numTextLabel, 1, v16);
  numTextLabel = v6->fields.numTextLabel;
  HoldCount = ShopEntity__getHoldCount(shopEntity, 0LL);
  NumberFormat = (ShopBuyItemConfirmMenu_o *)LocalizationManager__GetNumberFormat(HoldCount, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText(NumberFormat, numTextLabel, (System_String_o *)NumberFormat, v20);
}


void __fastcall ShopBuyItemConfirmMenu__SetPossessionInfo(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *possessionGrid; // x21
  __int64 v16; // x1
  UnityEngine_Object_o *possessionNumLabel; // x21
  __int64 v18; // x1
  UnityEngine_Object_o *coinNumLabel; // x21
  __int64 v20; // x1
  UnityEngine_Object_o *coinIcon; // x21
  __int64 v22; // x1
  UnityEngine_Object_o *treasureDeviceLevelLabel; // x21
  __int64 v24; // x1
  UnityEngine_Object_o *summonedSprite; // x21
  __int64 v26; // x1
  UnityEngine_Object_o *possessionBGSprite; // x21
  Il2CppObject *TargetId; // x0
  __int64 v29; // x1
  unsigned int purchaseType; // w8
  int32_t v31; // w21
  Il2CppObject *Master_object; // x21
  void *monitor; // x21
  Il2CppClass *klass; // x22
  UIGrid_o *v35; // x22
  UILabel_o *v36; // x23
  UILabel_o *v37; // x24
  UILabel_o *v38; // x25
  UISprite_o *v39; // x26
  UISprite_o *v40; // x27
  UISprite_o *v41; // x20
  __int64 v42; // x1
  bool IsPossessionInfoDisp; // w19
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4B12698 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, shopEntity, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&ShopBuyItemUtility_TypeInfo, v13, v14);
    byte_4B12698 = 1;
  }
  entity = 0LL;
  possessionGrid = (UnityEngine_Object_o *)this->fields.possessionGrid;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, shopEntity);
  if ( !UnityEngine_Object__op_Equality(possessionGrid, 0LL, 0LL) )
  {
    possessionNumLabel = (UnityEngine_Object_o *)this->fields.possessionNumLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( !UnityEngine_Object__op_Equality(possessionNumLabel, 0LL, 0LL) )
    {
      coinNumLabel = (UnityEngine_Object_o *)this->fields.coinNumLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
      if ( !UnityEngine_Object__op_Equality(coinNumLabel, 0LL, 0LL) )
      {
        coinIcon = (UnityEngine_Object_o *)this->fields.coinIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
        if ( !UnityEngine_Object__op_Equality(coinIcon, 0LL, 0LL) )
        {
          treasureDeviceLevelLabel = (UnityEngine_Object_o *)this->fields.treasureDeviceLevelLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
          if ( !UnityEngine_Object__op_Equality(treasureDeviceLevelLabel, 0LL, 0LL) )
          {
            summonedSprite = (UnityEngine_Object_o *)this->fields.summonedSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
            if ( !UnityEngine_Object__op_Equality(summonedSprite, 0LL, 0LL) )
            {
              possessionBGSprite = (UnityEngine_Object_o *)this->fields.possessionBGSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
              TargetId = (Il2CppObject *)UnityEngine_Object__op_Equality(possessionBGSprite, 0LL, 0LL);
              if ( ((unsigned __int8)TargetId & 1) == 0 )
              {
                if ( !shopEntity )
                  goto LABEL_42;
                purchaseType = shopEntity->fields.purchaseType;
                v31 = 0;
                if ( purchaseType <= 0x15 && ((1 << purchaseType) & 0x200110) != 0 )
                {
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29);
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
                  TargetId = (Il2CppObject *)ShopEntity__get_TargetId(shopEntity, 0LL);
                  if ( !Master_object )
                    goto LABEL_42;
                  if ( DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                         &entity,
                         (int32_t)TargetId,
                         (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
                        *(_QWORD *)&v45.fields.currentCryptoKey = klass;
                        *(_QWORD *)&v45.fields.fakeValue = monitor;
                        v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v45, 0LL);
                        goto LABEL_38;
                      }
LABEL_42:
                      sub_1BCAA3C(TargetId, v29);
                    }
                  }
                  v31 = 0;
                }
LABEL_38:
                v35 = this->fields.possessionGrid;
                v36 = this->fields.possessionNumLabel;
                v37 = this->fields.coinNumLabel;
                v38 = this->fields.treasureDeviceLevelLabel;
                v39 = this->fields.summonedSprite;
                v40 = this->fields.coinIcon;
                v41 = this->fields.possessionBGSprite;
                IsPossessionInfoDisp = ShopEntity__IsPossessionInfoDisp(shopEntity, 0LL);
                if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo, v42);
                ShopBuyItemUtility__SetPossessionInfo(v31, v35, v36, v37, v40, v38, v39, v41, IsPossessionInfoDisp, 0LL);
              }
            }
          }
        }
      }
    }
  }
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 eventItemIcon; // x0
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x5
  __int64 v42; // x21
  const MethodInfo *v43; // x1
  unsigned __int64 i; // x23
  struct System_Int32_array *itemIds; // x8
  __int64 v46; // x24
  struct UILabel_array *priceDataLabels; // x8
  struct UIIconLabel_array *priceIconLabels; // x8
  struct UILabel_array *v49; // x8
  struct ItemIconComponent_array *eventItemIcons; // x8
  struct UILabel_array *v51; // x8
  UILabel_o *v52; // x25
  System_String_o *v53; // x26
  struct UIIconLabel_array *v54; // x8
  UIIconLabel_o *v55; // x25
  int32_t v56; // w26
  struct UILabel_o *priceDataLabel; // x22
  __int64 *v58; // x8
  System_String_o *v59; // x0
  System_String_o *v60; // x1
  UILabel_o *v61; // x0
  struct System_Int32_array *v62; // x8
  Il2CppObject *v63; // x0
  __int64 v64; // x1
  UILabel_o *v65; // x23
  Il2CppObject *v66; // x22
  __int64 *v67; // x8
  struct System_Int32_array *v68; // x8
  Il2CppObject *v69; // x0
  __int64 v70; // x1
  UIIconLabel_o *v71; // x23
  int32_t v72; // w24
  UILabel_o *v73; // x23
  UIIconLabel_o *v74; // x23
  int32_t v75; // w24
  __int64 v76; // x1
  int32_t Price; // w21
  double v78; // d0
  int v79; // w21
  struct System_Int32_array *v80; // x8
  UIIconLabel_o *v81; // x19
  int32_t v82; // w22
  UILabel_o *priceFreeDataLabel; // x19
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  __int64 v85; // x9
  _BOOL8 IsSetStrikethrough; // x0
  const MethodInfo *v87; // x3
  __int64 v88; // x8
  __int64 v89; // x8
  __int64 v90; // x9
  __int64 v91; // x10
  __int64 j; // x20
  struct UILabel_array *v93; // x11
  unsigned __int64 max_length; // x12
  unsigned __int64 v95; // x10
  struct UIIconLabel_array *v96; // x11
  unsigned __int64 v97; // x12
  UIIconLabel_o *v98; // x2
  struct ItemIconComponent_array *v99; // x11
  unsigned __int64 v100; // x12
  ItemIconComponent_o *v101; // x3
  __int64 v102; // x10
  int32_t v103; // w23
  Il2CppObject *Entity; // x23
  UILabel_o *v105; // x22
  System_String_o *v106; // x24
  UILabel_o *v107; // x22
  UIIconLabel_o *priceIconLabel; // x22
  int32_t PriceIcon; // w24
  int32_t v110; // [xsp+8h] [xbp-68h] BYREF
  int32_t Prices; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4

  v7 = shopEntity;
  if ( (byte_4B12682 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity, isInPreparation);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Math_TypeInfo, v15, v16);
    sub_1BCA7E0(&ShopBuyItemConfirmMenu_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&StringLiteral_12426/*"STONE_FRAGMENTS_NEED_INFO"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_2071/*"ANONYMOUS_NEED_INFO"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_12432/*"STONE_NEED_INFO"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_10953/*"QP_NAME"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_11087/*"RARE_PRI_NEED_INFO"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_1870/*"?"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_5716/*"EVENT_ITEM_NEED_INFO"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_8633/*"MANA_NEED_INFO"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_12181/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, v37, v38);
    byte_4B12682 = 1;
  }
  eventItemIcon = (__int64)this->fields.eventItemIcon;
  if ( !eventItemIcon )
    goto LABEL_180;
  ItemIconComponent__Clear((ItemIconComponent_o *)eventItemIcon, 0LL);
  eventItemIcon = (__int64)ShopBuyItemConfirmMenu__GetUserItemCounts(this, v40);
  if ( !v7 )
    goto LABEL_180;
  v42 = eventItemIcon;
  switch ( v7->fields.payType )
  {
    case 1:
      priceDataLabel = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
      v58 = &StringLiteral_12432/*"STONE_NEED_INFO"*/;
      goto LABEL_51;
    case 2:
      priceDataLabel = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
      v58 = &StringLiteral_10953/*"QP_NAME"*/;
LABEL_51:
      v59 = (System_String_o *)*v58;
      goto LABEL_55;
    case 4:
      priceDataLabel = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
      v59 = (System_String_o *)StringLiteral_8633/*"MANA_NEED_INFO"*/;
LABEL_55:
      eventItemIcon = (__int64)LocalizationManager__Get(v59, 0LL);
      if ( !priceDataLabel )
        goto LABEL_180;
      v60 = (System_String_o *)eventItemIcon;
      v61 = priceDataLabel;
      goto LABEL_97;
    case 6:
    case 0xB:
      if ( ShopEntity__GetItemCount(v7, 0LL) < 2 )
      {
        if ( isNotHavingShopItemReceived )
          return;
        if ( ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v43) )
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
          v103 = *(_DWORD *)(eventItemIcon + 32);
          eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !eventItemIcon )
            goto LABEL_180;
          eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)eventItemIcon,
                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !eventItemIcon )
            goto LABEL_180;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
                     v103,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( isInPreparation )
          {
            if ( ShopEntity__checkFlag(v7, 64, 0LL) )
            {
              eventItemIcon = (__int64)this->fields.priceDataLabel;
              if ( eventItemIcon )
              {
                UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1870/*"?"*/, 0LL);
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
                UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1870/*"?"*/, 0LL);
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
          v105 = this->fields.priceDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
          v106 = LocalizationManager__Get((System_String_o *)StringLiteral_5716/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
          Prices = ShopEntity__GetPrices(v7, 0, 0LL);
          eventItemIcon = j_il2cpp_value_box_0(int_TypeInfo, &Prices);
          if ( !Entity )
            goto LABEL_180;
          eventItemIcon = (__int64)System_String__Format_62415592(
                                     v106,
                                     (Il2CppObject *)eventItemIcon,
                                     (Il2CppObject *)Entity[1].monitor,
                                     0LL);
          if ( !v105 )
            goto LABEL_180;
          UILabel__set_text(v105, (System_String_o *)eventItemIcon, 0LL);
          v107 = this->fields.priceDataLabel;
          eventItemIcon = (__int64)ShopBuyItemConfirmMenu_TypeInfo;
          if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo, shopEntity);
          if ( !v107 )
            goto LABEL_180;
          UILabel__SetCondensedScale(
            v107,
            ShopBuyItemConfirmMenu_TypeInfo->static_fields->PRICE_DATA_LABEL_MAX_WIDTH,
            0LL);
          priceIconLabel = this->fields.priceIconLabel;
          PriceIcon = ShopEntity__GetPriceIcon(v7, 0LL);
          eventItemIcon = ShopEntity__GetPrices(v7, 0, 0LL);
          if ( !v42 )
            goto LABEL_180;
          if ( *(_DWORD *)(v42 + 24) )
          {
            if ( priceIconLabel )
            {
              UIIconLabel__SetPurchaseDecision(priceIconLabel, PriceIcon, eventItemIcon, *(_DWORD *)(v42 + 32), 0LL);
              eventItemIcon = (__int64)this->fields.eventItemIcon;
              if ( eventItemIcon )
              {
                ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, (int32_t)Entity[2].monitor, -1, 0LL);
                return;
              }
            }
LABEL_180:
            sub_1BCAA3C(eventItemIcon, shopEntity);
          }
        }
LABEL_181:
        sub_1BCAA44(eventItemIcon, shopEntity);
      }
      if ( ShopEntity__GetItemCount(v7, 0LL) >= 1 )
      {
        for ( i = 0LL; (__int64)i < ShopEntity__GetItemCount(v7, 0LL); ++i )
        {
          eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !eventItemIcon )
            goto LABEL_180;
          eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)eventItemIcon,
                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
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
                                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          v46 = eventItemIcon;
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
            UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1870/*"?"*/, 0LL);
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
            v49 = this->fields.priceDataLabels;
            if ( !v49 )
              goto LABEL_180;
            if ( i >= v49->max_length )
              goto LABEL_181;
            eventItemIcon = (__int64)v49->m_Items[i];
            if ( !eventItemIcon )
              goto LABEL_180;
            UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1870/*"?"*/, 0LL);
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
            v51 = this->fields.priceDataLabels;
            if ( !v51 )
              goto LABEL_180;
            if ( i >= v51->max_length )
              goto LABEL_181;
            v52 = v51->m_Items[i];
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
            v53 = LocalizationManager__Get((System_String_o *)StringLiteral_5716/*"EVENT_ITEM_NEED_INFO"*/, 0LL);
            v110 = ShopEntity__GetPrices(v7, i, 0LL);
            eventItemIcon = j_il2cpp_value_box_0(int_TypeInfo, &v110);
            if ( !v46 )
              goto LABEL_180;
            eventItemIcon = (__int64)System_String__Format_62415592(
                                       v53,
                                       (Il2CppObject *)eventItemIcon,
                                       *(Il2CppObject **)(v46 + 24),
                                       0LL);
            if ( !v52 )
              goto LABEL_180;
            UILabel__set_text(v52, (System_String_o *)eventItemIcon, 0LL);
            v54 = this->fields.priceIconLabels;
            if ( !v54 )
              goto LABEL_180;
            if ( i >= v54->max_length )
              goto LABEL_181;
            v55 = v54->m_Items[i];
            v56 = ShopEntity__GetPriceIcon(v7, 0LL);
            eventItemIcon = ShopEntity__GetPrices(v7, i, 0LL);
            if ( !v42 )
              goto LABEL_180;
            if ( i >= *(unsigned int *)(v42 + 24) )
              goto LABEL_181;
            if ( !v55 )
              goto LABEL_180;
            UIIconLabel__SetPurchaseDecision(v55, v56, eventItemIcon, *(_DWORD *)(v42 + 32 + 4 * i), 0LL);
            eventItemIcon = (__int64)this->fields.eventItemIcon;
            if ( !eventItemIcon )
              goto LABEL_180;
            ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, *(_DWORD *)(v46 + 40), -1, 0LL);
          }
        }
      }
      return;
    case 8:
      eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_180;
      eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
      v62 = v7->fields.itemIds;
      if ( !v62 )
        goto LABEL_180;
      if ( !v62->max_length )
        goto LABEL_181;
      if ( !eventItemIcon )
        goto LABEL_180;
      v63 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
              v62->m_Items[1],
              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v65 = this->fields.priceDataLabel;
      v66 = v63;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v64);
      v67 = &StringLiteral_12426/*"STONE_FRAGMENTS_NEED_INFO"*/;
      goto LABEL_71;
    case 9:
      eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_180;
      eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
      v68 = v7->fields.itemIds;
      if ( !v68 )
        goto LABEL_180;
      if ( !v68->max_length )
        goto LABEL_181;
      if ( !eventItemIcon )
        goto LABEL_180;
      v69 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
              v68->m_Items[1],
              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v65 = this->fields.priceDataLabel;
      v66 = v69;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v70);
      v67 = &StringLiteral_2071/*"ANONYMOUS_NEED_INFO"*/;
LABEL_71:
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)*v67, 0LL);
      if ( !v65 )
        goto LABEL_180;
      UILabel__set_text(v65, (System_String_o *)eventItemIcon, 0LL);
      v71 = this->fields.priceIconLabel;
      v72 = ShopEntity__GetPriceIcon(v7, 0LL);
      eventItemIcon = ShopEntity__GetPrice(v7, 0LL);
      if ( !v42 )
        goto LABEL_180;
      if ( !*(_DWORD *)(v42 + 24) )
        goto LABEL_181;
      if ( !v71 )
        goto LABEL_180;
      UIIconLabel__SetPurchaseDecision(v71, v72, eventItemIcon, *(_DWORD *)(v42 + 32), 0LL);
      if ( !v66 )
        goto LABEL_180;
      eventItemIcon = (__int64)this->fields.eventItemIcon;
      if ( !eventItemIcon )
        goto LABEL_180;
      ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, (int32_t)v66[2].monitor, -1, 0LL);
      return;
    case 0xA:
      v73 = this->fields.priceDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11087/*"RARE_PRI_NEED_INFO"*/, 0LL);
      if ( !v73 )
        goto LABEL_180;
      UILabel__set_text(v73, (System_String_o *)eventItemIcon, 0LL);
      v74 = this->fields.priceIconLabel;
      v75 = ShopEntity__GetPriceIcon(v7, 0LL);
      eventItemIcon = ShopEntity__GetPrice(v7, 0LL);
      if ( !v42 )
        goto LABEL_180;
      if ( !*(_DWORD *)(v42 + 24) )
        goto LABEL_181;
      if ( !v74 )
        goto LABEL_180;
      UIIconLabel__SetPurchaseDecision(v74, v75, eventItemIcon, *(_DWORD *)(v42 + 32), 0LL);
      if ( ShopEntity__GetPrice(v7, 0LL) )
      {
        Price = ShopEntity__GetPrice(v7, 0LL);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v76);
        v78 = log10((double)Price);
        if ( v78 == INFINITY )
          v79 = -2147483647;
        else
          v79 = (int)v78 + 1;
      }
      else
      {
        v79 = 1;
      }
      IsSetStrikethrough = ShopEntity__IsSetStrikethrough(v7, isInPreparation, 0LL);
      if ( IsSetStrikethrough )
      {
        v88 = 384LL;
        if ( v79 == 1 )
          v88 = 376LL;
        ShopBuyItemConfirmMenu__SetLabelActive(
          (ShopBuyItemConfirmMenu_o *)IsSetStrikethrough,
          *(UILabel_o **)((char *)&this->klass + v88),
          1,
          v87);
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
      v89 = 492LL;
      if ( v79 == 1 )
        v89 = 480LL;
      v90 = v79 == 1 ? 476LL : 488LL;
      v91 = v79 == 1 ? 472LL : 484LL;
      v112.fields.z = *(float *)((char *)&this->klass + v89);
      v112.fields.y = *(float *)((char *)&this->klass + v90);
      v112.fields.x = *(float *)((char *)&this->klass + v91);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventItemIcon, v112, 0LL);
      eventItemIcon = (__int64)this->fields.freeLabel;
      if ( !eventItemIcon )
        goto LABEL_180;
      eventItemIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventItemIcon, 0LL);
      if ( !eventItemIcon )
        goto LABEL_180;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventItemIcon, 1, 0LL);
      return;
    case 0xC:
      eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_180;
      eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)eventItemIcon,
                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
      v80 = v7->fields.itemIds;
      if ( !v80 )
        goto LABEL_180;
      if ( !v80->max_length )
        goto LABEL_181;
      if ( !eventItemIcon )
        goto LABEL_180;
      eventItemIcon = (__int64)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
                                 v80->m_Items[1],
                                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !eventItemIcon || !this->fields.priceDataLabel )
        goto LABEL_180;
      v60 = *(System_String_o **)(eventItemIcon + 24);
      v61 = this->fields.priceDataLabel;
LABEL_97:
      UILabel__set_text(v61, v60, 0LL);
      v81 = this->fields.priceIconLabel;
      v82 = ShopEntity__GetPriceIcon(v7, 0LL);
      eventItemIcon = ShopEntity__GetPrice(v7, 0LL);
      if ( !v42 )
        goto LABEL_180;
      if ( !*(_DWORD *)(v42 + 24) )
        goto LABEL_181;
      if ( !v81 )
        goto LABEL_180;
      UIIconLabel__SetPurchaseDecision(v81, v82, eventItemIcon, *(_DWORD *)(v42 + 32), 0LL);
      return;
    case 0xD:
      priceFreeDataLabel = this->fields.priceFreeDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12181/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, 0LL);
      if ( !priceFreeDataLabel )
        goto LABEL_180;
      UILabel__set_text(priceFreeDataLabel, (System_String_o *)eventItemIcon, 0LL);
      return;
    case 0xE:
      commonConsumeEntities = this->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        return;
      v85 = *(_QWORD *)&commonConsumeEntities->max_length;
      if ( (_DWORD)v85 == 1 )
      {
        ShopBuyItemConfirmMenu__SetCommonConsumePriceText(
          this,
          this->fields.priceDataLabel,
          this->fields.priceIconLabel,
          this->fields.eventItemIcon,
          commonConsumeEntities->m_Items[0],
          v41);
        return;
      }
      if ( (int)v85 < 2 )
        return;
      for ( j = 4LL; ; ++j )
      {
        v93 = this->fields.priceDataLabels;
        if ( !v93 )
          break;
        max_length = v93->max_length;
        v95 = j - 4;
        if ( j - 4 >= (int)max_length )
        {
          shopEntity = 0LL;
        }
        else
        {
          if ( v95 >= max_length )
            goto LABEL_181;
          shopEntity = (ShopEntity_o *)*((_QWORD *)&v93->obj.klass + j);
        }
        v96 = this->fields.priceIconLabels;
        if ( !v96 )
          break;
        v97 = v96->max_length;
        if ( (__int64)v95 >= (int)v97 )
        {
          v98 = 0LL;
        }
        else
        {
          if ( v95 >= v97 )
            goto LABEL_181;
          v98 = (UIIconLabel_o *)*((_QWORD *)&v96->obj.klass + j);
        }
        v99 = this->fields.eventItemIcons;
        if ( !v99 )
          break;
        v100 = v99->max_length;
        if ( (__int64)v95 >= (int)v100 )
        {
          v101 = 0LL;
        }
        else
        {
          if ( v95 >= v100 )
            goto LABEL_181;
          v101 = (ItemIconComponent_o *)*((_QWORD *)&v99->obj.klass + j);
        }
        if ( v95 >= (unsigned int)v85 )
          goto LABEL_181;
        ShopBuyItemConfirmMenu__SetCommonConsumePriceText(
          this,
          (UILabel_o *)shopEntity,
          v98,
          v101,
          *((CommonConsumeEntity_o **)&commonConsumeEntities->obj.klass + j),
          v41);
        commonConsumeEntities = this->fields.commonConsumeEntities;
        if ( !commonConsumeEntities )
          goto LABEL_180;
        LODWORD(v85) = commonConsumeEntities->max_length;
        v102 = j - 3;
        if ( v102 >= (int)v85 )
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
    sub_1BCAA3C(v12, v13);
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
        sub_1BCAA3C(this, shopEntity);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__SetSpriteActive(
        ShopBuyItemConfirmMenu_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4B12674 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, sprite, isActive);
    byte_4B12674 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sprite);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_1BCAA3C(gameObject, v7);
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

  if ( (byte_4B12675 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, sprite, spriteName);
    byte_4B12675 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sprite);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !sprite )
      sub_1BCAA3C(v6, v7);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__SetTextOnMask(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  ShopReleaseMaster_o *Master_object; // x0
  __int64 v30; // x1
  ShopReleaseMaster_o *v31; // x22
  _BOOL4 isExistCondType; // w23
  _BOOL4 v33; // w24
  _BOOL4 v34; // w25
  _BOOL4 v35; // w28
  System_String_o *IsServant; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x3
  char v40; // w26
  struct UILabel_o *v41; // x19
  __int64 *v42; // x8
  UILabel_o *textOnMask; // x1
  System_String_o *v44; // x2
  struct System_Int32_array *targetIds; // x8
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 *v48; // x8
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  UILabel_o *v52; // x19
  unsigned int shopType; // w8
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4B1267F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, shopEntity, isInPreparation);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopReleaseMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&StringLiteral_12174/*"SHOP_CANT_BUY"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_12214/*"SHOP_QUEST_OPEN"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_12212/*"SHOP_QUEST_ALREADY_CLEARED"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_12210/*"SHOP_NOT_RELEASE_SET_ITEM"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_12120/*"SHOP_ALREADY_GET"*/, v27, v28);
    byte_4B1267F = 1;
  }
  questId = 0;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, shopEntity);
  Master_object = (ShopReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  if ( !shopEntity )
    goto LABEL_67;
  v31 = Master_object;
  if ( !Master_object )
    goto LABEL_67;
  isExistCondType = ShopReleaseMaster__isExistCondType(Master_object, shopEntity->fields.id, 38, 0LL);
  v33 = ShopReleaseMaster__isExistCondType(v31, shopEntity->fields.id, 41, 0LL);
  v34 = ShopReleaseMaster__isExistCondType(v31, shopEntity->fields.id, 40, 0LL);
  v35 = ShopReleaseMaster__isExistCondType(v31, shopEntity->fields.id, 78, 0LL)
     || ShopReleaseMaster__isExistCondType(v31, shopEntity->fields.id, 79, 0LL);
  IsServant = (System_String_o *)ShopReleaseMaster__isExistCondType(v31, shopEntity->fields.id, 108, 0LL);
  v40 = (char)IsServant;
  switch ( shopEntity->fields.purchaseType )
  {
    case 2:
    case 7:
    case 9:
      if ( isInPreparation )
        goto LABEL_12;
      goto LABEL_58;
    case 4:
      Master_object = (ShopReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (ShopReleaseMaster_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Master_object,
                                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      targetIds = shopEntity->fields.targetIds;
      if ( !targetIds )
        goto LABEL_67;
      if ( !targetIds->max_length )
        sub_1BCAA44(Master_object, v30);
      if ( !Master_object )
        goto LABEL_67;
      IsServant = (System_String_o *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                       &entity,
                                       targetIds->m_Items[1],
                                       (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
            v48 = &StringLiteral_12174/*"SHOP_CANT_BUY"*/;
            goto LABEL_64;
          }
          if ( (isExistCondType || v33 || v34 || v35) | v40 & 1 )
          {
            IsServant = (System_String_o *)ShopReleaseMaster__CondClearCheck(v31, shopEntity->fields.id, 40, 0LL);
            if ( ((unsigned __int8)IsServant & 1) == 0 )
            {
              v44 = (System_String_o *)StringLiteral_1/*""*/;
              goto LABEL_66;
            }
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47);
            v48 = &StringLiteral_12120/*"SHOP_ALREADY_GET"*/;
LABEL_64:
            IsServant = LocalizationManager__Get((System_String_o *)*v48, 0LL);
            v44 = IsServant;
LABEL_66:
            textOnMask = this->fields.textOnMask;
            goto LABEL_59;
          }
          goto LABEL_58;
        }
LABEL_67:
        sub_1BCAA3C(Master_object, v30);
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
                                       v39);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_58;
      IsServant = (System_String_o *)ShopEntity__IsAnotherItemBuyable(shopEntity, 0LL);
      if ( ((unsigned __int8)IsServant & 1) != 0 )
        goto LABEL_58;
LABEL_12:
      v41 = this->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37);
      v42 = &StringLiteral_12120/*"SHOP_ALREADY_GET"*/;
      goto LABEL_15;
    case 5:
      IsServant = (System_String_o *)ShopBuyItemConfirmMenu__GetIsSetItemEventShop(
                                       (ShopBuyItemConfirmMenu_o *)IsServant,
                                       shopEntity->fields.targetIds,
                                       v38);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_38;
      if ( !isInPreparation )
        goto LABEL_58;
      v41 = this->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50);
      v42 = &StringLiteral_12210/*"SHOP_NOT_RELEASE_SET_ITEM"*/;
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
            v52 = this->fields.textOnMask;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
            Master_object = (ShopReleaseMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12214/*"SHOP_QUEST_OPEN"*/, 0LL);
            if ( v52 )
            {
              UILabel__set_text(v52, (System_String_o *)Master_object, 0LL);
              return;
            }
            goto LABEL_67;
          }
        }
LABEL_58:
        textOnMask = this->fields.textOnMask;
        v44 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_59;
      }
      IsServant = (System_String_o *)ShopEntity__isQuestNotClearItemClosed(shopEntity, 0, 0LL);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_58;
LABEL_44:
      v41 = this->fields.textOnMask;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49);
      v42 = &StringLiteral_12212/*"SHOP_QUEST_ALREADY_CLEARED"*/;
LABEL_15:
      IsServant = LocalizationManager__Get((System_String_o *)*v42, 0LL);
      textOnMask = v41;
      v44 = IsServant;
LABEL_59:
      ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)IsServant, textOnMask, v44, v39);
      return;
    default:
LABEL_38:
      if ( !isInPreparation )
        goto LABEL_58;
      if ( !((isExistCondType || v33 || v35) | v40 & 1) )
        goto LABEL_58;
      IsServant = (System_String_o *)ShopReleaseMaster__CondClearCheck(v31, shopEntity->fields.id, 1, 0LL);
      if ( ((unsigned __int8)IsServant & 1) == 0 )
        goto LABEL_58;
      goto LABEL_12;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemConfirmMenu__SetWarningLabel(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  UILabel_o *warningLabel; // x23
  struct UILabel_o **p_warningLabel; // x24
  int64_t gameObject; // x0
  ShopBuyItemConfirmMenu_o *v90; // x0
  const MethodInfo *v91; // x3
  ShopBuyItemConfirmMenu_o *v92; // x0
  const MethodInfo *v93; // x3
  ShopBuyItemConfirmMenu_o *v94; // x0
  const MethodInfo *v95; // x3
  __int64 v96; // x1
  UILabel_o *v97; // x19
  __int64 *v98; // x8
  __int64 v99; // x1
  __int64 v100; // x1
  const MethodInfo *v101; // x1
  System_Int32_array *UserItemCounts; // x22
  __int64 v103; // x20
  UnityEngine_Object_o *resetWarningLabel; // x21
  UnityEngine_Object_o *shopResetButton; // x21
  ItemEntity_o *EntityByType; // x0
  __int64 v107; // x1
  struct System_String_StaticFields *p_name; // x8
  ShopBuyItemConfirmMenu_o *v109; // x0
  const MethodInfo *v110; // x3
  struct ShopEntity_o *v111; // x8
  UILabel_o *v112; // x20
  System_String_o *v113; // x22
  Il2CppObject *v114; // x0
  ShopBuyItemConfirmMenu_o *v115; // x0
  const MethodInfo *v116; // x3
  __int64 *v117; // x8
  __int64 *v118; // x8
  System_String_o *v119; // x21
  struct ShopEntity_o *v120; // x8
  struct System_Int32_array *itemIds; // x8
  Il2CppObject *monitor; // x1
  __int64 v123; // x1
  BalanceConfig_c *v124; // x8
  int v125; // w22
  UILabel_o *v126; // x22
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  __int64 v128; // x9
  CommonConsumeEntity_o *v129; // x20
  int32_t num; // w22
  __int64 v131; // x1
  int32_t v132; // w19
  __int64 v133; // x1
  struct System_String_o *v134; // x22
  int v135; // w26
  Il2CppClass **v136; // x8
  CommonConsumeEntity_o *v137; // x23
  int v138; // w28
  Il2CppObject *Name; // x0
  System_String_o *v140; // x0
  int stringLength; // w8
  System_String_o *v142; // x0
  __int64 v143; // x1
  Il2CppObject *v144; // x20
  int32_t v145; // w19
  BalanceConfig_c *v146; // x8
  int32_t v147; // w20
  int32_t PresentBoxMax; // w9
  struct UILabel_o *v149; // x19
  __int64 *v150; // x8
  __int64 v151; // x1
  Il2CppObject *MasterData_object; // x19
  int32_t Sum; // w0
  __int64 v154; // x1
  BalanceConfig_c *v155; // x8
  int32_t v156; // w19
  int32_t UserItemMax; // w9
  int32_t v158; // w20
  System_String_o *v159; // x1
  Il2CppObject *Empty; // x21
  int32_t v161; // w22
  int32_t resetLimitNum; // w27
  System_String_o *v163; // x23
  Il2CppObject *v164; // x24
  Il2CppObject *v165; // x0
  System_String_o *v166; // x0
  __int64 v167; // x1
  System_String_o *v168; // x23
  Il2CppObject *v169; // x0
  System_String_o *v170; // x23
  __int64 v171; // x1
  Il2CppObject *Master_object; // x24
  __int64 v173; // x1
  Il2CppObject *v174; // x19
  const MethodInfo *v175; // x3
  System_String_o *v176; // x0
  System_String_o *v177; // x0
  int32_t v178; // [xsp+0h] [xbp-90h] BYREF
  int32_t limitNum; // [xsp+4h] [xbp-8Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-88h] BYREF
  int32_t recordNum; // [xsp+14h] [xbp-7Ch] BYREF
  int32_t buyQuestNum[2]; // [xsp+18h] [xbp-78h] BYREF
  int32_t buyServantEquipNum[2]; // [xsp+20h] [xbp-70h] BYREF
  ShopResetEntity_o *v184; // [xsp+28h] [xbp-68h] BYREF
  int32_t questId[2]; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4B1267C & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, shopEntity, isInPreparation);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopResetMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserShopMaster___, v21, v22);
    sub_1BCA7E0(&DataManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v25, v26);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v27, v28);
    sub_1BCA7E0(&int_TypeInfo, v29, v30);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38);
    sub_1BCA7E0(&string_TypeInfo, v39, v40);
    sub_1BCA7E0(&StringLiteral_12157/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_12149/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_12138/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_SHORTAGE"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_12158/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_12139/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_MESSAGE"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_12161/*"SHOP_BUY_RARE_PRI_CONFIRM_WARNING"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_12154/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_10953/*"QP_NAME"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_12145/*"SHOP_BUY_CONFIRM_SOLD_OUT_WARNING"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_12134/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_12141/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_12136/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_12142/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_12143/*"SHOP_BUY_CONFIRM_QUEST_CLAER"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_25372/*"{0}、"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_12148/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_12168/*"SHOP_BUY_STONE_FRAGMENTS_CONFIRM_WARNING"*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_12151/*"SHOP_BUY_ITEM_FULL_WARNING"*/, v75, v76);
    sub_1BCA7E0(&StringLiteral_12153/*"SHOP_BUY_ITEM_OVER_WARNING"*/, v77, v78);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v79, v80);
    sub_1BCA7E0(&StringLiteral_12137/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_LIMIT"*/, v81, v82);
    sub_1BCA7E0(&StringLiteral_12144/*"SHOP_BUY_CONFIRM_QUEST_HOLD"*/, v83, v84);
    sub_1BCA7E0(&StringLiteral_12140/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_NO_LIMIT_MESSAGE"*/, v85, v86);
    byte_4B1267C = 1;
  }
  *(_QWORD *)questId = 0LL;
  *(_QWORD *)buyServantEquipNum = 0LL;
  v184 = 0LL;
  *(_QWORD *)buyQuestNum = 0LL;
  recordNum = 0;
  entity = 0LL;
  p_warningLabel = &this->fields.warningLabel;
  warningLabel = this->fields.warningLabel;
  gameObject = (int64_t)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, shopEntity);
  if ( !warningLabel )
    goto LABEL_229;
  UILabel__set_fontSize(warningLabel, BalanceConfig_TypeInfo->static_fields->DefaultFontSize, 0LL);
  ShopBuyItemConfirmMenu__SetLabelText(v90, this->fields.warningLabel, (System_String_o *)StringLiteral_1/*""*/, v91);
  ShopBuyItemConfirmMenu__SetLabelText(v92, this->fields.resetWarningLabel, (System_String_o *)StringLiteral_1/*""*/, v93);
  ShopBuyItemConfirmMenu__SetLabelActive(v94, this->fields.resetWarningLabel, 0, v95);
  if ( !shopEntity )
    goto LABEL_229;
  if ( shopEntity->fields.purchaseType == 6 && shopEntity->fields.shopType == 3 )
  {
    if ( isInPreparation )
    {
      if ( !ShopEntity__isQuestNotClearItemClosed(shopEntity, 0, 0LL) )
        goto LABEL_21;
LABEL_14:
      v97 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v96);
      v98 = &StringLiteral_12143/*"SHOP_BUY_CONFIRM_QUEST_CLAER"*/;
      goto LABEL_58;
    }
    if ( ShopEntity__isQuestNotClear(shopEntity, &questId[1], 0, 0LL)
      && ShopEntity__isQuestNotClearItemClosedSub(shopEntity, questId[1], 0, 0LL) )
    {
      goto LABEL_14;
    }
    if ( ShopEntity__IsQuestHold(shopEntity, 0LL) )
    {
      v97 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v99);
      v98 = &StringLiteral_12144/*"SHOP_BUY_CONFIRM_QUEST_HOLD"*/;
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v100);
    if ( !UnityEngine_Object__op_Inequality(resetWarningLabel, 0LL, 0LL) )
      goto LABEL_55;
    shopResetButton = (UnityEngine_Object_o *)this->fields.shopResetButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, shopEntity);
    if ( !UnityEngine_Object__op_Inequality(shopResetButton, 0LL, 0LL) )
      goto LABEL_55;
    gameObject = (int64_t)this->fields.shopResetButton;
    if ( !gameObject )
      goto LABEL_229;
    gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_229;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
    {
LABEL_55:
      v97 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
      v98 = &StringLiteral_12145/*"SHOP_BUY_CONFIRM_SOLD_OUT_WARNING"*/;
      goto LABEL_58;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, shopEntity);
    gameObject = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !gameObject )
      goto LABEL_229;
    EntityByType = ItemMaster__GetEntityByType((ItemMaster_o *)gameObject, 37, 0LL);
    if ( EntityByType )
      p_name = (struct System_String_StaticFields *)&EntityByType->fields.name;
    else
      p_name = string_TypeInfo->static_fields;
    Empty = (Il2CppObject *)p_name->Empty;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v107);
    gameObject = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !gameObject )
      goto LABEL_229;
    v161 = *(_DWORD *)(gameObject + 96);
    gameObject = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopResetMaster___);
    if ( !gameObject )
      goto LABEL_229;
    gameObject = ShopResetMaster__TryGetEntity(
                   (ShopResetMaster_o *)gameObject,
                   &v184,
                   shopEntity->fields.baseShopId,
                   v161,
                   0LL);
    if ( (gameObject & 1) != 0 )
    {
      if ( !v184 )
        goto LABEL_229;
      resetLimitNum = v184->fields.resetLimitNum;
    }
    else
    {
      resetLimitNum = 0;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
    if ( resetLimitNum < 1 )
    {
      v168 = LocalizationManager__Get((System_String_o *)StringLiteral_12140/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_NO_LIMIT_MESSAGE"*/, 0LL);
      limitNum = shopEntity->fields.limitNum;
      v169 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &limitNum);
      v166 = System_String__Format_62415592(v168, Empty, v169, 0LL);
    }
    else
    {
      v163 = LocalizationManager__Get((System_String_o *)StringLiteral_12139/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_MESSAGE"*/, 0LL);
      limitNum = resetLimitNum;
      v164 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &limitNum);
      v178 = shopEntity->fields.limitNum;
      v165 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v178);
      v166 = System_String__Format_62415660(v163, Empty, v164, v165, 0LL);
    }
    v170 = v166;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v167);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserShopMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v171);
    gameObject = NetworkManager__get_UserId(0LL);
    if ( !Master_object )
LABEL_229:
      sub_1BCAA3C(gameObject, shopEntity);
    gameObject = (int64_t)UserShopMaster__GetEntityDefinitely(
                            (UserShopMaster_o *)Master_object,
                            gameObject,
                            shopEntity->fields.baseShopId,
                            0LL);
    if ( resetLimitNum < 1 )
      goto LABEL_233;
    if ( !gameObject )
      goto LABEL_229;
    if ( resetLimitNum <= *(_DWORD *)(gameObject + 40) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
      v177 = LocalizationManager__Get((System_String_o *)StringLiteral_12137/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_LIMIT"*/, 0LL);
    }
    else
    {
LABEL_233:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, shopEntity);
      v174 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v173);
      gameObject = NetworkManager__get_UserId(0LL);
      if ( !v174 )
        goto LABEL_229;
      gameObject = (int64_t)UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)v174, gameObject, v161, 0LL);
      if ( !gameObject )
        goto LABEL_229;
      if ( *(int *)(gameObject + 28) > 0 )
        goto LABEL_227;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
      v176 = LocalizationManager__Get((System_String_o *)StringLiteral_12138/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_SHORTAGE"*/, 0LL);
      v177 = System_String__Format(v176, Empty, 0LL);
    }
    gameObject = (int64_t)System_String__Concat_62401220(v170, v177, 0LL);
    v170 = (System_String_o *)gameObject;
LABEL_227:
    ShopBuyItemConfirmMenu__SetLabelActive(
      (ShopBuyItemConfirmMenu_o *)gameObject,
      this->fields.resetWarningLabel,
      1,
      v175);
    gameObject = (int64_t)this->fields.resetWarningLabel;
    if ( gameObject )
    {
      v159 = v170;
      goto LABEL_190;
    }
    goto LABEL_229;
  }
  if ( isInPreparation )
  {
    v97 = *p_warningLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v100);
    v98 = &StringLiteral_12141/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/;
LABEL_58:
    v109 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v98, 0LL);
LABEL_59:
    ShopBuyItemConfirmMenu__SetLabelText(v109, v97, (System_String_o *)v109, v110);
    return;
  }
  if ( !ShopEntity__IsEnable(shopEntity, 0LL, 0LL) )
  {
    v97 = *p_warningLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v101);
    v98 = &StringLiteral_12142/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/;
    goto LABEL_58;
  }
  UserItemCounts = ShopBuyItemConfirmMenu__GetUserItemCounts(this, v101);
  switch ( shopEntity->fields.payType )
  {
    case 2:
      gameObject = ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_229;
      if ( !UserItemCounts->max_length )
        goto LABEL_230;
      if ( (int)gameObject <= UserItemCounts->m_Items[1] )
        goto LABEL_151;
      v112 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
      v113 = LocalizationManager__Get((System_String_o *)StringLiteral_12148/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, 0LL);
      v114 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10953/*"QP_NAME"*/, 0LL);
      v115 = (ShopBuyItemConfirmMenu_o *)System_String__Format(v113, v114, 0LL);
      goto LABEL_109;
    case 4:
      gameObject = ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_229;
      if ( !UserItemCounts->max_length )
        goto LABEL_230;
      if ( (int)gameObject <= UserItemCounts->m_Items[1] )
        goto LABEL_151;
      v112 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
      v117 = &StringLiteral_12154/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/;
      goto LABEL_108;
    case 6:
    case 0xB:
    case 0xC:
      if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 2 )
      {
        if ( ShopEntity__GetItemCount(shopEntity, 0LL) >= 1 )
        {
          v103 = 0LL;
          while ( 1 )
          {
            gameObject = ShopEntity__GetPrices(shopEntity, v103, 0LL);
            if ( !UserItemCounts )
              goto LABEL_229;
            if ( (unsigned int)v103 >= UserItemCounts->max_length )
              goto LABEL_230;
            if ( (int)gameObject > UserItemCounts->m_Items[v103 + 1] )
              break;
            if ( (int)++v103 >= ShopEntity__GetItemCount(shopEntity, 0LL) )
              goto LABEL_151;
          }
          v97 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
          v98 = &StringLiteral_12149/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/;
          goto LABEL_58;
        }
        goto LABEL_151;
      }
      gameObject = ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_229;
      if ( !UserItemCounts->max_length )
        goto LABEL_230;
      if ( (int)gameObject <= UserItemCounts->m_Items[1] )
        goto LABEL_151;
      gameObject = ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, (const MethodInfo *)shopEntity);
      v111 = this->fields.shopEntity;
      if ( !v111 )
        goto LABEL_229;
      if ( (gameObject & 1) != 0 )
      {
        gameObject = (int64_t)ShopEntity__GetAnotherPayItemIds(this->fields.shopEntity, 0LL);
        if ( !gameObject )
          goto LABEL_229;
      }
      else
      {
        gameObject = (int64_t)v111->fields.itemIds;
        if ( !gameObject )
          goto LABEL_229;
      }
      if ( !*(_DWORD *)(gameObject + 24) )
LABEL_230:
        sub_1BCAA44(gameObject, shopEntity);
      v132 = *(_DWORD *)(gameObject + 32);
      gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_229;
      gameObject = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !gameObject )
        goto LABEL_229;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
              &entity,
              v132,
              (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        return;
      v97 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v133);
      gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12148/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, 0LL);
      if ( !entity )
        goto LABEL_229;
      monitor = (Il2CppObject *)entity[1].monitor;
      goto LABEL_150;
    case 8:
      gameObject = ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_229;
      if ( !UserItemCounts->max_length )
        goto LABEL_230;
      if ( (int)gameObject <= UserItemCounts->m_Items[1] )
        goto LABEL_151;
      v97 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
      v118 = &StringLiteral_12168/*"SHOP_BUY_STONE_FRAGMENTS_CONFIRM_WARNING"*/;
      goto LABEL_92;
    case 9:
      gameObject = ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_229;
      if ( !UserItemCounts->max_length )
        goto LABEL_230;
      if ( (int)gameObject <= UserItemCounts->m_Items[1] )
        goto LABEL_151;
      v97 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
      v118 = &StringLiteral_12134/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/;
LABEL_92:
      v119 = LocalizationManager__Get((System_String_o *)*v118, 0LL);
      gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_229;
      gameObject = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
      v120 = this->fields.shopEntity;
      if ( !v120 )
        goto LABEL_229;
      itemIds = v120->fields.itemIds;
      if ( !itemIds )
        goto LABEL_229;
      if ( !itemIds->max_length )
        goto LABEL_230;
      if ( !gameObject )
        goto LABEL_229;
      gameObject = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                              itemIds->m_Items[1],
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !gameObject )
        goto LABEL_229;
      monitor = *(Il2CppObject **)(gameObject + 24);
      goto LABEL_99;
    case 0xA:
      gameObject = ShopEntity__GetPrice(shopEntity, 0LL);
      if ( !UserItemCounts )
        goto LABEL_229;
      if ( !UserItemCounts->max_length )
        goto LABEL_230;
      if ( (int)gameObject <= UserItemCounts->m_Items[1]
        || ShopEntity__IsAfterTheFreeShopReleaseDate(shopEntity, 0LL)
        && ShopEntity__IsFulFilledFreeExchangeCondition(shopEntity, 0LL) )
      {
        goto LABEL_151;
      }
      v112 = *p_warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v123);
      v117 = &StringLiteral_12161/*"SHOP_BUY_RARE_PRI_CONFIRM_WARNING"*/;
LABEL_108:
      v115 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v117, 0LL);
LABEL_109:
      ShopBuyItemConfirmMenu__SetLabelText(v115, v112, (System_String_o *)v115, v116);
      goto LABEL_151;
    case 0xE:
      if ( !this->fields.commonConsumeEntities )
        goto LABEL_151;
      gameObject = ShopEntity__get_TargetId(shopEntity, 0LL);
      v124 = BalanceConfig_TypeInfo;
      v125 = gameObject;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, shopEntity);
        v124 = BalanceConfig_TypeInfo;
      }
      if ( v125 != v124->static_fields->ApSeedExchangeTargetItemId )
        goto LABEL_118;
      v126 = *p_warningLabel;
      if ( !v124->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v124, shopEntity);
      if ( !v126 )
        goto LABEL_229;
      UILabel__set_fontSize(v126, BalanceConfig_TypeInfo->static_fields->TradeApDialogWarningLabelFontSize, 0LL);
LABEL_118:
      commonConsumeEntities = this->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        goto LABEL_229;
      v128 = *(_QWORD *)&commonConsumeEntities->max_length;
      if ( (_DWORD)v128 == 1 )
      {
        v129 = commonConsumeEntities->m_Items[0];
        if ( !v129 )
          goto LABEL_229;
        num = v129->fields.num;
        if ( num > CommonConsumeEntity__GetUserHasNum(commonConsumeEntities->m_Items[0], 0LL) )
        {
          v97 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v131);
          v119 = LocalizationManager__Get((System_String_o *)StringLiteral_12136/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, 0LL);
          monitor = (Il2CppObject *)CommonConsumeEntity__GetName(v129, 0LL);
LABEL_99:
          gameObject = (int64_t)v119;
          goto LABEL_150;
        }
      }
      else if ( (int)v128 > 1 )
      {
        v134 = string_TypeInfo->static_fields->Empty;
        v135 = 0;
        do
        {
          if ( v135 >= (unsigned int)v128 )
            goto LABEL_230;
          v136 = &commonConsumeEntities->obj.klass + v135;
          v137 = (CommonConsumeEntity_o *)v136[4];
          if ( !v137 )
            goto LABEL_229;
          v138 = v137->fields.num;
          gameObject = CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)v136[4], 0LL);
          if ( v138 > (int)gameObject )
          {
            Name = (Il2CppObject *)CommonConsumeEntity__GetName(v137, 0LL);
            v140 = System_String__Format((System_String_o *)StringLiteral_25372/*"{0}、"*/, Name, 0LL);
            gameObject = (int64_t)System_String__Concat_62401220(v134, v140, 0LL);
            v134 = (struct System_String_o *)gameObject;
          }
          commonConsumeEntities = this->fields.commonConsumeEntities;
          if ( !commonConsumeEntities )
            goto LABEL_229;
          LODWORD(v128) = commonConsumeEntities->max_length;
          ++v135;
        }
        while ( v135 < (int)v128 );
        if ( !v134 )
          goto LABEL_229;
        stringLength = v134->fields._stringLength;
        if ( stringLength >= 1 )
        {
          v142 = System_String__Remove_62420040(v134, stringLength - 1, 0LL);
          v97 = *p_warningLabel;
          v144 = (Il2CppObject *)v142;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v143);
          gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12136/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, 0LL);
          monitor = v144;
LABEL_150:
          v109 = (ShopBuyItemConfirmMenu_o *)System_String__Format((System_String_o *)gameObject, monitor, 0LL);
          goto LABEL_59;
        }
      }
LABEL_151:
      questId[0] = 0;
      *(_QWORD *)buyQuestNum = 0LL;
      *(_QWORD *)buyServantEquipNum = 0LL;
      recordNum = 0;
      ShopEntity__GetSum(
        shopEntity,
        questId,
        &buyServantEquipNum[1],
        buyServantEquipNum,
        &buyQuestNum[1],
        buyQuestNum,
        &recordNum,
        0LL);
      if ( buyServantEquipNum[0] + buyServantEquipNum[1] + buyQuestNum[1] >= 1 )
      {
        gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_229;
        gameObject = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
        if ( !userGameEntity )
          goto LABEL_229;
        if ( !gameObject )
          goto LABEL_229;
        gameObject = (int64_t)UserPresentBoxMaster__getVaildList(
                                (UserPresentBoxMaster_o *)gameObject,
                                userGameEntity->fields.userId,
                                0LL);
        if ( !gameObject )
          goto LABEL_229;
        if ( shopEntity->fields.purchaseType == 5 )
          v145 = recordNum;
        else
          v145 = buyServantEquipNum[0] + buyServantEquipNum[1] + buyQuestNum[1];
        v146 = BalanceConfig_TypeInfo;
        v147 = *(_DWORD *)(gameObject + 24);
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, shopEntity);
          v146 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v146->static_fields->PresentBoxMax;
        if ( PresentBoxMax <= v147 )
        {
          v149 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
          v150 = &StringLiteral_12157/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/;
LABEL_188:
          gameObject = (int64_t)LocalizationManager__Get((System_String_o *)*v150, 0LL);
          if ( v149 )
          {
            v159 = (System_String_o *)gameObject;
            gameObject = (int64_t)v149;
LABEL_190:
            UILabel__set_text((UILabel_o *)gameObject, v159, 0LL);
            return;
          }
          goto LABEL_229;
        }
        if ( !v146->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v146, shopEntity);
          PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
        }
        if ( v145 + v147 > PresentBoxMax )
        {
          v149 = *p_warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
          v150 = &StringLiteral_12158/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/;
          goto LABEL_188;
        }
      }
      if ( questId[0] < 1 )
        return;
      gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_229;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v151);
      gameObject = NetworkManager__get_UserId(0LL);
      if ( !MasterData_object )
        goto LABEL_229;
      Sum = UserItemMaster__getSum((UserItemMaster_o *)MasterData_object, gameObject, 0LL);
      v155 = BalanceConfig_TypeInfo;
      v156 = Sum;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v154);
        v155 = BalanceConfig_TypeInfo;
      }
      UserItemMax = v155->static_fields->UserItemMax;
      if ( v156 >= UserItemMax )
      {
        v149 = *p_warningLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v154);
        v150 = &StringLiteral_12151/*"SHOP_BUY_ITEM_FULL_WARNING"*/;
        goto LABEL_188;
      }
      v158 = questId[0];
      if ( !v155->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v155, v154);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      if ( v158 + v156 > UserItemMax )
      {
        v149 = *p_warningLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v154);
        v150 = &StringLiteral_12153/*"SHOP_BUY_ITEM_OVER_WARNING"*/;
        goto LABEL_188;
      }
      return;
    default:
      goto LABEL_151;
  }
}


void __fastcall ShopBuyItemConfirmMenu__SetWindowSize(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *windowSprite; // x20
  __int64 v7; // x1
  UnityEngine_Object_o *itemInfoBase; // x20
  __int64 v9; // x1
  UnityEngine_Object_o *priceInfoBase; // x20
  __int64 v11; // x1
  UnityEngine_Object_o *shopResetButton; // x20
  __int64 v13; // x1
  UnityEngine_Component_o *gameObject; // x0
  UIWidget_o *v15; // x20
  char v16; // w21
  ShopBuyItemConfirmMenu_c *v17; // x8
  struct ShopBuyItemConfirmMenu_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  float DEFAULT_BUTTON_POS_Y; // s0
  UnityEngine_GameObject_o *v22; // x0

  if ( (byte_4B12696 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&ShopBuyItemConfirmMenu_TypeInfo, v4, v5);
    byte_4B12696 = 1;
  }
  windowSprite = (UnityEngine_Object_o *)this->fields.windowSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(windowSprite, 0LL, 0LL) )
  {
    itemInfoBase = (UnityEngine_Object_o *)this->fields.itemInfoBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( !UnityEngine_Object__op_Equality(itemInfoBase, 0LL, 0LL) )
    {
      priceInfoBase = (UnityEngine_Object_o *)this->fields.priceInfoBase;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      if ( !UnityEngine_Object__op_Equality(priceInfoBase, 0LL, 0LL) )
      {
        shopResetButton = (UnityEngine_Object_o *)this->fields.shopResetButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
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
              v15 = (UIWidget_o *)this->fields.windowSprite;
              v16 = (char)gameObject;
              v17 = ShopBuyItemConfirmMenu_TypeInfo;
              if ( !ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo, v13);
                v17 = ShopBuyItemConfirmMenu_TypeInfo;
              }
              static_fields = v17->static_fields;
              if ( (v16 & 1) != 0 )
              {
                if ( v15 )
                {
                  UIWidget__set_height(v15, static_fields->RESET_LAYOUT_WINDOW_SIZE_Y, 0LL);
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
                    v19 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
                    GameObjectExtensions__SetLocalPositionY(
                      v19,
                      (float)(ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y
                            - ShopBuyItemConfirmMenu_TypeInfo->static_fields->RESET_LAYOUT_OFFSET_Y),
                      0LL);
                    gameObject = (UnityEngine_Component_o *)this->fields.shopResetButton;
                    if ( gameObject )
                    {
                      v20 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
                      DEFAULT_BUTTON_POS_Y = (float)(ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y
                                                   - ShopBuyItemConfirmMenu_TypeInfo->static_fields->RESET_LAYOUT_OFFSET_Y);
LABEL_29:
                      GameObjectExtensions__SetLocalPositionY(v20, DEFAULT_BUTTON_POS_Y, 0LL);
                      return;
                    }
                  }
                }
              }
              else if ( v15 )
              {
                UIWidget__set_height(v15, static_fields->DEFAULT_WINDOW_SIZE_Y, 0LL);
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
                  v22 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
                  GameObjectExtensions__SetLocalPositionY(
                    v22,
                    (float)ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y,
                    0LL);
                  gameObject = (UnityEngine_Component_o *)this->fields.shopResetButton;
                  if ( gameObject )
                  {
                    v20 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
                    DEFAULT_BUTTON_POS_Y = (float)ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y;
                    goto LABEL_29;
                  }
                }
              }
            }
          }
          sub_1BCAA3C(gameObject, v13);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x20
  CommonUI_o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  ServantStatusDialog_EndDelegate_o *v23; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1268E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&commandCodeId, method);
    sub_1BCA7E0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v5, v6);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B1268E = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_9;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         commandCodeId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
  {
    v17 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = entity;
    v19 = (CommonUI_o *)v17;
    v23 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v20, v21, v22);
    ServantStatusDialog_EndDelegate___ctor(
      v23,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v19 )
    {
      CommonUI__OpenServantEquipStatusDialog_30782812(v19, 25, (CommandCodeEntity_o *)v18, 0, v23, 0LL, 0LL);
      return 0;
    }
LABEL_9:
    sub_1BCAA3C(Instance, v16);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  int32_t itemDetailDialogOverwriteDepth; // w23
  Il2CppObject *v18; // x0
  Il2CppObject *v19; // x20
  CommonUI_o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  ItemDetailInfoComponent_CallbackFunc_o *v24; // x22
  int32_t v25; // w3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1268D & 1) == 0 )
  {
    sub_1BCA7E0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, *(_QWORD *)&itemId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B1268D = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_13;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         itemId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    itemDetailDialogOverwriteDepth = this->fields.itemDetailDialogOverwriteDepth;
    v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = entity;
    v20 = (CommonUI_o *)v18;
    v24 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                      ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                      v21,
                                                      v22,
                                                      v23);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v24,
      (Il2CppObject *)this,
      (intptr_t)Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__,
      0LL);
    if ( itemDetailDialogOverwriteDepth == 0x80000000 )
    {
      if ( v20 )
      {
        v25 = 50;
LABEL_11:
        CommonUI__OpenItemDetailDialog(v20, (ItemEntity_o *)v19, v24, v25, 0LL);
        return 0;
      }
    }
    else if ( v20 )
    {
      v25 = this->fields.itemDetailDialogOverwriteDepth;
      goto LABEL_11;
    }
LABEL_13:
    sub_1BCAA3C(Instance, v16);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  System_String_o *name; // x21
  System_String_o *infoMessage; // x20
  CommonUI_o *v14; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ItemDetailInfoComponent_CallbackFunc_o *v18; // x23

  v4 = (Il2CppObject *)this;
  if ( (byte_4B1268F & 1) == 0 )
  {
    sub_1BCA7E0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, shopEntity, method);
    sub_1BCA7E0(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    this = (ShopBuyItemConfirmMenu_o *)sub_1BCA7E0(&StringLiteral_9382/*"NONE"*/, v9, v10);
    byte_4B1268F = 1;
  }
  if ( !shopEntity )
    goto LABEL_9;
  if ( !System_String__IsNullOrEmpty(shopEntity->fields.infoMessage, 0LL)
    && System_String__op_Inequality(shopEntity->fields.infoMessage, (System_String_o *)StringLiteral_9382/*"NONE"*/, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    name = shopEntity->fields.name;
    infoMessage = shopEntity->fields.infoMessage;
    v14 = (CommonUI_o *)Instance;
    v18 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                      ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                      v15,
                                                      v16,
                                                      v17);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v18,
      v4,
      (intptr_t)Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__,
      0LL);
    if ( v14 )
    {
      CommonUI__OpenItemDetailDialog_30842472(v14, name, infoMessage, v18, 0LL);
      return 0;
    }
LABEL_9:
    sub_1BCAA3C(this, shopEntity);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *Instance; // x0
  __int64 v26; // x1
  Il2CppObject *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  ServantLeaderInfo_o *v31; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  ServantStatusDialog_EndDelegate_o *v35; // x20
  Il2CppObject *v37; // x23
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  EquipTargetInfo_o *v41; // x24
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  ServantStatusDialog_EndDelegate_o *v45; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1268C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v11, v12);
    sub_1BCA7E0(&EquipTargetInfo_TypeInfo, v13, v14);
    sub_1BCA7E0(&ServantLeaderInfo_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__, v17, v18);
    sub_1BCA7E0(&Method_ShopBuyItemConfirmMenu_EndShowServantStatusDialog__, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    byte_4B1268C = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_23;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          servantId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
    v27 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v31 = (ServantLeaderInfo_o *)sub_1BCAA2C(ServantLeaderInfo_TypeInfo, v28, v29, v30);
    ServantLeaderInfo___ctor_41224104(v31, servantId, 0, 1, 0LL);
    v35 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v32, v33, v34);
    ServantStatusDialog_EndDelegate___ctor(
      v35,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantStatusDialog__,
      0LL);
    if ( v27 )
    {
      CommonUI__OpenServantStatusDialog_30778732((CommonUI_o *)v27, 7, v31, v35, 0LL);
      return 0;
    }
    goto LABEL_23;
  }
  Instance = entity;
  if ( !entity )
    goto LABEL_23;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL) )
  {
    v37 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v41 = (EquipTargetInfo_o *)sub_1BCAA2C(EquipTargetInfo_TypeInfo, v38, v39, v40);
    EquipTargetInfo___ctor_39602340(v41, servantId, limitCount, level, 0, 0LL);
    v45 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v42, v43, v44);
    ServantStatusDialog_EndDelegate___ctor(
      v45,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0LL);
    if ( v37 )
    {
      CommonUI__OpenServantEquipStatusDialog_30781828((CommonUI_o *)v37, 7, v41, v45, 0LL, 0LL);
      return 0;
    }
LABEL_23:
    sub_1BCAA3C(Instance, v26);
  }
  return 2;
}


System_String_o *__fastcall ShopBuyItemConfirmMenu__get_closeBtnPath(
        ShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1269A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15808/*"Window/CancelButton"*/, method, v2);
    byte_4B1269A = 1;
  }
  return (System_String_o *)StringLiteral_15808/*"Window/CancelButton"*/;
}


bool __fastcall ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventRewardRootComponent_c *v4; // x0
  ShopEntity_o *shopEntity; // x0

  if ( (byte_4B1266F & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardRootComponent_TypeInfo, method, v2);
    byte_4B1266F = 1;
  }
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, method);
  if ( !byte_4B11136 )
  {
    sub_1BCA7E0(&EventRewardRootComponent_TypeInfo, method, v2);
    byte_4B11136 = 1;
  }
  v4 = EventRewardRootComponent_TypeInfo;
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, method);
    v4 = EventRewardRootComponent_TypeInfo;
  }
  if ( !v4->static_fields->_IsAnotherPayFlag_k__BackingField )
    return 0;
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    sub_1BCAA3C(0LL, method);
  return ShopEntity__IsAnotherItemBuyable(shopEntity, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu___c__DisplayClass114_0___ctor(
        ShopBuyItemConfirmMenu___c__DisplayClass114_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopBuyItemConfirmMenu___c__DisplayClass114_0___ReturnWarningRarePri_b__0(
        ShopBuyItemConfirmMenu___c__DisplayClass114_0_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ShopBuyItemConfirmMenu___c__DisplayClass114_0_o *v8; // x19
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
  if ( (byte_4B1269D & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu___c__DisplayClass114_0_o *)sub_1BCA7E0(
                                                                &Method_ActionExtensions_Call_int___,
                                                                method,
                                                                v2);
    byte_4B1269D = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this
    || (onChecked = _4__this->fields.onChecked,
        _4__this->fields.onChecked = 0LL,
        sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.onChecked, 0LL, v2, v3, v4, v5, v6, v7),
        (v17 = v8->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(this, method);
  }
  onCloseReturnWarning = (System_Action_T__o *)v17->fields.onCloseReturnWarning;
  v17->fields.onCloseReturnWarning = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v17->fields.onCloseReturnWarning, 0LL, v11, v12, v13, v14, v15, v16);
  if ( v8->fields.isDecide )
    ActionExtensions__Call(onChecked, 0LL);
  else
    ActionExtensions__Call_int_(
      onCloseReturnWarning,
      0,
      (const MethodInfo_2E654E8 *)Method_ActionExtensions_Call_int___);
}