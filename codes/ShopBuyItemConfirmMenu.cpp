void ShopBuyItemConfirmMenu___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct ShopBuyItemConfirmMenu_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct ShopBuyItemConfirmMenu_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct ShopBuyItemConfirmMenu_StaticFields *v24; // x8

  if ( (byte_596C7AF & 1) == 0 )
  {
    sub_2213A60(&ShopBuyItemConfirmMenu_TypeInfo);
    sub_2213A60(&StringLiteral_18336/*"btn_txt_event_"*/);
    sub_2213A60(&StringLiteral_18393/*"btn_txt_trade"*/);
    sub_2213A60(&StringLiteral_18370/*"btn_txt_sale"*/);
    byte_596C7AF = 1;
  }
  v7 = StringLiteral_18336/*"btn_txt_event_"*/;
  ShopBuyItemConfirmMenu_TypeInfo->static_fields->VALENTINE_BTN_NAME = (struct System_String_o *)StringLiteral_18336/*"btn_txt_event_"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ShopBuyItemConfirmMenu_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_18393/*"btn_txt_trade"*/;
  static_fields = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  static_fields->DECIED_BTN_NAME_DEFAULT = (struct System_String_o *)StringLiteral_18393/*"btn_txt_trade"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->DECIED_BTN_NAME_DEFAULT,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_18370/*"btn_txt_sale"*/;
  v17 = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v17->DECIED_BTN_NAME_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_18370/*"btn_txt_sale"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v17->DECIED_BTN_NAME_LIMIT_MATERIAL,
    v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = ShopBuyItemConfirmMenu_TypeInfo->static_fields;
  *(_OWORD *)&v24->PRICE_DATA_LABEL_MAX_WIDTH = xmmword_E9D6D0;
  *(_QWORD *)&v24->DEFAULT_PRICE_INFO_POS_Y = 0xFFFFFF86FFFFFFECLL;
  *(_QWORD *)&v24->PurePriWarningLabelPosY = 0xC28E0000C2900000LL;
  v24->RESET_LAYOUT_OFFSET_Y = 34;
  *(_QWORD *)&v24->PurePriWarningLabelSize = 0x1400000016LL;
}


void ShopBuyItemConfirmMenu___ctor(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0
  int v5; // w8

  if ( (byte_596C7AE & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596C7AE = 1;
  }
  v4 = BaseDialog_TypeInfo;
  *(_OWORD *)&this->fields.freeLabelPos.fields.x = xmmword_E9CED0;
  *(_QWORD *)&this->fields.freeLabelPos2digit.fields.y = 3250585600LL;
  v5 = *(&v4->_2.cctor_finished + 1);
  this->fields.itemDetailDialogOverwriteDepth = 0x80000000;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ShopBuyItemConfirmMenu__CallOnClose(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_o *onClose; // x19
  MissionNaviTransitionBoardItem_o *p_onClose; // x0

  onClose = this->fields.onClose;
  if ( onClose )
  {
    p_onClose = (MissionNaviTransitionBoardItem_o *)&this->fields.onClose;
    p_onClose->klass = 0;
    sub_2213A04(p_onClose, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))onClose->fields.invoke_impl)(
      onClose->fields.method_code,
      onClose->fields.method);
  }
}


void ShopBuyItemConfirmMenu__CallOnDecide(ShopBuyItemConfirmMenu_o *this, int32_t result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_int__o *onDecide; // x20
  MissionNaviTransitionBoardItem_o *p_onDecide; // x0

  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    p_onDecide = (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide;
    p_onDecide->klass = 0;
    sub_2213A04(p_onDecide, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onDecide->fields.invoke_impl)(
      onDecide->fields.method_code,
      (unsigned int)result,
      onDecide->fields.method);
  }
}


void ShopBuyItemConfirmMenu__Close(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ShopBuyItemConfirmMenu__Close_41910940(this, 0, v2);
}


void ShopBuyItemConfirmMenu__Close_41910940(
        ShopBuyItemConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596C799 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ShopBuyItemConfirmMenu_EndClose__);
    byte_596C799 = 1;
  }
  this->fields.onClose = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClose,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void ShopBuyItemConfirmMenu__EndClose(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  ShopBuyItemConfirmMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
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

  if ( (byte_596C7A6 & 1) == 0 )
  {
    sub_2213A60(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C7A6 = 1;
  }
  v3 = Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__;
  if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
}


void ShopBuyItemConfirmMenu__EndShowServantEquipStatusDialog(
        ShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596C7A5 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C7A5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0, 0);
}


void ShopBuyItemConfirmMenu__EndShowServantStatusDialog(
        ShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596C7A4 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C7A4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
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
  int32_t payType; // w8
  __int64 v16; // x21
  struct CommonConsumeEntity_array *commonConsumeEntities; // x21
  int max_length; // w8
  __int64 v19; // x22
  int basePanel; // w24
  __int64 v21; // x2
  int v22; // w19
  int32_t m_CancellationTokenSource; // w20
  BalanceConfig_c *v24; // x8
  int32_t PresentBoxMax; // w9
  __int64 v26; // x2
  Il2CppObject *MasterData_object; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  int32_t Sum; // w19
  BalanceConfig_c *v31; // x8
  int32_t UserItemMax; // w9
  int32_t v33; // w21
  System_Int64_array *v34; // x23
  int32_t questId; // [xsp+Ch] [xbp-54h] BYREF
  int32_t recordNum[2]; // [xsp+10h] [xbp-50h] BYREF
  int32_t buyCmdCodeNum[2]; // [xsp+18h] [xbp-48h] BYREF
  int32_t buyServantNum[2]; // [xsp+28h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_596C78D & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    this = (ShopBuyItemConfirmMenu_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C78D = 1;
  }
  *(_QWORD *)buyServantNum = 0;
  *(_QWORD *)recordNum = 0;
  *(_QWORD *)buyCmdCodeNum = 0;
  questId = 0;
  if ( !shopEntity )
    goto LABEL_85;
  if ( ShopEntity__IsSoldOut(shopEntity, 0) && !ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0) )
    return 0;
  if ( shopEntity->fields.purchaseType != 6 )
  {
    if ( isInPreparation )
      return 0;
LABEL_12:
    if ( !ShopEntity__IsEnable(shopEntity, 0, 0) )
      return 0;
    UserItemCounts = ShopBuyItemConfirmMenu__GetUserItemCounts(v8, v11);
    UserItemCountsLong = ShopBuyItemConfirmMenu__GetUserItemCountsLong((ShopBuyItemConfirmMenu_o *)UserItemCounts, v13);
    payType = shopEntity->fields.payType;
    if ( payType > 9 )
    {
      if ( payType > 11 )
      {
        if ( payType == 12 )
          goto LABEL_42;
        if ( payType != 14 )
          goto LABEL_45;
        this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetItemCount(shopEntity, 0);
        if ( (int)this < 1 )
          goto LABEL_45;
        commonConsumeEntities = v8->fields.commonConsumeEntities;
        if ( !commonConsumeEntities )
          goto LABEL_45;
        max_length = commonConsumeEntities->max_length;
        if ( max_length < 1 )
          goto LABEL_45;
        v19 = 0;
        while ( (unsigned int)v19 < max_length )
        {
          this = (ShopBuyItemConfirmMenu_o *)commonConsumeEntities->m_Items[v19];
          if ( !this )
            goto LABEL_85;
          basePanel = (int)this->fields.basePanel;
          this = (ShopBuyItemConfirmMenu_o *)CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)this, 0);
          if ( basePanel > (int)this )
            return 0;
          max_length = commonConsumeEntities->max_length;
          if ( (int)++v19 >= max_length )
            goto LABEL_45;
        }
      }
      else
      {
        if ( payType != 10 )
          goto LABEL_23;
        this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetPrice(shopEntity, 0);
        if ( !UserItemCounts )
          goto LABEL_85;
        if ( LODWORD(UserItemCounts->max_length) )
        {
          if ( (int)this > UserItemCounts->m_Items[0]
            && (!ShopEntity__IsAfterTheFreeShopReleaseDate(shopEntity, 0)
             || !ShopEntity__IsFulFilledFreeExchangeCondition(shopEntity, 0)) )
          {
            return 0;
          }
          goto LABEL_45;
        }
      }
    }
    else
    {
      if ( payType > 7 )
        goto LABEL_42;
      if ( payType != 2 )
      {
        if ( payType != 4 )
        {
          if ( payType != 6 )
            goto LABEL_45;
LABEL_23:
          if ( ShopEntity__GetItemCount(shopEntity, 0) >= 2 )
          {
            if ( ShopEntity__GetItemCount(shopEntity, 0) >= 1 )
            {
              v16 = 0;
              do
              {
                this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetPrices(shopEntity, v16, 0);
                if ( !UserItemCounts )
                  goto LABEL_85;
                if ( (unsigned int)v16 >= LODWORD(UserItemCounts->max_length) )
                  goto LABEL_86;
                if ( (int)this > UserItemCounts->m_Items[v16] )
                  return 0;
              }
              while ( (int)++v16 < ShopEntity__GetItemCount(shopEntity, 0) );
            }
LABEL_45:
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
            if ( buyCmdCodeNum[1] + buyServantNum[0] + buyCmdCodeNum[0] >= 1 )
            {
              this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_85;
              this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
              if ( !userGameEntity )
                goto LABEL_85;
              if ( !this )
                goto LABEL_85;
              this = (ShopBuyItemConfirmMenu_o *)UserPresentBoxMaster__getVaildList(
                                                   (UserPresentBoxMaster_o *)this,
                                                   userGameEntity->fields.userId,
                                                   0);
              if ( !this )
                goto LABEL_85;
              if ( shopEntity->fields.purchaseType == 5 )
                v22 = recordNum[0];
              else
                v22 = buyCmdCodeNum[1] + buyServantNum[0] + buyCmdCodeNum[0];
              m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
              v24 = BalanceConfig_TypeInfo;
              if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, shopEntity, v21);
                v24 = BalanceConfig_TypeInfo;
              }
              PresentBoxMax = v24->static_fields->PresentBoxMax;
              if ( PresentBoxMax <= m_CancellationTokenSource )
                return 0;
              if ( !*(&v24->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v24, shopEntity, v21);
                PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
              }
              if ( v22 + m_CancellationTokenSource > PresentBoxMax )
                return 0;
            }
            if ( buyServantNum[1] < 1 )
              return 1;
            this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( this )
            {
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, shopEntity, v26);
              if ( !byte_5969EF2 )
              {
                sub_2213A60(&NetworkManager_TypeInfo);
                byte_5969EF2 = 1;
              }
              this = (ShopBuyItemConfirmMenu_o *)NetworkManager_TypeInfo;
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, shopEntity, v26);
                this = (ShopBuyItemConfirmMenu_o *)NetworkManager_TypeInfo;
              }
              if ( MasterData_object )
              {
                Sum = UserItemMaster__getSum(
                        (UserItemMaster_o *)MasterData_object,
                        *(_QWORD *)&this->fields.decideButton->fields.specifyHoverColor.fields.r,
                        0);
                v31 = BalanceConfig_TypeInfo;
                if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v28, v29);
                  v31 = BalanceConfig_TypeInfo;
                }
                UserItemMax = v31->static_fields->UserItemMax;
                if ( Sum < UserItemMax )
                {
                  v33 = buyServantNum[1];
                  if ( !*(&v31->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(v31, v28, v29);
                    UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
                  }
                  if ( v33 + Sum <= UserItemMax )
                    return 1;
                }
                return 0;
              }
            }
LABEL_85:
            sub_2213CDC(this, shopEntity);
          }
        }
LABEL_42:
        this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetPrice(shopEntity, 0);
        if ( !UserItemCounts )
          goto LABEL_85;
        if ( LODWORD(UserItemCounts->max_length) )
        {
          if ( (int)this > UserItemCounts->m_Items[0] )
            return 0;
          goto LABEL_45;
        }
        goto LABEL_86;
      }
      v34 = UserItemCountsLong;
      this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetPrice(shopEntity, 0);
      if ( !v34 )
        goto LABEL_85;
      if ( LODWORD(v34->max_length) )
      {
        if ( v34->m_Items[0] < (int)this )
          return 0;
        goto LABEL_45;
      }
    }
LABEL_86:
    sub_2213CE4(this);
  }
  if ( isInPreparation )
    return 0;
  if ( !ShopEntity__isQuestNotClear(shopEntity, &questId, 0, 0) )
  {
    if ( ShopEntity__isExpireItemClosed(shopEntity, 0) )
      return 0;
    goto LABEL_12;
  }
  isQuestNotClearItemClosedSub = ShopEntity__isQuestNotClearItemClosedSub(shopEntity, questId, 0, 0);
  result = 0;
  if ( !isQuestNotClearItemClosedSub )
    goto LABEL_12;
  return result;
}


bool ShopBuyItemConfirmMenu__GetIsSetItemEventShop(
        ShopBuyItemConfirmMenu_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  SetItemMaster_o *v5; // x20
  unsigned __int64 v6; // x21
  int m_CancellationTokenSource; // w8
  int v8; // w10
  __int64 v9; // x11

  if ( (byte_596C7A7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SetItemMaster___);
    this = (ShopBuyItemConfirmMenu_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C7A7 = 1;
  }
  if ( !ids )
    goto LABEL_20;
  if ( !ids->max_length )
    return 0;
  this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_2213CDC(this, ids);
  this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SetItemMaster___);
  max_length = ids->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v5 = (SetItemMaster_o *)this;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)max_length )
LABEL_21:
      sub_2213CE4(this);
    if ( !v5 )
      goto LABEL_20;
    this = (ShopBuyItemConfirmMenu_o *)SetItemMaster__GetList(v5, ids->m_Items[v6], 0);
    if ( !this )
      goto LABEL_20;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource >= 1 )
      break;
LABEL_17:
    LODWORD(max_length) = ids->max_length;
    if ( (__int64)++v6 >= (int)max_length )
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
    if ( (m_CancellationTokenSource & ~(m_CancellationTokenSource >> 31)) == ++v8 )
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
    sub_2213CDC(this, 0);
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


// local variable allocation has failed, the output may be wrong!
System_String_o *ShopBuyItemConfirmMenu__GetMaxAlertBase(
        ShopBuyItemConfirmMenu_o *this,
        int32_t shopType,
        const MethodInfo *method)
{
  System_String_o **v4; // x8

  if ( (byte_596C79C & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_8632/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/);
    sub_2213A60(&StringLiteral_12647/*"SHOP_MAX_ALERT"*/);
    byte_596C79C = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&shopType, method);
  if ( shopType == 9 )
    v4 = (System_String_o **)&StringLiteral_8632/*"LIMIT_MATERIAL_SHOP_MAX_ALERT"*/;
  else
    v4 = (System_String_o **)&StringLiteral_12647/*"SHOP_MAX_ALERT"*/;
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


// local variable allocation has failed, the output may be wrong!
System_String_o *ShopBuyItemConfirmMenu__GetMaxOverItemName(
        ShopBuyItemConfirmMenu_o *this,
        int32_t itemType,
        const MethodInfo *method)
{
  __int64 *v4; // x8

  if ( (byte_596C79B & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_11287/*"QP_NAME"*/);
    sub_2213A60(&StringLiteral_8897/*"MANA_NAME"*/);
    sub_2213A60(&StringLiteral_11435/*"RARE_PRI_NAME"*/);
    sub_2213A60(&StringLiteral_6836/*"FRIEND_POINT_NAME"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C79B = 1;
  }
  if ( itemType <= 5 )
  {
    if ( itemType == 1 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&itemType, method);
      v4 = &StringLiteral_11287/*"QP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v4, 0);
    }
    if ( itemType == 5 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&itemType, method);
      v4 = &StringLiteral_8897/*"MANA_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v4, 0);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( itemType == 13 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&itemType, method);
    v4 = &StringLiteral_6836/*"FRIEND_POINT_NAME"*/;
    return LocalizationManager__Get((System_String_o *)*v4, 0);
  }
  if ( itemType != 22 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&itemType, method);
  v4 = &StringLiteral_11435/*"RARE_PRI_NAME"*/;
  return LocalizationManager__Get((System_String_o *)*v4, 0);
}


System_Int32_array *ShopBuyItemConfirmMenu__GetUserItemCounts(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 SelfUserGame; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct ShopEntity_o *shopEntity; // x8
  unsigned int payType; // w9
  _DWORD *v8; // x21
  Il2CppObject *Master_object; // x21
  const MethodInfo *v10; // x1
  __int64 v11; // x2
  EventRewardRootComponent_c *v12; // x0
  int32_t AnotherPayUsedItemId_k__BackingField; // w19
  int v14; // w19
  __int64 v15; // x20
  __int64 v16; // x2
  Il2CppObject *MasterData_object; // x21
  __int64 v18; // x9
  ShopEntity_o *v19; // x0
  int64_t v20; // x19
  int v21; // w8
  unsigned int v23; // w0
  unsigned int ItemCount; // w0
  ShopEntity_o *v25; // x8
  unsigned __int64 v26; // x22
  __int64 v27; // x2
  int64_t v28; // x24
  unsigned __int64 v29; // x10

  if ( (byte_596C78B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&EventRewardRootComponent_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C78B = 1;
  }
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_74;
  payType = shopEntity->fields.payType;
  v8 = (_DWORD *)SelfUserGame;
  if ( payType <= 0xC )
  {
    if ( ((1 << payType) & 0x1300) != 0 )
    {
      v15 = sub_2213B20(int___TypeInfo, 1);
      SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_74;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v16);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      SelfUserGame = (__int64)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v16);
        SelfUserGame = (__int64)NetworkManager_TypeInfo;
      }
      if ( !this->fields.shopEntity )
        goto LABEL_74;
      v18 = *(_QWORD *)(SelfUserGame + 184);
      v19 = this->fields.shopEntity;
      v20 = *(_QWORD *)(v18 + 64);
      SelfUserGame = ShopEntity__GetItemID(v19, 0);
      if ( !MasterData_object )
        goto LABEL_74;
      SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)MasterData_object,
                                v20,
                                SelfUserGame,
                                0);
      if ( !SelfUserGame || !v15 )
        goto LABEL_74;
      if ( !*(_DWORD *)(v15 + 24) )
        goto LABEL_75;
      v21 = *(_DWORD *)(SelfUserGame + 28);
