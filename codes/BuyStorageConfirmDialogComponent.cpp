void BuyStorageConfirmDialogComponent___ctor(BuyStorageConfirmDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596C64D & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596C64D = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void BuyStorageConfirmDialogComponent__CallOnClose(BuyStorageConfirmDialogComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_o *onClose; // x19

  onClose = this->fields.onClose;
  if ( onClose )
  {
    this->fields.onClose = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onClose, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))onClose->fields.invoke_impl)(
      onClose->fields.method_code,
      onClose->fields.method);
  }
}


void BuyStorageConfirmDialogComponent__CallOnMenuSelect(
        BuyStorageConfirmDialogComponent_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_onMenuSelect; // x0
  struct System_Action_int__o *v9; // x20
  struct System_Action_int__o *onMenuSelect; // t1

  onMenuSelect = this->fields.onMenuSelect;
  p_onMenuSelect = (MissionNaviTransitionBoardItem_o *)&this->fields.onMenuSelect;
  v9 = onMenuSelect;
  if ( onMenuSelect )
  {
    p_onMenuSelect->klass = 0;
    sub_2213A04(p_onMenuSelect, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)buyCount,
      v9->fields.method);
  }
}


void BuyStorageConfirmDialogComponent__Close(BuyStorageConfirmDialogComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BuyStorageConfirmDialogComponent__Close_41760164(this, 0, v2);
}


