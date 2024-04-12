void __fastcall BuyStorageConfirmDialogComponent___ctor(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B1857 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B1857 = 1;
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
    sub_B52920(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


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

  if ( (byte_42B1855 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int__Invoke__);
    byte_42B1855 = 1;
  }
  onMenuSelect = this->fields.onMenuSelect;
  p_onMenuSelect = (BattleServantConfConponent_o *)&this->fields.onMenuSelect;
  v11 = onMenuSelect;
  if ( onMenuSelect )
  {
    p_onMenuSelect->klass = 0LL;
    sub_B52920(p_onMenuSelect, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    System_Action_int___Invoke(v11, buyCount, (const MethodInfo_2626204 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall BuyStorageConfirmDialogComponent__Close(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BuyStorageConfirmDialogComponent__Close_27800664(this, 0LL, v2);
}


void __fastcall BuyStorageConfirmDialogComponent__Close_27800664(
        BuyStorageConfirmDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_42B1851 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BuyStorageConfirmDialogComponent_EndClose__);
    byte_42B1851 = 1;
  }
  this->fields.onClose = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_BuyStorageConfirmDialogComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
  int32_t result; // w0
  struct System_Int32_array *itemIds; // x8
  __int64 v6; // x0

  if ( (byte_42B184D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    this = (BuyStorageConfirmDialogComponent_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B184D = 1;
  }
  if ( !shopEntity )
LABEL_16:
    sub_B52A5C(this, shopEntity);
  result = 18;
  switch ( shopEntity->fields.payType )
  {
    case 4:
      return 7;
    case 6:
    case 0xB:
      this = (BuyStorageConfirmDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_16;
      this = (BuyStorageConfirmDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
      itemIds = shopEntity->fields.itemIds;
      if ( !itemIds )
        goto LABEL_16;
      if ( !itemIds->max_length )
      {
        v6 = sub_B52A88(this);
        sub_B52A28(v6, 0LL);
      }
      if ( !this )
        goto LABEL_16;
      this = (BuyStorageConfirmDialogComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                     itemIds->m_Items[1],
                                                     (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_16;
      return (int32_t)this->fields.baseWindow;
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
  struct System_Int32_array *itemIds; // x8
  System_String_o *result; // x0
  __int64 *v6; // x8
  __int64 v7; // x0

  if ( (byte_42B184C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_12466/*"STONE_FRAGMENTS_NEED_INFO"*/);
    sub_B52984(&StringLiteral_1699/*"ANONYMOUS_NEED_INFO"*/);
    sub_B52984(&StringLiteral_11099/*"RARE_PRI_NEED_INFO"*/);
    sub_B52984(&StringLiteral_8670/*"MANA_NEED_INFO"*/);
    this = (BuyStorageConfirmDialogComponent_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B184C = 1;
  }
  if ( !shopEntity )
LABEL_29:
    sub_B52A5C(this, shopEntity);
  switch ( shopEntity->fields.payType )
  {
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v6 = &StringLiteral_8670/*"MANA_NEED_INFO"*/;
      goto LABEL_28;
    case 6:
    case 0xB:
      this = (BuyStorageConfirmDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_29;
      this = (BuyStorageConfirmDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
      itemIds = shopEntity->fields.itemIds;
      if ( !itemIds )
        goto LABEL_29;
      if ( !itemIds->max_length )
      {
        v7 = sub_B52A88(this);
        sub_B52A28(v7, 0LL);
      }
      if ( !this )
        goto LABEL_29;
      this = (BuyStorageConfirmDialogComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                     itemIds->m_Items[1],
                                                     (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_29;
      result = (System_String_o *)this->fields.basePanel;
      break;
    case 8:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v6 = &StringLiteral_12466/*"STONE_FRAGMENTS_NEED_INFO"*/;
      goto LABEL_28;
    case 9:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v6 = &StringLiteral_1699/*"ANONYMOUS_NEED_INFO"*/;
      goto LABEL_28;
    case 0xA:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v6 = &StringLiteral_11099/*"RARE_PRI_NEED_INFO"*/;
LABEL_28:
      result = LocalizationManager__Get((System_String_o *)*v6, 0LL);
      break;
    default:
      result = (System_String_o *)StringLiteral_1/*""*/;
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
  unsigned int payType; // w8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct System_Int32_array *itemIds; // x8
  int32_t basePanel_high; // w19
  LocalizationManager_c *v10; // x0
  __int64 v12; // x0

  if ( (byte_42B184E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (BuyStorageConfirmDialogComponent_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B184E = 1;
  }
  if ( !shopEntity )
    goto LABEL_27;
  payType = shopEntity->fields.payType;
  if ( payType <= 0xB )
  {
    if ( ((1 << payType) & 0xB40) != 0 )
    {
      this = (BuyStorageConfirmDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)this,
                                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (BuyStorageConfirmDialogComponent_o *)NetworkManager__get_UserId(0LL);
        itemIds = shopEntity->fields.itemIds;
        if ( itemIds )
        {
          if ( !itemIds->max_length )
          {
            v12 = sub_B52A88(this);
            sub_B52A28(v12, 0LL);
          }
          if ( MasterData_WarQuestSelectionMaster )
          {
            this = (BuyStorageConfirmDialogComponent_o *)UserItemMaster__GetEntityDefinitely(
                                                           MasterData_WarQuestSelectionMaster,
                                                           (int64_t)this,
                                                           itemIds->m_Items[1],
                                                           0LL);
            if ( this )
            {
              basePanel_high = HIDWORD(this->fields.basePanel);
              v10 = LocalizationManager_TypeInfo;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
                return LocalizationManager__GetNumberFormat(basePanel_high, 0LL);
              goto LABEL_23;
            }
          }
        }
      }
LABEL_27:
      sub_B52A5C(this, shopEntity);
    }
    if ( payType == 4 )
    {
      if ( !userGameEntity )
        goto LABEL_27;
      basePanel_high = userGameEntity->fields.mana;
LABEL_22:
      v10 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        return LocalizationManager__GetNumberFormat(basePanel_high, 0LL);
LABEL_23:
      if ( !v10->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v10);
      return LocalizationManager__GetNumberFormat(basePanel_high, 0LL);
    }
    if ( payType == 10 )
    {
      if ( !userGameEntity )
        goto LABEL_27;
      basePanel_high = userGameEntity->fields.rarePri;
      goto LABEL_22;
    }
  }
  return (System_String_o *)StringLiteral_1/*""*/;
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

  if ( (byte_42B184A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B184A = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.nowNumLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.afterNumLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.nowNumTextLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.afterNumTextLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.resultAfterNumLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.resultAfterNumTextLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.decideBtnLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.cancelBtnLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.closeBtnLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.itemNum;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = (UILabel_o *)this->fields.itemImage;
  if ( !titleLabel
    || (UISprite__set_spriteName((UISprite_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        titleLabel = (UILabel_o *)this->fields.confirmInfo,
        this->fields.state = 0,
        !titleLabel)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL),
        (titleLabel = (UILabel_o *)this->fields.resultInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL),
        (titleLabel = (UILabel_o *)this->fields.notification) == 0LL) )
  {
LABEL_20:
    sub_B52A5C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
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
      sub_B52A5C(this, kind);
    BuyStorageConfirmDialogComponent__Open_27796792(
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

  if ( (byte_42B1853 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B1853 = 1;
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

  if ( (byte_42B1854 & 1) == 0 )
  {
    sub_B52984(&Method_BuyStorageConfirmDialogComponent_OnClickClose__);
    byte_42B1854 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_BuyStorageConfirmDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_BuyStorageConfirmDialogComponent_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_BuyStorageConfirmDialogComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
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

  if ( (byte_42B1852 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B1852 = 1;
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
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v4; // x0
  UnityEngine_Transform_o *v5; // x0

  if ( (byte_42B1856 & 1) == 0 )
  {
    sub_B52984(&AndroidBackKeyManager_TypeInfo);
    sub_B52984(&StringLiteral_4265/*"ConfirmWindow/ResultInfo/CloseButton"*/);
    sub_B52984(&StringLiteral_4264/*"ConfirmWindow/Notification/CloseButton"*/);
    sub_B52984(&StringLiteral_4263/*"ConfirmWindow/ConfirmInfo/CancelButton"*/);
    byte_42B1856 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21195324(transform, (System_String_o *)StringLiteral_4263/*"ConfirmWindow/ConfirmInfo/CancelButton"*/, 0LL);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_21195324(v4, (System_String_o *)StringLiteral_4265/*"ConfirmWindow/ResultInfo/CloseButton"*/, 0LL);
  v5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_21195324(v5, (System_String_o *)StringLiteral_4264/*"ConfirmWindow/Notification/CloseButton"*/, 0LL);
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
      sub_B52A5C(this, kind);
    BuyStorageConfirmDialogComponent__Open_27796792(
      this,
      kind,
      0,
      0,
      item->fields._Shop_k__BackingField,
      onMenuSelect,
      v6);
  }
}


void __fastcall BuyStorageConfirmDialogComponent__Open_27796792(
        BuyStorageConfirmDialogComponent_o *this,
        int32_t kind,
        int32_t type,
        int32_t notificationType,
        ShopEntity_o *shopEntity,
        System_Action_int__o *onMenuSelect,
        const MethodInfo *method)
{
  UISprite_o *itemImage; // x24
  BuyStorageConfirmDialogComponent_o *v14; // x0
  const MethodInfo *v15; // x2
  int32_t CurrencyImageId; // w25
  UserGameEntity_o *SelfUserGame; // x0
  UILabel_o *itemNum; // x25
  UserGameEntity_o *v19; // x24
  const MethodInfo *v20; // x3
  System_String_o *ItemNumText; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x6
  System_Action_o *v24; // x20

  if ( (byte_42B184B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_BuyStorageConfirmDialogComponent_EndOpen__);
    byte_42B184B = 1;
  }
  BuyStorageConfirmDialogComponent__SetObjectsOnInit(this, kind, type, onMenuSelect, (const MethodInfo *)shopEntity);
  itemImage = this->fields.itemImage;
  CurrencyImageId = BuyStorageConfirmDialogComponent__GetCurrencyImageId(v14, shopEntity, v15);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(itemImage, CurrencyImageId, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  itemNum = this->fields.itemNum;
  v19 = SelfUserGame;
  ItemNumText = BuyStorageConfirmDialogComponent__GetItemNumText(
                  (BuyStorageConfirmDialogComponent_o *)SelfUserGame,
                  shopEntity,
                  SelfUserGame,
                  v20);
  if ( !itemNum )
    sub_B52A5C(ItemNumText, v22);
  UILabel__set_text(itemNum, ItemNumText, 0LL);
  BuyStorageConfirmDialogComponent__SetMessageLabels(this, kind, type, notificationType, shopEntity, v19, v23);
  this->fields.state = 1;
  v24 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_BuyStorageConfirmDialogComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0LL);
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
      sub_B52A5C(this, kind);
    BuyStorageConfirmDialogComponent__Open_27796792(
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
  System_String_o *CurrencyItemName; // x23
  const MethodInfo *v14; // x6
  System_String_o *v15; // x0
  __int64 v16; // x1
  int32_t v17; // w20
  int32_t setNum; // w27
  int32_t buyCount; // w28
  UILabel_o *titleLabel; // x26
  __int64 *v21; // x8
  int32_t v22; // w22
  UILabel_o *messageLabel; // x24
  __int64 *v24; // x8
  UILabel_o *notificationMessage; // x20
  __int64 *v26; // x8
  int32_t v27; // w8
  UILabel_o *v28; // x21
  __int64 *v29; // x8
  System_String_o *v30; // x25
  int32_t Price; // w0
  Il2CppObject *NumberFormat; // x21
  Il2CppObject *v33; // x0
  UILabel_o *nowNumLabel; // x21
  System_String_o *v35; // x23
  Il2CppObject *v36; // x0
  UILabel_o *afterNumLabel; // x20
  System_String_o *v38; // x21
  Il2CppObject *v39; // x0
  UILabel_o *nowNumTextLabel; // x20
  UILabel_o *afterNumTextLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  UILabel_o *closeBtnLabel; // x19
  __int64 *v44; // x8
  System_String_o *v45; // x22
  Il2CppObject *v46; // x0
  UILabel_o *resultAfterNumLabel; // x21
  System_String_o *v48; // x22
  Il2CppObject *v49; // x0
  UILabel_o *resultAfterNumTextLabel; // x20
  int32_t v51; // [xsp+0h] [xbp-60h] BYREF
  int32_t v52; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t max[2]; // [xsp+8h] [xbp-58h] BYREF

  v12 = this;
  if ( (byte_42B184F & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_11799/*"SERVANT_EQUIP_STORAGE_PURCHASE_RESULT"*/);
    sub_B52984(&StringLiteral_12488/*"STORAGE_SHOP_NOTIFICATION"*/);
    sub_B52984(&StringLiteral_11800/*"SERVANT_EQUIP_STORAGE_PURCHASE_TITLE"*/);
    sub_B52984(&StringLiteral_12141/*"SERVANT_STORAGE_PURCHASE_RESULT"*/);
    sub_B52984(&StringLiteral_11807/*"SERVANT_FRAME_PURCHASE_INFO1"*/);
    sub_B52984(&StringLiteral_12489/*"STORAGE_SHOP_SOLD_OUT"*/);
    sub_B52984(&StringLiteral_11808/*"SERVANT_FRAME_PURCHASE_INFO2"*/);
    sub_B52984(&StringLiteral_11804/*"SERVANT_FRAME_PURCHASE_CANCEL"*/);
    sub_B52984(&StringLiteral_12142/*"SERVANT_STORAGE_PURCHASE_TITLE"*/);
    sub_B52984(&StringLiteral_12139/*"SERVANT_STORAGE_PURCHASE_MESSAGE"*/);
    sub_B52984(&StringLiteral_11805/*"SERVANT_FRAME_PURCHASE_CLOSE"*/);
    sub_B52984(&StringLiteral_11806/*"SERVANT_FRAME_PURCHASE_DECIDE"*/);
    sub_B52984(&StringLiteral_11798/*"SERVANT_EQUIP_STORAGE_PURCHASE_MESSAGE"*/);
    this = (BuyStorageConfirmDialogComponent_o *)sub_B52984(&StringLiteral_12140/*"SERVANT_STORAGE_PURCHASE_NUM"*/);
    byte_42B184F = 1;
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
    v14);
  if ( !shopEntity )
    goto LABEL_77;
  v17 = max[1];
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
    v21 = &StringLiteral_11800/*"SERVANT_EQUIP_STORAGE_PURCHASE_TITLE"*/;
  }
  else
  {
    titleLabel = v12->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = &StringLiteral_12142/*"SERVANT_STORAGE_PURCHASE_TITLE"*/;
  }
  v15 = LocalizationManager__Get((System_String_o *)*v21, 0LL);
  if ( !titleLabel )
    goto LABEL_77;
  UILabel__set_text(titleLabel, v15, 0LL);
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
      v26 = &StringLiteral_12488/*"STORAGE_SHOP_NOTIFICATION"*/;
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
      v26 = &StringLiteral_12489/*"STORAGE_SHOP_SOLD_OUT"*/;
    }
    v15 = LocalizationManager__Get((System_String_o *)*v26, 0LL);
    if ( !notificationMessage )
      goto LABEL_77;
    UILabel__set_text(notificationMessage, v15, 0LL);
    goto LABEL_58;
  }
  if ( type != 1 )
  {
    if ( type )
      return;
    v22 = v17 + buyCount * setNum;
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
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11807/*"SERVANT_FRAME_PURCHASE_INFO1"*/, 0LL);
        if ( nowNumTextLabel )
        {
          UILabel__set_text(nowNumTextLabel, v15, 0LL);
          afterNumTextLabel = v12->fields.afterNumTextLabel;
          v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11808/*"SERVANT_FRAME_PURCHASE_INFO2"*/, 0LL);
          if ( afterNumTextLabel )
          {
            UILabel__set_text(afterNumTextLabel, v15, 0LL);
            decideBtnLabel = v12->fields.decideBtnLabel;
            v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11806/*"SERVANT_FRAME_PURCHASE_DECIDE"*/, 0LL);
            if ( decideBtnLabel )
            {
              UILabel__set_text(decideBtnLabel, v15, 0LL);
              closeBtnLabel = v12->fields.cancelBtnLabel;
              v44 = &StringLiteral_11804/*"SERVANT_FRAME_PURCHASE_CANCEL"*/;
              goto LABEL_74;
            }
          }
        }
LABEL_77:
        sub_B52A5C(v15, v16);
      }
      messageLabel = v12->fields.messageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v24 = &StringLiteral_11798/*"SERVANT_EQUIP_STORAGE_PURCHASE_MESSAGE"*/;
    }
    else
    {
      messageLabel = v12->fields.messageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v24 = &StringLiteral_12139/*"SERVANT_STORAGE_PURCHASE_MESSAGE"*/;
    }
    v30 = LocalizationManager__Get((System_String_o *)*v24, 0LL);
    Price = ShopEntity__GetPrice(shopEntity, 0LL);
    NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v12->fields.buyCount * Price, 0LL);
    v52 = max[0];
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
    v15 = System_String__Format_44569380(v30, (Il2CppObject *)CurrencyItemName, NumberFormat, v33, 0LL);
    if ( !messageLabel )
      goto LABEL_77;
    UILabel__set_text(messageLabel, v15, 0LL);
    nowNumLabel = v12->fields.nowNumLabel;
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12140/*"SERVANT_STORAGE_PURCHASE_NUM"*/, 0LL);
    v36 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v17, 0LL);
    v15 = System_String__Format(v35, v36, 0LL);
    if ( !nowNumLabel )
      goto LABEL_77;
    UILabel__set_text(nowNumLabel, v15, 0LL);
    afterNumLabel = v12->fields.afterNumLabel;
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12140/*"SERVANT_STORAGE_PURCHASE_NUM"*/, 0LL);
    v39 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v22, 0LL);
    v15 = System_String__Format(v38, v39, 0LL);
    if ( !afterNumLabel )
      goto LABEL_77;
    UILabel__set_text(afterNumLabel, v15, 0LL);
    goto LABEL_45;
  }
  v27 = v12->fields.kind;
  if ( v27 == 1 )
  {
    v28 = v12->fields.messageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v29 = &StringLiteral_11799/*"SERVANT_EQUIP_STORAGE_PURCHASE_RESULT"*/;
    goto LABEL_65;
  }
  if ( !v27 )
  {
    v28 = v12->fields.messageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v29 = &StringLiteral_12141/*"SERVANT_STORAGE_PURCHASE_RESULT"*/;
LABEL_65:
    v45 = LocalizationManager__Get((System_String_o *)*v29, 0LL);
    v52 = max[0];
    v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
    v15 = System_String__Format(v45, v46, 0LL);
    if ( !v28 )
      goto LABEL_77;
    UILabel__set_text(v28, v15, 0LL);
    resultAfterNumLabel = v12->fields.resultAfterNumLabel;
    v48 = LocalizationManager__Get((System_String_o *)StringLiteral_12140/*"SERVANT_STORAGE_PURCHASE_NUM"*/, 0LL);
    v51 = v17;
    v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
    v15 = System_String__Format(v48, v49, 0LL);
    if ( !resultAfterNumLabel )
      goto LABEL_77;
    UILabel__set_text(resultAfterNumLabel, v15, 0LL);
  }
  resultAfterNumTextLabel = v12->fields.resultAfterNumTextLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11807/*"SERVANT_FRAME_PURCHASE_INFO1"*/, 0LL);
  if ( !resultAfterNumTextLabel )
    goto LABEL_77;
  UILabel__set_text(resultAfterNumTextLabel, v15, 0LL);
  closeBtnLabel = v12->fields.closeBtnLabel;
LABEL_73:
  v44 = &StringLiteral_11805/*"SERVANT_FRAME_PURCHASE_CLOSE"*/;
LABEL_74:
  v15 = LocalizationManager__Get((System_String_o *)*v44, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_77;
  UILabel__set_text(closeBtnLabel, v15, 0LL);
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
  __int64 v11; // x1

  this->fields.kind = kind;
  this->fields.onMenuSelect = onMenuSelect;
  sub_B52920(
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
  gameObject = this->fields.confirmInfo;
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, type == 0, 0LL);
  gameObject = this->fields.resultInfo;
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, type == 1, 0LL);
  gameObject = this->fields.notification;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, type == 2, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.notificationMessage) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, type == 2, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
LABEL_10:
    sub_B52A5C(gameObject, v11);
  }
  UnityEngine_GameObject__SetActive(gameObject, type != 2, 0LL);
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
  BalanceConfig_c *v12; // x0
  int32_t setNum; // w9
  int32_t UserServantEquipStorageMax; // w8
  int32_t v15; // w8

  if ( (byte_42B1850 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B1850 = 1;
  }
  if ( kind == 1 )
  {
    v12 = BalanceConfig_TypeInfo;
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
    sub_B52A5C(v12, *(_QWORD *)&kind);
  }
  if ( kind )
  {
    v15 = 0;
    *now = 0;
    goto LABEL_19;
  }
  v12 = BalanceConfig_TypeInfo;
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
  v15 = UserServantEquipStorageMax + shopEntity->fields.limitNum * setNum;
LABEL_19:
  *max = v15;
}