LABEL_55:
      *(_DWORD *)(v15 + 32) = v21;
      return (System_Int32_array *)v15;
    }
    if ( ((1 << payType) & 0x840) != 0 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4, v5);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
      if ( ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v10) )
      {
        if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v4, v11);
        if ( !byte_596ABD9 )
        {
          sub_2213A60(&EventRewardRootComponent_TypeInfo);
          byte_596ABD9 = 1;
        }
        v12 = EventRewardRootComponent_TypeInfo;
        if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v4, v11);
          v12 = EventRewardRootComponent_TypeInfo;
        }
        AnotherPayUsedItemId_k__BackingField = v12->static_fields->_AnotherPayUsedItemId_k__BackingField;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v11);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        SelfUserGame = (__int64)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v11);
          SelfUserGame = (__int64)NetworkManager_TypeInfo;
        }
        if ( Master_object )
        {
          SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                                    (UserItemMaster_o *)Master_object,
                                    *(_QWORD *)(*(_QWORD *)(SelfUserGame + 184) + 64LL),
                                    AnotherPayUsedItemId_k__BackingField,
                                    0);
          if ( SelfUserGame )
          {
            v14 = *(_DWORD *)(SelfUserGame + 28);
            SelfUserGame = sub_2213B20(int___TypeInfo, 1);
            if ( SelfUserGame )
            {
              v15 = SelfUserGame;
              if ( *(_DWORD *)(SelfUserGame + 24) )
              {
                *(_DWORD *)(SelfUserGame + 32) = v14;
                return (System_Int32_array *)v15;
              }
LABEL_75:
              sub_2213CE4(SelfUserGame);
            }
          }
        }
      }
      else
      {
        SelfUserGame = (__int64)this->fields.shopEntity;
        if ( SelfUserGame )
        {
          ItemCount = ShopEntity__GetItemCount((ShopEntity_o *)SelfUserGame, 0);
          SelfUserGame = sub_2213B20(int___TypeInfo, ItemCount);
          v25 = this->fields.shopEntity;
          if ( v25 )
          {
            v15 = SelfUserGame;
            v26 = 0;
            while ( (__int64)v26 < ShopEntity__GetItemCount(v25, 0) )
            {
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v27);
              if ( !byte_5969EF2 )
              {
                sub_2213A60(&NetworkManager_TypeInfo);
                byte_5969EF2 = 1;
              }
              SelfUserGame = (__int64)NetworkManager_TypeInfo;
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v27);
                SelfUserGame = (__int64)NetworkManager_TypeInfo;
              }
              if ( this->fields.shopEntity )
              {
                v28 = *(_QWORD *)(*(_QWORD *)(SelfUserGame + 184) + 64LL);
                SelfUserGame = ShopEntity__GetItemIDs(this->fields.shopEntity, v26, 0);
                if ( Master_object )
                {
                  SelfUserGame = (__int64)UserItemMaster__GetEntityDefinitely(
                                            (UserItemMaster_o *)Master_object,
                                            v28,
                                            SelfUserGame,
                                            0);
                  if ( SelfUserGame )
                  {
                    if ( v15 )
                    {
                      if ( v26 >= *(unsigned int *)(v15 + 24) )
                        goto LABEL_75;
                      v29 = v15 + 4 * v26;
                      v25 = this->fields.shopEntity;
                      ++v26;
                      *(_DWORD *)(v29 + 32) = *(_DWORD *)(SelfUserGame + 28);
                      if ( v25 )
                        continue;
                    }
                  }
                }
              }
              goto LABEL_74;
            }
            return (System_Int32_array *)v15;
          }
        }
      }
LABEL_74:
      sub_2213CDC(SelfUserGame, v4);
    }
    if ( payType == 10 )
    {
      SelfUserGame = sub_2213B20(int___TypeInfo, 1);
      if ( !v8 )
        goto LABEL_74;
      v15 = SelfUserGame;
      if ( !SelfUserGame )
        goto LABEL_74;
      if ( !*(_DWORD *)(SelfUserGame + 24) )
        goto LABEL_75;
      v21 = v8[49];
      goto LABEL_55;
    }
  }
  if ( payType == 1 )
  {
    SelfUserGame = sub_2213B20(int___TypeInfo, 1);
    if ( !v8 )
      goto LABEL_74;
    v15 = SelfUserGame;
    if ( !SelfUserGame )
      goto LABEL_74;
    if ( !*(_DWORD *)(SelfUserGame + 24) )
      goto LABEL_75;
    v21 = v8[46];
    goto LABEL_55;
  }
  if ( payType == 4 )
  {
    SelfUserGame = sub_2213B20(int___TypeInfo, 1);
    if ( !v8 )
      goto LABEL_74;
    v15 = SelfUserGame;
    if ( !SelfUserGame )
      goto LABEL_74;
    if ( !*(_DWORD *)(SelfUserGame + 24) )
      goto LABEL_75;
    v21 = v8[48];
    goto LABEL_55;
  }
  v23 = ShopEntity__GetItemCount(this->fields.shopEntity, 0);
  return (System_Int32_array *)sub_2213B20(int___TypeInfo, v23);
}


System_Int64_array *ShopBuyItemConfirmMenu__GetUserItemCountsLong(
        ShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x19
  System_Int64_array *result; // x0
  __int64 v4; // x1

  if ( (byte_596C78C & 1) == 0 )
  {
    sub_2213A60(&long___TypeInfo);
    byte_596C78C = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  result = (System_Int64_array *)sub_2213B20(long___TypeInfo, 1);
  if ( !SelfUserGame || !result )
    sub_2213CDC(result, v4);
  if ( !LODWORD(result->max_length) )
    sub_2213CE4(result);
  result->m_Items[0] = SelfUserGame->fields.qp;
  return result;
}


void ShopBuyItemConfirmMenu__Init(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *nameLabel; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *messageLabel; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  ShopBuyItemConfirmMenu_o *v13; // x0
  const MethodInfo *v14; // x3
  ShopBuyItemConfirmMenu_o *v15; // x0
  const MethodInfo *v16; // x3
  ShopBuyItemConfirmMenu_o *v17; // x0
  const MethodInfo *v18; // x3

  if ( (byte_596C782 & 1) == 0 )
  {
    sub_2213A60(&ShopBuyItemUtility_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C782 = 1;
  }
  nameLabel = (UILabel_o *)this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_14;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  messageLabel = this->fields.messageLabel;
  if ( !*(&ShopBuyItemUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo, v4, v5);
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
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.shopEntity, 0, v7, v8, v9, v10, v11, v12),
        (nameLabel = (UILabel_o *)this->fields.infoButton) == 0)
    || (nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0)) == 0 )
  {
LABEL_14:
    sub_2213CDC(nameLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0);
  ShopBuyItemConfirmMenu__SetLabelText(v13, this->fields.presentAheadLabel, (System_String_o *)StringLiteral_1/*""*/, v14);
  ShopBuyItemConfirmMenu__SetLabelActive(v15, this->fields.LineText, 0, v16);
  ShopBuyItemConfirmMenu__SetLabelActive(v17, this->fields.LineText2digit, 0, v18);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ShopBuyItemConfirmMenu__OnClickCancel(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596C79D & 1) == 0 )
  {
    sub_2213A60(&Method_ShopBuyItemConfirmMenu_OnClickCancel__);
    byte_596C79D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ShopBuyItemConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ShopBuyItemConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ShopBuyItemConfirmMenu__CallOnDecide(this, 0, v5);
  }
}


