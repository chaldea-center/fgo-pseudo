void BuyStorageConfirmDialogComponent___ctor(BuyStorageConfirmDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C33A42 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C33A42 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void BuyStorageConfirmDialogComponent__CallOnClose(BuyStorageConfirmDialogComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Action_o *onClose; // x19
  CGThumbnailListItem_o *p_onClose; // x0

  onClose = this->fields.onClose;
  if ( onClose )
  {
    p_onClose = (CGThumbnailListItem_o *)&this->fields.onClose;
    p_onClose->klass = 0;
    sub_1C32BC4(p_onClose, 0, v2, v3);
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
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_onMenuSelect; // x0
  struct System_Action_int__o *v5; // x20
  struct System_Action_int__o *onMenuSelect; // t1

  onMenuSelect = this->fields.onMenuSelect;
  p_onMenuSelect = (CGThumbnailListItem_o *)&this->fields.onMenuSelect;
  v5 = onMenuSelect;
  if ( onMenuSelect )
  {
    p_onMenuSelect->klass = 0;
    sub_1C32BC4(p_onMenuSelect, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      (unsigned int)buyCount,
      v5->fields.method);
  }
}


void BuyStorageConfirmDialogComponent__Close(BuyStorageConfirmDialogComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BuyStorageConfirmDialogComponent__Close_34913168(this, 0, v2);
}


void BuyStorageConfirmDialogComponent__Close_34913168(
        BuyStorageConfirmDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C33A3D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_BuyStorageConfirmDialogComponent_EndClose__);
    byte_4C33A3D = 1;
  }
  this->fields.onClose = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onClose, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BuyStorageConfirmDialogComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
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
  int32_t result; // w0
  struct System_Int32_array *itemIds; // x8

  if ( (byte_4C33A39 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    this = (BuyStorageConfirmDialogComponent_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C33A39 = 1;
  }
  if ( !shopEntity )
LABEL_16:
    sub_1C32E7C(this);
  result = 18;
  switch ( shopEntity->fields.payType )
  {
    case 4:
      return 7;
    case 6:
    case 0xB:
      this = (BuyStorageConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_16;
      this = (BuyStorageConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
      itemIds = shopEntity->fields.itemIds;
      if ( !itemIds )
        goto LABEL_16;
      if ( !LODWORD(itemIds->max_length) )
        sub_1C32E84(this);
      if ( !this )
        goto LABEL_16;
      this = (BuyStorageConfirmDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     itemIds->m_Items[0],
                                                     (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_16;
      return (int32_t)this->fields.basePanelList;
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


System_String_o *BuyStorageConfirmDialogComponent__GetCurrencyItemName(
        BuyStorageConfirmDialogComponent_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8
  System_String_o *result; // x0
  __int64 *v6; // x8

  if ( (byte_4C33A38 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_12361/*"STONE_FRAGMENTS_NEED_INFO"*/);
    sub_1C32C20(&StringLiteral_1950/*"ANONYMOUS_NEED_INFO"*/);
    sub_1C32C20(&StringLiteral_10958/*"RARE_PRI_NEED_INFO"*/);
    sub_1C32C20(&StringLiteral_8535/*"MANA_NEED_INFO"*/);
    this = (BuyStorageConfirmDialogComponent_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C33A38 = 1;
  }
  if ( !shopEntity )
LABEL_25:
    sub_1C32E7C(this);
  switch ( shopEntity->fields.payType )
  {
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_8535/*"MANA_NEED_INFO"*/;
      goto LABEL_24;
    case 6:
    case 0xB:
      this = (BuyStorageConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_25;
      this = (BuyStorageConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
      itemIds = shopEntity->fields.itemIds;
      if ( !itemIds )
        goto LABEL_25;
      if ( !LODWORD(itemIds->max_length) )
        sub_1C32E84(this);
      if ( !this )
        goto LABEL_25;
      this = (BuyStorageConfirmDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     itemIds->m_Items[0],
                                                     (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_25;
      result = (System_String_o *)this->fields.m_CancellationTokenSource;
      break;
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_12361/*"STONE_FRAGMENTS_NEED_INFO"*/;
      goto LABEL_24;
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_1950/*"ANONYMOUS_NEED_INFO"*/;
      goto LABEL_24;
    case 0xA:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_10958/*"RARE_PRI_NEED_INFO"*/;
LABEL_24:
      result = LocalizationManager__Get((System_String_o *)*v6, 0);
      break;
    default:
      result = (System_String_o *)StringLiteral_1/*""*/;
      break;
  }
  return result;
}


System_String_o *BuyStorageConfirmDialogComponent__GetItemNumText(
        BuyStorageConfirmDialogComponent_o *this,
        ShopEntity_o *shopEntity,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  unsigned int payType; // w8
  Il2CppObject *MasterData_object; // x20
  struct System_Int32_array *itemIds; // x8
  int32_t m_CancellationTokenSource_high; // w19
  LocalizationManager_c *v10; // x0

  if ( (byte_4C33A3A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (BuyStorageConfirmDialogComponent_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C33A3A = 1;
  }
  if ( !shopEntity )
    goto LABEL_29;
  payType = shopEntity->fields.payType;
  if ( payType <= 0xB )
  {
    if ( ((1 << payType) & 0xB40) != 0 )
    {
      this = (BuyStorageConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C31812 )
        {
          sub_1C32C20(&NetworkManager_TypeInfo);
          byte_4C31812 = 1;
        }
        this = (BuyStorageConfirmDialogComponent_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (BuyStorageConfirmDialogComponent_o *)NetworkManager_TypeInfo;
        }
        itemIds = shopEntity->fields.itemIds;
        if ( itemIds )
        {
          if ( !LODWORD(itemIds->max_length) )
            sub_1C32E84(this);
          if ( MasterData_object )
          {
            this = (BuyStorageConfirmDialogComponent_o *)UserItemMaster__GetEntityDefinitely(
                                                           (UserItemMaster_o *)MasterData_object,
                                                           *(_QWORD *)&this->fields.closeBtnLabel->fields.updateAnchors,
                                                           itemIds->m_Items[0],
                                                           0);
            if ( this )
            {
              m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                v10 = LocalizationManager_TypeInfo;
LABEL_26:
                j_il2cpp_runtime_class_init_0(v10);
              }
              return LocalizationManager__GetNumberFormat(m_CancellationTokenSource_high, 0);
            }
          }
        }
      }
LABEL_29:
      sub_1C32E7C(this);
    }
    if ( payType == 4 )
    {
      if ( !userGameEntity )
        goto LABEL_29;
      v10 = LocalizationManager_TypeInfo;
      m_CancellationTokenSource_high = userGameEntity->fields.mana;
LABEL_25:
      if ( !v10->_2.cctor_finished )
        goto LABEL_26;
      return LocalizationManager__GetNumberFormat(m_CancellationTokenSource_high, 0);
    }
    if ( payType == 10 )
    {
      if ( !userGameEntity )
        goto LABEL_29;
      v10 = LocalizationManager_TypeInfo;
      m_CancellationTokenSource_high = userGameEntity->fields.rarePri;
      goto LABEL_25;
    }
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t BuyStorageConfirmDialogComponent__GetKindByShopState(int32_t state, const MethodInfo *method)
{
  return state == 12;
}


void BuyStorageConfirmDialogComponent__Init(BuyStorageConfirmDialogComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4C33A36 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C33A36 = 1;
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
    sub_1C32E7C(titleLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  this->fields.buyCount = 1;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


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
      sub_1C32E7C(this);
    BuyStorageConfirmDialogComponent__Open_34909480(
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

  if ( (byte_4C33A3F & 1) == 0 )
  {
    sub_1C32C20(&Method_BuyStorageConfirmDialogComponent_OnClickCancel__);
    byte_4C33A3F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_BuyStorageConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_BuyStorageConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_BuyStorageConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    BuyStorageConfirmDialogComponent__CallOnMenuSelect(this, 0, v5);
  }
}


void BuyStorageConfirmDialogComponent__OnClickClose(BuyStorageConfirmDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C33A40 & 1) == 0 )
  {
    sub_1C32C20(&Method_BuyStorageConfirmDialogComponent_OnClickClose__);
    byte_4C33A40 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_BuyStorageConfirmDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_BuyStorageConfirmDialogComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_BuyStorageConfirmDialogComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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

  if ( (byte_4C33A3E & 1) == 0 )
  {
    sub_1C32C20(&Method_BuyStorageConfirmDialogComponent_OnClickDecide__);
    byte_4C33A3E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_BuyStorageConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_BuyStorageConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_BuyStorageConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.decideSe, 0, 0);
    BuyStorageConfirmDialogComponent__CallOnMenuSelect(this, this->fields.buyCount, v5);
  }
}


void BuyStorageConfirmDialogComponent__OnEnable(BuyStorageConfirmDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0
  UnityEngine_Transform_o *v5; // x0

  if ( (byte_4C33A41 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_4655/*"ConfirmWindow/ResultInfo/CloseButton"*/);
    sub_1C32C20(&StringLiteral_4654/*"ConfirmWindow/Notification/CloseButton"*/);
    sub_1C32C20(&StringLiteral_4653/*"ConfirmWindow/ConfirmInfo/CancelButton"*/);
    byte_4C33A41 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44857896(transform, (System_String_o *)StringLiteral_4653/*"ConfirmWindow/ConfirmInfo/CancelButton"*/, 0);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44857896(v4, (System_String_o *)StringLiteral_4655/*"ConfirmWindow/ResultInfo/CloseButton"*/, 0);
  v5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44857896(v5, (System_String_o *)StringLiteral_4654/*"ConfirmWindow/Notification/CloseButton"*/, 0);
}


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
      sub_1C32E7C(this);
    BuyStorageConfirmDialogComponent__Open_34909480(
      this,
      kind,
      0,
      0,
      item->fields._Shop_k__BackingField,
      onMenuSelect,
      v6);
  }
}


void BuyStorageConfirmDialogComponent__Open_34909480(
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
  const MethodInfo *v22; // x6
  System_Action_o *v23; // x20

  if ( (byte_4C33A37 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_BuyStorageConfirmDialogComponent_EndOpen__);
    byte_4C33A37 = 1;
  }
  BuyStorageConfirmDialogComponent__SetObjectsOnInit(this, kind, type, onMenuSelect, (const MethodInfo *)shopEntity);
  itemImage = this->fields.itemImage;
  CurrencyImageId = BuyStorageConfirmDialogComponent__GetCurrencyImageId(v14, shopEntity, v15);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(itemImage, CurrencyImageId, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  itemNum = this->fields.itemNum;
  v19 = SelfUserGame;
  ItemNumText = BuyStorageConfirmDialogComponent__GetItemNumText(
                  (BuyStorageConfirmDialogComponent_o *)SelfUserGame,
                  shopEntity,
                  SelfUserGame,
                  v20);
  if ( !itemNum )
    sub_1C32E7C(ItemNumText);
  UILabel__set_text(itemNum, ItemNumText, 0);
  BuyStorageConfirmDialogComponent__SetMessageLabels(this, kind, type, notificationType, shopEntity, v19, v22);
  this->fields.state = 1;
  v23 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_BuyStorageConfirmDialogComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v23, 0, 0, 0);
}


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
      sub_1C32E7C(this);
    BuyStorageConfirmDialogComponent__Open_34909480(
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
  int32_t v16; // w20
  int32_t setNum; // w27
  int32_t buyCount; // w28
  UILabel_o *titleLabel; // x26
  __int64 *v20; // x8
  int32_t v21; // w22
  UILabel_o *messageLabel; // x24
  __int64 *v23; // x8
  UILabel_o *notificationMessage; // x20
  __int64 *v25; // x8
  int32_t v26; // w8
  UILabel_o *v27; // x21
  __int64 *v28; // x8
  System_String_o *v29; // x25
  int32_t Price; // w0
  Il2CppObject *NumberFormat; // x21
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  Il2CppObject *v38; // x0
  UILabel_o *nowNumLabel; // x21
  System_String_o *v40; // x23
  Il2CppObject *v41; // x0
  UILabel_o *afterNumLabel; // x20
  System_String_o *v43; // x21
  Il2CppObject *v44; // x0
  UILabel_o *nowNumTextLabel; // x20
  UILabel_o *afterNumTextLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  UILabel_o *closeBtnLabel; // x19
  __int64 *v49; // x8
  System_String_o *v50; // x22
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  __int64 v54; // x5
  __int64 v55; // x6
  __int64 v56; // x7
  Il2CppObject *v57; // x0
  UILabel_o *resultAfterNumLabel; // x21
  System_String_o *v59; // x22
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  __int64 v63; // x5
  __int64 v64; // x6
  __int64 v65; // x7
  Il2CppObject *v66; // x0
  UILabel_o *resultAfterNumTextLabel; // x20
  int32_t v68; // [xsp+8h] [xbp-68h] BYREF
  int32_t v69; // [xsp+Ch] [xbp-64h] BYREF
  int32_t max[2]; // [xsp+18h] [xbp-58h] BYREF

  v12 = this;
  if ( (byte_4C33A3B & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_11631/*"SERVANT_EQUIP_STORAGE_PURCHASE_RESULT"*/);
    sub_1C32C20(&StringLiteral_12399/*"STORAGE_SHOP_NOTIFICATION"*/);
    sub_1C32C20(&StringLiteral_11632/*"SERVANT_EQUIP_STORAGE_PURCHASE_TITLE"*/);
    sub_1C32C20(&StringLiteral_12003/*"SERVANT_STORAGE_PURCHASE_RESULT"*/);
    sub_1C32C20(&StringLiteral_11639/*"SERVANT_FRAME_PURCHASE_INFO1"*/);
    sub_1C32C20(&StringLiteral_12400/*"STORAGE_SHOP_SOLD_OUT"*/);
    sub_1C32C20(&StringLiteral_11640/*"SERVANT_FRAME_PURCHASE_INFO2"*/);
    sub_1C32C20(&StringLiteral_11636/*"SERVANT_FRAME_PURCHASE_CANCEL"*/);
    sub_1C32C20(&StringLiteral_12004/*"SERVANT_STORAGE_PURCHASE_TITLE"*/);
    sub_1C32C20(&StringLiteral_12001/*"SERVANT_STORAGE_PURCHASE_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_11637/*"SERVANT_FRAME_PURCHASE_CLOSE"*/);
    sub_1C32C20(&StringLiteral_11638/*"SERVANT_FRAME_PURCHASE_DECIDE"*/);
    sub_1C32C20(&StringLiteral_11630/*"SERVANT_EQUIP_STORAGE_PURCHASE_MESSAGE"*/);
    this = (BuyStorageConfirmDialogComponent_o *)sub_1C32C20(&StringLiteral_12002/*"SERVANT_STORAGE_PURCHASE_NUM"*/);
    byte_4C33A3B = 1;
  }
  *(_QWORD *)max = 0;
  CurrencyItemName = (BuyStorageConfirmDialogComponent_o *)BuyStorageConfirmDialogComponent__GetCurrencyItemName(
                                                             this,
                                                             shopEntity,
                                                             *(const MethodInfo **)&type);
  BuyStorageConfirmDialogComponent__SetStorageNum(CurrencyItemName, kind, shopEntity, userGameEntity, &max[1], max, v14);
  if ( !shopEntity )
    goto LABEL_66;
  v16 = max[1];
  setNum = shopEntity->fields.setNum;
  buyCount = v12->fields.buyCount;
  if ( kind )
  {
    if ( kind != 1 )
      goto LABEL_14;
    titleLabel = v12->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = &StringLiteral_11632/*"SERVANT_EQUIP_STORAGE_PURCHASE_TITLE"*/;
  }
  else
  {
    titleLabel = v12->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = &StringLiteral_12004/*"SERVANT_STORAGE_PURCHASE_TITLE"*/;
  }
  v15 = LocalizationManager__Get((System_String_o *)*v20, 0);
  if ( !titleLabel )
    goto LABEL_66;
  UILabel__set_text(titleLabel, v15, 0);
LABEL_14:
  if ( type == 2 )
  {
    if ( notificationType == 2 )
    {
      notificationMessage = v12->fields.notificationMessage;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = &StringLiteral_12399/*"STORAGE_SHOP_NOTIFICATION"*/;
    }
    else
    {
      if ( notificationType != 1 )
      {
LABEL_50:
        closeBtnLabel = v12->fields.closeBtnLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        goto LABEL_62;
      }
      notificationMessage = v12->fields.notificationMessage;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = &StringLiteral_12400/*"STORAGE_SHOP_SOLD_OUT"*/;
    }
    v15 = LocalizationManager__Get((System_String_o *)*v25, 0);
    if ( !notificationMessage )
      goto LABEL_66;
    UILabel__set_text(notificationMessage, v15, 0);
    goto LABEL_50;
  }
  if ( type != 1 )
  {
    if ( type )
      return;
    v21 = v16 + buyCount * setNum;
    if ( kind )
    {
      if ( kind != 1 )
      {
LABEL_39:
        nowNumTextLabel = v12->fields.nowNumTextLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11639/*"SERVANT_FRAME_PURCHASE_INFO1"*/, 0);
        if ( nowNumTextLabel )
        {
          UILabel__set_text(nowNumTextLabel, v15, 0);
          afterNumTextLabel = v12->fields.afterNumTextLabel;
          v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11640/*"SERVANT_FRAME_PURCHASE_INFO2"*/, 0);
          if ( afterNumTextLabel )
          {
            UILabel__set_text(afterNumTextLabel, v15, 0);
            decideBtnLabel = v12->fields.decideBtnLabel;
            v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11638/*"SERVANT_FRAME_PURCHASE_DECIDE"*/, 0);
            if ( decideBtnLabel )
            {
              UILabel__set_text(decideBtnLabel, v15, 0);
              closeBtnLabel = v12->fields.cancelBtnLabel;
              v49 = &StringLiteral_11636/*"SERVANT_FRAME_PURCHASE_CANCEL"*/;
              goto LABEL_63;
            }
          }
        }
LABEL_66:
        sub_1C32E7C(v15);
      }
      messageLabel = v12->fields.messageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v23 = &StringLiteral_11630/*"SERVANT_EQUIP_STORAGE_PURCHASE_MESSAGE"*/;
    }
    else
    {
      messageLabel = v12->fields.messageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v23 = &StringLiteral_12001/*"SERVANT_STORAGE_PURCHASE_MESSAGE"*/;
    }
    v29 = LocalizationManager__Get((System_String_o *)*v23, 0);
    Price = ShopEntity__GetPrice(shopEntity, 0);
    NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v12->fields.buyCount * Price, 0);
    v69 = max[0];
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69, v32, v33, v34, v35, v36, v37);
    v15 = System_String__Format_63559904(v29, (Il2CppObject *)CurrencyItemName, NumberFormat, v38, 0);
    if ( !messageLabel )
      goto LABEL_66;
    UILabel__set_text(messageLabel, v15, 0);
    nowNumLabel = v12->fields.nowNumLabel;
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12002/*"SERVANT_STORAGE_PURCHASE_NUM"*/, 0);
    v41 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v16, 0);
    v15 = System_String__Format(v40, v41, 0);
    if ( !nowNumLabel )
      goto LABEL_66;
    UILabel__set_text(nowNumLabel, v15, 0);
    afterNumLabel = v12->fields.afterNumLabel;
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12002/*"SERVANT_STORAGE_PURCHASE_NUM"*/, 0);
    v44 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v21, 0);
    v15 = System_String__Format(v43, v44, 0);
    if ( !afterNumLabel )
      goto LABEL_66;
    UILabel__set_text(afterNumLabel, v15, 0);
    goto LABEL_39;
  }
  v26 = v12->fields.kind;
  if ( v26 == 1 )
  {
    v27 = v12->fields.messageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = &StringLiteral_11631/*"SERVANT_EQUIP_STORAGE_PURCHASE_RESULT"*/;
    goto LABEL_55;
  }
  if ( !v26 )
  {
    v27 = v12->fields.messageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = &StringLiteral_12003/*"SERVANT_STORAGE_PURCHASE_RESULT"*/;
LABEL_55:
    v50 = LocalizationManager__Get((System_String_o *)*v28, 0);
    v69 = max[0];
    v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69, v51, v52, v53, v54, v55, v56);
    v15 = System_String__Format(v50, v57, 0);
    if ( !v27 )
      goto LABEL_66;
    UILabel__set_text(v27, v15, 0);
    resultAfterNumLabel = v12->fields.resultAfterNumLabel;
    v59 = LocalizationManager__Get((System_String_o *)StringLiteral_12002/*"SERVANT_STORAGE_PURCHASE_NUM"*/, 0);
    v68 = v16;
    v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v68, v60, v61, v62, v63, v64, v65);
    v15 = System_String__Format(v59, v66, 0);
    if ( !resultAfterNumLabel )
      goto LABEL_66;
    UILabel__set_text(resultAfterNumLabel, v15, 0);
  }
  resultAfterNumTextLabel = v12->fields.resultAfterNumTextLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11639/*"SERVANT_FRAME_PURCHASE_INFO1"*/, 0);
  if ( !resultAfterNumTextLabel )
    goto LABEL_66;
  UILabel__set_text(resultAfterNumTextLabel, v15, 0);
  closeBtnLabel = v12->fields.closeBtnLabel;
LABEL_62:
  v49 = &StringLiteral_11637/*"SERVANT_FRAME_PURCHASE_CLOSE"*/;
LABEL_63:
  v15 = LocalizationManager__Get((System_String_o *)*v49, 0);
  if ( !closeBtnLabel )
    goto LABEL_66;
  UILabel__set_text(closeBtnLabel, v15, 0);
}


void BuyStorageConfirmDialogComponent__SetObjectsOnInit(
        BuyStorageConfirmDialogComponent_o *this,
        int32_t kind,
        int32_t type,
        System_Action_int__o *onMenuSelect,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.kind = kind;
  this->fields.onMenuSelect = onMenuSelect;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.onMenuSelect,
    (int32_t)onMenuSelect,
    type,
    (const MethodInfo *)onMenuSelect);
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
    sub_1C32E7C(gameObject);
  }
  UnityEngine_GameObject__SetActive(gameObject, type != 2, 0);
  this->fields.decideSe = 8 * (type == 0);
}


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
  int32_t UserServantEquipStorageMax; // w8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t v16; // w8

  if ( (byte_4C33A3C & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    byte_4C33A3C = 1;
  }
  if ( kind == 1 )
  {
    v12 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v12 = BalanceConfig_TypeInfo;
    }
    if ( userGameEntity )
    {
      static_fields = v12->static_fields;
      *now = userGameEntity->fields.svtEquipStorageAdjust + static_fields->UserServantEquipStorageMax;
      if ( shopEntity )
      {
        UserServantEquipStorageMax = static_fields->UserServantEquipStorageMax;
        goto LABEL_15;
      }
    }
LABEL_18:
    sub_1C32E7C(v12);
  }
  if ( kind )
  {
    v16 = 0;
    *now = 0;
    goto LABEL_17;
  }
  v12 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  if ( !userGameEntity )
    goto LABEL_18;
  v13 = v12->static_fields;
  *now = userGameEntity->fields.svtStorageAdjust + v13->UserServantStorageMax;
  if ( !shopEntity )
    goto LABEL_18;
  UserServantEquipStorageMax = v13->UserServantStorageMax;
LABEL_15:
  v16 = UserServantEquipStorageMax + shopEntity->fields.limitNum * shopEntity->fields.setNum;
LABEL_17:
  *max = v16;
}