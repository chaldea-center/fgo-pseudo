void __fastcall BuyStorageConfirmDialogComponent___ctor(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A0509B & 1) == 0 )
  {
    sub_1B686D4(&BaseDialog_TypeInfo, method);
    byte_4A0509B = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall BuyStorageConfirmDialogComponent__CallOnClose(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_onClose; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *onClose; // t1

  onClose = this->fields.onClose;
  p_onClose = (ServantStatusBattleListViewItem_o *)&this->fields.onClose;
  v5 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0LL;
    sub_1B68678(p_onClose, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall BuyStorageConfirmDialogComponent__CallOnMenuSelect(
        BuyStorageConfirmDialogComponent_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_onMenuSelect; // x0
  struct System_Action_int__o *v5; // x20
  struct System_Action_int__o *onMenuSelect; // t1

  onMenuSelect = this->fields.onMenuSelect;
  p_onMenuSelect = (ServantStatusBattleListViewItem_o *)&this->fields.onMenuSelect;
  v5 = onMenuSelect;
  if ( onMenuSelect )
  {
    p_onMenuSelect->klass = 0LL;
    sub_1B68678(p_onMenuSelect, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      (unsigned int)buyCount,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall BuyStorageConfirmDialogComponent__Close(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BuyStorageConfirmDialogComponent__Close_32397552(this, 0LL, v2);
}


void __fastcall BuyStorageConfirmDialogComponent__Close_32397552(
        BuyStorageConfirmDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A05096 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, callback);
    sub_1B686D4(&Method_BuyStorageConfirmDialogComponent_EndClose__, v6);
    byte_4A05096 = 1;
  }
  this->fields.onClose = callback;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.onClose, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BuyStorageConfirmDialogComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
  struct System_Int32_array *itemIds; // x8

  if ( (byte_4A05092 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity);
    sub_1B686D4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4);
    this = (BuyStorageConfirmDialogComponent_o *)sub_1B686D4(
                                                   &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                   v5);
    byte_4A05092 = 1;
  }
  if ( !shopEntity )
LABEL_16:
    sub_1B68930(this, shopEntity);
  result = 18;
  switch ( shopEntity->fields.payType )
  {
    case 4:
      return 7;
    case 6:
    case 0xB:
      this = (BuyStorageConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_16;
      this = (BuyStorageConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ItemMaster___);
      itemIds = shopEntity->fields.itemIds;
      if ( !itemIds )
        goto LABEL_16;
      if ( !itemIds->max_length )
        sub_1B68938(this, shopEntity);
      if ( !this )
        goto LABEL_16;
      this = (BuyStorageConfirmDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     itemIds->m_Items[1],
                                                     (const MethodInfo_30E44C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Int32_array *itemIds; // x8
  System_String_o *result; // x0
  __int64 *v14; // x8

  if ( (byte_4A05091 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity);
    sub_1B686D4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4);
    sub_1B686D4(&LocalizationManager_TypeInfo, v5);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B686D4(&StringLiteral_12220/*"STONE_FRAGMENTS_NEED_INFO"*/, v7);
    sub_1B686D4(&StringLiteral_2074/*"ANONYMOUS_NEED_INFO"*/, v8);
    sub_1B686D4(&StringLiteral_10904/*"RARE_PRI_NEED_INFO"*/, v9);
    sub_1B686D4(&StringLiteral_8472/*"MANA_NEED_INFO"*/, v10);
    this = (BuyStorageConfirmDialogComponent_o *)sub_1B686D4(&StringLiteral_1/*""*/, v11);
    byte_4A05091 = 1;
  }
  if ( !shopEntity )
LABEL_25:
    sub_1B68930(this, shopEntity);
  switch ( shopEntity->fields.payType )
  {
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_8472/*"MANA_NEED_INFO"*/;
      goto LABEL_24;
    case 6:
    case 0xB:
      this = (BuyStorageConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_25;
      this = (BuyStorageConfirmDialogComponent_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ItemMaster___);
      itemIds = shopEntity->fields.itemIds;
      if ( !itemIds )
        goto LABEL_25;
      if ( !itemIds->max_length )
        sub_1B68938(this, shopEntity);
      if ( !this )
        goto LABEL_25;
      this = (BuyStorageConfirmDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     itemIds->m_Items[1],
                                                     (const MethodInfo_30E44C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_25;
      result = (System_String_o *)this->fields.m_CancellationTokenSource;
      break;
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_12220/*"STONE_FRAGMENTS_NEED_INFO"*/;
      goto LABEL_24;
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_2074/*"ANONYMOUS_NEED_INFO"*/;
      goto LABEL_24;
    case 0xA:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_10904/*"RARE_PRI_NEED_INFO"*/;
LABEL_24:
      result = LocalizationManager__Get((System_String_o *)*v14, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  unsigned int payType; // w8
  Il2CppObject *MasterData_object; // x20
  struct System_Int32_array *itemIds; // x8
  int32_t m_CancellationTokenSource_high; // w19
  LocalizationManager_c *v14; // x0

  if ( (byte_4A05093 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserItemMaster___, shopEntity);
    sub_1B686D4(&LocalizationManager_TypeInfo, v6);
    sub_1B686D4(&NetworkManager_TypeInfo, v7);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    this = (BuyStorageConfirmDialogComponent_o *)sub_1B686D4(&StringLiteral_1/*""*/, v9);
    byte_4A05093 = 1;
  }
  if ( !shopEntity )
    goto LABEL_25;
  payType = shopEntity->fields.payType;
  if ( payType <= 0xB )
  {
    if ( ((1 << payType) & 0xB40) != 0 )
    {
      this = (BuyStorageConfirmDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (BuyStorageConfirmDialogComponent_o *)NetworkManager__get_UserId(0LL);
        itemIds = shopEntity->fields.itemIds;
        if ( itemIds )
        {
          if ( !itemIds->max_length )
            sub_1B68938(this, shopEntity);
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
                v14 = LocalizationManager_TypeInfo;
LABEL_22:
                j_il2cpp_runtime_class_init_0(v14);
              }
              return LocalizationManager__GetNumberFormat(m_CancellationTokenSource_high, 0LL);
            }
          }
        }
      }
LABEL_25:
      sub_1B68930(this, shopEntity);
    }
    if ( payType == 4 )
    {
      if ( !userGameEntity )
        goto LABEL_25;
      v14 = LocalizationManager_TypeInfo;
      m_CancellationTokenSource_high = userGameEntity->fields.mana;
LABEL_21:
      if ( !v14->_2.cctor_finished )
        goto LABEL_22;
      return LocalizationManager__GetNumberFormat(m_CancellationTokenSource_high, 0LL);
    }
    if ( payType == 10 )
    {
      if ( !userGameEntity )
        goto LABEL_25;
      v14 = LocalizationManager_TypeInfo;
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
  UILabel_o *titleLabel; // x0

  if ( (byte_4A0508F & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_1/*""*/, method);
    byte_4A0508F = 1;
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
    sub_1B68930(titleLabel, method);
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
      sub_1B68930(this, kind);
    BuyStorageConfirmDialogComponent__Open_32393928(
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

  if ( (byte_4A05098 & 1) == 0 )
  {
    sub_1B686D4(&Method_BuyStorageConfirmDialogComponent_OnClickCancel__, method);
    byte_4A05098 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_BuyStorageConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_BuyStorageConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B686EC(Method_BuyStorageConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
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

  if ( (byte_4A05099 & 1) == 0 )
  {
    sub_1B686D4(&Method_BuyStorageConfirmDialogComponent_OnClickClose__, method);
    byte_4A05099 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_BuyStorageConfirmDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_BuyStorageConfirmDialogComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B686EC(Method_BuyStorageConfirmDialogComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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

  if ( (byte_4A05097 & 1) == 0 )
  {
    sub_1B686D4(&Method_BuyStorageConfirmDialogComponent_OnClickDecide__, method);
    byte_4A05097 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_BuyStorageConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_BuyStorageConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B686EC(Method_BuyStorageConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.decideSe, 0LL);
    BuyStorageConfirmDialogComponent__CallOnMenuSelect(this, this->fields.buyCount, v5);
  }
}


void __fastcall BuyStorageConfirmDialogComponent__OnEnable(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v6; // x0
  UnityEngine_Transform_o *v7; // x0

  if ( (byte_4A0509A & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_4660/*"ConfirmWindow/ResultInfo/CloseButton"*/, method);
    sub_1B686D4(&StringLiteral_4659/*"ConfirmWindow/Notification/CloseButton"*/, v3);
    sub_1B686D4(&StringLiteral_4658/*"ConfirmWindow/ConfirmInfo/CancelButton"*/, v4);
    byte_4A0509A = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41516588(transform, (System_String_o *)StringLiteral_4658/*"ConfirmWindow/ConfirmInfo/CancelButton"*/, 0LL);
  v6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41516588(v6, (System_String_o *)StringLiteral_4660/*"ConfirmWindow/ResultInfo/CloseButton"*/, 0LL);
  v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41516588(v7, (System_String_o *)StringLiteral_4659/*"ConfirmWindow/Notification/CloseButton"*/, 0LL);
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
      sub_1B68930(this, kind);
    BuyStorageConfirmDialogComponent__Open_32393928(
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
void __fastcall BuyStorageConfirmDialogComponent__Open_32393928(
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
  __int64 v24; // x1
  const MethodInfo *v25; // x6
  System_Action_o *v26; // x20

  if ( (byte_4A05090 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B686D4(&AtlasManager_TypeInfo, v13);
    sub_1B686D4(&Method_BuyStorageConfirmDialogComponent_EndOpen__, v14);
    byte_4A05090 = 1;
  }
  BuyStorageConfirmDialogComponent__SetObjectsOnInit(this, kind, type, onMenuSelect, (const MethodInfo *)shopEntity);
  itemImage = this->fields.itemImage;
  CurrencyImageId = BuyStorageConfirmDialogComponent__GetCurrencyImageId(v16, shopEntity, v17);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
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
    sub_1B68930(ItemNumText, v24);
  UILabel__set_text(itemNum, ItemNumText, 0LL);
  BuyStorageConfirmDialogComponent__SetMessageLabels(this, kind, type, notificationType, shopEntity, v21, v25);
  this->fields.state = 1;
  v26 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_BuyStorageConfirmDialogComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0LL);
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
      sub_1B68930(this, kind);
    BuyStorageConfirmDialogComponent__Open_32393928(
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
  BuyStorageConfirmDialogComponent_o *CurrencyItemName; // x23
  const MethodInfo *v29; // x6
  System_String_o *v30; // x0
  __int64 v31; // x1
  int32_t v32; // w20
  int32_t setNum; // w27
  int32_t buyCount; // w28
  UILabel_o *titleLabel; // x26
  __int64 *v36; // x8
  int32_t v37; // w22
  UILabel_o *messageLabel; // x24
  __int64 *v39; // x8
  UILabel_o *notificationMessage; // x20
  __int64 *v41; // x8
  int32_t v42; // w8
  UILabel_o *v43; // x21
  __int64 *v44; // x8
  System_String_o *v45; // x25
  int32_t Price; // w0
  Il2CppObject *NumberFormat; // x21
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  Il2CppObject *v51; // x0
  UILabel_o *nowNumLabel; // x21
  System_String_o *v53; // x23
  Il2CppObject *v54; // x0
  UILabel_o *afterNumLabel; // x20
  System_String_o *v56; // x21
  Il2CppObject *v57; // x0
  UILabel_o *nowNumTextLabel; // x20
  UILabel_o *afterNumTextLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  UILabel_o *closeBtnLabel; // x19
  __int64 *v62; // x8
  System_String_o *v63; // x22
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  Il2CppObject *v67; // x0
  UILabel_o *resultAfterNumLabel; // x21
  System_String_o *v69; // x22
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  Il2CppObject *v73; // x0
  UILabel_o *resultAfterNumTextLabel; // x20
  int32_t v75; // [xsp+8h] [xbp-68h] BYREF
  int32_t v76; // [xsp+Ch] [xbp-64h] BYREF
  int32_t max[2]; // [xsp+18h] [xbp-58h] BYREF

  v12 = this;
  if ( (byte_4A05094 & 1) == 0 )
  {
    sub_1B686D4(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B686D4(&LocalizationManager_TypeInfo, v13);
    sub_1B686D4(&StringLiteral_11549/*"SERVANT_EQUIP_STORAGE_PURCHASE_RESULT"*/, v14);
    sub_1B686D4(&StringLiteral_12255/*"STORAGE_SHOP_NOTIFICATION"*/, v15);
    sub_1B686D4(&StringLiteral_11550/*"SERVANT_EQUIP_STORAGE_PURCHASE_TITLE"*/, v16);
    sub_1B686D4(&StringLiteral_11896/*"SERVANT_STORAGE_PURCHASE_RESULT"*/, v17);
    sub_1B686D4(&StringLiteral_11557/*"SERVANT_FRAME_PURCHASE_INFO1"*/, v18);
    sub_1B686D4(&StringLiteral_12256/*"STORAGE_SHOP_SOLD_OUT"*/, v19);
    sub_1B686D4(&StringLiteral_11558/*"SERVANT_FRAME_PURCHASE_INFO2"*/, v20);
    sub_1B686D4(&StringLiteral_11554/*"SERVANT_FRAME_PURCHASE_CANCEL"*/, v21);
    sub_1B686D4(&StringLiteral_11897/*"SERVANT_STORAGE_PURCHASE_TITLE"*/, v22);
    sub_1B686D4(&StringLiteral_11894/*"SERVANT_STORAGE_PURCHASE_MESSAGE"*/, v23);
    sub_1B686D4(&StringLiteral_11555/*"SERVANT_FRAME_PURCHASE_CLOSE"*/, v24);
    sub_1B686D4(&StringLiteral_11556/*"SERVANT_FRAME_PURCHASE_DECIDE"*/, v25);
    sub_1B686D4(&StringLiteral_11548/*"SERVANT_EQUIP_STORAGE_PURCHASE_MESSAGE"*/, v26);
    this = (BuyStorageConfirmDialogComponent_o *)sub_1B686D4(&StringLiteral_11895/*"SERVANT_STORAGE_PURCHASE_NUM"*/, v27);
    byte_4A05094 = 1;
  }
  *(_QWORD *)max = 0LL;
  CurrencyItemName = (BuyStorageConfirmDialogComponent_o *)BuyStorageConfirmDialogComponent__GetCurrencyItemName(
                                                             this,
                                                             shopEntity,
                                                             *(const MethodInfo **)&type);
  BuyStorageConfirmDialogComponent__SetStorageNum(CurrencyItemName, kind, shopEntity, userGameEntity, &max[1], max, v29);
  if ( !shopEntity )
    goto LABEL_66;
  v32 = max[1];
  setNum = shopEntity->fields.setNum;
  buyCount = v12->fields.buyCount;
  if ( kind )
  {
    if ( kind != 1 )
      goto LABEL_14;
    titleLabel = v12->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v36 = &StringLiteral_11550/*"SERVANT_EQUIP_STORAGE_PURCHASE_TITLE"*/;
  }
  else
  {
    titleLabel = v12->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v36 = &StringLiteral_11897/*"SERVANT_STORAGE_PURCHASE_TITLE"*/;
  }
  v30 = LocalizationManager__Get((System_String_o *)*v36, 0LL);
  if ( !titleLabel )
    goto LABEL_66;
  UILabel__set_text(titleLabel, v30, 0LL);
LABEL_14:
  if ( type == 2 )
  {
    if ( notificationType == 2 )
    {
      notificationMessage = v12->fields.notificationMessage;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v41 = &StringLiteral_12255/*"STORAGE_SHOP_NOTIFICATION"*/;
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
      v41 = &StringLiteral_12256/*"STORAGE_SHOP_SOLD_OUT"*/;
    }
    v30 = LocalizationManager__Get((System_String_o *)*v41, 0LL);
    if ( !notificationMessage )
      goto LABEL_66;
    UILabel__set_text(notificationMessage, v30, 0LL);
    goto LABEL_50;
  }
  if ( type != 1 )
  {
    if ( type )
      return;
    v37 = v32 + buyCount * setNum;
    if ( kind )
    {
      if ( kind != 1 )
      {
LABEL_39:
        nowNumTextLabel = v12->fields.nowNumTextLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11557/*"SERVANT_FRAME_PURCHASE_INFO1"*/, 0LL);
        if ( nowNumTextLabel )
        {
          UILabel__set_text(nowNumTextLabel, v30, 0LL);
          afterNumTextLabel = v12->fields.afterNumTextLabel;
          v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11558/*"SERVANT_FRAME_PURCHASE_INFO2"*/, 0LL);
          if ( afterNumTextLabel )
          {
            UILabel__set_text(afterNumTextLabel, v30, 0LL);
            decideBtnLabel = v12->fields.decideBtnLabel;
            v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11556/*"SERVANT_FRAME_PURCHASE_DECIDE"*/, 0LL);
            if ( decideBtnLabel )
            {
              UILabel__set_text(decideBtnLabel, v30, 0LL);
              closeBtnLabel = v12->fields.cancelBtnLabel;
              v62 = &StringLiteral_11554/*"SERVANT_FRAME_PURCHASE_CANCEL"*/;
              goto LABEL_63;
            }
          }
        }
LABEL_66:
        sub_1B68930(v30, v31);
      }
      messageLabel = v12->fields.messageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v39 = &StringLiteral_11548/*"SERVANT_EQUIP_STORAGE_PURCHASE_MESSAGE"*/;
    }
    else
    {
      messageLabel = v12->fields.messageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v39 = &StringLiteral_11894/*"SERVANT_STORAGE_PURCHASE_MESSAGE"*/;
    }
    v45 = LocalizationManager__Get((System_String_o *)*v39, 0LL);
    Price = ShopEntity__GetPrice(shopEntity, 0LL);
    NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v12->fields.buyCount * Price, 0LL);
    v76 = max[0];
    v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76, v48, v49, v50);
    v30 = System_String__Format_61433908(v45, (Il2CppObject *)CurrencyItemName, NumberFormat, v51, 0LL);
    if ( !messageLabel )
      goto LABEL_66;
    UILabel__set_text(messageLabel, v30, 0LL);
    nowNumLabel = v12->fields.nowNumLabel;
    v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11895/*"SERVANT_STORAGE_PURCHASE_NUM"*/, 0LL);
    v54 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v32, 0LL);
    v30 = System_String__Format(v53, v54, 0LL);
    if ( !nowNumLabel )
      goto LABEL_66;
    UILabel__set_text(nowNumLabel, v30, 0LL);
    afterNumLabel = v12->fields.afterNumLabel;
    v56 = LocalizationManager__Get((System_String_o *)StringLiteral_11895/*"SERVANT_STORAGE_PURCHASE_NUM"*/, 0LL);
    v57 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v37, 0LL);
    v30 = System_String__Format(v56, v57, 0LL);
    if ( !afterNumLabel )
      goto LABEL_66;
    UILabel__set_text(afterNumLabel, v30, 0LL);
    goto LABEL_39;
  }
  v42 = v12->fields.kind;
  if ( v42 == 1 )
  {
    v43 = v12->fields.messageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v44 = &StringLiteral_11549/*"SERVANT_EQUIP_STORAGE_PURCHASE_RESULT"*/;
    goto LABEL_55;
  }
  if ( !v42 )
  {
    v43 = v12->fields.messageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v44 = &StringLiteral_11896/*"SERVANT_STORAGE_PURCHASE_RESULT"*/;
LABEL_55:
    v63 = LocalizationManager__Get((System_String_o *)*v44, 0LL);
    v76 = max[0];
    v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76, v64, v65, v66);
    v30 = System_String__Format(v63, v67, 0LL);
    if ( !v43 )
      goto LABEL_66;
    UILabel__set_text(v43, v30, 0LL);
    resultAfterNumLabel = v12->fields.resultAfterNumLabel;
    v69 = LocalizationManager__Get((System_String_o *)StringLiteral_11895/*"SERVANT_STORAGE_PURCHASE_NUM"*/, 0LL);
    v75 = v32;
    v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v75, v70, v71, v72);
    v30 = System_String__Format(v69, v73, 0LL);
    if ( !resultAfterNumLabel )
      goto LABEL_66;
    UILabel__set_text(resultAfterNumLabel, v30, 0LL);
  }
  resultAfterNumTextLabel = v12->fields.resultAfterNumTextLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11557/*"SERVANT_FRAME_PURCHASE_INFO1"*/, 0LL);
  if ( !resultAfterNumTextLabel )
    goto LABEL_66;
  UILabel__set_text(resultAfterNumTextLabel, v30, 0LL);
  closeBtnLabel = v12->fields.closeBtnLabel;
LABEL_62:
  v62 = &StringLiteral_11555/*"SERVANT_FRAME_PURCHASE_CLOSE"*/;
LABEL_63:
  v30 = LocalizationManager__Get((System_String_o *)*v62, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_66;
  UILabel__set_text(closeBtnLabel, v30, 0LL);
}


void __fastcall BuyStorageConfirmDialogComponent__SetObjectsOnInit(
        BuyStorageConfirmDialogComponent_o *this,
        int32_t kind,
        int32_t type,
        System_Action_int__o *onMenuSelect,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1

  this->fields.kind = kind;
  this->fields.onMenuSelect = onMenuSelect;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.onMenuSelect,
    (int32_t)onMenuSelect,
    type,
    (int32_t)onMenuSelect);
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
    sub_1B68930(gameObject, v8);
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

  if ( (byte_4A05095 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    byte_4A05095 = 1;
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
    sub_1B68930(v12, *(_QWORD *)&kind);
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