void ShopBuyItemConfirmMenu__OnClickDecide(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v2; // x19
  int32_t state; // w8
  struct ShopEntity_o *shopEntity; // x8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  NoTitleDialog_o *noTitleDialog; // x20
  struct UILabel_o *presentAheadLabel; // x21
  Il2CppObject *Name; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  System_String_o *v14; // x21
  System_String_o *v15; // x22
  System_String_o *v16; // x23
  System_Action_bool__o *v17; // x24
  const MethodInfo *v18; // x3
  struct ShopEntity_o *v19; // x8
  System_String_o *MaxAlertMessage; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v22; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  UILabel_o *warningLabel; // x20
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  const MethodInfo *v30; // x2
  int32_t check; // [xsp+4Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_596C79A & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ShopBuyItemConfirmMenu_EndMaxErrorDialog__);
    sub_2213A60(&Method_ShopBuyItemConfirmMenu_OnClickDecide__);
    sub_2213A60(&Method_ShopBuyItemConfirmMenu_ReturnWarning__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_9719/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/);
    sub_2213A60(&StringLiteral_12579/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    this = (ShopBuyItemConfirmMenu_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C79A = 1;
  }
  state = v2->fields.state;
  check = 0;
  if ( state == 2 )
  {
    shopEntity = v2->fields.shopEntity;
    if ( shopEntity )
    {
      if ( shopEntity->fields.shopType == 18 )
      {
        v5 = Method_ShopBuyItemConfirmMenu_OnClickDecide__;
        if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
          v5 = (_QWORD *)sub_2213A78(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
        v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
        OverwriteAssetSoundName__PlaySystemSe(v6, v2->fields.decideSe, 0, 0);
        ActionExtensions__Call(v2->fields.onReset, 0);
        return;
      }
      this = (ShopBuyItemConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___);
        method = (const MethodInfo *)v2->fields.shopEntity;
        if ( method )
        {
          if ( LODWORD(method->parameters) != 17 )
          {
            if ( !this )
              goto LABEL_40;
            if ( ShopMaster__PurchaseCloseEventShop((ShopMaster_o *)this, (ShopEntity_o *)method, 0) )
            {
              v7 = Method_ShopBuyItemConfirmMenu_OnClickDecide__;
              if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
                v7 = (_QWORD *)sub_2213A78(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
              v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
              OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0, 0);
              this = (ShopBuyItemConfirmMenu_o *)v2->fields.shopEntity;
              if ( this )
              {
                noTitleDialog = v2->fields.noTitleDialog;
                presentAheadLabel = this->fields.presentAheadLabel;
                Name = (Il2CppObject *)ShopEntity__getName((ShopEntity_o *)this, 0);
                v14 = System_String__Format((System_String_o *)presentAheadLabel, Name, 0);
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
                v15 = LocalizationManager__Get((System_String_o *)StringLiteral_9719/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, 0);
                v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
                v17 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
                System_Action_bool____ctor(v17, (Il2CppObject *)v2, Method_ShopBuyItemConfirmMenu_ReturnWarning__, 0);
                if ( noTitleDialog )
                {
                  NoTitleDialog__Open(noTitleDialog, v14, v15, v16, v17, 0);
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
              v28 = Method_ShopBuyItemConfirmMenu_OnClickDecide__;
              if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
                v28 = (_QWORD *)sub_2213A78(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
              v29 = (System_Reflection_MethodBase_o *)sub_2213A44(v28, v28[4]);
              OverwriteAssetSoundName__PlaySystemSe(v29, v2->fields.decideSe, 0, 0);
              ShopBuyItemConfirmMenu__CallOnDecide(v2, 1, v30);
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
              v19 = v2->fields.shopEntity;
              if ( v19 )
              {
                MaxAlertMessage = ShopBuyItemConfirmMenu__GetMaxAlertMessage(v2, v19->fields.shopType, check, v18);
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v22 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                System_Action___ctor(v22, (Il2CppObject *)v2, Method_ShopBuyItemConfirmMenu_EndMaxErrorDialog__, 0);
                if ( Instance )
                {
                  CommonUI__OpenNotificationDialog(
                    (CommonUI_o *)Instance,
                    (System_String_o *)StringLiteral_1/*""*/,
                    MaxAlertMessage,
                    v22,
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
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23, v24);
            this = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12579/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, 0);
            if ( warningLabel )
            {
              UILabel__set_text(warningLabel, (System_String_o *)this, 0);
              v26 = Method_ShopBuyItemConfirmMenu_OnClickDecide__;
              if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
                v26 = (_QWORD *)sub_2213A78(Method_ShopBuyItemConfirmMenu_OnClickDecide__);
              v27 = (System_Reflection_MethodBase_o *)sub_2213A44(v26, v26[4]);
              OverwriteAssetSoundName__PlaySystemSe(v27, 2, 0, 0);
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
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, shopEntity);
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

  if ( (byte_596C7AC & 1) == 0 )
  {
    sub_2213A60(&Method_ShopBuyItemConfirmMenu_OnClickReset__);
    byte_596C7AC = 1;
  }
  v3 = Method_ShopBuyItemConfirmMenu_OnClickReset__;
  if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_OnClickReset__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ShopBuyItemConfirmMenu_OnClickReset__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  ActionExtensions__Call(this->fields.onReset, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t state; // w8
  struct ShopEntity_o **p_shopEntity; // x22
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct ShopEntity_o *v39; // x8
  struct CommonConsumeEntity_array *CommonConsumeEntities; // x0
  int32_t v41; // w1
  struct CommonConsumeEntity_array **p_commonConsumeEntities; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  System_String_o *Name; // x23
  System_String_o *v46; // x23
  __int64 v47; // x1
  __int64 v48; // x2
  const MethodInfo *v49; // x3
  UISprite_o *decideButtonImg; // x24
  ShopBuyItemConfirmMenu_o *v51; // x0
  bool IsPreparation; // w24
  const MethodInfo *v53; // x4
  UserGameEntity_o *SelfUserGame; // x25
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x3
  __int64 v57; // x1
  __int64 v58; // x2
  ShopEntity_o *v59; // x26
  UILabel_o *textOnMask; // x27
  const MethodInfo *v61; // x3
  ShopEntity_o *v62; // x26
  UISprite_o *possessionSprite; // x27
  bool v64; // w0
  const MethodInfo *v65; // x2
  const MethodInfo *v66; // x3
  bool IsNotHavingShopItemReceived; // w21
  const MethodInfo *v68; // x5
  const MethodInfo *v69; // x4
  bool IsBuyable; // w20
  const MethodInfo *v71; // x2
  const MethodInfo *v72; // x3
  const MethodInfo *v73; // x1
  const MethodInfo *v74; // x4
  const MethodInfo *v75; // x3
  const MethodInfo *v76; // x5
  UISprite_o *itemMaskeSprite; // x20
  ShopBuyItemConfirmMenu_o *v78; // x0
  const MethodInfo *v79; // x3
  _BOOL8 IsShowMask; // x0
  const MethodInfo *v81; // x3
  const MethodInfo *v82; // x3
  System_Action_o *v83; // x20
  System_String_o *preparationItemName; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *message; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_596C783 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ShopBuyItemConfirmMenu_EndOpen__);
    sub_2213A60(&ShopBuyItemConfirmMenu_TypeInfo);
    sub_2213A60(&ShopBuyItemUtility_TypeInfo);
    byte_596C783 = 1;
  }
  state = this->fields.state;
  preparationItemName = 0;
  message = 0;
  if ( !state )
  {
    this->fields.onDecide = onDecide;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide,
      (int32_t)onDecide,
      *(System_String_o **)&shopKind,
      (System_String_o *)onDecide,
      buttonSpriteId,
      shopState,
      (bool)onReset,
      se);
    p_shopEntity = &this->fields.shopEntity;
    this->fields.shopEntity = shopEntity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.shopEntity,
      (int32_t)shopEntity,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    this->fields.onReset = onReset;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onReset,
      (int32_t)onReset,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    v39 = this->fields.shopEntity;
    this->fields.shopState = shopState;
    this->fields.decideSe = se;
    if ( !v39 )
      goto LABEL_8;
    if ( !shopEntity )
      goto LABEL_27;
    if ( shopEntity->fields.payType == 14 )
    {
      CommonConsumeEntities = ShopEntity__GetCommonConsumeEntities(shopEntity, 0);
      v41 = (int)CommonConsumeEntities;
      this->fields.commonConsumeEntities = CommonConsumeEntities;
      p_commonConsumeEntities = &this->fields.commonConsumeEntities;
    }
    else
    {
LABEL_8:
      p_commonConsumeEntities = &this->fields.commonConsumeEntities;
      v41 = 0;
      this->fields.commonConsumeEntities = 0;
    }
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_commonConsumeEntities, v41, v33, v34, v35, v36, v37, v38);
    this->fields.shopKind = shopKind;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)*p_shopEntity;
      if ( *p_shopEntity )
      {
        Name = ShopEntity__getName((ShopEntity_o *)gameObject, 0);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43, v44);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__ReplaceCommonTag(Name, 0, 0);
        if ( this->fields.nameLabel )
        {
          v46 = (System_String_o *)gameObject;
          UICrossNarrowLabel__SetCrossNarrowText(this->fields.nameLabel, (System_String_o *)gameObject, 0);
          decideButtonImg = this->fields.decideButtonImg;
          v51 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          if ( !*(&ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo, v47, v48);
            v51 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          }
          ShopBuyItemConfirmMenu__SetSpriteName(
            v51,
            decideButtonImg,
            (System_String_o *)v51->fields.decideButton->monitor,
            v49);
          gameObject = (UnityEngine_GameObject_o *)*p_shopEntity;
          if ( *p_shopEntity )
          {
            IsPreparation = ShopEntity__IsPreparation((ShopEntity_o *)gameObject, &message, &preparationItemName, 0);
            ShopBuyItemConfirmMenu__SetMessageLabel(this, this->fields.shopEntity, IsPreparation, message, v53);
            SelfUserGame = UserGameMaster__getSelfUserGame(0);
            ShopBuyItemConfirmMenu__SetBandSprite(this, this->fields.shopEntity, v55);
            ShopBuyItemConfirmMenu__SetTextOnMask(this, this->fields.shopEntity, IsPreparation, v56);
            v59 = this->fields.shopEntity;
            textOnMask = this->fields.textOnMask;
            if ( !*(&ShopBuyItemUtility_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo, v57, v58);
            ShopBuyItemUtility__SetAddTextOnMask(v59, textOnMask, 0);
            ShopBuyItemConfirmMenu__SetNumText(this, this->fields.shopEntity, IsPreparation, v61);
            v62 = this->fields.shopEntity;
            if ( v62 )
            {
              possessionSprite = this->fields.possessionSprite;
              v64 = ShopEntity__checkFlag(this->fields.shopEntity, 0x4000, 0);
              ShopBuyItemUtility__SetShopHaveStatusIcon(v62, possessionSprite, v64, 0);
              ShopBuyItemConfirmMenu__SetPossessionInfo(this, shopEntity, v65);
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
                  ShopBuyItemConfirmMenu__SetExtensionText(
                    this,
                    this->fields.shopEntity,
                    IsNotHavingShopItemReceived,
                    v66);
                  ShopBuyItemConfirmMenu__SetPriceInfo(
                    this,
                    this->fields.shopEntity,
                    IsPreparation,
                    buttonSpriteId,
                    IsNotHavingShopItemReceived,
                    v68);
                  IsBuyable = ShopBuyItemConfirmMenu__GetIsBuyable(
                                this,
                                this->fields.shopEntity,
                                IsPreparation,
                                SelfUserGame,
                                v69);
                  ShopBuyItemConfirmMenu__SetDefaultButton(this, IsBuyable, v71);
                  ShopBuyItemConfirmMenu__SetAheadText(this, this->fields.shopEntity, IsBuyable, v72);
                  ShopBuyItemConfirmMenu__SetWindowSize(this, v73);
                  ShopBuyItemConfirmMenu__SetWarningLabel(
                    this,
                    this->fields.shopEntity,
                    IsPreparation,
                    SelfUserGame,
                    v74);
                  ShopBuyItemConfirmMenu__SetItemIcon(this, this->fields.shopEntity, IsPreparation, v75);
                  ShopBuyItemConfirmMenu__SetNameText(
                    this,
                    this->fields.shopEntity,
                    IsPreparation,
                    v46,
                    preparationItemName,
                    v76);
                  itemMaskeSprite = this->fields.itemMaskeSprite;
                  IsShowMask = ShopBuyItemConfirmMenu__GetIsShowMask(v78, this->fields.shopEntity, IsPreparation, v79);
                  ShopBuyItemConfirmMenu__SetSpriteActive(
                    (ShopBuyItemConfirmMenu_o *)IsShowMask,
                    itemMaskeSprite,
                    IsShowMask,
                    v81);
                  ShopBuyItemConfirmMenu__SetInfoButton(this, this->fields.shopEntity, IsPreparation, v82);
                  this->fields.state = 1;
                  v83 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                  System_Action___ctor(v83, (Il2CppObject *)this, Method_ShopBuyItemConfirmMenu_EndOpen__, 0);
                  BaseDialog__Open((BaseDialog_o *)this, v83, 0, 0, 0);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_2213CDC(gameObject, v32);
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
  int32_t state; // w8
  struct ShopEntity_o *Shop_k__BackingField; // x23
  int v11; // w24
  Il2CppObject *Instance; // x0
  System_String_o *warningMessage; // x24
  CommonUI_o *v14; // x22
  Il2CppObject *Name; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  System_String_o *v18; // x23
  System_String_o *v19; // x24
  System_String_o *v20; // x25
  System_Action_bool__o *v21; // x26
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *itemName; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_596C7A8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ShopBuyItemConfirmMenu_ReturnWarningRarePri__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_20591/*"freeShopCondId"*/);
    this = (ShopBuyItemConfirmMenu_o *)sub_2213A60(&StringLiteral_11635/*"RETURN_RARE_PRI_SHOP_DECIDE_BUTTON"*/);
    byte_596C7A8 = 1;
  }
  state = v8->fields.state;
  message = 0;
  itemName = 0;
  if ( !state )
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
          v11 = (int)this;
          if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                  (System_Collections_Generic_Dictionary_object__object__o *)Shop_k__BackingField->fields.script,
                  (Il2CppObject *)StringLiteral_20591/*"freeShopCondId"*/,
                  (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
            || ((ShopBuyItemListViewItem__get_IsSoldOut(item, 0) | v11) & 1) != 0
            || !ShopEntity__IsAfterTheFreeShopReleaseDate(Shop_k__BackingField, 0)
            || ShopEntity__IsFulFilledFreeExchangeCondition(Shop_k__BackingField, 0) )
          {
            ActionExtensions__Call(onChecked, 0);
            return;
          }
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          warningMessage = Shop_k__BackingField->fields.warningMessage;
          v14 = (CommonUI_o *)Instance;
          Name = (Il2CppObject *)ShopEntity__getName(Shop_k__BackingField, 0);
          v18 = System_String__Format(warningMessage, Name, 0);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
          v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11635/*"RETURN_RARE_PRI_SHOP_DECIDE_BUTTON"*/, 0);
          v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
          v21 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
          System_Action_bool____ctor(v21, (Il2CppObject *)v8, Method_ShopBuyItemConfirmMenu_ReturnWarningRarePri__, 0);
          if ( v14 )
          {
            CommonUI__OpenNoTitleDialog(v14, v18, v19, v20, v21, 0);
            v8->fields.onChecked = onChecked;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v8->fields.onChecked,
              (int32_t)onChecked,
              v22,
              v23,
              v24,
              v25,
              v26,
              v27);
            v8->fields.onCloseReturnWarning = onCloseReturnWarning;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v8->fields.onCloseReturnWarning,
              (int32_t)onCloseReturnWarning,
              v28,
              v29,
              v30,
              v31,
              v32,
              v33);
            return;
          }
        }
      }
    }
    sub_2213CDC(this, item);
  }
}


void ShopBuyItemConfirmMenu__PlayShowInfomationSound(
        ShopBuyItemConfirmMenu_o *this,
        int32_t seKind,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_596C7A3 & 1) == 0 )
  {
    sub_2213A60(&Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__);
    byte_596C7A3 = 1;
  }
  if ( (seKind & 0x80000000) == 0 )
  {
    v4 = Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__;
    if ( (*((_BYTE *)Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_ShopBuyItemConfirmMenu_PlayShowInfomationSound__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, seKind, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemConfirmMenu__ReturnWarning(ShopBuyItemConfirmMenu_o *this, bool isDecide, const MethodInfo *method)
{
  NoTitleDialog_o *noTitleDialog; // x0
  const MethodInfo *v6; // x2

  noTitleDialog = this->fields.noTitleDialog;
  if ( !noTitleDialog )
    sub_2213CDC(0, isDecide);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo_47A29F8 *v14; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v16; // x20

  if ( (byte_596C79E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ShopBuyItemConfirmMenu___c__DisplayClass121_0__ReturnWarningRarePri_b__0__);
    sub_2213A60(&ShopBuyItemConfirmMenu___c__DisplayClass121_0_TypeInfo);
    byte_596C79E = 1;
  }
  v5 = sub_2213CCC(ShopBuyItemConfirmMenu___c__DisplayClass121_0_TypeInfo);
  ShopBuyItemConfirmMenu___c__DisplayClass121_0___ctor((ShopBuyItemConfirmMenu___c__DisplayClass121_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13),
        v14 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
        *(_BYTE *)(v5 + 24) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance(v14),
        v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v16,
          (Il2CppObject *)v5,
          Method_ShopBuyItemConfirmMenu___c__DisplayClass121_0__ReturnWarningRarePri_b__0__,
          0),
        !Instance) )
  {
    sub_2213CDC(v6, v7);
  }
  CommonUI__CloseNoTitleDialog((CommonUI_o *)Instance, v16, 0);
}


void ShopBuyItemConfirmMenu__SetAheadText(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isBuyable,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v6; // x19
  UILabel_o *presentAheadLabel; // x1
  System_String_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t purchaseType; // w8
  UILabel_o *v12; // x19
  __int64 *v13; // x8
  Il2CppObject *MasterData_object; // x21
  __int64 v15; // x2
  int klass; // w8
  UILabel_o *v17; // x19
  int v18; // w8
  __int64 *v19; // x8
  int32_t shopType; // w9
  UILabel_o *v21; // x20
  int v22; // w8
  __int64 v23; // x1
  __int64 v24; // x2
  const MethodInfo *v25; // x3
  UISprite_o *decideButtonImg; // x19
  ShopBuyItemConfirmMenu_o *v27; // x0
  System_String_o *v28; // x1
  UILabel_o *v29; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v6 = this;
  if ( (byte_596C790 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&ShopBuyItemConfirmMenu_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_10917/*"PURCHASE_AFTER_COSTUME"*/);
    sub_2213A60(&StringLiteral_10922/*"PURCHASE_AFTER_USER_ITEM"*/);
    sub_2213A60(&StringLiteral_10919/*"PURCHASE_AFTER_ITEM_SET"*/);
    sub_2213A60(&StringLiteral_8631/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/);
    sub_2213A60(&StringLiteral_10920/*"PURCHASE_AFTER_PRESENT_BOX"*/);
    sub_2213A60(&StringLiteral_10918/*"PURCHASE_AFTER_EVENT_SVT_GET"*/);
    sub_2213A60(&StringLiteral_10924/*"PURCHASE_AFTER_USER_SVT_COIN_PERIOD"*/);
    sub_2213A60(&StringLiteral_10921/*"PURCHASE_AFTER_QP"*/);
    sub_2213A60(&StringLiteral_10923/*"PURCHASE_AFTER_USER_SVT_COIN"*/);
    this = (ShopBuyItemConfirmMenu_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C790 = 1;
  }
  presentAheadLabel = v6->fields.presentAheadLabel;
  entity = 0;
  ShopBuyItemConfirmMenu__SetLabelText(this, presentAheadLabel, (System_String_o *)StringLiteral_1/*""*/, method);
  if ( !isBuyable )
    return;
  if ( !shopEntity )
    goto LABEL_60;
  purchaseType = shopEntity->fields.purchaseType;
  if ( purchaseType <= 14 )
  {
    if ( purchaseType > 4 )
    {
      switch ( purchaseType )
      {
        case 5:
          v12 = v6->fields.presentAheadLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
          v13 = &StringLiteral_10919/*"PURCHASE_AFTER_ITEM_SET"*/;
          break;
        case 8:
          v12 = v6->fields.presentAheadLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
          v13 = &StringLiteral_10918/*"PURCHASE_AFTER_EVENT_SVT_GET"*/;
          break;
        case 14:
          v12 = v6->fields.presentAheadLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
          v13 = &StringLiteral_10917/*"PURCHASE_AFTER_COSTUME"*/;
          break;
        default:
          return;
      }
LABEL_11:
      Instance = LocalizationManager__Get((System_String_o *)*v13, 0);
      if ( v12 )
      {
        UILabel__set_text(v12, Instance, 0);
        return;
      }
LABEL_60:
      sub_2213CDC(Instance, v9);
    }
    if ( purchaseType == 1 )
    {
      Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_60;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (System_String_o *)ShopEntity__get_TargetId(shopEntity, 0);
      if ( !MasterData_object )
        goto LABEL_60;
      Instance = (System_String_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                      &entity,
                                      (int32_t)Instance,
                                      (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        return;
      if ( !entity )
        goto LABEL_60;
      klass = (int)entity[3].klass;
      if ( klass == 1 )
      {
        shopType = shopEntity->fields.shopType;
        v21 = v6->fields.presentAheadLabel;
        v22 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
        if ( shopType == 9 )
        {
          if ( !v22 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v15);
          Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8631/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/, 0);
          if ( !v21 )
            goto LABEL_60;
          UILabel__set_text(v21, Instance, 0);
          decideButtonImg = v6->fields.decideButtonImg;
          v27 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          if ( !*(&ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo, v23, v24);
            v27 = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
          }
          ShopBuyItemConfirmMenu__SetSpriteName(
            v27,
            decideButtonImg,
            (System_String_o *)v27->fields.decideButton->fields.m_CachedPtr,
            v25);
          return;
        }
        if ( !v22 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v15);
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_10921/*"PURCHASE_AFTER_QP"*/, 0);
        if ( !v21 )
          goto LABEL_60;
        v28 = Instance;
        v29 = v21;
      }
      else
      {
        if ( klass == 29 )
        {
          v17 = v6->fields.presentAheadLabel;
          v18 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
          if ( shopEntity->fields.shopType == 17 )
          {
            if ( !v18 )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v15);
            v19 = &StringLiteral_10924/*"PURCHASE_AFTER_USER_SVT_COIN_PERIOD"*/;
          }
          else
          {
            if ( !v18 )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v15);
            v19 = &StringLiteral_10923/*"PURCHASE_AFTER_USER_SVT_COIN"*/;
          }
        }
        else
        {
          v17 = v6->fields.presentAheadLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v15);
          v19 = &StringLiteral_10922/*"PURCHASE_AFTER_USER_ITEM"*/;
        }
        Instance = LocalizationManager__Get((System_String_o *)*v19, 0);
        if ( !v17 )
          goto LABEL_60;
        v28 = Instance;
        v29 = v17;
      }
      UILabel__set_text(v29, v28, 0);
      return;
    }
    if ( purchaseType == 4 )
      goto LABEL_8;
  }
  else if ( (unsigned int)purchaseType <= 0x15 && ((1 << purchaseType) & 0x290000) != 0 )
  {
LABEL_8:
    v12 = v6->fields.presentAheadLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
    v13 = &StringLiteral_10920/*"PURCHASE_AFTER_PRESENT_BOX"*/;
    goto LABEL_11;
  }
}


void ShopBuyItemConfirmMenu__SetBandSprite(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopBuyItemConfirmMenu_o *v5; // x19
  int32_t purchaseType; // w8
  ShopBuyItemConfirmMenu_o *v7; // x0
  const MethodInfo *v8; // x3
  __int64 *v9; // x8

  v5 = this;
  if ( (byte_596C791 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21715/*"img_txt_shop"*/);
    this = (ShopBuyItemConfirmMenu_o *)sub_2213A60(&StringLiteral_21699/*"img_txt_quest"*/);
    byte_596C791 = 1;
  }
  if ( !shopEntity )
    sub_2213CDC(this, shopEntity);
  purchaseType = shopEntity->fields.purchaseType;
  if ( purchaseType > 6 )
  {
    if ( purchaseType != 7 && purchaseType != 9 )
      goto LABEL_13;
    goto LABEL_10;
  }
  if ( purchaseType == 5 )
  {
    this = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu__GetIsSetItemEventShop(
                                         this,
                                         shopEntity->fields.targetIds,
                                         method);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_13;
LABEL_10:
    ShopBuyItemConfirmMenu__SetSpriteActive(this, v5->fields.bandSprite, 1, v3);
    v9 = &StringLiteral_21715/*"img_txt_shop"*/;
    goto LABEL_11;
  }
  if ( purchaseType == 6 )
  {
    ShopBuyItemConfirmMenu__SetSpriteActive(this, v5->fields.bandSprite, 1, v3);
    v9 = &StringLiteral_21699/*"img_txt_quest"*/;
LABEL_11:
    ShopBuyItemConfirmMenu__SetSpriteName(v7, v5->fields.bandSprite, (System_String_o *)*v9, v8);
    return;
  }
LABEL_13:
  ShopBuyItemConfirmMenu__SetSpriteActive(this, v5->fields.bandSprite, 0, v3);
}


void ShopBuyItemConfirmMenu__SetCommonConsumeIcon(
        ShopBuyItemConfirmMenu_o *this,
        ItemIconComponent_o *itemIcon,
        CommonConsumeEntity_o *commonConsumeEntity,
        const MethodInfo *method)
{
  __int64 v6; // x2
  UISprite_o *iconSprite; // x19

  if ( (byte_596C797 & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu_o *)sub_2213A60(&AtlasManager_TypeInfo);
    byte_596C797 = 1;
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
      sub_2213CDC(this, itemIcon);
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
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, itemIcon, v6);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  bool v15; // w0
  __int64 v16; // x1
  __int64 v17; // x2
  System_String_o *v18; // x24
  Il2CppObject *v19; // x25
  Il2CppObject *Name; // x0
  System_String_o *shopEntity; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  ShopBuyItemConfirmMenu_c *v25; // x0
  int32_t PriceIcon; // w0
  int32_t v27; // w22
  int32_t v28; // w23
  ShopBuyItemConfirmMenu_o *v29; // x0
  const MethodInfo *v30; // x3
  int32_t num; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596C796 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ShopBuyItemConfirmMenu_TypeInfo);
    sub_2213A60(&StringLiteral_5840/*"EVENT_ITEM_NEED_INFO"*/);
    byte_596C796 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, priceDataLabel, priceIconLabel);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)priceDataLabel, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)priceIconLabel, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
      v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)itemIcon, 0, 0);
      if ( commonConsumeEnt && !v15 )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
        v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5840/*"EVENT_ITEM_NEED_INFO"*/, 0);
        num = commonConsumeEnt->fields.num;
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &num);
        Name = (Il2CppObject *)CommonConsumeEntity__GetName(commonConsumeEnt, 0);
        shopEntity = System_String__Format_75697880(v18, v19, Name, 0);
        if ( !priceDataLabel )
          goto LABEL_22;
        UILabel__set_text(priceDataLabel, shopEntity, 0);
        v25 = ShopBuyItemConfirmMenu_TypeInfo;
        if ( !*(&ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo, v23, v24);
          v25 = ShopBuyItemConfirmMenu_TypeInfo;
        }
        UILabel__SetCondensedScale(priceDataLabel, v25->static_fields->PRICE_DATA_LABEL_MAX_WIDTH, 0, 0);
        shopEntity = (System_String_o *)this->fields.shopEntity;
        if ( !shopEntity
          || (PriceIcon = ShopEntity__GetPriceIcon((ShopEntity_o *)shopEntity, 0),
              v27 = commonConsumeEnt->fields.num,
              v28 = PriceIcon,
              shopEntity = (System_String_o *)CommonConsumeEntity__GetUserHasNum(commonConsumeEnt, 0),
              !priceIconLabel) )
        {
LABEL_22:
          sub_2213CDC(shopEntity, v22);
        }
        UIIconLabel__SetPurchaseDecision(priceIconLabel, v28, v27, (int32_t)shopEntity, 0);
        ShopBuyItemConfirmMenu__SetCommonConsumeIcon(v29, itemIcon, commonConsumeEnt, v30);
      }
    }
  }
}


void ShopBuyItemConfirmMenu__SetCommonConsumeWarningLabel(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *v15; // x20
  UISprite_o *v16; // x20
  UISprite_o *deceideBtnSprite; // x20
  __int64 v18; // x2
  UISprite_o *v19; // x20
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  v7 = this;
  v20 = buttonSpriteId;
  if ( (byte_596C798 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&EventRewardRootComponent_TypeInfo);
    sub_2213A60(&ShopBuyItemConfirmMenu_TypeInfo);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    this = (ShopBuyItemConfirmMenu_o *)sub_2213A60(&StringLiteral_18393/*"btn_txt_trade"*/);
    byte_596C798 = 1;
  }
  if ( !shopEntity )
    goto LABEL_24;
  if ( (shopEntity->fields.payType | 4) != 6 )
  {
    deceideBtnSprite = v7->fields.deceideBtnSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, shopEntity, *(_QWORD *)&eventId);
    AtlasManager__SetCommon(deceideBtnSprite, 0);
    v19 = v7->fields.deceideBtnSprite;
    this = (ShopBuyItemConfirmMenu_o *)ShopBuyItemConfirmMenu_TypeInfo;
    if ( !*(&ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo, shopEntity, v18);
    if ( v19 )
    {
      UISprite__set_spriteName(v19, ShopBuyItemConfirmMenu_TypeInfo->static_fields->DECIED_BTN_NAME_DEFAULT, 0);
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
  if ( !*(&ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo, shopEntity, *(_QWORD *)&eventId);
    v9 = ShopBuyItemConfirmMenu_TypeInfo;
  }
  VALENTINE_BTN_NAME = v9->static_fields->VALENTINE_BTN_NAME;
  v11 = System_Int32__ToString((int)shopEntity + 24, 0);
  v12 = System_Int32__ToString((int32_t)&v20, 0);
  v15 = System_String__Concat_75696856(VALENTINE_BTN_NAME, v11, (System_String_o *)StringLiteral_16746/*"_"*/, v12, 0);
  if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v13, v14);
  if ( !EventRewardRootComponent__setRewardInfoImg(v8, v15, 0) )
  {
LABEL_11:
    v16 = v7->fields.deceideBtnSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, shopEntity, *(_QWORD *)&eventId);
    AtlasManager__SetCommon(v16, 0);
    this = (ShopBuyItemConfirmMenu_o *)v7->fields.deceideBtnSprite;
    if ( this )
    {
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_18393/*"btn_txt_trade"*/, 0);
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
    sub_2213CDC(this, shopEntity);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemConfirmMenu__SetDefaultButton(ShopBuyItemConfirmMenu_o *this, bool isCan, const MethodInfo *method)
{
  UnityEngine_Object_o *shopResetButton; // x21
  __int64 v5; // x1
  __int64 v6; // x2
  void *Master_object; // x0
  const MethodInfo *v8; // x3
  int32_t shopState; // w8
  int32_t v10; // w21
  __int64 v11; // x1
  __int64 v12; // x2
  struct ShopEntity_o *shopEntity; // x8
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x2
  Il2CppObject *v17; // x22
  struct ShopEntity_o *v18; // x8
  __int64 v19; // x2
  int32_t resetLimitNum; // w8
  __int64 v21; // x2
  Il2CppObject *v22; // x22
  unsigned int v23; // w21
  UISprite_o *exclusiveDecideButtonImg; // x1
  ShopBuyItemConfirmMenu_o *v25; // x0
  const MethodInfo *v26; // x3
  __int64 v27; // x1
  __int64 v28; // x2
  UISprite_o *v29; // x21
  ShopBuyItemConfirmMenu_o *v30; // x0
  const MethodInfo *v31; // x3
  UISprite_o *shopResetButtonSprite; // x22
  ShopResetEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_596C7AA & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ShopResetMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserShopMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18384/*"btn_txt_stock_reset"*/);
    sub_2213A60(&StringLiteral_21326/*"img_btn_text_reset"*/);
    byte_596C7AA = 1;
  }
  shopResetButton = (UnityEngine_Object_o *)this->fields.shopResetButton;
  entity = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isCan, method);
  if ( UnityEngine_Object__op_Inequality(shopResetButton, 0, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !Master_object )
      goto LABEL_68;
    shopState = this->fields.shopState;
    if ( shopState == 18 )
    {
      if ( !this->fields.shopEntity )
        goto LABEL_68;
      v10 = *((_DWORD *)Master_object + 25);
      Master_object = (void *)ShopEntity__IsSoldOut(this->fields.shopEntity, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        Master_object = this->fields.shopEntity;
        if ( !Master_object )
          goto LABEL_68;
        Master_object = (void *)ShopEntity__GetIsNotHavingShopItemReceived((ShopEntity_o *)Master_object, 0);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11, v12);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopResetMaster___);
          shopEntity = this->fields.shopEntity;
          if ( !shopEntity || !Master_object )
            goto LABEL_68;
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
              goto LABEL_68;
            Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
            if ( !Master_object )
              goto LABEL_68;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
            Master_object = this->fields.shopResetButton;
            if ( !Master_object )
              goto LABEL_68;
            Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
            if ( !Master_object )
              goto LABEL_68;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v15);
            v17 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserShopMaster___);
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v16);
            if ( !byte_5969EF2 )
            {
              sub_2213A60(&NetworkManager_TypeInfo);
              byte_5969EF2 = 1;
            }
            Master_object = NetworkManager_TypeInfo;
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v16);
              Master_object = NetworkManager_TypeInfo;
            }
            v18 = this->fields.shopEntity;
            if ( !v18 )
              goto LABEL_68;
            if ( !v17 )
              goto LABEL_68;
            Master_object = UserShopMaster__GetEntityDefinitely(
                              (UserShopMaster_o *)v17,
                              *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
                              v18->fields.baseShopId,
                              0);
            if ( !entity )
              goto LABEL_68;
            resetLimitNum = entity->fields.resetLimitNum;
            if ( !resetLimitNum )
              goto LABEL_71;
            if ( !Master_object )
              goto LABEL_68;
            if ( resetLimitNum > *((_DWORD *)Master_object + 10) )
            {
LABEL_71:
              if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v19);
              v22 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v21);
              if ( !byte_5969EF2 )
              {
                sub_2213A60(&NetworkManager_TypeInfo);
                byte_5969EF2 = 1;
              }
              Master_object = NetworkManager_TypeInfo;
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v21);
                Master_object = NetworkManager_TypeInfo;
              }
              if ( !v22 )
                goto LABEL_68;
              Master_object = UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)v22,
                                *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
                                v10,
                                0);
              if ( !Master_object )
                goto LABEL_68;
              if ( *((int *)Master_object + 7) <= 0 )
                v23 = 3;
              else
                v23 = 0;
              goto LABEL_62;
            }