void BuyStorageConfirmDialogComponent__Close_41760164(
        BuyStorageConfirmDialogComponent_o *this,
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

  if ( (byte_596C648 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BuyStorageConfirmDialogComponent_EndClose__);
    byte_596C648 = 1;
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
  System_Action___ctor(v11, (Il2CppObject *)this, Method_BuyStorageConfirmDialogComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void BuyStorageConfirmDialogComponent__EndClose(BuyStorageConfirmDialogComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  BuyStorageConfirmDialogComponent__Init(this, method);
  BuyStorageConfirmDialogComponent__CallOnClose(this, v3);
}


void BuyStorageConfirmDialogComponent__EndOpen(BuyStorageConfirmDialogComponent_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


int32_t BuyStorageConfirmDialogComponent__GetCurrencyImageId(
        BuyStorageConfirmDialogComponent_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  int32_t payType; // w8
  struct System_Int32_array *itemIds; // x8

  if ( (byte_596C644 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    this = (BuyStorageConfirmDialogComponent_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C644 = 1;
  }
  if ( !shopEntity )
    goto LABEL_24;
  payType = shopEntity->fields.payType;
  if ( payType > 7 )
  {
    if ( payType <= 9 )
    {
      if ( payType == 8 )
        return 16;
      else
        return 17;
    }
    if ( payType == 10 )
      return 18;
    if ( payType != 11 )
      return 0;
    goto LABEL_15;
  }
  if ( payType > 5 )
  {
    if ( payType != 6 )
      return 0;
LABEL_15:
    this = (BuyStorageConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (BuyStorageConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
      itemIds = shopEntity->fields.itemIds;
      if ( itemIds )
      {
        if ( !LODWORD(itemIds->max_length) )
          sub_2213CE4(this);
        if ( this )
        {
          this = (BuyStorageConfirmDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                         itemIds->m_Items[0],
                                                         (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( this )
            return (int32_t)this->fields.basePanelList;
        }
      }
    }
LABEL_24:
    sub_2213CDC(this, shopEntity);
  }
  if ( payType != 4 )
    return 0;
  return 7;
}


System_String_o *BuyStorageConfirmDialogComponent__GetCurrencyItemName(
        BuyStorageConfirmDialogComponent_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  int32_t payType; // w8
  __int64 *v5; // x8
  struct System_Int32_array *itemIds; // x8

  if ( (byte_596C643 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_12883/*"STONE_FRAGMENTS_NEED_INFO"*/);
    sub_2213A60(&StringLiteral_2034/*"ANONYMOUS_NEED_INFO"*/);
    sub_2213A60(&StringLiteral_11436/*"RARE_PRI_NEED_INFO"*/);
    sub_2213A60(&StringLiteral_8898/*"MANA_NEED_INFO"*/);
    this = (BuyStorageConfirmDialogComponent_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C643 = 1;
  }
  if ( !shopEntity )
    goto LABEL_31;
  payType = shopEntity->fields.payType;
  if ( payType > 8 )
  {
    if ( payType == 9 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity, method);
      v5 = &StringLiteral_2034/*"ANONYMOUS_NEED_INFO"*/;
      return LocalizationManager__Get((System_String_o *)*v5, 0);
    }
    if ( payType == 10 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity, method);
      v5 = &StringLiteral_11436/*"RARE_PRI_NEED_INFO"*/;
      return LocalizationManager__Get((System_String_o *)*v5, 0);
    }
    if ( payType != 11 )
      return (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_14;
  }
  if ( payType == 4 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity, method);
    v5 = &StringLiteral_8898/*"MANA_NEED_INFO"*/;
    return LocalizationManager__Get((System_String_o *)*v5, 0);
  }
  if ( payType == 6 )
  {
LABEL_14:
    this = (BuyStorageConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (BuyStorageConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
      itemIds = shopEntity->fields.itemIds;
      if ( itemIds )
      {
        if ( !LODWORD(itemIds->max_length) )
          sub_2213CE4(this);
        if ( this )
        {
          this = (BuyStorageConfirmDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                         itemIds->m_Items[0],
                                                         (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( this )
            return (System_String_o *)this->fields.m_CancellationTokenSource;
        }
      }
    }
LABEL_31:
    sub_2213CDC(this, shopEntity);
  }
  if ( payType != 8 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity, method);
  v5 = &StringLiteral_12883/*"STONE_FRAGMENTS_NEED_INFO"*/;
  return LocalizationManager__Get((System_String_o *)*v5, 0);
}


System_String_o *BuyStorageConfirmDialogComponent__GetItemNumText(
        BuyStorageConfirmDialogComponent_o *this,
        ShopEntity_o *shopEntity,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  unsigned int payType; // w8
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x20
  struct System_Int32_array *itemIds; // x8
  int32_t mana; // w19
  LocalizationManager_c *v11; // x0

  if ( (byte_596C645 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (BuyStorageConfirmDialogComponent_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C645 = 1;
  }
  if ( !shopEntity )
LABEL_29:
    sub_2213CDC(this, shopEntity);
  payType = shopEntity->fields.payType;
  if ( payType > 0xB )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( ((1 << payType) & 0xB40) == 0 )
  {
    if ( payType == 4 )
    {
      if ( !userGameEntity )
        goto LABEL_29;
      v11 = LocalizationManager_TypeInfo;
      mana = userGameEntity->fields.mana;
LABEL_26:
      if ( !*(&v11->_2.cctor_finished + 1) )
        goto LABEL_27;
      return LocalizationManager__GetNumberFormat(mana, 0);
    }
    if ( payType == 10 )
    {
      if ( !userGameEntity )
        goto LABEL_29;
      v11 = LocalizationManager_TypeInfo;
      mana = userGameEntity->fields.rarePri;
      goto LABEL_26;
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  this = (BuyStorageConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, shopEntity, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  this = (BuyStorageConfirmDialogComponent_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, shopEntity, v7);
    this = (BuyStorageConfirmDialogComponent_o *)NetworkManager_TypeInfo;
  }
  itemIds = shopEntity->fields.itemIds;
  if ( !itemIds )
    goto LABEL_29;
  if ( !LODWORD(itemIds->max_length) )
    sub_2213CE4(this);
  if ( !MasterData_object )
    goto LABEL_29;
  this = (BuyStorageConfirmDialogComponent_o *)UserItemMaster__GetEntityDefinitely(
                                                 (UserItemMaster_o *)MasterData_object,
                                                 *(_QWORD *)&this->fields.closeBtnLabel->fields.updateAnchors,
                                                 itemIds->m_Items[0],
                                                 0);
  if ( !this )
    goto LABEL_29;
  mana = HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    v11 = LocalizationManager_TypeInfo;
LABEL_27:
    j_il2cpp_runtime_class_init_0(v11, shopEntity, userGameEntity);
  }
  return LocalizationManager__GetNumberFormat(mana, 0);
}


int32_t BuyStorageConfirmDialogComponent__GetKindByShopState(int32_t state, const MethodInfo *method)
{
  return state == 12;
}


void BuyStorageConfirmDialogComponent__Init(BuyStorageConfirmDialogComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_596C641 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C641 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.nowNumLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.afterNumLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.nowNumTextLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.afterNumTextLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.resultAfterNumLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.resultAfterNumTextLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.decideBtnLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.cancelBtnLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.closeBtnLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.itemNum;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = (UILabel_o *)this->fields.itemImage;
  if ( !titleLabel
    || (UISprite__set_spriteName((UISprite_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        titleLabel = (UILabel_o *)this->fields.confirmInfo,
        this->fields.state = 0,
        !titleLabel)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0),
        (titleLabel = (UILabel_o *)this->fields.resultInfo) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0),
        (titleLabel = (UILabel_o *)this->fields.notification) == 0) )
  {
LABEL_20:
    sub_2213CDC(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  this->fields.buyCount = 1;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BuyStorageConfirmDialogComponent__NotificationDialogOpen(
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
      sub_2213CDC(this, *(_QWORD *)&kind);
    BuyStorageConfirmDialogComponent__Open_41756360(
      this,
      kind,
      2,
      notificationType,
      item->fields._Shop_k__BackingField,
      onMenuSelect,
      v6);
  }
}


void BuyStorageConfirmDialogComponent__OnClickCancel(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596C64A & 1) == 0 )
  {
    sub_2213A60(&Method_BuyStorageConfirmDialogComponent_OnClickCancel__);
    byte_596C64A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_BuyStorageConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_BuyStorageConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_BuyStorageConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    BuyStorageConfirmDialogComponent__CallOnMenuSelect(this, 0, v5);
  }
}


void BuyStorageConfirmDialogComponent__OnClickClose(BuyStorageConfirmDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596C64B & 1) == 0 )
  {
    sub_2213A60(&Method_BuyStorageConfirmDialogComponent_OnClickClose__);
    byte_596C64B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_BuyStorageConfirmDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_BuyStorageConfirmDialogComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_BuyStorageConfirmDialogComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    BuyStorageConfirmDialogComponent__CallOnMenuSelect(this, 0, v5);
  }
}


void BuyStorageConfirmDialogComponent__OnClickDecide(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596C649 & 1) == 0 )
  {
    sub_2213A60(&Method_BuyStorageConfirmDialogComponent_OnClickDecide__);
    byte_596C649 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_BuyStorageConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_BuyStorageConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_BuyStorageConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.decideSe, 0, 0);
    BuyStorageConfirmDialogComponent__CallOnMenuSelect(this, this->fields.buyCount, v5);
  }
}


void BuyStorageConfirmDialogComponent__OnEnable(BuyStorageConfirmDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0
  UnityEngine_Transform_o *v5; // x0

  if ( (byte_596C64C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4833/*"ConfirmWindow/ResultInfo/CloseButton"*/);
    sub_2213A60(&StringLiteral_4832/*"ConfirmWindow/Notification/CloseButton"*/);
    sub_2213A60(&StringLiteral_4831/*"ConfirmWindow/ConfirmInfo/CancelButton"*/);
    byte_596C64C = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_4831/*"ConfirmWindow/ConfirmInfo/CancelButton"*/, 0);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(v4, (System_String_o *)StringLiteral_4833/*"ConfirmWindow/ResultInfo/CloseButton"*/, 0);
  v5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(v5, (System_String_o *)StringLiteral_4832/*"ConfirmWindow/Notification/CloseButton"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void BuyStorageConfirmDialogComponent__Open(
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
      sub_2213CDC(this, *(_QWORD *)&kind);
    BuyStorageConfirmDialogComponent__Open_41756360(
      this,
      kind,
      0,
      0,
      item->fields._Shop_k__BackingField,
      onMenuSelect,
      v6);
  }
}


void BuyStorageConfirmDialogComponent__Open_41756360(
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
  __int64 v16; // x1
  __int64 v17; // x2
  int32_t CurrencyImageId; // w25
  UserGameEntity_o *SelfUserGame; // x0
  UILabel_o *itemNum; // x25
  UserGameEntity_o *v21; // x24
  const MethodInfo *v22; // x3
  System_String_o *ItemNumText; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x6
  System_Action_c *v26; // x0
  System_Action_o *v27; // x20

  if ( (byte_596C642 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_BuyStorageConfirmDialogComponent_EndOpen__);
    byte_596C642 = 1;
  }
  BuyStorageConfirmDialogComponent__SetObjectsOnInit(this, kind, type, onMenuSelect, (const MethodInfo *)shopEntity);
  itemImage = this->fields.itemImage;
  CurrencyImageId = BuyStorageConfirmDialogComponent__GetCurrencyImageId(v14, shopEntity, v15);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16, v17);
  AtlasManager__SetItem(itemImage, CurrencyImageId, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  itemNum = this->fields.itemNum;
  v21 = SelfUserGame;
  ItemNumText = BuyStorageConfirmDialogComponent__GetItemNumText(
                  (BuyStorageConfirmDialogComponent_o *)SelfUserGame,
                  shopEntity,
                  SelfUserGame,
                  v22);
  if ( !itemNum )
    sub_2213CDC(ItemNumText, v24);
  UILabel__set_text(itemNum, ItemNumText, 0);
  BuyStorageConfirmDialogComponent__SetMessageLabels(this, kind, type, notificationType, shopEntity, v21, v25);
  v26 = System_Action_TypeInfo;
  this->fields.state = 1;
  v27 = (System_Action_o *)sub_2213CCC(v26);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_BuyStorageConfirmDialogComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void BuyStorageConfirmDialogComponent__ResultOpenDialog(
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
      sub_2213CDC(this, *(_QWORD *)&kind);
    BuyStorageConfirmDialogComponent__Open_41756360(
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
void BuyStorageConfirmDialogComponent__SetMessageLabels(
        BuyStorageConfirmDialogComponent_o *this,
        int32_t kind,
        int32_t type,
        int32_t notificationType,
        ShopEntity_o *shopEntity,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  BuyStorageConfirmDialogComponent_o *v12; // x19
  BuyStorageConfirmDialogComponent_o *CurrencyItemName; // x23
  const MethodInfo *v14; // x6
  System_String_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  int32_t v18; // w20
  int32_t setNum; // w27
  int32_t buyCount; // w28
  UILabel_o *titleLabel; // x26
  __int64 *v22; // x8
  int32_t v23; // w22
  UILabel_o *messageLabel; // x24
  __int64 *v25; // x8
  int32_t v26; // w8
  UILabel_o *v27; // x21
  __int64 *v28; // x8
  UILabel_o *notificationMessage; // x20
  __int64 *v30; // x8
  System_String_o *v31; // x25
  int32_t Price; // w0
  Il2CppObject *NumberFormat; // x21
  Il2CppObject *v34; // x0
  UILabel_o *nowNumLabel; // x21
  System_String_o *v36; // x23
  Il2CppObject *v37; // x0
  UILabel_o *afterNumLabel; // x20
  System_String_o *v39; // x21
  Il2CppObject *v40; // x0
  UILabel_o *nowNumTextLabel; // x20
  UILabel_o *afterNumTextLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  __int64 *v44; // x8
  UILabel_o *cancelBtnLabel; // x19
  System_String_o *v46; // x22
  Il2CppObject *v47; // x0
  UILabel_o *resultAfterNumLabel; // x21
  System_String_o *v49; // x22
  Il2CppObject *v50; // x0
  UILabel_o *resultAfterNumTextLabel; // x20
  UILabel_o *closeBtnLabel; // x19
  int32_t v53; // [xsp+8h] [xbp-68h] BYREF
  int32_t v54; // [xsp+Ch] [xbp-64h] BYREF
  int32_t max[2]; // [xsp+18h] [xbp-58h] BYREF

  v12 = this;
  if ( (byte_596C646 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12140/*"SERVANT_EQUIP_STORAGE_PURCHASE_RESULT"*/);
    sub_2213A60(&StringLiteral_12925/*"STORAGE_SHOP_NOTIFICATION"*/);
    sub_2213A60(&StringLiteral_12141/*"SERVANT_EQUIP_STORAGE_PURCHASE_TITLE"*/);
    sub_2213A60(&StringLiteral_12519/*"SERVANT_STORAGE_PURCHASE_RESULT"*/);
    sub_2213A60(&StringLiteral_12148/*"SERVANT_FRAME_PURCHASE_INFO1"*/);
    sub_2213A60(&StringLiteral_12926/*"STORAGE_SHOP_SOLD_OUT"*/);
    sub_2213A60(&StringLiteral_12149/*"SERVANT_FRAME_PURCHASE_INFO2"*/);
    sub_2213A60(&StringLiteral_12145/*"SERVANT_FRAME_PURCHASE_CANCEL"*/);
    sub_2213A60(&StringLiteral_12520/*"SERVANT_STORAGE_PURCHASE_TITLE"*/);
    sub_2213A60(&StringLiteral_12517/*"SERVANT_STORAGE_PURCHASE_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12146/*"SERVANT_FRAME_PURCHASE_CLOSE"*/);
    sub_2213A60(&StringLiteral_12147/*"SERVANT_FRAME_PURCHASE_DECIDE"*/);
    sub_2213A60(&StringLiteral_12139/*"SERVANT_EQUIP_STORAGE_PURCHASE_MESSAGE"*/);
    this = (BuyStorageConfirmDialogComponent_o *)sub_2213A60(&StringLiteral_12518/*"SERVANT_STORAGE_PURCHASE_NUM"*/);
    byte_596C646 = 1;
  }
  *(_QWORD *)max = 0;
  CurrencyItemName = (BuyStorageConfirmDialogComponent_o *)BuyStorageConfirmDialogComponent__GetCurrencyItemName(
                                                             this,
                                                             shopEntity,
                                                             *(const MethodInfo **)&type);
  BuyStorageConfirmDialogComponent__SetStorageNum(CurrencyItemName, kind, shopEntity, userGameEntity, &max[1], max, v14);
  if ( !shopEntity )
    goto LABEL_67;
  v18 = max[1];
  setNum = shopEntity->fields.setNum;
  buyCount = v12->fields.buyCount;
  if ( kind )
  {
    if ( kind != 1 )
      goto LABEL_14;
    titleLabel = v12->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
    v22 = &StringLiteral_12141/*"SERVANT_EQUIP_STORAGE_PURCHASE_TITLE"*/;
  }
  else
  {
    titleLabel = v12->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
    v22 = &StringLiteral_12520/*"SERVANT_STORAGE_PURCHASE_TITLE"*/;
  }
  v15 = LocalizationManager__Get((System_String_o *)*v22, 0);
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, v15, 0);
LABEL_14:
  if ( type == 2 )
  {
    if ( notificationType == 2 )
    {
      notificationMessage = v12->fields.notificationMessage;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
      v30 = &StringLiteral_12925/*"STORAGE_SHOP_NOTIFICATION"*/;
    }
    else
    {
      if ( notificationType != 1 )
      {
LABEL_63:
        closeBtnLabel = v12->fields.closeBtnLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12146/*"SERVANT_FRAME_PURCHASE_CLOSE"*/, 0);
        if ( closeBtnLabel )
        {
          UILabel__set_text(closeBtnLabel, v15, 0);
          return;
        }
        goto LABEL_67;
      }
      notificationMessage = v12->fields.notificationMessage;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
      v30 = &StringLiteral_12926/*"STORAGE_SHOP_SOLD_OUT"*/;
    }
    v15 = LocalizationManager__Get((System_String_o *)*v30, 0);
    if ( !notificationMessage )
      goto LABEL_67;
    UILabel__set_text(notificationMessage, v15, 0);
    goto LABEL_63;
  }
  if ( type != 1 )
  {
    if ( type )
      return;
    v23 = v18 + buyCount * setNum;
    if ( kind )
    {
      if ( kind != 1 )
      {
LABEL_39:
        nowNumTextLabel = v12->fields.nowNumTextLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12148/*"SERVANT_FRAME_PURCHASE_INFO1"*/, 0);
        if ( nowNumTextLabel )
        {
          UILabel__set_text(nowNumTextLabel, v15, 0);
          afterNumTextLabel = v12->fields.afterNumTextLabel;
          v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12149/*"SERVANT_FRAME_PURCHASE_INFO2"*/, 0);
          if ( afterNumTextLabel )
          {
            UILabel__set_text(afterNumTextLabel, v15, 0);
            decideBtnLabel = v12->fields.decideBtnLabel;
            v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12147/*"SERVANT_FRAME_PURCHASE_DECIDE"*/, 0);
            if ( decideBtnLabel )
            {
              UILabel__set_text(decideBtnLabel, v15, 0);
              v44 = &StringLiteral_12145/*"SERVANT_FRAME_PURCHASE_CANCEL"*/;
              cancelBtnLabel = v12->fields.cancelBtnLabel;
              goto LABEL_55;
            }
          }
        }
LABEL_67:
        sub_2213CDC(v15, v16);
      }
      messageLabel = v12->fields.messageLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
      v25 = &StringLiteral_12139/*"SERVANT_EQUIP_STORAGE_PURCHASE_MESSAGE"*/;
    }
    else
    {
      messageLabel = v12->fields.messageLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
      v25 = &StringLiteral_12517/*"SERVANT_STORAGE_PURCHASE_MESSAGE"*/;
    }
    v31 = LocalizationManager__Get((System_String_o *)*v25, 0);
    Price = ShopEntity__GetPrice(shopEntity, 0);
    NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v12->fields.buyCount * Price, 0);
    v54 = max[0];
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v54);
    v15 = System_String__Format_75697948(v31, (Il2CppObject *)CurrencyItemName, NumberFormat, v34, 0);
    if ( !messageLabel )
      goto LABEL_67;
    UILabel__set_text(messageLabel, v15, 0);
    nowNumLabel = v12->fields.nowNumLabel;
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12518/*"SERVANT_STORAGE_PURCHASE_NUM"*/, 0);
    v37 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v18, 0);
    v15 = System_String__Format(v36, v37, 0);
    if ( !nowNumLabel )
      goto LABEL_67;
    UILabel__set_text(nowNumLabel, v15, 0);
    afterNumLabel = v12->fields.afterNumLabel;
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_12518/*"SERVANT_STORAGE_PURCHASE_NUM"*/, 0);
    v40 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v23, 0);
    v15 = System_String__Format(v39, v40, 0);
    if ( !afterNumLabel )
      goto LABEL_67;
    UILabel__set_text(afterNumLabel, v15, 0);
    goto LABEL_39;
  }
  v26 = v12->fields.kind;
  if ( v26 == 1 )
  {
    v27 = v12->fields.messageLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
    v28 = &StringLiteral_12140/*"SERVANT_EQUIP_STORAGE_PURCHASE_RESULT"*/;
  }
  else
  {
    if ( v26 )
      goto LABEL_51;
    v27 = v12->fields.messageLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
    v28 = &StringLiteral_12519/*"SERVANT_STORAGE_PURCHASE_RESULT"*/;
  }
  v46 = LocalizationManager__Get((System_String_o *)*v28, 0);
  v54 = max[0];
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v54);
  v15 = System_String__Format(v46, v47, 0);
  if ( !v27 )
    goto LABEL_67;
  UILabel__set_text(v27, v15, 0);
  resultAfterNumLabel = v12->fields.resultAfterNumLabel;
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_12518/*"SERVANT_STORAGE_PURCHASE_NUM"*/, 0);
  v53 = v18;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v53);
  v15 = System_String__Format(v49, v50, 0);
  if ( !resultAfterNumLabel )
    goto LABEL_67;
  UILabel__set_text(resultAfterNumLabel, v15, 0);
