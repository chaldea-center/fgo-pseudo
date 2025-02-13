void __fastcall BuyStorageConfirmDialogComponent___ctor(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BD87F9 & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BD87F9 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall BuyStorageConfirmDialogComponent__CallOnClose(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_onClose; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *onClose; // t1

  onClose = this->fields.onClose;
  p_onClose = (PartyOrganizationUtility_o *)&this->fields.onClose;
  v9 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0LL;
    sub_1C21DDC(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall BuyStorageConfirmDialogComponent__CallOnMenuSelect(
        BuyStorageConfirmDialogComponent_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_onMenuSelect; // x0
  struct System_Action_int__o *v9; // x20
  struct System_Action_int__o *onMenuSelect; // t1

  onMenuSelect = this->fields.onMenuSelect;
  p_onMenuSelect = (PartyOrganizationUtility_o *)&this->fields.onMenuSelect;
  v9 = onMenuSelect;
  if ( onMenuSelect )
  {
    p_onMenuSelect->klass = 0LL;
    sub_1C21DDC(p_onMenuSelect, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      (unsigned int)buyCount,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall BuyStorageConfirmDialogComponent__Close(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BuyStorageConfirmDialogComponent__Close_33732812(this, 0LL, v2);
}


void __fastcall BuyStorageConfirmDialogComponent__Close_33732812(
        BuyStorageConfirmDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4BD87F4 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BuyStorageConfirmDialogComponent_EndClose__);
    byte_4BD87F4 = 1;
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

  if ( (byte_4BD87F0 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    this = (BuyStorageConfirmDialogComponent_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD87F0 = 1;
  }
  if ( !shopEntity )
LABEL_16:
    sub_1C22094(this, shopEntity);
  result = 18;
  switch ( shopEntity->fields.payType )
  {
    case 4:
      return 7;
    case 6:
    case 0xB:
      this = (BuyStorageConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_16;
      this = (BuyStorageConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
      itemIds = shopEntity->fields.itemIds;
      if ( !itemIds )
        goto LABEL_16;
      if ( !itemIds->max_length )
        sub_1C2209C(this, shopEntity);
      if ( !this )
        goto LABEL_16;
      this = (BuyStorageConfirmDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     itemIds->m_Items[1],
                                                     (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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


System_String_o *__fastcall BuyStorageConfirmDialogComponent__GetCurrencyItemName(
        BuyStorageConfirmDialogComponent_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8
  System_String_o *result; // x0
  __int64 *v6; // x8

  if ( (byte_4BD87EF & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_12508/*"STONE_FRAGMENTS_NEED_INFO"*/);
    sub_1C21E38(&StringLiteral_2080/*"ANONYMOUS_NEED_INFO"*/);
    sub_1C21E38(&StringLiteral_11164/*"RARE_PRI_NEED_INFO"*/);
    sub_1C21E38(&StringLiteral_8691/*"MANA_NEED_INFO"*/);
    this = (BuyStorageConfirmDialogComponent_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD87EF = 1;
  }
  if ( !shopEntity )
LABEL_25:
    sub_1C22094(this, shopEntity);
  switch ( shopEntity->fields.payType )
  {
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_8691/*"MANA_NEED_INFO"*/;
      goto LABEL_24;
    case 6:
    case 0xB:
      this = (BuyStorageConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_25;
      this = (BuyStorageConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
      itemIds = shopEntity->fields.itemIds;
      if ( !itemIds )
        goto LABEL_25;
      if ( !itemIds->max_length )
        sub_1C2209C(this, shopEntity);
      if ( !this )
        goto LABEL_25;
      this = (BuyStorageConfirmDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     itemIds->m_Items[1],
                                                     (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_25;
      result = (System_String_o *)this->fields.m_CancellationTokenSource;
      break;
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_12508/*"STONE_FRAGMENTS_NEED_INFO"*/;
      goto LABEL_24;
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_2080/*"ANONYMOUS_NEED_INFO"*/;
      goto LABEL_24;
    case 0xA:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_11164/*"RARE_PRI_NEED_INFO"*/;
LABEL_24:
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
  Il2CppObject *MasterData_object; // x20
  struct System_Int32_array *itemIds; // x8
  int32_t m_CancellationTokenSource_high; // w19
  LocalizationManager_c *v10; // x0

  if ( (byte_4BD87F1 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (BuyStorageConfirmDialogComponent_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD87F1 = 1;
  }
  if ( !shopEntity )
    goto LABEL_29;
  payType = shopEntity->fields.payType;
  if ( payType <= 0xB )
  {
    if ( ((1 << payType) & 0xB40) != 0 )
    {
      this = (BuyStorageConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
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
        this = (BuyStorageConfirmDialogComponent_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (BuyStorageConfirmDialogComponent_o *)NetworkManager_TypeInfo;
        }
        itemIds = shopEntity->fields.itemIds;
        if ( itemIds )
        {
          if ( !itemIds->max_length )
            sub_1C2209C(this, shopEntity);
          if ( MasterData_object )
          {
            this = (BuyStorageConfirmDialogComponent_o *)UserItemMaster__GetEntityDefinitely(
                                                           (UserItemMaster_o *)MasterData_object,
                                                           *(_QWORD *)&this->fields.itemImage->fields.updateAnchors,
                                                           itemIds->m_Items[1],
                                                           0LL);
            if ( this )
            {
              m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                v10 = LocalizationManager_TypeInfo;
LABEL_26:
                j_il2cpp_runtime_class_init_0(v10);
              }
              return LocalizationManager__GetNumberFormat(m_CancellationTokenSource_high, 0LL);
            }
          }
        }
      }
LABEL_29:
      sub_1C22094(this, shopEntity);
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
      return LocalizationManager__GetNumberFormat(m_CancellationTokenSource_high, 0LL);
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


int32_t __fastcall BuyStorageConfirmDialogComponent__GetKindByShopState(int32_t state, const MethodInfo *method)
{
  return state == 12;
}


void __fastcall BuyStorageConfirmDialogComponent__Init(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4BD87ED & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD87ED = 1;
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
    sub_1C22094(titleLabel, method);
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
      sub_1C22094(this, kind);
    BuyStorageConfirmDialogComponent__Open_33729128(
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BD87F6 & 1) == 0 )
  {
    sub_1C21E38(&Method_BuyStorageConfirmDialogComponent_OnClickCancel__);
    byte_4BD87F6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_BuyStorageConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_BuyStorageConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_BuyStorageConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    BuyStorageConfirmDialogComponent__CallOnMenuSelect(this, 0, v5);
  }
}


void __fastcall BuyStorageConfirmDialogComponent__OnClickClose(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BD87F7 & 1) == 0 )
  {
    sub_1C21E38(&Method_BuyStorageConfirmDialogComponent_OnClickClose__);
    byte_4BD87F7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_BuyStorageConfirmDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_BuyStorageConfirmDialogComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_BuyStorageConfirmDialogComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    BuyStorageConfirmDialogComponent__CallOnMenuSelect(this, 0, v5);
  }
}


void __fastcall BuyStorageConfirmDialogComponent__OnClickDecide(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BD87F5 & 1) == 0 )
  {
    sub_1C21E38(&Method_BuyStorageConfirmDialogComponent_OnClickDecide__);
    byte_4BD87F5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_BuyStorageConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_BuyStorageConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_BuyStorageConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.decideSe, 0, 0LL);
    BuyStorageConfirmDialogComponent__CallOnMenuSelect(this, this->fields.buyCount, v5);
  }
}


void __fastcall BuyStorageConfirmDialogComponent__OnEnable(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0
  UnityEngine_Transform_o *v5; // x0

  if ( (byte_4BD87F8 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4779/*"ConfirmWindow/ResultInfo/CloseButton"*/);
    sub_1C21E38(&StringLiteral_4778/*"ConfirmWindow/Notification/CloseButton"*/);
    sub_1C21E38(&StringLiteral_4777/*"ConfirmWindow/ConfirmInfo/CancelButton"*/);
    byte_4BD87F8 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43098604(transform, (System_String_o *)StringLiteral_4777/*"ConfirmWindow/ConfirmInfo/CancelButton"*/, 0LL);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43098604(v4, (System_String_o *)StringLiteral_4779/*"ConfirmWindow/ResultInfo/CloseButton"*/, 0LL);
  v5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43098604(v5, (System_String_o *)StringLiteral_4778/*"ConfirmWindow/Notification/CloseButton"*/, 0LL);
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
      sub_1C22094(this, kind);
    BuyStorageConfirmDialogComponent__Open_33729128(
      this,
      kind,
      0,
      0,
      item->fields._Shop_k__BackingField,
      onMenuSelect,
      v6);
  }
}


void __fastcall BuyStorageConfirmDialogComponent__Open_33729128(
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

  if ( (byte_4BD87EE & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_BuyStorageConfirmDialogComponent_EndOpen__);
    byte_4BD87EE = 1;
  }
  BuyStorageConfirmDialogComponent__SetObjectsOnInit(this, kind, type, onMenuSelect, (const MethodInfo *)shopEntity);
  itemImage = this->fields.itemImage;
  CurrencyImageId = BuyStorageConfirmDialogComponent__GetCurrencyImageId(v14, shopEntity, v15);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
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
    sub_1C22094(ItemNumText, v22);
  UILabel__set_text(itemNum, ItemNumText, 0LL);
  BuyStorageConfirmDialogComponent__SetMessageLabels(this, kind, type, notificationType, shopEntity, v19, v23);
  this->fields.state = 1;
  v24 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
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
      sub_1C22094(this, kind);
    BuyStorageConfirmDialogComponent__Open_33729128(
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
  BuyStorageConfirmDialogComponent_o *CurrencyItemName; // x23
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
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x0
  UILabel_o *nowNumLabel; // x21
  System_String_o *v38; // x23
  Il2CppObject *v39; // x0
  UILabel_o *afterNumLabel; // x20
  System_String_o *v41; // x21
  Il2CppObject *v42; // x0
  UILabel_o *nowNumTextLabel; // x20
  UILabel_o *afterNumTextLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  UILabel_o *closeBtnLabel; // x19
  __int64 *v47; // x8
  System_String_o *v48; // x22
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  Il2CppObject *v52; // x0
  UILabel_o *resultAfterNumLabel; // x21
  System_String_o *v54; // x22
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  Il2CppObject *v58; // x0
  UILabel_o *resultAfterNumTextLabel; // x20
  int32_t v60; // [xsp+8h] [xbp-68h] BYREF
  int32_t v61; // [xsp+Ch] [xbp-64h] BYREF
  int32_t max[2]; // [xsp+18h] [xbp-58h] BYREF

  v12 = this;
  if ( (byte_4BD87F2 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11817/*"SERVANT_EQUIP_STORAGE_PURCHASE_RESULT"*/);
    sub_1C21E38(&StringLiteral_12546/*"STORAGE_SHOP_NOTIFICATION"*/);
    sub_1C21E38(&StringLiteral_11818/*"SERVANT_EQUIP_STORAGE_PURCHASE_TITLE"*/);
    sub_1C21E38(&StringLiteral_12165/*"SERVANT_STORAGE_PURCHASE_RESULT"*/);
    sub_1C21E38(&StringLiteral_11825/*"SERVANT_FRAME_PURCHASE_INFO1"*/);
    sub_1C21E38(&StringLiteral_12547/*"STORAGE_SHOP_SOLD_OUT"*/);
    sub_1C21E38(&StringLiteral_11826/*"SERVANT_FRAME_PURCHASE_INFO2"*/);
    sub_1C21E38(&StringLiteral_11822/*"SERVANT_FRAME_PURCHASE_CANCEL"*/);
    sub_1C21E38(&StringLiteral_12166/*"SERVANT_STORAGE_PURCHASE_TITLE"*/);
    sub_1C21E38(&StringLiteral_12163/*"SERVANT_STORAGE_PURCHASE_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_11823/*"SERVANT_FRAME_PURCHASE_CLOSE"*/);
    sub_1C21E38(&StringLiteral_11824/*"SERVANT_FRAME_PURCHASE_DECIDE"*/);
    sub_1C21E38(&StringLiteral_11816/*"SERVANT_EQUIP_STORAGE_PURCHASE_MESSAGE"*/);
    this = (BuyStorageConfirmDialogComponent_o *)sub_1C21E38(&StringLiteral_12164/*"SERVANT_STORAGE_PURCHASE_NUM"*/);
    byte_4BD87F2 = 1;
  }
  *(_QWORD *)max = 0LL;
  CurrencyItemName = (BuyStorageConfirmDialogComponent_o *)BuyStorageConfirmDialogComponent__GetCurrencyItemName(
                                                             this,
                                                             shopEntity,
                                                             *(const MethodInfo **)&type);
  BuyStorageConfirmDialogComponent__SetStorageNum(CurrencyItemName, kind, shopEntity, userGameEntity, &max[1], max, v14);
  if ( !shopEntity )
    goto LABEL_66;
  v17 = max[1];
  setNum = shopEntity->fields.setNum;
  buyCount = v12->fields.buyCount;
  if ( kind )
  {
    if ( kind != 1 )
      goto LABEL_14;
    titleLabel = v12->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_11818/*"SERVANT_EQUIP_STORAGE_PURCHASE_TITLE"*/;
  }
  else
  {
    titleLabel = v12->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_12166/*"SERVANT_STORAGE_PURCHASE_TITLE"*/;
  }
  v15 = LocalizationManager__Get((System_String_o *)*v21, 0LL);
  if ( !titleLabel )
    goto LABEL_66;
  UILabel__set_text(titleLabel, v15, 0LL);
LABEL_14:
  if ( type == 2 )
  {
    if ( notificationType == 2 )
    {
      notificationMessage = v12->fields.notificationMessage;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = &StringLiteral_12546/*"STORAGE_SHOP_NOTIFICATION"*/;
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
      v26 = &StringLiteral_12547/*"STORAGE_SHOP_SOLD_OUT"*/;
    }
    v15 = LocalizationManager__Get((System_String_o *)*v26, 0LL);
    if ( !notificationMessage )
      goto LABEL_66;
    UILabel__set_text(notificationMessage, v15, 0LL);
    goto LABEL_50;
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
LABEL_39:
        nowNumTextLabel = v12->fields.nowNumTextLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11825/*"SERVANT_FRAME_PURCHASE_INFO1"*/, 0LL);
        if ( nowNumTextLabel )
        {
          UILabel__set_text(nowNumTextLabel, v15, 0LL);
          afterNumTextLabel = v12->fields.afterNumTextLabel;
          v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11826/*"SERVANT_FRAME_PURCHASE_INFO2"*/, 0LL);
          if ( afterNumTextLabel )
          {
            UILabel__set_text(afterNumTextLabel, v15, 0LL);
            decideBtnLabel = v12->fields.decideBtnLabel;
            v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11824/*"SERVANT_FRAME_PURCHASE_DECIDE"*/, 0LL);
            if ( decideBtnLabel )
            {
              UILabel__set_text(decideBtnLabel, v15, 0LL);
              closeBtnLabel = v12->fields.cancelBtnLabel;
              v47 = &StringLiteral_11822/*"SERVANT_FRAME_PURCHASE_CANCEL"*/;
              goto LABEL_63;
            }
          }
        }
LABEL_66:
        sub_1C22094(v15, v16);
      }
      messageLabel = v12->fields.messageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = &StringLiteral_11816/*"SERVANT_EQUIP_STORAGE_PURCHASE_MESSAGE"*/;
    }
    else
    {
      messageLabel = v12->fields.messageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = &StringLiteral_12163/*"SERVANT_STORAGE_PURCHASE_MESSAGE"*/;
    }
    v30 = LocalizationManager__Get((System_String_o *)*v24, 0LL);
    Price = ShopEntity__GetPrice(shopEntity, 0LL);
    NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v12->fields.buyCount * Price, 0LL);
    v61 = max[0];
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v33, v34, v35);
    v15 = System_String__Format_63129916(v30, (Il2CppObject *)CurrencyItemName, NumberFormat, v36, 0LL);
    if ( !messageLabel )
      goto LABEL_66;
    UILabel__set_text(messageLabel, v15, 0LL);
    nowNumLabel = v12->fields.nowNumLabel;
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12164/*"SERVANT_STORAGE_PURCHASE_NUM"*/, 0LL);
    v39 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v17, 0LL);
    v15 = System_String__Format(v38, v39, 0LL);
    if ( !nowNumLabel )
      goto LABEL_66;
    UILabel__set_text(nowNumLabel, v15, 0LL);
    afterNumLabel = v12->fields.afterNumLabel;
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12164/*"SERVANT_STORAGE_PURCHASE_NUM"*/, 0LL);
    v42 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v22, 0LL);
    v15 = System_String__Format(v41, v42, 0LL);
    if ( !afterNumLabel )
      goto LABEL_66;
    UILabel__set_text(afterNumLabel, v15, 0LL);
    goto LABEL_39;
  }
  v27 = v12->fields.kind;
  if ( v27 == 1 )
  {
    v28 = v12->fields.messageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = &StringLiteral_11817/*"SERVANT_EQUIP_STORAGE_PURCHASE_RESULT"*/;
    goto LABEL_55;
  }
  if ( !v27 )
  {
    v28 = v12->fields.messageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = &StringLiteral_12165/*"SERVANT_STORAGE_PURCHASE_RESULT"*/;
LABEL_55:
    v48 = LocalizationManager__Get((System_String_o *)*v29, 0LL);
    v61 = max[0];
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v49, v50, v51);
    v15 = System_String__Format(v48, v52, 0LL);
    if ( !v28 )
      goto LABEL_66;
    UILabel__set_text(v28, v15, 0LL);
    resultAfterNumLabel = v12->fields.resultAfterNumLabel;
    v54 = LocalizationManager__Get((System_String_o *)StringLiteral_12164/*"SERVANT_STORAGE_PURCHASE_NUM"*/, 0LL);
    v60 = v17;
    v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60, v55, v56, v57);
    v15 = System_String__Format(v54, v58, 0LL);
    if ( !resultAfterNumLabel )
      goto LABEL_66;
    UILabel__set_text(resultAfterNumLabel, v15, 0LL);
  }
  resultAfterNumTextLabel = v12->fields.resultAfterNumTextLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11825/*"SERVANT_FRAME_PURCHASE_INFO1"*/, 0LL);
  if ( !resultAfterNumTextLabel )
    goto LABEL_66;
  UILabel__set_text(resultAfterNumTextLabel, v15, 0LL);
  closeBtnLabel = v12->fields.closeBtnLabel;
LABEL_62:
  v47 = &StringLiteral_11823/*"SERVANT_FRAME_PURCHASE_CLOSE"*/;
LABEL_63:
  v15 = LocalizationManager__Get((System_String_o *)*v47, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_66;
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1

  this->fields.kind = kind;
  this->fields.onMenuSelect = onMenuSelect;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.onMenuSelect,
    (int64_t)onMenuSelect,
    *(int64_t *)&type,
    (int32_t)onMenuSelect,
    (System_String_o *)method,
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
    sub_1C22094(gameObject, v11);
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
  struct BalanceConfig_StaticFields *v13; // x8
  int32_t UserServantEquipStorageMax; // w8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t v16; // w8

  if ( (byte_4BD87F3 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD87F3 = 1;
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
    sub_1C22094(v12, *(_QWORD *)&kind);
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