LABEL_61:
            v23 = 3;
LABEL_62:
            shopResetButtonSprite = this->fields.shopResetButtonSprite;
            if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v5, v19);
            AtlasManager__SetDownloadCommonSprite(shopResetButtonSprite, (System_String_o *)StringLiteral_18384/*"btn_txt_stock_reset"*/, 0);
            Master_object = this->fields.shopResetButton;
            if ( Master_object )
            {
              (*(void (__fastcall **)(void *, _QWORD, __int64, _QWORD))(*(_QWORD *)Master_object + 536LL))(
                Master_object,
                v23,
                1,
                *(_QWORD *)(*(_QWORD *)Master_object + 544LL));
              goto LABEL_66;
            }
LABEL_68:
            sub_2213CDC(Master_object, v5);
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
      ShopBuyItemConfirmMenu__SetSpriteActive(v25, this->fields.decideButtonImg, 0, v26);
      v29 = this->fields.exclusiveDecideButtonImg;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v27, v28);
      AtlasManager__SetDownloadCommonSprite(v29, (System_String_o *)StringLiteral_21326/*"img_btn_text_reset"*/, 0);
    }
    else
    {
      ShopBuyItemConfirmMenu__SetSpriteActive(
        (ShopBuyItemConfirmMenu_o *)Master_object,
        exclusiveDecideButtonImg,
        0,
        v8);
      ShopBuyItemConfirmMenu__SetSpriteActive(v30, this->fields.decideButtonImg, 1, v31);
    }
    Master_object = this->fields.decideButton;
    if ( !Master_object )
      goto LABEL_68;
    Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
    if ( !Master_object )
      goto LABEL_68;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
    Master_object = this->fields.shopResetButton;
    if ( !Master_object )
      goto LABEL_68;
    Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
    if ( !Master_object )
      goto LABEL_68;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    goto LABEL_61;
  }
LABEL_66:
  Master_object = this->fields.decideButton;
  if ( !Master_object )
    goto LABEL_68;
  (*(void (**)(void))(*(_QWORD *)Master_object + 536LL))();
}


void ShopBuyItemConfirmMenu__SetExtensionText(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isNotHavingShopItemReceived,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  bool v9; // w8
  UILabel_o *extensionInfoLabel; // x21
  ShopBuyItemConfirmMenu_o *v11; // x0
  const MethodInfo *v12; // x3

  v6 = this;
  if ( (byte_596C794 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    this = (ShopBuyItemConfirmMenu_o *)sub_2213A60(&StringLiteral_9697/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/);
    byte_596C794 = 1;
  }
  if ( !shopEntity )
    sub_2213CDC(this, shopEntity);
  if ( shopEntity->fields.payType != 6 )
    goto LABEL_10;
  this = (ShopBuyItemConfirmMenu_o *)ShopEntity__GetItemCount(shopEntity, 0);
  v9 = (int)this < 2 && isNotHavingShopItemReceived;
  if ( (int)this <= 1 && isNotHavingShopItemReceived )
  {
    extensionInfoLabel = v6->fields.extensionInfoLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
    v11 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9697/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/, 0);
    ShopBuyItemConfirmMenu__SetLabelText(v11, extensionInfoLabel, (System_String_o *)v11, v12);
LABEL_10:
    v9 = isNotHavingShopItemReceived;
  }
  ShopBuyItemConfirmMenu__SetLabelActive(this, v6->fields.extensionInfoLabel, v9, method);
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
  if ( (byte_596C788 & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu_o *)sub_2213A60(&StringLiteral_9661/*"NONE"*/);
    byte_596C788 = 1;
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
    sub_2213CDC(this, shopEntity);
  }
  if ( purchaseType == 1 || purchaseType == 4 )
    goto LABEL_18;
LABEL_16:
  if ( !System_String__IsNullOrEmpty(shopEntity->fields.infoMessage, 0)
    && System_String__op_Inequality(shopEntity->fields.infoMessage, (System_String_o *)StringLiteral_9661/*"NONE"*/, 0) )
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.state = 2;
  this->fields.onDecide = onDecide;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide,
    (int32_t)onDecide,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemConfirmMenu__SetItemIcon(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        const MethodInfo *method)
{
  UnityEngine_Object_o *chocolateSprite; // x22
  void *gameObject; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t purchaseType; // w21
  struct System_Int32_array *targetIds; // x8
  __int64 v13; // x2
  struct ItemIconComponent_o *itemIcon; // x9
  UISprite_o *iconSprite; // x19
  int32_t v16; // w20
  ItemIconComponent_o *v17; // x22
  Il2CppObject *MasterData_object; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *v21; // x20
  UnityEngine_GameObject_o *v22; // x19
  ServantEntity_o *v23; // [xsp+0h] [xbp-40h] BYREF
  int32_t imageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596C789 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_AssistMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C789 = 1;
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  imageId = 0;
  v23 = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, shopEntity, isInPreparation);
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
      sub_2213CDC(gameObject, v9);
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
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v10);
      gameObject = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_AssistMaster___);
      targetIds = shopEntity->fields.targetIds;
      if ( !targetIds )
        goto LABEL_43;
      if ( !LODWORD(targetIds->max_length) )
        sub_2213CE4(gameObject);
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
      v16 = *((_DWORD *)gameObject + 10);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9, v13);
      AtlasManager__SetSkillIcon(iconSprite, v16, 0);
    }
    else
    {
      v17 = this->fields.itemIcon;
      gameObject = (void *)ShopEntity__get_TargetId(shopEntity, 0);
      if ( !v17 )
        goto LABEL_43;
      ItemIconComponent__SetPurchase(v17, purchaseType, (int32_t)gameObject, shopEntity->fields.imageId, 0);
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_43;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
      gameObject = (void *)ShopEntity__get_TargetId(shopEntity, 0);
      if ( !MasterData_object )
        goto LABEL_43;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             (Il2CppObject **)&v23,
             (int32_t)gameObject,
             (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
      {
        v21 = (UnityEngine_Object_o *)this->fields.chocolateSprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
        if ( UnityEngine_Object__op_Inequality(v21, 0, 0) )
        {
          gameObject = this->fields.chocolateSprite;
          if ( !gameObject )
            goto LABEL_43;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !v23 )
            goto LABEL_43;
          v22 = (UnityEngine_GameObject_o *)gameObject;
          gameObject = (void *)ServantEntity__get_IsChocolateSvtEquip(v23, 0);
          if ( !v22 )
            goto LABEL_43;
          UnityEngine_GameObject__SetActive(v22, (unsigned __int8)gameObject & 1, 0);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemConfirmMenu__SetLabelActive(
        ShopBuyItemConfirmMenu_o *this,
        UILabel_o *label,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_596C784 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C784 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label, isActive);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0)) == 0 )
      sub_2213CDC(gameObject, v7);
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

  if ( (byte_596C785 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C785 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label, text);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( !v6 )
  {
    if ( !label )
      sub_2213CDC(v6, v7);
    WrapControlText__textAdjust(label, text, label->fields.mFontSize, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  struct System_Int32_array *targetIds; // x8
  System_String_o *Detail; // x0
  UILabel_o *v18; // x19
  ShopBuyItemConfirmMenu_o *v19; // x0
  const MethodInfo *v20; // x3
  UILabel_o *v21; // x1
  UILabel_o *v22; // x20
  System_String_o *v23; // x19
  System_String_o *v24; // x0
  System_String_o *v25; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *message; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  message = preparationMessage;
  if ( (byte_596C78E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_AssistMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_16464/*"[000000]"*/);
    this = (ShopBuyItemConfirmMenu_o *)sub_2213A60(&StringLiteral_16465/*"[000000]？"*/);
    byte_596C78E = 1;
  }
  v25 = 0;
  if ( isInPreparation )
  {
    if ( shopEntity )
    {
      v9 = (System_String_o *)ShopEntity__checkFlag(shopEntity, 8, 0);
      messageLabel = v8->fields.messageLabel;
      if ( ((unsigned __int8)v9 & 1) != 0 )
      {
        v12 = v8->fields.messageLabel;
        v13 = (System_String_o *)StringLiteral_16465/*"[000000]？"*/;
LABEL_19:
        ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)v9, v12, v13, v10);
        return;
      }
      v9 = System_String__Concat_75651716((System_String_o *)StringLiteral_16464/*"[000000]"*/, preparationMessage, 0);
      v12 = messageLabel;
LABEL_18:
      v13 = v9;
      goto LABEL_19;
    }
    goto LABEL_27;
  }
  if ( !shopEntity )
    goto LABEL_27;
  purchaseType = shopEntity->fields.purchaseType;
  if ( purchaseType != 14 )
  {
    if ( purchaseType == 24 )
    {
      v15 = v8->fields.messageLabel;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, shopEntity, isInPreparation);
      this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_AssistMaster___);
      targetIds = shopEntity->fields.targetIds;
      if ( targetIds )
      {
        if ( !LODWORD(targetIds->max_length) )
          sub_2213CE4(this);
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
            v9 = System_String__Concat_75651716((System_String_o *)StringLiteral_16464/*"[000000]"*/, Detail, 0);
            v12 = v15;
            goto LABEL_18;
          }
        }
      }
LABEL_27:
      sub_2213CDC(this, shopEntity);
    }
    goto LABEL_23;
  }
  if ( !ShopEntity__IsSoldOut(shopEntity, 0) || !ShopEntity__TryGetClosedMessage(shopEntity, &message, &v25, 0) )
  {
LABEL_23:
    v22 = v8->fields.messageLabel;
    v23 = shopEntity->fields.detail;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity, isInPreparation);
    v24 = LocalizationManager__ReplaceCommonTag(v23, 0, 0);
    v19 = (ShopBuyItemConfirmMenu_o *)System_String__Concat_75651716((System_String_o *)StringLiteral_16464/*"[000000]"*/, v24, 0);
    v21 = v22;
    goto LABEL_26;
  }
  v18 = v8->fields.messageLabel;
  v19 = (ShopBuyItemConfirmMenu_o *)System_String__Concat_75651716((System_String_o *)StringLiteral_16464/*"[000000]"*/, message, 0);
  v21 = v18;
LABEL_26:
  ShopBuyItemConfirmMenu__SetLabelText(v19, v21, (System_String_o *)v19, v20);
}


// local variable allocation has failed, the output may be wrong!
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
  struct System_Int32_array *targetIds; // x8
  System_String_o *m_CancellationTokenSource; // x1
  __int64 v14; // x2
  ShopBuyItemConfirmMenu_o *nameTextLabel; // x19

  v10 = this;
  if ( (byte_596C78A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_AssistMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    this = (ShopBuyItemConfirmMenu_o *)sub_2213A60(&StringLiteral_26984/*"？"*/);
    byte_596C78A = 1;
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
          m_CancellationTokenSource = (System_String_o *)StringLiteral_26984/*"？"*/;
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
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity, v14);
      this = (ShopBuyItemConfirmMenu_o *)LocalizationManager__ReplaceCommonTag(preparationItemName, 0, 0);
      if ( nameTextLabel )
      {
        m_CancellationTokenSource = (System_String_o *)this;
        this = nameTextLabel;
        goto LABEL_24;
      }
    }
LABEL_25:
    sub_2213CDC(this, shopEntity);
  }
  v11 = (ShopBuyItemConfirmMenu_o *)v10->fields.nameTextLabel;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, shopEntity, isInPreparation);
  this = (ShopBuyItemConfirmMenu_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_AssistMaster___);
  targetIds = shopEntity->fields.targetIds;
  if ( !targetIds )
    goto LABEL_25;
  if ( !LODWORD(targetIds->max_length) )
    sub_2213CE4(this);
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
  __int64 v9; // x1
  __int64 v10; // x2
  UILabel_o *numTitleLabel; // x21
  ShopBuyItemConfirmMenu_o *v12; // x0
  const MethodInfo *v13; // x3
  ShopBuyItemConfirmMenu_o *v14; // x0
  const MethodInfo *v15; // x3
  UILabel_o *numTextLabel; // x19
  int64_t HoldCount; // x0
  ShopBuyItemConfirmMenu_o *NumberFormatLong; // x0
  const MethodInfo *v19; // x3
  ShopBuyItemConfirmMenu_o *v20; // x0
  const MethodInfo *v21; // x3

  v6 = this;
  if ( (byte_596C793 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    this = (ShopBuyItemConfirmMenu_o *)sub_2213A60(&StringLiteral_12590/*"SHOP_BUY_ITEM_HOLD"*/);
    byte_596C793 = 1;
  }
  if ( !isInPreparation )
  {
    if ( shopEntity )
      goto LABEL_8;
LABEL_13:
    sub_2213CDC(this, shopEntity);
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
    ShopBuyItemConfirmMenu__SetLabelActive(v20, v6->fields.numTextLabel, 0, v21);
    return;
  }
  ShopBuyItemConfirmMenu__SetLabelActive((ShopBuyItemConfirmMenu_o *)v7, v6->fields.numTitleLabel, 1, v8);
  numTitleLabel = v6->fields.numTitleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
  v12 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12590/*"SHOP_BUY_ITEM_HOLD"*/, 0);
  ShopBuyItemConfirmMenu__SetLabelText(v12, numTitleLabel, (System_String_o *)v12, v13);
  ShopBuyItemConfirmMenu__SetLabelActive(v14, v6->fields.numTextLabel, 1, v15);
  numTextLabel = v6->fields.numTextLabel;
  HoldCount = ShopEntity__getHoldCount(shopEntity, 0);
  NumberFormatLong = (ShopBuyItemConfirmMenu_o *)LocalizationManager__GetNumberFormatLong(HoldCount, 0);
  ShopBuyItemConfirmMenu__SetLabelText(NumberFormatLong, numTextLabel, (System_String_o *)NumberFormatLong, v19);
}