LABEL_51:
  resultAfterNumTextLabel = v12->fields.resultAfterNumTextLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12148/*"SERVANT_FRAME_PURCHASE_INFO1"*/, 0);
  if ( !resultAfterNumTextLabel )
    goto LABEL_67;
  UILabel__set_text(resultAfterNumTextLabel, v15, 0);
  v44 = &StringLiteral_12146/*"SERVANT_FRAME_PURCHASE_CLOSE"*/;
  cancelBtnLabel = v12->fields.closeBtnLabel;
LABEL_55:
  v15 = LocalizationManager__Get((System_String_o *)*v44, 0);
  if ( !cancelBtnLabel )
    goto LABEL_67;
  UILabel__set_text(cancelBtnLabel, v15, 0);
}


// local variable allocation has failed, the output may be wrong!
void BuyStorageConfirmDialogComponent__SetObjectsOnInit(
        BuyStorageConfirmDialogComponent_o *this,
        int32_t kind,
        int32_t type,
        System_Action_int__o *onMenuSelect,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1

  this->fields.kind = kind;
  this->fields.onMenuSelect = onMenuSelect;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onMenuSelect,
    (int32_t)onMenuSelect,
    *(System_String_o **)&type,
    (System_String_o *)onMenuSelect,
    (int32_t)method,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.confirmInfo;
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, type == 0, 0);
  gameObject = this->fields.resultInfo;
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, type == 1, 0);
  gameObject = this->fields.notification;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, type == 2, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.notificationMessage) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0
    || (UnityEngine_GameObject__SetActive(gameObject, type == 2, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
LABEL_10:
    sub_2213CDC(gameObject, v11);
  }
  UnityEngine_GameObject__SetActive(gameObject, type != 2, 0);
  this->fields.decideSe = 8 * (type == 0);
}


