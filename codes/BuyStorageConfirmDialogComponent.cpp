void __fastcall BuyStorageConfirmDialogComponent___ctor(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12548 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B12548 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
    sub_1BCA784(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_1BCA784(p_onMenuSelect, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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

  BuyStorageConfirmDialogComponent__Close_33290900(this, 0LL, v2);
}


void __fastcall BuyStorageConfirmDialogComponent__Close_33290900(
        BuyStorageConfirmDialogComponent_o *this,
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

  if ( (byte_4B12543 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_BuyStorageConfirmDialogComponent_EndClose__, v10, v11);
    byte_4B12543 = 1;
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t result; // w0
  struct System_Int32_array *itemIds; // x8

  if ( (byte_4B1253F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity, method);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4, v5);
    this = (BuyStorageConfirmDialogComponent_o *)sub_1BCA7E0(
                                                   &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                   v6,
                                                   v7);
    byte_4B1253F = 1;
  }
  if ( !shopEntity )
LABEL_16:
    sub_1BCAA3C(this, shopEntity);
  result = 18;
  switch ( shopEntity->fields.payType )
  {
    case 4:
      return 7;
    case 6:
    case 0xB:
      this = (BuyStorageConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_16;
      this = (BuyStorageConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
      itemIds = shopEntity->fields.itemIds;
      if ( !itemIds )
        goto LABEL_16;
      if ( !itemIds->max_length )
        sub_1BCAA44(this, shopEntity);
      if ( !this )
        goto LABEL_16;
      this = (BuyStorageConfirmDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     itemIds->m_Items[1],
                                                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  struct System_Int32_array *itemIds; // x8
  System_String_o *result; // x0
  __int64 *v22; // x8

  if ( (byte_4B1253E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity, method);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_12426/*"STONE_FRAGMENTS_NEED_INFO"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_2071/*"ANONYMOUS_NEED_INFO"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_11087/*"RARE_PRI_NEED_INFO"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_8633/*"MANA_NEED_INFO"*/, v16, v17);
    this = (BuyStorageConfirmDialogComponent_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v18, v19);
    byte_4B1253E = 1;
  }
  if ( !shopEntity )
LABEL_25:
    sub_1BCAA3C(this, shopEntity);
  switch ( shopEntity->fields.payType )
  {
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
      v22 = &StringLiteral_8633/*"MANA_NEED_INFO"*/;
      goto LABEL_24;
    case 6:
    case 0xB:
      this = (BuyStorageConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_25;
      this = (BuyStorageConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
      itemIds = shopEntity->fields.itemIds;
      if ( !itemIds )
        goto LABEL_25;
      if ( !itemIds->max_length )
        sub_1BCAA44(this, shopEntity);
      if ( !this )
        goto LABEL_25;
      this = (BuyStorageConfirmDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     itemIds->m_Items[1],
                                                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_25;
      result = (System_String_o *)this->fields.m_CancellationTokenSource;
      break;
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
      v22 = &StringLiteral_12426/*"STONE_FRAGMENTS_NEED_INFO"*/;
      goto LABEL_24;
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
      v22 = &StringLiteral_2071/*"ANONYMOUS_NEED_INFO"*/;
      goto LABEL_24;
    case 0xA:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, shopEntity);
      v22 = &StringLiteral_11087/*"RARE_PRI_NEED_INFO"*/;
LABEL_24:
      result = LocalizationManager__Get((System_String_o *)*v22, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  unsigned int payType; // w8
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x20
  struct System_Int32_array *itemIds; // x8
  int32_t m_CancellationTokenSource_high; // w19
  LocalizationManager_c *v19; // x0

  if ( (byte_4B12540 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, shopEntity, userGameEntity);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    this = (BuyStorageConfirmDialogComponent_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v12, v13);
    byte_4B12540 = 1;
  }
  if ( !shopEntity )
    goto LABEL_25;
  payType = shopEntity->fields.payType;
  if ( payType <= 0xB )
  {
    if ( ((1 << payType) & 0xB40) != 0 )
    {
      this = (BuyStorageConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
        this = (BuyStorageConfirmDialogComponent_o *)NetworkManager__get_UserId(0LL);
        itemIds = shopEntity->fields.itemIds;
        if ( itemIds )
        {
          if ( !itemIds->max_length )
            sub_1BCAA44(this, shopEntity);
          if ( MasterData_object )
          {
            this = (BuyStorageConfirmDialogComponent_o *)UserItemMaster__GetEntityDefinitely(
                                                           (UserItemMaster_o *)MasterData_object,
                                                           (int64_t)this,
                                                           itemIds->m_Items[1],
                                                           0LL);
            if ( this )
            {
              m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                v19 = LocalizationManager_TypeInfo;
LABEL_22:
                j_il2cpp_runtime_class_init_0(v19, shopEntity);
              }
              return LocalizationManager__GetNumberFormat(m_CancellationTokenSource_high, 0LL);
            }
          }
        }
      }
LABEL_25:
      sub_1BCAA3C(this, shopEntity);
    }
    if ( payType == 4 )
    {
      if ( !userGameEntity )
        goto LABEL_25;
      v19 = LocalizationManager_TypeInfo;
      m_CancellationTokenSource_high = userGameEntity->fields.mana;
LABEL_21:
      if ( !v19->_2.cctor_finished )
        goto LABEL_22;
      return LocalizationManager__GetNumberFormat(m_CancellationTokenSource_high, 0LL);
    }
    if ( payType == 10 )
    {
      if ( !userGameEntity )
        goto LABEL_25;
      v19 = LocalizationManager_TypeInfo;
      m_CancellationTokenSource_high = userGameEntity->fields.rarePri;
      goto LABEL_21;
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
  __int64 v2; // x2
  UILabel_o *titleLabel; // x0

  if ( (byte_4B1253C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B1253C = 1;
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
    sub_1BCAA3C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.buyCount = 1;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1BCAA3C(this, *(_QWORD *)&kind);
    BuyStorageConfirmDialogComponent__Open_33287276(
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B12545 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BuyStorageConfirmDialogComponent_OnClickCancel__, method, v2);
    byte_4B12545 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_BuyStorageConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_BuyStorageConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_BuyStorageConfirmDialogComponent_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    BuyStorageConfirmDialogComponent__CallOnMenuSelect(this, 0, v6);
  }
}


void __fastcall BuyStorageConfirmDialogComponent__OnClickClose(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B12546 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BuyStorageConfirmDialogComponent_OnClickClose__, method, v2);
    byte_4B12546 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_BuyStorageConfirmDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_BuyStorageConfirmDialogComponent_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_BuyStorageConfirmDialogComponent_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    BuyStorageConfirmDialogComponent__CallOnMenuSelect(this, 0, v6);
  }
}


void __fastcall BuyStorageConfirmDialogComponent__OnClickDecide(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B12544 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BuyStorageConfirmDialogComponent_OnClickDecide__, method, v2);
    byte_4B12544 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_BuyStorageConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_BuyStorageConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_BuyStorageConfirmDialogComponent_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, this->fields.decideSe, 0LL);
    BuyStorageConfirmDialogComponent__CallOnMenuSelect(this, this->fields.buyCount, v6);
  }
}


void __fastcall BuyStorageConfirmDialogComponent__OnEnable(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v9; // x0
  UnityEngine_Transform_o *v10; // x0

  if ( (byte_4B12547 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4752/*"ConfirmWindow/ResultInfo/CloseButton"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_4751/*"ConfirmWindow/Notification/CloseButton"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_4750/*"ConfirmWindow/ConfirmInfo/CancelButton"*/, v6, v7);
    byte_4B12547 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(transform, (System_String_o *)StringLiteral_4750/*"ConfirmWindow/ConfirmInfo/CancelButton"*/, 0LL);
  v9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(v9, (System_String_o *)StringLiteral_4752/*"ConfirmWindow/ResultInfo/CloseButton"*/, 0LL);
  v10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(v10, (System_String_o *)StringLiteral_4751/*"ConfirmWindow/Notification/CloseButton"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1BCAA3C(this, *(_QWORD *)&kind);
    BuyStorageConfirmDialogComponent__Open_33287276(
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
void __fastcall BuyStorageConfirmDialogComponent__Open_33287276(
        BuyStorageConfirmDialogComponent_o *this,
        int32_t kind,
        int32_t type,
        int32_t notificationType,
        ShopEntity_o *shopEntity,
        System_Action_int__o *onMenuSelect,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UISprite_o *itemImage; // x24
  BuyStorageConfirmDialogComponent_o *v18; // x0
  const MethodInfo *v19; // x2
  __int64 v20; // x1
  int32_t CurrencyImageId; // w25
  UserGameEntity_o *SelfUserGame; // x0
  UILabel_o *itemNum; // x25
  UserGameEntity_o *v24; // x24
  const MethodInfo *v25; // x3
  System_String_o *ItemNumText; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x6
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Action_o *v32; // x20

  if ( (byte_4B1253D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&type);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_BuyStorageConfirmDialogComponent_EndOpen__, v15, v16);
    byte_4B1253D = 1;
  }
  BuyStorageConfirmDialogComponent__SetObjectsOnInit(this, kind, type, onMenuSelect, (const MethodInfo *)shopEntity);
  itemImage = this->fields.itemImage;
  CurrencyImageId = BuyStorageConfirmDialogComponent__GetCurrencyImageId(v18, shopEntity, v19);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v20);
  AtlasManager__SetItem(itemImage, CurrencyImageId, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  itemNum = this->fields.itemNum;
  v24 = SelfUserGame;
  ItemNumText = BuyStorageConfirmDialogComponent__GetItemNumText(
                  (BuyStorageConfirmDialogComponent_o *)SelfUserGame,
                  shopEntity,
                  SelfUserGame,
                  v25);
  if ( !itemNum )
    sub_1BCAA3C(ItemNumText, v27);
  UILabel__set_text(itemNum, ItemNumText, 0LL);
  BuyStorageConfirmDialogComponent__SetMessageLabels(this, kind, type, notificationType, shopEntity, v24, v28);
  this->fields.state = 1;
  v32 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v29, v30, v31);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_BuyStorageConfirmDialogComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v32, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1BCAA3C(this, *(_QWORD *)&kind);
    BuyStorageConfirmDialogComponent__Open_33287276(
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
  BuyStorageConfirmDialogComponent_o *CurrencyItemName; // x23
  const MethodInfo *v44; // x6
  System_String_o *v45; // x0
  __int64 v46; // x1
  int32_t v47; // w20
  int32_t setNum; // w27
  int32_t buyCount; // w28
  UILabel_o *titleLabel; // x26
  __int64 *v51; // x8
  int32_t v52; // w22
  UILabel_o *messageLabel; // x24
  __int64 *v54; // x8
  UILabel_o *notificationMessage; // x20
  __int64 *v56; // x8
  int32_t v57; // w8
  UILabel_o *v58; // x21
  __int64 *v59; // x8
  System_String_o *v60; // x25
  int32_t Price; // w0
  Il2CppObject *NumberFormat; // x21
  Il2CppObject *v63; // x0
  UILabel_o *nowNumLabel; // x21
  System_String_o *v65; // x23
  Il2CppObject *v66; // x0
  UILabel_o *afterNumLabel; // x20
  System_String_o *v68; // x21
  Il2CppObject *v69; // x0
  UILabel_o *nowNumTextLabel; // x20
  UILabel_o *afterNumTextLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  UILabel_o *closeBtnLabel; // x19
  __int64 *v74; // x8
  System_String_o *v75; // x22
  Il2CppObject *v76; // x0
  UILabel_o *resultAfterNumLabel; // x21
  System_String_o *v78; // x22
  Il2CppObject *v79; // x0
  UILabel_o *resultAfterNumTextLabel; // x20
  int32_t v81; // [xsp+8h] [xbp-68h] BYREF
  int32_t v82; // [xsp+Ch] [xbp-64h] BYREF
  int32_t max[2]; // [xsp+18h] [xbp-58h] BYREF

  v12 = this;
  if ( (byte_4B12541 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&type);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_11737/*"SERVANT_EQUIP_STORAGE_PURCHASE_RESULT"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_12461/*"STORAGE_SHOP_NOTIFICATION"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_11738/*"SERVANT_EQUIP_STORAGE_PURCHASE_TITLE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_12084/*"SERVANT_STORAGE_PURCHASE_RESULT"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_11745/*"SERVANT_FRAME_PURCHASE_INFO1"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_12462/*"STORAGE_SHOP_SOLD_OUT"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_11746/*"SERVANT_FRAME_PURCHASE_INFO2"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_11742/*"SERVANT_FRAME_PURCHASE_CANCEL"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_12085/*"SERVANT_STORAGE_PURCHASE_TITLE"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_12082/*"SERVANT_STORAGE_PURCHASE_MESSAGE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_11743/*"SERVANT_FRAME_PURCHASE_CLOSE"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_11744/*"SERVANT_FRAME_PURCHASE_DECIDE"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_11736/*"SERVANT_EQUIP_STORAGE_PURCHASE_MESSAGE"*/, v39, v40);
    this = (BuyStorageConfirmDialogComponent_o *)sub_1BCA7E0(&StringLiteral_12083/*"SERVANT_STORAGE_PURCHASE_NUM"*/, v41, v42);
    byte_4B12541 = 1;
  }
  *(_QWORD *)max = 0LL;
  CurrencyItemName = (BuyStorageConfirmDialogComponent_o *)BuyStorageConfirmDialogComponent__GetCurrencyItemName(
                                                             this,
                                                             shopEntity,
                                                             *(const MethodInfo **)&type);
  BuyStorageConfirmDialogComponent__SetStorageNum(CurrencyItemName, kind, shopEntity, userGameEntity, &max[1], max, v44);
  if ( !shopEntity )
    goto LABEL_66;
  v47 = max[1];
  setNum = shopEntity->fields.setNum;
  buyCount = v12->fields.buyCount;
  if ( kind )
  {
    if ( kind != 1 )
      goto LABEL_14;
    titleLabel = v12->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
    v51 = &StringLiteral_11738/*"SERVANT_EQUIP_STORAGE_PURCHASE_TITLE"*/;
  }
  else
  {
    titleLabel = v12->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
    v51 = &StringLiteral_12085/*"SERVANT_STORAGE_PURCHASE_TITLE"*/;
  }
  v45 = LocalizationManager__Get((System_String_o *)*v51, 0LL);
  if ( !titleLabel )
    goto LABEL_66;
  UILabel__set_text(titleLabel, v45, 0LL);
LABEL_14:
  if ( type == 2 )
  {
    if ( notificationType == 2 )
    {
      notificationMessage = v12->fields.notificationMessage;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
      v56 = &StringLiteral_12461/*"STORAGE_SHOP_NOTIFICATION"*/;
    }
    else
    {
      if ( notificationType != 1 )
      {
LABEL_50:
        closeBtnLabel = v12->fields.closeBtnLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
        goto LABEL_62;
      }
      notificationMessage = v12->fields.notificationMessage;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
      v56 = &StringLiteral_12462/*"STORAGE_SHOP_SOLD_OUT"*/;
    }
    v45 = LocalizationManager__Get((System_String_o *)*v56, 0LL);
    if ( !notificationMessage )
      goto LABEL_66;
    UILabel__set_text(notificationMessage, v45, 0LL);
    goto LABEL_50;
  }
  if ( type != 1 )
  {
    if ( type )
      return;
    v52 = v47 + buyCount * setNum;
    if ( kind )
    {
      if ( kind != 1 )
      {
LABEL_39:
        nowNumTextLabel = v12->fields.nowNumTextLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
        v45 = LocalizationManager__Get((System_String_o *)StringLiteral_11745/*"SERVANT_FRAME_PURCHASE_INFO1"*/, 0LL);
        if ( nowNumTextLabel )
        {
          UILabel__set_text(nowNumTextLabel, v45, 0LL);
          afterNumTextLabel = v12->fields.afterNumTextLabel;
          v45 = LocalizationManager__Get((System_String_o *)StringLiteral_11746/*"SERVANT_FRAME_PURCHASE_INFO2"*/, 0LL);
          if ( afterNumTextLabel )
          {
            UILabel__set_text(afterNumTextLabel, v45, 0LL);
            decideBtnLabel = v12->fields.decideBtnLabel;
            v45 = LocalizationManager__Get((System_String_o *)StringLiteral_11744/*"SERVANT_FRAME_PURCHASE_DECIDE"*/, 0LL);
            if ( decideBtnLabel )
            {
              UILabel__set_text(decideBtnLabel, v45, 0LL);
              closeBtnLabel = v12->fields.cancelBtnLabel;
              v74 = &StringLiteral_11742/*"SERVANT_FRAME_PURCHASE_CANCEL"*/;
              goto LABEL_63;
            }
          }
        }
LABEL_66:
        sub_1BCAA3C(v45, v46);
      }
      messageLabel = v12->fields.messageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
      v54 = &StringLiteral_11736/*"SERVANT_EQUIP_STORAGE_PURCHASE_MESSAGE"*/;
    }
    else
    {
      messageLabel = v12->fields.messageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
      v54 = &StringLiteral_12082/*"SERVANT_STORAGE_PURCHASE_MESSAGE"*/;
    }
    v60 = LocalizationManager__Get((System_String_o *)*v54, 0LL);
    Price = ShopEntity__GetPrice(shopEntity, 0LL);
    NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v12->fields.buyCount * Price, 0LL);
    v82 = max[0];
    v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82);
    v45 = System_String__Format_62415660(v60, (Il2CppObject *)CurrencyItemName, NumberFormat, v63, 0LL);
    if ( !messageLabel )
      goto LABEL_66;
    UILabel__set_text(messageLabel, v45, 0LL);
    nowNumLabel = v12->fields.nowNumLabel;
    v65 = LocalizationManager__Get((System_String_o *)StringLiteral_12083/*"SERVANT_STORAGE_PURCHASE_NUM"*/, 0LL);
    v66 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v47, 0LL);
    v45 = System_String__Format(v65, v66, 0LL);
    if ( !nowNumLabel )
      goto LABEL_66;
    UILabel__set_text(nowNumLabel, v45, 0LL);
    afterNumLabel = v12->fields.afterNumLabel;
    v68 = LocalizationManager__Get((System_String_o *)StringLiteral_12083/*"SERVANT_STORAGE_PURCHASE_NUM"*/, 0LL);
    v69 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v52, 0LL);
    v45 = System_String__Format(v68, v69, 0LL);
    if ( !afterNumLabel )
      goto LABEL_66;
    UILabel__set_text(afterNumLabel, v45, 0LL);
    goto LABEL_39;
  }
  v57 = v12->fields.kind;
  if ( v57 == 1 )
  {
    v58 = v12->fields.messageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
    v59 = &StringLiteral_11737/*"SERVANT_EQUIP_STORAGE_PURCHASE_RESULT"*/;
    goto LABEL_55;
  }
  if ( !v57 )
  {
    v58 = v12->fields.messageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
    v59 = &StringLiteral_12084/*"SERVANT_STORAGE_PURCHASE_RESULT"*/;
LABEL_55:
    v75 = LocalizationManager__Get((System_String_o *)*v59, 0LL);
    v82 = max[0];
    v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82);
    v45 = System_String__Format(v75, v76, 0LL);
    if ( !v58 )
      goto LABEL_66;
    UILabel__set_text(v58, v45, 0LL);
    resultAfterNumLabel = v12->fields.resultAfterNumLabel;
    v78 = LocalizationManager__Get((System_String_o *)StringLiteral_12083/*"SERVANT_STORAGE_PURCHASE_NUM"*/, 0LL);
    v81 = v47;
    v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81);
    v45 = System_String__Format(v78, v79, 0LL);
    if ( !resultAfterNumLabel )
      goto LABEL_66;
    UILabel__set_text(resultAfterNumLabel, v45, 0LL);
  }
  resultAfterNumTextLabel = v12->fields.resultAfterNumTextLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_11745/*"SERVANT_FRAME_PURCHASE_INFO1"*/, 0LL);
  if ( !resultAfterNumTextLabel )
    goto LABEL_66;
  UILabel__set_text(resultAfterNumTextLabel, v45, 0LL);
  closeBtnLabel = v12->fields.closeBtnLabel;
LABEL_62:
  v74 = &StringLiteral_11743/*"SERVANT_FRAME_PURCHASE_CLOSE"*/;
LABEL_63:
  v45 = LocalizationManager__Get((System_String_o *)*v74, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_66;
  UILabel__set_text(closeBtnLabel, v45, 0LL);
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
  sub_1BCA784(
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
    sub_1BCAA3C(gameObject, v11);
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

  if ( (byte_4B12542 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&kind, shopEntity);
    byte_4B12542 = 1;
  }
  if ( kind == 1 )
  {
    v12 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&kind);
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
    sub_1BCAA3C(v12, *(_QWORD *)&kind);
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
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&kind);
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