void ShopBuyItemConfirmMenu__SetPossessionInfo(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *possessionGrid; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *possessionNumLabel; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *coinNumLabel; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *coinIcon; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *treasureDeviceLevelLabel; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *summonedSprite; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *possessionBGSprite; // x21
  Il2CppObject *TargetId; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned int purchaseType; // w8
  int32_t v28; // w21
  Il2CppObject *Master_object; // x21
  __int64 v30; // x2
  Il2CppClass *klass; // x21
  void *monitor; // x22
  UIGrid_o *v33; // x22
  UILabel_o *v34; // x23
  UILabel_o *v35; // x24
  UILabel_o *v36; // x25
  UISprite_o *v37; // x26
  UISprite_o *v38; // x27
  UISprite_o *v39; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  bool IsPossessionInfoDisp; // w19
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_596C7AB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ShopBuyItemUtility_TypeInfo);
    byte_596C7AB = 1;
  }
  possessionGrid = (UnityEngine_Object_o *)this->fields.possessionGrid;
  entity = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, shopEntity, method);
  if ( !UnityEngine_Object__op_Equality(possessionGrid, 0, 0) )
  {
    possessionNumLabel = (UnityEngine_Object_o *)this->fields.possessionNumLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( !UnityEngine_Object__op_Equality(possessionNumLabel, 0, 0) )
    {
      coinNumLabel = (UnityEngine_Object_o *)this->fields.coinNumLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      if ( !UnityEngine_Object__op_Equality(coinNumLabel, 0, 0) )
      {
        coinIcon = (UnityEngine_Object_o *)this->fields.coinIcon;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
        if ( !UnityEngine_Object__op_Equality(coinIcon, 0, 0) )
        {
          treasureDeviceLevelLabel = (UnityEngine_Object_o *)this->fields.treasureDeviceLevelLabel;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
          if ( !UnityEngine_Object__op_Equality(treasureDeviceLevelLabel, 0, 0) )
          {
            summonedSprite = (UnityEngine_Object_o *)this->fields.summonedSprite;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
            if ( !UnityEngine_Object__op_Equality(summonedSprite, 0, 0) )
            {
              possessionBGSprite = (UnityEngine_Object_o *)this->fields.possessionBGSprite;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
              TargetId = (Il2CppObject *)UnityEngine_Object__op_Equality(possessionBGSprite, 0, 0);
              if ( ((unsigned __int8)TargetId & 1) == 0 )
              {
                if ( !shopEntity )
                  goto LABEL_42;
                purchaseType = shopEntity->fields.purchaseType;
                v28 = 0;
                if ( purchaseType <= 0x15 && ((1 << purchaseType) & 0x200110) != 0 )
                {
                  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v25, v26);
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
                  TargetId = (Il2CppObject *)ShopEntity__get_TargetId(shopEntity, 0);
                  if ( !Master_object )
                    goto LABEL_42;
                  if ( DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                         &entity,
                         (int32_t)TargetId,
                         (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
                        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(
                            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                            v25,
                            v30);
                        *(_QWORD *)&v44.fields.currentCryptoKey = klass;
                        *(_QWORD *)&v44.fields.fakeValue = monitor;
                        v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v44, 0);
                        goto LABEL_38;
                      }
LABEL_42:
                      sub_2213CDC(TargetId, v25);
                    }
                  }
                  v28 = 0;
                }
LABEL_38:
                v33 = this->fields.possessionGrid;
                v34 = this->fields.possessionNumLabel;
                v35 = this->fields.coinNumLabel;
                v36 = this->fields.treasureDeviceLevelLabel;
                v38 = this->fields.summonedSprite;
                v37 = this->fields.coinIcon;
                v39 = this->fields.possessionBGSprite;
                IsPossessionInfoDisp = ShopEntity__IsPossessionInfoDisp(shopEntity, 0);
                if ( !*(&ShopBuyItemUtility_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo, v40, v41);
                ShopBuyItemUtility__SetPossessionInfo(v28, v33, v34, v35, v37, v36, v38, v39, IsPossessionInfoDisp, 0);
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
  __int64 v13; // x2
  const MethodInfo *v14; // x5
  int payType; // w8
  Il2CppObject *MasterData_object; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Entity; // x22
  UILabel_o *v20; // x23
  __int64 *v21; // x8
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  __int64 max_length_low; // x9
  __int64 v24; // x24
  UILabel_o *priceDataLabel; // x21
  UIIconLabel_o *priceIconLabel; // x19
  int32_t PriceIcon; // w21
  const MethodInfo *v28; // x1
  unsigned __int64 i; // x23
  Il2CppObject *v30; // x24
  __int64 v31; // x2
  __int64 v32; // x24
  struct UILabel_array *v33; // x8
  struct UIIconLabel_array *v34; // x8
  struct UILabel_array *v35; // x8
  struct ItemIconComponent_array *v36; // x8
  struct UILabel_array *v37; // x8
  UILabel_o *v38; // x25
  System_String_o *v39; // x26
  struct UIIconLabel_array *v40; // x8
  UIIconLabel_o *v41; // x25
  int32_t v42; // w26
  struct UILabel_o *v43; // x22
  __int64 *v44; // x8
  UILabel_o *v45; // x23
  UIIconLabel_o *v46; // x23
  int32_t v47; // w24
  __int64 v48; // x1
  __int64 v49; // x2
  int32_t Price; // w21
  _BOOL4 v51; // w21
  UILabel_o *priceFreeDataLabel; // x19
  __int64 v53; // x1
  __int64 v54; // x2
  int32_t ItemID; // w0
  System_String_o *v56; // x1
  UILabel_o *v57; // x0
  Il2CppObject *v58; // x22
  __int64 v59; // x1
  __int64 v60; // x2
  UIIconLabel_o *v61; // x23
  int32_t v62; // w24
  Il2CppObject *v63; // x22
  UIIconLabel_o *v64; // x19
  int32_t v65; // w22
  _BOOL8 IsSetStrikethrough; // x0
  const MethodInfo *v67; // x3
  __int64 v68; // x8
  __int64 v69; // x8
  __int64 v70; // x9
  __int64 v71; // x10
  __int64 v72; // x20
  unsigned __int64 v73; // x9
  unsigned __int64 v74; // x10
  struct UILabel_array *priceDataLabels; // x11
  unsigned __int64 v76; // x12
  struct UIIconLabel_array *priceIconLabels; // x11
  unsigned __int64 v78; // x12
  UIIconLabel_o *v79; // x2
  struct ItemIconComponent_array *eventItemIcons; // x11
  unsigned __int64 v81; // x12
  ItemIconComponent_o *v82; // x3
  int32_t v83; // w23
  __int64 v84; // x2
  Il2CppObject *v85; // x23
  UILabel_o *v86; // x22
  System_String_o *v87; // x24
  __int64 v88; // x2
  UILabel_o *v89; // x22
  UIIconLabel_o *v90; // x22
  int32_t v91; // w24
  int32_t v92; // [xsp+8h] [xbp-68h] BYREF
  int32_t Prices; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4

  v7 = shopEntity;
  if ( (byte_596C795 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&EventRewardRootComponent_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&ShopBuyItemConfirmMenu_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_12883/*"STONE_FRAGMENTS_NEED_INFO"*/);
    sub_2213A60(&StringLiteral_2034/*"ANONYMOUS_NEED_INFO"*/);
    sub_2213A60(&StringLiteral_12889/*"STONE_NEED_INFO"*/);
    sub_2213A60(&StringLiteral_11287/*"QP_NAME"*/);
    sub_2213A60(&StringLiteral_11436/*"RARE_PRI_NEED_INFO"*/);
    sub_2213A60(&StringLiteral_1838/*"?"*/);
    sub_2213A60(&StringLiteral_5840/*"EVENT_ITEM_NEED_INFO"*/);
    sub_2213A60(&StringLiteral_8898/*"MANA_NEED_INFO"*/);
    sub_2213A60(&StringLiteral_12620/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/);
    byte_596C795 = 1;
  }
  eventItemIcon = (__int64)this->fields.eventItemIcon;
  if ( !eventItemIcon )
    goto LABEL_158;
  ItemIconComponent__Clear((ItemIconComponent_o *)eventItemIcon, 0);
  UserItemCounts = ShopBuyItemConfirmMenu__GetUserItemCounts(this, v10);
  eventItemIcon = (__int64)ShopBuyItemConfirmMenu__GetUserItemCountsLong(
                             (ShopBuyItemConfirmMenu_o *)UserItemCounts,
                             v12);
  if ( !v7 )
    goto LABEL_158;
  payType = v7->fields.payType;
  if ( payType <= 8 )
  {
    if ( payType <= 3 )
    {
      if ( payType != 1 )
      {
        if ( payType != 2 )
          return;
        v24 = eventItemIcon;
        priceDataLabel = this->fields.priceDataLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity, v13);
        eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11287/*"QP_NAME"*/, 0);
        if ( !priceDataLabel )
          goto LABEL_158;
        UILabel__set_text(priceDataLabel, (System_String_o *)eventItemIcon, 0);
        priceIconLabel = this->fields.priceIconLabel;
        PriceIcon = ShopEntity__GetPriceIcon(v7, 0);
        eventItemIcon = ShopEntity__GetPrice(v7, 0);
        if ( !v24 )
          goto LABEL_158;
        if ( *(_DWORD *)(v24 + 24) )
        {
          if ( priceIconLabel )
          {
            UIIconLabel__SetPurchaseDecisionLong(priceIconLabel, PriceIcon, eventItemIcon, *(_QWORD *)(v24 + 32), 0);
            return;
          }
          goto LABEL_158;
        }
        goto LABEL_184;
      }
      v43 = this->fields.priceDataLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity, v13);
      v44 = &StringLiteral_12889/*"STONE_NEED_INFO"*/;
    }
    else
    {
      if ( payType != 4 )
      {
        if ( payType == 6 )
          goto LABEL_34;
        if ( payType != 8 )
          return;
        eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !eventItemIcon )
          goto LABEL_158;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)eventItemIcon,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
        eventItemIcon = ShopEntity__GetItemID(v7, 0);
        if ( !MasterData_object )
          goto LABEL_158;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   eventItemIcon,
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v20 = this->fields.priceDataLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
        v21 = &StringLiteral_12883/*"STONE_FRAGMENTS_NEED_INFO"*/;
LABEL_103:
        eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)*v21, 0);
        if ( !v20 )
          goto LABEL_158;
        UILabel__set_text(v20, (System_String_o *)eventItemIcon, 0);
        v61 = this->fields.priceIconLabel;
        v62 = ShopEntity__GetPriceIcon(v7, 0);
        eventItemIcon = ShopEntity__GetPrice(v7, 0);
        if ( !UserItemCounts )
          goto LABEL_158;
        if ( LODWORD(UserItemCounts->max_length) )
        {
          if ( v61 )
          {
            UIIconLabel__SetPurchaseDecision(v61, v62, eventItemIcon, UserItemCounts->m_Items[0], 0);
            if ( Entity )
            {
              eventItemIcon = (__int64)this->fields.eventItemIcon;
              if ( eventItemIcon )
              {
                ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, (int32_t)Entity[2].monitor, -1, 1, 0);
                return;
              }
            }
          }
          goto LABEL_158;
        }
        goto LABEL_184;
      }
      v43 = this->fields.priceDataLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity, v13);
      v44 = &StringLiteral_8898/*"MANA_NEED_INFO"*/;
    }
    eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)*v44, 0);
    if ( !v43 )
      goto LABEL_158;
    v56 = (System_String_o *)eventItemIcon;
    v57 = v43;
LABEL_115:
    UILabel__set_text(v57, v56, 0);
    v64 = this->fields.priceIconLabel;
    v65 = ShopEntity__GetPriceIcon(v7, 0);
    eventItemIcon = ShopEntity__GetPrice(v7, 0);
    if ( !UserItemCounts )
      goto LABEL_158;
    if ( LODWORD(UserItemCounts->max_length) )
    {
      if ( v64 )
      {
        UIIconLabel__SetPurchaseDecision(v64, v65, eventItemIcon, UserItemCounts->m_Items[0], 0);
        return;
      }
      goto LABEL_158;
    }
    goto LABEL_184;
  }
  if ( payType > 11 )
  {
    if ( payType != 12 )
    {
      if ( payType != 13 )
      {
        if ( payType == 14 )
        {
          commonConsumeEntities = this->fields.commonConsumeEntities;
          if ( commonConsumeEntities )
          {
            max_length_low = LODWORD(commonConsumeEntities->max_length);
            if ( max_length_low == 1 )
            {
              ShopBuyItemConfirmMenu__SetCommonConsumePriceText(
                this,
                this->fields.priceDataLabel,
                this->fields.priceIconLabel,
                this->fields.eventItemIcon,
                commonConsumeEntities->m_Items[0],
                v14);
            }
            else if ( (int)max_length_low >= 2 )
            {
              v72 = 4;
              while ( 1 )
              {
                v73 = LODWORD(commonConsumeEntities->max_length);
                v74 = v72 - 4;
                if ( v72 - 4 >= (int)v73 )
                  break;
                priceDataLabels = this->fields.priceDataLabels;
                if ( !priceDataLabels )
                  goto LABEL_158;
                v76 = LODWORD(priceDataLabels->max_length);
                if ( (__int64)v74 >= (int)v76 )
                {
                  shopEntity = 0;
                }
                else
                {
                  if ( v74 >= v76 )
                    goto LABEL_184;
                  shopEntity = (ShopEntity_o *)*((_QWORD *)&priceDataLabels->obj.klass + v72);
                }
                priceIconLabels = this->fields.priceIconLabels;
                if ( !priceIconLabels )
                  goto LABEL_158;
                v78 = LODWORD(priceIconLabels->max_length);
                if ( (__int64)v74 >= (int)v78 )
                {
                  v79 = 0;
                }
                else
                {
                  if ( v74 >= v78 )
                    goto LABEL_184;
                  v79 = (UIIconLabel_o *)*((_QWORD *)&priceIconLabels->obj.klass + v72);
                }
                eventItemIcons = this->fields.eventItemIcons;
                if ( !eventItemIcons )
                  goto LABEL_158;
                v81 = LODWORD(eventItemIcons->max_length);
                if ( (__int64)v74 >= (int)v81 )
                {
                  v82 = 0;
                }
                else
                {
                  if ( v74 >= v81 )
                    goto LABEL_184;
                  v82 = (ItemIconComponent_o *)*((_QWORD *)&eventItemIcons->obj.klass + v72);
                }
                if ( v74 >= v73 )
                  goto LABEL_184;
                ShopBuyItemConfirmMenu__SetCommonConsumePriceText(
                  this,
                  (UILabel_o *)shopEntity,
                  v79,
                  v82,
                  *((CommonConsumeEntity_o **)&commonConsumeEntities->obj.klass + v72),
                  v14);
                commonConsumeEntities = this->fields.commonConsumeEntities;
                ++v72;
                if ( !commonConsumeEntities )
                  goto LABEL_158;
              }
            }
          }
        }
        return;
      }
      priceFreeDataLabel = this->fields.priceFreeDataLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity, v13);
      eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12620/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, 0);
      if ( priceFreeDataLabel )
      {
        UILabel__set_text(priceFreeDataLabel, (System_String_o *)eventItemIcon, 0);
        return;
      }
      goto LABEL_158;
    }
    eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !eventItemIcon )
      goto LABEL_158;
    v63 = DataManager__GetMasterData_object_(
            (DataManager_o *)eventItemIcon,
            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
    eventItemIcon = ShopEntity__GetItemID(v7, 0);
    if ( !v63 )
      goto LABEL_158;
    eventItemIcon = (__int64)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)v63,
                               eventItemIcon,
                               (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( !eventItemIcon || !this->fields.priceDataLabel )
      goto LABEL_158;
    v56 = *(System_String_o **)(eventItemIcon + 24);
    v57 = this->fields.priceDataLabel;
    goto LABEL_115;
  }
  if ( payType == 9 )
  {
    eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !eventItemIcon )
      goto LABEL_158;
    v58 = DataManager__GetMasterData_object_(
            (DataManager_o *)eventItemIcon,
            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
    eventItemIcon = ShopEntity__GetItemID(v7, 0);
    if ( !v58 )
      goto LABEL_158;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v58,
               eventItemIcon,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    v20 = this->fields.priceDataLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v59, v60);
    v21 = &StringLiteral_2034/*"ANONYMOUS_NEED_INFO"*/;
    goto LABEL_103;
  }
  if ( payType == 10 )
  {
    v45 = this->fields.priceDataLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity, v13);
    eventItemIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11436/*"RARE_PRI_NEED_INFO"*/, 0);
    if ( !v45 )
      goto LABEL_158;
    UILabel__set_text(v45, (System_String_o *)eventItemIcon, 0);
    v46 = this->fields.priceIconLabel;
    v47 = ShopEntity__GetPriceIcon(v7, 0);
    eventItemIcon = ShopEntity__GetPrice(v7, 0);
    if ( !UserItemCounts )
      goto LABEL_158;
    if ( !LODWORD(UserItemCounts->max_length) )
      goto LABEL_184;
    if ( v46 )
    {
      UIIconLabel__SetPurchaseDecision(v46, v47, eventItemIcon, UserItemCounts->m_Items[0], 0);
      if ( ShopEntity__GetPrice(v7, 0) )
      {
        Price = ShopEntity__GetPrice(v7, 0);
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v48, v49);
        v51 = (int)log10((double)Price) == 0;
      }
      else
      {
        v51 = 1;
      }
      IsSetStrikethrough = ShopEntity__IsSetStrikethrough(v7, isInPreparation, 0);
      if ( IsSetStrikethrough )
      {
        v68 = 400;
        if ( v51 )
          v68 = 392;
        ShopBuyItemConfirmMenu__SetLabelActive(
          (ShopBuyItemConfirmMenu_o *)IsSetStrikethrough,
          *(UILabel_o **)((char *)&this->klass + v68),
          1,
          v67);
      }
      if ( !ShopEntity__IsAfterTheFreeShopReleaseDate(v7, 0) || !ShopEntity__IsFulFilledFreeExchangeCondition(v7, 0) )
        return;
      eventItemIcon = (__int64)this->fields.freeLabel;
      if ( eventItemIcon )
      {
        eventItemIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventItemIcon, 0);
        if ( eventItemIcon )
        {
          eventItemIcon = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)eventItemIcon, 0);
          if ( eventItemIcon )
          {
            v69 = 508;
            if ( v51 )
            {
              v69 = 496;
              v70 = 492;
            }
            else
            {
              v70 = 504;
            }
            v71 = v51 ? 488LL : 500LL;
            v94.fields.z = *(float *)((char *)&this->klass + v69);
            v94.fields.y = *(float *)((char *)&this->klass + v70);
            v94.fields.x = *(float *)((char *)&this->klass + v71);
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)eventItemIcon, v94, 0);
            eventItemIcon = (__int64)this->fields.freeLabel;
            if ( eventItemIcon )
            {
              eventItemIcon = (__int64)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)eventItemIcon,
                                         0);
              if ( eventItemIcon )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventItemIcon, 1, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_158:
    sub_2213CDC(eventItemIcon, shopEntity);
  }
LABEL_34:
  if ( ShopEntity__GetItemCount(v7, 0) < 2 )
  {
    if ( isNotHavingShopItemReceived )
      return;
    if ( ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, v28) )
    {
      if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v53, v54);
      ItemID = sub_250B6F0(0);
    }
    else
    {
      ItemID = ShopEntity__GetItemID(v7, 0);
    }
    v83 = ItemID;
    eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !eventItemIcon )
      goto LABEL_158;
    eventItemIcon = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)eventItemIcon,
                               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !eventItemIcon )
      goto LABEL_158;
    v85 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)eventItemIcon,
            v83,
            (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( isInPreparation )
    {
      if ( ShopEntity__checkFlag(v7, 64, 0) )
      {
        eventItemIcon = (__int64)this->fields.priceDataLabel;
        if ( eventItemIcon )
        {
          UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1838/*"?"*/, 0);
          eventItemIcon = (__int64)this->fields.priceIconLabel;
          if ( eventItemIcon )
          {
            UIIconLabel__SetEventQuestion((UIIconLabel_o *)eventItemIcon, 0);
            return;
          }
        }
        goto LABEL_158;
      }
      if ( ShopEntity__checkFlag(v7, 32, 0) )
      {
        eventItemIcon = (__int64)this->fields.priceDataLabel;
        if ( eventItemIcon )
        {
          UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1838/*"?"*/, 0);
          eventItemIcon = (__int64)this->fields.eventItemIcon;
          if ( eventItemIcon )
          {
            ItemIconComponent__SetItemImage((ItemIconComponent_o *)eventItemIcon, 8007, 0);
            return;
          }
        }
        goto LABEL_158;
      }
    }
    v86 = this->fields.priceDataLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity, v84);
    v87 = LocalizationManager__Get((System_String_o *)StringLiteral_5840/*"EVENT_ITEM_NEED_INFO"*/, 0);
    Prices = ShopEntity__GetPrices(v7, 0, 0);
    eventItemIcon = j_il2cpp_value_box_0(qword_5984348, &Prices);
    if ( !v85 )
      goto LABEL_158;
    eventItemIcon = (__int64)System_String__Format_75697880(
                               v87,
                               (Il2CppObject *)eventItemIcon,
                               (Il2CppObject *)v85[1].monitor,
                               0);
    if ( !v86 )
      goto LABEL_158;
    UILabel__set_text(v86, (System_String_o *)eventItemIcon, 0);
    v89 = this->fields.priceDataLabel;
    eventItemIcon = (__int64)ShopBuyItemConfirmMenu_TypeInfo;
    if ( !*(&ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo, shopEntity, v88);
    if ( !v89 )
      goto LABEL_158;
    UILabel__SetCondensedScale(v89, ShopBuyItemConfirmMenu_TypeInfo->static_fields->PRICE_DATA_LABEL_MAX_WIDTH, 0, 0);
    v90 = this->fields.priceIconLabel;
    v91 = ShopEntity__GetPriceIcon(v7, 0);
    eventItemIcon = ShopEntity__GetPrices(v7, 0, 0);
    if ( !UserItemCounts )
      goto LABEL_158;
    if ( LODWORD(UserItemCounts->max_length) )
    {
      if ( v90 )
      {
        UIIconLabel__SetPurchaseDecision(v90, v91, eventItemIcon, UserItemCounts->m_Items[0], 0);
        eventItemIcon = (__int64)this->fields.eventItemIcon;
        if ( eventItemIcon )
        {
          ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, (int32_t)v85[2].monitor, -1, 1, 0);
          return;
        }
      }
      goto LABEL_158;
    }