// local variable allocation has failed, the output may be wrong!
void BuyStorageConfirmDialogComponent__SetStorageNum(
        BuyStorageConfirmDialogComponent_o *this,
        int32_t kind,
        ShopEntity_o *shopEntity,
        UserGameEntity_o *userGameEntity,
        int32_t *now,
        int32_t *max,
        const MethodInfo *method)
{
  BalanceConfig_c *v12; // x0
  struct BalanceConfig_StaticFields *v13; // x8
  int32_t setNum; // w9
  int32_t limitNum; // w10
  int32_t UserServantEquipStorageMax; // w8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t v18; // w8

  if ( (byte_596C647 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596C647 = 1;
  }
  if ( kind == 1 )
  {
    v12 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&kind, shopEntity);
    if ( userGameEntity )
    {
      static_fields = BalanceConfig_TypeInfo->static_fields;
      *now = userGameEntity->fields.svtEquipStorageAdjust + static_fields->UserServantEquipStorageMax;
      if ( shopEntity )
      {
        setNum = shopEntity->fields.setNum;
        limitNum = shopEntity->fields.limitNum;
        UserServantEquipStorageMax = static_fields->UserServantEquipStorageMax;
        goto LABEL_15;
      }
    }
LABEL_18:
    sub_2213CDC(v12, *(_QWORD *)&kind);
  }
  if ( kind )
  {
    v18 = 0;
    *now = 0;
    goto LABEL_17;
  }
  v12 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&kind, shopEntity);
  if ( !userGameEntity )
    goto LABEL_18;
  v13 = BalanceConfig_TypeInfo->static_fields;
  *now = userGameEntity->fields.svtStorageAdjust + v13->UserServantStorageMax;
  if ( !shopEntity )
    goto LABEL_18;
  setNum = shopEntity->fields.setNum;
  limitNum = shopEntity->fields.limitNum;
  UserServantEquipStorageMax = v13->UserServantStorageMax;
LABEL_15:
  v18 = UserServantEquipStorageMax + limitNum * setNum;
LABEL_17:
  *max = v18;
}