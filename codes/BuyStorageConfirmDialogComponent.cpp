void __fastcall BuyStorageConfirmDialogComponent___ctor(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB50E & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FB50E = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall BuyStorageConfirmDialogComponent__CallOnClose(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_onClose; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *onClose; // t1

  onClose = this->fields.onClose;
  p_onClose = (BattleServantConfConponent_o *)&this->fields.onClose;
  v9 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0LL;
    sub_B16F98(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BuyStorageConfirmDialogComponent__CallOnMenuSelect(
        BuyStorageConfirmDialogComponent_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_onMenuSelect; // x20
  System_Action_int__o *v11; // x21
  struct System_Action_int__o *onMenuSelect; // t1

  if ( (byte_40FB50C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int__Invoke__, *(_QWORD *)&buyCount);
    byte_40FB50C = 1;
  }
  onMenuSelect = this->fields.onMenuSelect;
  p_onMenuSelect = (BattleServantConfConponent_o *)&this->fields.onMenuSelect;
  v11 = onMenuSelect;
  if ( onMenuSelect )
  {
    p_onMenuSelect->klass = 0LL;
    sub_B16F98(p_onMenuSelect, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    System_Action_int___Invoke(v11, buyCount, (const MethodInfo_24B5D94 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall BuyStorageConfirmDialogComponent__Close(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BuyStorageConfirmDialogComponent__Close_27621832(this, 0LL, v2);
}


void __fastcall BuyStorageConfirmDialogComponent__Close_27621832(
        BuyStorageConfirmDialogComponent_o *this,
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
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FB508 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_BuyStorageConfirmDialogComponent_EndClose__, v10);
    byte_40FB508 = 1;
  }
  this->fields.onClose = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_BuyStorageConfirmDialogComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall BuyStorageConfirmDialogComponent__EndClose(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  BuyStorageConfirmDialogComponent__Init(this, method);
  BuyStorageConfirmDialogComponent__CallOnClose(this, v3);
}


void __fastcall BuyStorageConfirmDialogComponent__EndOpen(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


int32_t __fastcall BuyStorageConfirmDialogComponent__GetCurrencyImageId(
        BuyStorageConfirmDialogComponent_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t result; // w0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Int32_array *itemIds; // x8
  WarEntity_o *Entity; // x0

  if ( (byte_40FB504 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FB504 = 1;
  }
  if ( !shopEntity )
LABEL_16:
    sub_B170D4();
  result = 18;
  switch ( shopEntity->fields.payType )
  {
    case 4:
      return 7;
    case 6:
    case 0xB:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_16;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      itemIds = shopEntity->fields.itemIds;
      if ( !itemIds )
        goto LABEL_16;
      if ( !itemIds->max_length )
      {
        sub_B17100(MasterData_WarQuestSelectionMaster, v9, v10);
        sub_B170A0();
      }
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_16;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 itemIds->m_Items[1],
                 (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_16;
      return (int32_t)Entity->fields.longName;
    case 8:
      return 16;
    case 9:
      return 17;
    case 0xA:
      return result;
    default:
      return 0;
  }
}


System_String_o *__fastcall BuyStorageConfirmDialogComponent__GetCurrencyItemName(
        BuyStorageConfirmDialogComponent_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Int32_array *itemIds; // x8
  WarEntity_o *Entity; // x0
  System_String_o *result; // x0
  __int64 *v19; // x8

  if ( (byte_40FB503 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_12322, v7);
    sub_B16FFC(&StringLiteral_1681, v8);
    sub_B16FFC(&StringLiteral_10976, v9);
    sub_B16FFC(&StringLiteral_8591, v10);
    sub_B16FFC(&StringLiteral_1, v11);
    byte_40FB503 = 1;
  }
  if ( !shopEntity )
LABEL_29:
    sub_B170D4();
  switch ( shopEntity->fields.payType )
  {
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_8591;
      goto LABEL_28;
    case 6:
    case 0xB:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_29;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      itemIds = shopEntity->fields.itemIds;
      if ( !itemIds )
        goto LABEL_29;
      if ( !itemIds->max_length )
      {
        sub_B17100(MasterData_WarQuestSelectionMaster, v14, v15);
        sub_B170A0();
      }
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_29;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 itemIds->m_Items[1],
                 (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_29;
      result = Entity->fields.age;
      break;
    case 8:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_12322;
      goto LABEL_28;
    case 9:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_1681;
      goto LABEL_28;
    case 0xA:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_10976;
LABEL_28:
      result = LocalizationManager__Get((System_String_o *)*v19, 0LL);
      break;
    default:
      result = (System_String_o *)StringLiteral_1;
      break;
  }
  return result;
}


System_String_o *__fastcall BuyStorageConfirmDialogComponent__GetItemNumText(
        BuyStorageConfirmDialogComponent_o *this,
        ShopEntity_o *shopEntity,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  unsigned int payType; // w8
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Int32_array *itemIds; // x8
  UserItemEntity_o *EntityDefinitely; // x0
  int32_t num; // w19
  LocalizationManager_c *v19; // x0

  if ( (byte_40FB505 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, shopEntity);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&StringLiteral_1, v9);
    byte_40FB505 = 1;
  }
  if ( !shopEntity )
    goto LABEL_27;
  payType = shopEntity->fields.payType;
  if ( payType <= 0xB )
  {
    if ( ((1 << payType) & 0xB40) != 0 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        itemIds = shopEntity->fields.itemIds;
        if ( itemIds )
        {
          if ( !itemIds->max_length )
          {
            sub_B17100(UserId, v14, v15);
            sub_B170A0();
          }
          if ( MasterData_WarQuestSelectionMaster )
          {
            EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                                 MasterData_WarQuestSelectionMaster,
                                 UserId,
                                 itemIds->m_Items[1],
                                 0LL);
            if ( EntityDefinitely )
            {
              num = EntityDefinitely->fields.num;
              v19 = LocalizationManager_TypeInfo;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
                return LocalizationManager__GetNumberFormat(num, 0LL);
              goto LABEL_23;
            }
          }
        }
      }
LABEL_27:
      sub_B170D4();
    }
    if ( payType == 4 )
    {
      if ( !userGameEntity )
        goto LABEL_27;
      num = userGameEntity->fields.mana;
LABEL_22:
      v19 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        return LocalizationManager__GetNumberFormat(num, 0LL);
LABEL_23:
      if ( !v19->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v19);
      return LocalizationManager__GetNumberFormat(num, 0LL);
    }
    if ( payType == 10 )
    {
      if ( !userGameEntity )
        goto LABEL_27;
      num = userGameEntity->fields.rarePri;
      goto LABEL_22;
    }
  }
  return (System_String_o *)StringLiteral_1;
}


int32_t __fastcall BuyStorageConfirmDialogComponent__GetKindByShopState(int32_t state, const MethodInfo *method)
{
  return state != 11 && state == 12;
}


void __fastcall BuyStorageConfirmDialogComponent__Init(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UILabel_o *messageLabel; // x0
  UILabel_o *nowNumLabel; // x0
  UILabel_o *afterNumLabel; // x0
  UILabel_o *nowNumTextLabel; // x0
  UILabel_o *afterNumTextLabel; // x0
  UILabel_o *resultAfterNumLabel; // x0
  UILabel_o *resultAfterNumTextLabel; // x0
  UILabel_o *decideBtnLabel; // x0
  UILabel_o *cancelBtnLabel; // x0
  UILabel_o *closeBtnLabel; // x0
  UILabel_o *itemNum; // x0
  UISprite_o *itemImage; // x0
  UnityEngine_GameObject_o *confirmInfo; // x0
  UnityEngine_GameObject_o *resultInfo; // x0
  UnityEngine_GameObject_o *notification; // x0

  if ( (byte_40FB501 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FB501 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_20;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1, 0LL);
  nowNumLabel = this->fields.nowNumLabel;
  if ( !nowNumLabel )
    goto LABEL_20;
  UILabel__set_text(nowNumLabel, (System_String_o *)StringLiteral_1, 0LL);
  afterNumLabel = this->fields.afterNumLabel;
  if ( !afterNumLabel )
    goto LABEL_20;
  UILabel__set_text(afterNumLabel, (System_String_o *)StringLiteral_1, 0LL);
  nowNumTextLabel = this->fields.nowNumTextLabel;
  if ( !nowNumTextLabel )
    goto LABEL_20;
  UILabel__set_text(nowNumTextLabel, (System_String_o *)StringLiteral_1, 0LL);
  afterNumTextLabel = this->fields.afterNumTextLabel;
  if ( !afterNumTextLabel )
    goto LABEL_20;
  UILabel__set_text(afterNumTextLabel, (System_String_o *)StringLiteral_1, 0LL);
  resultAfterNumLabel = this->fields.resultAfterNumLabel;
  if ( !resultAfterNumLabel )
    goto LABEL_20;
  UILabel__set_text(resultAfterNumLabel, (System_String_o *)StringLiteral_1, 0LL);
  resultAfterNumTextLabel = this->fields.resultAfterNumTextLabel;
  if ( !resultAfterNumTextLabel )
    goto LABEL_20;
  UILabel__set_text(resultAfterNumTextLabel, (System_String_o *)StringLiteral_1, 0LL);
  decideBtnLabel = this->fields.decideBtnLabel;
  if ( !decideBtnLabel )
    goto LABEL_20;
  UILabel__set_text(decideBtnLabel, (System_String_o *)StringLiteral_1, 0LL);
  cancelBtnLabel = this->fields.cancelBtnLabel;
  if ( !cancelBtnLabel )
    goto LABEL_20;
  UILabel__set_text(cancelBtnLabel, (System_String_o *)StringLiteral_1, 0LL);
  closeBtnLabel = this->fields.closeBtnLabel;
  if ( !closeBtnLabel )
    goto LABEL_20;
  UILabel__set_text(closeBtnLabel, (System_String_o *)StringLiteral_1, 0LL);
  itemNum = this->fields.itemNum;
  if ( !itemNum )
    goto LABEL_20;
  UILabel__set_text(itemNum, (System_String_o *)StringLiteral_1, 0LL);
  itemImage = this->fields.itemImage;
  if ( !itemImage
    || (UISprite__set_spriteName(itemImage, (System_String_o *)StringLiteral_1, 0LL),
        confirmInfo = this->fields.confirmInfo,
        this->fields.state = 0,
        !confirmInfo)
    || (UnityEngine_GameObject__SetActive(confirmInfo, 0, 0LL), (resultInfo = this->fields.resultInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(resultInfo, 0, 0LL), (notification = this->fields.notification) == 0LL) )
  {
LABEL_20:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(notification, 0, 0LL);
  this->fields.buyCount = 1;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall BuyStorageConfirmDialogComponent__NotificationDialogOpen(
        BuyStorageConfirmDialogComponent_o *this,
        int32_t kind,
        int32_t notificationType,
        ShopBuyItemListViewItem_o *item,
        System_Action_int__o *onMenuSelect,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  if ( !this->fields.state )
  {
    if ( !item )
      sub_B170D4();
    BuyStorageConfirmDialogComponent__Open_27617960(
      this,
      kind,
      2,
      notificationType,
      item->fields._Shop_k__BackingField,
      onMenuSelect,
      v6);
  }
}


void __fastcall BuyStorageConfirmDialogComponent__OnClickCancel(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FB50A & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB50A = 1;
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
    BuyStorageConfirmDialogComponent__CallOnMenuSelect(this, 0, v3);
  }
}


void __fastcall BuyStorageConfirmDialogComponent__OnClickClose(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_40FB50B & 1) == 0 )
  {
    sub_B16FFC(&Method_BuyStorageConfirmDialogComponent_OnClickClose__, method);
    byte_40FB50B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_BuyStorageConfirmDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_BuyStorageConfirmDialogComponent_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_BuyStorageConfirmDialogComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    BuyStorageConfirmDialogComponent__CallOnMenuSelect(this, 0, v5);
  }
}


void __fastcall BuyStorageConfirmDialogComponent__OnClickDecide(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int32_t decideSe; // w20
  const MethodInfo *v4; // x2

  if ( (byte_40FB509 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB509 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    decideSe = this->fields.decideSe;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(decideSe, 0LL);
    BuyStorageConfirmDialogComponent__CallOnMenuSelect(this, this->fields.buyCount, v4);
  }
}


void __fastcall BuyStorageConfirmDialogComponent__OnEnable(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v7; // x0
  UnityEngine_Transform_o *v8; // x0

  if ( (byte_40FB50D & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_4209, v3);
    sub_B16FFC(&StringLiteral_4208, v4);
    sub_B16FFC(&StringLiteral_4207, v5);
    byte_40FB50D = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21111220(transform, (System_String_o *)StringLiteral_4207, 0LL);
  v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_21111220(v7, (System_String_o *)StringLiteral_4209, 0LL);
  v8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_21111220(v8, (System_String_o *)StringLiteral_4208, 0LL);
}


void __fastcall BuyStorageConfirmDialogComponent__Open(
        BuyStorageConfirmDialogComponent_o *this,
        int32_t kind,
        ShopBuyItemListViewItem_o *item,
        int32_t buyCount,
        System_Action_int__o *onMenuSelect,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  if ( !this->fields.state )
  {
    this->fields.buyCount = buyCount;
    if ( !item )
      sub_B170D4();
    BuyStorageConfirmDialogComponent__Open_27617960(
      this,
      kind,
      0,
      0,
      item->fields._Shop_k__BackingField,
      onMenuSelect,
      v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BuyStorageConfirmDialogComponent__Open_27617960(
        BuyStorageConfirmDialogComponent_o *this,
        int32_t kind,
        int32_t type,
        int32_t notificationType,
        ShopEntity_o *shopEntity,
        System_Action_int__o *onMenuSelect,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  UISprite_o *itemImage; // x24
  BuyStorageConfirmDialogComponent_o *v16; // x0
  const MethodInfo *v17; // x2
  int32_t CurrencyImageId; // w25
  UserGameEntity_o *SelfUserGame; // x0
  UILabel_o *itemNum; // x25
  UserGameEntity_o *v21; // x24
  const MethodInfo *v22; // x3
  System_String_o *ItemNumText; // x0
  const MethodInfo *v24; // x6
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Action_o *v29; // x20

  if ( (byte_40FB502 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&AtlasManager_TypeInfo, v13);
    sub_B16FFC(&Method_BuyStorageConfirmDialogComponent_EndOpen__, v14);
    byte_40FB502 = 1;
  }
  BuyStorageConfirmDialogComponent__SetObjectsOnInit(this, kind, type, onMenuSelect, (const MethodInfo *)shopEntity);
  itemImage = this->fields.itemImage;
  CurrencyImageId = BuyStorageConfirmDialogComponent__GetCurrencyImageId(v16, shopEntity, v17);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(itemImage, CurrencyImageId, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  itemNum = this->fields.itemNum;
  v21 = SelfUserGame;
  ItemNumText = BuyStorageConfirmDialogComponent__GetItemNumText(
                  (BuyStorageConfirmDialogComponent_o *)SelfUserGame,
                  shopEntity,
                  SelfUserGame,
                  v22);
  if ( !itemNum )
    sub_B170D4();
  UILabel__set_text(itemNum, ItemNumText, 0LL);
  BuyStorageConfirmDialogComponent__SetMessageLabels(this, kind, type, notificationType, shopEntity, v21, v24);
  this->fields.state = 1;
  v29 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_BuyStorageConfirmDialogComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v29, 0, 0LL);
}


void __fastcall BuyStorageConfirmDialogComponent__ResultOpenDialog(
        BuyStorageConfirmDialogComponent_o *this,
        int32_t kind,
        ShopBuyItemListViewItem_o *item,
        System_Action_int__o *onMenuSelect,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  if ( !this->fields.state )
  {
    if ( !item )
      sub_B170D4();
    BuyStorageConfirmDialogComponent__Open_27617960(
      this,
      kind,
      1,
      0,
      item->fields._Shop_k__BackingField,
      onMenuSelect,
      v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BuyStorageConfirmDialogComponent__SetMessageLabels(
        BuyStorageConfirmDialogComponent_o *this,
        int32_t kind,
        int32_t type,
        int32_t notificationType,
        ShopEntity_o *shopEntity,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  BuyStorageConfirmDialogComponent_o *v12; // x19
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
  System_String_o *CurrencyItemName; // x23
  const MethodInfo *v29; // x6
  int32_t v30; // w20
  int32_t setNum; // w27
  int32_t buyCount; // w28
  UILabel_o *titleLabel; // x26
  __int64 *v34; // x8
  System_String_o *v35; // x0
  int32_t v36; // w22
  UILabel_o *messageLabel; // x24
  __int64 *v38; // x8
  UILabel_o *notificationMessage; // x20
  __int64 *v40; // x8
  int32_t v41; // w8
  UILabel_o *v42; // x21
  __int64 *v43; // x8
  System_String_o *v44; // x25
  int32_t Price; // w0
  Il2CppObject *NumberFormat; // x21
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  UILabel_o *nowNumLabel; // x21
  System_String_o *v50; // x23
  Il2CppObject *v51; // x0
  System_String_o *v52; // x0
  UILabel_o *afterNumLabel; // x20
  System_String_o *v54; // x21
  Il2CppObject *v55; // x0
  System_String_o *v56; // x0
  UILabel_o *nowNumTextLabel; // x20
  System_String_o *v58; // x0
  UILabel_o *afterNumTextLabel; // x20
  System_String_o *v60; // x0
  UILabel_o *decideBtnLabel; // x20
  System_String_o *v62; // x0
  UILabel_o *closeBtnLabel; // x19
  __int64 *v64; // x8
  System_String_o *v65; // x0
  System_String_o *v66; // x22
  Il2CppObject *v67; // x0
  System_String_o *v68; // x0
  UILabel_o *resultAfterNumLabel; // x21
  System_String_o *v70; // x22
  Il2CppObject *v71; // x0
  System_String_o *v72; // x0
  UILabel_o *resultAfterNumTextLabel; // x20
  System_String_o *v74; // x0
  System_String_o *v75; // x0
  int32_t v76; // [xsp+0h] [xbp-60h] BYREF
  int32_t v77; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t max[2]; // [xsp+8h] [xbp-58h] BYREF

  v12 = this;
  if ( (byte_40FB506 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_11675, v14);
    sub_B16FFC(&StringLiteral_12344, v15);
    sub_B16FFC(&StringLiteral_11676, v16);
    sub_B16FFC(&StringLiteral_12001, v17);
    sub_B16FFC(&StringLiteral_11683, v18);
    sub_B16FFC(&StringLiteral_12345, v19);
    sub_B16FFC(&StringLiteral_11684, v20);
    sub_B16FFC(&StringLiteral_11680, v21);
    sub_B16FFC(&StringLiteral_12002, v22);
    sub_B16FFC(&StringLiteral_11999, v23);
    sub_B16FFC(&StringLiteral_11681, v24);
    sub_B16FFC(&StringLiteral_11682, v25);
    sub_B16FFC(&StringLiteral_11674, v26);
    this = (BuyStorageConfirmDialogComponent_o *)sub_B16FFC(&StringLiteral_12000, v27);
    byte_40FB506 = 1;
  }
  *(_QWORD *)max = 0LL;
  CurrencyItemName = BuyStorageConfirmDialogComponent__GetCurrencyItemName(
                       this,
                       shopEntity,
                       *(const MethodInfo **)&type);
  BuyStorageConfirmDialogComponent__SetStorageNum(
    (BuyStorageConfirmDialogComponent_o *)CurrencyItemName,
    kind,
    shopEntity,
    userGameEntity,
    &max[1],
    max,
    v29);
  if ( !shopEntity )
    goto LABEL_77;
  v30 = max[1];
  setNum = shopEntity->fields.setNum;
  buyCount = v12->fields.buyCount;
  if ( kind )
  {
    if ( kind != 1 )
      goto LABEL_16;
    titleLabel = v12->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v34 = &StringLiteral_11676;
  }
  else
  {
    titleLabel = v12->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v34 = &StringLiteral_12002;
  }
  v35 = LocalizationManager__Get((System_String_o *)*v34, 0LL);
  if ( !titleLabel )
    goto LABEL_77;
  UILabel__set_text(titleLabel, v35, 0LL);
LABEL_16:
  if ( type == 2 )
  {
    if ( notificationType == 2 )
    {
      notificationMessage = v12->fields.notificationMessage;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v40 = &StringLiteral_12344;
    }
    else
    {
      if ( notificationType != 1 )
      {
LABEL_58:
        closeBtnLabel = v12->fields.closeBtnLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        goto LABEL_73;
      }
      notificationMessage = v12->fields.notificationMessage;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v40 = &StringLiteral_12345;
    }
    v65 = LocalizationManager__Get((System_String_o *)*v40, 0LL);
    if ( !notificationMessage )
      goto LABEL_77;
    UILabel__set_text(notificationMessage, v65, 0LL);
    goto LABEL_58;
  }
  if ( type != 1 )
  {
    if ( type )
      return;
    v36 = v30 + buyCount * setNum;
    if ( kind )
    {
      if ( kind != 1 )
      {
LABEL_45:
        nowNumTextLabel = v12->fields.nowNumTextLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v58 = LocalizationManager__Get((System_String_o *)StringLiteral_11683, 0LL);
        if ( nowNumTextLabel )
        {
          UILabel__set_text(nowNumTextLabel, v58, 0LL);
          afterNumTextLabel = v12->fields.afterNumTextLabel;
          v60 = LocalizationManager__Get((System_String_o *)StringLiteral_11684, 0LL);
          if ( afterNumTextLabel )
          {
            UILabel__set_text(afterNumTextLabel, v60, 0LL);
            decideBtnLabel = v12->fields.decideBtnLabel;
            v62 = LocalizationManager__Get((System_String_o *)StringLiteral_11682, 0LL);
            if ( decideBtnLabel )
            {
              UILabel__set_text(decideBtnLabel, v62, 0LL);
              closeBtnLabel = v12->fields.cancelBtnLabel;
              v64 = &StringLiteral_11680;
              goto LABEL_74;
            }
          }
        }
LABEL_77:
        sub_B170D4();
      }
      messageLabel = v12->fields.messageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v38 = &StringLiteral_11674;
    }
    else
    {
      messageLabel = v12->fields.messageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v38 = &StringLiteral_11999;
    }
    v44 = LocalizationManager__Get((System_String_o *)*v38, 0LL);
    Price = ShopEntity__GetPrice(shopEntity, 0LL);
    NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v12->fields.buyCount * Price, 0LL);
    v77 = max[0];
    v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77);
    v48 = System_String__Format_43744796(v44, (Il2CppObject *)CurrencyItemName, NumberFormat, v47, 0LL);
    if ( !messageLabel )
      goto LABEL_77;
    UILabel__set_text(messageLabel, v48, 0LL);
    nowNumLabel = v12->fields.nowNumLabel;
    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12000, 0LL);
    v51 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v30, 0LL);
    v52 = System_String__Format(v50, v51, 0LL);
    if ( !nowNumLabel )
      goto LABEL_77;
    UILabel__set_text(nowNumLabel, v52, 0LL);
    afterNumLabel = v12->fields.afterNumLabel;
    v54 = LocalizationManager__Get((System_String_o *)StringLiteral_12000, 0LL);
    v55 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v36, 0LL);
    v56 = System_String__Format(v54, v55, 0LL);
    if ( !afterNumLabel )
      goto LABEL_77;
    UILabel__set_text(afterNumLabel, v56, 0LL);
    goto LABEL_45;
  }
  v41 = v12->fields.kind;
  if ( v41 == 1 )
  {
    v42 = v12->fields.messageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v43 = &StringLiteral_11675;
    goto LABEL_65;
  }
  if ( !v41 )
  {
    v42 = v12->fields.messageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v43 = &StringLiteral_12001;
LABEL_65:
    v66 = LocalizationManager__Get((System_String_o *)*v43, 0LL);
    v77 = max[0];
    v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77);
    v68 = System_String__Format(v66, v67, 0LL);
    if ( !v42 )
      goto LABEL_77;
    UILabel__set_text(v42, v68, 0LL);
    resultAfterNumLabel = v12->fields.resultAfterNumLabel;
    v70 = LocalizationManager__Get((System_String_o *)StringLiteral_12000, 0LL);
    v76 = v30;
    v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76);
    v72 = System_String__Format(v70, v71, 0LL);
    if ( !resultAfterNumLabel )
      goto LABEL_77;
    UILabel__set_text(resultAfterNumLabel, v72, 0LL);
  }
  resultAfterNumTextLabel = v12->fields.resultAfterNumTextLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_11683, 0LL);
  if ( !resultAfterNumTextLabel )
    goto LABEL_77;
  UILabel__set_text(resultAfterNumTextLabel, v74, 0LL);
  closeBtnLabel = v12->fields.closeBtnLabel;
LABEL_73:
  v64 = &StringLiteral_11681;
LABEL_74:
  v75 = LocalizationManager__Get((System_String_o *)*v64, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_77;
  UILabel__set_text(closeBtnLabel, v75, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BuyStorageConfirmDialogComponent__SetObjectsOnInit(
        BuyStorageConfirmDialogComponent_o *this,
        int32_t kind,
        int32_t type,
        System_Action_int__o *onMenuSelect,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *confirmInfo; // x0
  UnityEngine_GameObject_o *resultInfo; // x0
  UnityEngine_GameObject_o *notification; // x0
  UnityEngine_Component_o *notificationMessage; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Component_o *messageLabel; // x0
  UnityEngine_GameObject_o *v17; // x0

  this->fields.kind = kind;
  this->fields.onMenuSelect = onMenuSelect;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onMenuSelect,
    (System_Int32_array **)onMenuSelect,
    *(System_String_array ***)&type,
    (System_String_array **)onMenuSelect,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  confirmInfo = this->fields.confirmInfo;
  if ( !confirmInfo )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(confirmInfo, type == 0, 0LL);
  resultInfo = this->fields.resultInfo;
  if ( !resultInfo )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(resultInfo, type == 1, 0LL);
  notification = this->fields.notification;
  if ( !notification
    || (UnityEngine_GameObject__SetActive(notification, type == 2, 0LL),
        (notificationMessage = (UnityEngine_Component_o *)this->fields.notificationMessage) == 0LL)
    || (v15 = UnityEngine_Component__get_gameObject(notificationMessage, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v15, type == 2, 0LL),
        (messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel) == 0LL)
    || (v17 = UnityEngine_Component__get_gameObject(messageLabel, 0LL)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v17, type != 2, 0LL);
  this->fields.decideSe = 8 * (type == 0);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BuyStorageConfirmDialogComponent__SetStorageNum(
        BuyStorageConfirmDialogComponent_o *this,
        int32_t kind,
        ShopEntity_o *shopEntity,
        UserGameEntity_o *userGameEntity,
        int32_t *now,
        int32_t *max,
        const MethodInfo *method)
{
  int32_t setNum; // w9
  int32_t UserServantEquipStorageMax; // w8
  int32_t v14; // w8

  if ( (byte_40FB507 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    byte_40FB507 = 1;
  }
  if ( kind == 1 )
  {
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    if ( userGameEntity )
    {
      *now = userGameEntity->fields.svtEquipStorageAdjust
           + BalanceConfig_TypeInfo->static_fields->UserServantEquipStorageMax;
      if ( shopEntity )
      {
        setNum = shopEntity->fields.setNum;
        UserServantEquipStorageMax = BalanceConfig_TypeInfo->static_fields->UserServantEquipStorageMax;
        goto LABEL_17;
      }
    }
LABEL_20:
    sub_B170D4();
  }
  if ( kind )
  {
    v14 = 0;
    *now = 0;
    goto LABEL_19;
  }
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !userGameEntity )
    goto LABEL_20;
  *now = userGameEntity->fields.svtStorageAdjust + BalanceConfig_TypeInfo->static_fields->UserServantStorageMax;
  if ( !shopEntity )
    goto LABEL_20;
  setNum = shopEntity->fields.setNum;
  UserServantEquipStorageMax = BalanceConfig_TypeInfo->static_fields->UserServantStorageMax;
LABEL_17:
  v14 = UserServantEquipStorageMax + shopEntity->fields.limitNum * setNum;
LABEL_19:
  *max = v14;
}