LABEL_184:
    sub_2213CE4(eventItemIcon);
  }
  if ( ShopEntity__GetItemCount(v7, 0) >= 1 )
  {
    for ( i = 0; (__int64)i < ShopEntity__GetItemCount(v7, 0); ++i )
    {
      eventItemIcon = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !eventItemIcon )
        goto LABEL_158;
      v30 = DataManager__GetMasterData_object_(
              (DataManager_o *)eventItemIcon,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
      eventItemIcon = ShopEntity__GetItemIDs(v7, i, 0);
      if ( !v30 )
        goto LABEL_158;
      eventItemIcon = (__int64)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v30,
                                 eventItemIcon,
                                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v32 = eventItemIcon;
      if ( !isInPreparation )
        goto LABEL_56;
      eventItemIcon = ShopEntity__checkFlag(v7, 64, 0);
      if ( (eventItemIcon & 1) != 0 )
      {
        v33 = this->fields.priceDataLabels;
        if ( !v33 )
          goto LABEL_158;
        if ( i >= LODWORD(v33->max_length) )
          goto LABEL_184;
        eventItemIcon = (__int64)v33->m_Items[i];
        if ( !eventItemIcon )
          goto LABEL_158;
        UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1838/*"?"*/, 0);
        v34 = this->fields.priceIconLabels;
        if ( !v34 )
          goto LABEL_158;
        if ( i >= LODWORD(v34->max_length) )
          goto LABEL_184;
        eventItemIcon = (__int64)v34->m_Items[i];
        if ( !eventItemIcon )
          goto LABEL_158;
        UIIconLabel__SetEventQuestion((UIIconLabel_o *)eventItemIcon, 0);
        continue;
      }
      eventItemIcon = ShopEntity__checkFlag(v7, 32, 0);
      if ( (eventItemIcon & 1) != 0 )
      {
        v35 = this->fields.priceDataLabels;
        if ( !v35 )
          goto LABEL_158;
        if ( i >= LODWORD(v35->max_length) )
          goto LABEL_184;
        eventItemIcon = (__int64)v35->m_Items[i];
        if ( !eventItemIcon )
          goto LABEL_158;
        UILabel__set_text((UILabel_o *)eventItemIcon, (System_String_o *)StringLiteral_1838/*"?"*/, 0);
        v36 = this->fields.eventItemIcons;
        if ( !v36 )
          goto LABEL_158;
        if ( i >= LODWORD(v36->max_length) )
          goto LABEL_184;
        eventItemIcon = (__int64)v36->m_Items[i];
        if ( !eventItemIcon )
          goto LABEL_158;
        ItemIconComponent__SetItemImage((ItemIconComponent_o *)eventItemIcon, 8007, 0);
      }
      else
      {
LABEL_56:
        v37 = this->fields.priceDataLabels;
        if ( !v37 )
          goto LABEL_158;
        if ( i >= LODWORD(v37->max_length) )
          goto LABEL_184;
        v38 = v37->m_Items[i];
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity, v31);
        v39 = LocalizationManager__Get((System_String_o *)StringLiteral_5840/*"EVENT_ITEM_NEED_INFO"*/, 0);
        v92 = ShopEntity__GetPrices(v7, i, 0);
        eventItemIcon = j_il2cpp_value_box_0(qword_5984348, &v92);
        if ( !v32 )
          goto LABEL_158;
        eventItemIcon = (__int64)System_String__Format_75697880(
                                   v39,
                                   (Il2CppObject *)eventItemIcon,
                                   *(Il2CppObject **)(v32 + 24),
                                   0);
        if ( !v38 )
          goto LABEL_158;
        UILabel__set_text(v38, (System_String_o *)eventItemIcon, 0);
        v40 = this->fields.priceIconLabels;
        if ( !v40 )
          goto LABEL_158;
        if ( i >= LODWORD(v40->max_length) )
          goto LABEL_184;
        v41 = v40->m_Items[i];
        v42 = ShopEntity__GetPriceIcon(v7, 0);
        eventItemIcon = ShopEntity__GetPrices(v7, i, 0);
        if ( !UserItemCounts )
          goto LABEL_158;
        if ( i >= LODWORD(UserItemCounts->max_length) )
          goto LABEL_184;
        if ( !v41 )
          goto LABEL_158;
        UIIconLabel__SetPurchaseDecision(v41, v42, eventItemIcon, UserItemCounts->m_Items[i], 0);
        eventItemIcon = (__int64)this->fields.eventItemIcon;
        if ( !eventItemIcon )
          goto LABEL_158;
        ItemIconComponent__SetItem((ItemIconComponent_o *)eventItemIcon, *(_DWORD *)(v32 + 40), -1, 1, 0);
      }
    }
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
  const MethodInfo *v11; // x4
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x4

  ShopBuyItemConfirmMenu__SetPriceInfoActive(
    this,
    shopEntity,
    isNotHavingShopItemReceived,
    *(const MethodInfo **)&buttonSpriteId);
  ShopBuyItemConfirmMenu__SetPriceDataText(this, shopEntity, isInPreparation, isNotHavingShopItemReceived, v11);
  if ( !shopEntity )
    sub_2213CDC(v12, v13);
  ShopBuyItemConfirmMenu__SetDecideButtonSprite(this, shopEntity, v14, buttonSpriteId, v15);
}


void ShopBuyItemConfirmMenu__SetPriceInfoActive(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isNotHavingShopItemReceived,
        const MethodInfo *method)
{
  int32_t payType; // w8
  ShopBuyItemConfirmMenu_o *v6; // x19
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  struct CommonConsumeEntity_array *v8; // x8
  char v9; // w1
  int32_t ItemCount; // w8
  char v11; // w1

  if ( !shopEntity )
    goto LABEL_35;
  payType = shopEntity->fields.payType;
  v6 = this;
  if ( payType <= 7 )
  {
    if ( payType != 1 && payType != 4 )
    {
      if ( payType != 6 )
        return;
      goto LABEL_17;
    }
LABEL_22:
    this = (ShopBuyItemConfirmMenu_o *)this->fields.priceInfoFree;
    if ( !this )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (ShopBuyItemConfirmMenu_o *)v6->fields.priceInfo1;
    if ( !this )
      goto LABEL_35;
    v11 = 1;
    goto LABEL_25;
  }
  if ( payType < 11 )
    goto LABEL_22;
  if ( payType == 11 )
  {
LABEL_17:
    ItemCount = ShopEntity__GetItemCount(shopEntity, 0);
    this = (ShopBuyItemConfirmMenu_o *)v6->fields.priceInfoFree;
    if ( ItemCount > 1 )
    {
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        this = (ShopBuyItemConfirmMenu_o *)v6->fields.priceInfo1;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          this = (ShopBuyItemConfirmMenu_o *)v6->fields.priceInfo2;
          if ( this )
          {
            v9 = 1;
            goto LABEL_27;
          }
        }
      }
LABEL_35:
      sub_2213CDC(this, shopEntity);
    }
    if ( !this )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (ShopBuyItemConfirmMenu_o *)v6->fields.priceInfo1;
    if ( !this )
      goto LABEL_35;
    v11 = !isNotHavingShopItemReceived;
LABEL_25:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v11, 0);
    this = (ShopBuyItemConfirmMenu_o *)v6->fields.priceInfo2;
    if ( this )
    {
      v9 = 0;
      goto LABEL_27;
    }
    goto LABEL_35;
  }
  if ( payType == 13 )
  {
    this = (ShopBuyItemConfirmMenu_o *)this->fields.priceInfoFree;
    if ( !this )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (ShopBuyItemConfirmMenu_o *)v6->fields.priceInfo1;
    if ( !this )
      goto LABEL_35;
    v11 = 0;
    goto LABEL_25;
  }
  if ( payType == 14 && this->fields.commonConsumeEntities )
  {
    this = (ShopBuyItemConfirmMenu_o *)this->fields.priceInfoFree;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      commonConsumeEntities = v6->fields.commonConsumeEntities;
      if ( commonConsumeEntities )
      {
        this = (ShopBuyItemConfirmMenu_o *)v6->fields.priceInfo1;
        if ( this )
        {
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)this,
            LODWORD(commonConsumeEntities->max_length) == 1,
            0);
          v8 = v6->fields.commonConsumeEntities;
          if ( v8 )
          {
            this = (ShopBuyItemConfirmMenu_o *)v6->fields.priceInfo2;
            if ( this )
            {
              v9 = SLODWORD(v8->max_length) > 1;
LABEL_27:
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v9, 0);
              return;
            }
          }
        }
      }
    }
    goto LABEL_35;
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemConfirmMenu__SetSpriteActive(
        ShopBuyItemConfirmMenu_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_596C786 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C786 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sprite, isActive);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0)) == 0 )
      sub_2213CDC(gameObject, v7);
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

  if ( (byte_596C787 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C787 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sprite, spriteName);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( !v6 )
  {
    if ( !sprite )
      sub_2213CDC(v6, v7);
    UISprite__set_spriteName(sprite, spriteName, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemConfirmMenu__SetTextOnMask(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        const MethodInfo *method)
{
  int v7; // w8
  ShopReleaseMaster_o *Master_object; // x0
  __int64 v9; // x1
  ShopReleaseMaster_o *v10; // x22
  _BOOL4 isExistCondType; // w23
  _BOOL4 v12; // w24
  _BOOL4 v13; // w26
  _BOOL4 v14; // w25
  System_String_o *IsSetItemEventShop; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x3
  int32_t purchaseType; // w8
  int v20; // w27
  __int64 v21; // x1
  __int64 v22; // x2
  UILabel_o *textOnMask; // x19
  __int64 *v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  ShopBuyItemConfirmMenu_o *v27; // x0
  const MethodInfo *v28; // x3
  struct System_Int32_array *targetIds; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 *v34; // x8
  __int64 v35; // x1
  __int64 v36; // x2
  struct UILabel_o *v37; // x19
  __int64 *v38; // x8
  UILabel_o *v39; // x1
  System_String_o *v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  UILabel_o *v43; // x19
  unsigned int shopType; // w8
  __int64 v45; // x1
  __int64 v46; // x2
  System_Int32_array *v47; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_596C792 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ShopReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_12612/*"SHOP_CANT_BUY"*/);
    sub_2213A60(&StringLiteral_12654/*"SHOP_QUEST_OPEN"*/);
    sub_2213A60(&StringLiteral_12652/*"SHOP_QUEST_ALREADY_CLEARED"*/);
    sub_2213A60(&StringLiteral_12650/*"SHOP_NOT_RELEASE_SET_ITEM"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_12556/*"SHOP_ALREADY_GET"*/);
    byte_596C792 = 1;
  }
  questId = 0;
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v47 = 0;
  entity = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, shopEntity, isInPreparation);
  Master_object = (ShopReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  if ( !shopEntity )
    goto LABEL_79;
  v10 = Master_object;
  if ( !Master_object )
    goto LABEL_79;
  isExistCondType = ShopReleaseMaster__isExistCondType(Master_object, shopEntity->fields.id, 38, 0);
  v12 = ShopReleaseMaster__isExistCondType(v10, shopEntity->fields.id, 41, 0);
  v13 = ShopReleaseMaster__isExistCondType(v10, shopEntity->fields.id, 40, 0);
  v14 = ShopReleaseMaster__isExistCondType(v10, shopEntity->fields.id, 78, 0)
     || ShopReleaseMaster__isExistCondType(v10, shopEntity->fields.id, 79, 0);
  IsSetItemEventShop = (System_String_o *)ShopReleaseMaster__isExistCondType(v10, shopEntity->fields.id, 108, 0);
  purchaseType = shopEntity->fields.purchaseType;
  v20 = (int)IsSetItemEventShop;
  if ( purchaseType <= 5 )
  {
    if ( purchaseType != 2 )
    {
      if ( purchaseType != 4 )
      {
        if ( purchaseType == 5 )
        {
          IsSetItemEventShop = (System_String_o *)ShopBuyItemConfirmMenu__GetIsSetItemEventShop(
                                                    (ShopBuyItemConfirmMenu_o *)IsSetItemEventShop,
                                                    shopEntity->fields.targetIds,
                                                    v17);
          if ( ((unsigned __int8)IsSetItemEventShop & 1) != 0 )
          {
            if ( isInPreparation )
            {
              textOnMask = this->fields.textOnMask;
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
              v24 = &StringLiteral_12650/*"SHOP_NOT_RELEASE_SET_ITEM"*/;
LABEL_31:
              v27 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v24, 0);
              ShopBuyItemConfirmMenu__SetLabelText(v27, textOnMask, (System_String_o *)v27, v28);
              return;
            }
            goto LABEL_67;
          }
        }
LABEL_32:
        if ( !isInPreparation )
          goto LABEL_67;
        if ( (((isExistCondType || v12) | v14 | v20) & 1) == 0 )
          goto LABEL_67;
        IsSetItemEventShop = (System_String_o *)ShopReleaseMaster__CondClearCheck(v10, shopEntity->fields.id, 1, 0);
        if ( ((unsigned __int8)IsSetItemEventShop & 1) == 0 )
          goto LABEL_67;
LABEL_28:
        textOnMask = this->fields.textOnMask;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
        v24 = &StringLiteral_12556/*"SHOP_ALREADY_GET"*/;
        goto LABEL_31;
      }
      Master_object = (ShopReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_79;
      Master_object = (ShopReleaseMaster_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Master_object,
                                               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
      targetIds = shopEntity->fields.targetIds;
      if ( !targetIds )
        goto LABEL_79;
      if ( !LODWORD(targetIds->max_length) )
        sub_2213CE4(Master_object);
      if ( !Master_object )
        goto LABEL_79;
      IsSetItemEventShop = (System_String_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                &entity,
                                                targetIds->m_Items[0],
                                                (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)IsSetItemEventShop & 1) == 0 )
        goto LABEL_67;
      if ( isInPreparation )
      {
        Master_object = (ShopReleaseMaster_o *)entity;
        if ( entity )
        {
          IsSetItemEventShop = (System_String_o *)ServantEntity__get_IsServant((ServantEntity_o *)entity, 0);
          if ( ((unsigned __int8)IsSetItemEventShop & 1) != 0 && this->fields.shopKind != 6 )
          {
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30, v31);
            v34 = &StringLiteral_12612/*"SHOP_CANT_BUY"*/;
            goto LABEL_73;
          }
          if ( (((isExistCondType || v12 || v13 || v14) | v20) & 1) != 0 )
          {
            IsSetItemEventShop = (System_String_o *)ShopReleaseMaster__CondClearCheck(v10, shopEntity->fields.id, 40, 0);
            if ( ((unsigned __int8)IsSetItemEventShop & 1) == 0 )
            {
              v40 = (System_String_o *)StringLiteral_1/*""*/;
              goto LABEL_75;
            }
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32, v33);
            v34 = &StringLiteral_12556/*"SHOP_ALREADY_GET"*/;
LABEL_73:
            IsSetItemEventShop = LocalizationManager__Get((System_String_o *)*v34, 0);
            v40 = IsSetItemEventShop;
LABEL_75:
            v39 = this->fields.textOnMask;
            goto LABEL_68;
          }
LABEL_67:
          v39 = this->fields.textOnMask;
          v40 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_68;
        }
LABEL_79:
        sub_2213CDC(Master_object, v9);
      }
      shopType = shopEntity->fields.shopType;
      if ( shopType > 0x10 || ((1 << shopType) & 0x1000C) == 0 )
        goto LABEL_67;
      Master_object = (ShopReleaseMaster_o *)entity;
      if ( !entity )
        goto LABEL_79;
      IsSetItemEventShop = (System_String_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0);
      if ( ((unsigned __int8)IsSetItemEventShop & 1) == 0 )
        goto LABEL_67;
      IsSetItemEventShop = (System_String_o *)ShopBuyItemConfirmMenu__GetIsShowMask(
                                                (ShopBuyItemConfirmMenu_o *)IsSetItemEventShop,
                                                this->fields.shopEntity,
                                                0,
                                                v18);
      if ( ((unsigned __int8)IsSetItemEventShop & 1) == 0 )
        goto LABEL_67;
      IsSetItemEventShop = (System_String_o *)ShopEntity__IsAnotherItemBuyable(shopEntity, &v47, 0);
      if ( ((unsigned __int8)IsSetItemEventShop & 1) != 0 )
        goto LABEL_67;
      v37 = this->fields.textOnMask;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45, v46);
      v38 = &StringLiteral_12556/*"SHOP_ALREADY_GET"*/;
      goto LABEL_55;
    }
LABEL_27:
    if ( isInPreparation )
      goto LABEL_28;
    goto LABEL_67;
  }
  if ( purchaseType == 9 || purchaseType == 7 )
    goto LABEL_27;
  if ( purchaseType != 6 )
    goto LABEL_32;
  if ( isInPreparation )
  {
    IsSetItemEventShop = (System_String_o *)ShopEntity__isQuestNotClearItemClosed(shopEntity, 0, 0);
    if ( ((unsigned __int8)IsSetItemEventShop & 1) != 0 )
    {
      textOnMask = this->fields.textOnMask;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25, v26);
      v24 = &StringLiteral_12652/*"SHOP_QUEST_ALREADY_CLEARED"*/;
      goto LABEL_31;
    }
    goto LABEL_67;
  }
  if ( !ShopEntity__isQuestNotClear(shopEntity, &questId, 0, 0) )
  {
    IsSetItemEventShop = (System_String_o *)ShopEntity__isExpireItemClosed(shopEntity, 0);
    if ( ((unsigned __int8)IsSetItemEventShop & 1) == 0 )
      goto LABEL_67;
    v43 = this->fields.textOnMask;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41, v42);
    Master_object = (ShopReleaseMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12654/*"SHOP_QUEST_OPEN"*/, 0);
    if ( v43 )
    {
      UILabel__set_text(v43, (System_String_o *)Master_object, 0);
      return;
    }
    goto LABEL_79;
  }
  IsSetItemEventShop = (System_String_o *)ShopEntity__isQuestNotClearItemClosedSub(shopEntity, questId, 0, 0);
  if ( ((unsigned __int8)IsSetItemEventShop & 1) == 0 )
    goto LABEL_67;
  v37 = this->fields.textOnMask;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35, v36);
  v38 = &StringLiteral_12652/*"SHOP_QUEST_ALREADY_CLEARED"*/;
LABEL_55:
  IsSetItemEventShop = LocalizationManager__Get((System_String_o *)*v38, 0);
  v39 = v37;
  v40 = IsSetItemEventShop;
LABEL_68:
  ShopBuyItemConfirmMenu__SetLabelText((ShopBuyItemConfirmMenu_o *)IsSetItemEventShop, v39, v40, v18);
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemConfirmMenu__SetWarningLabel(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        bool isInPreparation,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  __int64 gameObject; // x0
  UILabel_o *warningLabel; // x23
  int v11; // w8
  ShopBuyItemConfirmMenu_o *v12; // x0
  const MethodInfo *v13; // x3
  ShopBuyItemConfirmMenu_o *v14; // x0
  const MethodInfo *v15; // x3
  ShopBuyItemConfirmMenu_o *v16; // x0
  const MethodInfo *v17; // x3
  __int64 v18; // x2
  int32_t purchaseType; // w8
  __int64 v20; // x1
  __int64 v21; // x2
  UILabel_o *v22; // x19
  ShopBuyItemConfirmMenu_o *v23; // x0
  const MethodInfo *v24; // x3
  UnityEngine_Object_o *resetWarningLabel; // x23
  _BOOL8 v26; // x0
  const MethodInfo *v27; // x3
  __int64 v28; // x1
  __int64 v29; // x2
  UILabel_o *v30; // x20
  __int64 v31; // x2
  UILabel_o *v32; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  struct UILabel_o *v35; // x19
  __int64 *v36; // x8
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  const MethodInfo *v41; // x1
  __int64 v42; // x2
  System_Int32_array *UserItemCounts; // x22
  const MethodInfo *v44; // x1
  System_Int64_array *UserItemCountsLong; // x0
  int32_t payType; // w8
  __int64 v47; // x2
  struct UILabel_o *v48; // x20
  __int64 *v49; // x8
  UnityEngine_Object_o *v50; // x21
  __int64 v51; // x2
  UnityEngine_Object_o *shopResetButton; // x21
  ItemEntity_o *EntityByType; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  Il2CppObject **p_name; // x8
  ShopBuyItemConfirmMenu_o *v57; // x0
  const MethodInfo *v58; // x3
  UILabel_o *v59; // x1
  __int64 v60; // x2
  BalanceConfig_c *v61; // x8
  int v62; // w22
  UILabel_o *v63; // x22
  struct CommonConsumeEntity_array *commonConsumeEntities; // x8
  __int64 max_length_low; // x9
  CommonConsumeEntity_o *v66; // x22
  int32_t num; // w23
  __int64 v68; // x1
  __int64 v69; // x2
  System_String_o *v70; // x20
  Il2CppObject *monitor; // x1
  __int64 v72; // x23
  __int64 v73; // x2
  __int64 v74; // x2
  UILabel_o *v75; // x22
  __int64 *v76; // x8
  __int64 v77; // x2
  int32_t ItemID; // w0
  __int64 v79; // x1
  __int64 v80; // x2
  ShopBuyItemConfirmMenu_o *v81; // x0
  const MethodInfo *v82; // x3
  System_Int64_array *v83; // x23
  __int64 v84; // x2
  System_String_o *v85; // x23
  Il2CppObject *v86; // x0
  __int64 v87; // x2
  System_String_o *v88; // x21
  ShopEntity_o *v89; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v90; // x19
  int32_t v91; // w20
  __int64 v92; // x1
  __int64 v93; // x2
  unsigned int v94; // w26
  System_String_o *v95; // x22
  unsigned int max_length; // w9
  Il2CppClass **v97; // x8
  CommonConsumeEntity_o *v98; // x23
  int v99; // w27
  Il2CppObject *Name; // x0
  System_String_o *v101; // x0
  Il2CppObject *v102; // x21
  int32_t v103; // w22
  __int64 v104; // x2
  int32_t resetLimitNum; // w26
  System_String_o *v106; // x23
  Il2CppObject *v107; // x24
  Il2CppObject *v108; // x0
  __int64 v109; // x1
  __int64 v110; // x2
  System_String_o *v111; // x23
  char v112; // w27
  System_String_o *v113; // x23
  Il2CppObject *v114; // x0
  __int64 v115; // x1
  __int64 v116; // x2
  Il2CppObject *Master_object; // x24
  long double v118; // q0
  __int64 v119; // x2
  __int64 v120; // x1
  __int64 v121; // x2
  Il2CppObject *v122; // x20
  long double v123; // q0
  __int64 v124; // x2
  const MethodInfo *v125; // x3
  System_String_o *v126; // x0
  System_String_o *v127; // x0
  __int64 v128; // x2
  UILabel_o *v129; // x20
  int stringLength; // w8
  __int64 v131; // x1
  __int64 v132; // x2
  System_String_o *v133; // x20
  __int64 v134; // x2
  int32_t v135; // w20
  BalanceConfig_c *v136; // x8
  int32_t v137; // w21
  int32_t PresentBoxMax; // w9
  UILabel_o *v139; // x19
  __int64 *v140; // x8
  __int64 v141; // x2
  Il2CppObject *MasterData_object; // x20
  int32_t Sum; // w0
  __int64 v144; // x1
  __int64 v145; // x2
  BalanceConfig_c *v146; // x8
  int32_t v147; // w20
  int32_t UserItemMax; // w9
  int32_t v149; // w21
  int32_t limitNum; // [xsp+8h] [xbp-98h] BYREF
  int32_t v151; // [xsp+Ch] [xbp-94h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-90h] BYREF
  int32_t recordNum; // [xsp+1Ch] [xbp-84h] BYREF
  int32_t buyQuestNum[2]; // [xsp+20h] [xbp-80h] BYREF
  int32_t buyServantEquipNum[2]; // [xsp+28h] [xbp-78h] BYREF
  ShopResetEntity_o *v156; // [xsp+30h] [xbp-70h] BYREF
  System_Int32_array *possessionAnotherItemId; // [xsp+38h] [xbp-68h] BYREF
  int32_t questId[2]; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_596C78F & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ShopResetMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserShopMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&EventRewardRootComponent_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ShopBuyItemConfirmMenu_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_12595/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/);
    sub_2213A60(&StringLiteral_12586/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/);
    sub_2213A60(&StringLiteral_12575/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_SHORTAGE"*/);
    sub_2213A60(&StringLiteral_12596/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/);
    sub_2213A60(&StringLiteral_12576/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12599/*"SHOP_BUY_RARE_PRI_CONFIRM_WARNING"*/);
    sub_2213A60(&StringLiteral_12592/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/);
    sub_2213A60(&StringLiteral_11287/*"QP_NAME"*/);
    sub_2213A60(&StringLiteral_12582/*"SHOP_BUY_CONFIRM_SOLD_OUT_WARNING"*/);
    sub_2213A60(&StringLiteral_12571/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/);
    sub_2213A60(&StringLiteral_12578/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/);
    sub_2213A60(&StringLiteral_12573/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/);
    sub_2213A60(&StringLiteral_12579/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/);
    sub_2213A60(&StringLiteral_12580/*"SHOP_BUY_CONFIRM_QUEST_CLAER"*/);
    sub_2213A60(&StringLiteral_26617/*"{0}、"*/);
    sub_2213A60(&StringLiteral_12585/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/);
    sub_2213A60(&StringLiteral_12606/*"SHOP_BUY_STONE_FRAGMENTS_CONFIRM_WARNING"*/);
    sub_2213A60(&StringLiteral_12588/*"SHOP_BUY_ITEM_FULL_WARNING"*/);
    sub_2213A60(&StringLiteral_12591/*"SHOP_BUY_ITEM_OVER_WARNING"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_10931/*"PURCHASE_CLASS_BOARD_RESET_WARNING_MSG"*/);
    sub_2213A60(&StringLiteral_12574/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_LIMIT"*/);
    sub_2213A60(&StringLiteral_12581/*"SHOP_BUY_CONFIRM_QUEST_HOLD"*/);
    sub_2213A60(&StringLiteral_12577/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_NO_LIMIT_MESSAGE"*/);
    byte_596C78F = 1;
  }
  gameObject = (__int64)BalanceConfig_TypeInfo;
  warningLabel = this->fields.warningLabel;
  *(_QWORD *)questId = 0;
  v156 = 0;
  possessionAnotherItemId = 0;
  v11 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1);
  *(_QWORD *)buyQuestNum = 0;
  *(_QWORD *)buyServantEquipNum = 0;
  recordNum = 0;
  entity = 0;
  if ( !v11 )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, shopEntity, isInPreparation);
  if ( !warningLabel )
    goto LABEL_257;
  UILabel__set_fontSize(warningLabel, BalanceConfig_TypeInfo->static_fields->DefaultFontSize, 0);
  ShopBuyItemConfirmMenu__SetLabelText(v12, this->fields.warningLabel, (System_String_o *)StringLiteral_1/*""*/, v13);
  ShopBuyItemConfirmMenu__SetLabelText(v14, this->fields.resetWarningLabel, (System_String_o *)StringLiteral_1/*""*/, v15);
  ShopBuyItemConfirmMenu__SetLabelActive(v16, this->fields.resetWarningLabel, 0, v17);
  if ( !shopEntity )
    goto LABEL_257;
  purchaseType = shopEntity->fields.purchaseType;
  if ( purchaseType == 23 )
  {
    resetWarningLabel = (UnityEngine_Object_o *)this->fields.resetWarningLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, shopEntity, v18);
    v26 = UnityEngine_Object__op_Inequality(resetWarningLabel, 0, 0);
    if ( v26 )
    {
      ShopBuyItemConfirmMenu__SetLabelActive((ShopBuyItemConfirmMenu_o *)v26, this->fields.resetWarningLabel, 1, v27);
      v30 = this->fields.resetWarningLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10931/*"PURCHASE_CLASS_BOARD_RESET_WARNING_MSG"*/, 0);
      if ( v30 )
      {
        UILabel__set_text(v30, (System_String_o *)gameObject, 0);
        v32 = this->fields.resetWarningLabel;
        gameObject = (__int64)ShopBuyItemConfirmMenu_TypeInfo;
        if ( !*(&ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo, shopEntity, v31);
        if ( v32 )
        {
          UILabel__set_fontSize(v32, ShopBuyItemConfirmMenu_TypeInfo->static_fields->ClassBoardResetWarningLabelSize, 0);
          ComponentHelper__SetLocalPositionY(
            (UnityEngine_Component_o *)this->fields.resetWarningLabel,
            ShopBuyItemConfirmMenu_TypeInfo->static_fields->ClassBoardResetWarningLabelPosY,
            0);
          return;
        }
      }
      goto LABEL_257;
    }
  }
  else if ( purchaseType == 6 && shopEntity->fields.shopType == 3 )
  {
    if ( isInPreparation )
    {
      if ( ShopEntity__isQuestNotClearItemClosed(shopEntity, 0, 0) )
      {
        v22 = this->fields.warningLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
        v23 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12580/*"SHOP_BUY_CONFIRM_QUEST_CLAER"*/, 0);
        ShopBuyItemConfirmMenu__SetLabelText(v23, v22, (System_String_o *)v23, v24);
        return;
      }
    }
    else
    {
      if ( ShopEntity__isQuestNotClear(shopEntity, &questId[1], 0, 0)
        && ShopEntity__isQuestNotClearItemClosedSub(shopEntity, questId[1], 0, 0) )
      {
        v35 = this->fields.warningLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33, v34);
        v36 = &StringLiteral_12580/*"SHOP_BUY_CONFIRM_QUEST_CLAER"*/;
        goto LABEL_73;
      }
      if ( ShopEntity__IsQuestHold(shopEntity, 0) )
      {
        v35 = this->fields.warningLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37, v38);
        v36 = &StringLiteral_12581/*"SHOP_BUY_CONFIRM_QUEST_HOLD"*/;
        goto LABEL_73;
      }
    }
  }
  if ( ShopEntity__IsSoldOut(shopEntity, 0)
    && !ShopEntity__GetIsNotHavingShopItemReceived(shopEntity, 0)
    && !ShopEntity__IsAnotherItemBuyable(shopEntity, &possessionAnotherItemId, 0) )
  {
    v50 = (UnityEngine_Object_o *)this->fields.resetWarningLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39, v40);
    if ( !UnityEngine_Object__op_Inequality(v50, 0, 0) )
      goto LABEL_70;
    shopResetButton = (UnityEngine_Object_o *)this->fields.shopResetButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, shopEntity, v51);
    if ( !UnityEngine_Object__op_Inequality(shopResetButton, 0, 0) )
      goto LABEL_70;
    gameObject = (__int64)this->fields.shopResetButton;
    if ( !gameObject )
      goto LABEL_257;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_257;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0) )
    {
LABEL_70:
      v35 = this->fields.warningLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity, v51);
      v36 = &StringLiteral_12582/*"SHOP_BUY_CONFIRM_SOLD_OUT_WARNING"*/;
      goto LABEL_73;
    }
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, shopEntity, v51);
    gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !gameObject )
      goto LABEL_257;
    EntityByType = ItemMaster__GetEntityByType((ItemMaster_o *)gameObject, 37, 0);
    if ( EntityByType )
      p_name = (Il2CppObject **)&EntityByType->fields.name;
    else
      p_name = *(Il2CppObject ***)(qword_5984390 + 184);
    v102 = *p_name;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v54, v55);
    gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !gameObject )
      goto LABEL_257;
    v103 = *(_DWORD *)(gameObject + 100);
    gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopResetMaster___);
    if ( !gameObject )
      goto LABEL_257;
    gameObject = ShopResetMaster__TryGetEntity(
                   (ShopResetMaster_o *)gameObject,
                   &v156,
                   shopEntity->fields.baseShopId,
                   v103,
                   0);
    if ( (gameObject & 1) != 0 )
    {
      if ( !v156 )
        goto LABEL_257;
      resetLimitNum = v156->fields.resetLimitNum;
      if ( resetLimitNum >= 1 )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity, v104);
        v106 = LocalizationManager__Get((System_String_o *)StringLiteral_12576/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_MESSAGE"*/, 0);
        v151 = resetLimitNum;
        v107 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v151);
        limitNum = shopEntity->fields.limitNum;
        v108 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &limitNum);
        v111 = System_String__Format_75697948(v106, v102, v107, v108, 0);
        v112 = 0;
        goto LABEL_181;
      }
    }
    else
    {
      resetLimitNum = 0;
    }
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity, v104);
    v113 = LocalizationManager__Get((System_String_o *)StringLiteral_12577/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_NO_LIMIT_MESSAGE"*/, 0);
    v151 = shopEntity->fields.limitNum;
    v114 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v151);
    v111 = System_String__Format_75697880(v113, v102, v114, 0);
    v112 = 1;
LABEL_181:
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v109, v110);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserShopMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      *(__n128 *)&v118 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v115, v116);
    gameObject = sub_2417958(0, v118);
    if ( !Master_object )
      goto LABEL_257;
    gameObject = (__int64)UserShopMaster__GetEntityDefinitely(
                            (UserShopMaster_o *)Master_object,
                            gameObject,
                            shopEntity->fields.baseShopId,
                            0);
    if ( (v112 & 1) != 0 )
      goto LABEL_261;
    if ( !gameObject )
      goto LABEL_257;
    if ( resetLimitNum > *(_DWORD *)(gameObject + 40) )
    {
LABEL_261:
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, shopEntity, v119);
      v122 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v123 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v120, v121);
      gameObject = sub_2417958(0, v123);
      if ( !v122 )
        goto LABEL_257;
      gameObject = (__int64)UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)v122, gameObject, v103, 0);
      if ( !gameObject )
        goto LABEL_257;
      if ( *(int *)(gameObject + 28) > 0 )
        goto LABEL_203;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity, v124);
      v126 = LocalizationManager__Get((System_String_o *)StringLiteral_12575/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_SHORTAGE"*/, 0);
      v127 = System_String__Format(v126, v102, 0);
    }
    else
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity, v119);
      v127 = LocalizationManager__Get((System_String_o *)StringLiteral_12574/*"SHOP_BUY_CONFIRM_CAN_NOT_SHOP_RESET_LIMIT"*/, 0);
    }
    gameObject = (__int64)System_String__Concat_75651716(v111, v127, 0);
    v111 = (System_String_o *)gameObject;
LABEL_203:
    ShopBuyItemConfirmMenu__SetLabelActive(
      (ShopBuyItemConfirmMenu_o *)gameObject,
      this->fields.resetWarningLabel,
      1,
      v125);
    gameObject = (__int64)this->fields.resetWarningLabel;
    if ( gameObject )
    {
      UILabel__set_text((UILabel_o *)gameObject, v111, 0);
      v129 = this->fields.resetWarningLabel;
      gameObject = (__int64)ShopBuyItemConfirmMenu_TypeInfo;
      if ( !*(&ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo, shopEntity, v128);
      if ( v129 )
      {
        UILabel__set_fontSize(v129, ShopBuyItemConfirmMenu_TypeInfo->static_fields->PurePriWarningLabelSize, 0);
        ComponentHelper__SetLocalPositionY(
          (UnityEngine_Component_o *)this->fields.resetWarningLabel,
          ShopBuyItemConfirmMenu_TypeInfo->static_fields->PurePriWarningLabelPosY,
          0);
        return;
      }
    }
    goto LABEL_257;
  }
  if ( isInPreparation )
  {
    v35 = this->fields.warningLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39, v40);
    v36 = &StringLiteral_12578/*"SHOP_BUY_CONFIRM_NOT_PREPARATION_WARNING"*/;
LABEL_73:
    v57 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v36, 0);
LABEL_74:
    v59 = v35;
LABEL_75:
    ShopBuyItemConfirmMenu__SetLabelText(v57, v59, (System_String_o *)v57, v58);
    return;
  }
  if ( !ShopEntity__IsEnable(shopEntity, 0, 0) )
  {
    v35 = this->fields.warningLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41, v42);
    v36 = &StringLiteral_12579/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/;
    goto LABEL_73;
  }
  UserItemCounts = ShopBuyItemConfirmMenu__GetUserItemCounts(this, v41);
  UserItemCountsLong = ShopBuyItemConfirmMenu__GetUserItemCountsLong((ShopBuyItemConfirmMenu_o *)UserItemCounts, v44);
  payType = shopEntity->fields.payType;
  if ( payType > 9 )
  {
    if ( (unsigned int)(payType - 11) < 2 )
    {
LABEL_95:
      if ( ShopEntity__GetItemCount(shopEntity, 0) >= 2 )
      {
        if ( ShopEntity__GetItemCount(shopEntity, 0) >= 1 )
        {
          v72 = 0;
          while ( 1 )
          {
            gameObject = ShopEntity__GetPrices(shopEntity, v72, 0);
            if ( !UserItemCounts )
              goto LABEL_257;
            if ( (unsigned int)v72 >= LODWORD(UserItemCounts->max_length) )
              goto LABEL_258;
            if ( (int)gameObject > UserItemCounts->m_Items[v72] )
              break;
            if ( (int)++v72 >= ShopEntity__GetItemCount(shopEntity, 0) )
              goto LABEL_214;
          }
          v35 = this->fields.warningLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity, v73);
          v36 = &StringLiteral_12586/*"SHOP_BUY_EVENT_ITEM_NOT_ENOUGH_WARNING"*/;
          goto LABEL_73;
        }
        goto LABEL_214;
      }
      gameObject = ShopEntity__GetPrice(shopEntity, 0);
      if ( !UserItemCounts )
        goto LABEL_257;
      if ( !LODWORD(UserItemCounts->max_length) )
        goto LABEL_258;
      if ( (int)gameObject <= UserItemCounts->m_Items[0] )
        goto LABEL_214;
      if ( ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(this, (const MethodInfo *)shopEntity) )
      {
        if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, shopEntity, v77);
        ItemID = sub_250B6F0(0);
      }
      else
      {
        gameObject = (__int64)this->fields.shopEntity;
        if ( !gameObject )
          goto LABEL_257;
        ItemID = ShopEntity__GetItemID((ShopEntity_o *)gameObject, 0);
      }
      v91 = ItemID;
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( gameObject )
      {
        gameObject = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( gameObject )
        {
          if ( !DataMasterBase_object__object__int___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                  &entity,
                  v91,
                  (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
            return;
          v35 = this->fields.warningLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v92, v93);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12585/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, 0);
          if ( entity )
          {
            monitor = (Il2CppObject *)entity[1].monitor;
            goto LABEL_213;
          }
        }
      }
LABEL_257:
      sub_2213CDC(gameObject, shopEntity);
    }
    if ( payType != 10 )
    {
      if ( payType != 14 || !this->fields.commonConsumeEntities )
        goto LABEL_214;
      gameObject = ShopEntity__get_TargetId(shopEntity, 0);
      v61 = BalanceConfig_TypeInfo;
      v62 = gameObject;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, shopEntity, v60);
        v61 = BalanceConfig_TypeInfo;
      }
      if ( v62 == v61->static_fields->ApSeedExchangeTargetItemId )
      {
        v63 = this->fields.warningLabel;
        if ( !*(&v61->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v61, shopEntity, v60);
        if ( !v63 )
          goto LABEL_257;
        UILabel__set_fontSize(v63, BalanceConfig_TypeInfo->static_fields->TradeApDialogWarningLabelFontSize, 0);
      }
      commonConsumeEntities = this->fields.commonConsumeEntities;
      if ( !commonConsumeEntities )
        goto LABEL_257;
      max_length_low = LODWORD(commonConsumeEntities->max_length);
      if ( max_length_low == 1 )
      {
        v66 = commonConsumeEntities->m_Items[0];
        if ( !v66 )
          goto LABEL_257;
        num = v66->fields.num;
        if ( num <= CommonConsumeEntity__GetUserHasNum(commonConsumeEntities->m_Items[0], 0) )
          goto LABEL_214;
        v35 = this->fields.warningLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v68, v69);
        v70 = LocalizationManager__Get((System_String_o *)StringLiteral_12573/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, 0);
        monitor = (Il2CppObject *)CommonConsumeEntity__GetName(v66, 0);
        gameObject = (__int64)v70;
      }
      else
      {
        if ( (int)max_length_low <= 1 )
          goto LABEL_214;
        v94 = 0;
        v95 = **(System_String_o ***)(qword_5984390 + 184);
        while ( 1 )
        {
          max_length = commonConsumeEntities->max_length;
          if ( (int)v94 >= (int)max_length )
            break;
          if ( v94 >= max_length )
            goto LABEL_258;
          v97 = &commonConsumeEntities->obj.klass + (int)v94;
          v98 = (CommonConsumeEntity_o *)v97[4];
          if ( v98 )
          {
            v99 = v98->fields.num;
            gameObject = CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)v97[4], 0);
            if ( v99 > (int)gameObject )
            {
              Name = (Il2CppObject *)CommonConsumeEntity__GetName(v98, 0);
              v101 = System_String__Format((System_String_o *)StringLiteral_26617/*"{0}、"*/, Name, 0);
              gameObject = (__int64)System_String__Concat_75651716(v95, v101, 0);
              v95 = (System_String_o *)gameObject;
            }
            commonConsumeEntities = this->fields.commonConsumeEntities;
            ++v94;
            if ( commonConsumeEntities )
              continue;
          }
          goto LABEL_257;
        }
        if ( !v95 )
          goto LABEL_257;
        stringLength = v95->fields._stringLength;
        if ( stringLength < 1 )
          goto LABEL_214;
        v133 = System_String__Remove_75702664(v95, stringLength - 1, 0);
        v35 = this->fields.warningLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v131, v132);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12573/*"SHOP_BUY_COMMON_CONSUME_CONFIRM_WARNING"*/, 0);
        monitor = (Il2CppObject *)v133;
      }
LABEL_213:
      v57 = (ShopBuyItemConfirmMenu_o *)System_String__Format((System_String_o *)gameObject, monitor, 0);
      goto LABEL_74;
    }
    gameObject = ShopEntity__GetPrice(shopEntity, 0);
    if ( !UserItemCounts )
      goto LABEL_257;
    if ( !LODWORD(UserItemCounts->max_length) )
      goto LABEL_258;
    if ( (int)gameObject <= UserItemCounts->m_Items[0]
      || ShopEntity__IsAfterTheFreeShopReleaseDate(shopEntity, 0)
      && ShopEntity__IsFulFilledFreeExchangeCondition(shopEntity, 0) )
    {
      goto LABEL_214;
    }
    v75 = this->fields.warningLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v79, v80);
    v76 = &StringLiteral_12599/*"SHOP_BUY_RARE_PRI_CONFIRM_WARNING"*/;
    goto LABEL_126;
  }
  if ( payType <= 5 )
  {
    if ( payType == 2 )
    {
      v83 = UserItemCountsLong;
      gameObject = ShopEntity__GetPrice(shopEntity, 0);
      if ( !v83 )
        goto LABEL_257;
      if ( !LODWORD(v83->max_length) )
        goto LABEL_258;
      if ( v83->m_Items[0] >= (int)gameObject )
        goto LABEL_214;
      v75 = this->fields.warningLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity, v84);
      v85 = LocalizationManager__Get((System_String_o *)StringLiteral_12585/*"SHOP_BUY_EVENT_ITEM_CONFIRM_WARNING"*/, 0);
      v86 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_11287/*"QP_NAME"*/, 0);
      v81 = (ShopBuyItemConfirmMenu_o *)System_String__Format(v85, v86, 0);
LABEL_133:
      ShopBuyItemConfirmMenu__SetLabelText(v81, v75, (System_String_o *)v81, v82);
      goto LABEL_214;
    }
    if ( payType != 4 )
      goto LABEL_214;
    gameObject = ShopEntity__GetPrice(shopEntity, 0);
    if ( !UserItemCounts )
      goto LABEL_257;
    if ( !LODWORD(UserItemCounts->max_length) )
      goto LABEL_258;
    if ( (int)gameObject <= UserItemCounts->m_Items[0] )
      goto LABEL_214;
    v75 = this->fields.warningLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity, v74);
    v76 = &StringLiteral_12592/*"SHOP_BUY_MANA_CONFIRM_WARNING"*/;
LABEL_126:
    v81 = (ShopBuyItemConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v76, 0);
    goto LABEL_133;
  }
  if ( payType == 6 )
    goto LABEL_95;
  if ( payType != 8 )
  {
    if ( payType != 9 )
      goto LABEL_214;
    gameObject = ShopEntity__GetPrice(shopEntity, 0);
    if ( !UserItemCounts )
      goto LABEL_257;
    if ( LODWORD(UserItemCounts->max_length) )
    {
      if ( (int)gameObject > UserItemCounts->m_Items[0] )
      {
        v48 = this->fields.warningLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity, v47);
        v49 = &StringLiteral_12571/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/;
        goto LABEL_140;
      }
      goto LABEL_214;
    }
LABEL_258:
    sub_2213CE4(gameObject);
  }
  gameObject = ShopEntity__GetPrice(shopEntity, 0);
  if ( !UserItemCounts )
    goto LABEL_257;
  if ( !LODWORD(UserItemCounts->max_length) )
    goto LABEL_258;
  if ( (int)gameObject > UserItemCounts->m_Items[0] )
  {
    v48 = this->fields.warningLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity, v87);
    v49 = &StringLiteral_12606/*"SHOP_BUY_STONE_FRAGMENTS_CONFIRM_WARNING"*/;
LABEL_140:
    v88 = LocalizationManager__Get((System_String_o *)*v49, 0);
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( gameObject )
    {
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
      v89 = this->fields.shopEntity;
      if ( v89 )
      {
        v90 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
        gameObject = ShopEntity__GetItemID(v89, 0);
        if ( v90 )
        {
          gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  v90,
                                  gameObject,
                                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( gameObject )
          {
            v57 = (ShopBuyItemConfirmMenu_o *)System_String__Format(v88, *(Il2CppObject **)(gameObject + 24), 0);
            v59 = v48;
            goto LABEL_75;
          }
        }
      }
    }
    goto LABEL_257;
  }
LABEL_214:
  questId[0] = 0;
  *(_QWORD *)buyQuestNum = 0;
  *(_QWORD *)buyServantEquipNum = 0;
  recordNum = 0;
  ShopEntity__GetSum(
    shopEntity,
    questId,
    &buyServantEquipNum[1],
    buyServantEquipNum,
    &buyQuestNum[1],
    buyQuestNum,
    &recordNum,
    0);
  if ( buyServantEquipNum[0] + buyServantEquipNum[1] + buyQuestNum[1] >= 1 )
  {
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_257;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    if ( !userGameEntity )
      goto LABEL_257;
    if ( !gameObject )
      goto LABEL_257;
    gameObject = (__int64)UserPresentBoxMaster__getVaildList(
                            (UserPresentBoxMaster_o *)gameObject,
                            userGameEntity->fields.userId,
                            0);
    if ( !gameObject )
      goto LABEL_257;
    if ( shopEntity->fields.purchaseType == 5 )
      v135 = recordNum;
    else
      v135 = buyServantEquipNum[0] + buyServantEquipNum[1] + buyQuestNum[1];
    v136 = BalanceConfig_TypeInfo;
    v137 = *(_DWORD *)(gameObject + 24);
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, shopEntity, v134);
      v136 = BalanceConfig_TypeInfo;
    }
    PresentBoxMax = v136->static_fields->PresentBoxMax;
    if ( PresentBoxMax <= v137 )
    {
      v139 = this->fields.warningLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity, v134);
      v140 = &StringLiteral_12595/*"SHOP_BUY_PRESENT_BOX_FULL_WARNING"*/;
LABEL_255:
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v140, 0);
      if ( v139 )
      {
        UILabel__set_text(v139, (System_String_o *)gameObject, 0);
        return;
      }
      goto LABEL_257;
    }
    if ( !*(&v136->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v136, shopEntity, v134);
      PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
    }
    if ( v135 + v137 > PresentBoxMax )
    {
      v139 = this->fields.warningLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity, v134);
      v140 = &StringLiteral_12596/*"SHOP_BUY_PRESENT_BOX_OVER_WARNING"*/;
      goto LABEL_255;
    }
  }
  if ( questId[0] < 1 )
    return;
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_257;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)gameObject,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, shopEntity, v141);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  gameObject = (__int64)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, shopEntity, v141);
    gameObject = (__int64)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_257;
  Sum = UserItemMaster__getSum(
          (UserItemMaster_o *)MasterData_object,
          *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 64LL),
          0);
  v146 = BalanceConfig_TypeInfo;
  v147 = Sum;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v144, v145);
    v146 = BalanceConfig_TypeInfo;
  }
  UserItemMax = v146->static_fields->UserItemMax;
  if ( v147 >= UserItemMax )
  {
    v139 = this->fields.warningLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v144, v145);
    v140 = &StringLiteral_12588/*"SHOP_BUY_ITEM_FULL_WARNING"*/;
    goto LABEL_255;
  }
  v149 = questId[0];
  if ( !*(&v146->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v146, v144, v145);
    UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
  }
  if ( v149 + v147 > UserItemMax )
  {
    v139 = this->fields.warningLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v144, v145);
    v140 = &StringLiteral_12591/*"SHOP_BUY_ITEM_OVER_WARNING"*/;
    goto LABEL_255;
  }
}


void ShopBuyItemConfirmMenu__SetWindowSize(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *windowSprite; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemInfoBase; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *priceInfoBase; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *shopResetButton; // x20
  __int64 v14; // x1
  UnityEngine_Component_o *gameObject; // x0
  __int64 v16; // x2
  bool activeSelf; // w8
  UIWidget_o *v18; // x20
  int v19; // w9
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  int32_t DEFAULT_BUTTON_POS_Y; // w8
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0

  if ( (byte_596C7A9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ShopBuyItemConfirmMenu_TypeInfo);
    byte_596C7A9 = 1;
  }
  windowSprite = (UnityEngine_Object_o *)this->fields.windowSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(windowSprite, 0, 0) )
  {
    itemInfoBase = (UnityEngine_Object_o *)this->fields.itemInfoBase;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( !UnityEngine_Object__op_Equality(itemInfoBase, 0, 0) )
    {
      priceInfoBase = (UnityEngine_Object_o *)this->fields.priceInfoBase;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      if ( !UnityEngine_Object__op_Equality(priceInfoBase, 0, 0) )
      {
        shopResetButton = (UnityEngine_Object_o *)this->fields.shopResetButton;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
        if ( !UnityEngine_Object__op_Equality(shopResetButton, 0, 0) )
        {
          gameObject = (UnityEngine_Component_o *)this->fields.shopResetButton;
          if ( gameObject )
          {
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
            if ( gameObject )
            {
              activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0);
              v18 = (UIWidget_o *)this->fields.windowSprite;
              gameObject = (UnityEngine_Component_o *)ShopBuyItemConfirmMenu_TypeInfo;
              v19 = *(&ShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished + 1);
              if ( activeSelf )
              {
                if ( !v19 )
                  j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo, v14, v16);
                if ( v18 )
                {
                  UIWidget__set_height(
                    v18,
                    ShopBuyItemConfirmMenu_TypeInfo->static_fields->RESET_LAYOUT_WINDOW_SIZE_Y,
                    0);
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
                    v20 = UnityEngine_Component__get_gameObject(gameObject, 0);
                    GameObjectExtensions__SetLocalPositionY(
                      v20,
                      (float)(ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y
                            - ShopBuyItemConfirmMenu_TypeInfo->static_fields->RESET_LAYOUT_OFFSET_Y),
                      0);
                    gameObject = (UnityEngine_Component_o *)this->fields.cancelButton;
                    if ( gameObject )
                    {
                      v21 = UnityEngine_Component__get_gameObject(gameObject, 0);
                      GameObjectExtensions__SetLocalPositionY(
                        v21,
                        (float)(ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y
                              - ShopBuyItemConfirmMenu_TypeInfo->static_fields->RESET_LAYOUT_OFFSET_Y),
                        0);
                      gameObject = (UnityEngine_Component_o *)this->fields.shopResetButton;
                      if ( gameObject )
                      {
                        v22 = UnityEngine_Component__get_gameObject(gameObject, 0);
                        DEFAULT_BUTTON_POS_Y = ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y
                                             - ShopBuyItemConfirmMenu_TypeInfo->static_fields->RESET_LAYOUT_OFFSET_Y;
LABEL_33:
                        GameObjectExtensions__SetLocalPositionY(v22, (float)DEFAULT_BUTTON_POS_Y, 0);
                        return;
                      }
                    }
                  }
                }
              }
              else
              {
                if ( !v19 )
                  j_il2cpp_runtime_class_init_0(ShopBuyItemConfirmMenu_TypeInfo, v14, v16);
                if ( v18 )
                {
                  UIWidget__set_height(v18, ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_WINDOW_SIZE_Y, 0);
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
                    v24 = UnityEngine_Component__get_gameObject(gameObject, 0);
                    GameObjectExtensions__SetLocalPositionY(
                      v24,
                      (float)ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y,
                      0);
                    gameObject = (UnityEngine_Component_o *)this->fields.cancelButton;
                    if ( gameObject )
                    {
                      v25 = UnityEngine_Component__get_gameObject(gameObject, 0);
                      GameObjectExtensions__SetLocalPositionY(
                        v25,
                        (float)ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y,
                        0);
                      gameObject = (UnityEngine_Component_o *)this->fields.shopResetButton;
                      if ( gameObject )
                      {
                        v22 = UnityEngine_Component__get_gameObject(gameObject, 0);
                        DEFAULT_BUTTON_POS_Y = ShopBuyItemConfirmMenu_TypeInfo->static_fields->DEFAULT_BUTTON_POS_Y;
                        goto LABEL_33;
                      }
                    }
                  }
                }
              }
            }
          }
          sub_2213CDC(gameObject, v14);
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
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x20
  ServantStatusDialog_EndDelegate_o *v9; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596C7A1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C7A1 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_9;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         commandCodeId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
  {
    v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = entity;
    v9 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0);
    if ( v7 )
    {
      CommonUI__OpenServantEquipStatusDialog_37389176((CommonUI_o *)v7, 25, (CommandCodeEntity_o *)v8, 0, v9, 0, 0);
      return 0;
    }
LABEL_9:
    sub_2213CDC(Instance, v6);
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
  Il2CppObject *v8; // x21
  Il2CppObject *v9; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v10; // x22
  int32_t v11; // w3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596C7A0 & 1) == 0 )
  {
    sub_2213A60(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C7A0 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_13;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         itemId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    itemDetailDialogOverwriteDepth = this->fields.itemDetailDialogOverwriteDepth;
    v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = entity;
    v10 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      (intptr_t)Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__,
      0);
    if ( itemDetailDialogOverwriteDepth == 0x80000000 )
    {
      if ( v8 )
      {
        v11 = 50;
LABEL_11:
        CommonUI__OpenItemDetailDialog((CommonUI_o *)v8, (ItemEntity_o *)v9, v10, v11, 0);
        return 0;
      }
    }
    else if ( v8 )
    {
      v11 = this->fields.itemDetailDialogOverwriteDepth;
      goto LABEL_11;
    }
LABEL_13:
    sub_2213CDC(Instance, v6);
  }
  return 0;
}


int32_t ShopBuyItemConfirmMenu__ShowOtherInfomation(
        ShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  Il2CppObject *Instance; // x22
  System_String_o *name; // x21
  System_String_o *infoMessage; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v8; // x23

  v4 = (Il2CppObject *)this;
  if ( (byte_596C7A2 & 1) == 0 )
  {
    sub_2213A60(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ShopBuyItemConfirmMenu_o *)sub_2213A60(&StringLiteral_9661/*"NONE"*/);
    byte_596C7A2 = 1;
  }
  if ( !shopEntity )
    goto LABEL_9;
  if ( !System_String__IsNullOrEmpty(shopEntity->fields.infoMessage, 0)
    && System_String__op_Inequality(shopEntity->fields.infoMessage, (System_String_o *)StringLiteral_9661/*"NONE"*/, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    name = shopEntity->fields.name;
    infoMessage = shopEntity->fields.infoMessage;
    v8 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v8,
      v4,
      (intptr_t)Method_ShopBuyItemConfirmMenu_EndShowItemDetailDialog__,
      0);
    if ( Instance )
    {
      CommonUI__OpenItemDetailDialog_37450192((CommonUI_o *)Instance, name, infoMessage, v8, 0);
      return 0;
    }
LABEL_9:
    sub_2213CDC(this, shopEntity);
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

  if ( (byte_596C79F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&EquipTargetInfo_TypeInfo);
    sub_2213A60(&ServantLeaderInfo_TypeInfo);
    sub_2213A60(&Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__);
    sub_2213A60(&Method_ShopBuyItemConfirmMenu_EndShowServantStatusDialog__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C79F = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_23;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          servantId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (ServantLeaderInfo_o *)sub_2213CCC(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_50583572(v12, servantId, 0, 1, 0);
    v13 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v13,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantStatusDialog__,
      0);
    if ( v11 )
    {
      CommonUI__OpenServantStatusDialog_37385604((CommonUI_o *)v11, 7, v12, v13, 0);
      return 0;
    }
    goto LABEL_23;
  }
  Instance = entity;
  if ( !entity )
    goto LABEL_23;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0) )
  {
    v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = (EquipTargetInfo_o *)sub_2213CCC(EquipTargetInfo_TypeInfo);
    EquipTargetInfo___ctor_48715996(v16, servantId, limitCount, level, 0, 0);
    v17 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v17,
      (Il2CppObject *)this,
      Method_ShopBuyItemConfirmMenu_EndShowServantEquipStatusDialog__,
      0);
    if ( v15 )
    {
      CommonUI__OpenServantEquipStatusDialog_37388712((CommonUI_o *)v15, 7, v16, v17, 0, 0);
      return 0;
    }
LABEL_23:
    sub_2213CDC(Instance, v10);
  }
  return 2;
}


System_String_o *ShopBuyItemConfirmMenu__get_closeBtnPath(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_596C7AD & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16259/*"Window/CancelButton"*/);
    byte_596C7AD = 1;
  }
  return (System_String_o *)StringLiteral_16259/*"Window/CancelButton"*/;
}


bool ShopBuyItemConfirmMenu__get_isAnotehrPayDisp(ShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventRewardRootComponent_c *v4; // x0
  ShopEntity_o *shopEntity; // x0
  System_Int32_array *possessionAnotherItemId; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596C781 & 1) == 0 )
  {
    sub_2213A60(&EventRewardRootComponent_TypeInfo);
    byte_596C781 = 1;
  }
  possessionAnotherItemId = 0;
  if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, method, v2);
  if ( !byte_596ABDA )
  {
    sub_2213A60(&EventRewardRootComponent_TypeInfo);
    byte_596ABDA = 1;
  }
  v4 = EventRewardRootComponent_TypeInfo;
  if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, method, v2);
    v4 = EventRewardRootComponent_TypeInfo;
  }
  if ( v4->static_fields->_IsAnotherPayFlag_k__BackingField )
  {
    shopEntity = this->fields.shopEntity;
    if ( !shopEntity )
      sub_2213CDC(0, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ShopBuyItemConfirmMenu___c__DisplayClass121_0_o *v8; // x19
  struct ShopBuyItemConfirmMenu_o *_4__this; // x8
  System_Action_o *onChecked; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct ShopBuyItemConfirmMenu_o *v17; // x8
  System_Action_T__o *onCloseReturnWarning; // x21

  v8 = this;
  if ( (byte_596C7B0 & 1) == 0 )
  {
    this = (ShopBuyItemConfirmMenu___c__DisplayClass121_0_o *)sub_2213A60(&Method_ActionExtensions_Call_int___);
    byte_596C7B0 = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this
    || (onChecked = _4__this->fields.onChecked,
        _4__this->fields.onChecked = 0,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.onChecked, 0, v2, v3, v4, v5, v6, v7),
        (v17 = v8->fields.__4__this) == 0) )
  {
    sub_2213CDC(this, method);
  }
  onCloseReturnWarning = (System_Action_T__o *)v17->fields.onCloseReturnWarning;
  v17->fields.onCloseReturnWarning = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->fields.onCloseReturnWarning, 0, v11, v12, v13, v14, v15, v16);
  if ( v8->fields.isDecide )
    ActionExtensions__Call(onChecked, 0);
  else
    ActionExtensions__Call_int_(
      onCloseReturnWarning,
      0,
      (const MethodInfo_36FFDDC *)Method_ActionExtensions_Call_int___);
}